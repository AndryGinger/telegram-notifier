class TelegramWebHooksController < ApplicationController
  skip_before_action :verify_authenticity_token, :authenticate_admin!

  def get_updates
    BOT.get_updates(params[:telegram_web_hook])
    head :ok
  end
end
