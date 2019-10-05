class TelegramMessage < ApplicationRecord
  mount_uploader :attachment, AttachmentUploader

  paginates_per 10

  scope :ready_to_send, -> {
    where("send_at <= (?) AND sent_at IS NULL AND chat_id IS NOT NULL AND
          (body IS NOT NULL OR attachment IS NOT NULL)", Time.current) }
end
