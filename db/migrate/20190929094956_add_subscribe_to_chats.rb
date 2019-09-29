class AddSubscribeToChats < ActiveRecord::Migration[5.2]
  def change
    add_column :chats, :subscribe, :boolean, default: false
  end
end
