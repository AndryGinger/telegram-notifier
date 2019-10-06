require "#{Rails.root}/lib/telegram/client.rb"
require 'tdlib-ruby'

return if defined?(Rails::Console) || Rails.env.test? || File.split($0).last == 'rake' || ENV["SKIP_SCHEDULER"]

SCHEDULER = Rufus::Scheduler.singleton

TD.configure do |config|
  config.lib_path = Rails.root.to_s + "/td/build"

  telegram_auth = TelegramAuth.last
  config.client.api_id = telegram_auth&.api_id
  config.client.api_hash = telegram_auth&.api_hash
  config.client.use_file_database = false
  config.client.use_chat_info_database = false
  config.client.use_message_database = false
end

TD::Api.set_log_verbosity_level(1)

TELEGRAM_CLI = Telegram::Client.new

# SCHEDULER.every '30s' do |job|
#   TelegramMessage.ready_to_send.each do |telegram_message|
#     TELEGRAM_CLI.send_message(telegram_message)
#   end
#
#   job.unschedule unless defined? Rails::Console || defined? Rails::Server
# end
