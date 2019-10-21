# README

## Init app
Copy `config/application.yml.sample` and remove `.sample`.
Add required sensitive data to the file.
For example `API_ENCRYPTION_KEY: value` where value is some secret key. For example `3416be40aa18d910f8958ef9d56de2032921355735aa61aafea1593b3fb240c0`

## Run migrations
`bundle exec rake db:migrate db:seed`

Seed will create user `admin@lvh.me` with password `password`.

## Run application
`rails s`
Enjoy!

## Api Authorization
When you logged in as admin you can authorize API on `API Authorization` page
Credentials you can find in: https://my.telegram.org/auth in section API development tools

## Subscribe on updates
Go to the chat page and click populate. Edit any chat from which you want to receive updates. Just check the `subscribed` checkbox on the edit page.
