class TelegramAuth < ApplicationRecord
  attr_accessor :phone_number, :code

  attr_encrypted :api_id, key: [ENV["API_ENCRYPTION_KEY"]].pack("H*")
  attr_encrypted :api_hash, key: [ENV["API_ENCRYPTION_KEY"]].pack("H*")

  validates :api_id, :api_hash, presence: true
end
