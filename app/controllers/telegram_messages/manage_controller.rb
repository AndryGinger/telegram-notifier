module TelegramMessages
  class ManageController < ApplicationController
    before_action :find_telegram_message, only: %i(show edit update)
    before_action :init_telegram_message, only: %i(new create)

    def index
      @telegram_messages = TelegramMessage.all
    end

    def show; end

    def new; end

    def create
      if @telegram_message.save
        flash[:notice] = t('telegram_messages.flash.create_success')
        redirect_to telegram_messages_manage_index_path
      else
        flash[:error] = @telegram_message.errors.full_messages.join(', ')
        render :new
      end
    end

    def edit; end

    def update
      if @telegram_message.update_attributes(telegram_params)
        flash[:notice] = t('telegram_messages.flash.update_success')
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

    def telegram_params
      params.fetch(:telegram_message, {}).permit(:chat_id, :send_at, :body)
    end
  end
end
