class CreateTelegramAuth < ActiveRecord::Migration[5.2]
  def change
    create_table :telegram_auths do |t|
      t.string :encrypted_api_id
      t.string :encrypted_api_id_iv
      t.string :encrypted_api_hash
      t.string :encrypted_api_hash_iv

      t.timestamps
    end
  end
end
