class Attachment < ApplicationRecord
  ATTACHMENT_TYPES = %w(photo document).freeze

  mount_uploader :attachment, AttachmentUploader

  belongs_to :telegram_message

  before_save :set_attachment_type

  ATTACHMENT_TYPES.each do |type|
    define_method :"#{type}?" do
      attachment_type == type
    end
  end

  private

  def set_attachment_type
    return if attachment_id.present?
    self.attachment_type = attachment.is_image? ? :photo : :document
  end
end
