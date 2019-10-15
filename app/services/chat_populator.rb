class ChatPopulator
  def self.populate
    chats_to_populate.each do |chat_id|
      Chat.create(name: chat_name(chat_id), telegram_chat_id: chat_id)
    end
  end

  class << self
    private

    def chats_to_populate
      TELEGRAM_CLI.get_chats.value.chat_ids - Chat.pluck(:telegram_chat_id).map(&:to_i)
    end

    def chat_name(chat_id)
      TELEGRAM_CLI.get_chat(chat_id).value.title
    end
  end
end
