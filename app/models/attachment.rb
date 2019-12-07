class Attachment < ApplicationRecord
  ATTACHMENT_TYPES = %w(photo document).freeze

  attr_accessor :ready_to_send

  mount_uploader :attachment, AttachmentUploader

  belongs_to :telegram_message

  before_save :set_attachment_type
  after_commit :check_message_for_instant_send, on: %i(create update)

  ATTACHMENT_TYPES.each do |type|
    define_method :"#{type}?" do
      attachment_type == type
    end
  end

  private

  def check_message_for_instant_send
    return if telegram_message.sent_at.present?
    return if attachment_url.nil? && !ready_to_send

    if telegram_message.send_at.present? && telegram_message.chat_id.present?
      TELEGRAM_CLI.send_message(telegram_message)
    end
  end

  def set_attachment_type
    return if attachment_id.present?
    self.attachment_type = attachment.is_image? ? :photo : :document
  end
end
