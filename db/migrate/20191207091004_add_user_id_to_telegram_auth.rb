class AddUserIdToTelegramAuth < ActiveRecord::Migration[5.2]
  def change
    add_column :telegram_auths, :user_id, :integer
  end
end
