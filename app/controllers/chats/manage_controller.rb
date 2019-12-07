module Chats
  class ManageController < ApplicationController
    before_action :find_chat, only: %i(edit update)

    def index
      @chats = Chat.where(user_id: user_id).order(subscribed: :desc, id: :asc).page(params[:page])
    end

    def populate
      ChatPopulator.populate(user_id)

      redirect_to chats_manage_index_path
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

    def user_id
      TelegramAuth.last&.user_id
    end

    def find_chat
      @chat = Chat.find(params[:id])
    end

    def chat_params
      params.fetch(:chat, {}).permit(:name, :telegram_chat_id, :subscribed)
    end
  end
end
