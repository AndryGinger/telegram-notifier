module Chats
  class ManageController < ApplicationController
    before_action :find_chat, :check_authorization, only: %i(edit update)
    before_action :prepare_chats, only: %i(index edit)

    def index
      @chats = @chats.page(params[:page])
    end

    def populate
      ChatPopulator.populate(api_user_id)

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

    def find_chat
      @chat = Chat.find(params[:id])
    end

    def prepare_chats
      @chats = api_user_id ? Chat.where(user_id: api_user_id).order(subscribed: :desc, id: :asc) : []
    end

    def check_authorization
      redirect_to root_path if @chat.user_id != api_user_id
    end

    def chat_params
      params.fetch(:chat, {}).permit(:name, :telegram_chat_id, :subscribed, :chat_to_instant_send)
    end
  end
end
