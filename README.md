# README

## Init app
Copy `config/application.yml.sample` and remove `.sample`. Add your sensitive data to the file.

## Bot Setup To Send Messages
Each bot is given a unique authentication token when it is created. The token looks something like `123456:ABC-DEF1234ghIkl-zyx57W2v1u123ew11`. You can learn about obtaining tokens and generating new ones in [this document](https://core.telegram.org/bots#botfather).

### Setup By Chat Type
* Channel - bot should be added as ADMIN only.
* Group - bot may be as a member and as a admin as well
