class CreateChats < ActiveRecord::Migration[5.2]
  def change
    create_table :chats do |t|
      t.string :name
      t.string :telegram_chat_id
      t.timestamps
    end
  end
end
