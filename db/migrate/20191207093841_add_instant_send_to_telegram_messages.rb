class AddInstantSendToTelegramMessages < ActiveRecord::Migration[5.2]
  def change
    add_column :chats, :chat_to_instant_send, :string
  end
end
