require 'telegram/bot'

module Telegram
  class RubyBot
    attr_reader :bot

    def initialize(token)
      @bot = Telegram::Bot::Client.new(token)
    end

    def send_message(chat_id, text)
      bot.send_message(chat_id: chat_id, text: text)
    end
  end
end
