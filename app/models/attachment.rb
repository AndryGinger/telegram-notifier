class Attachment < ApplicationRecord
  ATTACHMENT_TYPES = %w(photo document).freeze

  mount_uploader :attachment, AttachmentUploader

  belongs_to :telegram_message

  ATTACHMENT_TYPES.each do |type|
    define_method :"#{type}?" do
      attachment_type == type
    end
  end
end
