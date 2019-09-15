class TelegramMessage < ApplicationRecord
  mount_uploader :attachment, AttachmentUploader

  scope :ready_to_send, -> {
    where("send_at <= (?) AND sent_at IS NULL AND chat_id IS NOT NULL AND
          (body IS NOT NULL OR attachment IS NOT NULL)", Time.current) }
end
