class ChatPopulator
  def self.populate(user_id)
    chats_to_populate(user_id).each do |chat_id|
      Chat.create(name: chat_name(chat_id), telegram_chat_id: chat_id, user_id: user_id)
    end
  end

  class << self
    private

    def chats_to_populate(user_id)
      TELEGRAM_CLI.get_chats.value.chat_ids - Chat.where(user_id: user_id).pluck(:telegram_chat_id).map(&:to_i)
    end

    def chat_name(chat_id)
      TELEGRAM_CLI.get_chat(chat_id).value.title
    end
  end
end
