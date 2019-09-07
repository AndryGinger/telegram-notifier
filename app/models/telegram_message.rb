class TelegramMessage < ApplicationRecord
  validates :body, presence: true

  scope :ready_to_send, -> { where("send_at <= (?) AND sent_at IS NULL AND chat_id IS NOT NULL", Time.current) }
end
