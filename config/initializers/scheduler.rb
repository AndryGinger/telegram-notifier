require "#{Rails.root}/lib/telegram/ruby_bot.rb"

SCHEDULER = Rufus::Scheduler.singleton
BOT = Telegram::RubyBot.new("TOKEN")

return if defined?(Rails::Console) || Rails.env.test? || File.split($0).last == 'rake' || ENV["SKIP_SCHEDULER"]

SCHEDULER.every '10s' do |job|
  TelegramMessage.ready_to_send.each do |telegram_message|
    BOT.send_message(telegram_message)
  end

  job.unschedule unless defined? Rails::Console || defined? Rails::Server
end
