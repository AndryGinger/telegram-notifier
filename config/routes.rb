Rails.application.routes.draw do
  root to: 'telegram_messages/manage#index'

  devise_for :admins

  namespace :telegram_messages do
    resources :manage
  end

  namespace :chats do
    resources :manage, only: %i(index edit update) do
      post :populate, on: :collection
    end
  end

  namespace :telegram_authorization do
    resources :manage
  end
end
