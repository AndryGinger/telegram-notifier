class CreateAttachments < ActiveRecord::Migration[5.2]
  def change
    create_table :attachments do |t|
      t.references :telegram_message
      t.string     :attachment
      t.integer    :attachment_id
      t.string     :attachment_type
      t.integer    :width
      t.integer    :height

      t.timestamps
    end
  end
end
