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

    def get_updates(telegram_params)
      p "INSIDE"
      p telegram_params
      message = telegram_params[:message] || telegram_params[:channel_post]
      p message
      return if TelegramMessage.where(chat_message_id: message[:message_id]).count > 0 || message[:text].nil?

      TelegramMessage.create(chat_message_id: message[:message_id], body: message[:text])

      # message_ids = TelegramMessage.where("created_at > (?)", Time.current.days_ago(1)).pluck(:chat_message_id)
      #
      # bot.get_updates["result"].each do |chat_message|
      #   message = chat_message["message"] || chat_message["channel_post"]
      #   next if message_ids.include?(message["message_id"]) || message["text"].nil?
      #
      #   TelegramMessage.create(chat_message_id: message["message_id"], body: message["text"])
      # end
    end
  end
end
