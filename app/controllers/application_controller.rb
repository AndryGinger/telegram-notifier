class ApplicationController < ActionController::Base
  before_action :authenticate_admin!
  before_action :run_wakeup_scheduller

  def run_wakeup_scheduller
    return if SCHEDULER.jobs.any? { |j| j.original == "20m" && j.scheduled? }

    SCHEDULER.every "20m" do
      HTTPI.get("https://stark-gorge-40519.herokuapp.com/")
    end
  end
end
