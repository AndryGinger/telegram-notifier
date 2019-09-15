module TelegramMessages
  class ManageController < ApplicationController
    before_action :find_telegram_message, only: %i(show edit update)
    before_action :init_telegram_message, only: %i(new create)
    before_action :prepare_chats, only: %i(new edit)

    def index
      @telegram_messages = TelegramMessage.all
    end

    def show; end

    def new; end

    def create
      if @telegram_message.save
        flash[:notice] = t('flash.create_success', name: "Telegram Message")
        redirect_to telegram_messages_manage_index_path
      else
        flash[:error] = @telegram_message.errors.full_messages.join(', ')
        render :new
      end
    end

    def edit; end

    def update
      if @telegram_message.update_attributes(telegram_params)
        flash[:notice] = t('flash.update_success', name: "Telegram Message")
        redirect_to telegram_messages_manage_index_path
      else
        flash[:error] = @telegram_message.errors.full_messages.join(', ')
        render :edit
      end
    end

    private

    def find_telegram_message
      @telegram_message = TelegramMessage.find(params[:id])
    end

    def init_telegram_message
      @telegram_message = TelegramMessage.new(telegram_params)
    end

    def prepare_chats
      @chats = Chat.all.pluck(:name, :telegram_chat_id)
    end

    def telegram_params
      params.fetch(:telegram_message, {}).permit(:chat_id, :send_at, :body, :attachment, :remove_attachment)
    end
  end
end
