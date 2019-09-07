class CreateTelegramMessages < ActiveRecord::Migration[5.2]
  def change
    create_table :telegram_messages do |t|
      t.text     :body, null: false
      t.string   :chat_id, null: false
      t.integer  :chat_message_id
      t.datetime :send_at
      t.datetime :sent_at
      t.timestamps
    end
  end
end
