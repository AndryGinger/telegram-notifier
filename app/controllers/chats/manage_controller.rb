module Chats
  class ManageController < ApplicationController
    before_action :init_chat, only: %i(new create)
    before_action :find_chat, only: %i(edit update)

    def index
      @chats = Chat.all
    end

    def new; end

    def create
      if @chat.save
        flash[:notice] = t('flash.create_success', name: "Chat")
        redirect_to chats_manage_index_path
      else
        flash[:error] = @chat.errors.full_messages.join(', ')
        render :new
      end
    end

    def edit; end

    def update
      if @chat.update_attributes(chat_params)
        flash[:notice] = t('flash.update_success', name: "Telegram Message")
        redirect_to chats_manage_index_path
      else
        flash[:error] = @chat.errors.full_messages.join(', ')
        render :edit
      end
    end

    private

    def find_chat
      @chat = Chat.find(params[:id])
    end

    def init_chat
      @chat = Chat.new(chat_params)
    end

    def chat_params
      params.fetch(:chat, {}).permit(:name, :telegram_chat_id)
    end
  end
end
