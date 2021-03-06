class CreateTelegramMessages < ActiveRecord::Migration[5.2]
  def change
    create_table :telegram_messages do |t|
      t.text     :body
      t.string   :chat_id
      # t.integer  :chat_message_id # required for bot
      t.datetime :send_at
      t.datetime :sent_at
      t.timestamps
    end
  end
end
