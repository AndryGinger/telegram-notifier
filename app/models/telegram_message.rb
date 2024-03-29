class TelegramMessage < ApplicationRecord
  paginates_per 10

  has_one :attachment, inverse_of: :telegram_message, dependent: :destroy
  accepts_nested_attributes_for :attachment, allow_destroy: true

  delegate :attachment_url, to: :attachment

  before_create :set_user_id
  after_commit :check_for_instant_send, if: -> { chat_id.present? && sent_at.nil? }, on: %i(create update)

  scope :ready_to_send, -> {
    joins("LEFT JOIN attachments ON telegram_messages.id = attachments.telegram_message_id")
    .where("send_at <= (?) AND sent_at IS NULL AND chat_id IS NOT NULL AND " \
           "(body IS NOT NULL OR attachments.id IS NOT NULL)", Time.current) }

  private

  def set_user_id
    self.user_id = TelegramAuth.last.user_id
  end

  def check_for_instant_send
    return if attachment.present? && attachment_url.blank?

    TELEGRAM_CLI.send_message(self)
  end
end
