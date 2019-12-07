class AddUserIdToTelegramMessages < ActiveRecord::Migration[5.2]
  def change
    add_column :telegram_messages, :user_id, :integer
  end
end
