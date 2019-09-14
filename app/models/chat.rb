class Chat < ApplicationRecord
  validates :name, :telegram_chat_id, presence: true
end
