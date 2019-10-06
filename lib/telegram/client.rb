require 'tdlib-ruby'

module Telegram
  class Client
    def initialize
      init_td_client
    end

    def authorize(api_id, api_hash)
      TD.configure do |config|
        config.client.api_id = api_id
        config.client.api_hash = api_hash
      end

      @client.dispose
      init_td_client
    end

    def ready?
      get_authorization_state.value.class == TD::Types::AuthorizationState::Ready
    end

    def send_message(message)
      @client.get_chats.wait
      p response = @client.send_message(message.chat_id, message_content(message)).wait
      message.update_attributes(sent_at: Time.current) if response.result.first
    end

    def create_telegram_message(message)
      chat = Chat.find_by(telegram_chat_id: message.chat_id)
      # TODO comment required for production
      return unless chat&.subscribed? #&& message.sender_user_id != @client.get_me.value.id

      content = message.content.attributes

      telegram_attributes = { attachment_attributes: {} }.tap do |attrs|
        if content[:photo]
          photo = content[:photo].sizes.last

          attrs[:attachment_attributes][:attachment_id] = photo.photo.id
          attrs[:attachment_attributes][:attachment_type] = :photo
          attrs[:body] = content[:caption].text

          @client.download_file(photo.photo.id)
        elsif content[:document]
          document = content[:document].document

          attrs[:attachment_attributes][:attachment_id] = document.id
          attrs[:attachment_attributes][:attachment_type] = :document
          attrs[:body] = content[:caption].text

          @client.download_file(document.id)
        elsif content[:text]
          attrs[:body] = content[:text].text
        end
      end

      TelegramMessage.create!(telegram_attributes)
    end

    def upload_downloaded_file(file)
      local_file = file.local
      return unless local_file.is_downloading_completed && local_file.can_be_downloaded

      file_to_save = Pathname.new(local_file.path).open
      Attachment.where(attachment_id: file.id).each do |tm|
        tm.attachment = file_to_save
        tm.save
      end

      File.delete(local_file.path) if File.exist?(local_file.path)
    end

    private

    def message_content(message)
      content = formatted_text(message.body)

      if attachment = message.attachment
        local_file = TD::Types::InputFile::Local.new(path: attachment.attachment.path)

        if attachment.photo? || attachment.attachment_type.nil? && attachment.attachment.is_image?
          thumb = attachment.attachment.thumb
          TD::Types::InputMessageContent::Photo.new(
            photo: local_file,
            thumbnail: TD::Types::InputThumbnail.new(
              thumbnail: TD::Types::InputFile::Local.new(path: thumb.path),
              width: thumb.width,
              height: thumb.height
            ),
            added_sticker_file_ids: [0],
            width: attachment.width,
            height: attachment.height,
            caption: content,
            ttl: 0
          )
        else
          TD::Types::InputMessageContent::Document.new(document: local_file, caption: content)
        end
      else
        TD::Types::InputMessageContent::Text.new(text: content,
                                                 disable_web_page_preview: false,
                                                 clear_draft: false)
      end
    end

    def formatted_text(content)
      TD::Types::FormattedText.new(text: content, entities: [])
    end

    def init_td_client
      @client = TD::Client.new

      setup_handlers
      @client.connect
    end

    def setup_handlers
      @client.on(TD::Types::Update::NewMessage) do |update|
        TELEGRAM_CLI.create_telegram_message(update.message)
      end

      @client.on(TD::Types::Update::File) do |update|
        TELEGRAM_CLI.upload_downloaded_file(update.file)
      end
    end

    def method_missing(m, *args, &block)
      puts "Delegating #{m} to TD Client"
      @client.send(m, *args, &block)
    end
  end
end
