Rails.application.routes.draw do
  root to: 'telegram_messages/manage#index'

  devise_for :admins

  namespace :telegram_messages do
    resources :manage
  end

  namespace :chats do
    resources :manage
  end

  resource :telegram_web_hook, only: [] do
    post :get_updates, as: :collection
  end
end
