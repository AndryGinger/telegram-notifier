class TelegramMessage < ApplicationRecord
  paginates_per 10

  has_one :attachment, inverse_of: :telegram_message
  accepts_nested_attributes_for :attachment, allow_destroy: true

  delegate :attachment_url, to: :attachment

  scope :ready_to_send, -> {
    where("send_at <= (?) AND sent_at IS NULL AND chat_id IS NOT NULL AND
          (body IS NOT NULL OR attachment IS NOT NULL)", Time.current) }
end
