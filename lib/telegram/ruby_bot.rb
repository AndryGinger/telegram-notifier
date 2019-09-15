require 'telegram/bot'

module Telegram
  class RubyBot
    attr_reader :bot

    def initialize(token)
      @bot = Telegram::Bot::Client.new(token)
    end

    def send_message(message)
      response = if message.attachment?
        bot.send_photo(chat_id: message.chat_id, photo: File.open(message.attachment.file.file), caption: message.body)
      else
        bot.send_message(chat_id: message.chat_id, text: message.body)
      end
      message.update_attributes(sent_at: Time.current) if response['ok']
    end

    def get_updates(telegram_params)
      p "INSIDE"
      p telegram_params
      message = telegram_params[:message] || telegram_params[:channel_post]
      p message
      return if TelegramMessage.where(chat_message_id: message[:message_id]).count > 0 || message[:text].nil?

      telegram_attributes = { chat_message_id: message[:message_id], body: message[:text] }
      if message['photo']
        photo = message['photo'].last
        telegram_attributes[:remote_attachment_url] = attachment_url(photo['file_id'])
        telegram_attributes[:body] = photo['caption']
      end

      TelegramMessage.create(telegram_attributes)
    end

    private

    def attachment_url(file_id)
      file_path = HTTPI.get("https://api.telegram.org/bot#{bot.token}/getFile?file_id=#{file_id}")['file_path']
      "https://api.telegram.org/file/bot#{bot.token}/#{file_path}"
    end
  end
end
