module TelegramAuthorization
  class ManageController < ApplicationController
    before_action :redirect_to_index_if_authorized, except: %i(index destroy)
    before_action :find_telegram_auth, except: %i(new create)
    before_action :init_telegram_auth, only: %i(new create)
    before_action :manage_authorization_state, except: :destroy

    def index
      if TELEGRAM_CLI.ready?
        TelegramAuth.last.update(user_id: TELEGRAM_CLI.get_me.value.id)
      end
    end

    def new; end

    def create
      if @telegram_auth.save
        TELEGRAM_CLI.authorize(@telegram_auth.api_id, @telegram_auth.api_hash)
        redirect_to telegram_authorization_manage_index_path
      else
        flash[:error] = t('flash.authorization_failed')
        render :new
      end
    end

    def update
      if params[:wait_phone_number]
        TELEGRAM_CLI.set_authentication_phone_number(auth_params[:phone_number]).wait
        redirect_to edit_telegram_authorization_manage_path(@telegram_auth)
      elsif params[:wait_code]
        TELEGRAM_CLI.check_authentication_code(auth_params[:code]).wait
        redirect_to telegram_authorization_manage_index_path
      else
        raise "Authentication error"
      end
    end

    def destroy
      @telegram_auth.destroy
      TELEGRAM_CLI.authorize(nil, nil)
      redirect_to new_telegram_authorization_manage_path
    end

    private

    def redirect_to_index_if_authorized
      redirect_to telegram_authorization_manage_index_path if TELEGRAM_CLI.ready?
    end

    def manage_authorization_state
      case get_authorization_state
      when TD::Types::AuthorizationState::WaitTdlibParameters
        redirect_to new_telegram_authorization_manage_path unless %w(new create).include?(action_name)
      when TD::Types::AuthorizationState::WaitPhoneNumber
        unless params[:wait_phone_number]
          redirect_to edit_telegram_authorization_manage_path(@telegram_auth, wait_phone_number: true)
        end
      when TD::Types::AuthorizationState::WaitCode
        unless params[:wait_code]
          redirect_to edit_telegram_authorization_manage_path(@telegram_auth, wait_code: true)
        end
      end
    end

    def get_authorization_state
      @get_authorization_state = TELEGRAM_CLI.get_authorization_state.value
    end

    def init_telegram_auth
      @telegram_auth = TelegramAuth.last || TelegramAuth.new(auth_params)
    end

    def find_telegram_auth
      @telegram_auth = TelegramAuth.last
    end

    def auth_params
      params.fetch(:telegram_auth, {}).permit(:api_id, :api_hash, :phone_number, :code)
    end
  end
end
