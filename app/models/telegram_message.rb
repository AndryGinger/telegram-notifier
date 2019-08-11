class TelegramMessage < ApplicationRecord
  validates :body, :chat_id, presence: true

  scope :ready_to_send, -> { where("send_at <= :time_current AND sent_at IS NULL", time_current: Time.current) }
end
