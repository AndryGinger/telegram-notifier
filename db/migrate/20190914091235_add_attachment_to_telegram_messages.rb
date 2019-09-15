class AddAttachmentToTelegramMessages < ActiveRecord::Migration[5.2]
  def change
    add_column :telegram_messages, :attachment, :string
  end
end
