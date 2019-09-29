class AddSubscribedToChats < ActiveRecord::Migration[5.2]
  def change
    add_column :chats, :subscribed, :boolean, default: false
  end
end
