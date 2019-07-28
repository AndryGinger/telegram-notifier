require 'telegram/bot'

module Telegram
  class RubyBot
    attr_reader :bot

    def initialize(token)
      @bot = Telegram::Bot::Client.new(token)
    end

    def send_message(message)
      response = bot.send_message(chat_id: message.chat_id, text: message.body)
      message.update_attributes(sent_at: Time.current) if response['ok']
    end
  end
end
