class Chat < ApplicationRecord
  paginates_per 10

  validates :name, :telegram_chat_id, presence: true
end
