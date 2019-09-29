require 'tdlib-ruby'

module Telegram
  class Client
    def initialize(client)
      @client = client
    end

    def send_message(message)
      response = @client.send_message(message.chat_id, message_content(message.body)).wait
      message.update_attributes(sent_at: Time.current) if response.result.first
    end

    private

    def message_content(content)
      formatted_text = TD::Types::FormattedText.new(text: content, entities: [])
      TD::Types::InputMessageContent::Text.new(text: formatted_text,
                                               disable_web_page_preview: false,
                                               clear_draft: false)
    end

    def method_missing(m, *args, &block)
      puts "Delegating #{m} to TD Client"
      @client.send(m, *args, &block)
    end
  end
end
