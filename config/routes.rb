Rails.application.routes.draw do
  root to: 'telegram_messages/manage#index'

  devise_for :admins

  namespace :telegram_messages do
    resources :manage
  end
end
