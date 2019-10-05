require "#{Rails.root}/lib/telegram/client.rb"
require 'tdlib-ruby'

return if defined?(Rails::Console) || Rails.env.test? || File.split($0).last == 'rake' || ENV["SKIP_SCHEDULER"]

SCHEDULER = Rufus::Scheduler.singleton

TD.configure do |config|
  config.lib_path = Rails.root.to_s + "/td/build"

  config.client.api_id = ENV["API_ID"]
  config.client.api_hash = ENV["API_HASH"]
  config.client.use_file_database = false
  config.client.use_chat_info_database = false
  config.client.use_message_database = false
end

TD::Api.set_log_verbosity_level(1)

td_client = TD::Client.new

td_client.on(TD::Types::Update::NewMessage) do |update|
  TELEGRAM_CLI.create_telegram_message(update.message)
end

td_client.on(TD::Types::Update::File) do |update|
  TELEGRAM_CLI.upload_downloaded_file(update.file)
end

td_client.connect

TELEGRAM_CLI = Telegram::Client.new(td_client)

SCHEDULER.every '30s' do |job|
  TelegramMessage.ready_to_send.each do |telegram_message|
    TELEGRAM_CLI.send_message(telegram_message)
  end

  job.unschedule unless defined? Rails::Console || defined? Rails::Server
end
