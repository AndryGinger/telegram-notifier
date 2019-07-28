require "#{Rails.root}/lib/telegram/ruby_bot.rb"

return if defined?(Rails::Console) || Rails.env.test? || File.split($0).last == 'rake'

SCHEDULER = Rufus::Scheduler.new

SCHEDULER.every '10s' do
  Telegram::RubyBot.new('881528290:AAGZ5D9CEzmgeoQv5VpmMP3irxFwzM9GohU').send_message(-319776904, '123')
end
