class ApplicationController < ActionController::Base
  before_action :authenticate_admin!
  before_action :run_wakeup_scheduller

  def run_wakeup_scheduller
    return if SCHEDULER.jobs.any? { |j| j.original == "20m" && j.scheduled? }

    SCHEDULER.every "20m" do
      HTTPI.get("https://stark-gorge-40519.herokuapp.com/")
    end
  end

  private

  def api_user_id
    @api_user_id ||= TelegramAuth.last&.user_id
  end
end
