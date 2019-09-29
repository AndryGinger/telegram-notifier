#pragma once

#include "td/tl/TlObject.h"

#include "td/utils/buffer.h"

#include <cstdint>
#include <memory>
#include <utility>
#include <vector>

namespace td {
class TlStorerCalcLength;
class TlStorerUnsafe;
class TlStorerToString;
class TlBufferParser;

namespace telegram_api {

using BaseObject = ::td::TlObject;

template <class Type>
using object_ptr = ::td::tl_object_ptr<Type>;

template <class Type, class... Args>
object_ptr<Type> make_object(Args &&... args) {
  return object_ptr<Type>(new Type(std::forward<Args>(args)...));
}

template <class ToType, class FromType>
object_ptr<ToType> move_object_as(FromType &&from) {
  return object_ptr<ToType>(static_cast<ToType *>(from.release()));
}

std::string to_string(const BaseObject &value);

template <class T>
std::string to_string(const object_ptr<T> &value) {
  if (value == nullptr) {
    return "null";
  }

  return to_string(*value);
}

class accessPointRule;

class accountDaysTTL;

class authorization;

class botCommand;

class botInfo;

class BotInlineMessage;

class BotInlineResult;

class cdnConfig;

class cdnPublicKey;

class channelAdminLogEvent;

class ChannelAdminLogEventAction;

class channelAdminLogEventsFilter;

class channelAdminRights;

class channelBannedRights;

class ChannelMessagesFilter;

class ChannelParticipant;

class ChannelParticipantsFilter;

class Chat;

class ChatFull;

class ChatInvite;

class ChatParticipant;

class ChatParticipants;

class ChatPhoto;

class config;

class contact;

class contactBlocked;

class ContactLink;

class contactStatus;

class dataJSON;

class dcOption;

class dialog;

class dialogPeer;

class Document;

class DocumentAttribute;

class DraftMessage;

class EncryptedChat;

class EncryptedFile;

class EncryptedMessage;

class error;

class ExportedChatInvite;

class exportedMessageLink;

class fileHash;

class FileLocation;

class FoundGif;

class game;

class GeoPoint;

class highScore;

class importedContact;

class inlineBotSwitchPM;

class inputAppEvent;

class InputBotInlineMessage;

class inputBotInlineMessageID;

class InputBotInlineResult;

class InputChannel;

class InputChatPhoto;

class InputCheckPasswordSRP;

class inputClientProxy;

class inputPhoneContact;

class inputDialogPeer;

class InputDocument;

class inputEncryptedChat;

class InputEncryptedFile;

class InputFile;

class InputFileLocation;

class InputGame;

class InputGeoPoint;

class InputMedia;

class InputMessage;

class InputNotifyPeer;

class InputPaymentCredentials;

class InputPeer;

class inputPeerNotifySettings;

class inputPhoneCall;

class InputPhoto;

class InputPrivacyKey;

class InputPrivacyRule;

class InputSecureFile;

class inputSecureValue;

class inputSingleMedia;

class InputStickerSet;

class inputStickerSetItem;

class InputStickeredMedia;

class InputUser;

class inputWebDocument;

class InputWebFileLocation;

class invoice;

class IpPort;

class KeyboardButton;

class keyboardButtonRow;

class labeledPrice;

class langPackDifference;

class langPackLanguage;

class LangPackString;

class maskCoords;

class Message;

class MessageAction;

class MessageEntity;

class messageFwdHeader;

class MessageMedia;

class messageRange;

class MessagesFilter;

class nearestDc;

class NotifyPeer;

class Page;

class PageBlock;

class PasswordKdfAlgo;

class paymentCharge;

class paymentRequestedInfo;

class paymentSavedCredentialsCard;

class Peer;

class peerNotifySettings;

class peerSettings;

class PhoneCall;

class PhoneCallDiscardReason;

class phoneCallProtocol;

class phoneConnection;

class Photo;

class PhotoSize;

class popularContact;

class postAddress;

class PrivacyKey;

class PrivacyRule;

class receivedNotifyMessage;

class RecentMeUrl;

class ReplyMarkup;

class ReportReason;

class RichText;

class savedPhoneContact;

class secureCredentialsEncrypted;

class secureData;

class SecureFile;

class SecurePasswordKdfAlgo;

class SecurePlainData;

class SecureRequiredType;

class secureSecretSettings;

class secureValue;

class SecureValueError;

class secureValueHash;

class SecureValueType;

class SendMessageAction;

class shippingOption;

class stickerPack;

class stickerSet;

class StickerSetCovered;

class topPeer;

class TopPeerCategory;

class topPeerCategoryPeers;

class Update;

class Updates;

class User;

class userFull;

class UserProfilePhoto;

class UserStatus;

class WallPaper;

class webAuthorization;

class WebDocument;

class WebPage;

class account_authorizationForm;

class account_authorizations;

class account_password;

class account_passwordInputSettings;

class account_passwordSettings;

class account_privacyRules;

class account_sentEmailCode;

class account_takeout;

class account_tmpPassword;

class account_webAuthorizations;

class auth_authorization;

class auth_checkedPhone;

class auth_CodeType;

class auth_exportedAuthorization;

class auth_passwordRecovery;

class auth_sentCode;

class auth_SentCodeType;

class channels_adminLogResults;

class channels_channelParticipant;

class channels_ChannelParticipants;

class contacts_Blocked;

class contacts_Contacts;

class contacts_found;

class contacts_importedContacts;

class contacts_link;

class contacts_resolvedPeer;

class contacts_TopPeers;

class help_AppUpdate;

class help_configSimple;

class help_DeepLinkInfo;

class help_inviteText;

class help_PassportConfig;

class help_ProxyData;

class help_recentMeUrls;

class help_support;

class help_termsOfService;

class help_TermsOfServiceUpdate;

class messages_affectedHistory;

class messages_affectedMessages;

class messages_AllStickers;

class messages_archivedStickers;

class messages_botCallbackAnswer;

class messages_botResults;

class messages_chatFull;

class messages_Chats;

class messages_DhConfig;

class messages_Dialogs;

class messages_FavedStickers;

class messages_FeaturedStickers;

class messages_foundGifs;

class messages_FoundStickerSets;

class messages_highScores;

class messages_messageEditData;

class messages_Messages;

class messages_peerDialogs;

class messages_RecentStickers;

class messages_SavedGifs;

class messages_SentEncryptedMessage;

class messages_stickerSet;

class messages_StickerSetInstallResult;

class messages_Stickers;

class payments_paymentForm;

class payments_paymentReceipt;

class payments_PaymentResult;

class payments_savedInfo;

class payments_validatedRequestedInfo;

class phone_phoneCall;

class photos_photo;

class photos_Photos;

class storage_FileType;

class updates_ChannelDifference;

class updates_Difference;

class updates_state;

class upload_CdnFile;

class upload_File;

class upload_webFile;

class Object;

class Object: public TlObject {
 public:

  static object_ptr<Object> fetch(TlBufferParser &p);
};

class Function: public TlObject {
 public:
};

class accessPointRule final : public Object {
 public:
  std::string phone_prefix_rules_;
  std::int32_t dc_id_;
  std::vector<object_ptr<IpPort>> ips_;

  accessPointRule();

  accessPointRule(std::string const &phone_prefix_rules_, std::int32_t dc_id_, std::vector<object_ptr<IpPort>> &&ips_);

  static const std::int32_t ID = 1182381663;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<accessPointRule> fetch(TlBufferParser &p) {
    return make_tl_object<accessPointRule>(p);
  }

  explicit accessPointRule(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class accountDaysTTL final : public Object {
 public:
  std::int32_t days_;

  accountDaysTTL();

  explicit accountDaysTTL(std::int32_t days_);

  static const std::int32_t ID = -1194283041;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<accountDaysTTL> fetch(TlBufferParser &p) {
    return make_tl_object<accountDaysTTL>(p);
  }

  explicit accountDaysTTL(TlBufferParser &p);

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class authorization final : public Object {
 public:
  std::int64_t hash_;
  std::int32_t flags_;
  std::string device_model_;
  std::string platform_;
  std::string system_version_;
  std::int32_t api_id_;
  std::string app_name_;
  std::string app_version_;
  std::int32_t date_created_;
  std::int32_t date_active_;
  std::string ip_;
  std::string country_;
  std::string region_;

  authorization();

  authorization(std::int64_t hash_, std::int32_t flags_, std::string const &device_model_, std::string const &platform_, std::string const &system_version_, std::int32_t api_id_, std::string const &app_name_, std::string const &app_version_, std::int32_t date_created_, std::int32_t date_active_, std::string const &ip_, std::string const &country_, std::string const &region_);

  static const std::int32_t ID = 2079516406;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<authorization> fetch(TlBufferParser &p) {
    return make_tl_object<authorization>(p);
  }

  explicit authorization(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class botCommand final : public Object {
 public:
  std::string command_;
  std::string description_;

  botCommand();

  botCommand(std::string const &command_, std::string const &description_);

  static const std::int32_t ID = -1032140601;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<botCommand> fetch(TlBufferParser &p) {
    return make_tl_object<botCommand>(p);
  }

  explicit botCommand(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class botInfo final : public Object {
 public:
  std::int32_t user_id_;
  std::string description_;
  std::vector<object_ptr<botCommand>> commands_;

  botInfo();

  botInfo(std::int32_t user_id_, std::string const &description_, std::vector<object_ptr<botCommand>> &&commands_);

  static const std::int32_t ID = -1729618630;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<botInfo> fetch(TlBufferParser &p) {
    return make_tl_object<botInfo>(p);
  }

  explicit botInfo(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class BotInlineMessage: public Object {
 public:

  static object_ptr<BotInlineMessage> fetch(TlBufferParser &p);
};

class botInlineMessageMediaAuto final : public BotInlineMessage {
 public:
  std::int32_t flags_;
  std::string message_;
  std::vector<object_ptr<MessageEntity>> entities_;
  object_ptr<ReplyMarkup> reply_markup_;
  enum Flags : std::int32_t {ENTITIES_MASK = 2, REPLY_MARKUP_MASK = 4};

  botInlineMessageMediaAuto();

  botInlineMessageMediaAuto(std::int32_t flags_, std::string const &message_, std::vector<object_ptr<MessageEntity>> &&entities_, object_ptr<ReplyMarkup> &&reply_markup_);

  static const std::int32_t ID = 1984755728;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<botInlineMessageMediaAuto> fetch(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class botInlineMessageText final : public BotInlineMessage {
 public:
  std::int32_t flags_;
  bool no_webpage_;
  std::string message_;
  std::vector<object_ptr<MessageEntity>> entities_;
  object_ptr<ReplyMarkup> reply_markup_;
  enum Flags : std::int32_t {NO_WEBPAGE_MASK = 1, ENTITIES_MASK = 2, REPLY_MARKUP_MASK = 4};

  botInlineMessageText();

  botInlineMessageText(std::int32_t flags_, bool no_webpage_, std::string const &message_, std::vector<object_ptr<MessageEntity>> &&entities_, object_ptr<ReplyMarkup> &&reply_markup_);

  static const std::int32_t ID = -1937807902;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<botInlineMessageText> fetch(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class botInlineMessageMediaGeo final : public BotInlineMessage {
 public:
  std::int32_t flags_;
  object_ptr<GeoPoint> geo_;
  std::int32_t period_;
  object_ptr<ReplyMarkup> reply_markup_;
  enum Flags : std::int32_t {REPLY_MARKUP_MASK = 4};

  botInlineMessageMediaGeo();

  botInlineMessageMediaGeo(std::int32_t flags_, object_ptr<GeoPoint> &&geo_, std::int32_t period_, object_ptr<ReplyMarkup> &&reply_markup_);

  static const std::int32_t ID = -1222451611;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<botInlineMessageMediaGeo> fetch(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class botInlineMessageMediaVenue final : public BotInlineMessage {
 public:
  std::int32_t flags_;
  object_ptr<GeoPoint> geo_;
  std::string title_;
  std::string address_;
  std::string provider_;
  std::string venue_id_;
  std::string venue_type_;
  object_ptr<ReplyMarkup> reply_markup_;
  enum Flags : std::int32_t {REPLY_MARKUP_MASK = 4};

  botInlineMessageMediaVenue();

  botInlineMessageMediaVenue(std::int32_t flags_, object_ptr<GeoPoint> &&geo_, std::string const &title_, std::string const &address_, std::string const &provider_, std::string const &venue_id_, std::string const &venue_type_, object_ptr<ReplyMarkup> &&reply_markup_);

  static const std::int32_t ID = -1970903652;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<botInlineMessageMediaVenue> fetch(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class botInlineMessageMediaContact final : public BotInlineMessage {
 public:
  std::int32_t flags_;
  std::string phone_number_;
  std::string first_name_;
  std::string last_name_;
  std::string vcard_;
  object_ptr<ReplyMarkup> reply_markup_;
  enum Flags : std::int32_t {REPLY_MARKUP_MASK = 4};

  botInlineMessageMediaContact();

  botInlineMessageMediaContact(std::int32_t flags_, std::string const &phone_number_, std::string const &first_name_, std::string const &last_name_, std::string const &vcard_, object_ptr<ReplyMarkup> &&reply_markup_);

  static const std::int32_t ID = 416402882;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<botInlineMessageMediaContact> fetch(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class BotInlineResult: public Object {
 public:

  static object_ptr<BotInlineResult> fetch(TlBufferParser &p);
};

class botInlineResult final : public BotInlineResult {
 public:
  std::int32_t flags_;
  std::string id_;
  std::string type_;
  std::string title_;
  std::string description_;
  std::string url_;
  object_ptr<WebDocument> thumb_;
  object_ptr<WebDocument> content_;
  object_ptr<BotInlineMessage> send_message_;
  enum Flags : std::int32_t {TITLE_MASK = 2, DESCRIPTION_MASK = 4, URL_MASK = 8, THUMB_MASK = 16, CONTENT_MASK = 32};

  botInlineResult();

  botInlineResult(std::int32_t flags_, std::string const &id_, std::string const &type_, std::string const &title_, std::string const &description_, std::string const &url_, object_ptr<WebDocument> &&thumb_, object_ptr<WebDocument> &&content_, object_ptr<BotInlineMessage> &&send_message_);

  static const std::int32_t ID = 295067450;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<botInlineResult> fetch(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class botInlineMediaResult final : public BotInlineResult {
 public:
  std::int32_t flags_;
  std::string id_;
  std::string type_;
  object_ptr<Photo> photo_;
  object_ptr<Document> document_;
  std::string title_;
  std::string description_;
  object_ptr<BotInlineMessage> send_message_;
  enum Flags : std::int32_t {PHOTO_MASK = 1, DOCUMENT_MASK = 2, TITLE_MASK = 4, DESCRIPTION_MASK = 8};

  botInlineMediaResult();

  botInlineMediaResult(std::int32_t flags_, std::string const &id_, std::string const &type_, object_ptr<Photo> &&photo_, object_ptr<Document> &&document_, std::string const &title_, std::string const &description_, object_ptr<BotInlineMessage> &&send_message_);

  static const std::int32_t ID = 400266251;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<botInlineMediaResult> fetch(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class cdnConfig final : public Object {
 public:
  std::vector<object_ptr<cdnPublicKey>> public_keys_;

  cdnConfig();

  explicit cdnConfig(std::vector<object_ptr<cdnPublicKey>> &&public_keys_);

  static const std::int32_t ID = 1462101002;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<cdnConfig> fetch(TlBufferParser &p) {
    return make_tl_object<cdnConfig>(p);
  }

  explicit cdnConfig(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class cdnPublicKey final : public Object {
 public:
  std::int32_t dc_id_;
  std::string public_key_;

  cdnPublicKey();

  cdnPublicKey(std::int32_t dc_id_, std::string const &public_key_);

  static const std::int32_t ID = -914167110;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<cdnPublicKey> fetch(TlBufferParser &p) {
    return make_tl_object<cdnPublicKey>(p);
  }

  explicit cdnPublicKey(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class channelAdminLogEvent final : public Object {
 public:
  std::int64_t id_;
  std::int32_t date_;
  std::int32_t user_id_;
  object_ptr<ChannelAdminLogEventAction> action_;

  channelAdminLogEvent();

  channelAdminLogEvent(std::int64_t id_, std::int32_t date_, std::int32_t user_id_, object_ptr<ChannelAdminLogEventAction> &&action_);

  static const std::int32_t ID = 995769920;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<channelAdminLogEvent> fetch(TlBufferParser &p) {
    return make_tl_object<channelAdminLogEvent>(p);
  }

  explicit channelAdminLogEvent(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class ChannelAdminLogEventAction: public Object {
 public:

  static object_ptr<ChannelAdminLogEventAction> fetch(TlBufferParser &p);
};

class channelAdminLogEventActionChangeTitle final : public ChannelAdminLogEventAction {
 public:
  std::string prev_value_;
  std::string new_value_;

  channelAdminLogEventActionChangeTitle();

  channelAdminLogEventActionChangeTitle(std::string const &prev_value_, std::string const &new_value_);

  static const std::int32_t ID = -421545947;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<channelAdminLogEventActionChangeTitle> fetch(TlBufferParser &p) {
    return make_tl_object<channelAdminLogEventActionChangeTitle>(p);
  }

  explicit channelAdminLogEventActionChangeTitle(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class channelAdminLogEventActionChangeAbout final : public ChannelAdminLogEventAction {
 public:
  std::string prev_value_;
  std::string new_value_;

  channelAdminLogEventActionChangeAbout();

  channelAdminLogEventActionChangeAbout(std::string const &prev_value_, std::string const &new_value_);

  static const std::int32_t ID = 1427671598;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<channelAdminLogEventActionChangeAbout> fetch(TlBufferParser &p) {
    return make_tl_object<channelAdminLogEventActionChangeAbout>(p);
  }

  explicit channelAdminLogEventActionChangeAbout(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class channelAdminLogEventActionChangeUsername final : public ChannelAdminLogEventAction {
 public:
  std::string prev_value_;
  std::string new_value_;

  channelAdminLogEventActionChangeUsername();

  channelAdminLogEventActionChangeUsername(std::string const &prev_value_, std::string const &new_value_);

  static const std::int32_t ID = 1783299128;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<channelAdminLogEventActionChangeUsername> fetch(TlBufferParser &p) {
    return make_tl_object<channelAdminLogEventActionChangeUsername>(p);
  }

  explicit channelAdminLogEventActionChangeUsername(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class channelAdminLogEventActionChangePhoto final : public ChannelAdminLogEventAction {
 public:
  object_ptr<ChatPhoto> prev_photo_;
  object_ptr<ChatPhoto> new_photo_;

  channelAdminLogEventActionChangePhoto();

  channelAdminLogEventActionChangePhoto(object_ptr<ChatPhoto> &&prev_photo_, object_ptr<ChatPhoto> &&new_photo_);

  static const std::int32_t ID = -1204857405;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<channelAdminLogEventActionChangePhoto> fetch(TlBufferParser &p) {
    return make_tl_object<channelAdminLogEventActionChangePhoto>(p);
  }

  explicit channelAdminLogEventActionChangePhoto(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class channelAdminLogEventActionToggleInvites final : public ChannelAdminLogEventAction {
 public:
  bool new_value_;

  channelAdminLogEventActionToggleInvites();

  explicit channelAdminLogEventActionToggleInvites(bool new_value_);

  static const std::int32_t ID = 460916654;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<channelAdminLogEventActionToggleInvites> fetch(TlBufferParser &p) {
    return make_tl_object<channelAdminLogEventActionToggleInvites>(p);
  }

  explicit channelAdminLogEventActionToggleInvites(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class channelAdminLogEventActionToggleSignatures final : public ChannelAdminLogEventAction {
 public:
  bool new_value_;

  channelAdminLogEventActionToggleSignatures();

  explicit channelAdminLogEventActionToggleSignatures(bool new_value_);

  static const std::int32_t ID = 648939889;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<channelAdminLogEventActionToggleSignatures> fetch(TlBufferParser &p) {
    return make_tl_object<channelAdminLogEventActionToggleSignatures>(p);
  }

  explicit channelAdminLogEventActionToggleSignatures(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class channelAdminLogEventActionUpdatePinned final : public ChannelAdminLogEventAction {
 public:
  object_ptr<Message> message_;

  channelAdminLogEventActionUpdatePinned();

  explicit channelAdminLogEventActionUpdatePinned(object_ptr<Message> &&message_);

  static const std::int32_t ID = -370660328;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<channelAdminLogEventActionUpdatePinned> fetch(TlBufferParser &p) {
    return make_tl_object<channelAdminLogEventActionUpdatePinned>(p);
  }

  explicit channelAdminLogEventActionUpdatePinned(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class channelAdminLogEventActionEditMessage final : public ChannelAdminLogEventAction {
 public:
  object_ptr<Message> prev_message_;
  object_ptr<Message> new_message_;

  channelAdminLogEventActionEditMessage();

  channelAdminLogEventActionEditMessage(object_ptr<Message> &&prev_message_, object_ptr<Message> &&new_message_);

  static const std::int32_t ID = 1889215493;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<channelAdminLogEventActionEditMessage> fetch(TlBufferParser &p) {
    return make_tl_object<channelAdminLogEventActionEditMessage>(p);
  }

  explicit channelAdminLogEventActionEditMessage(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class channelAdminLogEventActionDeleteMessage final : public ChannelAdminLogEventAction {
 public:
  object_ptr<Message> message_;

  channelAdminLogEventActionDeleteMessage();

  explicit channelAdminLogEventActionDeleteMessage(object_ptr<Message> &&message_);

  static const std::int32_t ID = 1121994683;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<channelAdminLogEventActionDeleteMessage> fetch(TlBufferParser &p) {
    return make_tl_object<channelAdminLogEventActionDeleteMessage>(p);
  }

  explicit channelAdminLogEventActionDeleteMessage(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class channelAdminLogEventActionParticipantJoin final : public ChannelAdminLogEventAction {
 public:

  channelAdminLogEventActionParticipantJoin();

  static const std::int32_t ID = 405815507;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<channelAdminLogEventActionParticipantJoin> fetch(TlBufferParser &p) {
    return make_tl_object<channelAdminLogEventActionParticipantJoin>(p);
  }

  explicit channelAdminLogEventActionParticipantJoin(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class channelAdminLogEventActionParticipantLeave final : public ChannelAdminLogEventAction {
 public:

  channelAdminLogEventActionParticipantLeave();

  static const std::int32_t ID = -124291086;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<channelAdminLogEventActionParticipantLeave> fetch(TlBufferParser &p) {
    return make_tl_object<channelAdminLogEventActionParticipantLeave>(p);
  }

  explicit channelAdminLogEventActionParticipantLeave(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class channelAdminLogEventActionParticipantInvite final : public ChannelAdminLogEventAction {
 public:
  object_ptr<ChannelParticipant> participant_;

  channelAdminLogEventActionParticipantInvite();

  explicit channelAdminLogEventActionParticipantInvite(object_ptr<ChannelParticipant> &&participant_);

  static const std::int32_t ID = -484690728;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<channelAdminLogEventActionParticipantInvite> fetch(TlBufferParser &p) {
    return make_tl_object<channelAdminLogEventActionParticipantInvite>(p);
  }

  explicit channelAdminLogEventActionParticipantInvite(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class channelAdminLogEventActionParticipantToggleBan final : public ChannelAdminLogEventAction {
 public:
  object_ptr<ChannelParticipant> prev_participant_;
  object_ptr<ChannelParticipant> new_participant_;

  channelAdminLogEventActionParticipantToggleBan();

  channelAdminLogEventActionParticipantToggleBan(object_ptr<ChannelParticipant> &&prev_participant_, object_ptr<ChannelParticipant> &&new_participant_);

  static const std::int32_t ID = -422036098;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<channelAdminLogEventActionParticipantToggleBan> fetch(TlBufferParser &p) {
    return make_tl_object<channelAdminLogEventActionParticipantToggleBan>(p);
  }

  explicit channelAdminLogEventActionParticipantToggleBan(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class channelAdminLogEventActionParticipantToggleAdmin final : public ChannelAdminLogEventAction {
 public:
  object_ptr<ChannelParticipant> prev_participant_;
  object_ptr<ChannelParticipant> new_participant_;

  channelAdminLogEventActionParticipantToggleAdmin();

  channelAdminLogEventActionParticipantToggleAdmin(object_ptr<ChannelParticipant> &&prev_participant_, object_ptr<ChannelParticipant> &&new_participant_);

  static const std::int32_t ID = -714643696;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<channelAdminLogEventActionParticipantToggleAdmin> fetch(TlBufferParser &p) {
    return make_tl_object<channelAdminLogEventActionParticipantToggleAdmin>(p);
  }

  explicit channelAdminLogEventActionParticipantToggleAdmin(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class channelAdminLogEventActionChangeStickerSet final : public ChannelAdminLogEventAction {
 public:
  object_ptr<InputStickerSet> prev_stickerset_;
  object_ptr<InputStickerSet> new_stickerset_;

  channelAdminLogEventActionChangeStickerSet();

  channelAdminLogEventActionChangeStickerSet(object_ptr<InputStickerSet> &&prev_stickerset_, object_ptr<InputStickerSet> &&new_stickerset_);

  static const std::int32_t ID = -1312568665;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<channelAdminLogEventActionChangeStickerSet> fetch(TlBufferParser &p) {
    return make_tl_object<channelAdminLogEventActionChangeStickerSet>(p);
  }

  explicit channelAdminLogEventActionChangeStickerSet(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class channelAdminLogEventActionTogglePreHistoryHidden final : public ChannelAdminLogEventAction {
 public:
  bool new_value_;

  channelAdminLogEventActionTogglePreHistoryHidden();

  explicit channelAdminLogEventActionTogglePreHistoryHidden(bool new_value_);

  static const std::int32_t ID = 1599903217;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<channelAdminLogEventActionTogglePreHistoryHidden> fetch(TlBufferParser &p) {
    return make_tl_object<channelAdminLogEventActionTogglePreHistoryHidden>(p);
  }

  explicit channelAdminLogEventActionTogglePreHistoryHidden(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class channelAdminLogEventsFilter final : public Object {
 public:
  std::int32_t flags_;
  bool join_;
  bool leave_;
  bool invite_;
  bool ban_;
  bool unban_;
  bool kick_;
  bool unkick_;
  bool promote_;
  bool demote_;
  bool info_;
  bool settings_;
  bool pinned_;
  bool edit_;
  bool delete_;
  enum Flags : std::int32_t {JOIN_MASK = 1, LEAVE_MASK = 2, INVITE_MASK = 4, BAN_MASK = 8, UNBAN_MASK = 16, KICK_MASK = 32, UNKICK_MASK = 64, PROMOTE_MASK = 128, DEMOTE_MASK = 256, INFO_MASK = 512, SETTINGS_MASK = 1024, PINNED_MASK = 2048, EDIT_MASK = 4096, DELETE_MASK = 8192};

  channelAdminLogEventsFilter();

  channelAdminLogEventsFilter(std::int32_t flags_, bool join_, bool leave_, bool invite_, bool ban_, bool unban_, bool kick_, bool unkick_, bool promote_, bool demote_, bool info_, bool settings_, bool pinned_, bool edit_, bool delete_);

  static const std::int32_t ID = -368018716;
  std::int32_t get_id() const final {
    return ID;
  }

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class channelAdminRights final : public Object {
 public:
  std::int32_t flags_;
  bool change_info_;
  bool post_messages_;
  bool edit_messages_;
  bool delete_messages_;
  bool ban_users_;
  bool invite_users_;
  bool invite_link_;
  bool pin_messages_;
  bool add_admins_;
  enum Flags : std::int32_t {CHANGE_INFO_MASK = 1, POST_MESSAGES_MASK = 2, EDIT_MESSAGES_MASK = 4, DELETE_MESSAGES_MASK = 8, BAN_USERS_MASK = 16, INVITE_USERS_MASK = 32, INVITE_LINK_MASK = 64, PIN_MESSAGES_MASK = 128, ADD_ADMINS_MASK = 512};

  channelAdminRights();

  channelAdminRights(std::int32_t flags_, bool change_info_, bool post_messages_, bool edit_messages_, bool delete_messages_, bool ban_users_, bool invite_users_, bool invite_link_, bool pin_messages_, bool add_admins_);

  static const std::int32_t ID = 1568467877;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<channelAdminRights> fetch(TlBufferParser &p);

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class channelBannedRights final : public Object {
 public:
  std::int32_t flags_;
  bool view_messages_;
  bool send_messages_;
  bool send_media_;
  bool send_stickers_;
  bool send_gifs_;
  bool send_games_;
  bool send_inline_;
  bool embed_links_;
  std::int32_t until_date_;
  enum Flags : std::int32_t {VIEW_MESSAGES_MASK = 1, SEND_MESSAGES_MASK = 2, SEND_MEDIA_MASK = 4, SEND_STICKERS_MASK = 8, SEND_GIFS_MASK = 16, SEND_GAMES_MASK = 32, SEND_INLINE_MASK = 64, EMBED_LINKS_MASK = 128};

  channelBannedRights();

  channelBannedRights(std::int32_t flags_, bool view_messages_, bool send_messages_, bool send_media_, bool send_stickers_, bool send_gifs_, bool send_games_, bool send_inline_, bool embed_links_, std::int32_t until_date_);

  static const std::int32_t ID = 1489977929;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<channelBannedRights> fetch(TlBufferParser &p);

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class ChannelMessagesFilter: public Object {
 public:
};

class channelMessagesFilterEmpty final : public ChannelMessagesFilter {
 public:

  channelMessagesFilterEmpty();

  static const std::int32_t ID = -1798033689;
  std::int32_t get_id() const final {
    return ID;
  }

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class channelMessagesFilter final : public ChannelMessagesFilter {
 public:
  std::int32_t flags_;
  bool exclude_new_messages_;
  std::vector<object_ptr<messageRange>> ranges_;
  enum Flags : std::int32_t {EXCLUDE_NEW_MESSAGES_MASK = 2};

  channelMessagesFilter();

  channelMessagesFilter(std::int32_t flags_, bool exclude_new_messages_, std::vector<object_ptr<messageRange>> &&ranges_);

  static const std::int32_t ID = -847783593;
  std::int32_t get_id() const final {
    return ID;
  }

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class ChannelParticipant: public Object {
 public:

  static object_ptr<ChannelParticipant> fetch(TlBufferParser &p);
};

class channelParticipant final : public ChannelParticipant {
 public:
  std::int32_t user_id_;
  std::int32_t date_;

  channelParticipant();

  channelParticipant(std::int32_t user_id_, std::int32_t date_);

  static const std::int32_t ID = 367766557;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<channelParticipant> fetch(TlBufferParser &p) {
    return make_tl_object<channelParticipant>(p);
  }

  explicit channelParticipant(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class channelParticipantSelf final : public ChannelParticipant {
 public:
  std::int32_t user_id_;
  std::int32_t inviter_id_;
  std::int32_t date_;

  channelParticipantSelf();

  channelParticipantSelf(std::int32_t user_id_, std::int32_t inviter_id_, std::int32_t date_);

  static const std::int32_t ID = -1557620115;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<channelParticipantSelf> fetch(TlBufferParser &p) {
    return make_tl_object<channelParticipantSelf>(p);
  }

  explicit channelParticipantSelf(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class channelParticipantCreator final : public ChannelParticipant {
 public:
  std::int32_t user_id_;

  channelParticipantCreator();

  explicit channelParticipantCreator(std::int32_t user_id_);

  static const std::int32_t ID = -471670279;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<channelParticipantCreator> fetch(TlBufferParser &p) {
    return make_tl_object<channelParticipantCreator>(p);
  }

  explicit channelParticipantCreator(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class channelParticipantAdmin final : public ChannelParticipant {
 public:
  std::int32_t flags_;
  bool can_edit_;
  std::int32_t user_id_;
  std::int32_t inviter_id_;
  std::int32_t promoted_by_;
  std::int32_t date_;
  object_ptr<channelAdminRights> admin_rights_;
  enum Flags : std::int32_t {CAN_EDIT_MASK = 1};

  channelParticipantAdmin();

  channelParticipantAdmin(std::int32_t flags_, bool can_edit_, std::int32_t user_id_, std::int32_t inviter_id_, std::int32_t promoted_by_, std::int32_t date_, object_ptr<channelAdminRights> &&admin_rights_);

  static const std::int32_t ID = -1473271656;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<channelParticipantAdmin> fetch(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class channelParticipantBanned final : public ChannelParticipant {
 public:
  std::int32_t flags_;
  bool left_;
  std::int32_t user_id_;
  std::int32_t kicked_by_;
  std::int32_t date_;
  object_ptr<channelBannedRights> banned_rights_;
  enum Flags : std::int32_t {LEFT_MASK = 1};

  channelParticipantBanned();

  channelParticipantBanned(std::int32_t flags_, bool left_, std::int32_t user_id_, std::int32_t kicked_by_, std::int32_t date_, object_ptr<channelBannedRights> &&banned_rights_);

  static const std::int32_t ID = 573315206;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<channelParticipantBanned> fetch(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class ChannelParticipantsFilter: public Object {
 public:
};

class channelParticipantsRecent final : public ChannelParticipantsFilter {
 public:

  channelParticipantsRecent();

  static const std::int32_t ID = -566281095;
  std::int32_t get_id() const final {
    return ID;
  }

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class channelParticipantsAdmins final : public ChannelParticipantsFilter {
 public:

  channelParticipantsAdmins();

  static const std::int32_t ID = -1268741783;
  std::int32_t get_id() const final {
    return ID;
  }

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class channelParticipantsKicked final : public ChannelParticipantsFilter {
 public:
  std::string q_;

  channelParticipantsKicked();

  explicit channelParticipantsKicked(std::string const &q_);

  static const std::int32_t ID = -1548400251;
  std::int32_t get_id() const final {
    return ID;
  }

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class channelParticipantsBots final : public ChannelParticipantsFilter {
 public:

  channelParticipantsBots();

  static const std::int32_t ID = -1328445861;
  std::int32_t get_id() const final {
    return ID;
  }

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class channelParticipantsBanned final : public ChannelParticipantsFilter {
 public:
  std::string q_;

  channelParticipantsBanned();

  explicit channelParticipantsBanned(std::string const &q_);

  static const std::int32_t ID = 338142689;
  std::int32_t get_id() const final {
    return ID;
  }

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class channelParticipantsSearch final : public ChannelParticipantsFilter {
 public:
  std::string q_;

  channelParticipantsSearch();

  explicit channelParticipantsSearch(std::string const &q_);

  static const std::int32_t ID = 106343499;
  std::int32_t get_id() const final {
    return ID;
  }

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class Chat: public Object {
 public:

  static object_ptr<Chat> fetch(TlBufferParser &p);
};

class chatEmpty final : public Chat {
 public:
  std::int32_t id_;

  chatEmpty();

  explicit chatEmpty(std::int32_t id_);

  static const std::int32_t ID = -1683826688;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<chatEmpty> fetch(TlBufferParser &p) {
    return make_tl_object<chatEmpty>(p);
  }

  explicit chatEmpty(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class chat final : public Chat {
 public:
  std::int32_t flags_;
  bool creator_;
  bool kicked_;
  bool left_;
  bool admins_enabled_;
  bool admin_;
  bool deactivated_;
  std::int32_t id_;
  std::string title_;
  object_ptr<ChatPhoto> photo_;
  std::int32_t participants_count_;
  std::int32_t date_;
  std::int32_t version_;
  object_ptr<InputChannel> migrated_to_;
  enum Flags : std::int32_t {CREATOR_MASK = 1, KICKED_MASK = 2, LEFT_MASK = 4, ADMINS_ENABLED_MASK = 8, ADMIN_MASK = 16, DEACTIVATED_MASK = 32, MIGRATED_TO_MASK = 64};

  chat();

  chat(std::int32_t flags_, bool creator_, bool kicked_, bool left_, bool admins_enabled_, bool admin_, bool deactivated_, std::int32_t id_, std::string const &title_, object_ptr<ChatPhoto> &&photo_, std::int32_t participants_count_, std::int32_t date_, std::int32_t version_, object_ptr<InputChannel> &&migrated_to_);

  static const std::int32_t ID = -652419756;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<chat> fetch(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class chatForbidden final : public Chat {
 public:
  std::int32_t id_;
  std::string title_;

  chatForbidden();

  chatForbidden(std::int32_t id_, std::string const &title_);

  static const std::int32_t ID = 120753115;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<chatForbidden> fetch(TlBufferParser &p) {
    return make_tl_object<chatForbidden>(p);
  }

  explicit chatForbidden(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class channel final : public Chat {
 public:
  std::int32_t flags_;
  bool creator_;
  bool left_;
  bool editor_;
  bool broadcast_;
  bool verified_;
  bool megagroup_;
  bool restricted_;
  bool democracy_;
  bool signatures_;
  bool min_;
  std::int32_t id_;
  std::int64_t access_hash_;
  std::string title_;
  std::string username_;
  object_ptr<ChatPhoto> photo_;
  std::int32_t date_;
  std::int32_t version_;
  std::string restriction_reason_;
  object_ptr<channelAdminRights> admin_rights_;
  object_ptr<channelBannedRights> banned_rights_;
  std::int32_t participants_count_;
  enum Flags : std::int32_t {CREATOR_MASK = 1, LEFT_MASK = 4, EDITOR_MASK = 8, BROADCAST_MASK = 32, VERIFIED_MASK = 128, MEGAGROUP_MASK = 256, RESTRICTED_MASK = 512, DEMOCRACY_MASK = 1024, SIGNATURES_MASK = 2048, MIN_MASK = 4096, ACCESS_HASH_MASK = 8192, USERNAME_MASK = 64, RESTRICTION_REASON_MASK = 512, ADMIN_RIGHTS_MASK = 16384, BANNED_RIGHTS_MASK = 32768, PARTICIPANTS_COUNT_MASK = 131072};

  channel();

  channel(std::int32_t flags_, bool creator_, bool left_, bool editor_, bool broadcast_, bool verified_, bool megagroup_, bool restricted_, bool democracy_, bool signatures_, bool min_, std::int32_t id_, std::int64_t access_hash_, std::string const &title_, std::string const &username_, object_ptr<ChatPhoto> &&photo_, std::int32_t date_, std::int32_t version_, std::string const &restriction_reason_, object_ptr<channelAdminRights> &&admin_rights_, object_ptr<channelBannedRights> &&banned_rights_, std::int32_t participants_count_);

  static const std::int32_t ID = -930515796;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<channel> fetch(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class channelForbidden final : public Chat {
 public:
  std::int32_t flags_;
  bool broadcast_;
  bool megagroup_;
  std::int32_t id_;
  std::int64_t access_hash_;
  std::string title_;
  std::int32_t until_date_;
  enum Flags : std::int32_t {BROADCAST_MASK = 32, MEGAGROUP_MASK = 256, UNTIL_DATE_MASK = 65536};

  channelForbidden();

  channelForbidden(std::int32_t flags_, bool broadcast_, bool megagroup_, std::int32_t id_, std::int64_t access_hash_, std::string const &title_, std::int32_t until_date_);

  static const std::int32_t ID = 681420594;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<channelForbidden> fetch(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class ChatFull: public Object {
 public:

  static object_ptr<ChatFull> fetch(TlBufferParser &p);
};

class chatFull final : public ChatFull {
 public:
  std::int32_t id_;
  object_ptr<ChatParticipants> participants_;
  object_ptr<Photo> chat_photo_;
  object_ptr<peerNotifySettings> notify_settings_;
  object_ptr<ExportedChatInvite> exported_invite_;
  std::vector<object_ptr<botInfo>> bot_info_;

  chatFull();

  chatFull(std::int32_t id_, object_ptr<ChatParticipants> &&participants_, object_ptr<Photo> &&chat_photo_, object_ptr<peerNotifySettings> &&notify_settings_, object_ptr<ExportedChatInvite> &&exported_invite_, std::vector<object_ptr<botInfo>> &&bot_info_);

  static const std::int32_t ID = 771925524;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<chatFull> fetch(TlBufferParser &p) {
    return make_tl_object<chatFull>(p);
  }

  explicit chatFull(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class channelFull final : public ChatFull {
 public:
  std::int32_t flags_;
  bool can_view_participants_;
  bool can_set_username_;
  bool can_set_stickers_;
  bool hidden_prehistory_;
  std::int32_t id_;
  std::string about_;
  std::int32_t participants_count_;
  std::int32_t admins_count_;
  std::int32_t kicked_count_;
  std::int32_t banned_count_;
  std::int32_t read_inbox_max_id_;
  std::int32_t read_outbox_max_id_;
  std::int32_t unread_count_;
  object_ptr<Photo> chat_photo_;
  object_ptr<peerNotifySettings> notify_settings_;
  object_ptr<ExportedChatInvite> exported_invite_;
  std::vector<object_ptr<botInfo>> bot_info_;
  std::int32_t migrated_from_chat_id_;
  std::int32_t migrated_from_max_id_;
  std::int32_t pinned_msg_id_;
  object_ptr<stickerSet> stickerset_;
  std::int32_t available_min_id_;
  enum Flags : std::int32_t {CAN_VIEW_PARTICIPANTS_MASK = 8, CAN_SET_USERNAME_MASK = 64, CAN_SET_STICKERS_MASK = 128, HIDDEN_PREHISTORY_MASK = 1024, PARTICIPANTS_COUNT_MASK = 1, ADMINS_COUNT_MASK = 2, KICKED_COUNT_MASK = 4, BANNED_COUNT_MASK = 4, MIGRATED_FROM_CHAT_ID_MASK = 16, MIGRATED_FROM_MAX_ID_MASK = 16, PINNED_MSG_ID_MASK = 32, STICKERSET_MASK = 256, AVAILABLE_MIN_ID_MASK = 512};

  channelFull();

  channelFull(std::int32_t flags_, bool can_view_participants_, bool can_set_username_, bool can_set_stickers_, bool hidden_prehistory_, std::int32_t id_, std::string const &about_, std::int32_t participants_count_, std::int32_t admins_count_, std::int32_t kicked_count_, std::int32_t banned_count_, std::int32_t read_inbox_max_id_, std::int32_t read_outbox_max_id_, std::int32_t unread_count_, object_ptr<Photo> &&chat_photo_, object_ptr<peerNotifySettings> &&notify_settings_, object_ptr<ExportedChatInvite> &&exported_invite_, std::vector<object_ptr<botInfo>> &&bot_info_, std::int32_t migrated_from_chat_id_, std::int32_t migrated_from_max_id_, std::int32_t pinned_msg_id_, object_ptr<stickerSet> &&stickerset_, std::int32_t available_min_id_);

  static const std::int32_t ID = 1991201921;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<channelFull> fetch(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class ChatInvite: public Object {
 public:

  static object_ptr<ChatInvite> fetch(TlBufferParser &p);
};

class chatInviteAlready final : public ChatInvite {
 public:
  object_ptr<Chat> chat_;

  chatInviteAlready();

  explicit chatInviteAlready(object_ptr<Chat> &&chat_);

  static const std::int32_t ID = 1516793212;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<chatInviteAlready> fetch(TlBufferParser &p) {
    return make_tl_object<chatInviteAlready>(p);
  }

  explicit chatInviteAlready(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class chatInvite final : public ChatInvite {
 public:
  std::int32_t flags_;
  bool channel_;
  bool broadcast_;
  bool public_;
  bool megagroup_;
  std::string title_;
  object_ptr<ChatPhoto> photo_;
  std::int32_t participants_count_;
  std::vector<object_ptr<User>> participants_;
  enum Flags : std::int32_t {CHANNEL_MASK = 1, BROADCAST_MASK = 2, PUBLIC_MASK = 4, MEGAGROUP_MASK = 8, PARTICIPANTS_MASK = 16};

  chatInvite();

  chatInvite(std::int32_t flags_, bool channel_, bool broadcast_, bool public_, bool megagroup_, std::string const &title_, object_ptr<ChatPhoto> &&photo_, std::int32_t participants_count_, std::vector<object_ptr<User>> &&participants_);

  static const std::int32_t ID = -613092008;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<chatInvite> fetch(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class ChatParticipant: public Object {
 public:

  static object_ptr<ChatParticipant> fetch(TlBufferParser &p);
};

class chatParticipant final : public ChatParticipant {
 public:
  std::int32_t user_id_;
  std::int32_t inviter_id_;
  std::int32_t date_;

  chatParticipant();

  chatParticipant(std::int32_t user_id_, std::int32_t inviter_id_, std::int32_t date_);

  static const std::int32_t ID = -925415106;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<chatParticipant> fetch(TlBufferParser &p) {
    return make_tl_object<chatParticipant>(p);
  }

  explicit chatParticipant(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class chatParticipantCreator final : public ChatParticipant {
 public:
  std::int32_t user_id_;

  chatParticipantCreator();

  explicit chatParticipantCreator(std::int32_t user_id_);

  static const std::int32_t ID = -636267638;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<chatParticipantCreator> fetch(TlBufferParser &p) {
    return make_tl_object<chatParticipantCreator>(p);
  }

  explicit chatParticipantCreator(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class chatParticipantAdmin final : public ChatParticipant {
 public:
  std::int32_t user_id_;
  std::int32_t inviter_id_;
  std::int32_t date_;

  chatParticipantAdmin();

  chatParticipantAdmin(std::int32_t user_id_, std::int32_t inviter_id_, std::int32_t date_);

  static const std::int32_t ID = -489233354;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<chatParticipantAdmin> fetch(TlBufferParser &p) {
    return make_tl_object<chatParticipantAdmin>(p);
  }

  explicit chatParticipantAdmin(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class ChatParticipants: public Object {
 public:

  static object_ptr<ChatParticipants> fetch(TlBufferParser &p);
};

class chatParticipantsForbidden final : public ChatParticipants {
 public:
  std::int32_t flags_;
  std::int32_t chat_id_;
  object_ptr<ChatParticipant> self_participant_;
  enum Flags : std::int32_t {SELF_PARTICIPANT_MASK = 1};

  chatParticipantsForbidden();

  chatParticipantsForbidden(std::int32_t flags_, std::int32_t chat_id_, object_ptr<ChatParticipant> &&self_participant_);

  static const std::int32_t ID = -57668565;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<chatParticipantsForbidden> fetch(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class chatParticipants final : public ChatParticipants {
 public:
  std::int32_t chat_id_;
  std::vector<object_ptr<ChatParticipant>> participants_;
  std::int32_t version_;

  chatParticipants();

  chatParticipants(std::int32_t chat_id_, std::vector<object_ptr<ChatParticipant>> &&participants_, std::int32_t version_);

  static const std::int32_t ID = 1061556205;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<chatParticipants> fetch(TlBufferParser &p) {
    return make_tl_object<chatParticipants>(p);
  }

  explicit chatParticipants(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class ChatPhoto: public Object {
 public:

  static object_ptr<ChatPhoto> fetch(TlBufferParser &p);
};

class chatPhotoEmpty final : public ChatPhoto {
 public:

  chatPhotoEmpty();

  static const std::int32_t ID = 935395612;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<chatPhotoEmpty> fetch(TlBufferParser &p) {
    return make_tl_object<chatPhotoEmpty>(p);
  }

  explicit chatPhotoEmpty(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class chatPhoto final : public ChatPhoto {
 public:
  object_ptr<FileLocation> photo_small_;
  object_ptr<FileLocation> photo_big_;

  chatPhoto();

  chatPhoto(object_ptr<FileLocation> &&photo_small_, object_ptr<FileLocation> &&photo_big_);

  static const std::int32_t ID = 1632839530;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<chatPhoto> fetch(TlBufferParser &p) {
    return make_tl_object<chatPhoto>(p);
  }

  explicit chatPhoto(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class config final : public Object {
 public:
  std::int32_t flags_;
  bool phonecalls_enabled_;
  bool default_p2p_contacts_;
  bool preload_featured_stickers_;
  bool ignore_phone_entities_;
  bool revoke_pm_inbox_;
  bool blocked_mode_;
  std::int32_t date_;
  std::int32_t expires_;
  bool test_mode_;
  std::int32_t this_dc_;
  std::vector<object_ptr<dcOption>> dc_options_;
  std::string dc_txt_domain_name_;
  std::int32_t chat_size_max_;
  std::int32_t megagroup_size_max_;
  std::int32_t forwarded_count_max_;
  std::int32_t online_update_period_ms_;
  std::int32_t offline_blur_timeout_ms_;
  std::int32_t offline_idle_timeout_ms_;
  std::int32_t online_cloud_timeout_ms_;
  std::int32_t notify_cloud_delay_ms_;
  std::int32_t notify_default_delay_ms_;
  std::int32_t push_chat_period_ms_;
  std::int32_t push_chat_limit_;
  std::int32_t saved_gifs_limit_;
  std::int32_t edit_time_limit_;
  std::int32_t revoke_time_limit_;
  std::int32_t revoke_pm_time_limit_;
  std::int32_t rating_e_decay_;
  std::int32_t stickers_recent_limit_;
  std::int32_t stickers_faved_limit_;
  std::int32_t channels_read_media_period_;
  std::int32_t tmp_sessions_;
  std::int32_t pinned_dialogs_count_max_;
  std::int32_t call_receive_timeout_ms_;
  std::int32_t call_ring_timeout_ms_;
  std::int32_t call_connect_timeout_ms_;
  std::int32_t call_packet_timeout_ms_;
  std::string me_url_prefix_;
  std::string autoupdate_url_prefix_;
  std::string gif_search_username_;
  std::string venue_search_username_;
  std::string img_search_username_;
  std::string static_maps_provider_;
  std::int32_t caption_length_max_;
  std::int32_t message_length_max_;
  std::int32_t webfile_dc_id_;
  std::string suggested_lang_code_;
  std::int32_t lang_pack_version_;
  enum Flags : std::int32_t {PHONECALLS_ENABLED_MASK = 2, DEFAULT_P2P_CONTACTS_MASK = 8, PRELOAD_FEATURED_STICKERS_MASK = 16, IGNORE_PHONE_ENTITIES_MASK = 32, REVOKE_PM_INBOX_MASK = 64, BLOCKED_MODE_MASK = 256, TMP_SESSIONS_MASK = 1, AUTOUPDATE_URL_PREFIX_MASK = 128, GIF_SEARCH_USERNAME_MASK = 512, VENUE_SEARCH_USERNAME_MASK = 1024, IMG_SEARCH_USERNAME_MASK = 2048, STATIC_MAPS_PROVIDER_MASK = 4096, SUGGESTED_LANG_CODE_MASK = 4, LANG_PACK_VERSION_MASK = 4};

  config();

  config(std::int32_t flags_, bool phonecalls_enabled_, bool default_p2p_contacts_, bool preload_featured_stickers_, bool ignore_phone_entities_, bool revoke_pm_inbox_, bool blocked_mode_, std::int32_t date_, std::int32_t expires_, bool test_mode_, std::int32_t this_dc_, std::vector<object_ptr<dcOption>> &&dc_options_, std::string const &dc_txt_domain_name_, std::int32_t chat_size_max_, std::int32_t megagroup_size_max_, std::int32_t forwarded_count_max_, std::int32_t online_update_period_ms_, std::int32_t offline_blur_timeout_ms_, std::int32_t offline_idle_timeout_ms_, std::int32_t online_cloud_timeout_ms_, std::int32_t notify_cloud_delay_ms_, std::int32_t notify_default_delay_ms_, std::int32_t push_chat_period_ms_, std::int32_t push_chat_limit_, std::int32_t saved_gifs_limit_, std::int32_t edit_time_limit_, std::int32_t revoke_time_limit_, std::int32_t revoke_pm_time_limit_, std::int32_t rating_e_decay_, std::int32_t stickers_recent_limit_, std::int32_t stickers_faved_limit_, std::int32_t channels_read_media_period_, std::int32_t tmp_sessions_, std::int32_t pinned_dialogs_count_max_, std::int32_t call_receive_timeout_ms_, std::int32_t call_ring_timeout_ms_, std::int32_t call_connect_timeout_ms_, std::int32_t call_packet_timeout_ms_, std::string const &me_url_prefix_, std::string const &autoupdate_url_prefix_, std::string const &gif_search_username_, std::string const &venue_search_username_, std::string const &img_search_username_, std::string const &static_maps_provider_, std::int32_t caption_length_max_, std::int32_t message_length_max_, std::int32_t webfile_dc_id_, std::string const &suggested_lang_code_, std::int32_t lang_pack_version_);

  static const std::int32_t ID = 840162234;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<config> fetch(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class contact final : public Object {
 public:
  std::int32_t user_id_;
  bool mutual_;

  contact();

  contact(std::int32_t user_id_, bool mutual_);

  static const std::int32_t ID = -116274796;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<contact> fetch(TlBufferParser &p) {
    return make_tl_object<contact>(p);
  }

  explicit contact(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class contactBlocked final : public Object {
 public:
  std::int32_t user_id_;
  std::int32_t date_;

  contactBlocked();

  contactBlocked(std::int32_t user_id_, std::int32_t date_);

  static const std::int32_t ID = 1444661369;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<contactBlocked> fetch(TlBufferParser &p) {
    return make_tl_object<contactBlocked>(p);
  }

  explicit contactBlocked(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class ContactLink: public Object {
 public:

  static object_ptr<ContactLink> fetch(TlBufferParser &p);
};

class contactLinkUnknown final : public ContactLink {
 public:

  contactLinkUnknown();

  static const std::int32_t ID = 1599050311;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<contactLinkUnknown> fetch(TlBufferParser &p) {
    return make_tl_object<contactLinkUnknown>(p);
  }

  explicit contactLinkUnknown(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class contactLinkNone final : public ContactLink {
 public:

  contactLinkNone();

  static const std::int32_t ID = -17968211;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<contactLinkNone> fetch(TlBufferParser &p) {
    return make_tl_object<contactLinkNone>(p);
  }

  explicit contactLinkNone(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class contactLinkHasPhone final : public ContactLink {
 public:

  contactLinkHasPhone();

  static const std::int32_t ID = 646922073;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<contactLinkHasPhone> fetch(TlBufferParser &p) {
    return make_tl_object<contactLinkHasPhone>(p);
  }

  explicit contactLinkHasPhone(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class contactLinkContact final : public ContactLink {
 public:

  contactLinkContact();

  static const std::int32_t ID = -721239344;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<contactLinkContact> fetch(TlBufferParser &p) {
    return make_tl_object<contactLinkContact>(p);
  }

  explicit contactLinkContact(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class contactStatus final : public Object {
 public:
  std::int32_t user_id_;
  object_ptr<UserStatus> status_;

  contactStatus();

  contactStatus(std::int32_t user_id_, object_ptr<UserStatus> &&status_);

  static const std::int32_t ID = -748155807;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<contactStatus> fetch(TlBufferParser &p) {
    return make_tl_object<contactStatus>(p);
  }

  explicit contactStatus(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class dataJSON final : public Object {
 public:
  std::string data_;

  dataJSON();

  explicit dataJSON(std::string const &data_);

  static const std::int32_t ID = 2104790276;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<dataJSON> fetch(TlBufferParser &p) {
    return make_tl_object<dataJSON>(p);
  }

  explicit dataJSON(TlBufferParser &p);

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class dcOption final : public Object {
 public:
  std::int32_t flags_;
  bool ipv6_;
  bool media_only_;
  bool tcpo_only_;
  bool cdn_;
  bool static_;
  std::int32_t id_;
  std::string ip_address_;
  std::int32_t port_;
  BufferSlice secret_;
  enum Flags : std::int32_t {IPV6_MASK = 1, MEDIA_ONLY_MASK = 2, TCPO_ONLY_MASK = 4, CDN_MASK = 8, STATIC_MASK = 16, SECRET_MASK = 1024};

  dcOption();

  dcOption(std::int32_t flags_, bool ipv6_, bool media_only_, bool tcpo_only_, bool cdn_, bool static_, std::int32_t id_, std::string const &ip_address_, std::int32_t port_, BufferSlice &&secret_);

  static const std::int32_t ID = 414687501;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<dcOption> fetch(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class dialog final : public Object {
 public:
  std::int32_t flags_;
  bool pinned_;
  bool unread_mark_;
  object_ptr<Peer> peer_;
  std::int32_t top_message_;
  std::int32_t read_inbox_max_id_;
  std::int32_t read_outbox_max_id_;
  std::int32_t unread_count_;
  std::int32_t unread_mentions_count_;
  object_ptr<peerNotifySettings> notify_settings_;
  std::int32_t pts_;
  object_ptr<DraftMessage> draft_;
  enum Flags : std::int32_t {PINNED_MASK = 4, UNREAD_MARK_MASK = 8, PTS_MASK = 1, DRAFT_MASK = 2};

  dialog();

  dialog(std::int32_t flags_, bool pinned_, bool unread_mark_, object_ptr<Peer> &&peer_, std::int32_t top_message_, std::int32_t read_inbox_max_id_, std::int32_t read_outbox_max_id_, std::int32_t unread_count_, std::int32_t unread_mentions_count_, object_ptr<peerNotifySettings> &&notify_settings_, std::int32_t pts_, object_ptr<DraftMessage> &&draft_);

  static const std::int32_t ID = -455150117;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<dialog> fetch(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class dialogPeer final : public Object {
 public:
  object_ptr<Peer> peer_;

  dialogPeer();

  explicit dialogPeer(object_ptr<Peer> &&peer_);

  static const std::int32_t ID = -445792507;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<dialogPeer> fetch(TlBufferParser &p) {
    return make_tl_object<dialogPeer>(p);
  }

  explicit dialogPeer(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class Document: public Object {
 public:

  static object_ptr<Document> fetch(TlBufferParser &p);
};

class documentEmpty final : public Document {
 public:
  std::int64_t id_;

  documentEmpty();

  explicit documentEmpty(std::int64_t id_);

  static const std::int32_t ID = 922273905;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<documentEmpty> fetch(TlBufferParser &p) {
    return make_tl_object<documentEmpty>(p);
  }

  explicit documentEmpty(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class document final : public Document {
 public:
  std::int64_t id_;
  std::int64_t access_hash_;
  std::int32_t date_;
  std::string mime_type_;
  std::int32_t size_;
  object_ptr<PhotoSize> thumb_;
  std::int32_t dc_id_;
  std::int32_t version_;
  std::vector<object_ptr<DocumentAttribute>> attributes_;

  document();

  document(std::int64_t id_, std::int64_t access_hash_, std::int32_t date_, std::string const &mime_type_, std::int32_t size_, object_ptr<PhotoSize> &&thumb_, std::int32_t dc_id_, std::int32_t version_, std::vector<object_ptr<DocumentAttribute>> &&attributes_);

  static const std::int32_t ID = -2027738169;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<document> fetch(TlBufferParser &p) {
    return make_tl_object<document>(p);
  }

  explicit document(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class DocumentAttribute: public Object {
 public:

  static object_ptr<DocumentAttribute> fetch(TlBufferParser &p);
};

class documentAttributeImageSize final : public DocumentAttribute {
 public:
  std::int32_t w_;
  std::int32_t h_;

  documentAttributeImageSize();

  documentAttributeImageSize(std::int32_t w_, std::int32_t h_);

  static const std::int32_t ID = 1815593308;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<documentAttributeImageSize> fetch(TlBufferParser &p) {
    return make_tl_object<documentAttributeImageSize>(p);
  }

  explicit documentAttributeImageSize(TlBufferParser &p);

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class documentAttributeAnimated final : public DocumentAttribute {
 public:

  documentAttributeAnimated();

  static const std::int32_t ID = 297109817;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<documentAttributeAnimated> fetch(TlBufferParser &p) {
    return make_tl_object<documentAttributeAnimated>(p);
  }

  explicit documentAttributeAnimated(TlBufferParser &p);

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class documentAttributeSticker final : public DocumentAttribute {
 public:
  std::int32_t flags_;
  bool mask_;
  std::string alt_;
  object_ptr<InputStickerSet> stickerset_;
  object_ptr<maskCoords> mask_coords_;
  enum Flags : std::int32_t {MASK_MASK = 2, MASK_COORDS_MASK = 1};

  documentAttributeSticker();

  documentAttributeSticker(std::int32_t flags_, bool mask_, std::string const &alt_, object_ptr<InputStickerSet> &&stickerset_, object_ptr<maskCoords> &&mask_coords_);

  static const std::int32_t ID = 1662637586;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<documentAttributeSticker> fetch(TlBufferParser &p);

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class documentAttributeVideo final : public DocumentAttribute {
 public:
  std::int32_t flags_;
  bool round_message_;
  bool supports_streaming_;
  std::int32_t duration_;
  std::int32_t w_;
  std::int32_t h_;
  enum Flags : std::int32_t {ROUND_MESSAGE_MASK = 1, SUPPORTS_STREAMING_MASK = 2};

  documentAttributeVideo();

  documentAttributeVideo(std::int32_t flags_, bool round_message_, bool supports_streaming_, std::int32_t duration_, std::int32_t w_, std::int32_t h_);

  static const std::int32_t ID = 250621158;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<documentAttributeVideo> fetch(TlBufferParser &p);

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class documentAttributeAudio final : public DocumentAttribute {
 public:
  std::int32_t flags_;
  bool voice_;
  std::int32_t duration_;
  std::string title_;
  std::string performer_;
  BufferSlice waveform_;
  enum Flags : std::int32_t {VOICE_MASK = 1024, TITLE_MASK = 1, PERFORMER_MASK = 2, WAVEFORM_MASK = 4};

  documentAttributeAudio();

  documentAttributeAudio(std::int32_t flags_, bool voice_, std::int32_t duration_, std::string const &title_, std::string const &performer_, BufferSlice &&waveform_);

  static const std::int32_t ID = -1739392570;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<documentAttributeAudio> fetch(TlBufferParser &p);

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class documentAttributeFilename final : public DocumentAttribute {
 public:
  std::string file_name_;

  documentAttributeFilename();

  explicit documentAttributeFilename(std::string const &file_name_);

  static const std::int32_t ID = 358154344;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<documentAttributeFilename> fetch(TlBufferParser &p) {
    return make_tl_object<documentAttributeFilename>(p);
  }

  explicit documentAttributeFilename(TlBufferParser &p);

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class documentAttributeHasStickers final : public DocumentAttribute {
 public:

  documentAttributeHasStickers();

  static const std::int32_t ID = -1744710921;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<documentAttributeHasStickers> fetch(TlBufferParser &p) {
    return make_tl_object<documentAttributeHasStickers>(p);
  }

  explicit documentAttributeHasStickers(TlBufferParser &p);

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class DraftMessage: public Object {
 public:

  static object_ptr<DraftMessage> fetch(TlBufferParser &p);
};

class draftMessageEmpty final : public DraftMessage {
 public:
  std::int32_t flags_;
  std::int32_t date_;
  enum Flags : std::int32_t {DATE_MASK = 1};

  draftMessageEmpty();

  draftMessageEmpty(std::int32_t flags_, std::int32_t date_);

  static const std::int32_t ID = 453805082;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<draftMessageEmpty> fetch(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class draftMessage final : public DraftMessage {
 public:
  std::int32_t flags_;
  bool no_webpage_;
  std::int32_t reply_to_msg_id_;
  std::string message_;
  std::vector<object_ptr<MessageEntity>> entities_;
  std::int32_t date_;
  enum Flags : std::int32_t {NO_WEBPAGE_MASK = 2, REPLY_TO_MSG_ID_MASK = 1, ENTITIES_MASK = 8};

  draftMessage();

  draftMessage(std::int32_t flags_, bool no_webpage_, std::int32_t reply_to_msg_id_, std::string const &message_, std::vector<object_ptr<MessageEntity>> &&entities_, std::int32_t date_);

  static const std::int32_t ID = -40996577;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<draftMessage> fetch(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class EncryptedChat: public Object {
 public:

  static object_ptr<EncryptedChat> fetch(TlBufferParser &p);
};

class encryptedChatEmpty final : public EncryptedChat {
 public:
  std::int32_t id_;

  encryptedChatEmpty();

  explicit encryptedChatEmpty(std::int32_t id_);

  static const std::int32_t ID = -1417756512;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<encryptedChatEmpty> fetch(TlBufferParser &p) {
    return make_tl_object<encryptedChatEmpty>(p);
  }

  explicit encryptedChatEmpty(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class encryptedChatWaiting final : public EncryptedChat {
 public:
  std::int32_t id_;
  std::int64_t access_hash_;
  std::int32_t date_;
  std::int32_t admin_id_;
  std::int32_t participant_id_;

  encryptedChatWaiting();

  encryptedChatWaiting(std::int32_t id_, std::int64_t access_hash_, std::int32_t date_, std::int32_t admin_id_, std::int32_t participant_id_);

  static const std::int32_t ID = 1006044124;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<encryptedChatWaiting> fetch(TlBufferParser &p) {
    return make_tl_object<encryptedChatWaiting>(p);
  }

  explicit encryptedChatWaiting(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class encryptedChatRequested final : public EncryptedChat {
 public:
  std::int32_t id_;
  std::int64_t access_hash_;
  std::int32_t date_;
  std::int32_t admin_id_;
  std::int32_t participant_id_;
  BufferSlice g_a_;

  encryptedChatRequested();

  encryptedChatRequested(std::int32_t id_, std::int64_t access_hash_, std::int32_t date_, std::int32_t admin_id_, std::int32_t participant_id_, BufferSlice &&g_a_);

  static const std::int32_t ID = -931638658;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<encryptedChatRequested> fetch(TlBufferParser &p) {
    return make_tl_object<encryptedChatRequested>(p);
  }

  explicit encryptedChatRequested(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class encryptedChat final : public EncryptedChat {
 public:
  std::int32_t id_;
  std::int64_t access_hash_;
  std::int32_t date_;
  std::int32_t admin_id_;
  std::int32_t participant_id_;
  BufferSlice g_a_or_b_;
  std::int64_t key_fingerprint_;

  encryptedChat();

  encryptedChat(std::int32_t id_, std::int64_t access_hash_, std::int32_t date_, std::int32_t admin_id_, std::int32_t participant_id_, BufferSlice &&g_a_or_b_, std::int64_t key_fingerprint_);

  static const std::int32_t ID = -94974410;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<encryptedChat> fetch(TlBufferParser &p) {
    return make_tl_object<encryptedChat>(p);
  }

  explicit encryptedChat(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class encryptedChatDiscarded final : public EncryptedChat {
 public:
  std::int32_t id_;

  encryptedChatDiscarded();

  explicit encryptedChatDiscarded(std::int32_t id_);

  static const std::int32_t ID = 332848423;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<encryptedChatDiscarded> fetch(TlBufferParser &p) {
    return make_tl_object<encryptedChatDiscarded>(p);
  }

  explicit encryptedChatDiscarded(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class EncryptedFile: public Object {
 public:

  static object_ptr<EncryptedFile> fetch(TlBufferParser &p);
};

class encryptedFileEmpty final : public EncryptedFile {
 public:

  encryptedFileEmpty();

  static const std::int32_t ID = -1038136962;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<encryptedFileEmpty> fetch(TlBufferParser &p) {
    return make_tl_object<encryptedFileEmpty>(p);
  }

  explicit encryptedFileEmpty(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class encryptedFile final : public EncryptedFile {
 public:
  std::int64_t id_;
  std::int64_t access_hash_;
  std::int32_t size_;
  std::int32_t dc_id_;
  std::int32_t key_fingerprint_;

  encryptedFile();

  encryptedFile(std::int64_t id_, std::int64_t access_hash_, std::int32_t size_, std::int32_t dc_id_, std::int32_t key_fingerprint_);

  static const std::int32_t ID = 1248893260;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<encryptedFile> fetch(TlBufferParser &p) {
    return make_tl_object<encryptedFile>(p);
  }

  explicit encryptedFile(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class EncryptedMessage: public Object {
 public:

  static object_ptr<EncryptedMessage> fetch(TlBufferParser &p);
};

class encryptedMessage final : public EncryptedMessage {
 public:
  std::int64_t random_id_;
  std::int32_t chat_id_;
  std::int32_t date_;
  BufferSlice bytes_;
  object_ptr<EncryptedFile> file_;

  encryptedMessage();

  encryptedMessage(std::int64_t random_id_, std::int32_t chat_id_, std::int32_t date_, BufferSlice &&bytes_, object_ptr<EncryptedFile> &&file_);

  static const std::int32_t ID = -317144808;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<encryptedMessage> fetch(TlBufferParser &p) {
    return make_tl_object<encryptedMessage>(p);
  }

  explicit encryptedMessage(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class encryptedMessageService final : public EncryptedMessage {
 public:
  std::int64_t random_id_;
  std::int32_t chat_id_;
  std::int32_t date_;
  BufferSlice bytes_;

  encryptedMessageService();

  encryptedMessageService(std::int64_t random_id_, std::int32_t chat_id_, std::int32_t date_, BufferSlice &&bytes_);

  static const std::int32_t ID = 594758406;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<encryptedMessageService> fetch(TlBufferParser &p) {
    return make_tl_object<encryptedMessageService>(p);
  }

  explicit encryptedMessageService(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class error final : public Object {
 public:
  std::int32_t code_;
  std::string text_;

  error();

  error(std::int32_t code_, std::string const &text_);

  static const std::int32_t ID = -994444869;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<error> fetch(TlBufferParser &p) {
    return make_tl_object<error>(p);
  }

  explicit error(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class ExportedChatInvite: public Object {
 public:

  static object_ptr<ExportedChatInvite> fetch(TlBufferParser &p);
};

class chatInviteEmpty final : public ExportedChatInvite {
 public:

  chatInviteEmpty();

  static const std::int32_t ID = 1776236393;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<chatInviteEmpty> fetch(TlBufferParser &p) {
    return make_tl_object<chatInviteEmpty>(p);
  }

  explicit chatInviteEmpty(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class chatInviteExported final : public ExportedChatInvite {
 public:
  std::string link_;

  chatInviteExported();

  explicit chatInviteExported(std::string const &link_);

  static const std::int32_t ID = -64092740;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<chatInviteExported> fetch(TlBufferParser &p) {
    return make_tl_object<chatInviteExported>(p);
  }

  explicit chatInviteExported(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class exportedMessageLink final : public Object {
 public:
  std::string link_;
  std::string html_;

  exportedMessageLink();

  exportedMessageLink(std::string const &link_, std::string const &html_);

  static const std::int32_t ID = 1571494644;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<exportedMessageLink> fetch(TlBufferParser &p) {
    return make_tl_object<exportedMessageLink>(p);
  }

  explicit exportedMessageLink(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class fileHash final : public Object {
 public:
  std::int32_t offset_;
  std::int32_t limit_;
  BufferSlice hash_;

  fileHash();

  fileHash(std::int32_t offset_, std::int32_t limit_, BufferSlice &&hash_);

  static const std::int32_t ID = 1648543603;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<fileHash> fetch(TlBufferParser &p) {
    return make_tl_object<fileHash>(p);
  }

  explicit fileHash(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class FileLocation: public Object {
 public:

  static object_ptr<FileLocation> fetch(TlBufferParser &p);
};

class fileLocationUnavailable final : public FileLocation {
 public:
  std::int64_t volume_id_;
  std::int32_t local_id_;
  std::int64_t secret_;

  fileLocationUnavailable();

  fileLocationUnavailable(std::int64_t volume_id_, std::int32_t local_id_, std::int64_t secret_);

  static const std::int32_t ID = 2086234950;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<fileLocationUnavailable> fetch(TlBufferParser &p) {
    return make_tl_object<fileLocationUnavailable>(p);
  }

  explicit fileLocationUnavailable(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class fileLocation final : public FileLocation {
 public:
  std::int32_t dc_id_;
  std::int64_t volume_id_;
  std::int32_t local_id_;
  std::int64_t secret_;

  fileLocation();

  fileLocation(std::int32_t dc_id_, std::int64_t volume_id_, std::int32_t local_id_, std::int64_t secret_);

  static const std::int32_t ID = 1406570614;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<fileLocation> fetch(TlBufferParser &p) {
    return make_tl_object<fileLocation>(p);
  }

  explicit fileLocation(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class FoundGif: public Object {
 public:

  static object_ptr<FoundGif> fetch(TlBufferParser &p);
};

class foundGif final : public FoundGif {
 public:
  std::string url_;
  std::string thumb_url_;
  std::string content_url_;
  std::string content_type_;
  std::int32_t w_;
  std::int32_t h_;

  foundGif();

  foundGif(std::string const &url_, std::string const &thumb_url_, std::string const &content_url_, std::string const &content_type_, std::int32_t w_, std::int32_t h_);

  static const std::int32_t ID = 372165663;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<foundGif> fetch(TlBufferParser &p) {
    return make_tl_object<foundGif>(p);
  }

  explicit foundGif(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class foundGifCached final : public FoundGif {
 public:
  std::string url_;
  object_ptr<Photo> photo_;
  object_ptr<Document> document_;

  foundGifCached();

  foundGifCached(std::string const &url_, object_ptr<Photo> &&photo_, object_ptr<Document> &&document_);

  static const std::int32_t ID = -1670052855;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<foundGifCached> fetch(TlBufferParser &p) {
    return make_tl_object<foundGifCached>(p);
  }

  explicit foundGifCached(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class game final : public Object {
 public:
  std::int32_t flags_;
  std::int64_t id_;
  std::int64_t access_hash_;
  std::string short_name_;
  std::string title_;
  std::string description_;
  object_ptr<Photo> photo_;
  object_ptr<Document> document_;
  enum Flags : std::int32_t {DOCUMENT_MASK = 1};

  game();

  game(std::int32_t flags_, std::int64_t id_, std::int64_t access_hash_, std::string const &short_name_, std::string const &title_, std::string const &description_, object_ptr<Photo> &&photo_, object_ptr<Document> &&document_);

  static const std::int32_t ID = -1107729093;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<game> fetch(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class GeoPoint: public Object {
 public:

  static object_ptr<GeoPoint> fetch(TlBufferParser &p);
};

class geoPointEmpty final : public GeoPoint {
 public:

  geoPointEmpty();

  static const std::int32_t ID = 286776671;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<geoPointEmpty> fetch(TlBufferParser &p) {
    return make_tl_object<geoPointEmpty>(p);
  }

  explicit geoPointEmpty(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class geoPoint final : public GeoPoint {
 public:
  double long_;
  double lat_;
  std::int64_t access_hash_;

  geoPoint();

  geoPoint(double long_, double lat_, std::int64_t access_hash_);

  static const std::int32_t ID = 43446532;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<geoPoint> fetch(TlBufferParser &p) {
    return make_tl_object<geoPoint>(p);
  }

  explicit geoPoint(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class highScore final : public Object {
 public:
  std::int32_t pos_;
  std::int32_t user_id_;
  std::int32_t score_;

  highScore();

  highScore(std::int32_t pos_, std::int32_t user_id_, std::int32_t score_);

  static const std::int32_t ID = 1493171408;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<highScore> fetch(TlBufferParser &p) {
    return make_tl_object<highScore>(p);
  }

  explicit highScore(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class importedContact final : public Object {
 public:
  std::int32_t user_id_;
  std::int64_t client_id_;

  importedContact();

  importedContact(std::int32_t user_id_, std::int64_t client_id_);

  static const std::int32_t ID = -805141448;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<importedContact> fetch(TlBufferParser &p) {
    return make_tl_object<importedContact>(p);
  }

  explicit importedContact(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class inlineBotSwitchPM final : public Object {
 public:
  std::string text_;
  std::string start_param_;

  inlineBotSwitchPM();

  inlineBotSwitchPM(std::string const &text_, std::string const &start_param_);

  static const std::int32_t ID = 1008755359;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<inlineBotSwitchPM> fetch(TlBufferParser &p) {
    return make_tl_object<inlineBotSwitchPM>(p);
  }

  explicit inlineBotSwitchPM(TlBufferParser &p);

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class inputAppEvent final : public Object {
 public:
  double time_;
  std::string type_;
  std::int64_t peer_;
  std::string data_;

  inputAppEvent();

  inputAppEvent(double time_, std::string const &type_, std::int64_t peer_, std::string const &data_);

  static const std::int32_t ID = 1996904104;
  std::int32_t get_id() const final {
    return ID;
  }

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class InputBotInlineMessage: public Object {
 public:
};

class inputBotInlineMessageMediaAuto final : public InputBotInlineMessage {
 public:
  std::int32_t flags_;
  std::string message_;
  std::vector<object_ptr<MessageEntity>> entities_;
  object_ptr<ReplyMarkup> reply_markup_;
  enum Flags : std::int32_t {ENTITIES_MASK = 2, REPLY_MARKUP_MASK = 4};

  inputBotInlineMessageMediaAuto();

  inputBotInlineMessageMediaAuto(std::int32_t flags_, std::string const &message_, std::vector<object_ptr<MessageEntity>> &&entities_, object_ptr<ReplyMarkup> &&reply_markup_);

  static const std::int32_t ID = 864077702;
  std::int32_t get_id() const final {
    return ID;
  }

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class inputBotInlineMessageText final : public InputBotInlineMessage {
 public:
  std::int32_t flags_;
  bool no_webpage_;
  std::string message_;
  std::vector<object_ptr<MessageEntity>> entities_;
  object_ptr<ReplyMarkup> reply_markup_;
  enum Flags : std::int32_t {NO_WEBPAGE_MASK = 1, ENTITIES_MASK = 2, REPLY_MARKUP_MASK = 4};

  inputBotInlineMessageText();

  inputBotInlineMessageText(std::int32_t flags_, bool no_webpage_, std::string const &message_, std::vector<object_ptr<MessageEntity>> &&entities_, object_ptr<ReplyMarkup> &&reply_markup_);

  static const std::int32_t ID = 1036876423;
  std::int32_t get_id() const final {
    return ID;
  }

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class inputBotInlineMessageMediaGeo final : public InputBotInlineMessage {
 public:
  std::int32_t flags_;
  object_ptr<InputGeoPoint> geo_point_;
  std::int32_t period_;
  object_ptr<ReplyMarkup> reply_markup_;
  enum Flags : std::int32_t {REPLY_MARKUP_MASK = 4};

  inputBotInlineMessageMediaGeo();

  inputBotInlineMessageMediaGeo(std::int32_t flags_, object_ptr<InputGeoPoint> &&geo_point_, std::int32_t period_, object_ptr<ReplyMarkup> &&reply_markup_);

  static const std::int32_t ID = -1045340827;
  std::int32_t get_id() const final {
    return ID;
  }

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class inputBotInlineMessageMediaVenue final : public InputBotInlineMessage {
 public:
  std::int32_t flags_;
  object_ptr<InputGeoPoint> geo_point_;
  std::string title_;
  std::string address_;
  std::string provider_;
  std::string venue_id_;
  std::string venue_type_;
  object_ptr<ReplyMarkup> reply_markup_;
  enum Flags : std::int32_t {REPLY_MARKUP_MASK = 4};

  inputBotInlineMessageMediaVenue();

  inputBotInlineMessageMediaVenue(std::int32_t flags_, object_ptr<InputGeoPoint> &&geo_point_, std::string const &title_, std::string const &address_, std::string const &provider_, std::string const &venue_id_, std::string const &venue_type_, object_ptr<ReplyMarkup> &&reply_markup_);

  static const std::int32_t ID = 1098628881;
  std::int32_t get_id() const final {
    return ID;
  }

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class inputBotInlineMessageMediaContact final : public InputBotInlineMessage {
 public:
  std::int32_t flags_;
  std::string phone_number_;
  std::string first_name_;
  std::string last_name_;
  std::string vcard_;
  object_ptr<ReplyMarkup> reply_markup_;
  enum Flags : std::int32_t {REPLY_MARKUP_MASK = 4};

  inputBotInlineMessageMediaContact();

  inputBotInlineMessageMediaContact(std::int32_t flags_, std::string const &phone_number_, std::string const &first_name_, std::string const &last_name_, std::string const &vcard_, object_ptr<ReplyMarkup> &&reply_markup_);

  static const std::int32_t ID = -1494368259;
  std::int32_t get_id() const final {
    return ID;
  }

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class inputBotInlineMessageGame final : public InputBotInlineMessage {
 public:
  std::int32_t flags_;
  object_ptr<ReplyMarkup> reply_markup_;
  enum Flags : std::int32_t {REPLY_MARKUP_MASK = 4};

  inputBotInlineMessageGame();

  inputBotInlineMessageGame(std::int32_t flags_, object_ptr<ReplyMarkup> &&reply_markup_);

  static const std::int32_t ID = 1262639204;
  std::int32_t get_id() const final {
    return ID;
  }

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class inputBotInlineMessageID final : public Object {
 public:
  std::int32_t dc_id_;
  std::int64_t id_;
  std::int64_t access_hash_;

  inputBotInlineMessageID();

  inputBotInlineMessageID(std::int32_t dc_id_, std::int64_t id_, std::int64_t access_hash_);

  static const std::int32_t ID = -1995686519;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<inputBotInlineMessageID> fetch(TlBufferParser &p) {
    return make_tl_object<inputBotInlineMessageID>(p);
  }

  explicit inputBotInlineMessageID(TlBufferParser &p);

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class InputBotInlineResult: public Object {
 public:
};

class inputBotInlineResult final : public InputBotInlineResult {
 public:
  std::int32_t flags_;
  std::string id_;
  std::string type_;
  std::string title_;
  std::string description_;
  std::string url_;
  object_ptr<inputWebDocument> thumb_;
  object_ptr<inputWebDocument> content_;
  object_ptr<InputBotInlineMessage> send_message_;
  enum Flags : std::int32_t {TITLE_MASK = 2, DESCRIPTION_MASK = 4, URL_MASK = 8, THUMB_MASK = 16, CONTENT_MASK = 32};

  inputBotInlineResult();

  inputBotInlineResult(std::int32_t flags_, std::string const &id_, std::string const &type_, std::string const &title_, std::string const &description_, std::string const &url_, object_ptr<inputWebDocument> &&thumb_, object_ptr<inputWebDocument> &&content_, object_ptr<InputBotInlineMessage> &&send_message_);

  static const std::int32_t ID = -2000710887;
  std::int32_t get_id() const final {
    return ID;
  }

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class inputBotInlineResultPhoto final : public InputBotInlineResult {
 public:
  std::string id_;
  std::string type_;
  object_ptr<InputPhoto> photo_;
  object_ptr<InputBotInlineMessage> send_message_;

  inputBotInlineResultPhoto();

  inputBotInlineResultPhoto(std::string const &id_, std::string const &type_, object_ptr<InputPhoto> &&photo_, object_ptr<InputBotInlineMessage> &&send_message_);

  static const std::int32_t ID = -1462213465;
  std::int32_t get_id() const final {
    return ID;
  }

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class inputBotInlineResultDocument final : public InputBotInlineResult {
 public:
  std::int32_t flags_;
  std::string id_;
  std::string type_;
  std::string title_;
  std::string description_;
  object_ptr<InputDocument> document_;
  object_ptr<InputBotInlineMessage> send_message_;
  enum Flags : std::int32_t {TITLE_MASK = 2, DESCRIPTION_MASK = 4};

  inputBotInlineResultDocument();

  inputBotInlineResultDocument(std::int32_t flags_, std::string const &id_, std::string const &type_, std::string const &title_, std::string const &description_, object_ptr<InputDocument> &&document_, object_ptr<InputBotInlineMessage> &&send_message_);

  static const std::int32_t ID = -459324;
  std::int32_t get_id() const final {
    return ID;
  }

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class inputBotInlineResultGame final : public InputBotInlineResult {
 public:
  std::string id_;
  std::string short_name_;
  object_ptr<InputBotInlineMessage> send_message_;

  inputBotInlineResultGame();

  inputBotInlineResultGame(std::string const &id_, std::string const &short_name_, object_ptr<InputBotInlineMessage> &&send_message_);

  static const std::int32_t ID = 1336154098;
  std::int32_t get_id() const final {
    return ID;
  }

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class InputChannel: public Object {
 public:

  static object_ptr<InputChannel> fetch(TlBufferParser &p);
};

class inputChannelEmpty final : public InputChannel {
 public:

  inputChannelEmpty();

  static const std::int32_t ID = -292807034;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<inputChannelEmpty> fetch(TlBufferParser &p) {
    return make_tl_object<inputChannelEmpty>(p);
  }

  explicit inputChannelEmpty(TlBufferParser &p);

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class inputChannel final : public InputChannel {
 public:
  std::int32_t channel_id_;
  std::int64_t access_hash_;

  inputChannel();

  inputChannel(std::int32_t channel_id_, std::int64_t access_hash_);

  static const std::int32_t ID = -1343524562;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<inputChannel> fetch(TlBufferParser &p) {
    return make_tl_object<inputChannel>(p);
  }

  explicit inputChannel(TlBufferParser &p);

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class InputChatPhoto: public Object {
 public:
};

class inputChatPhotoEmpty final : public InputChatPhoto {
 public:

  inputChatPhotoEmpty();

  static const std::int32_t ID = 480546647;
  std::int32_t get_id() const final {
    return ID;
  }

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class inputChatUploadedPhoto final : public InputChatPhoto {
 public:
  object_ptr<InputFile> file_;

  inputChatUploadedPhoto();

  explicit inputChatUploadedPhoto(object_ptr<InputFile> &&file_);

  static const std::int32_t ID = -1837345356;
  std::int32_t get_id() const final {
    return ID;
  }

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class inputChatPhoto final : public InputChatPhoto {
 public:
  object_ptr<InputPhoto> id_;

  inputChatPhoto();

  explicit inputChatPhoto(object_ptr<InputPhoto> &&id_);

  static const std::int32_t ID = -1991004873;
  std::int32_t get_id() const final {
    return ID;
  }

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class InputCheckPasswordSRP: public Object {
 public:
};

class inputCheckPasswordEmpty final : public InputCheckPasswordSRP {
 public:

  inputCheckPasswordEmpty();

  static const std::int32_t ID = -1736378792;
  std::int32_t get_id() const final {
    return ID;
  }

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class inputCheckPasswordSRP final : public InputCheckPasswordSRP {
 public:
  std::int64_t srp_id_;
  BufferSlice A_;
  BufferSlice M1_;

  inputCheckPasswordSRP();

  inputCheckPasswordSRP(std::int64_t srp_id_, BufferSlice &&A_, BufferSlice &&M1_);

  static const std::int32_t ID = -763367294;
  std::int32_t get_id() const final {
    return ID;
  }

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class inputClientProxy final : public Object {
 public:
  std::string address_;
  std::int32_t port_;

  inputClientProxy();

  inputClientProxy(std::string const &address_, std::int32_t port_);

  static const std::int32_t ID = 1968737087;
  std::int32_t get_id() const final {
    return ID;
  }

  void store(TlStorerToString &s, const char *field_name) const final;
};

class inputPhoneContact final : public Object {
 public:
  std::int64_t client_id_;
  std::string phone_;
  std::string first_name_;
  std::string last_name_;

  inputPhoneContact();

  inputPhoneContact(std::int64_t client_id_, std::string const &phone_, std::string const &first_name_, std::string const &last_name_);

  static const std::int32_t ID = -208488460;
  std::int32_t get_id() const final {
    return ID;
  }

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class inputDialogPeer final : public Object {
 public:
  object_ptr<InputPeer> peer_;

  inputDialogPeer();

  explicit inputDialogPeer(object_ptr<InputPeer> &&peer_);

  static const std::int32_t ID = -55902537;
  std::int32_t get_id() const final {
    return ID;
  }

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class InputDocument: public Object {
 public:
};

class inputDocumentEmpty final : public InputDocument {
 public:

  inputDocumentEmpty();

  static const std::int32_t ID = 1928391342;
  std::int32_t get_id() const final {
    return ID;
  }

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class inputDocument final : public InputDocument {
 public:
  std::int64_t id_;
  std::int64_t access_hash_;

  inputDocument();

  inputDocument(std::int64_t id_, std::int64_t access_hash_);

  static const std::int32_t ID = 410618194;
  std::int32_t get_id() const final {
    return ID;
  }

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class inputEncryptedChat final : public Object {
 public:
  std::int32_t chat_id_;
  std::int64_t access_hash_;

  inputEncryptedChat();

  inputEncryptedChat(std::int32_t chat_id_, std::int64_t access_hash_);

  static const std::int32_t ID = -247351839;
  std::int32_t get_id() const final {
    return ID;
  }

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class InputEncryptedFile: public Object {
 public:
};

class inputEncryptedFileEmpty final : public InputEncryptedFile {
 public:

  inputEncryptedFileEmpty();

  static const std::int32_t ID = 406307684;
  std::int32_t get_id() const final {
    return ID;
  }

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class inputEncryptedFileUploaded final : public InputEncryptedFile {
 public:
  std::int64_t id_;
  std::int32_t parts_;
  std::string md5_checksum_;
  std::int32_t key_fingerprint_;

  inputEncryptedFileUploaded();

  inputEncryptedFileUploaded(std::int64_t id_, std::int32_t parts_, std::string const &md5_checksum_, std::int32_t key_fingerprint_);

  static const std::int32_t ID = 1690108678;
  std::int32_t get_id() const final {
    return ID;
  }

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class inputEncryptedFile final : public InputEncryptedFile {
 public:
  std::int64_t id_;
  std::int64_t access_hash_;

  inputEncryptedFile();

  inputEncryptedFile(std::int64_t id_, std::int64_t access_hash_);

  static const std::int32_t ID = 1511503333;
  std::int32_t get_id() const final {
    return ID;
  }

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class inputEncryptedFileBigUploaded final : public InputEncryptedFile {
 public:
  std::int64_t id_;
  std::int32_t parts_;
  std::int32_t key_fingerprint_;

  inputEncryptedFileBigUploaded();

  inputEncryptedFileBigUploaded(std::int64_t id_, std::int32_t parts_, std::int32_t key_fingerprint_);

  static const std::int32_t ID = 767652808;
  std::int32_t get_id() const final {
    return ID;
  }

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class InputFile: public Object {
 public:
};

class inputFile final : public InputFile {
 public:
  std::int64_t id_;
  std::int32_t parts_;
  std::string name_;
  std::string md5_checksum_;

  inputFile();

  inputFile(std::int64_t id_, std::int32_t parts_, std::string const &name_, std::string const &md5_checksum_);

  static const std::int32_t ID = -181407105;
  std::int32_t get_id() const final {
    return ID;
  }

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class inputFileBig final : public InputFile {
 public:
  std::int64_t id_;
  std::int32_t parts_;
  std::string name_;

  inputFileBig();

  inputFileBig(std::int64_t id_, std::int32_t parts_, std::string const &name_);

  static const std::int32_t ID = -95482955;
  std::int32_t get_id() const final {
    return ID;
  }

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class InputFileLocation: public Object {
 public:
};

class inputFileLocation final : public InputFileLocation {
 public:
  std::int64_t volume_id_;
  std::int32_t local_id_;
  std::int64_t secret_;

  inputFileLocation();

  inputFileLocation(std::int64_t volume_id_, std::int32_t local_id_, std::int64_t secret_);

  static const std::int32_t ID = 342061462;
  std::int32_t get_id() const final {
    return ID;
  }

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class inputEncryptedFileLocation final : public InputFileLocation {
 public:
  std::int64_t id_;
  std::int64_t access_hash_;

  inputEncryptedFileLocation();

  inputEncryptedFileLocation(std::int64_t id_, std::int64_t access_hash_);

  static const std::int32_t ID = -182231723;
  std::int32_t get_id() const final {
    return ID;
  }

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class inputDocumentFileLocation final : public InputFileLocation {
 public:
  std::int64_t id_;
  std::int64_t access_hash_;
  std::int32_t version_;

  inputDocumentFileLocation();

  inputDocumentFileLocation(std::int64_t id_, std::int64_t access_hash_, std::int32_t version_);

  static const std::int32_t ID = 1125058340;
  std::int32_t get_id() const final {
    return ID;
  }

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class inputSecureFileLocation final : public InputFileLocation {
 public:
  std::int64_t id_;
  std::int64_t access_hash_;

  inputSecureFileLocation();

  inputSecureFileLocation(std::int64_t id_, std::int64_t access_hash_);

  static const std::int32_t ID = -876089816;
  std::int32_t get_id() const final {
    return ID;
  }

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class inputTakeoutFileLocation final : public InputFileLocation {
 public:

  inputTakeoutFileLocation();

  static const std::int32_t ID = 700340377;
  std::int32_t get_id() const final {
    return ID;
  }

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class InputGame: public Object {
 public:
};

class inputGameID final : public InputGame {
 public:
  std::int64_t id_;
  std::int64_t access_hash_;

  inputGameID();

  inputGameID(std::int64_t id_, std::int64_t access_hash_);

  static const std::int32_t ID = 53231223;
  std::int32_t get_id() const final {
    return ID;
  }

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class inputGameShortName final : public InputGame {
 public:
  object_ptr<InputUser> bot_id_;
  std::string short_name_;

  inputGameShortName();

  inputGameShortName(object_ptr<InputUser> &&bot_id_, std::string const &short_name_);

  static const std::int32_t ID = -1020139510;
  std::int32_t get_id() const final {
    return ID;
  }

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class InputGeoPoint: public Object {
 public:
};

class inputGeoPointEmpty final : public InputGeoPoint {
 public:

  inputGeoPointEmpty();

  static const std::int32_t ID = -457104426;
  std::int32_t get_id() const final {
    return ID;
  }

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class inputGeoPoint final : public InputGeoPoint {
 public:
  double lat_;
  double long_;

  inputGeoPoint();

  inputGeoPoint(double lat_, double long_);

  static const std::int32_t ID = -206066487;
  std::int32_t get_id() const final {
    return ID;
  }

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class InputMedia: public Object {
 public:
};

class inputMediaEmpty final : public InputMedia {
 public:

  inputMediaEmpty();

  static const std::int32_t ID = -1771768449;
  std::int32_t get_id() const final {
    return ID;
  }

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class inputMediaUploadedPhoto final : public InputMedia {
 public:
  std::int32_t flags_;
  object_ptr<InputFile> file_;
  std::vector<object_ptr<InputDocument>> stickers_;
  std::int32_t ttl_seconds_;
  enum Flags : std::int32_t {STICKERS_MASK = 1, TTL_SECONDS_MASK = 2};

  inputMediaUploadedPhoto();

  inputMediaUploadedPhoto(std::int32_t flags_, object_ptr<InputFile> &&file_, std::vector<object_ptr<InputDocument>> &&stickers_, std::int32_t ttl_seconds_);

  static const std::int32_t ID = 505969924;
  std::int32_t get_id() const final {
    return ID;
  }

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class inputMediaPhoto final : public InputMedia {
 public:
  std::int32_t flags_;
  object_ptr<InputPhoto> id_;
  std::int32_t ttl_seconds_;
  enum Flags : std::int32_t {TTL_SECONDS_MASK = 1};

  inputMediaPhoto();

  inputMediaPhoto(std::int32_t flags_, object_ptr<InputPhoto> &&id_, std::int32_t ttl_seconds_);

  static const std::int32_t ID = -1279654347;
  std::int32_t get_id() const final {
    return ID;
  }

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class inputMediaGeoPoint final : public InputMedia {
 public:
  object_ptr<InputGeoPoint> geo_point_;

  inputMediaGeoPoint();

  explicit inputMediaGeoPoint(object_ptr<InputGeoPoint> &&geo_point_);

  static const std::int32_t ID = -104578748;
  std::int32_t get_id() const final {
    return ID;
  }

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class inputMediaContact final : public InputMedia {
 public:
  std::string phone_number_;
  std::string first_name_;
  std::string last_name_;
  std::string vcard_;

  inputMediaContact();

  inputMediaContact(std::string const &phone_number_, std::string const &first_name_, std::string const &last_name_, std::string const &vcard_);

  static const std::int32_t ID = -122978821;
  std::int32_t get_id() const final {
    return ID;
  }

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class inputMediaUploadedDocument final : public InputMedia {
 public:
  std::int32_t flags_;
  bool nosound_video_;
  object_ptr<InputFile> file_;
  object_ptr<InputFile> thumb_;
  std::string mime_type_;
  std::vector<object_ptr<DocumentAttribute>> attributes_;
  std::vector<object_ptr<InputDocument>> stickers_;
  std::int32_t ttl_seconds_;
  enum Flags : std::int32_t {NOSOUND_VIDEO_MASK = 8, THUMB_MASK = 4, STICKERS_MASK = 1, TTL_SECONDS_MASK = 2};

  inputMediaUploadedDocument();

  inputMediaUploadedDocument(std::int32_t flags_, bool nosound_video_, object_ptr<InputFile> &&file_, object_ptr<InputFile> &&thumb_, std::string const &mime_type_, std::vector<object_ptr<DocumentAttribute>> &&attributes_, std::vector<object_ptr<InputDocument>> &&stickers_, std::int32_t ttl_seconds_);

  static const std::int32_t ID = 1530447553;
  std::int32_t get_id() const final {
    return ID;
  }

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class inputMediaDocument final : public InputMedia {
 public:
  std::int32_t flags_;
  object_ptr<InputDocument> id_;
  std::int32_t ttl_seconds_;
  enum Flags : std::int32_t {TTL_SECONDS_MASK = 1};

  inputMediaDocument();

  inputMediaDocument(std::int32_t flags_, object_ptr<InputDocument> &&id_, std::int32_t ttl_seconds_);

  static const std::int32_t ID = 598418386;
  std::int32_t get_id() const final {
    return ID;
  }

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class inputMediaVenue final : public InputMedia {
 public:
  object_ptr<InputGeoPoint> geo_point_;
  std::string title_;
  std::string address_;
  std::string provider_;
  std::string venue_id_;
  std::string venue_type_;

  inputMediaVenue();

  inputMediaVenue(object_ptr<InputGeoPoint> &&geo_point_, std::string const &title_, std::string const &address_, std::string const &provider_, std::string const &venue_id_, std::string const &venue_type_);

  static const std::int32_t ID = -1052959727;
  std::int32_t get_id() const final {
    return ID;
  }

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class inputMediaGifExternal final : public InputMedia {
 public:
  std::string url_;
  std::string q_;

  inputMediaGifExternal();

  inputMediaGifExternal(std::string const &url_, std::string const &q_);

  static const std::int32_t ID = 1212395773;
  std::int32_t get_id() const final {
    return ID;
  }

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class inputMediaPhotoExternal final : public InputMedia {
 public:
  std::int32_t flags_;
  std::string url_;
  std::int32_t ttl_seconds_;
  enum Flags : std::int32_t {TTL_SECONDS_MASK = 1};

  inputMediaPhotoExternal();

  inputMediaPhotoExternal(std::int32_t flags_, std::string const &url_, std::int32_t ttl_seconds_);

  static const std::int32_t ID = -440664550;
  std::int32_t get_id() const final {
    return ID;
  }

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class inputMediaDocumentExternal final : public InputMedia {
 public:
  std::int32_t flags_;
  std::string url_;
  std::int32_t ttl_seconds_;
  enum Flags : std::int32_t {TTL_SECONDS_MASK = 1};

  inputMediaDocumentExternal();

  inputMediaDocumentExternal(std::int32_t flags_, std::string const &url_, std::int32_t ttl_seconds_);

  static const std::int32_t ID = -78455655;
  std::int32_t get_id() const final {
    return ID;
  }

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class inputMediaGame final : public InputMedia {
 public:
  object_ptr<InputGame> id_;

  inputMediaGame();

  explicit inputMediaGame(object_ptr<InputGame> &&id_);

  static const std::int32_t ID = -750828557;
  std::int32_t get_id() const final {
    return ID;
  }

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class inputMediaInvoice final : public InputMedia {
 public:
  std::int32_t flags_;
  std::string title_;
  std::string description_;
  object_ptr<inputWebDocument> photo_;
  object_ptr<invoice> invoice_;
  BufferSlice payload_;
  std::string provider_;
  object_ptr<dataJSON> provider_data_;
  std::string start_param_;
  enum Flags : std::int32_t {PHOTO_MASK = 1};

  inputMediaInvoice();

  inputMediaInvoice(std::int32_t flags_, std::string const &title_, std::string const &description_, object_ptr<inputWebDocument> &&photo_, object_ptr<invoice> &&invoice_, BufferSlice &&payload_, std::string const &provider_, object_ptr<dataJSON> &&provider_data_, std::string const &start_param_);

  static const std::int32_t ID = -186607933;
  std::int32_t get_id() const final {
    return ID;
  }

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class inputMediaGeoLive final : public InputMedia {
 public:
  object_ptr<InputGeoPoint> geo_point_;
  std::int32_t period_;

  inputMediaGeoLive();

  inputMediaGeoLive(object_ptr<InputGeoPoint> &&geo_point_, std::int32_t period_);

  static const std::int32_t ID = 2065305999;
  std::int32_t get_id() const final {
    return ID;
  }

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class InputMessage: public Object {
 public:
};

class inputMessageID final : public InputMessage {
 public:
  std::int32_t id_;

  inputMessageID();

  explicit inputMessageID(std::int32_t id_);

  static const std::int32_t ID = -1502174430;
  std::int32_t get_id() const final {
    return ID;
  }

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class inputMessageReplyTo final : public InputMessage {
 public:
  std::int32_t id_;

  inputMessageReplyTo();

  explicit inputMessageReplyTo(std::int32_t id_);

  static const std::int32_t ID = -1160215659;
  std::int32_t get_id() const final {
    return ID;
  }

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class inputMessagePinned final : public InputMessage {
 public:

  inputMessagePinned();

  static const std::int32_t ID = -2037963464;
  std::int32_t get_id() const final {
    return ID;
  }

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class InputNotifyPeer: public Object {
 public:
};

class inputNotifyPeer final : public InputNotifyPeer {
 public:
  object_ptr<InputPeer> peer_;

  inputNotifyPeer();

  explicit inputNotifyPeer(object_ptr<InputPeer> &&peer_);

  static const std::int32_t ID = -1195615476;
  std::int32_t get_id() const final {
    return ID;
  }

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class inputNotifyUsers final : public InputNotifyPeer {
 public:

  inputNotifyUsers();

  static const std::int32_t ID = 423314455;
  std::int32_t get_id() const final {
    return ID;
  }

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class inputNotifyChats final : public InputNotifyPeer {
 public:

  inputNotifyChats();

  static const std::int32_t ID = 1251338318;
  std::int32_t get_id() const final {
    return ID;
  }

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class InputPaymentCredentials: public Object {
 public:
};

class inputPaymentCredentialsSaved final : public InputPaymentCredentials {
 public:
  std::string id_;
  BufferSlice tmp_password_;

  inputPaymentCredentialsSaved();

  inputPaymentCredentialsSaved(std::string const &id_, BufferSlice &&tmp_password_);

  static const std::int32_t ID = -1056001329;
  std::int32_t get_id() const final {
    return ID;
  }

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class inputPaymentCredentials final : public InputPaymentCredentials {
 public:
  std::int32_t flags_;
  bool save_;
  object_ptr<dataJSON> data_;
  enum Flags : std::int32_t {SAVE_MASK = 1};

  inputPaymentCredentials();

  inputPaymentCredentials(std::int32_t flags_, bool save_, object_ptr<dataJSON> &&data_);

  static const std::int32_t ID = 873977640;
  std::int32_t get_id() const final {
    return ID;
  }

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class inputPaymentCredentialsApplePay final : public InputPaymentCredentials {
 public:
  object_ptr<dataJSON> payment_data_;

  inputPaymentCredentialsApplePay();

  explicit inputPaymentCredentialsApplePay(object_ptr<dataJSON> &&payment_data_);

  static const std::int32_t ID = 178373535;
  std::int32_t get_id() const final {
    return ID;
  }

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class inputPaymentCredentialsAndroidPay final : public InputPaymentCredentials {
 public:
  object_ptr<dataJSON> payment_token_;
  std::string google_transaction_id_;

  inputPaymentCredentialsAndroidPay();

  inputPaymentCredentialsAndroidPay(object_ptr<dataJSON> &&payment_token_, std::string const &google_transaction_id_);

  static const std::int32_t ID = -905587442;
  std::int32_t get_id() const final {
    return ID;
  }

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class InputPeer: public Object {
 public:
};

class inputPeerEmpty final : public InputPeer {
 public:

  inputPeerEmpty();

  static const std::int32_t ID = 2134579434;
  std::int32_t get_id() const final {
    return ID;
  }

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class inputPeerSelf final : public InputPeer {
 public:

  inputPeerSelf();

  static const std::int32_t ID = 2107670217;
  std::int32_t get_id() const final {
    return ID;
  }

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class inputPeerChat final : public InputPeer {
 public:
  std::int32_t chat_id_;

  inputPeerChat();

  explicit inputPeerChat(std::int32_t chat_id_);

  static const std::int32_t ID = 396093539;
  std::int32_t get_id() const final {
    return ID;
  }

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class inputPeerUser final : public InputPeer {
 public:
  std::int32_t user_id_;
  std::int64_t access_hash_;

  inputPeerUser();

  inputPeerUser(std::int32_t user_id_, std::int64_t access_hash_);

  static const std::int32_t ID = 2072935910;
  std::int32_t get_id() const final {
    return ID;
  }

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class inputPeerChannel final : public InputPeer {
 public:
  std::int32_t channel_id_;
  std::int64_t access_hash_;

  inputPeerChannel();

  inputPeerChannel(std::int32_t channel_id_, std::int64_t access_hash_);

  static const std::int32_t ID = 548253432;
  std::int32_t get_id() const final {
    return ID;
  }

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class inputPeerNotifySettings final : public Object {
 public:
  std::int32_t flags_;
  bool show_previews_;
  bool silent_;
  std::int32_t mute_until_;
  std::string sound_;
  enum Flags : std::int32_t {SHOW_PREVIEWS_MASK = 1, SILENT_MASK = 2, MUTE_UNTIL_MASK = 4, SOUND_MASK = 8};

  inputPeerNotifySettings();

  inputPeerNotifySettings(std::int32_t flags_, bool show_previews_, bool silent_, std::int32_t mute_until_, std::string const &sound_);

  static const std::int32_t ID = -1673717362;
  std::int32_t get_id() const final {
    return ID;
  }

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class inputPhoneCall final : public Object {
 public:
  std::int64_t id_;
  std::int64_t access_hash_;

  inputPhoneCall();

  inputPhoneCall(std::int64_t id_, std::int64_t access_hash_);

  static const std::int32_t ID = 506920429;
  std::int32_t get_id() const final {
    return ID;
  }

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class InputPhoto: public Object {
 public:
};

class inputPhotoEmpty final : public InputPhoto {
 public:

  inputPhotoEmpty();

  static const std::int32_t ID = 483901197;
  std::int32_t get_id() const final {
    return ID;
  }

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class inputPhoto final : public InputPhoto {
 public:
  std::int64_t id_;
  std::int64_t access_hash_;

  inputPhoto();

  inputPhoto(std::int64_t id_, std::int64_t access_hash_);

  static const std::int32_t ID = -74070332;
  std::int32_t get_id() const final {
    return ID;
  }

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class InputPrivacyKey: public Object {
 public:
};

class inputPrivacyKeyStatusTimestamp final : public InputPrivacyKey {
 public:

  inputPrivacyKeyStatusTimestamp();

  static const std::int32_t ID = 1335282456;
  std::int32_t get_id() const final {
    return ID;
  }

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class inputPrivacyKeyChatInvite final : public InputPrivacyKey {
 public:

  inputPrivacyKeyChatInvite();

  static const std::int32_t ID = -1107622874;
  std::int32_t get_id() const final {
    return ID;
  }

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class inputPrivacyKeyPhoneCall final : public InputPrivacyKey {
 public:

  inputPrivacyKeyPhoneCall();

  static const std::int32_t ID = -88417185;
  std::int32_t get_id() const final {
    return ID;
  }

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class InputPrivacyRule: public Object {
 public:
};

class inputPrivacyValueAllowContacts final : public InputPrivacyRule {
 public:

  inputPrivacyValueAllowContacts();

  static const std::int32_t ID = 218751099;
  std::int32_t get_id() const final {
    return ID;
  }

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class inputPrivacyValueAllowAll final : public InputPrivacyRule {
 public:

  inputPrivacyValueAllowAll();

  static const std::int32_t ID = 407582158;
  std::int32_t get_id() const final {
    return ID;
  }

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class inputPrivacyValueAllowUsers final : public InputPrivacyRule {
 public:
  std::vector<object_ptr<InputUser>> users_;

  inputPrivacyValueAllowUsers();

  explicit inputPrivacyValueAllowUsers(std::vector<object_ptr<InputUser>> &&users_);

  static const std::int32_t ID = 320652927;
  std::int32_t get_id() const final {
    return ID;
  }

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class inputPrivacyValueDisallowContacts final : public InputPrivacyRule {
 public:

  inputPrivacyValueDisallowContacts();

  static const std::int32_t ID = 195371015;
  std::int32_t get_id() const final {
    return ID;
  }

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class inputPrivacyValueDisallowAll final : public InputPrivacyRule {
 public:

  inputPrivacyValueDisallowAll();

  static const std::int32_t ID = -697604407;
  std::int32_t get_id() const final {
    return ID;
  }

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class inputPrivacyValueDisallowUsers final : public InputPrivacyRule {
 public:
  std::vector<object_ptr<InputUser>> users_;

  inputPrivacyValueDisallowUsers();

  explicit inputPrivacyValueDisallowUsers(std::vector<object_ptr<InputUser>> &&users_);

  static const std::int32_t ID = -1877932953;
  std::int32_t get_id() const final {
    return ID;
  }

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class InputSecureFile: public Object {
 public:
};

class inputSecureFileUploaded final : public InputSecureFile {
 public:
  std::int64_t id_;
  std::int32_t parts_;
  std::string md5_checksum_;
  BufferSlice file_hash_;
  BufferSlice secret_;

  inputSecureFileUploaded();

  inputSecureFileUploaded(std::int64_t id_, std::int32_t parts_, std::string const &md5_checksum_, BufferSlice &&file_hash_, BufferSlice &&secret_);

  static const std::int32_t ID = 859091184;
  std::int32_t get_id() const final {
    return ID;
  }

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class inputSecureFile final : public InputSecureFile {
 public:
  std::int64_t id_;
  std::int64_t access_hash_;

  inputSecureFile();

  inputSecureFile(std::int64_t id_, std::int64_t access_hash_);

  static const std::int32_t ID = 1399317950;
  std::int32_t get_id() const final {
    return ID;
  }

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class inputSecureValue final : public Object {
 public:
  std::int32_t flags_;
  object_ptr<SecureValueType> type_;
  object_ptr<secureData> data_;
  object_ptr<InputSecureFile> front_side_;
  object_ptr<InputSecureFile> reverse_side_;
  object_ptr<InputSecureFile> selfie_;
  std::vector<object_ptr<InputSecureFile>> translation_;
  std::vector<object_ptr<InputSecureFile>> files_;
  object_ptr<SecurePlainData> plain_data_;
  enum Flags : std::int32_t {DATA_MASK = 1, FRONT_SIDE_MASK = 2, REVERSE_SIDE_MASK = 4, SELFIE_MASK = 8, TRANSLATION_MASK = 64, FILES_MASK = 16, PLAIN_DATA_MASK = 32};

  inputSecureValue();

  inputSecureValue(std::int32_t flags_, object_ptr<SecureValueType> &&type_, object_ptr<secureData> &&data_, object_ptr<InputSecureFile> &&front_side_, object_ptr<InputSecureFile> &&reverse_side_, object_ptr<InputSecureFile> &&selfie_, std::vector<object_ptr<InputSecureFile>> &&translation_, std::vector<object_ptr<InputSecureFile>> &&files_, object_ptr<SecurePlainData> &&plain_data_);

  static const std::int32_t ID = -618540889;
  std::int32_t get_id() const final {
    return ID;
  }

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class inputSingleMedia final : public Object {
 public:
  std::int32_t flags_;
  object_ptr<InputMedia> media_;
  std::int64_t random_id_;
  std::string message_;
  std::vector<object_ptr<MessageEntity>> entities_;
  enum Flags : std::int32_t {ENTITIES_MASK = 1};

  inputSingleMedia();

  inputSingleMedia(std::int32_t flags_, object_ptr<InputMedia> &&media_, std::int64_t random_id_, std::string const &message_, std::vector<object_ptr<MessageEntity>> &&entities_);

  static const std::int32_t ID = 482797855;
  std::int32_t get_id() const final {
    return ID;
  }

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class InputStickerSet: public Object {
 public:

  static object_ptr<InputStickerSet> fetch(TlBufferParser &p);
};

class inputStickerSetEmpty final : public InputStickerSet {
 public:

  inputStickerSetEmpty();

  static const std::int32_t ID = -4838507;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<inputStickerSetEmpty> fetch(TlBufferParser &p) {
    return make_tl_object<inputStickerSetEmpty>(p);
  }

  explicit inputStickerSetEmpty(TlBufferParser &p);

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class inputStickerSetID final : public InputStickerSet {
 public:
  std::int64_t id_;
  std::int64_t access_hash_;

  inputStickerSetID();

  inputStickerSetID(std::int64_t id_, std::int64_t access_hash_);

  static const std::int32_t ID = -1645763991;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<inputStickerSetID> fetch(TlBufferParser &p) {
    return make_tl_object<inputStickerSetID>(p);
  }

  explicit inputStickerSetID(TlBufferParser &p);

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class inputStickerSetShortName final : public InputStickerSet {
 public:
  std::string short_name_;

  inputStickerSetShortName();

  explicit inputStickerSetShortName(std::string const &short_name_);

  static const std::int32_t ID = -2044933984;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<inputStickerSetShortName> fetch(TlBufferParser &p) {
    return make_tl_object<inputStickerSetShortName>(p);
  }

  explicit inputStickerSetShortName(TlBufferParser &p);

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class inputStickerSetItem final : public Object {
 public:
  std::int32_t flags_;
  object_ptr<InputDocument> document_;
  std::string emoji_;
  object_ptr<maskCoords> mask_coords_;
  enum Flags : std::int32_t {MASK_COORDS_MASK = 1};

  inputStickerSetItem();

  inputStickerSetItem(std::int32_t flags_, object_ptr<InputDocument> &&document_, std::string const &emoji_, object_ptr<maskCoords> &&mask_coords_);

  static const std::int32_t ID = -6249322;
  std::int32_t get_id() const final {
    return ID;
  }

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class InputStickeredMedia: public Object {
 public:
};

class inputStickeredMediaPhoto final : public InputStickeredMedia {
 public:
  object_ptr<InputPhoto> id_;

  inputStickeredMediaPhoto();

  explicit inputStickeredMediaPhoto(object_ptr<InputPhoto> &&id_);

  static const std::int32_t ID = 1251549527;
  std::int32_t get_id() const final {
    return ID;
  }

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class inputStickeredMediaDocument final : public InputStickeredMedia {
 public:
  object_ptr<InputDocument> id_;

  inputStickeredMediaDocument();

  explicit inputStickeredMediaDocument(object_ptr<InputDocument> &&id_);

  static const std::int32_t ID = 70813275;
  std::int32_t get_id() const final {
    return ID;
  }

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class InputUser: public Object {
 public:

  static object_ptr<InputUser> fetch(TlBufferParser &p);
};

class inputUserEmpty final : public InputUser {
 public:

  inputUserEmpty();

  static const std::int32_t ID = -1182234929;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<inputUserEmpty> fetch(TlBufferParser &p) {
    return make_tl_object<inputUserEmpty>(p);
  }

  explicit inputUserEmpty(TlBufferParser &p);

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class inputUserSelf final : public InputUser {
 public:

  inputUserSelf();

  static const std::int32_t ID = -138301121;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<inputUserSelf> fetch(TlBufferParser &p) {
    return make_tl_object<inputUserSelf>(p);
  }

  explicit inputUserSelf(TlBufferParser &p);

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class inputUser final : public InputUser {
 public:
  std::int32_t user_id_;
  std::int64_t access_hash_;

  inputUser();

  inputUser(std::int32_t user_id_, std::int64_t access_hash_);

  static const std::int32_t ID = -668391402;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<inputUser> fetch(TlBufferParser &p) {
    return make_tl_object<inputUser>(p);
  }

  explicit inputUser(TlBufferParser &p);

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class inputWebDocument final : public Object {
 public:
  std::string url_;
  std::int32_t size_;
  std::string mime_type_;
  std::vector<object_ptr<DocumentAttribute>> attributes_;

  inputWebDocument();

  inputWebDocument(std::string const &url_, std::int32_t size_, std::string const &mime_type_, std::vector<object_ptr<DocumentAttribute>> &&attributes_);

  static const std::int32_t ID = -1678949555;
  std::int32_t get_id() const final {
    return ID;
  }

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class InputWebFileLocation: public Object {
 public:
};

class inputWebFileLocation final : public InputWebFileLocation {
 public:
  std::string url_;
  std::int64_t access_hash_;

  inputWebFileLocation();

  inputWebFileLocation(std::string const &url_, std::int64_t access_hash_);

  static const std::int32_t ID = -1036396922;
  std::int32_t get_id() const final {
    return ID;
  }

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class inputWebFileGeoPointLocation final : public InputWebFileLocation {
 public:
  object_ptr<InputGeoPoint> geo_point_;
  std::int64_t access_hash_;
  std::int32_t w_;
  std::int32_t h_;
  std::int32_t zoom_;
  std::int32_t scale_;

  inputWebFileGeoPointLocation();

  inputWebFileGeoPointLocation(object_ptr<InputGeoPoint> &&geo_point_, std::int64_t access_hash_, std::int32_t w_, std::int32_t h_, std::int32_t zoom_, std::int32_t scale_);

  static const std::int32_t ID = -1625153079;
  std::int32_t get_id() const final {
    return ID;
  }

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class invoice final : public Object {
 public:
  std::int32_t flags_;
  bool test_;
  bool name_requested_;
  bool phone_requested_;
  bool email_requested_;
  bool shipping_address_requested_;
  bool flexible_;
  bool phone_to_provider_;
  bool email_to_provider_;
  std::string currency_;
  std::vector<object_ptr<labeledPrice>> prices_;
  enum Flags : std::int32_t {TEST_MASK = 1, NAME_REQUESTED_MASK = 2, PHONE_REQUESTED_MASK = 4, EMAIL_REQUESTED_MASK = 8, SHIPPING_ADDRESS_REQUESTED_MASK = 16, FLEXIBLE_MASK = 32, PHONE_TO_PROVIDER_MASK = 64, EMAIL_TO_PROVIDER_MASK = 128};

  invoice();

  invoice(std::int32_t flags_, bool test_, bool name_requested_, bool phone_requested_, bool email_requested_, bool shipping_address_requested_, bool flexible_, bool phone_to_provider_, bool email_to_provider_, std::string const &currency_, std::vector<object_ptr<labeledPrice>> &&prices_);

  static const std::int32_t ID = -1022713000;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<invoice> fetch(TlBufferParser &p);

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class IpPort: public Object {
 public:

  static object_ptr<IpPort> fetch(TlBufferParser &p);
};

class ipPort final : public IpPort {
 public:
  std::int32_t ipv4_;
  std::int32_t port_;

  ipPort();

  ipPort(std::int32_t ipv4_, std::int32_t port_);

  static const std::int32_t ID = -734810765;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<ipPort> fetch(TlBufferParser &p) {
    return make_tl_object<ipPort>(p);
  }

  explicit ipPort(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class ipPortSecret final : public IpPort {
 public:
  std::int32_t ipv4_;
  std::int32_t port_;
  BufferSlice secret_;

  ipPortSecret();

  ipPortSecret(std::int32_t ipv4_, std::int32_t port_, BufferSlice &&secret_);

  static const std::int32_t ID = 932718150;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<ipPortSecret> fetch(TlBufferParser &p) {
    return make_tl_object<ipPortSecret>(p);
  }

  explicit ipPortSecret(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class KeyboardButton: public Object {
 public:

  static object_ptr<KeyboardButton> fetch(TlBufferParser &p);
};

class keyboardButton final : public KeyboardButton {
 public:
  std::string text_;

  keyboardButton();

  explicit keyboardButton(std::string const &text_);

  static const std::int32_t ID = -1560655744;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<keyboardButton> fetch(TlBufferParser &p) {
    return make_tl_object<keyboardButton>(p);
  }

  explicit keyboardButton(TlBufferParser &p);

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class keyboardButtonUrl final : public KeyboardButton {
 public:
  std::string text_;
  std::string url_;

  keyboardButtonUrl();

  keyboardButtonUrl(std::string const &text_, std::string const &url_);

  static const std::int32_t ID = 629866245;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<keyboardButtonUrl> fetch(TlBufferParser &p) {
    return make_tl_object<keyboardButtonUrl>(p);
  }

  explicit keyboardButtonUrl(TlBufferParser &p);

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class keyboardButtonCallback final : public KeyboardButton {
 public:
  std::string text_;
  BufferSlice data_;

  keyboardButtonCallback();

  keyboardButtonCallback(std::string const &text_, BufferSlice &&data_);

  static const std::int32_t ID = 1748655686;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<keyboardButtonCallback> fetch(TlBufferParser &p) {
    return make_tl_object<keyboardButtonCallback>(p);
  }

  explicit keyboardButtonCallback(TlBufferParser &p);

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class keyboardButtonRequestPhone final : public KeyboardButton {
 public:
  std::string text_;

  keyboardButtonRequestPhone();

  explicit keyboardButtonRequestPhone(std::string const &text_);

  static const std::int32_t ID = -1318425559;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<keyboardButtonRequestPhone> fetch(TlBufferParser &p) {
    return make_tl_object<keyboardButtonRequestPhone>(p);
  }

  explicit keyboardButtonRequestPhone(TlBufferParser &p);

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class keyboardButtonRequestGeoLocation final : public KeyboardButton {
 public:
  std::string text_;

  keyboardButtonRequestGeoLocation();

  explicit keyboardButtonRequestGeoLocation(std::string const &text_);

  static const std::int32_t ID = -59151553;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<keyboardButtonRequestGeoLocation> fetch(TlBufferParser &p) {
    return make_tl_object<keyboardButtonRequestGeoLocation>(p);
  }

  explicit keyboardButtonRequestGeoLocation(TlBufferParser &p);

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class keyboardButtonSwitchInline final : public KeyboardButton {
 public:
  std::int32_t flags_;
  bool same_peer_;
  std::string text_;
  std::string query_;
  enum Flags : std::int32_t {SAME_PEER_MASK = 1};

  keyboardButtonSwitchInline();

  keyboardButtonSwitchInline(std::int32_t flags_, bool same_peer_, std::string const &text_, std::string const &query_);

  static const std::int32_t ID = 90744648;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<keyboardButtonSwitchInline> fetch(TlBufferParser &p);

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class keyboardButtonGame final : public KeyboardButton {
 public:
  std::string text_;

  keyboardButtonGame();

  explicit keyboardButtonGame(std::string const &text_);

  static const std::int32_t ID = 1358175439;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<keyboardButtonGame> fetch(TlBufferParser &p) {
    return make_tl_object<keyboardButtonGame>(p);
  }

  explicit keyboardButtonGame(TlBufferParser &p);

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class keyboardButtonBuy final : public KeyboardButton {
 public:
  std::string text_;

  keyboardButtonBuy();

  explicit keyboardButtonBuy(std::string const &text_);

  static const std::int32_t ID = -1344716869;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<keyboardButtonBuy> fetch(TlBufferParser &p) {
    return make_tl_object<keyboardButtonBuy>(p);
  }

  explicit keyboardButtonBuy(TlBufferParser &p);

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class keyboardButtonRow final : public Object {
 public:
  std::vector<object_ptr<KeyboardButton>> buttons_;

  keyboardButtonRow();

  explicit keyboardButtonRow(std::vector<object_ptr<KeyboardButton>> &&buttons_);

  static const std::int32_t ID = 2002815875;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<keyboardButtonRow> fetch(TlBufferParser &p) {
    return make_tl_object<keyboardButtonRow>(p);
  }

  explicit keyboardButtonRow(TlBufferParser &p);

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class labeledPrice final : public Object {
 public:
  std::string label_;
  std::int64_t amount_;

  labeledPrice();

  labeledPrice(std::string const &label_, std::int64_t amount_);

  static const std::int32_t ID = -886477832;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<labeledPrice> fetch(TlBufferParser &p) {
    return make_tl_object<labeledPrice>(p);
  }

  explicit labeledPrice(TlBufferParser &p);

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class langPackDifference final : public Object {
 public:
  std::string lang_code_;
  std::int32_t from_version_;
  std::int32_t version_;
  std::vector<object_ptr<LangPackString>> strings_;

  langPackDifference();

  langPackDifference(std::string const &lang_code_, std::int32_t from_version_, std::int32_t version_, std::vector<object_ptr<LangPackString>> &&strings_);

  static const std::int32_t ID = -209337866;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<langPackDifference> fetch(TlBufferParser &p) {
    return make_tl_object<langPackDifference>(p);
  }

  explicit langPackDifference(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class langPackLanguage final : public Object {
 public:
  std::string name_;
  std::string native_name_;
  std::string lang_code_;

  langPackLanguage();

  langPackLanguage(std::string const &name_, std::string const &native_name_, std::string const &lang_code_);

  static const std::int32_t ID = 292985073;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<langPackLanguage> fetch(TlBufferParser &p) {
    return make_tl_object<langPackLanguage>(p);
  }

  explicit langPackLanguage(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class LangPackString: public Object {
 public:

  static object_ptr<LangPackString> fetch(TlBufferParser &p);
};

class langPackString final : public LangPackString {
 public:
  std::string key_;
  std::string value_;

  langPackString();

  langPackString(std::string const &key_, std::string const &value_);

  static const std::int32_t ID = -892239370;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<langPackString> fetch(TlBufferParser &p) {
    return make_tl_object<langPackString>(p);
  }

  explicit langPackString(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class langPackStringPluralized final : public LangPackString {
 public:
  std::int32_t flags_;
  std::string key_;
  std::string zero_value_;
  std::string one_value_;
  std::string two_value_;
  std::string few_value_;
  std::string many_value_;
  std::string other_value_;
  enum Flags : std::int32_t {ZERO_VALUE_MASK = 1, ONE_VALUE_MASK = 2, TWO_VALUE_MASK = 4, FEW_VALUE_MASK = 8, MANY_VALUE_MASK = 16};

  langPackStringPluralized();

  langPackStringPluralized(std::int32_t flags_, std::string const &key_, std::string const &zero_value_, std::string const &one_value_, std::string const &two_value_, std::string const &few_value_, std::string const &many_value_, std::string const &other_value_);

  static const std::int32_t ID = 1816636575;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<langPackStringPluralized> fetch(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class langPackStringDeleted final : public LangPackString {
 public:
  std::string key_;

  langPackStringDeleted();

  explicit langPackStringDeleted(std::string const &key_);

  static const std::int32_t ID = 695856818;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<langPackStringDeleted> fetch(TlBufferParser &p) {
    return make_tl_object<langPackStringDeleted>(p);
  }

  explicit langPackStringDeleted(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class maskCoords final : public Object {
 public:
  std::int32_t n_;
  double x_;
  double y_;
  double zoom_;

  maskCoords();

  maskCoords(std::int32_t n_, double x_, double y_, double zoom_);

  static const std::int32_t ID = -1361650766;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<maskCoords> fetch(TlBufferParser &p) {
    return make_tl_object<maskCoords>(p);
  }

  explicit maskCoords(TlBufferParser &p);

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class Message: public Object {
 public:

  static object_ptr<Message> fetch(TlBufferParser &p);
};

class messageEmpty final : public Message {
 public:
  std::int32_t id_;

  messageEmpty();

  explicit messageEmpty(std::int32_t id_);

  static const std::int32_t ID = -2082087340;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<messageEmpty> fetch(TlBufferParser &p) {
    return make_tl_object<messageEmpty>(p);
  }

  explicit messageEmpty(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class message final : public Message {
 public:
  std::int32_t flags_;
  bool out_;
  bool mentioned_;
  bool media_unread_;
  bool silent_;
  bool post_;
  std::int32_t id_;
  std::int32_t from_id_;
  object_ptr<Peer> to_id_;
  object_ptr<messageFwdHeader> fwd_from_;
  std::int32_t via_bot_id_;
  std::int32_t reply_to_msg_id_;
  std::int32_t date_;
  std::string message_;
  object_ptr<MessageMedia> media_;
  object_ptr<ReplyMarkup> reply_markup_;
  std::vector<object_ptr<MessageEntity>> entities_;
  std::int32_t views_;
  std::int32_t edit_date_;
  std::string post_author_;
  std::int64_t grouped_id_;
  enum Flags : std::int32_t {OUT_MASK = 2, MENTIONED_MASK = 16, MEDIA_UNREAD_MASK = 32, SILENT_MASK = 8192, POST_MASK = 16384, FROM_ID_MASK = 256, FWD_FROM_MASK = 4, VIA_BOT_ID_MASK = 2048, REPLY_TO_MSG_ID_MASK = 8, MEDIA_MASK = 512, REPLY_MARKUP_MASK = 64, ENTITIES_MASK = 128, VIEWS_MASK = 1024, EDIT_DATE_MASK = 32768, POST_AUTHOR_MASK = 65536, GROUPED_ID_MASK = 131072};

  message();

  message(std::int32_t flags_, bool out_, bool mentioned_, bool media_unread_, bool silent_, bool post_, std::int32_t id_, std::int32_t from_id_, object_ptr<Peer> &&to_id_, object_ptr<messageFwdHeader> &&fwd_from_, std::int32_t via_bot_id_, std::int32_t reply_to_msg_id_, std::int32_t date_, std::string const &message_, object_ptr<MessageMedia> &&media_, object_ptr<ReplyMarkup> &&reply_markup_, std::vector<object_ptr<MessageEntity>> &&entities_, std::int32_t views_, std::int32_t edit_date_, std::string const &post_author_, std::int64_t grouped_id_);

  static const std::int32_t ID = 1157215293;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<message> fetch(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class messageService final : public Message {
 public:
  std::int32_t flags_;
  bool out_;
  bool mentioned_;
  bool media_unread_;
  bool silent_;
  bool post_;
  std::int32_t id_;
  std::int32_t from_id_;
  object_ptr<Peer> to_id_;
  std::int32_t reply_to_msg_id_;
  std::int32_t date_;
  object_ptr<MessageAction> action_;
  enum Flags : std::int32_t {OUT_MASK = 2, MENTIONED_MASK = 16, MEDIA_UNREAD_MASK = 32, SILENT_MASK = 8192, POST_MASK = 16384, FROM_ID_MASK = 256, REPLY_TO_MSG_ID_MASK = 8};

  messageService();

  messageService(std::int32_t flags_, bool out_, bool mentioned_, bool media_unread_, bool silent_, bool post_, std::int32_t id_, std::int32_t from_id_, object_ptr<Peer> &&to_id_, std::int32_t reply_to_msg_id_, std::int32_t date_, object_ptr<MessageAction> &&action_);

  static const std::int32_t ID = -1642487306;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<messageService> fetch(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class MessageAction: public Object {
 public:

  static object_ptr<MessageAction> fetch(TlBufferParser &p);
};

class messageActionEmpty final : public MessageAction {
 public:

  messageActionEmpty();

  static const std::int32_t ID = -1230047312;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<messageActionEmpty> fetch(TlBufferParser &p) {
    return make_tl_object<messageActionEmpty>(p);
  }

  explicit messageActionEmpty(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class messageActionChatCreate final : public MessageAction {
 public:
  std::string title_;
  std::vector<std::int32_t> users_;

  messageActionChatCreate();

  messageActionChatCreate(std::string const &title_, std::vector<std::int32_t> &&users_);

  static const std::int32_t ID = -1503425638;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<messageActionChatCreate> fetch(TlBufferParser &p) {
    return make_tl_object<messageActionChatCreate>(p);
  }

  explicit messageActionChatCreate(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class messageActionChatEditTitle final : public MessageAction {
 public:
  std::string title_;

  messageActionChatEditTitle();

  explicit messageActionChatEditTitle(std::string const &title_);

  static const std::int32_t ID = -1247687078;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<messageActionChatEditTitle> fetch(TlBufferParser &p) {
    return make_tl_object<messageActionChatEditTitle>(p);
  }

  explicit messageActionChatEditTitle(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class messageActionChatEditPhoto final : public MessageAction {
 public:
  object_ptr<Photo> photo_;

  messageActionChatEditPhoto();

  explicit messageActionChatEditPhoto(object_ptr<Photo> &&photo_);

  static const std::int32_t ID = 2144015272;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<messageActionChatEditPhoto> fetch(TlBufferParser &p) {
    return make_tl_object<messageActionChatEditPhoto>(p);
  }

  explicit messageActionChatEditPhoto(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class messageActionChatDeletePhoto final : public MessageAction {
 public:

  messageActionChatDeletePhoto();

  static const std::int32_t ID = -1780220945;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<messageActionChatDeletePhoto> fetch(TlBufferParser &p) {
    return make_tl_object<messageActionChatDeletePhoto>(p);
  }

  explicit messageActionChatDeletePhoto(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class messageActionChatAddUser final : public MessageAction {
 public:
  std::vector<std::int32_t> users_;

  messageActionChatAddUser();

  explicit messageActionChatAddUser(std::vector<std::int32_t> &&users_);

  static const std::int32_t ID = 1217033015;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<messageActionChatAddUser> fetch(TlBufferParser &p) {
    return make_tl_object<messageActionChatAddUser>(p);
  }

  explicit messageActionChatAddUser(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class messageActionChatDeleteUser final : public MessageAction {
 public:
  std::int32_t user_id_;

  messageActionChatDeleteUser();

  explicit messageActionChatDeleteUser(std::int32_t user_id_);

  static const std::int32_t ID = -1297179892;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<messageActionChatDeleteUser> fetch(TlBufferParser &p) {
    return make_tl_object<messageActionChatDeleteUser>(p);
  }

  explicit messageActionChatDeleteUser(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class messageActionChatJoinedByLink final : public MessageAction {
 public:
  std::int32_t inviter_id_;

  messageActionChatJoinedByLink();

  explicit messageActionChatJoinedByLink(std::int32_t inviter_id_);

  static const std::int32_t ID = -123931160;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<messageActionChatJoinedByLink> fetch(TlBufferParser &p) {
    return make_tl_object<messageActionChatJoinedByLink>(p);
  }

  explicit messageActionChatJoinedByLink(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class messageActionChannelCreate final : public MessageAction {
 public:
  std::string title_;

  messageActionChannelCreate();

  explicit messageActionChannelCreate(std::string const &title_);

  static const std::int32_t ID = -1781355374;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<messageActionChannelCreate> fetch(TlBufferParser &p) {
    return make_tl_object<messageActionChannelCreate>(p);
  }

  explicit messageActionChannelCreate(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class messageActionChatMigrateTo final : public MessageAction {
 public:
  std::int32_t channel_id_;

  messageActionChatMigrateTo();

  explicit messageActionChatMigrateTo(std::int32_t channel_id_);

  static const std::int32_t ID = 1371385889;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<messageActionChatMigrateTo> fetch(TlBufferParser &p) {
    return make_tl_object<messageActionChatMigrateTo>(p);
  }

  explicit messageActionChatMigrateTo(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class messageActionChannelMigrateFrom final : public MessageAction {
 public:
  std::string title_;
  std::int32_t chat_id_;

  messageActionChannelMigrateFrom();

  messageActionChannelMigrateFrom(std::string const &title_, std::int32_t chat_id_);

  static const std::int32_t ID = -1336546578;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<messageActionChannelMigrateFrom> fetch(TlBufferParser &p) {
    return make_tl_object<messageActionChannelMigrateFrom>(p);
  }

  explicit messageActionChannelMigrateFrom(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class messageActionPinMessage final : public MessageAction {
 public:

  messageActionPinMessage();

  static const std::int32_t ID = -1799538451;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<messageActionPinMessage> fetch(TlBufferParser &p) {
    return make_tl_object<messageActionPinMessage>(p);
  }

  explicit messageActionPinMessage(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class messageActionHistoryClear final : public MessageAction {
 public:

  messageActionHistoryClear();

  static const std::int32_t ID = -1615153660;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<messageActionHistoryClear> fetch(TlBufferParser &p) {
    return make_tl_object<messageActionHistoryClear>(p);
  }

  explicit messageActionHistoryClear(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class messageActionGameScore final : public MessageAction {
 public:
  std::int64_t game_id_;
  std::int32_t score_;

  messageActionGameScore();

  messageActionGameScore(std::int64_t game_id_, std::int32_t score_);

  static const std::int32_t ID = -1834538890;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<messageActionGameScore> fetch(TlBufferParser &p) {
    return make_tl_object<messageActionGameScore>(p);
  }

  explicit messageActionGameScore(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class messageActionPaymentSentMe final : public MessageAction {
 public:
  std::int32_t flags_;
  std::string currency_;
  std::int64_t total_amount_;
  BufferSlice payload_;
  object_ptr<paymentRequestedInfo> info_;
  std::string shipping_option_id_;
  object_ptr<paymentCharge> charge_;
  enum Flags : std::int32_t {INFO_MASK = 1, SHIPPING_OPTION_ID_MASK = 2};

  messageActionPaymentSentMe();

  messageActionPaymentSentMe(std::int32_t flags_, std::string const &currency_, std::int64_t total_amount_, BufferSlice &&payload_, object_ptr<paymentRequestedInfo> &&info_, std::string const &shipping_option_id_, object_ptr<paymentCharge> &&charge_);

  static const std::int32_t ID = -1892568281;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<messageActionPaymentSentMe> fetch(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class messageActionPaymentSent final : public MessageAction {
 public:
  std::string currency_;
  std::int64_t total_amount_;

  messageActionPaymentSent();

  messageActionPaymentSent(std::string const &currency_, std::int64_t total_amount_);

  static const std::int32_t ID = 1080663248;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<messageActionPaymentSent> fetch(TlBufferParser &p) {
    return make_tl_object<messageActionPaymentSent>(p);
  }

  explicit messageActionPaymentSent(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class messageActionPhoneCall final : public MessageAction {
 public:
  std::int32_t flags_;
  std::int64_t call_id_;
  object_ptr<PhoneCallDiscardReason> reason_;
  std::int32_t duration_;
  enum Flags : std::int32_t {REASON_MASK = 1, DURATION_MASK = 2};

  messageActionPhoneCall();

  messageActionPhoneCall(std::int32_t flags_, std::int64_t call_id_, object_ptr<PhoneCallDiscardReason> &&reason_, std::int32_t duration_);

  static const std::int32_t ID = -2132731265;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<messageActionPhoneCall> fetch(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class messageActionScreenshotTaken final : public MessageAction {
 public:

  messageActionScreenshotTaken();

  static const std::int32_t ID = 1200788123;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<messageActionScreenshotTaken> fetch(TlBufferParser &p) {
    return make_tl_object<messageActionScreenshotTaken>(p);
  }

  explicit messageActionScreenshotTaken(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class messageActionCustomAction final : public MessageAction {
 public:
  std::string message_;

  messageActionCustomAction();

  explicit messageActionCustomAction(std::string const &message_);

  static const std::int32_t ID = -85549226;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<messageActionCustomAction> fetch(TlBufferParser &p) {
    return make_tl_object<messageActionCustomAction>(p);
  }

  explicit messageActionCustomAction(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class messageActionBotAllowed final : public MessageAction {
 public:
  std::string domain_;

  messageActionBotAllowed();

  explicit messageActionBotAllowed(std::string const &domain_);

  static const std::int32_t ID = -1410748418;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<messageActionBotAllowed> fetch(TlBufferParser &p) {
    return make_tl_object<messageActionBotAllowed>(p);
  }

  explicit messageActionBotAllowed(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class messageActionSecureValuesSentMe final : public MessageAction {
 public:
  std::vector<object_ptr<secureValue>> values_;
  object_ptr<secureCredentialsEncrypted> credentials_;

  messageActionSecureValuesSentMe();

  messageActionSecureValuesSentMe(std::vector<object_ptr<secureValue>> &&values_, object_ptr<secureCredentialsEncrypted> &&credentials_);

  static const std::int32_t ID = 455635795;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<messageActionSecureValuesSentMe> fetch(TlBufferParser &p) {
    return make_tl_object<messageActionSecureValuesSentMe>(p);
  }

  explicit messageActionSecureValuesSentMe(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class messageActionSecureValuesSent final : public MessageAction {
 public:
  std::vector<object_ptr<SecureValueType>> types_;

  messageActionSecureValuesSent();

  explicit messageActionSecureValuesSent(std::vector<object_ptr<SecureValueType>> &&types_);

  static const std::int32_t ID = -648257196;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<messageActionSecureValuesSent> fetch(TlBufferParser &p) {
    return make_tl_object<messageActionSecureValuesSent>(p);
  }

  explicit messageActionSecureValuesSent(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class MessageEntity: public Object {
 public:

  static object_ptr<MessageEntity> fetch(TlBufferParser &p);
};

class messageEntityUnknown final : public MessageEntity {
 public:
  std::int32_t offset_;
  std::int32_t length_;

  messageEntityUnknown();

  messageEntityUnknown(std::int32_t offset_, std::int32_t length_);

  static const std::int32_t ID = -1148011883;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<messageEntityUnknown> fetch(TlBufferParser &p) {
    return make_tl_object<messageEntityUnknown>(p);
  }

  explicit messageEntityUnknown(TlBufferParser &p);

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class messageEntityMention final : public MessageEntity {
 public:
  std::int32_t offset_;
  std::int32_t length_;

  messageEntityMention();

  messageEntityMention(std::int32_t offset_, std::int32_t length_);

  static const std::int32_t ID = -100378723;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<messageEntityMention> fetch(TlBufferParser &p) {
    return make_tl_object<messageEntityMention>(p);
  }

  explicit messageEntityMention(TlBufferParser &p);

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class messageEntityHashtag final : public MessageEntity {
 public:
  std::int32_t offset_;
  std::int32_t length_;

  messageEntityHashtag();

  messageEntityHashtag(std::int32_t offset_, std::int32_t length_);

  static const std::int32_t ID = 1868782349;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<messageEntityHashtag> fetch(TlBufferParser &p) {
    return make_tl_object<messageEntityHashtag>(p);
  }

  explicit messageEntityHashtag(TlBufferParser &p);

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class messageEntityBotCommand final : public MessageEntity {
 public:
  std::int32_t offset_;
  std::int32_t length_;

  messageEntityBotCommand();

  messageEntityBotCommand(std::int32_t offset_, std::int32_t length_);

  static const std::int32_t ID = 1827637959;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<messageEntityBotCommand> fetch(TlBufferParser &p) {
    return make_tl_object<messageEntityBotCommand>(p);
  }

  explicit messageEntityBotCommand(TlBufferParser &p);

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class messageEntityUrl final : public MessageEntity {
 public:
  std::int32_t offset_;
  std::int32_t length_;

  messageEntityUrl();

  messageEntityUrl(std::int32_t offset_, std::int32_t length_);

  static const std::int32_t ID = 1859134776;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<messageEntityUrl> fetch(TlBufferParser &p) {
    return make_tl_object<messageEntityUrl>(p);
  }

  explicit messageEntityUrl(TlBufferParser &p);

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class messageEntityEmail final : public MessageEntity {
 public:
  std::int32_t offset_;
  std::int32_t length_;

  messageEntityEmail();

  messageEntityEmail(std::int32_t offset_, std::int32_t length_);

  static const std::int32_t ID = 1692693954;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<messageEntityEmail> fetch(TlBufferParser &p) {
    return make_tl_object<messageEntityEmail>(p);
  }

  explicit messageEntityEmail(TlBufferParser &p);

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class messageEntityBold final : public MessageEntity {
 public:
  std::int32_t offset_;
  std::int32_t length_;

  messageEntityBold();

  messageEntityBold(std::int32_t offset_, std::int32_t length_);

  static const std::int32_t ID = -1117713463;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<messageEntityBold> fetch(TlBufferParser &p) {
    return make_tl_object<messageEntityBold>(p);
  }

  explicit messageEntityBold(TlBufferParser &p);

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class messageEntityItalic final : public MessageEntity {
 public:
  std::int32_t offset_;
  std::int32_t length_;

  messageEntityItalic();

  messageEntityItalic(std::int32_t offset_, std::int32_t length_);

  static const std::int32_t ID = -2106619040;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<messageEntityItalic> fetch(TlBufferParser &p) {
    return make_tl_object<messageEntityItalic>(p);
  }

  explicit messageEntityItalic(TlBufferParser &p);

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class messageEntityCode final : public MessageEntity {
 public:
  std::int32_t offset_;
  std::int32_t length_;

  messageEntityCode();

  messageEntityCode(std::int32_t offset_, std::int32_t length_);

  static const std::int32_t ID = 681706865;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<messageEntityCode> fetch(TlBufferParser &p) {
    return make_tl_object<messageEntityCode>(p);
  }

  explicit messageEntityCode(TlBufferParser &p);

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class messageEntityPre final : public MessageEntity {
 public:
  std::int32_t offset_;
  std::int32_t length_;
  std::string language_;

  messageEntityPre();

  messageEntityPre(std::int32_t offset_, std::int32_t length_, std::string const &language_);

  static const std::int32_t ID = 1938967520;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<messageEntityPre> fetch(TlBufferParser &p) {
    return make_tl_object<messageEntityPre>(p);
  }

  explicit messageEntityPre(TlBufferParser &p);

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class messageEntityTextUrl final : public MessageEntity {
 public:
  std::int32_t offset_;
  std::int32_t length_;
  std::string url_;

  messageEntityTextUrl();

  messageEntityTextUrl(std::int32_t offset_, std::int32_t length_, std::string const &url_);

  static const std::int32_t ID = 1990644519;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<messageEntityTextUrl> fetch(TlBufferParser &p) {
    return make_tl_object<messageEntityTextUrl>(p);
  }

  explicit messageEntityTextUrl(TlBufferParser &p);

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class messageEntityMentionName final : public MessageEntity {
 public:
  std::int32_t offset_;
  std::int32_t length_;
  std::int32_t user_id_;

  messageEntityMentionName();

  messageEntityMentionName(std::int32_t offset_, std::int32_t length_, std::int32_t user_id_);

  static const std::int32_t ID = 892193368;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<messageEntityMentionName> fetch(TlBufferParser &p) {
    return make_tl_object<messageEntityMentionName>(p);
  }

  explicit messageEntityMentionName(TlBufferParser &p);

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class inputMessageEntityMentionName final : public MessageEntity {
 public:
  std::int32_t offset_;
  std::int32_t length_;
  object_ptr<InputUser> user_id_;

  inputMessageEntityMentionName();

  inputMessageEntityMentionName(std::int32_t offset_, std::int32_t length_, object_ptr<InputUser> &&user_id_);

  static const std::int32_t ID = 546203849;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<inputMessageEntityMentionName> fetch(TlBufferParser &p) {
    return make_tl_object<inputMessageEntityMentionName>(p);
  }

  explicit inputMessageEntityMentionName(TlBufferParser &p);

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class messageEntityPhone final : public MessageEntity {
 public:
  std::int32_t offset_;
  std::int32_t length_;

  messageEntityPhone();

  messageEntityPhone(std::int32_t offset_, std::int32_t length_);

  static const std::int32_t ID = -1687559349;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<messageEntityPhone> fetch(TlBufferParser &p) {
    return make_tl_object<messageEntityPhone>(p);
  }

  explicit messageEntityPhone(TlBufferParser &p);

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class messageEntityCashtag final : public MessageEntity {
 public:
  std::int32_t offset_;
  std::int32_t length_;

  messageEntityCashtag();

  messageEntityCashtag(std::int32_t offset_, std::int32_t length_);

  static const std::int32_t ID = 1280209983;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<messageEntityCashtag> fetch(TlBufferParser &p) {
    return make_tl_object<messageEntityCashtag>(p);
  }

  explicit messageEntityCashtag(TlBufferParser &p);

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class messageFwdHeader final : public Object {
 public:
  std::int32_t flags_;
  std::int32_t from_id_;
  std::int32_t date_;
  std::int32_t channel_id_;
  std::int32_t channel_post_;
  std::string post_author_;
  object_ptr<Peer> saved_from_peer_;
  std::int32_t saved_from_msg_id_;
  enum Flags : std::int32_t {FROM_ID_MASK = 1, CHANNEL_ID_MASK = 2, CHANNEL_POST_MASK = 4, POST_AUTHOR_MASK = 8, SAVED_FROM_PEER_MASK = 16, SAVED_FROM_MSG_ID_MASK = 16};

  messageFwdHeader();

  messageFwdHeader(std::int32_t flags_, std::int32_t from_id_, std::int32_t date_, std::int32_t channel_id_, std::int32_t channel_post_, std::string const &post_author_, object_ptr<Peer> &&saved_from_peer_, std::int32_t saved_from_msg_id_);

  static const std::int32_t ID = 1436466797;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<messageFwdHeader> fetch(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class MessageMedia: public Object {
 public:

  static object_ptr<MessageMedia> fetch(TlBufferParser &p);
};

class messageMediaEmpty final : public MessageMedia {
 public:

  messageMediaEmpty();

  static const std::int32_t ID = 1038967584;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<messageMediaEmpty> fetch(TlBufferParser &p) {
    return make_tl_object<messageMediaEmpty>(p);
  }

  explicit messageMediaEmpty(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class messageMediaPhoto final : public MessageMedia {
 public:
  std::int32_t flags_;
  object_ptr<Photo> photo_;
  std::int32_t ttl_seconds_;
  enum Flags : std::int32_t {PHOTO_MASK = 1, TTL_SECONDS_MASK = 4};

  messageMediaPhoto();

  messageMediaPhoto(std::int32_t flags_, object_ptr<Photo> &&photo_, std::int32_t ttl_seconds_);

  static const std::int32_t ID = 1766936791;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<messageMediaPhoto> fetch(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class messageMediaGeo final : public MessageMedia {
 public:
  object_ptr<GeoPoint> geo_;

  messageMediaGeo();

  explicit messageMediaGeo(object_ptr<GeoPoint> &&geo_);

  static const std::int32_t ID = 1457575028;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<messageMediaGeo> fetch(TlBufferParser &p) {
    return make_tl_object<messageMediaGeo>(p);
  }

  explicit messageMediaGeo(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class messageMediaContact final : public MessageMedia {
 public:
  std::string phone_number_;
  std::string first_name_;
  std::string last_name_;
  std::string vcard_;
  std::int32_t user_id_;

  messageMediaContact();

  messageMediaContact(std::string const &phone_number_, std::string const &first_name_, std::string const &last_name_, std::string const &vcard_, std::int32_t user_id_);

  static const std::int32_t ID = -873313984;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<messageMediaContact> fetch(TlBufferParser &p) {
    return make_tl_object<messageMediaContact>(p);
  }

  explicit messageMediaContact(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class messageMediaUnsupported final : public MessageMedia {
 public:

  messageMediaUnsupported();

  static const std::int32_t ID = -1618676578;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<messageMediaUnsupported> fetch(TlBufferParser &p) {
    return make_tl_object<messageMediaUnsupported>(p);
  }

  explicit messageMediaUnsupported(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class messageMediaDocument final : public MessageMedia {
 public:
  std::int32_t flags_;
  object_ptr<Document> document_;
  std::int32_t ttl_seconds_;
  enum Flags : std::int32_t {DOCUMENT_MASK = 1, TTL_SECONDS_MASK = 4};

  messageMediaDocument();

  messageMediaDocument(std::int32_t flags_, object_ptr<Document> &&document_, std::int32_t ttl_seconds_);

  static const std::int32_t ID = -1666158377;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<messageMediaDocument> fetch(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class messageMediaWebPage final : public MessageMedia {
 public:
  object_ptr<WebPage> webpage_;

  messageMediaWebPage();

  explicit messageMediaWebPage(object_ptr<WebPage> &&webpage_);

  static const std::int32_t ID = -1557277184;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<messageMediaWebPage> fetch(TlBufferParser &p) {
    return make_tl_object<messageMediaWebPage>(p);
  }

  explicit messageMediaWebPage(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class messageMediaVenue final : public MessageMedia {
 public:
  object_ptr<GeoPoint> geo_;
  std::string title_;
  std::string address_;
  std::string provider_;
  std::string venue_id_;
  std::string venue_type_;

  messageMediaVenue();

  messageMediaVenue(object_ptr<GeoPoint> &&geo_, std::string const &title_, std::string const &address_, std::string const &provider_, std::string const &venue_id_, std::string const &venue_type_);

  static const std::int32_t ID = 784356159;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<messageMediaVenue> fetch(TlBufferParser &p) {
    return make_tl_object<messageMediaVenue>(p);
  }

  explicit messageMediaVenue(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class messageMediaGame final : public MessageMedia {
 public:
  object_ptr<game> game_;

  messageMediaGame();

  explicit messageMediaGame(object_ptr<game> &&game_);

  static const std::int32_t ID = -38694904;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<messageMediaGame> fetch(TlBufferParser &p) {
    return make_tl_object<messageMediaGame>(p);
  }

  explicit messageMediaGame(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class messageMediaInvoice final : public MessageMedia {
 public:
  std::int32_t flags_;
  bool shipping_address_requested_;
  bool test_;
  std::string title_;
  std::string description_;
  object_ptr<WebDocument> photo_;
  std::int32_t receipt_msg_id_;
  std::string currency_;
  std::int64_t total_amount_;
  std::string start_param_;
  enum Flags : std::int32_t {SHIPPING_ADDRESS_REQUESTED_MASK = 2, TEST_MASK = 8, PHOTO_MASK = 1, RECEIPT_MSG_ID_MASK = 4};

  messageMediaInvoice();

  messageMediaInvoice(std::int32_t flags_, bool shipping_address_requested_, bool test_, std::string const &title_, std::string const &description_, object_ptr<WebDocument> &&photo_, std::int32_t receipt_msg_id_, std::string const &currency_, std::int64_t total_amount_, std::string const &start_param_);

  static const std::int32_t ID = -2074799289;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<messageMediaInvoice> fetch(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class messageMediaGeoLive final : public MessageMedia {
 public:
  object_ptr<GeoPoint> geo_;
  std::int32_t period_;

  messageMediaGeoLive();

  messageMediaGeoLive(object_ptr<GeoPoint> &&geo_, std::int32_t period_);

  static const std::int32_t ID = 2084316681;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<messageMediaGeoLive> fetch(TlBufferParser &p) {
    return make_tl_object<messageMediaGeoLive>(p);
  }

  explicit messageMediaGeoLive(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class messageRange final : public Object {
 public:
  std::int32_t min_id_;
  std::int32_t max_id_;

  messageRange();

  messageRange(std::int32_t min_id_, std::int32_t max_id_);

  static const std::int32_t ID = 182649427;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<messageRange> fetch(TlBufferParser &p) {
    return make_tl_object<messageRange>(p);
  }

  explicit messageRange(TlBufferParser &p);

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class MessagesFilter: public Object {
 public:
};

class inputMessagesFilterEmpty final : public MessagesFilter {
 public:

  inputMessagesFilterEmpty();

  static const std::int32_t ID = 1474492012;
  std::int32_t get_id() const final {
    return ID;
  }

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class inputMessagesFilterPhotos final : public MessagesFilter {
 public:

  inputMessagesFilterPhotos();

  static const std::int32_t ID = -1777752804;
  std::int32_t get_id() const final {
    return ID;
  }

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class inputMessagesFilterVideo final : public MessagesFilter {
 public:

  inputMessagesFilterVideo();

  static const std::int32_t ID = -1614803355;
  std::int32_t get_id() const final {
    return ID;
  }

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class inputMessagesFilterPhotoVideo final : public MessagesFilter {
 public:

  inputMessagesFilterPhotoVideo();

  static const std::int32_t ID = 1458172132;
  std::int32_t get_id() const final {
    return ID;
  }

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class inputMessagesFilterDocument final : public MessagesFilter {
 public:

  inputMessagesFilterDocument();

  static const std::int32_t ID = -1629621880;
  std::int32_t get_id() const final {
    return ID;
  }

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class inputMessagesFilterUrl final : public MessagesFilter {
 public:

  inputMessagesFilterUrl();

  static const std::int32_t ID = 2129714567;
  std::int32_t get_id() const final {
    return ID;
  }

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class inputMessagesFilterGif final : public MessagesFilter {
 public:

  inputMessagesFilterGif();

  static const std::int32_t ID = -3644025;
  std::int32_t get_id() const final {
    return ID;
  }

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class inputMessagesFilterVoice final : public MessagesFilter {
 public:

  inputMessagesFilterVoice();

  static const std::int32_t ID = 1358283666;
  std::int32_t get_id() const final {
    return ID;
  }

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class inputMessagesFilterMusic final : public MessagesFilter {
 public:

  inputMessagesFilterMusic();

  static const std::int32_t ID = 928101534;
  std::int32_t get_id() const final {
    return ID;
  }

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class inputMessagesFilterChatPhotos final : public MessagesFilter {
 public:

  inputMessagesFilterChatPhotos();

  static const std::int32_t ID = 975236280;
  std::int32_t get_id() const final {
    return ID;
  }

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class inputMessagesFilterPhoneCalls final : public MessagesFilter {
 public:
  std::int32_t flags_;
  bool missed_;
  enum Flags : std::int32_t {MISSED_MASK = 1};

  inputMessagesFilterPhoneCalls();

  inputMessagesFilterPhoneCalls(std::int32_t flags_, bool missed_);

  static const std::int32_t ID = -2134272152;
  std::int32_t get_id() const final {
    return ID;
  }

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class inputMessagesFilterRoundVoice final : public MessagesFilter {
 public:

  inputMessagesFilterRoundVoice();

  static const std::int32_t ID = 2054952868;
  std::int32_t get_id() const final {
    return ID;
  }

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class inputMessagesFilterRoundVideo final : public MessagesFilter {
 public:

  inputMessagesFilterRoundVideo();

  static const std::int32_t ID = -1253451181;
  std::int32_t get_id() const final {
    return ID;
  }

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class inputMessagesFilterMyMentions final : public MessagesFilter {
 public:

  inputMessagesFilterMyMentions();

  static const std::int32_t ID = -1040652646;
  std::int32_t get_id() const final {
    return ID;
  }

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class inputMessagesFilterGeo final : public MessagesFilter {
 public:

  inputMessagesFilterGeo();

  static const std::int32_t ID = -419271411;
  std::int32_t get_id() const final {
    return ID;
  }

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class inputMessagesFilterContacts final : public MessagesFilter {
 public:

  inputMessagesFilterContacts();

  static const std::int32_t ID = -530392189;
  std::int32_t get_id() const final {
    return ID;
  }

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class nearestDc final : public Object {
 public:
  std::string country_;
  std::int32_t this_dc_;
  std::int32_t nearest_dc_;

  nearestDc();

  nearestDc(std::string const &country_, std::int32_t this_dc_, std::int32_t nearest_dc_);

  static const std::int32_t ID = -1910892683;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<nearestDc> fetch(TlBufferParser &p) {
    return make_tl_object<nearestDc>(p);
  }

  explicit nearestDc(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class NotifyPeer: public Object {
 public:

  static object_ptr<NotifyPeer> fetch(TlBufferParser &p);
};

class notifyPeer final : public NotifyPeer {
 public:
  object_ptr<Peer> peer_;

  notifyPeer();

  explicit notifyPeer(object_ptr<Peer> &&peer_);

  static const std::int32_t ID = -1613493288;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<notifyPeer> fetch(TlBufferParser &p) {
    return make_tl_object<notifyPeer>(p);
  }

  explicit notifyPeer(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class notifyUsers final : public NotifyPeer {
 public:

  notifyUsers();

  static const std::int32_t ID = -1261946036;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<notifyUsers> fetch(TlBufferParser &p) {
    return make_tl_object<notifyUsers>(p);
  }

  explicit notifyUsers(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class notifyChats final : public NotifyPeer {
 public:

  notifyChats();

  static const std::int32_t ID = -1073230141;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<notifyChats> fetch(TlBufferParser &p) {
    return make_tl_object<notifyChats>(p);
  }

  explicit notifyChats(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class Page: public Object {
 public:

  static object_ptr<Page> fetch(TlBufferParser &p);
};

class pagePart final : public Page {
 public:
  std::vector<object_ptr<PageBlock>> blocks_;
  std::vector<object_ptr<Photo>> photos_;
  std::vector<object_ptr<Document>> documents_;

  pagePart();

  pagePart(std::vector<object_ptr<PageBlock>> &&blocks_, std::vector<object_ptr<Photo>> &&photos_, std::vector<object_ptr<Document>> &&documents_);

  static const std::int32_t ID = -1908433218;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<pagePart> fetch(TlBufferParser &p) {
    return make_tl_object<pagePart>(p);
  }

  explicit pagePart(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class pageFull final : public Page {
 public:
  std::vector<object_ptr<PageBlock>> blocks_;
  std::vector<object_ptr<Photo>> photos_;
  std::vector<object_ptr<Document>> documents_;

  pageFull();

  pageFull(std::vector<object_ptr<PageBlock>> &&blocks_, std::vector<object_ptr<Photo>> &&photos_, std::vector<object_ptr<Document>> &&documents_);

  static const std::int32_t ID = 1433323434;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<pageFull> fetch(TlBufferParser &p) {
    return make_tl_object<pageFull>(p);
  }

  explicit pageFull(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class PageBlock: public Object {
 public:

  static object_ptr<PageBlock> fetch(TlBufferParser &p);
};

class pageBlockUnsupported final : public PageBlock {
 public:

  pageBlockUnsupported();

  static const std::int32_t ID = 324435594;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<pageBlockUnsupported> fetch(TlBufferParser &p) {
    return make_tl_object<pageBlockUnsupported>(p);
  }

  explicit pageBlockUnsupported(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class pageBlockTitle final : public PageBlock {
 public:
  object_ptr<RichText> text_;

  pageBlockTitle();

  explicit pageBlockTitle(object_ptr<RichText> &&text_);

  static const std::int32_t ID = 1890305021;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<pageBlockTitle> fetch(TlBufferParser &p) {
    return make_tl_object<pageBlockTitle>(p);
  }

  explicit pageBlockTitle(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class pageBlockSubtitle final : public PageBlock {
 public:
  object_ptr<RichText> text_;

  pageBlockSubtitle();

  explicit pageBlockSubtitle(object_ptr<RichText> &&text_);

  static const std::int32_t ID = -1879401953;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<pageBlockSubtitle> fetch(TlBufferParser &p) {
    return make_tl_object<pageBlockSubtitle>(p);
  }

  explicit pageBlockSubtitle(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class pageBlockAuthorDate final : public PageBlock {
 public:
  object_ptr<RichText> author_;
  std::int32_t published_date_;

  pageBlockAuthorDate();

  pageBlockAuthorDate(object_ptr<RichText> &&author_, std::int32_t published_date_);

  static const std::int32_t ID = -1162877472;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<pageBlockAuthorDate> fetch(TlBufferParser &p) {
    return make_tl_object<pageBlockAuthorDate>(p);
  }

  explicit pageBlockAuthorDate(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class pageBlockHeader final : public PageBlock {
 public:
  object_ptr<RichText> text_;

  pageBlockHeader();

  explicit pageBlockHeader(object_ptr<RichText> &&text_);

  static const std::int32_t ID = -1076861716;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<pageBlockHeader> fetch(TlBufferParser &p) {
    return make_tl_object<pageBlockHeader>(p);
  }

  explicit pageBlockHeader(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class pageBlockSubheader final : public PageBlock {
 public:
  object_ptr<RichText> text_;

  pageBlockSubheader();

  explicit pageBlockSubheader(object_ptr<RichText> &&text_);

  static const std::int32_t ID = -248793375;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<pageBlockSubheader> fetch(TlBufferParser &p) {
    return make_tl_object<pageBlockSubheader>(p);
  }

  explicit pageBlockSubheader(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class pageBlockParagraph final : public PageBlock {
 public:
  object_ptr<RichText> text_;

  pageBlockParagraph();

  explicit pageBlockParagraph(object_ptr<RichText> &&text_);

  static const std::int32_t ID = 1182402406;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<pageBlockParagraph> fetch(TlBufferParser &p) {
    return make_tl_object<pageBlockParagraph>(p);
  }

  explicit pageBlockParagraph(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class pageBlockPreformatted final : public PageBlock {
 public:
  object_ptr<RichText> text_;
  std::string language_;

  pageBlockPreformatted();

  pageBlockPreformatted(object_ptr<RichText> &&text_, std::string const &language_);

  static const std::int32_t ID = -1066346178;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<pageBlockPreformatted> fetch(TlBufferParser &p) {
    return make_tl_object<pageBlockPreformatted>(p);
  }

  explicit pageBlockPreformatted(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class pageBlockFooter final : public PageBlock {
 public:
  object_ptr<RichText> text_;

  pageBlockFooter();

  explicit pageBlockFooter(object_ptr<RichText> &&text_);

  static const std::int32_t ID = 1216809369;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<pageBlockFooter> fetch(TlBufferParser &p) {
    return make_tl_object<pageBlockFooter>(p);
  }

  explicit pageBlockFooter(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class pageBlockDivider final : public PageBlock {
 public:

  pageBlockDivider();

  static const std::int32_t ID = -618614392;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<pageBlockDivider> fetch(TlBufferParser &p) {
    return make_tl_object<pageBlockDivider>(p);
  }

  explicit pageBlockDivider(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class pageBlockAnchor final : public PageBlock {
 public:
  std::string name_;

  pageBlockAnchor();

  explicit pageBlockAnchor(std::string const &name_);

  static const std::int32_t ID = -837994576;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<pageBlockAnchor> fetch(TlBufferParser &p) {
    return make_tl_object<pageBlockAnchor>(p);
  }

  explicit pageBlockAnchor(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class pageBlockList final : public PageBlock {
 public:
  bool ordered_;
  std::vector<object_ptr<RichText>> items_;

  pageBlockList();

  pageBlockList(bool ordered_, std::vector<object_ptr<RichText>> &&items_);

  static const std::int32_t ID = 978896884;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<pageBlockList> fetch(TlBufferParser &p) {
    return make_tl_object<pageBlockList>(p);
  }

  explicit pageBlockList(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class pageBlockBlockquote final : public PageBlock {
 public:
  object_ptr<RichText> text_;
  object_ptr<RichText> caption_;

  pageBlockBlockquote();

  pageBlockBlockquote(object_ptr<RichText> &&text_, object_ptr<RichText> &&caption_);

  static const std::int32_t ID = 641563686;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<pageBlockBlockquote> fetch(TlBufferParser &p) {
    return make_tl_object<pageBlockBlockquote>(p);
  }

  explicit pageBlockBlockquote(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class pageBlockPullquote final : public PageBlock {
 public:
  object_ptr<RichText> text_;
  object_ptr<RichText> caption_;

  pageBlockPullquote();

  pageBlockPullquote(object_ptr<RichText> &&text_, object_ptr<RichText> &&caption_);

  static const std::int32_t ID = 1329878739;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<pageBlockPullquote> fetch(TlBufferParser &p) {
    return make_tl_object<pageBlockPullquote>(p);
  }

  explicit pageBlockPullquote(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class pageBlockPhoto final : public PageBlock {
 public:
  std::int64_t photo_id_;
  object_ptr<RichText> caption_;

  pageBlockPhoto();

  pageBlockPhoto(std::int64_t photo_id_, object_ptr<RichText> &&caption_);

  static const std::int32_t ID = -372860542;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<pageBlockPhoto> fetch(TlBufferParser &p) {
    return make_tl_object<pageBlockPhoto>(p);
  }

  explicit pageBlockPhoto(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class pageBlockVideo final : public PageBlock {
 public:
  std::int32_t flags_;
  bool autoplay_;
  bool loop_;
  std::int64_t video_id_;
  object_ptr<RichText> caption_;
  enum Flags : std::int32_t {AUTOPLAY_MASK = 1, LOOP_MASK = 2};

  pageBlockVideo();

  pageBlockVideo(std::int32_t flags_, bool autoplay_, bool loop_, std::int64_t video_id_, object_ptr<RichText> &&caption_);

  static const std::int32_t ID = -640214938;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<pageBlockVideo> fetch(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class pageBlockCover final : public PageBlock {
 public:
  object_ptr<PageBlock> cover_;

  pageBlockCover();

  explicit pageBlockCover(object_ptr<PageBlock> &&cover_);

  static const std::int32_t ID = 972174080;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<pageBlockCover> fetch(TlBufferParser &p) {
    return make_tl_object<pageBlockCover>(p);
  }

  explicit pageBlockCover(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class pageBlockEmbed final : public PageBlock {
 public:
  std::int32_t flags_;
  bool full_width_;
  bool allow_scrolling_;
  std::string url_;
  std::string html_;
  std::int64_t poster_photo_id_;
  std::int32_t w_;
  std::int32_t h_;
  object_ptr<RichText> caption_;
  enum Flags : std::int32_t {FULL_WIDTH_MASK = 1, ALLOW_SCROLLING_MASK = 8, URL_MASK = 2, HTML_MASK = 4, POSTER_PHOTO_ID_MASK = 16};

  pageBlockEmbed();

  pageBlockEmbed(std::int32_t flags_, bool full_width_, bool allow_scrolling_, std::string const &url_, std::string const &html_, std::int64_t poster_photo_id_, std::int32_t w_, std::int32_t h_, object_ptr<RichText> &&caption_);

  static const std::int32_t ID = -840826671;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<pageBlockEmbed> fetch(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class pageBlockEmbedPost final : public PageBlock {
 public:
  std::string url_;
  std::int64_t webpage_id_;
  std::int64_t author_photo_id_;
  std::string author_;
  std::int32_t date_;
  std::vector<object_ptr<PageBlock>> blocks_;
  object_ptr<RichText> caption_;

  pageBlockEmbedPost();

  pageBlockEmbedPost(std::string const &url_, std::int64_t webpage_id_, std::int64_t author_photo_id_, std::string const &author_, std::int32_t date_, std::vector<object_ptr<PageBlock>> &&blocks_, object_ptr<RichText> &&caption_);

  static const std::int32_t ID = 690781161;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<pageBlockEmbedPost> fetch(TlBufferParser &p) {
    return make_tl_object<pageBlockEmbedPost>(p);
  }

  explicit pageBlockEmbedPost(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class pageBlockCollage final : public PageBlock {
 public:
  std::vector<object_ptr<PageBlock>> items_;
  object_ptr<RichText> caption_;

  pageBlockCollage();

  pageBlockCollage(std::vector<object_ptr<PageBlock>> &&items_, object_ptr<RichText> &&caption_);

  static const std::int32_t ID = 145955919;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<pageBlockCollage> fetch(TlBufferParser &p) {
    return make_tl_object<pageBlockCollage>(p);
  }

  explicit pageBlockCollage(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class pageBlockSlideshow final : public PageBlock {
 public:
  std::vector<object_ptr<PageBlock>> items_;
  object_ptr<RichText> caption_;

  pageBlockSlideshow();

  pageBlockSlideshow(std::vector<object_ptr<PageBlock>> &&items_, object_ptr<RichText> &&caption_);

  static const std::int32_t ID = 319588707;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<pageBlockSlideshow> fetch(TlBufferParser &p) {
    return make_tl_object<pageBlockSlideshow>(p);
  }

  explicit pageBlockSlideshow(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class pageBlockChannel final : public PageBlock {
 public:
  object_ptr<Chat> channel_;

  pageBlockChannel();

  explicit pageBlockChannel(object_ptr<Chat> &&channel_);

  static const std::int32_t ID = -283684427;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<pageBlockChannel> fetch(TlBufferParser &p) {
    return make_tl_object<pageBlockChannel>(p);
  }

  explicit pageBlockChannel(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class pageBlockAudio final : public PageBlock {
 public:
  std::int64_t audio_id_;
  object_ptr<RichText> caption_;

  pageBlockAudio();

  pageBlockAudio(std::int64_t audio_id_, object_ptr<RichText> &&caption_);

  static const std::int32_t ID = 834148991;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<pageBlockAudio> fetch(TlBufferParser &p) {
    return make_tl_object<pageBlockAudio>(p);
  }

  explicit pageBlockAudio(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class PasswordKdfAlgo: public Object {
 public:

  static object_ptr<PasswordKdfAlgo> fetch(TlBufferParser &p);
};

class passwordKdfAlgoUnknown final : public PasswordKdfAlgo {
 public:

  passwordKdfAlgoUnknown();

  static const std::int32_t ID = -732254058;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<passwordKdfAlgoUnknown> fetch(TlBufferParser &p) {
    return make_tl_object<passwordKdfAlgoUnknown>(p);
  }

  explicit passwordKdfAlgoUnknown(TlBufferParser &p);

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class passwordKdfAlgoSHA256SHA256PBKDF2HMACSHA512iter100000SHA256ModPow final : public PasswordKdfAlgo {
 public:
  BufferSlice salt1_;
  BufferSlice salt2_;
  std::int32_t g_;
  BufferSlice p_;

  passwordKdfAlgoSHA256SHA256PBKDF2HMACSHA512iter100000SHA256ModPow();

  passwordKdfAlgoSHA256SHA256PBKDF2HMACSHA512iter100000SHA256ModPow(BufferSlice &&salt1_, BufferSlice &&salt2_, std::int32_t g_, BufferSlice &&p_);

  static const std::int32_t ID = 982592842;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<passwordKdfAlgoSHA256SHA256PBKDF2HMACSHA512iter100000SHA256ModPow> fetch(TlBufferParser &p) {
    return make_tl_object<passwordKdfAlgoSHA256SHA256PBKDF2HMACSHA512iter100000SHA256ModPow>(p);
  }

  explicit passwordKdfAlgoSHA256SHA256PBKDF2HMACSHA512iter100000SHA256ModPow(TlBufferParser &p);

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class paymentCharge final : public Object {
 public:
  std::string id_;
  std::string provider_charge_id_;

  paymentCharge();

  paymentCharge(std::string const &id_, std::string const &provider_charge_id_);

  static const std::int32_t ID = -368917890;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<paymentCharge> fetch(TlBufferParser &p) {
    return make_tl_object<paymentCharge>(p);
  }

  explicit paymentCharge(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class paymentRequestedInfo final : public Object {
 public:
  std::int32_t flags_;
  std::string name_;
  std::string phone_;
  std::string email_;
  object_ptr<postAddress> shipping_address_;
  enum Flags : std::int32_t {NAME_MASK = 1, PHONE_MASK = 2, EMAIL_MASK = 4, SHIPPING_ADDRESS_MASK = 8};

  paymentRequestedInfo();

  paymentRequestedInfo(std::int32_t flags_, std::string const &name_, std::string const &phone_, std::string const &email_, object_ptr<postAddress> &&shipping_address_);

  static const std::int32_t ID = -1868808300;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<paymentRequestedInfo> fetch(TlBufferParser &p);

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class paymentSavedCredentialsCard final : public Object {
 public:
  std::string id_;
  std::string title_;

  paymentSavedCredentialsCard();

  paymentSavedCredentialsCard(std::string const &id_, std::string const &title_);

  static const std::int32_t ID = -842892769;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<paymentSavedCredentialsCard> fetch(TlBufferParser &p) {
    return make_tl_object<paymentSavedCredentialsCard>(p);
  }

  explicit paymentSavedCredentialsCard(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class Peer: public Object {
 public:

  static object_ptr<Peer> fetch(TlBufferParser &p);
};

class peerUser final : public Peer {
 public:
  std::int32_t user_id_;

  peerUser();

  explicit peerUser(std::int32_t user_id_);

  static const std::int32_t ID = -1649296275;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<peerUser> fetch(TlBufferParser &p) {
    return make_tl_object<peerUser>(p);
  }

  explicit peerUser(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class peerChat final : public Peer {
 public:
  std::int32_t chat_id_;

  peerChat();

  explicit peerChat(std::int32_t chat_id_);

  static const std::int32_t ID = -1160714821;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<peerChat> fetch(TlBufferParser &p) {
    return make_tl_object<peerChat>(p);
  }

  explicit peerChat(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class peerChannel final : public Peer {
 public:
  std::int32_t channel_id_;

  peerChannel();

  explicit peerChannel(std::int32_t channel_id_);

  static const std::int32_t ID = -1109531342;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<peerChannel> fetch(TlBufferParser &p) {
    return make_tl_object<peerChannel>(p);
  }

  explicit peerChannel(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class peerNotifySettings final : public Object {
 public:
  std::int32_t flags_;
  bool show_previews_;
  bool silent_;
  std::int32_t mute_until_;
  std::string sound_;
  enum Flags : std::int32_t {SHOW_PREVIEWS_MASK = 1, SILENT_MASK = 2, MUTE_UNTIL_MASK = 4, SOUND_MASK = 8};

  peerNotifySettings();

  peerNotifySettings(std::int32_t flags_, bool show_previews_, bool silent_, std::int32_t mute_until_, std::string const &sound_);

  static const std::int32_t ID = -1353671392;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<peerNotifySettings> fetch(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class peerSettings final : public Object {
 public:
  std::int32_t flags_;
  bool report_spam_;
  enum Flags : std::int32_t {REPORT_SPAM_MASK = 1};

  peerSettings();

  peerSettings(std::int32_t flags_, bool report_spam_);

  static const std::int32_t ID = -2122045747;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<peerSettings> fetch(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class PhoneCall: public Object {
 public:

  static object_ptr<PhoneCall> fetch(TlBufferParser &p);
};

class phoneCallEmpty final : public PhoneCall {
 public:
  std::int64_t id_;

  phoneCallEmpty();

  explicit phoneCallEmpty(std::int64_t id_);

  static const std::int32_t ID = 1399245077;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<phoneCallEmpty> fetch(TlBufferParser &p) {
    return make_tl_object<phoneCallEmpty>(p);
  }

  explicit phoneCallEmpty(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class phoneCallWaiting final : public PhoneCall {
 public:
  std::int32_t flags_;
  std::int64_t id_;
  std::int64_t access_hash_;
  std::int32_t date_;
  std::int32_t admin_id_;
  std::int32_t participant_id_;
  object_ptr<phoneCallProtocol> protocol_;
  std::int32_t receive_date_;
  enum Flags : std::int32_t {RECEIVE_DATE_MASK = 1};

  phoneCallWaiting();

  phoneCallWaiting(std::int32_t flags_, std::int64_t id_, std::int64_t access_hash_, std::int32_t date_, std::int32_t admin_id_, std::int32_t participant_id_, object_ptr<phoneCallProtocol> &&protocol_, std::int32_t receive_date_);

  static const std::int32_t ID = 462375633;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<phoneCallWaiting> fetch(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class phoneCallRequested final : public PhoneCall {
 public:
  std::int64_t id_;
  std::int64_t access_hash_;
  std::int32_t date_;
  std::int32_t admin_id_;
  std::int32_t participant_id_;
  BufferSlice g_a_hash_;
  object_ptr<phoneCallProtocol> protocol_;

  phoneCallRequested();

  phoneCallRequested(std::int64_t id_, std::int64_t access_hash_, std::int32_t date_, std::int32_t admin_id_, std::int32_t participant_id_, BufferSlice &&g_a_hash_, object_ptr<phoneCallProtocol> &&protocol_);

  static const std::int32_t ID = -2089411356;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<phoneCallRequested> fetch(TlBufferParser &p) {
    return make_tl_object<phoneCallRequested>(p);
  }

  explicit phoneCallRequested(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class phoneCallAccepted final : public PhoneCall {
 public:
  std::int64_t id_;
  std::int64_t access_hash_;
  std::int32_t date_;
  std::int32_t admin_id_;
  std::int32_t participant_id_;
  BufferSlice g_b_;
  object_ptr<phoneCallProtocol> protocol_;

  phoneCallAccepted();

  phoneCallAccepted(std::int64_t id_, std::int64_t access_hash_, std::int32_t date_, std::int32_t admin_id_, std::int32_t participant_id_, BufferSlice &&g_b_, object_ptr<phoneCallProtocol> &&protocol_);

  static const std::int32_t ID = 1828732223;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<phoneCallAccepted> fetch(TlBufferParser &p) {
    return make_tl_object<phoneCallAccepted>(p);
  }

  explicit phoneCallAccepted(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class phoneCall final : public PhoneCall {
 public:
  std::int64_t id_;
  std::int64_t access_hash_;
  std::int32_t date_;
  std::int32_t admin_id_;
  std::int32_t participant_id_;
  BufferSlice g_a_or_b_;
  std::int64_t key_fingerprint_;
  object_ptr<phoneCallProtocol> protocol_;
  object_ptr<phoneConnection> connection_;
  std::vector<object_ptr<phoneConnection>> alternative_connections_;
  std::int32_t start_date_;

  phoneCall();

  phoneCall(std::int64_t id_, std::int64_t access_hash_, std::int32_t date_, std::int32_t admin_id_, std::int32_t participant_id_, BufferSlice &&g_a_or_b_, std::int64_t key_fingerprint_, object_ptr<phoneCallProtocol> &&protocol_, object_ptr<phoneConnection> &&connection_, std::vector<object_ptr<phoneConnection>> &&alternative_connections_, std::int32_t start_date_);

  static const std::int32_t ID = -1660057;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<phoneCall> fetch(TlBufferParser &p) {
    return make_tl_object<phoneCall>(p);
  }

  explicit phoneCall(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class phoneCallDiscarded final : public PhoneCall {
 public:
  std::int32_t flags_;
  bool need_rating_;
  bool need_debug_;
  std::int64_t id_;
  object_ptr<PhoneCallDiscardReason> reason_;
  std::int32_t duration_;
  enum Flags : std::int32_t {NEED_RATING_MASK = 4, NEED_DEBUG_MASK = 8, REASON_MASK = 1, DURATION_MASK = 2};

  phoneCallDiscarded();

  phoneCallDiscarded(std::int32_t flags_, bool need_rating_, bool need_debug_, std::int64_t id_, object_ptr<PhoneCallDiscardReason> &&reason_, std::int32_t duration_);

  static const std::int32_t ID = 1355435489;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<phoneCallDiscarded> fetch(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class PhoneCallDiscardReason: public Object {
 public:

  static object_ptr<PhoneCallDiscardReason> fetch(TlBufferParser &p);
};

class phoneCallDiscardReasonMissed final : public PhoneCallDiscardReason {
 public:

  phoneCallDiscardReasonMissed();

  static const std::int32_t ID = -2048646399;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<phoneCallDiscardReasonMissed> fetch(TlBufferParser &p) {
    return make_tl_object<phoneCallDiscardReasonMissed>(p);
  }

  explicit phoneCallDiscardReasonMissed(TlBufferParser &p);

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class phoneCallDiscardReasonDisconnect final : public PhoneCallDiscardReason {
 public:

  phoneCallDiscardReasonDisconnect();

  static const std::int32_t ID = -527056480;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<phoneCallDiscardReasonDisconnect> fetch(TlBufferParser &p) {
    return make_tl_object<phoneCallDiscardReasonDisconnect>(p);
  }

  explicit phoneCallDiscardReasonDisconnect(TlBufferParser &p);

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class phoneCallDiscardReasonHangup final : public PhoneCallDiscardReason {
 public:

  phoneCallDiscardReasonHangup();

  static const std::int32_t ID = 1471006352;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<phoneCallDiscardReasonHangup> fetch(TlBufferParser &p) {
    return make_tl_object<phoneCallDiscardReasonHangup>(p);
  }

  explicit phoneCallDiscardReasonHangup(TlBufferParser &p);

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class phoneCallDiscardReasonBusy final : public PhoneCallDiscardReason {
 public:

  phoneCallDiscardReasonBusy();

  static const std::int32_t ID = -84416311;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<phoneCallDiscardReasonBusy> fetch(TlBufferParser &p) {
    return make_tl_object<phoneCallDiscardReasonBusy>(p);
  }

  explicit phoneCallDiscardReasonBusy(TlBufferParser &p);

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class phoneCallProtocol final : public Object {
 public:
  std::int32_t flags_;
  bool udp_p2p_;
  bool udp_reflector_;
  std::int32_t min_layer_;
  std::int32_t max_layer_;
  enum Flags : std::int32_t {UDP_P2P_MASK = 1, UDP_REFLECTOR_MASK = 2};

  phoneCallProtocol();

  phoneCallProtocol(std::int32_t flags_, bool udp_p2p_, bool udp_reflector_, std::int32_t min_layer_, std::int32_t max_layer_);

  static const std::int32_t ID = -1564789301;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<phoneCallProtocol> fetch(TlBufferParser &p);

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class phoneConnection final : public Object {
 public:
  std::int64_t id_;
  std::string ip_;
  std::string ipv6_;
  std::int32_t port_;
  BufferSlice peer_tag_;

  phoneConnection();

  phoneConnection(std::int64_t id_, std::string const &ip_, std::string const &ipv6_, std::int32_t port_, BufferSlice &&peer_tag_);

  static const std::int32_t ID = -1655957568;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<phoneConnection> fetch(TlBufferParser &p) {
    return make_tl_object<phoneConnection>(p);
  }

  explicit phoneConnection(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class Photo: public Object {
 public:

  static object_ptr<Photo> fetch(TlBufferParser &p);
};

class photoEmpty final : public Photo {
 public:
  std::int64_t id_;

  photoEmpty();

  explicit photoEmpty(std::int64_t id_);

  static const std::int32_t ID = 590459437;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<photoEmpty> fetch(TlBufferParser &p) {
    return make_tl_object<photoEmpty>(p);
  }

  explicit photoEmpty(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class photo final : public Photo {
 public:
  std::int32_t flags_;
  bool has_stickers_;
  std::int64_t id_;
  std::int64_t access_hash_;
  std::int32_t date_;
  std::vector<object_ptr<PhotoSize>> sizes_;
  enum Flags : std::int32_t {HAS_STICKERS_MASK = 1};

  photo();

  photo(std::int32_t flags_, bool has_stickers_, std::int64_t id_, std::int64_t access_hash_, std::int32_t date_, std::vector<object_ptr<PhotoSize>> &&sizes_);

  static const std::int32_t ID = -1836524247;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<photo> fetch(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class PhotoSize: public Object {
 public:

  static object_ptr<PhotoSize> fetch(TlBufferParser &p);
};

class photoSizeEmpty final : public PhotoSize {
 public:
  std::string type_;

  photoSizeEmpty();

  explicit photoSizeEmpty(std::string const &type_);

  static const std::int32_t ID = 236446268;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<photoSizeEmpty> fetch(TlBufferParser &p) {
    return make_tl_object<photoSizeEmpty>(p);
  }

  explicit photoSizeEmpty(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class photoSize final : public PhotoSize {
 public:
  std::string type_;
  object_ptr<FileLocation> location_;
  std::int32_t w_;
  std::int32_t h_;
  std::int32_t size_;

  photoSize();

  photoSize(std::string const &type_, object_ptr<FileLocation> &&location_, std::int32_t w_, std::int32_t h_, std::int32_t size_);

  static const std::int32_t ID = 2009052699;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<photoSize> fetch(TlBufferParser &p) {
    return make_tl_object<photoSize>(p);
  }

  explicit photoSize(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class photoCachedSize final : public PhotoSize {
 public:
  std::string type_;
  object_ptr<FileLocation> location_;
  std::int32_t w_;
  std::int32_t h_;
  BufferSlice bytes_;

  photoCachedSize();

  photoCachedSize(std::string const &type_, object_ptr<FileLocation> &&location_, std::int32_t w_, std::int32_t h_, BufferSlice &&bytes_);

  static const std::int32_t ID = -374917894;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<photoCachedSize> fetch(TlBufferParser &p) {
    return make_tl_object<photoCachedSize>(p);
  }

  explicit photoCachedSize(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class popularContact final : public Object {
 public:
  std::int64_t client_id_;
  std::int32_t importers_;

  popularContact();

  popularContact(std::int64_t client_id_, std::int32_t importers_);

  static const std::int32_t ID = 1558266229;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<popularContact> fetch(TlBufferParser &p) {
    return make_tl_object<popularContact>(p);
  }

  explicit popularContact(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class postAddress final : public Object {
 public:
  std::string street_line1_;
  std::string street_line2_;
  std::string city_;
  std::string state_;
  std::string country_iso2_;
  std::string post_code_;

  postAddress();

  postAddress(std::string const &street_line1_, std::string const &street_line2_, std::string const &city_, std::string const &state_, std::string const &country_iso2_, std::string const &post_code_);

  static const std::int32_t ID = 512535275;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<postAddress> fetch(TlBufferParser &p) {
    return make_tl_object<postAddress>(p);
  }

  explicit postAddress(TlBufferParser &p);

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class PrivacyKey: public Object {
 public:

  static object_ptr<PrivacyKey> fetch(TlBufferParser &p);
};

class privacyKeyStatusTimestamp final : public PrivacyKey {
 public:

  privacyKeyStatusTimestamp();

  static const std::int32_t ID = -1137792208;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<privacyKeyStatusTimestamp> fetch(TlBufferParser &p) {
    return make_tl_object<privacyKeyStatusTimestamp>(p);
  }

  explicit privacyKeyStatusTimestamp(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class privacyKeyChatInvite final : public PrivacyKey {
 public:

  privacyKeyChatInvite();

  static const std::int32_t ID = 1343122938;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<privacyKeyChatInvite> fetch(TlBufferParser &p) {
    return make_tl_object<privacyKeyChatInvite>(p);
  }

  explicit privacyKeyChatInvite(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class privacyKeyPhoneCall final : public PrivacyKey {
 public:

  privacyKeyPhoneCall();

  static const std::int32_t ID = 1030105979;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<privacyKeyPhoneCall> fetch(TlBufferParser &p) {
    return make_tl_object<privacyKeyPhoneCall>(p);
  }

  explicit privacyKeyPhoneCall(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class PrivacyRule: public Object {
 public:

  static object_ptr<PrivacyRule> fetch(TlBufferParser &p);
};

class privacyValueAllowContacts final : public PrivacyRule {
 public:

  privacyValueAllowContacts();

  static const std::int32_t ID = -123988;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<privacyValueAllowContacts> fetch(TlBufferParser &p) {
    return make_tl_object<privacyValueAllowContacts>(p);
  }

  explicit privacyValueAllowContacts(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class privacyValueAllowAll final : public PrivacyRule {
 public:

  privacyValueAllowAll();

  static const std::int32_t ID = 1698855810;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<privacyValueAllowAll> fetch(TlBufferParser &p) {
    return make_tl_object<privacyValueAllowAll>(p);
  }

  explicit privacyValueAllowAll(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class privacyValueAllowUsers final : public PrivacyRule {
 public:
  std::vector<std::int32_t> users_;

  privacyValueAllowUsers();

  explicit privacyValueAllowUsers(std::vector<std::int32_t> &&users_);

  static const std::int32_t ID = 1297858060;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<privacyValueAllowUsers> fetch(TlBufferParser &p) {
    return make_tl_object<privacyValueAllowUsers>(p);
  }

  explicit privacyValueAllowUsers(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class privacyValueDisallowContacts final : public PrivacyRule {
 public:

  privacyValueDisallowContacts();

  static const std::int32_t ID = -125240806;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<privacyValueDisallowContacts> fetch(TlBufferParser &p) {
    return make_tl_object<privacyValueDisallowContacts>(p);
  }

  explicit privacyValueDisallowContacts(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class privacyValueDisallowAll final : public PrivacyRule {
 public:

  privacyValueDisallowAll();

  static const std::int32_t ID = -1955338397;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<privacyValueDisallowAll> fetch(TlBufferParser &p) {
    return make_tl_object<privacyValueDisallowAll>(p);
  }

  explicit privacyValueDisallowAll(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class privacyValueDisallowUsers final : public PrivacyRule {
 public:
  std::vector<std::int32_t> users_;

  privacyValueDisallowUsers();

  explicit privacyValueDisallowUsers(std::vector<std::int32_t> &&users_);

  static const std::int32_t ID = 209668535;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<privacyValueDisallowUsers> fetch(TlBufferParser &p) {
    return make_tl_object<privacyValueDisallowUsers>(p);
  }

  explicit privacyValueDisallowUsers(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class receivedNotifyMessage final : public Object {
 public:
  std::int32_t id_;
  std::int32_t flags_;

  receivedNotifyMessage();

  receivedNotifyMessage(std::int32_t id_, std::int32_t flags_);

  static const std::int32_t ID = -1551583367;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<receivedNotifyMessage> fetch(TlBufferParser &p) {
    return make_tl_object<receivedNotifyMessage>(p);
  }

  explicit receivedNotifyMessage(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class RecentMeUrl: public Object {
 public:

  static object_ptr<RecentMeUrl> fetch(TlBufferParser &p);
};

class recentMeUrlUnknown final : public RecentMeUrl {
 public:
  std::string url_;

  recentMeUrlUnknown();

  explicit recentMeUrlUnknown(std::string const &url_);

  static const std::int32_t ID = 1189204285;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<recentMeUrlUnknown> fetch(TlBufferParser &p) {
    return make_tl_object<recentMeUrlUnknown>(p);
  }

  explicit recentMeUrlUnknown(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class recentMeUrlUser final : public RecentMeUrl {
 public:
  std::string url_;
  std::int32_t user_id_;

  recentMeUrlUser();

  recentMeUrlUser(std::string const &url_, std::int32_t user_id_);

  static const std::int32_t ID = -1917045962;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<recentMeUrlUser> fetch(TlBufferParser &p) {
    return make_tl_object<recentMeUrlUser>(p);
  }

  explicit recentMeUrlUser(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class recentMeUrlChat final : public RecentMeUrl {
 public:
  std::string url_;
  std::int32_t chat_id_;

  recentMeUrlChat();

  recentMeUrlChat(std::string const &url_, std::int32_t chat_id_);

  static const std::int32_t ID = -1608834311;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<recentMeUrlChat> fetch(TlBufferParser &p) {
    return make_tl_object<recentMeUrlChat>(p);
  }

  explicit recentMeUrlChat(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class recentMeUrlChatInvite final : public RecentMeUrl {
 public:
  std::string url_;
  object_ptr<ChatInvite> chat_invite_;

  recentMeUrlChatInvite();

  recentMeUrlChatInvite(std::string const &url_, object_ptr<ChatInvite> &&chat_invite_);

  static const std::int32_t ID = -347535331;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<recentMeUrlChatInvite> fetch(TlBufferParser &p) {
    return make_tl_object<recentMeUrlChatInvite>(p);
  }

  explicit recentMeUrlChatInvite(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class recentMeUrlStickerSet final : public RecentMeUrl {
 public:
  std::string url_;
  object_ptr<StickerSetCovered> set_;

  recentMeUrlStickerSet();

  recentMeUrlStickerSet(std::string const &url_, object_ptr<StickerSetCovered> &&set_);

  static const std::int32_t ID = -1140172836;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<recentMeUrlStickerSet> fetch(TlBufferParser &p) {
    return make_tl_object<recentMeUrlStickerSet>(p);
  }

  explicit recentMeUrlStickerSet(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class ReplyMarkup: public Object {
 public:

  static object_ptr<ReplyMarkup> fetch(TlBufferParser &p);
};

class replyKeyboardHide final : public ReplyMarkup {
 public:
  std::int32_t flags_;
  bool selective_;
  enum Flags : std::int32_t {SELECTIVE_MASK = 4};

  replyKeyboardHide();

  replyKeyboardHide(std::int32_t flags_, bool selective_);

  static const std::int32_t ID = -1606526075;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<replyKeyboardHide> fetch(TlBufferParser &p);

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class replyKeyboardForceReply final : public ReplyMarkup {
 public:
  std::int32_t flags_;
  bool single_use_;
  bool selective_;
  enum Flags : std::int32_t {SINGLE_USE_MASK = 2, SELECTIVE_MASK = 4};

  replyKeyboardForceReply();

  replyKeyboardForceReply(std::int32_t flags_, bool single_use_, bool selective_);

  static const std::int32_t ID = -200242528;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<replyKeyboardForceReply> fetch(TlBufferParser &p);

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class replyKeyboardMarkup final : public ReplyMarkup {
 public:
  std::int32_t flags_;
  bool resize_;
  bool single_use_;
  bool selective_;
  std::vector<object_ptr<keyboardButtonRow>> rows_;
  enum Flags : std::int32_t {RESIZE_MASK = 1, SINGLE_USE_MASK = 2, SELECTIVE_MASK = 4};

  replyKeyboardMarkup();

  replyKeyboardMarkup(std::int32_t flags_, bool resize_, bool single_use_, bool selective_, std::vector<object_ptr<keyboardButtonRow>> &&rows_);

  static const std::int32_t ID = 889353612;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<replyKeyboardMarkup> fetch(TlBufferParser &p);

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class replyInlineMarkup final : public ReplyMarkup {
 public:
  std::vector<object_ptr<keyboardButtonRow>> rows_;

  replyInlineMarkup();

  explicit replyInlineMarkup(std::vector<object_ptr<keyboardButtonRow>> &&rows_);

  static const std::int32_t ID = 1218642516;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<replyInlineMarkup> fetch(TlBufferParser &p) {
    return make_tl_object<replyInlineMarkup>(p);
  }

  explicit replyInlineMarkup(TlBufferParser &p);

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class ReportReason: public Object {
 public:
};

class inputReportReasonSpam final : public ReportReason {
 public:

  inputReportReasonSpam();

  static const std::int32_t ID = 1490799288;
  std::int32_t get_id() const final {
    return ID;
  }

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class inputReportReasonViolence final : public ReportReason {
 public:

  inputReportReasonViolence();

  static const std::int32_t ID = 505595789;
  std::int32_t get_id() const final {
    return ID;
  }

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class inputReportReasonPornography final : public ReportReason {
 public:

  inputReportReasonPornography();

  static const std::int32_t ID = 777640226;
  std::int32_t get_id() const final {
    return ID;
  }

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class inputReportReasonOther final : public ReportReason {
 public:
  std::string text_;

  inputReportReasonOther();

  explicit inputReportReasonOther(std::string const &text_);

  static const std::int32_t ID = -512463606;
  std::int32_t get_id() const final {
    return ID;
  }

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class inputReportReasonCopyright final : public ReportReason {
 public:

  inputReportReasonCopyright();

  static const std::int32_t ID = -1685456582;
  std::int32_t get_id() const final {
    return ID;
  }

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class RichText: public Object {
 public:

  static object_ptr<RichText> fetch(TlBufferParser &p);
};

class textEmpty final : public RichText {
 public:

  textEmpty();

  static const std::int32_t ID = -599948721;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<textEmpty> fetch(TlBufferParser &p) {
    return make_tl_object<textEmpty>(p);
  }

  explicit textEmpty(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class textPlain final : public RichText {
 public:
  std::string text_;

  textPlain();

  explicit textPlain(std::string const &text_);

  static const std::int32_t ID = 1950782688;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<textPlain> fetch(TlBufferParser &p) {
    return make_tl_object<textPlain>(p);
  }

  explicit textPlain(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class textBold final : public RichText {
 public:
  object_ptr<RichText> text_;

  textBold();

  explicit textBold(object_ptr<RichText> &&text_);

  static const std::int32_t ID = 1730456516;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<textBold> fetch(TlBufferParser &p) {
    return make_tl_object<textBold>(p);
  }

  explicit textBold(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class textItalic final : public RichText {
 public:
  object_ptr<RichText> text_;

  textItalic();

  explicit textItalic(object_ptr<RichText> &&text_);

  static const std::int32_t ID = -653089380;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<textItalic> fetch(TlBufferParser &p) {
    return make_tl_object<textItalic>(p);
  }

  explicit textItalic(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class textUnderline final : public RichText {
 public:
  object_ptr<RichText> text_;

  textUnderline();

  explicit textUnderline(object_ptr<RichText> &&text_);

  static const std::int32_t ID = -1054465340;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<textUnderline> fetch(TlBufferParser &p) {
    return make_tl_object<textUnderline>(p);
  }

  explicit textUnderline(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class textStrike final : public RichText {
 public:
  object_ptr<RichText> text_;

  textStrike();

  explicit textStrike(object_ptr<RichText> &&text_);

  static const std::int32_t ID = -1678197867;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<textStrike> fetch(TlBufferParser &p) {
    return make_tl_object<textStrike>(p);
  }

  explicit textStrike(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class textFixed final : public RichText {
 public:
  object_ptr<RichText> text_;

  textFixed();

  explicit textFixed(object_ptr<RichText> &&text_);

  static const std::int32_t ID = 1816074681;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<textFixed> fetch(TlBufferParser &p) {
    return make_tl_object<textFixed>(p);
  }

  explicit textFixed(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class textUrl final : public RichText {
 public:
  object_ptr<RichText> text_;
  std::string url_;
  std::int64_t webpage_id_;

  textUrl();

  textUrl(object_ptr<RichText> &&text_, std::string const &url_, std::int64_t webpage_id_);

  static const std::int32_t ID = 1009288385;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<textUrl> fetch(TlBufferParser &p) {
    return make_tl_object<textUrl>(p);
  }

  explicit textUrl(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class textEmail final : public RichText {
 public:
  object_ptr<RichText> text_;
  std::string email_;

  textEmail();

  textEmail(object_ptr<RichText> &&text_, std::string const &email_);

  static const std::int32_t ID = -564523562;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<textEmail> fetch(TlBufferParser &p) {
    return make_tl_object<textEmail>(p);
  }

  explicit textEmail(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class textConcat final : public RichText {
 public:
  std::vector<object_ptr<RichText>> texts_;

  textConcat();

  explicit textConcat(std::vector<object_ptr<RichText>> &&texts_);

  static const std::int32_t ID = 2120376535;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<textConcat> fetch(TlBufferParser &p) {
    return make_tl_object<textConcat>(p);
  }

  explicit textConcat(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class savedPhoneContact final : public Object {
 public:
  std::string phone_;
  std::string first_name_;
  std::string last_name_;
  std::int32_t date_;

  savedPhoneContact();

  savedPhoneContact(std::string const &phone_, std::string const &first_name_, std::string const &last_name_, std::int32_t date_);

  static const std::int32_t ID = 289586518;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<savedPhoneContact> fetch(TlBufferParser &p) {
    return make_tl_object<savedPhoneContact>(p);
  }

  explicit savedPhoneContact(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class secureCredentialsEncrypted final : public Object {
 public:
  BufferSlice data_;
  BufferSlice hash_;
  BufferSlice secret_;

  secureCredentialsEncrypted();

  secureCredentialsEncrypted(BufferSlice &&data_, BufferSlice &&hash_, BufferSlice &&secret_);

  static const std::int32_t ID = 871426631;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<secureCredentialsEncrypted> fetch(TlBufferParser &p) {
    return make_tl_object<secureCredentialsEncrypted>(p);
  }

  explicit secureCredentialsEncrypted(TlBufferParser &p);

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class secureData final : public Object {
 public:
  BufferSlice data_;
  BufferSlice data_hash_;
  BufferSlice secret_;

  secureData();

  secureData(BufferSlice &&data_, BufferSlice &&data_hash_, BufferSlice &&secret_);

  static const std::int32_t ID = -1964327229;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<secureData> fetch(TlBufferParser &p) {
    return make_tl_object<secureData>(p);
  }

  explicit secureData(TlBufferParser &p);

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class SecureFile: public Object {
 public:

  static object_ptr<SecureFile> fetch(TlBufferParser &p);
};

class secureFileEmpty final : public SecureFile {
 public:

  secureFileEmpty();

  static const std::int32_t ID = 1679398724;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<secureFileEmpty> fetch(TlBufferParser &p) {
    return make_tl_object<secureFileEmpty>(p);
  }

  explicit secureFileEmpty(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class secureFile final : public SecureFile {
 public:
  std::int64_t id_;
  std::int64_t access_hash_;
  std::int32_t size_;
  std::int32_t dc_id_;
  std::int32_t date_;
  BufferSlice file_hash_;
  BufferSlice secret_;

  secureFile();

  secureFile(std::int64_t id_, std::int64_t access_hash_, std::int32_t size_, std::int32_t dc_id_, std::int32_t date_, BufferSlice &&file_hash_, BufferSlice &&secret_);

  static const std::int32_t ID = -534283678;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<secureFile> fetch(TlBufferParser &p) {
    return make_tl_object<secureFile>(p);
  }

  explicit secureFile(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class SecurePasswordKdfAlgo: public Object {
 public:

  static object_ptr<SecurePasswordKdfAlgo> fetch(TlBufferParser &p);
};

class securePasswordKdfAlgoUnknown final : public SecurePasswordKdfAlgo {
 public:

  securePasswordKdfAlgoUnknown();

  static const std::int32_t ID = 4883767;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<securePasswordKdfAlgoUnknown> fetch(TlBufferParser &p) {
    return make_tl_object<securePasswordKdfAlgoUnknown>(p);
  }

  explicit securePasswordKdfAlgoUnknown(TlBufferParser &p);

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class securePasswordKdfAlgoPBKDF2HMACSHA512iter100000 final : public SecurePasswordKdfAlgo {
 public:
  BufferSlice salt_;

  securePasswordKdfAlgoPBKDF2HMACSHA512iter100000();

  explicit securePasswordKdfAlgoPBKDF2HMACSHA512iter100000(BufferSlice &&salt_);

  static const std::int32_t ID = -1141711456;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<securePasswordKdfAlgoPBKDF2HMACSHA512iter100000> fetch(TlBufferParser &p) {
    return make_tl_object<securePasswordKdfAlgoPBKDF2HMACSHA512iter100000>(p);
  }

  explicit securePasswordKdfAlgoPBKDF2HMACSHA512iter100000(TlBufferParser &p);

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class securePasswordKdfAlgoSHA512 final : public SecurePasswordKdfAlgo {
 public:
  BufferSlice salt_;

  securePasswordKdfAlgoSHA512();

  explicit securePasswordKdfAlgoSHA512(BufferSlice &&salt_);

  static const std::int32_t ID = -2042159726;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<securePasswordKdfAlgoSHA512> fetch(TlBufferParser &p) {
    return make_tl_object<securePasswordKdfAlgoSHA512>(p);
  }

  explicit securePasswordKdfAlgoSHA512(TlBufferParser &p);

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class SecurePlainData: public Object {
 public:

  static object_ptr<SecurePlainData> fetch(TlBufferParser &p);
};

class securePlainPhone final : public SecurePlainData {
 public:
  std::string phone_;

  securePlainPhone();

  explicit securePlainPhone(std::string const &phone_);

  static const std::int32_t ID = 2103482845;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<securePlainPhone> fetch(TlBufferParser &p) {
    return make_tl_object<securePlainPhone>(p);
  }

  explicit securePlainPhone(TlBufferParser &p);

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class securePlainEmail final : public SecurePlainData {
 public:
  std::string email_;

  securePlainEmail();

  explicit securePlainEmail(std::string const &email_);

  static const std::int32_t ID = 569137759;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<securePlainEmail> fetch(TlBufferParser &p) {
    return make_tl_object<securePlainEmail>(p);
  }

  explicit securePlainEmail(TlBufferParser &p);

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class SecureRequiredType: public Object {
 public:

  static object_ptr<SecureRequiredType> fetch(TlBufferParser &p);
};

class secureRequiredType final : public SecureRequiredType {
 public:
  std::int32_t flags_;
  bool native_names_;
  bool selfie_required_;
  bool translation_required_;
  object_ptr<SecureValueType> type_;
  enum Flags : std::int32_t {NATIVE_NAMES_MASK = 1, SELFIE_REQUIRED_MASK = 2, TRANSLATION_REQUIRED_MASK = 4};

  secureRequiredType();

  secureRequiredType(std::int32_t flags_, bool native_names_, bool selfie_required_, bool translation_required_, object_ptr<SecureValueType> &&type_);

  static const std::int32_t ID = -2103600678;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<secureRequiredType> fetch(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class secureRequiredTypeOneOf final : public SecureRequiredType {
 public:
  std::vector<object_ptr<SecureRequiredType>> types_;

  secureRequiredTypeOneOf();

  explicit secureRequiredTypeOneOf(std::vector<object_ptr<SecureRequiredType>> &&types_);

  static const std::int32_t ID = 41187252;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<secureRequiredTypeOneOf> fetch(TlBufferParser &p) {
    return make_tl_object<secureRequiredTypeOneOf>(p);
  }

  explicit secureRequiredTypeOneOf(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class secureSecretSettings final : public Object {
 public:
  object_ptr<SecurePasswordKdfAlgo> secure_algo_;
  BufferSlice secure_secret_;
  std::int64_t secure_secret_id_;

  secureSecretSettings();

  secureSecretSettings(object_ptr<SecurePasswordKdfAlgo> &&secure_algo_, BufferSlice &&secure_secret_, std::int64_t secure_secret_id_);

  static const std::int32_t ID = 354925740;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<secureSecretSettings> fetch(TlBufferParser &p) {
    return make_tl_object<secureSecretSettings>(p);
  }

  explicit secureSecretSettings(TlBufferParser &p);

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class secureValue final : public Object {
 public:
  std::int32_t flags_;
  object_ptr<SecureValueType> type_;
  object_ptr<secureData> data_;
  object_ptr<SecureFile> front_side_;
  object_ptr<SecureFile> reverse_side_;
  object_ptr<SecureFile> selfie_;
  std::vector<object_ptr<SecureFile>> translation_;
  std::vector<object_ptr<SecureFile>> files_;
  object_ptr<SecurePlainData> plain_data_;
  BufferSlice hash_;
  enum Flags : std::int32_t {DATA_MASK = 1, FRONT_SIDE_MASK = 2, REVERSE_SIDE_MASK = 4, SELFIE_MASK = 8, TRANSLATION_MASK = 64, FILES_MASK = 16, PLAIN_DATA_MASK = 32};

  secureValue();

  secureValue(std::int32_t flags_, object_ptr<SecureValueType> &&type_, object_ptr<secureData> &&data_, object_ptr<SecureFile> &&front_side_, object_ptr<SecureFile> &&reverse_side_, object_ptr<SecureFile> &&selfie_, std::vector<object_ptr<SecureFile>> &&translation_, std::vector<object_ptr<SecureFile>> &&files_, object_ptr<SecurePlainData> &&plain_data_, BufferSlice &&hash_);

  static const std::int32_t ID = 411017418;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<secureValue> fetch(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class SecureValueError: public Object {
 public:

  static object_ptr<SecureValueError> fetch(TlBufferParser &p);
};

class secureValueErrorData final : public SecureValueError {
 public:
  object_ptr<SecureValueType> type_;
  BufferSlice data_hash_;
  std::string field_;
  std::string text_;

  secureValueErrorData();

  secureValueErrorData(object_ptr<SecureValueType> &&type_, BufferSlice &&data_hash_, std::string const &field_, std::string const &text_);

  static const std::int32_t ID = -391902247;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<secureValueErrorData> fetch(TlBufferParser &p) {
    return make_tl_object<secureValueErrorData>(p);
  }

  explicit secureValueErrorData(TlBufferParser &p);

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class secureValueErrorFrontSide final : public SecureValueError {
 public:
  object_ptr<SecureValueType> type_;
  BufferSlice file_hash_;
  std::string text_;

  secureValueErrorFrontSide();

  secureValueErrorFrontSide(object_ptr<SecureValueType> &&type_, BufferSlice &&file_hash_, std::string const &text_);

  static const std::int32_t ID = 12467706;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<secureValueErrorFrontSide> fetch(TlBufferParser &p) {
    return make_tl_object<secureValueErrorFrontSide>(p);
  }

  explicit secureValueErrorFrontSide(TlBufferParser &p);

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class secureValueErrorReverseSide final : public SecureValueError {
 public:
  object_ptr<SecureValueType> type_;
  BufferSlice file_hash_;
  std::string text_;

  secureValueErrorReverseSide();

  secureValueErrorReverseSide(object_ptr<SecureValueType> &&type_, BufferSlice &&file_hash_, std::string const &text_);

  static const std::int32_t ID = -2037765467;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<secureValueErrorReverseSide> fetch(TlBufferParser &p) {
    return make_tl_object<secureValueErrorReverseSide>(p);
  }

  explicit secureValueErrorReverseSide(TlBufferParser &p);

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class secureValueErrorSelfie final : public SecureValueError {
 public:
  object_ptr<SecureValueType> type_;
  BufferSlice file_hash_;
  std::string text_;

  secureValueErrorSelfie();

  secureValueErrorSelfie(object_ptr<SecureValueType> &&type_, BufferSlice &&file_hash_, std::string const &text_);

  static const std::int32_t ID = -449327402;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<secureValueErrorSelfie> fetch(TlBufferParser &p) {
    return make_tl_object<secureValueErrorSelfie>(p);
  }

  explicit secureValueErrorSelfie(TlBufferParser &p);

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class secureValueErrorFile final : public SecureValueError {
 public:
  object_ptr<SecureValueType> type_;
  BufferSlice file_hash_;
  std::string text_;

  secureValueErrorFile();

  secureValueErrorFile(object_ptr<SecureValueType> &&type_, BufferSlice &&file_hash_, std::string const &text_);

  static const std::int32_t ID = 2054162547;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<secureValueErrorFile> fetch(TlBufferParser &p) {
    return make_tl_object<secureValueErrorFile>(p);
  }

  explicit secureValueErrorFile(TlBufferParser &p);

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class secureValueErrorFiles final : public SecureValueError {
 public:
  object_ptr<SecureValueType> type_;
  std::vector<BufferSlice> file_hash_;
  std::string text_;

  secureValueErrorFiles();

  secureValueErrorFiles(object_ptr<SecureValueType> &&type_, std::vector<BufferSlice> &&file_hash_, std::string const &text_);

  static const std::int32_t ID = 1717706985;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<secureValueErrorFiles> fetch(TlBufferParser &p) {
    return make_tl_object<secureValueErrorFiles>(p);
  }

  explicit secureValueErrorFiles(TlBufferParser &p);

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class secureValueError final : public SecureValueError {
 public:
  object_ptr<SecureValueType> type_;
  BufferSlice hash_;
  std::string text_;

  secureValueError();

  secureValueError(object_ptr<SecureValueType> &&type_, BufferSlice &&hash_, std::string const &text_);

  static const std::int32_t ID = -2036501105;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<secureValueError> fetch(TlBufferParser &p) {
    return make_tl_object<secureValueError>(p);
  }

  explicit secureValueError(TlBufferParser &p);

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class secureValueErrorTranslationFile final : public SecureValueError {
 public:
  object_ptr<SecureValueType> type_;
  BufferSlice file_hash_;
  std::string text_;

  secureValueErrorTranslationFile();

  secureValueErrorTranslationFile(object_ptr<SecureValueType> &&type_, BufferSlice &&file_hash_, std::string const &text_);

  static const std::int32_t ID = -1592506512;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<secureValueErrorTranslationFile> fetch(TlBufferParser &p) {
    return make_tl_object<secureValueErrorTranslationFile>(p);
  }

  explicit secureValueErrorTranslationFile(TlBufferParser &p);

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class secureValueErrorTranslationFiles final : public SecureValueError {
 public:
  object_ptr<SecureValueType> type_;
  std::vector<BufferSlice> file_hash_;
  std::string text_;

  secureValueErrorTranslationFiles();

  secureValueErrorTranslationFiles(object_ptr<SecureValueType> &&type_, std::vector<BufferSlice> &&file_hash_, std::string const &text_);

  static const std::int32_t ID = 878931416;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<secureValueErrorTranslationFiles> fetch(TlBufferParser &p) {
    return make_tl_object<secureValueErrorTranslationFiles>(p);
  }

  explicit secureValueErrorTranslationFiles(TlBufferParser &p);

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class secureValueHash final : public Object {
 public:
  object_ptr<SecureValueType> type_;
  BufferSlice hash_;

  secureValueHash();

  secureValueHash(object_ptr<SecureValueType> &&type_, BufferSlice &&hash_);

  static const std::int32_t ID = -316748368;
  std::int32_t get_id() const final {
    return ID;
  }

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class SecureValueType: public Object {
 public:

  static object_ptr<SecureValueType> fetch(TlBufferParser &p);
};

class secureValueTypePersonalDetails final : public SecureValueType {
 public:

  secureValueTypePersonalDetails();

  static const std::int32_t ID = -1658158621;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<secureValueTypePersonalDetails> fetch(TlBufferParser &p) {
    return make_tl_object<secureValueTypePersonalDetails>(p);
  }

  explicit secureValueTypePersonalDetails(TlBufferParser &p);

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class secureValueTypePassport final : public SecureValueType {
 public:

  secureValueTypePassport();

  static const std::int32_t ID = 1034709504;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<secureValueTypePassport> fetch(TlBufferParser &p) {
    return make_tl_object<secureValueTypePassport>(p);
  }

  explicit secureValueTypePassport(TlBufferParser &p);

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class secureValueTypeDriverLicense final : public SecureValueType {
 public:

  secureValueTypeDriverLicense();

  static const std::int32_t ID = 115615172;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<secureValueTypeDriverLicense> fetch(TlBufferParser &p) {
    return make_tl_object<secureValueTypeDriverLicense>(p);
  }

  explicit secureValueTypeDriverLicense(TlBufferParser &p);

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class secureValueTypeIdentityCard final : public SecureValueType {
 public:

  secureValueTypeIdentityCard();

  static const std::int32_t ID = -1596951477;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<secureValueTypeIdentityCard> fetch(TlBufferParser &p) {
    return make_tl_object<secureValueTypeIdentityCard>(p);
  }

  explicit secureValueTypeIdentityCard(TlBufferParser &p);

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class secureValueTypeInternalPassport final : public SecureValueType {
 public:

  secureValueTypeInternalPassport();

  static const std::int32_t ID = -1717268701;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<secureValueTypeInternalPassport> fetch(TlBufferParser &p) {
    return make_tl_object<secureValueTypeInternalPassport>(p);
  }

  explicit secureValueTypeInternalPassport(TlBufferParser &p);

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class secureValueTypeAddress final : public SecureValueType {
 public:

  secureValueTypeAddress();

  static const std::int32_t ID = -874308058;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<secureValueTypeAddress> fetch(TlBufferParser &p) {
    return make_tl_object<secureValueTypeAddress>(p);
  }

  explicit secureValueTypeAddress(TlBufferParser &p);

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class secureValueTypeUtilityBill final : public SecureValueType {
 public:

  secureValueTypeUtilityBill();

  static const std::int32_t ID = -63531698;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<secureValueTypeUtilityBill> fetch(TlBufferParser &p) {
    return make_tl_object<secureValueTypeUtilityBill>(p);
  }

  explicit secureValueTypeUtilityBill(TlBufferParser &p);

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class secureValueTypeBankStatement final : public SecureValueType {
 public:

  secureValueTypeBankStatement();

  static const std::int32_t ID = -1995211763;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<secureValueTypeBankStatement> fetch(TlBufferParser &p) {
    return make_tl_object<secureValueTypeBankStatement>(p);
  }

  explicit secureValueTypeBankStatement(TlBufferParser &p);

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class secureValueTypeRentalAgreement final : public SecureValueType {
 public:

  secureValueTypeRentalAgreement();

  static const std::int32_t ID = -1954007928;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<secureValueTypeRentalAgreement> fetch(TlBufferParser &p) {
    return make_tl_object<secureValueTypeRentalAgreement>(p);
  }

  explicit secureValueTypeRentalAgreement(TlBufferParser &p);

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class secureValueTypePassportRegistration final : public SecureValueType {
 public:

  secureValueTypePassportRegistration();

  static const std::int32_t ID = -1713143702;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<secureValueTypePassportRegistration> fetch(TlBufferParser &p) {
    return make_tl_object<secureValueTypePassportRegistration>(p);
  }

  explicit secureValueTypePassportRegistration(TlBufferParser &p);

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class secureValueTypeTemporaryRegistration final : public SecureValueType {
 public:

  secureValueTypeTemporaryRegistration();

  static const std::int32_t ID = -368907213;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<secureValueTypeTemporaryRegistration> fetch(TlBufferParser &p) {
    return make_tl_object<secureValueTypeTemporaryRegistration>(p);
  }

  explicit secureValueTypeTemporaryRegistration(TlBufferParser &p);

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class secureValueTypePhone final : public SecureValueType {
 public:

  secureValueTypePhone();

  static const std::int32_t ID = -1289704741;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<secureValueTypePhone> fetch(TlBufferParser &p) {
    return make_tl_object<secureValueTypePhone>(p);
  }

  explicit secureValueTypePhone(TlBufferParser &p);

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class secureValueTypeEmail final : public SecureValueType {
 public:

  secureValueTypeEmail();

  static const std::int32_t ID = -1908627474;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<secureValueTypeEmail> fetch(TlBufferParser &p) {
    return make_tl_object<secureValueTypeEmail>(p);
  }

  explicit secureValueTypeEmail(TlBufferParser &p);

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class SendMessageAction: public Object {
 public:

  static object_ptr<SendMessageAction> fetch(TlBufferParser &p);
};

class sendMessageTypingAction final : public SendMessageAction {
 public:

  sendMessageTypingAction();

  static const std::int32_t ID = 381645902;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<sendMessageTypingAction> fetch(TlBufferParser &p) {
    return make_tl_object<sendMessageTypingAction>(p);
  }

  explicit sendMessageTypingAction(TlBufferParser &p);

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class sendMessageCancelAction final : public SendMessageAction {
 public:

  sendMessageCancelAction();

  static const std::int32_t ID = -44119819;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<sendMessageCancelAction> fetch(TlBufferParser &p) {
    return make_tl_object<sendMessageCancelAction>(p);
  }

  explicit sendMessageCancelAction(TlBufferParser &p);

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class sendMessageRecordVideoAction final : public SendMessageAction {
 public:

  sendMessageRecordVideoAction();

  static const std::int32_t ID = -1584933265;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<sendMessageRecordVideoAction> fetch(TlBufferParser &p) {
    return make_tl_object<sendMessageRecordVideoAction>(p);
  }

  explicit sendMessageRecordVideoAction(TlBufferParser &p);

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class sendMessageUploadVideoAction final : public SendMessageAction {
 public:
  std::int32_t progress_;

  sendMessageUploadVideoAction();

  explicit sendMessageUploadVideoAction(std::int32_t progress_);

  static const std::int32_t ID = -378127636;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<sendMessageUploadVideoAction> fetch(TlBufferParser &p) {
    return make_tl_object<sendMessageUploadVideoAction>(p);
  }

  explicit sendMessageUploadVideoAction(TlBufferParser &p);

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class sendMessageRecordAudioAction final : public SendMessageAction {
 public:

  sendMessageRecordAudioAction();

  static const std::int32_t ID = -718310409;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<sendMessageRecordAudioAction> fetch(TlBufferParser &p) {
    return make_tl_object<sendMessageRecordAudioAction>(p);
  }

  explicit sendMessageRecordAudioAction(TlBufferParser &p);

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class sendMessageUploadAudioAction final : public SendMessageAction {
 public:
  std::int32_t progress_;

  sendMessageUploadAudioAction();

  explicit sendMessageUploadAudioAction(std::int32_t progress_);

  static const std::int32_t ID = -212740181;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<sendMessageUploadAudioAction> fetch(TlBufferParser &p) {
    return make_tl_object<sendMessageUploadAudioAction>(p);
  }

  explicit sendMessageUploadAudioAction(TlBufferParser &p);

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class sendMessageUploadPhotoAction final : public SendMessageAction {
 public:
  std::int32_t progress_;

  sendMessageUploadPhotoAction();

  explicit sendMessageUploadPhotoAction(std::int32_t progress_);

  static const std::int32_t ID = -774682074;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<sendMessageUploadPhotoAction> fetch(TlBufferParser &p) {
    return make_tl_object<sendMessageUploadPhotoAction>(p);
  }

  explicit sendMessageUploadPhotoAction(TlBufferParser &p);

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class sendMessageUploadDocumentAction final : public SendMessageAction {
 public:
  std::int32_t progress_;

  sendMessageUploadDocumentAction();

  explicit sendMessageUploadDocumentAction(std::int32_t progress_);

  static const std::int32_t ID = -1441998364;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<sendMessageUploadDocumentAction> fetch(TlBufferParser &p) {
    return make_tl_object<sendMessageUploadDocumentAction>(p);
  }

  explicit sendMessageUploadDocumentAction(TlBufferParser &p);

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class sendMessageGeoLocationAction final : public SendMessageAction {
 public:

  sendMessageGeoLocationAction();

  static const std::int32_t ID = 393186209;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<sendMessageGeoLocationAction> fetch(TlBufferParser &p) {
    return make_tl_object<sendMessageGeoLocationAction>(p);
  }

  explicit sendMessageGeoLocationAction(TlBufferParser &p);

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class sendMessageChooseContactAction final : public SendMessageAction {
 public:

  sendMessageChooseContactAction();

  static const std::int32_t ID = 1653390447;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<sendMessageChooseContactAction> fetch(TlBufferParser &p) {
    return make_tl_object<sendMessageChooseContactAction>(p);
  }

  explicit sendMessageChooseContactAction(TlBufferParser &p);

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class sendMessageGamePlayAction final : public SendMessageAction {
 public:

  sendMessageGamePlayAction();

  static const std::int32_t ID = -580219064;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<sendMessageGamePlayAction> fetch(TlBufferParser &p) {
    return make_tl_object<sendMessageGamePlayAction>(p);
  }

  explicit sendMessageGamePlayAction(TlBufferParser &p);

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class sendMessageRecordRoundAction final : public SendMessageAction {
 public:

  sendMessageRecordRoundAction();

  static const std::int32_t ID = -1997373508;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<sendMessageRecordRoundAction> fetch(TlBufferParser &p) {
    return make_tl_object<sendMessageRecordRoundAction>(p);
  }

  explicit sendMessageRecordRoundAction(TlBufferParser &p);

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class sendMessageUploadRoundAction final : public SendMessageAction {
 public:
  std::int32_t progress_;

  sendMessageUploadRoundAction();

  explicit sendMessageUploadRoundAction(std::int32_t progress_);

  static const std::int32_t ID = 608050278;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<sendMessageUploadRoundAction> fetch(TlBufferParser &p) {
    return make_tl_object<sendMessageUploadRoundAction>(p);
  }

  explicit sendMessageUploadRoundAction(TlBufferParser &p);

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class shippingOption final : public Object {
 public:
  std::string id_;
  std::string title_;
  std::vector<object_ptr<labeledPrice>> prices_;

  shippingOption();

  shippingOption(std::string const &id_, std::string const &title_, std::vector<object_ptr<labeledPrice>> &&prices_);

  static const std::int32_t ID = -1239335713;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<shippingOption> fetch(TlBufferParser &p) {
    return make_tl_object<shippingOption>(p);
  }

  explicit shippingOption(TlBufferParser &p);

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class stickerPack final : public Object {
 public:
  std::string emoticon_;
  std::vector<std::int64_t> documents_;

  stickerPack();

  stickerPack(std::string const &emoticon_, std::vector<std::int64_t> &&documents_);

  static const std::int32_t ID = 313694676;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<stickerPack> fetch(TlBufferParser &p) {
    return make_tl_object<stickerPack>(p);
  }

  explicit stickerPack(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class stickerSet final : public Object {
 public:
  std::int32_t flags_;
  bool archived_;
  bool official_;
  bool masks_;
  std::int32_t installed_date_;
  std::int64_t id_;
  std::int64_t access_hash_;
  std::string title_;
  std::string short_name_;
  std::int32_t count_;
  std::int32_t hash_;
  enum Flags : std::int32_t {ARCHIVED_MASK = 2, OFFICIAL_MASK = 4, MASKS_MASK = 8, INSTALLED_DATE_MASK = 1};

  stickerSet();

  stickerSet(std::int32_t flags_, bool archived_, bool official_, bool masks_, std::int32_t installed_date_, std::int64_t id_, std::int64_t access_hash_, std::string const &title_, std::string const &short_name_, std::int32_t count_, std::int32_t hash_);

  static const std::int32_t ID = 1434820921;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<stickerSet> fetch(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class StickerSetCovered: public Object {
 public:

  static object_ptr<StickerSetCovered> fetch(TlBufferParser &p);
};

class stickerSetCovered final : public StickerSetCovered {
 public:
  object_ptr<stickerSet> set_;
  object_ptr<Document> cover_;

  stickerSetCovered();

  stickerSetCovered(object_ptr<stickerSet> &&set_, object_ptr<Document> &&cover_);

  static const std::int32_t ID = 1678812626;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<stickerSetCovered> fetch(TlBufferParser &p) {
    return make_tl_object<stickerSetCovered>(p);
  }

  explicit stickerSetCovered(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class stickerSetMultiCovered final : public StickerSetCovered {
 public:
  object_ptr<stickerSet> set_;
  std::vector<object_ptr<Document>> covers_;

  stickerSetMultiCovered();

  stickerSetMultiCovered(object_ptr<stickerSet> &&set_, std::vector<object_ptr<Document>> &&covers_);

  static const std::int32_t ID = 872932635;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<stickerSetMultiCovered> fetch(TlBufferParser &p) {
    return make_tl_object<stickerSetMultiCovered>(p);
  }

  explicit stickerSetMultiCovered(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class topPeer final : public Object {
 public:
  object_ptr<Peer> peer_;
  double rating_;

  topPeer();

  topPeer(object_ptr<Peer> &&peer_, double rating_);

  static const std::int32_t ID = -305282981;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<topPeer> fetch(TlBufferParser &p) {
    return make_tl_object<topPeer>(p);
  }

  explicit topPeer(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class TopPeerCategory: public Object {
 public:

  static object_ptr<TopPeerCategory> fetch(TlBufferParser &p);
};

class topPeerCategoryBotsPM final : public TopPeerCategory {
 public:

  topPeerCategoryBotsPM();

  static const std::int32_t ID = -1419371685;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<topPeerCategoryBotsPM> fetch(TlBufferParser &p) {
    return make_tl_object<topPeerCategoryBotsPM>(p);
  }

  explicit topPeerCategoryBotsPM(TlBufferParser &p);

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class topPeerCategoryBotsInline final : public TopPeerCategory {
 public:

  topPeerCategoryBotsInline();

  static const std::int32_t ID = 344356834;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<topPeerCategoryBotsInline> fetch(TlBufferParser &p) {
    return make_tl_object<topPeerCategoryBotsInline>(p);
  }

  explicit topPeerCategoryBotsInline(TlBufferParser &p);

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class topPeerCategoryCorrespondents final : public TopPeerCategory {
 public:

  topPeerCategoryCorrespondents();

  static const std::int32_t ID = 104314861;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<topPeerCategoryCorrespondents> fetch(TlBufferParser &p) {
    return make_tl_object<topPeerCategoryCorrespondents>(p);
  }

  explicit topPeerCategoryCorrespondents(TlBufferParser &p);

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class topPeerCategoryGroups final : public TopPeerCategory {
 public:

  topPeerCategoryGroups();

  static const std::int32_t ID = -1122524854;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<topPeerCategoryGroups> fetch(TlBufferParser &p) {
    return make_tl_object<topPeerCategoryGroups>(p);
  }

  explicit topPeerCategoryGroups(TlBufferParser &p);

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class topPeerCategoryChannels final : public TopPeerCategory {
 public:

  topPeerCategoryChannels();

  static const std::int32_t ID = 371037736;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<topPeerCategoryChannels> fetch(TlBufferParser &p) {
    return make_tl_object<topPeerCategoryChannels>(p);
  }

  explicit topPeerCategoryChannels(TlBufferParser &p);

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class topPeerCategoryPhoneCalls final : public TopPeerCategory {
 public:

  topPeerCategoryPhoneCalls();

  static const std::int32_t ID = 511092620;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<topPeerCategoryPhoneCalls> fetch(TlBufferParser &p) {
    return make_tl_object<topPeerCategoryPhoneCalls>(p);
  }

  explicit topPeerCategoryPhoneCalls(TlBufferParser &p);

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class topPeerCategoryPeers final : public Object {
 public:
  object_ptr<TopPeerCategory> category_;
  std::int32_t count_;
  std::vector<object_ptr<topPeer>> peers_;

  topPeerCategoryPeers();

  topPeerCategoryPeers(object_ptr<TopPeerCategory> &&category_, std::int32_t count_, std::vector<object_ptr<topPeer>> &&peers_);

  static const std::int32_t ID = -75283823;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<topPeerCategoryPeers> fetch(TlBufferParser &p) {
    return make_tl_object<topPeerCategoryPeers>(p);
  }

  explicit topPeerCategoryPeers(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class Update: public Object {
 public:

  static object_ptr<Update> fetch(TlBufferParser &p);
};

class updateNewMessage final : public Update {
 public:
  object_ptr<Message> message_;
  std::int32_t pts_;
  std::int32_t pts_count_;

  updateNewMessage();

  updateNewMessage(object_ptr<Message> &&message_, std::int32_t pts_, std::int32_t pts_count_);

  static const std::int32_t ID = 522914557;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<updateNewMessage> fetch(TlBufferParser &p) {
    return make_tl_object<updateNewMessage>(p);
  }

  explicit updateNewMessage(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class updateMessageID final : public Update {
 public:
  std::int32_t id_;
  std::int64_t random_id_;

  updateMessageID();

  updateMessageID(std::int32_t id_, std::int64_t random_id_);

  static const std::int32_t ID = 1318109142;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<updateMessageID> fetch(TlBufferParser &p) {
    return make_tl_object<updateMessageID>(p);
  }

  explicit updateMessageID(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class updateDeleteMessages final : public Update {
 public:
  std::vector<std::int32_t> messages_;
  std::int32_t pts_;
  std::int32_t pts_count_;

  updateDeleteMessages();

  updateDeleteMessages(std::vector<std::int32_t> &&messages_, std::int32_t pts_, std::int32_t pts_count_);

  static const std::int32_t ID = -1576161051;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<updateDeleteMessages> fetch(TlBufferParser &p) {
    return make_tl_object<updateDeleteMessages>(p);
  }

  explicit updateDeleteMessages(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class updateUserTyping final : public Update {
 public:
  std::int32_t user_id_;
  object_ptr<SendMessageAction> action_;

  updateUserTyping();

  updateUserTyping(std::int32_t user_id_, object_ptr<SendMessageAction> &&action_);

  static const std::int32_t ID = 1548249383;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<updateUserTyping> fetch(TlBufferParser &p) {
    return make_tl_object<updateUserTyping>(p);
  }

  explicit updateUserTyping(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class updateChatUserTyping final : public Update {
 public:
  std::int32_t chat_id_;
  std::int32_t user_id_;
  object_ptr<SendMessageAction> action_;

  updateChatUserTyping();

  updateChatUserTyping(std::int32_t chat_id_, std::int32_t user_id_, object_ptr<SendMessageAction> &&action_);

  static const std::int32_t ID = -1704596961;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<updateChatUserTyping> fetch(TlBufferParser &p) {
    return make_tl_object<updateChatUserTyping>(p);
  }

  explicit updateChatUserTyping(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class updateChatParticipants final : public Update {
 public:
  object_ptr<ChatParticipants> participants_;

  updateChatParticipants();

  explicit updateChatParticipants(object_ptr<ChatParticipants> &&participants_);

  static const std::int32_t ID = 125178264;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<updateChatParticipants> fetch(TlBufferParser &p) {
    return make_tl_object<updateChatParticipants>(p);
  }

  explicit updateChatParticipants(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class updateUserStatus final : public Update {
 public:
  std::int32_t user_id_;
  object_ptr<UserStatus> status_;

  updateUserStatus();

  updateUserStatus(std::int32_t user_id_, object_ptr<UserStatus> &&status_);

  static const std::int32_t ID = 469489699;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<updateUserStatus> fetch(TlBufferParser &p) {
    return make_tl_object<updateUserStatus>(p);
  }

  explicit updateUserStatus(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class updateUserName final : public Update {
 public:
  std::int32_t user_id_;
  std::string first_name_;
  std::string last_name_;
  std::string username_;

  updateUserName();

  updateUserName(std::int32_t user_id_, std::string const &first_name_, std::string const &last_name_, std::string const &username_);

  static const std::int32_t ID = -1489818765;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<updateUserName> fetch(TlBufferParser &p) {
    return make_tl_object<updateUserName>(p);
  }

  explicit updateUserName(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class updateUserPhoto final : public Update {
 public:
  std::int32_t user_id_;
  std::int32_t date_;
  object_ptr<UserProfilePhoto> photo_;
  bool previous_;

  updateUserPhoto();

  updateUserPhoto(std::int32_t user_id_, std::int32_t date_, object_ptr<UserProfilePhoto> &&photo_, bool previous_);

  static const std::int32_t ID = -1791935732;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<updateUserPhoto> fetch(TlBufferParser &p) {
    return make_tl_object<updateUserPhoto>(p);
  }

  explicit updateUserPhoto(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class updateContactRegistered final : public Update {
 public:
  std::int32_t user_id_;
  std::int32_t date_;

  updateContactRegistered();

  updateContactRegistered(std::int32_t user_id_, std::int32_t date_);

  static const std::int32_t ID = 628472761;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<updateContactRegistered> fetch(TlBufferParser &p) {
    return make_tl_object<updateContactRegistered>(p);
  }

  explicit updateContactRegistered(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class updateContactLink final : public Update {
 public:
  std::int32_t user_id_;
  object_ptr<ContactLink> my_link_;
  object_ptr<ContactLink> foreign_link_;

  updateContactLink();

  updateContactLink(std::int32_t user_id_, object_ptr<ContactLink> &&my_link_, object_ptr<ContactLink> &&foreign_link_);

  static const std::int32_t ID = -1657903163;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<updateContactLink> fetch(TlBufferParser &p) {
    return make_tl_object<updateContactLink>(p);
  }

  explicit updateContactLink(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class updateNewEncryptedMessage final : public Update {
 public:
  object_ptr<EncryptedMessage> message_;
  std::int32_t qts_;

  updateNewEncryptedMessage();

  updateNewEncryptedMessage(object_ptr<EncryptedMessage> &&message_, std::int32_t qts_);

  static const std::int32_t ID = 314359194;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<updateNewEncryptedMessage> fetch(TlBufferParser &p) {
    return make_tl_object<updateNewEncryptedMessage>(p);
  }

  explicit updateNewEncryptedMessage(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class updateEncryptedChatTyping final : public Update {
 public:
  std::int32_t chat_id_;

  updateEncryptedChatTyping();

  explicit updateEncryptedChatTyping(std::int32_t chat_id_);

  static const std::int32_t ID = 386986326;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<updateEncryptedChatTyping> fetch(TlBufferParser &p) {
    return make_tl_object<updateEncryptedChatTyping>(p);
  }

  explicit updateEncryptedChatTyping(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class updateEncryption final : public Update {
 public:
  object_ptr<EncryptedChat> chat_;
  std::int32_t date_;

  updateEncryption();

  updateEncryption(object_ptr<EncryptedChat> &&chat_, std::int32_t date_);

  static const std::int32_t ID = -1264392051;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<updateEncryption> fetch(TlBufferParser &p) {
    return make_tl_object<updateEncryption>(p);
  }

  explicit updateEncryption(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class updateEncryptedMessagesRead final : public Update {
 public:
  std::int32_t chat_id_;
  std::int32_t max_date_;
  std::int32_t date_;

  updateEncryptedMessagesRead();

  updateEncryptedMessagesRead(std::int32_t chat_id_, std::int32_t max_date_, std::int32_t date_);

  static const std::int32_t ID = 956179895;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<updateEncryptedMessagesRead> fetch(TlBufferParser &p) {
    return make_tl_object<updateEncryptedMessagesRead>(p);
  }

  explicit updateEncryptedMessagesRead(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class updateChatParticipantAdd final : public Update {
 public:
  std::int32_t chat_id_;
  std::int32_t user_id_;
  std::int32_t inviter_id_;
  std::int32_t date_;
  std::int32_t version_;

  updateChatParticipantAdd();

  updateChatParticipantAdd(std::int32_t chat_id_, std::int32_t user_id_, std::int32_t inviter_id_, std::int32_t date_, std::int32_t version_);

  static const std::int32_t ID = -364179876;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<updateChatParticipantAdd> fetch(TlBufferParser &p) {
    return make_tl_object<updateChatParticipantAdd>(p);
  }

  explicit updateChatParticipantAdd(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class updateChatParticipantDelete final : public Update {
 public:
  std::int32_t chat_id_;
  std::int32_t user_id_;
  std::int32_t version_;

  updateChatParticipantDelete();

  updateChatParticipantDelete(std::int32_t chat_id_, std::int32_t user_id_, std::int32_t version_);

  static const std::int32_t ID = 1851755554;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<updateChatParticipantDelete> fetch(TlBufferParser &p) {
    return make_tl_object<updateChatParticipantDelete>(p);
  }

  explicit updateChatParticipantDelete(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class updateDcOptions final : public Update {
 public:
  std::vector<object_ptr<dcOption>> dc_options_;

  updateDcOptions();

  explicit updateDcOptions(std::vector<object_ptr<dcOption>> &&dc_options_);

  static const std::int32_t ID = -1906403213;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<updateDcOptions> fetch(TlBufferParser &p) {
    return make_tl_object<updateDcOptions>(p);
  }

  explicit updateDcOptions(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class updateUserBlocked final : public Update {
 public:
  std::int32_t user_id_;
  bool blocked_;

  updateUserBlocked();

  updateUserBlocked(std::int32_t user_id_, bool blocked_);

  static const std::int32_t ID = -2131957734;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<updateUserBlocked> fetch(TlBufferParser &p) {
    return make_tl_object<updateUserBlocked>(p);
  }

  explicit updateUserBlocked(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class updateNotifySettings final : public Update {
 public:
  object_ptr<NotifyPeer> peer_;
  object_ptr<peerNotifySettings> notify_settings_;

  updateNotifySettings();

  updateNotifySettings(object_ptr<NotifyPeer> &&peer_, object_ptr<peerNotifySettings> &&notify_settings_);

  static const std::int32_t ID = -1094555409;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<updateNotifySettings> fetch(TlBufferParser &p) {
    return make_tl_object<updateNotifySettings>(p);
  }

  explicit updateNotifySettings(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class updateServiceNotification final : public Update {
 public:
  std::int32_t flags_;
  bool popup_;
  std::int32_t inbox_date_;
  std::string type_;
  std::string message_;
  object_ptr<MessageMedia> media_;
  std::vector<object_ptr<MessageEntity>> entities_;
  enum Flags : std::int32_t {POPUP_MASK = 1, INBOX_DATE_MASK = 2};

  updateServiceNotification();

  updateServiceNotification(std::int32_t flags_, bool popup_, std::int32_t inbox_date_, std::string const &type_, std::string const &message_, object_ptr<MessageMedia> &&media_, std::vector<object_ptr<MessageEntity>> &&entities_);

  static const std::int32_t ID = -337352679;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<updateServiceNotification> fetch(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class updatePrivacy final : public Update {
 public:
  object_ptr<PrivacyKey> key_;
  std::vector<object_ptr<PrivacyRule>> rules_;

  updatePrivacy();

  updatePrivacy(object_ptr<PrivacyKey> &&key_, std::vector<object_ptr<PrivacyRule>> &&rules_);

  static const std::int32_t ID = -298113238;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<updatePrivacy> fetch(TlBufferParser &p) {
    return make_tl_object<updatePrivacy>(p);
  }

  explicit updatePrivacy(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class updateUserPhone final : public Update {
 public:
  std::int32_t user_id_;
  std::string phone_;

  updateUserPhone();

  updateUserPhone(std::int32_t user_id_, std::string const &phone_);

  static const std::int32_t ID = 314130811;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<updateUserPhone> fetch(TlBufferParser &p) {
    return make_tl_object<updateUserPhone>(p);
  }

  explicit updateUserPhone(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class updateReadHistoryInbox final : public Update {
 public:
  object_ptr<Peer> peer_;
  std::int32_t max_id_;
  std::int32_t pts_;
  std::int32_t pts_count_;

  updateReadHistoryInbox();

  updateReadHistoryInbox(object_ptr<Peer> &&peer_, std::int32_t max_id_, std::int32_t pts_, std::int32_t pts_count_);

  static const std::int32_t ID = -1721631396;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<updateReadHistoryInbox> fetch(TlBufferParser &p) {
    return make_tl_object<updateReadHistoryInbox>(p);
  }

  explicit updateReadHistoryInbox(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class updateReadHistoryOutbox final : public Update {
 public:
  object_ptr<Peer> peer_;
  std::int32_t max_id_;
  std::int32_t pts_;
  std::int32_t pts_count_;

  updateReadHistoryOutbox();

  updateReadHistoryOutbox(object_ptr<Peer> &&peer_, std::int32_t max_id_, std::int32_t pts_, std::int32_t pts_count_);

  static const std::int32_t ID = 791617983;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<updateReadHistoryOutbox> fetch(TlBufferParser &p) {
    return make_tl_object<updateReadHistoryOutbox>(p);
  }

  explicit updateReadHistoryOutbox(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class updateWebPage final : public Update {
 public:
  object_ptr<WebPage> webpage_;
  std::int32_t pts_;
  std::int32_t pts_count_;

  updateWebPage();

  updateWebPage(object_ptr<WebPage> &&webpage_, std::int32_t pts_, std::int32_t pts_count_);

  static const std::int32_t ID = 2139689491;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<updateWebPage> fetch(TlBufferParser &p) {
    return make_tl_object<updateWebPage>(p);
  }

  explicit updateWebPage(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class updateReadMessagesContents final : public Update {
 public:
  std::vector<std::int32_t> messages_;
  std::int32_t pts_;
  std::int32_t pts_count_;

  updateReadMessagesContents();

  updateReadMessagesContents(std::vector<std::int32_t> &&messages_, std::int32_t pts_, std::int32_t pts_count_);

  static const std::int32_t ID = 1757493555;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<updateReadMessagesContents> fetch(TlBufferParser &p) {
    return make_tl_object<updateReadMessagesContents>(p);
  }

  explicit updateReadMessagesContents(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class updateChannelTooLong final : public Update {
 public:
  std::int32_t flags_;
  std::int32_t channel_id_;
  std::int32_t pts_;
  enum Flags : std::int32_t {PTS_MASK = 1};

  updateChannelTooLong();

  updateChannelTooLong(std::int32_t flags_, std::int32_t channel_id_, std::int32_t pts_);

  static const std::int32_t ID = -352032773;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<updateChannelTooLong> fetch(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class updateChannel final : public Update {
 public:
  std::int32_t channel_id_;

  updateChannel();

  explicit updateChannel(std::int32_t channel_id_);

  static const std::int32_t ID = -1227598250;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<updateChannel> fetch(TlBufferParser &p) {
    return make_tl_object<updateChannel>(p);
  }

  explicit updateChannel(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class updateNewChannelMessage final : public Update {
 public:
  object_ptr<Message> message_;
  std::int32_t pts_;
  std::int32_t pts_count_;

  updateNewChannelMessage();

  updateNewChannelMessage(object_ptr<Message> &&message_, std::int32_t pts_, std::int32_t pts_count_);

  static const std::int32_t ID = 1656358105;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<updateNewChannelMessage> fetch(TlBufferParser &p) {
    return make_tl_object<updateNewChannelMessage>(p);
  }

  explicit updateNewChannelMessage(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class updateReadChannelInbox final : public Update {
 public:
  std::int32_t channel_id_;
  std::int32_t max_id_;

  updateReadChannelInbox();

  updateReadChannelInbox(std::int32_t channel_id_, std::int32_t max_id_);

  static const std::int32_t ID = 1108669311;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<updateReadChannelInbox> fetch(TlBufferParser &p) {
    return make_tl_object<updateReadChannelInbox>(p);
  }

  explicit updateReadChannelInbox(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class updateDeleteChannelMessages final : public Update {
 public:
  std::int32_t channel_id_;
  std::vector<std::int32_t> messages_;
  std::int32_t pts_;
  std::int32_t pts_count_;

  updateDeleteChannelMessages();

  updateDeleteChannelMessages(std::int32_t channel_id_, std::vector<std::int32_t> &&messages_, std::int32_t pts_, std::int32_t pts_count_);

  static const std::int32_t ID = -1015733815;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<updateDeleteChannelMessages> fetch(TlBufferParser &p) {
    return make_tl_object<updateDeleteChannelMessages>(p);
  }

  explicit updateDeleteChannelMessages(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class updateChannelMessageViews final : public Update {
 public:
  std::int32_t channel_id_;
  std::int32_t id_;
  std::int32_t views_;

  updateChannelMessageViews();

  updateChannelMessageViews(std::int32_t channel_id_, std::int32_t id_, std::int32_t views_);

  static const std::int32_t ID = -1734268085;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<updateChannelMessageViews> fetch(TlBufferParser &p) {
    return make_tl_object<updateChannelMessageViews>(p);
  }

  explicit updateChannelMessageViews(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class updateChatAdmins final : public Update {
 public:
  std::int32_t chat_id_;
  bool enabled_;
  std::int32_t version_;

  updateChatAdmins();

  updateChatAdmins(std::int32_t chat_id_, bool enabled_, std::int32_t version_);

  static const std::int32_t ID = 1855224129;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<updateChatAdmins> fetch(TlBufferParser &p) {
    return make_tl_object<updateChatAdmins>(p);
  }

  explicit updateChatAdmins(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class updateChatParticipantAdmin final : public Update {
 public:
  std::int32_t chat_id_;
  std::int32_t user_id_;
  bool is_admin_;
  std::int32_t version_;

  updateChatParticipantAdmin();

  updateChatParticipantAdmin(std::int32_t chat_id_, std::int32_t user_id_, bool is_admin_, std::int32_t version_);

  static const std::int32_t ID = -1232070311;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<updateChatParticipantAdmin> fetch(TlBufferParser &p) {
    return make_tl_object<updateChatParticipantAdmin>(p);
  }

  explicit updateChatParticipantAdmin(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class updateNewStickerSet final : public Update {
 public:
  object_ptr<messages_stickerSet> stickerset_;

  updateNewStickerSet();

  explicit updateNewStickerSet(object_ptr<messages_stickerSet> &&stickerset_);

  static const std::int32_t ID = 1753886890;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<updateNewStickerSet> fetch(TlBufferParser &p) {
    return make_tl_object<updateNewStickerSet>(p);
  }

  explicit updateNewStickerSet(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class updateStickerSetsOrder final : public Update {
 public:
  std::int32_t flags_;
  bool masks_;
  std::vector<std::int64_t> order_;
  enum Flags : std::int32_t {MASKS_MASK = 1};

  updateStickerSetsOrder();

  updateStickerSetsOrder(std::int32_t flags_, bool masks_, std::vector<std::int64_t> &&order_);

  static const std::int32_t ID = 196268545;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<updateStickerSetsOrder> fetch(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class updateStickerSets final : public Update {
 public:

  updateStickerSets();

  static const std::int32_t ID = 1135492588;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<updateStickerSets> fetch(TlBufferParser &p) {
    return make_tl_object<updateStickerSets>(p);
  }

  explicit updateStickerSets(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class updateSavedGifs final : public Update {
 public:

  updateSavedGifs();

  static const std::int32_t ID = -1821035490;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<updateSavedGifs> fetch(TlBufferParser &p) {
    return make_tl_object<updateSavedGifs>(p);
  }

  explicit updateSavedGifs(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class updateBotInlineQuery final : public Update {
 public:
  std::int32_t flags_;
  std::int64_t query_id_;
  std::int32_t user_id_;
  std::string query_;
  object_ptr<GeoPoint> geo_;
  std::string offset_;
  enum Flags : std::int32_t {GEO_MASK = 1};

  updateBotInlineQuery();

  updateBotInlineQuery(std::int32_t flags_, std::int64_t query_id_, std::int32_t user_id_, std::string const &query_, object_ptr<GeoPoint> &&geo_, std::string const &offset_);

  static const std::int32_t ID = 1417832080;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<updateBotInlineQuery> fetch(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class updateBotInlineSend final : public Update {
 public:
  std::int32_t flags_;
  std::int32_t user_id_;
  std::string query_;
  object_ptr<GeoPoint> geo_;
  std::string id_;
  object_ptr<inputBotInlineMessageID> msg_id_;
  enum Flags : std::int32_t {GEO_MASK = 1, MSG_ID_MASK = 2};

  updateBotInlineSend();

  updateBotInlineSend(std::int32_t flags_, std::int32_t user_id_, std::string const &query_, object_ptr<GeoPoint> &&geo_, std::string const &id_, object_ptr<inputBotInlineMessageID> &&msg_id_);

  static const std::int32_t ID = 239663460;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<updateBotInlineSend> fetch(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class updateEditChannelMessage final : public Update {
 public:
  object_ptr<Message> message_;
  std::int32_t pts_;
  std::int32_t pts_count_;

  updateEditChannelMessage();

  updateEditChannelMessage(object_ptr<Message> &&message_, std::int32_t pts_, std::int32_t pts_count_);

  static const std::int32_t ID = 457133559;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<updateEditChannelMessage> fetch(TlBufferParser &p) {
    return make_tl_object<updateEditChannelMessage>(p);
  }

  explicit updateEditChannelMessage(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class updateChannelPinnedMessage final : public Update {
 public:
  std::int32_t channel_id_;
  std::int32_t id_;

  updateChannelPinnedMessage();

  updateChannelPinnedMessage(std::int32_t channel_id_, std::int32_t id_);

  static const std::int32_t ID = -1738988427;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<updateChannelPinnedMessage> fetch(TlBufferParser &p) {
    return make_tl_object<updateChannelPinnedMessage>(p);
  }

  explicit updateChannelPinnedMessage(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class updateBotCallbackQuery final : public Update {
 public:
  std::int32_t flags_;
  std::int64_t query_id_;
  std::int32_t user_id_;
  object_ptr<Peer> peer_;
  std::int32_t msg_id_;
  std::int64_t chat_instance_;
  BufferSlice data_;
  std::string game_short_name_;
  enum Flags : std::int32_t {DATA_MASK = 1, GAME_SHORT_NAME_MASK = 2};

  updateBotCallbackQuery();

  updateBotCallbackQuery(std::int32_t flags_, std::int64_t query_id_, std::int32_t user_id_, object_ptr<Peer> &&peer_, std::int32_t msg_id_, std::int64_t chat_instance_, BufferSlice &&data_, std::string const &game_short_name_);

  static const std::int32_t ID = -415938591;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<updateBotCallbackQuery> fetch(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class updateEditMessage final : public Update {
 public:
  object_ptr<Message> message_;
  std::int32_t pts_;
  std::int32_t pts_count_;

  updateEditMessage();

  updateEditMessage(object_ptr<Message> &&message_, std::int32_t pts_, std::int32_t pts_count_);

  static const std::int32_t ID = -469536605;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<updateEditMessage> fetch(TlBufferParser &p) {
    return make_tl_object<updateEditMessage>(p);
  }

  explicit updateEditMessage(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class updateInlineBotCallbackQuery final : public Update {
 public:
  std::int32_t flags_;
  std::int64_t query_id_;
  std::int32_t user_id_;
  object_ptr<inputBotInlineMessageID> msg_id_;
  std::int64_t chat_instance_;
  BufferSlice data_;
  std::string game_short_name_;
  enum Flags : std::int32_t {DATA_MASK = 1, GAME_SHORT_NAME_MASK = 2};

  updateInlineBotCallbackQuery();

  updateInlineBotCallbackQuery(std::int32_t flags_, std::int64_t query_id_, std::int32_t user_id_, object_ptr<inputBotInlineMessageID> &&msg_id_, std::int64_t chat_instance_, BufferSlice &&data_, std::string const &game_short_name_);

  static const std::int32_t ID = -103646630;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<updateInlineBotCallbackQuery> fetch(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class updateReadChannelOutbox final : public Update {
 public:
  std::int32_t channel_id_;
  std::int32_t max_id_;

  updateReadChannelOutbox();

  updateReadChannelOutbox(std::int32_t channel_id_, std::int32_t max_id_);

  static const std::int32_t ID = 634833351;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<updateReadChannelOutbox> fetch(TlBufferParser &p) {
    return make_tl_object<updateReadChannelOutbox>(p);
  }

  explicit updateReadChannelOutbox(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class updateDraftMessage final : public Update {
 public:
  object_ptr<Peer> peer_;
  object_ptr<DraftMessage> draft_;

  updateDraftMessage();

  updateDraftMessage(object_ptr<Peer> &&peer_, object_ptr<DraftMessage> &&draft_);

  static const std::int32_t ID = -299124375;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<updateDraftMessage> fetch(TlBufferParser &p) {
    return make_tl_object<updateDraftMessage>(p);
  }

  explicit updateDraftMessage(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class updateReadFeaturedStickers final : public Update {
 public:

  updateReadFeaturedStickers();

  static const std::int32_t ID = 1461528386;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<updateReadFeaturedStickers> fetch(TlBufferParser &p) {
    return make_tl_object<updateReadFeaturedStickers>(p);
  }

  explicit updateReadFeaturedStickers(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class updateRecentStickers final : public Update {
 public:

  updateRecentStickers();

  static const std::int32_t ID = -1706939360;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<updateRecentStickers> fetch(TlBufferParser &p) {
    return make_tl_object<updateRecentStickers>(p);
  }

  explicit updateRecentStickers(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class updateConfig final : public Update {
 public:

  updateConfig();

  static const std::int32_t ID = -1574314746;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<updateConfig> fetch(TlBufferParser &p) {
    return make_tl_object<updateConfig>(p);
  }

  explicit updateConfig(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class updatePtsChanged final : public Update {
 public:

  updatePtsChanged();

  static const std::int32_t ID = 861169551;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<updatePtsChanged> fetch(TlBufferParser &p) {
    return make_tl_object<updatePtsChanged>(p);
  }

  explicit updatePtsChanged(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class updateChannelWebPage final : public Update {
 public:
  std::int32_t channel_id_;
  object_ptr<WebPage> webpage_;
  std::int32_t pts_;
  std::int32_t pts_count_;

  updateChannelWebPage();

  updateChannelWebPage(std::int32_t channel_id_, object_ptr<WebPage> &&webpage_, std::int32_t pts_, std::int32_t pts_count_);

  static const std::int32_t ID = 1081547008;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<updateChannelWebPage> fetch(TlBufferParser &p) {
    return make_tl_object<updateChannelWebPage>(p);
  }

  explicit updateChannelWebPage(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class updateDialogPinned final : public Update {
 public:
  std::int32_t flags_;
  bool pinned_;
  object_ptr<dialogPeer> peer_;
  enum Flags : std::int32_t {PINNED_MASK = 1};

  updateDialogPinned();

  updateDialogPinned(std::int32_t flags_, bool pinned_, object_ptr<dialogPeer> &&peer_);

  static const std::int32_t ID = 433225532;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<updateDialogPinned> fetch(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class updatePinnedDialogs final : public Update {
 public:
  std::int32_t flags_;
  std::vector<object_ptr<dialogPeer>> order_;
  enum Flags : std::int32_t {ORDER_MASK = 1};

  updatePinnedDialogs();

  updatePinnedDialogs(std::int32_t flags_, std::vector<object_ptr<dialogPeer>> &&order_);

  static const std::int32_t ID = -364071333;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<updatePinnedDialogs> fetch(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class updateBotWebhookJSON final : public Update {
 public:
  object_ptr<dataJSON> data_;

  updateBotWebhookJSON();

  explicit updateBotWebhookJSON(object_ptr<dataJSON> &&data_);

  static const std::int32_t ID = -2095595325;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<updateBotWebhookJSON> fetch(TlBufferParser &p) {
    return make_tl_object<updateBotWebhookJSON>(p);
  }

  explicit updateBotWebhookJSON(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class updateBotWebhookJSONQuery final : public Update {
 public:
  std::int64_t query_id_;
  object_ptr<dataJSON> data_;
  std::int32_t timeout_;

  updateBotWebhookJSONQuery();

  updateBotWebhookJSONQuery(std::int64_t query_id_, object_ptr<dataJSON> &&data_, std::int32_t timeout_);

  static const std::int32_t ID = -1684914010;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<updateBotWebhookJSONQuery> fetch(TlBufferParser &p) {
    return make_tl_object<updateBotWebhookJSONQuery>(p);
  }

  explicit updateBotWebhookJSONQuery(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class updateBotShippingQuery final : public Update {
 public:
  std::int64_t query_id_;
  std::int32_t user_id_;
  BufferSlice payload_;
  object_ptr<postAddress> shipping_address_;

  updateBotShippingQuery();

  updateBotShippingQuery(std::int64_t query_id_, std::int32_t user_id_, BufferSlice &&payload_, object_ptr<postAddress> &&shipping_address_);

  static const std::int32_t ID = -523384512;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<updateBotShippingQuery> fetch(TlBufferParser &p) {
    return make_tl_object<updateBotShippingQuery>(p);
  }

  explicit updateBotShippingQuery(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class updateBotPrecheckoutQuery final : public Update {
 public:
  std::int32_t flags_;
  std::int64_t query_id_;
  std::int32_t user_id_;
  BufferSlice payload_;
  object_ptr<paymentRequestedInfo> info_;
  std::string shipping_option_id_;
  std::string currency_;
  std::int64_t total_amount_;
  enum Flags : std::int32_t {INFO_MASK = 1, SHIPPING_OPTION_ID_MASK = 2};

  updateBotPrecheckoutQuery();

  updateBotPrecheckoutQuery(std::int32_t flags_, std::int64_t query_id_, std::int32_t user_id_, BufferSlice &&payload_, object_ptr<paymentRequestedInfo> &&info_, std::string const &shipping_option_id_, std::string const &currency_, std::int64_t total_amount_);

  static const std::int32_t ID = 1563376297;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<updateBotPrecheckoutQuery> fetch(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class updatePhoneCall final : public Update {
 public:
  object_ptr<PhoneCall> phone_call_;

  updatePhoneCall();

  explicit updatePhoneCall(object_ptr<PhoneCall> &&phone_call_);

  static const std::int32_t ID = -1425052898;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<updatePhoneCall> fetch(TlBufferParser &p) {
    return make_tl_object<updatePhoneCall>(p);
  }

  explicit updatePhoneCall(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class updateLangPackTooLong final : public Update {
 public:

  updateLangPackTooLong();

  static const std::int32_t ID = 281165899;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<updateLangPackTooLong> fetch(TlBufferParser &p) {
    return make_tl_object<updateLangPackTooLong>(p);
  }

  explicit updateLangPackTooLong(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class updateLangPack final : public Update {
 public:
  object_ptr<langPackDifference> difference_;

  updateLangPack();

  explicit updateLangPack(object_ptr<langPackDifference> &&difference_);

  static const std::int32_t ID = 1442983757;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<updateLangPack> fetch(TlBufferParser &p) {
    return make_tl_object<updateLangPack>(p);
  }

  explicit updateLangPack(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class updateFavedStickers final : public Update {
 public:

  updateFavedStickers();

  static const std::int32_t ID = -451831443;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<updateFavedStickers> fetch(TlBufferParser &p) {
    return make_tl_object<updateFavedStickers>(p);
  }

  explicit updateFavedStickers(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class updateChannelReadMessagesContents final : public Update {
 public:
  std::int32_t channel_id_;
  std::vector<std::int32_t> messages_;

  updateChannelReadMessagesContents();

  updateChannelReadMessagesContents(std::int32_t channel_id_, std::vector<std::int32_t> &&messages_);

  static const std::int32_t ID = -1987495099;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<updateChannelReadMessagesContents> fetch(TlBufferParser &p) {
    return make_tl_object<updateChannelReadMessagesContents>(p);
  }

  explicit updateChannelReadMessagesContents(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class updateContactsReset final : public Update {
 public:

  updateContactsReset();

  static const std::int32_t ID = 1887741886;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<updateContactsReset> fetch(TlBufferParser &p) {
    return make_tl_object<updateContactsReset>(p);
  }

  explicit updateContactsReset(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class updateChannelAvailableMessages final : public Update {
 public:
  std::int32_t channel_id_;
  std::int32_t available_min_id_;

  updateChannelAvailableMessages();

  updateChannelAvailableMessages(std::int32_t channel_id_, std::int32_t available_min_id_);

  static const std::int32_t ID = 1893427255;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<updateChannelAvailableMessages> fetch(TlBufferParser &p) {
    return make_tl_object<updateChannelAvailableMessages>(p);
  }

  explicit updateChannelAvailableMessages(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class updateDialogUnreadMark final : public Update {
 public:
  std::int32_t flags_;
  bool unread_;
  object_ptr<dialogPeer> peer_;
  enum Flags : std::int32_t {UNREAD_MASK = 1};

  updateDialogUnreadMark();

  updateDialogUnreadMark(std::int32_t flags_, bool unread_, object_ptr<dialogPeer> &&peer_);

  static const std::int32_t ID = -513517117;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<updateDialogUnreadMark> fetch(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class Updates: public Object {
 public:

  static object_ptr<Updates> fetch(TlBufferParser &p);
};

class updatesTooLong final : public Updates {
 public:

  updatesTooLong();

  static const std::int32_t ID = -484987010;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<updatesTooLong> fetch(TlBufferParser &p) {
    return make_tl_object<updatesTooLong>(p);
  }

  explicit updatesTooLong(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class updateShortMessage final : public Updates {
 public:
  std::int32_t flags_;
  bool out_;
  bool mentioned_;
  bool media_unread_;
  bool silent_;
  std::int32_t id_;
  std::int32_t user_id_;
  std::string message_;
  std::int32_t pts_;
  std::int32_t pts_count_;
  std::int32_t date_;
  object_ptr<messageFwdHeader> fwd_from_;
  std::int32_t via_bot_id_;
  std::int32_t reply_to_msg_id_;
  std::vector<object_ptr<MessageEntity>> entities_;
  enum Flags : std::int32_t {OUT_MASK = 2, MENTIONED_MASK = 16, MEDIA_UNREAD_MASK = 32, SILENT_MASK = 8192, FWD_FROM_MASK = 4, VIA_BOT_ID_MASK = 2048, REPLY_TO_MSG_ID_MASK = 8, ENTITIES_MASK = 128};

  updateShortMessage();

  updateShortMessage(std::int32_t flags_, bool out_, bool mentioned_, bool media_unread_, bool silent_, std::int32_t id_, std::int32_t user_id_, std::string const &message_, std::int32_t pts_, std::int32_t pts_count_, std::int32_t date_, object_ptr<messageFwdHeader> &&fwd_from_, std::int32_t via_bot_id_, std::int32_t reply_to_msg_id_, std::vector<object_ptr<MessageEntity>> &&entities_);

  static const std::int32_t ID = -1857044719;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<updateShortMessage> fetch(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class updateShortChatMessage final : public Updates {
 public:
  std::int32_t flags_;
  bool out_;
  bool mentioned_;
  bool media_unread_;
  bool silent_;
  std::int32_t id_;
  std::int32_t from_id_;
  std::int32_t chat_id_;
  std::string message_;
  std::int32_t pts_;
  std::int32_t pts_count_;
  std::int32_t date_;
  object_ptr<messageFwdHeader> fwd_from_;
  std::int32_t via_bot_id_;
  std::int32_t reply_to_msg_id_;
  std::vector<object_ptr<MessageEntity>> entities_;
  enum Flags : std::int32_t {OUT_MASK = 2, MENTIONED_MASK = 16, MEDIA_UNREAD_MASK = 32, SILENT_MASK = 8192, FWD_FROM_MASK = 4, VIA_BOT_ID_MASK = 2048, REPLY_TO_MSG_ID_MASK = 8, ENTITIES_MASK = 128};

  updateShortChatMessage();

  updateShortChatMessage(std::int32_t flags_, bool out_, bool mentioned_, bool media_unread_, bool silent_, std::int32_t id_, std::int32_t from_id_, std::int32_t chat_id_, std::string const &message_, std::int32_t pts_, std::int32_t pts_count_, std::int32_t date_, object_ptr<messageFwdHeader> &&fwd_from_, std::int32_t via_bot_id_, std::int32_t reply_to_msg_id_, std::vector<object_ptr<MessageEntity>> &&entities_);

  static const std::int32_t ID = 377562760;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<updateShortChatMessage> fetch(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class updateShort final : public Updates {
 public:
  object_ptr<Update> update_;
  std::int32_t date_;

  updateShort();

  updateShort(object_ptr<Update> &&update_, std::int32_t date_);

  static const std::int32_t ID = 2027216577;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<updateShort> fetch(TlBufferParser &p) {
    return make_tl_object<updateShort>(p);
  }

  explicit updateShort(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class updatesCombined final : public Updates {
 public:
  std::vector<object_ptr<Update>> updates_;
  std::vector<object_ptr<User>> users_;
  std::vector<object_ptr<Chat>> chats_;
  std::int32_t date_;
  std::int32_t seq_start_;
  std::int32_t seq_;

  updatesCombined();

  updatesCombined(std::vector<object_ptr<Update>> &&updates_, std::vector<object_ptr<User>> &&users_, std::vector<object_ptr<Chat>> &&chats_, std::int32_t date_, std::int32_t seq_start_, std::int32_t seq_);

  static const std::int32_t ID = 1918567619;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<updatesCombined> fetch(TlBufferParser &p) {
    return make_tl_object<updatesCombined>(p);
  }

  explicit updatesCombined(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class updates final : public Updates {
 public:
  std::vector<object_ptr<Update>> updates_;
  std::vector<object_ptr<User>> users_;
  std::vector<object_ptr<Chat>> chats_;
  std::int32_t date_;
  std::int32_t seq_;

  updates();

  updates(std::vector<object_ptr<Update>> &&updates_, std::vector<object_ptr<User>> &&users_, std::vector<object_ptr<Chat>> &&chats_, std::int32_t date_, std::int32_t seq_);

  static const std::int32_t ID = 1957577280;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<updates> fetch(TlBufferParser &p) {
    return make_tl_object<updates>(p);
  }

  explicit updates(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class updateShortSentMessage final : public Updates {
 public:
  std::int32_t flags_;
  bool out_;
  std::int32_t id_;
  std::int32_t pts_;
  std::int32_t pts_count_;
  std::int32_t date_;
  object_ptr<MessageMedia> media_;
  std::vector<object_ptr<MessageEntity>> entities_;
  enum Flags : std::int32_t {OUT_MASK = 2, MEDIA_MASK = 512, ENTITIES_MASK = 128};

  updateShortSentMessage();

  updateShortSentMessage(std::int32_t flags_, bool out_, std::int32_t id_, std::int32_t pts_, std::int32_t pts_count_, std::int32_t date_, object_ptr<MessageMedia> &&media_, std::vector<object_ptr<MessageEntity>> &&entities_);

  static const std::int32_t ID = 301019932;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<updateShortSentMessage> fetch(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class User: public Object {
 public:

  static object_ptr<User> fetch(TlBufferParser &p);
};

class userEmpty final : public User {
 public:
  std::int32_t id_;

  userEmpty();

  explicit userEmpty(std::int32_t id_);

  static const std::int32_t ID = 537022650;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<userEmpty> fetch(TlBufferParser &p) {
    return make_tl_object<userEmpty>(p);
  }

  explicit userEmpty(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class user final : public User {
 public:
  std::int32_t flags_;
  bool self_;
  bool contact_;
  bool mutual_contact_;
  bool deleted_;
  bool bot_;
  bool bot_chat_history_;
  bool bot_nochats_;
  bool verified_;
  bool restricted_;
  bool min_;
  bool bot_inline_geo_;
  std::int32_t id_;
  std::int64_t access_hash_;
  std::string first_name_;
  std::string last_name_;
  std::string username_;
  std::string phone_;
  object_ptr<UserProfilePhoto> photo_;
  object_ptr<UserStatus> status_;
  std::int32_t bot_info_version_;
  std::string restriction_reason_;
  std::string bot_inline_placeholder_;
  std::string lang_code_;
  enum Flags : std::int32_t {SELF_MASK = 1024, CONTACT_MASK = 2048, MUTUAL_CONTACT_MASK = 4096, DELETED_MASK = 8192, BOT_MASK = 16384, BOT_CHAT_HISTORY_MASK = 32768, BOT_NOCHATS_MASK = 65536, VERIFIED_MASK = 131072, RESTRICTED_MASK = 262144, MIN_MASK = 1048576, BOT_INLINE_GEO_MASK = 2097152, ACCESS_HASH_MASK = 1, FIRST_NAME_MASK = 2, LAST_NAME_MASK = 4, USERNAME_MASK = 8, PHONE_MASK = 16, PHOTO_MASK = 32, STATUS_MASK = 64, BOT_INFO_VERSION_MASK = 16384, RESTRICTION_REASON_MASK = 262144, BOT_INLINE_PLACEHOLDER_MASK = 524288, LANG_CODE_MASK = 4194304};

  user();

  user(std::int32_t flags_, bool self_, bool contact_, bool mutual_contact_, bool deleted_, bool bot_, bool bot_chat_history_, bool bot_nochats_, bool verified_, bool restricted_, bool min_, bool bot_inline_geo_, std::int32_t id_, std::int64_t access_hash_, std::string const &first_name_, std::string const &last_name_, std::string const &username_, std::string const &phone_, object_ptr<UserProfilePhoto> &&photo_, object_ptr<UserStatus> &&status_, std::int32_t bot_info_version_, std::string const &restriction_reason_, std::string const &bot_inline_placeholder_, std::string const &lang_code_);

  static const std::int32_t ID = 773059779;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<user> fetch(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class userFull final : public Object {
 public:
  std::int32_t flags_;
  bool blocked_;
  bool phone_calls_available_;
  bool phone_calls_private_;
  object_ptr<User> user_;
  std::string about_;
  object_ptr<contacts_link> link_;
  object_ptr<Photo> profile_photo_;
  object_ptr<peerNotifySettings> notify_settings_;
  object_ptr<botInfo> bot_info_;
  std::int32_t common_chats_count_;
  enum Flags : std::int32_t {BLOCKED_MASK = 1, PHONE_CALLS_AVAILABLE_MASK = 16, PHONE_CALLS_PRIVATE_MASK = 32, ABOUT_MASK = 2, PROFILE_PHOTO_MASK = 4, BOT_INFO_MASK = 8};

  userFull();

  userFull(std::int32_t flags_, bool blocked_, bool phone_calls_available_, bool phone_calls_private_, object_ptr<User> &&user_, std::string const &about_, object_ptr<contacts_link> &&link_, object_ptr<Photo> &&profile_photo_, object_ptr<peerNotifySettings> &&notify_settings_, object_ptr<botInfo> &&bot_info_, std::int32_t common_chats_count_);

  static const std::int32_t ID = 253890367;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<userFull> fetch(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class UserProfilePhoto: public Object {
 public:

  static object_ptr<UserProfilePhoto> fetch(TlBufferParser &p);
};

class userProfilePhotoEmpty final : public UserProfilePhoto {
 public:

  userProfilePhotoEmpty();

  static const std::int32_t ID = 1326562017;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<userProfilePhotoEmpty> fetch(TlBufferParser &p) {
    return make_tl_object<userProfilePhotoEmpty>(p);
  }

  explicit userProfilePhotoEmpty(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class userProfilePhoto final : public UserProfilePhoto {
 public:
  std::int64_t photo_id_;
  object_ptr<FileLocation> photo_small_;
  object_ptr<FileLocation> photo_big_;

  userProfilePhoto();

  userProfilePhoto(std::int64_t photo_id_, object_ptr<FileLocation> &&photo_small_, object_ptr<FileLocation> &&photo_big_);

  static const std::int32_t ID = -715532088;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<userProfilePhoto> fetch(TlBufferParser &p) {
    return make_tl_object<userProfilePhoto>(p);
  }

  explicit userProfilePhoto(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class UserStatus: public Object {
 public:

  static object_ptr<UserStatus> fetch(TlBufferParser &p);
};

class userStatusEmpty final : public UserStatus {
 public:

  userStatusEmpty();

  static const std::int32_t ID = 164646985;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<userStatusEmpty> fetch(TlBufferParser &p) {
    return make_tl_object<userStatusEmpty>(p);
  }

  explicit userStatusEmpty(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class userStatusOnline final : public UserStatus {
 public:
  std::int32_t expires_;

  userStatusOnline();

  explicit userStatusOnline(std::int32_t expires_);

  static const std::int32_t ID = -306628279;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<userStatusOnline> fetch(TlBufferParser &p) {
    return make_tl_object<userStatusOnline>(p);
  }

  explicit userStatusOnline(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class userStatusOffline final : public UserStatus {
 public:
  std::int32_t was_online_;

  userStatusOffline();

  explicit userStatusOffline(std::int32_t was_online_);

  static const std::int32_t ID = 9203775;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<userStatusOffline> fetch(TlBufferParser &p) {
    return make_tl_object<userStatusOffline>(p);
  }

  explicit userStatusOffline(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class userStatusRecently final : public UserStatus {
 public:

  userStatusRecently();

  static const std::int32_t ID = -496024847;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<userStatusRecently> fetch(TlBufferParser &p) {
    return make_tl_object<userStatusRecently>(p);
  }

  explicit userStatusRecently(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class userStatusLastWeek final : public UserStatus {
 public:

  userStatusLastWeek();

  static const std::int32_t ID = 129960444;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<userStatusLastWeek> fetch(TlBufferParser &p) {
    return make_tl_object<userStatusLastWeek>(p);
  }

  explicit userStatusLastWeek(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class userStatusLastMonth final : public UserStatus {
 public:

  userStatusLastMonth();

  static const std::int32_t ID = 2011940674;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<userStatusLastMonth> fetch(TlBufferParser &p) {
    return make_tl_object<userStatusLastMonth>(p);
  }

  explicit userStatusLastMonth(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class WallPaper: public Object {
 public:

  static object_ptr<WallPaper> fetch(TlBufferParser &p);
};

class wallPaper final : public WallPaper {
 public:
  std::int32_t id_;
  std::string title_;
  std::vector<object_ptr<PhotoSize>> sizes_;
  std::int32_t color_;

  wallPaper();

  wallPaper(std::int32_t id_, std::string const &title_, std::vector<object_ptr<PhotoSize>> &&sizes_, std::int32_t color_);

  static const std::int32_t ID = -860866985;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<wallPaper> fetch(TlBufferParser &p) {
    return make_tl_object<wallPaper>(p);
  }

  explicit wallPaper(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class wallPaperSolid final : public WallPaper {
 public:
  std::int32_t id_;
  std::string title_;
  std::int32_t bg_color_;
  std::int32_t color_;

  wallPaperSolid();

  wallPaperSolid(std::int32_t id_, std::string const &title_, std::int32_t bg_color_, std::int32_t color_);

  static const std::int32_t ID = 1662091044;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<wallPaperSolid> fetch(TlBufferParser &p) {
    return make_tl_object<wallPaperSolid>(p);
  }

  explicit wallPaperSolid(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class webAuthorization final : public Object {
 public:
  std::int64_t hash_;
  std::int32_t bot_id_;
  std::string domain_;
  std::string browser_;
  std::string platform_;
  std::int32_t date_created_;
  std::int32_t date_active_;
  std::string ip_;
  std::string region_;

  webAuthorization();

  webAuthorization(std::int64_t hash_, std::int32_t bot_id_, std::string const &domain_, std::string const &browser_, std::string const &platform_, std::int32_t date_created_, std::int32_t date_active_, std::string const &ip_, std::string const &region_);

  static const std::int32_t ID = -892779534;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<webAuthorization> fetch(TlBufferParser &p) {
    return make_tl_object<webAuthorization>(p);
  }

  explicit webAuthorization(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class WebDocument: public Object {
 public:

  static object_ptr<WebDocument> fetch(TlBufferParser &p);
};

class webDocument final : public WebDocument {
 public:
  std::string url_;
  std::int64_t access_hash_;
  std::int32_t size_;
  std::string mime_type_;
  std::vector<object_ptr<DocumentAttribute>> attributes_;

  webDocument();

  webDocument(std::string const &url_, std::int64_t access_hash_, std::int32_t size_, std::string const &mime_type_, std::vector<object_ptr<DocumentAttribute>> &&attributes_);

  static const std::int32_t ID = 475467473;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<webDocument> fetch(TlBufferParser &p) {
    return make_tl_object<webDocument>(p);
  }

  explicit webDocument(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class webDocumentNoProxy final : public WebDocument {
 public:
  std::string url_;
  std::int32_t size_;
  std::string mime_type_;
  std::vector<object_ptr<DocumentAttribute>> attributes_;

  webDocumentNoProxy();

  webDocumentNoProxy(std::string const &url_, std::int32_t size_, std::string const &mime_type_, std::vector<object_ptr<DocumentAttribute>> &&attributes_);

  static const std::int32_t ID = -104284986;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<webDocumentNoProxy> fetch(TlBufferParser &p) {
    return make_tl_object<webDocumentNoProxy>(p);
  }

  explicit webDocumentNoProxy(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class WebPage: public Object {
 public:

  static object_ptr<WebPage> fetch(TlBufferParser &p);
};

class webPageEmpty final : public WebPage {
 public:
  std::int64_t id_;

  webPageEmpty();

  explicit webPageEmpty(std::int64_t id_);

  static const std::int32_t ID = -350980120;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<webPageEmpty> fetch(TlBufferParser &p) {
    return make_tl_object<webPageEmpty>(p);
  }

  explicit webPageEmpty(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class webPagePending final : public WebPage {
 public:
  std::int64_t id_;
  std::int32_t date_;

  webPagePending();

  webPagePending(std::int64_t id_, std::int32_t date_);

  static const std::int32_t ID = -981018084;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<webPagePending> fetch(TlBufferParser &p) {
    return make_tl_object<webPagePending>(p);
  }

  explicit webPagePending(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class webPage final : public WebPage {
 public:
  std::int32_t flags_;
  std::int64_t id_;
  std::string url_;
  std::string display_url_;
  std::int32_t hash_;
  std::string type_;
  std::string site_name_;
  std::string title_;
  std::string description_;
  object_ptr<Photo> photo_;
  std::string embed_url_;
  std::string embed_type_;
  std::int32_t embed_width_;
  std::int32_t embed_height_;
  std::int32_t duration_;
  std::string author_;
  object_ptr<Document> document_;
  object_ptr<Page> cached_page_;
  enum Flags : std::int32_t {TYPE_MASK = 1, SITE_NAME_MASK = 2, TITLE_MASK = 4, DESCRIPTION_MASK = 8, PHOTO_MASK = 16, EMBED_URL_MASK = 32, EMBED_TYPE_MASK = 32, EMBED_WIDTH_MASK = 64, EMBED_HEIGHT_MASK = 64, DURATION_MASK = 128, AUTHOR_MASK = 256, DOCUMENT_MASK = 512, CACHED_PAGE_MASK = 1024};

  webPage();

  webPage(std::int32_t flags_, std::int64_t id_, std::string const &url_, std::string const &display_url_, std::int32_t hash_, std::string const &type_, std::string const &site_name_, std::string const &title_, std::string const &description_, object_ptr<Photo> &&photo_, std::string const &embed_url_, std::string const &embed_type_, std::int32_t embed_width_, std::int32_t embed_height_, std::int32_t duration_, std::string const &author_, object_ptr<Document> &&document_, object_ptr<Page> &&cached_page_);

  static const std::int32_t ID = 1594340540;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<webPage> fetch(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class webPageNotModified final : public WebPage {
 public:

  webPageNotModified();

  static const std::int32_t ID = -2054908813;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<webPageNotModified> fetch(TlBufferParser &p) {
    return make_tl_object<webPageNotModified>(p);
  }

  explicit webPageNotModified(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class account_authorizationForm final : public Object {
 public:
  std::int32_t flags_;
  std::vector<object_ptr<SecureRequiredType>> required_types_;
  std::vector<object_ptr<secureValue>> values_;
  std::vector<object_ptr<SecureValueError>> errors_;
  std::vector<object_ptr<User>> users_;
  std::string privacy_policy_url_;
  enum Flags : std::int32_t {PRIVACY_POLICY_URL_MASK = 1};

  account_authorizationForm();

  account_authorizationForm(std::int32_t flags_, std::vector<object_ptr<SecureRequiredType>> &&required_types_, std::vector<object_ptr<secureValue>> &&values_, std::vector<object_ptr<SecureValueError>> &&errors_, std::vector<object_ptr<User>> &&users_, std::string const &privacy_policy_url_);

  static const std::int32_t ID = -1389486888;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<account_authorizationForm> fetch(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class account_authorizations final : public Object {
 public:
  std::vector<object_ptr<authorization>> authorizations_;

  account_authorizations();

  explicit account_authorizations(std::vector<object_ptr<authorization>> &&authorizations_);

  static const std::int32_t ID = 307276766;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<account_authorizations> fetch(TlBufferParser &p) {
    return make_tl_object<account_authorizations>(p);
  }

  explicit account_authorizations(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class account_password final : public Object {
 public:
  std::int32_t flags_;
  bool has_recovery_;
  bool has_secure_values_;
  bool has_password_;
  object_ptr<PasswordKdfAlgo> current_algo_;
  BufferSlice srp_B_;
  std::int64_t srp_id_;
  std::string hint_;
  std::string email_unconfirmed_pattern_;
  object_ptr<PasswordKdfAlgo> new_algo_;
  object_ptr<SecurePasswordKdfAlgo> new_secure_algo_;
  BufferSlice secure_random_;
  enum Flags : std::int32_t {HAS_RECOVERY_MASK = 1, HAS_SECURE_VALUES_MASK = 2, HAS_PASSWORD_MASK = 4, CURRENT_ALGO_MASK = 4, SRP_B_MASK = 4, SRP_ID_MASK = 4, HINT_MASK = 8, EMAIL_UNCONFIRMED_PATTERN_MASK = 16};

  account_password();

  account_password(std::int32_t flags_, bool has_recovery_, bool has_secure_values_, bool has_password_, object_ptr<PasswordKdfAlgo> &&current_algo_, BufferSlice &&srp_B_, std::int64_t srp_id_, std::string const &hint_, std::string const &email_unconfirmed_pattern_, object_ptr<PasswordKdfAlgo> &&new_algo_, object_ptr<SecurePasswordKdfAlgo> &&new_secure_algo_, BufferSlice &&secure_random_);

  static const std::int32_t ID = -1390001672;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<account_password> fetch(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class account_passwordInputSettings final : public Object {
 public:
  std::int32_t flags_;
  object_ptr<PasswordKdfAlgo> new_algo_;
  BufferSlice new_password_hash_;
  std::string hint_;
  std::string email_;
  object_ptr<secureSecretSettings> new_secure_settings_;
  enum Flags : std::int32_t {NEW_ALGO_MASK = 1, NEW_PASSWORD_HASH_MASK = 1, HINT_MASK = 1, EMAIL_MASK = 2, NEW_SECURE_SETTINGS_MASK = 4};

  account_passwordInputSettings();

  account_passwordInputSettings(std::int32_t flags_, object_ptr<PasswordKdfAlgo> &&new_algo_, BufferSlice &&new_password_hash_, std::string const &hint_, std::string const &email_, object_ptr<secureSecretSettings> &&new_secure_settings_);

  static const std::int32_t ID = -1036572727;
  std::int32_t get_id() const final {
    return ID;
  }

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class account_passwordSettings final : public Object {
 public:
  std::int32_t flags_;
  std::string email_;
  object_ptr<secureSecretSettings> secure_settings_;
  enum Flags : std::int32_t {EMAIL_MASK = 1, SECURE_SETTINGS_MASK = 2};

  account_passwordSettings();

  account_passwordSettings(std::int32_t flags_, std::string const &email_, object_ptr<secureSecretSettings> &&secure_settings_);

  static const std::int32_t ID = -1705233435;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<account_passwordSettings> fetch(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class account_privacyRules final : public Object {
 public:
  std::vector<object_ptr<PrivacyRule>> rules_;
  std::vector<object_ptr<User>> users_;

  account_privacyRules();

  account_privacyRules(std::vector<object_ptr<PrivacyRule>> &&rules_, std::vector<object_ptr<User>> &&users_);

  static const std::int32_t ID = 1430961007;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<account_privacyRules> fetch(TlBufferParser &p) {
    return make_tl_object<account_privacyRules>(p);
  }

  explicit account_privacyRules(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class account_sentEmailCode final : public Object {
 public:
  std::string email_pattern_;
  std::int32_t length_;

  account_sentEmailCode();

  account_sentEmailCode(std::string const &email_pattern_, std::int32_t length_);

  static const std::int32_t ID = -2128640689;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<account_sentEmailCode> fetch(TlBufferParser &p) {
    return make_tl_object<account_sentEmailCode>(p);
  }

  explicit account_sentEmailCode(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class account_takeout final : public Object {
 public:
  std::int64_t id_;

  account_takeout();

  explicit account_takeout(std::int64_t id_);

  static const std::int32_t ID = 1304052993;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<account_takeout> fetch(TlBufferParser &p) {
    return make_tl_object<account_takeout>(p);
  }

  explicit account_takeout(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class account_tmpPassword final : public Object {
 public:
  BufferSlice tmp_password_;
  std::int32_t valid_until_;

  account_tmpPassword();

  account_tmpPassword(BufferSlice &&tmp_password_, std::int32_t valid_until_);

  static const std::int32_t ID = -614138572;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<account_tmpPassword> fetch(TlBufferParser &p) {
    return make_tl_object<account_tmpPassword>(p);
  }

  explicit account_tmpPassword(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class account_webAuthorizations final : public Object {
 public:
  std::vector<object_ptr<webAuthorization>> authorizations_;
  std::vector<object_ptr<User>> users_;

  account_webAuthorizations();

  account_webAuthorizations(std::vector<object_ptr<webAuthorization>> &&authorizations_, std::vector<object_ptr<User>> &&users_);

  static const std::int32_t ID = -313079300;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<account_webAuthorizations> fetch(TlBufferParser &p) {
    return make_tl_object<account_webAuthorizations>(p);
  }

  explicit account_webAuthorizations(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class auth_authorization final : public Object {
 public:
  std::int32_t flags_;
  std::int32_t tmp_sessions_;
  object_ptr<User> user_;
  enum Flags : std::int32_t {TMP_SESSIONS_MASK = 1};

  auth_authorization();

  auth_authorization(std::int32_t flags_, std::int32_t tmp_sessions_, object_ptr<User> &&user_);

  static const std::int32_t ID = -855308010;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<auth_authorization> fetch(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class auth_checkedPhone final : public Object {
 public:
  bool phone_registered_;

  auth_checkedPhone();

  explicit auth_checkedPhone(bool phone_registered_);

  static const std::int32_t ID = -2128698738;
  std::int32_t get_id() const final {
    return ID;
  }

  void store(TlStorerToString &s, const char *field_name) const final;
};

class auth_CodeType: public Object {
 public:

  static object_ptr<auth_CodeType> fetch(TlBufferParser &p);
};

class auth_codeTypeSms final : public auth_CodeType {
 public:

  auth_codeTypeSms();

  static const std::int32_t ID = 1923290508;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<auth_codeTypeSms> fetch(TlBufferParser &p) {
    return make_tl_object<auth_codeTypeSms>(p);
  }

  explicit auth_codeTypeSms(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class auth_codeTypeCall final : public auth_CodeType {
 public:

  auth_codeTypeCall();

  static const std::int32_t ID = 1948046307;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<auth_codeTypeCall> fetch(TlBufferParser &p) {
    return make_tl_object<auth_codeTypeCall>(p);
  }

  explicit auth_codeTypeCall(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class auth_codeTypeFlashCall final : public auth_CodeType {
 public:

  auth_codeTypeFlashCall();

  static const std::int32_t ID = 577556219;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<auth_codeTypeFlashCall> fetch(TlBufferParser &p) {
    return make_tl_object<auth_codeTypeFlashCall>(p);
  }

  explicit auth_codeTypeFlashCall(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class auth_exportedAuthorization final : public Object {
 public:
  std::int32_t id_;
  BufferSlice bytes_;

  auth_exportedAuthorization();

  auth_exportedAuthorization(std::int32_t id_, BufferSlice &&bytes_);

  static const std::int32_t ID = -543777747;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<auth_exportedAuthorization> fetch(TlBufferParser &p) {
    return make_tl_object<auth_exportedAuthorization>(p);
  }

  explicit auth_exportedAuthorization(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class auth_passwordRecovery final : public Object {
 public:
  std::string email_pattern_;

  auth_passwordRecovery();

  explicit auth_passwordRecovery(std::string const &email_pattern_);

  static const std::int32_t ID = 326715557;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<auth_passwordRecovery> fetch(TlBufferParser &p) {
    return make_tl_object<auth_passwordRecovery>(p);
  }

  explicit auth_passwordRecovery(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class auth_sentCode final : public Object {
 public:
  std::int32_t flags_;
  bool phone_registered_;
  object_ptr<auth_SentCodeType> type_;
  std::string phone_code_hash_;
  object_ptr<auth_CodeType> next_type_;
  std::int32_t timeout_;
  object_ptr<help_termsOfService> terms_of_service_;
  enum Flags : std::int32_t {PHONE_REGISTERED_MASK = 1, NEXT_TYPE_MASK = 2, TIMEOUT_MASK = 4, TERMS_OF_SERVICE_MASK = 8};

  auth_sentCode();

  auth_sentCode(std::int32_t flags_, bool phone_registered_, object_ptr<auth_SentCodeType> &&type_, std::string const &phone_code_hash_, object_ptr<auth_CodeType> &&next_type_, std::int32_t timeout_, object_ptr<help_termsOfService> &&terms_of_service_);

  static const std::int32_t ID = 955951967;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<auth_sentCode> fetch(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class auth_SentCodeType: public Object {
 public:

  static object_ptr<auth_SentCodeType> fetch(TlBufferParser &p);
};

class auth_sentCodeTypeApp final : public auth_SentCodeType {
 public:
  std::int32_t length_;

  auth_sentCodeTypeApp();

  explicit auth_sentCodeTypeApp(std::int32_t length_);

  static const std::int32_t ID = 1035688326;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<auth_sentCodeTypeApp> fetch(TlBufferParser &p) {
    return make_tl_object<auth_sentCodeTypeApp>(p);
  }

  explicit auth_sentCodeTypeApp(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class auth_sentCodeTypeSms final : public auth_SentCodeType {
 public:
  std::int32_t length_;

  auth_sentCodeTypeSms();

  explicit auth_sentCodeTypeSms(std::int32_t length_);

  static const std::int32_t ID = -1073693790;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<auth_sentCodeTypeSms> fetch(TlBufferParser &p) {
    return make_tl_object<auth_sentCodeTypeSms>(p);
  }

  explicit auth_sentCodeTypeSms(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class auth_sentCodeTypeCall final : public auth_SentCodeType {
 public:
  std::int32_t length_;

  auth_sentCodeTypeCall();

  explicit auth_sentCodeTypeCall(std::int32_t length_);

  static const std::int32_t ID = 1398007207;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<auth_sentCodeTypeCall> fetch(TlBufferParser &p) {
    return make_tl_object<auth_sentCodeTypeCall>(p);
  }

  explicit auth_sentCodeTypeCall(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class auth_sentCodeTypeFlashCall final : public auth_SentCodeType {
 public:
  std::string pattern_;

  auth_sentCodeTypeFlashCall();

  explicit auth_sentCodeTypeFlashCall(std::string const &pattern_);

  static const std::int32_t ID = -1425815847;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<auth_sentCodeTypeFlashCall> fetch(TlBufferParser &p) {
    return make_tl_object<auth_sentCodeTypeFlashCall>(p);
  }

  explicit auth_sentCodeTypeFlashCall(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class channels_adminLogResults final : public Object {
 public:
  std::vector<object_ptr<channelAdminLogEvent>> events_;
  std::vector<object_ptr<Chat>> chats_;
  std::vector<object_ptr<User>> users_;

  channels_adminLogResults();

  channels_adminLogResults(std::vector<object_ptr<channelAdminLogEvent>> &&events_, std::vector<object_ptr<Chat>> &&chats_, std::vector<object_ptr<User>> &&users_);

  static const std::int32_t ID = -309659827;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<channels_adminLogResults> fetch(TlBufferParser &p) {
    return make_tl_object<channels_adminLogResults>(p);
  }

  explicit channels_adminLogResults(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class channels_channelParticipant final : public Object {
 public:
  object_ptr<ChannelParticipant> participant_;
  std::vector<object_ptr<User>> users_;

  channels_channelParticipant();

  channels_channelParticipant(object_ptr<ChannelParticipant> &&participant_, std::vector<object_ptr<User>> &&users_);

  static const std::int32_t ID = -791039645;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<channels_channelParticipant> fetch(TlBufferParser &p) {
    return make_tl_object<channels_channelParticipant>(p);
  }

  explicit channels_channelParticipant(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class channels_ChannelParticipants: public Object {
 public:

  static object_ptr<channels_ChannelParticipants> fetch(TlBufferParser &p);
};

class channels_channelParticipants final : public channels_ChannelParticipants {
 public:
  std::int32_t count_;
  std::vector<object_ptr<ChannelParticipant>> participants_;
  std::vector<object_ptr<User>> users_;

  channels_channelParticipants();

  channels_channelParticipants(std::int32_t count_, std::vector<object_ptr<ChannelParticipant>> &&participants_, std::vector<object_ptr<User>> &&users_);

  static const std::int32_t ID = -177282392;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<channels_channelParticipants> fetch(TlBufferParser &p) {
    return make_tl_object<channels_channelParticipants>(p);
  }

  explicit channels_channelParticipants(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class channels_channelParticipantsNotModified final : public channels_ChannelParticipants {
 public:

  channels_channelParticipantsNotModified();

  static const std::int32_t ID = -266911767;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<channels_channelParticipantsNotModified> fetch(TlBufferParser &p) {
    return make_tl_object<channels_channelParticipantsNotModified>(p);
  }

  explicit channels_channelParticipantsNotModified(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class contacts_Blocked: public Object {
 public:

  static object_ptr<contacts_Blocked> fetch(TlBufferParser &p);
};

class contacts_blocked final : public contacts_Blocked {
 public:
  std::vector<object_ptr<contactBlocked>> blocked_;
  std::vector<object_ptr<User>> users_;

  contacts_blocked();

  contacts_blocked(std::vector<object_ptr<contactBlocked>> &&blocked_, std::vector<object_ptr<User>> &&users_);

  static const std::int32_t ID = 471043349;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<contacts_blocked> fetch(TlBufferParser &p) {
    return make_tl_object<contacts_blocked>(p);
  }

  explicit contacts_blocked(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class contacts_blockedSlice final : public contacts_Blocked {
 public:
  std::int32_t count_;
  std::vector<object_ptr<contactBlocked>> blocked_;
  std::vector<object_ptr<User>> users_;

  contacts_blockedSlice();

  contacts_blockedSlice(std::int32_t count_, std::vector<object_ptr<contactBlocked>> &&blocked_, std::vector<object_ptr<User>> &&users_);

  static const std::int32_t ID = -1878523231;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<contacts_blockedSlice> fetch(TlBufferParser &p) {
    return make_tl_object<contacts_blockedSlice>(p);
  }

  explicit contacts_blockedSlice(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class contacts_Contacts: public Object {
 public:

  static object_ptr<contacts_Contacts> fetch(TlBufferParser &p);
};

class contacts_contactsNotModified final : public contacts_Contacts {
 public:

  contacts_contactsNotModified();

  static const std::int32_t ID = -1219778094;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<contacts_contactsNotModified> fetch(TlBufferParser &p) {
    return make_tl_object<contacts_contactsNotModified>(p);
  }

  explicit contacts_contactsNotModified(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class contacts_contacts final : public contacts_Contacts {
 public:
  std::vector<object_ptr<contact>> contacts_;
  std::int32_t saved_count_;
  std::vector<object_ptr<User>> users_;

  contacts_contacts();

  contacts_contacts(std::vector<object_ptr<contact>> &&contacts_, std::int32_t saved_count_, std::vector<object_ptr<User>> &&users_);

  static const std::int32_t ID = -353862078;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<contacts_contacts> fetch(TlBufferParser &p) {
    return make_tl_object<contacts_contacts>(p);
  }

  explicit contacts_contacts(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class contacts_found final : public Object {
 public:
  std::vector<object_ptr<Peer>> my_results_;
  std::vector<object_ptr<Peer>> results_;
  std::vector<object_ptr<Chat>> chats_;
  std::vector<object_ptr<User>> users_;

  contacts_found();

  contacts_found(std::vector<object_ptr<Peer>> &&my_results_, std::vector<object_ptr<Peer>> &&results_, std::vector<object_ptr<Chat>> &&chats_, std::vector<object_ptr<User>> &&users_);

  static const std::int32_t ID = -1290580579;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<contacts_found> fetch(TlBufferParser &p) {
    return make_tl_object<contacts_found>(p);
  }

  explicit contacts_found(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class contacts_importedContacts final : public Object {
 public:
  std::vector<object_ptr<importedContact>> imported_;
  std::vector<object_ptr<popularContact>> popular_invites_;
  std::vector<std::int64_t> retry_contacts_;
  std::vector<object_ptr<User>> users_;

  contacts_importedContacts();

  contacts_importedContacts(std::vector<object_ptr<importedContact>> &&imported_, std::vector<object_ptr<popularContact>> &&popular_invites_, std::vector<std::int64_t> &&retry_contacts_, std::vector<object_ptr<User>> &&users_);

  static const std::int32_t ID = 2010127419;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<contacts_importedContacts> fetch(TlBufferParser &p) {
    return make_tl_object<contacts_importedContacts>(p);
  }

  explicit contacts_importedContacts(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class contacts_link final : public Object {
 public:
  object_ptr<ContactLink> my_link_;
  object_ptr<ContactLink> foreign_link_;
  object_ptr<User> user_;

  contacts_link();

  contacts_link(object_ptr<ContactLink> &&my_link_, object_ptr<ContactLink> &&foreign_link_, object_ptr<User> &&user_);

  static const std::int32_t ID = 986597452;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<contacts_link> fetch(TlBufferParser &p) {
    return make_tl_object<contacts_link>(p);
  }

  explicit contacts_link(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class contacts_resolvedPeer final : public Object {
 public:
  object_ptr<Peer> peer_;
  std::vector<object_ptr<Chat>> chats_;
  std::vector<object_ptr<User>> users_;

  contacts_resolvedPeer();

  contacts_resolvedPeer(object_ptr<Peer> &&peer_, std::vector<object_ptr<Chat>> &&chats_, std::vector<object_ptr<User>> &&users_);

  static const std::int32_t ID = 2131196633;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<contacts_resolvedPeer> fetch(TlBufferParser &p) {
    return make_tl_object<contacts_resolvedPeer>(p);
  }

  explicit contacts_resolvedPeer(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class contacts_TopPeers: public Object {
 public:

  static object_ptr<contacts_TopPeers> fetch(TlBufferParser &p);
};

class contacts_topPeersNotModified final : public contacts_TopPeers {
 public:

  contacts_topPeersNotModified();

  static const std::int32_t ID = -567906571;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<contacts_topPeersNotModified> fetch(TlBufferParser &p) {
    return make_tl_object<contacts_topPeersNotModified>(p);
  }

  explicit contacts_topPeersNotModified(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class contacts_topPeers final : public contacts_TopPeers {
 public:
  std::vector<object_ptr<topPeerCategoryPeers>> categories_;
  std::vector<object_ptr<Chat>> chats_;
  std::vector<object_ptr<User>> users_;

  contacts_topPeers();

  contacts_topPeers(std::vector<object_ptr<topPeerCategoryPeers>> &&categories_, std::vector<object_ptr<Chat>> &&chats_, std::vector<object_ptr<User>> &&users_);

  static const std::int32_t ID = 1891070632;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<contacts_topPeers> fetch(TlBufferParser &p) {
    return make_tl_object<contacts_topPeers>(p);
  }

  explicit contacts_topPeers(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class contacts_topPeersDisabled final : public contacts_TopPeers {
 public:

  contacts_topPeersDisabled();

  static const std::int32_t ID = -1255369827;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<contacts_topPeersDisabled> fetch(TlBufferParser &p) {
    return make_tl_object<contacts_topPeersDisabled>(p);
  }

  explicit contacts_topPeersDisabled(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class help_AppUpdate: public Object {
 public:

  static object_ptr<help_AppUpdate> fetch(TlBufferParser &p);
};

class help_appUpdate final : public help_AppUpdate {
 public:
  std::int32_t flags_;
  bool popup_;
  std::int32_t id_;
  std::string version_;
  std::string text_;
  std::vector<object_ptr<MessageEntity>> entities_;
  object_ptr<Document> document_;
  std::string url_;
  enum Flags : std::int32_t {POPUP_MASK = 1, DOCUMENT_MASK = 2, URL_MASK = 4};

  help_appUpdate();

  help_appUpdate(std::int32_t flags_, bool popup_, std::int32_t id_, std::string const &version_, std::string const &text_, std::vector<object_ptr<MessageEntity>> &&entities_, object_ptr<Document> &&document_, std::string const &url_);

  static const std::int32_t ID = 497489295;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<help_appUpdate> fetch(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class help_noAppUpdate final : public help_AppUpdate {
 public:

  help_noAppUpdate();

  static const std::int32_t ID = -1000708810;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<help_noAppUpdate> fetch(TlBufferParser &p) {
    return make_tl_object<help_noAppUpdate>(p);
  }

  explicit help_noAppUpdate(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class help_configSimple final : public Object {
 public:
  std::int32_t date_;
  std::int32_t expires_;
  std::vector<object_ptr<accessPointRule>> rules_;

  help_configSimple();

  help_configSimple(std::int32_t date_, std::int32_t expires_, std::vector<object_ptr<accessPointRule>> &&rules_);

  static const std::int32_t ID = 1515793004;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<help_configSimple> fetch(TlBufferParser &p) {
    return make_tl_object<help_configSimple>(p);
  }

  explicit help_configSimple(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class help_DeepLinkInfo: public Object {
 public:

  static object_ptr<help_DeepLinkInfo> fetch(TlBufferParser &p);
};

class help_deepLinkInfoEmpty final : public help_DeepLinkInfo {
 public:

  help_deepLinkInfoEmpty();

  static const std::int32_t ID = 1722786150;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<help_deepLinkInfoEmpty> fetch(TlBufferParser &p) {
    return make_tl_object<help_deepLinkInfoEmpty>(p);
  }

  explicit help_deepLinkInfoEmpty(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class help_deepLinkInfo final : public help_DeepLinkInfo {
 public:
  std::int32_t flags_;
  bool update_app_;
  std::string message_;
  std::vector<object_ptr<MessageEntity>> entities_;
  enum Flags : std::int32_t {UPDATE_APP_MASK = 1, ENTITIES_MASK = 2};

  help_deepLinkInfo();

  help_deepLinkInfo(std::int32_t flags_, bool update_app_, std::string const &message_, std::vector<object_ptr<MessageEntity>> &&entities_);

  static const std::int32_t ID = 1783556146;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<help_deepLinkInfo> fetch(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class help_inviteText final : public Object {
 public:
  std::string message_;

  help_inviteText();

  explicit help_inviteText(std::string const &message_);

  static const std::int32_t ID = 415997816;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<help_inviteText> fetch(TlBufferParser &p) {
    return make_tl_object<help_inviteText>(p);
  }

  explicit help_inviteText(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class help_PassportConfig: public Object {
 public:

  static object_ptr<help_PassportConfig> fetch(TlBufferParser &p);
};

class help_passportConfigNotModified final : public help_PassportConfig {
 public:

  help_passportConfigNotModified();

  static const std::int32_t ID = -1078332329;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<help_passportConfigNotModified> fetch(TlBufferParser &p) {
    return make_tl_object<help_passportConfigNotModified>(p);
  }

  explicit help_passportConfigNotModified(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class help_passportConfig final : public help_PassportConfig {
 public:
  std::int32_t hash_;
  object_ptr<dataJSON> countries_langs_;

  help_passportConfig();

  help_passportConfig(std::int32_t hash_, object_ptr<dataJSON> &&countries_langs_);

  static const std::int32_t ID = -1600596305;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<help_passportConfig> fetch(TlBufferParser &p) {
    return make_tl_object<help_passportConfig>(p);
  }

  explicit help_passportConfig(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class help_ProxyData: public Object {
 public:

  static object_ptr<help_ProxyData> fetch(TlBufferParser &p);
};

class help_proxyDataEmpty final : public help_ProxyData {
 public:
  std::int32_t expires_;

  help_proxyDataEmpty();

  explicit help_proxyDataEmpty(std::int32_t expires_);

  static const std::int32_t ID = -526508104;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<help_proxyDataEmpty> fetch(TlBufferParser &p) {
    return make_tl_object<help_proxyDataEmpty>(p);
  }

  explicit help_proxyDataEmpty(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class help_proxyDataPromo final : public help_ProxyData {
 public:
  std::int32_t expires_;
  object_ptr<Peer> peer_;
  std::vector<object_ptr<Chat>> chats_;
  std::vector<object_ptr<User>> users_;

  help_proxyDataPromo();

  help_proxyDataPromo(std::int32_t expires_, object_ptr<Peer> &&peer_, std::vector<object_ptr<Chat>> &&chats_, std::vector<object_ptr<User>> &&users_);

  static const std::int32_t ID = 737668643;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<help_proxyDataPromo> fetch(TlBufferParser &p) {
    return make_tl_object<help_proxyDataPromo>(p);
  }

  explicit help_proxyDataPromo(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class help_recentMeUrls final : public Object {
 public:
  std::vector<object_ptr<RecentMeUrl>> urls_;
  std::vector<object_ptr<Chat>> chats_;
  std::vector<object_ptr<User>> users_;

  help_recentMeUrls();

  help_recentMeUrls(std::vector<object_ptr<RecentMeUrl>> &&urls_, std::vector<object_ptr<Chat>> &&chats_, std::vector<object_ptr<User>> &&users_);

  static const std::int32_t ID = 235081943;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<help_recentMeUrls> fetch(TlBufferParser &p) {
    return make_tl_object<help_recentMeUrls>(p);
  }

  explicit help_recentMeUrls(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class help_support final : public Object {
 public:
  std::string phone_number_;
  object_ptr<User> user_;

  help_support();

  help_support(std::string const &phone_number_, object_ptr<User> &&user_);

  static const std::int32_t ID = 398898678;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<help_support> fetch(TlBufferParser &p) {
    return make_tl_object<help_support>(p);
  }

  explicit help_support(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class help_termsOfService final : public Object {
 public:
  std::int32_t flags_;
  bool popup_;
  object_ptr<dataJSON> id_;
  std::string text_;
  std::vector<object_ptr<MessageEntity>> entities_;
  std::int32_t min_age_confirm_;
  enum Flags : std::int32_t {POPUP_MASK = 1, MIN_AGE_CONFIRM_MASK = 2};

  help_termsOfService();

  help_termsOfService(std::int32_t flags_, bool popup_, object_ptr<dataJSON> &&id_, std::string const &text_, std::vector<object_ptr<MessageEntity>> &&entities_, std::int32_t min_age_confirm_);

  static const std::int32_t ID = 2013922064;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<help_termsOfService> fetch(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class help_TermsOfServiceUpdate: public Object {
 public:

  static object_ptr<help_TermsOfServiceUpdate> fetch(TlBufferParser &p);
};

class help_termsOfServiceUpdateEmpty final : public help_TermsOfServiceUpdate {
 public:
  std::int32_t expires_;

  help_termsOfServiceUpdateEmpty();

  explicit help_termsOfServiceUpdateEmpty(std::int32_t expires_);

  static const std::int32_t ID = -483352705;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<help_termsOfServiceUpdateEmpty> fetch(TlBufferParser &p) {
    return make_tl_object<help_termsOfServiceUpdateEmpty>(p);
  }

  explicit help_termsOfServiceUpdateEmpty(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class help_termsOfServiceUpdate final : public help_TermsOfServiceUpdate {
 public:
  std::int32_t expires_;
  object_ptr<help_termsOfService> terms_of_service_;

  help_termsOfServiceUpdate();

  help_termsOfServiceUpdate(std::int32_t expires_, object_ptr<help_termsOfService> &&terms_of_service_);

  static const std::int32_t ID = 686618977;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<help_termsOfServiceUpdate> fetch(TlBufferParser &p) {
    return make_tl_object<help_termsOfServiceUpdate>(p);
  }

  explicit help_termsOfServiceUpdate(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class messages_affectedHistory final : public Object {
 public:
  std::int32_t pts_;
  std::int32_t pts_count_;
  std::int32_t offset_;

  messages_affectedHistory();

  messages_affectedHistory(std::int32_t pts_, std::int32_t pts_count_, std::int32_t offset_);

  static const std::int32_t ID = -1269012015;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<messages_affectedHistory> fetch(TlBufferParser &p) {
    return make_tl_object<messages_affectedHistory>(p);
  }

  explicit messages_affectedHistory(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class messages_affectedMessages final : public Object {
 public:
  std::int32_t pts_;
  std::int32_t pts_count_;

  messages_affectedMessages();

  messages_affectedMessages(std::int32_t pts_, std::int32_t pts_count_);

  static const std::int32_t ID = -2066640507;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<messages_affectedMessages> fetch(TlBufferParser &p) {
    return make_tl_object<messages_affectedMessages>(p);
  }

  explicit messages_affectedMessages(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class messages_AllStickers: public Object {
 public:

  static object_ptr<messages_AllStickers> fetch(TlBufferParser &p);
};

class messages_allStickersNotModified final : public messages_AllStickers {
 public:

  messages_allStickersNotModified();

  static const std::int32_t ID = -395967805;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<messages_allStickersNotModified> fetch(TlBufferParser &p) {
    return make_tl_object<messages_allStickersNotModified>(p);
  }

  explicit messages_allStickersNotModified(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class messages_allStickers final : public messages_AllStickers {
 public:
  std::int32_t hash_;
  std::vector<object_ptr<stickerSet>> sets_;

  messages_allStickers();

  messages_allStickers(std::int32_t hash_, std::vector<object_ptr<stickerSet>> &&sets_);

  static const std::int32_t ID = -302170017;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<messages_allStickers> fetch(TlBufferParser &p) {
    return make_tl_object<messages_allStickers>(p);
  }

  explicit messages_allStickers(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class messages_archivedStickers final : public Object {
 public:
  std::int32_t count_;
  std::vector<object_ptr<StickerSetCovered>> sets_;

  messages_archivedStickers();

  messages_archivedStickers(std::int32_t count_, std::vector<object_ptr<StickerSetCovered>> &&sets_);

  static const std::int32_t ID = 1338747336;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<messages_archivedStickers> fetch(TlBufferParser &p) {
    return make_tl_object<messages_archivedStickers>(p);
  }

  explicit messages_archivedStickers(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class messages_botCallbackAnswer final : public Object {
 public:
  std::int32_t flags_;
  bool alert_;
  bool has_url_;
  bool native_ui_;
  std::string message_;
  std::string url_;
  std::int32_t cache_time_;
  enum Flags : std::int32_t {ALERT_MASK = 2, HAS_URL_MASK = 8, NATIVE_UI_MASK = 16, MESSAGE_MASK = 1, URL_MASK = 4};

  messages_botCallbackAnswer();

  messages_botCallbackAnswer(std::int32_t flags_, bool alert_, bool has_url_, bool native_ui_, std::string const &message_, std::string const &url_, std::int32_t cache_time_);

  static const std::int32_t ID = 911761060;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<messages_botCallbackAnswer> fetch(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class messages_botResults final : public Object {
 public:
  std::int32_t flags_;
  bool gallery_;
  std::int64_t query_id_;
  std::string next_offset_;
  object_ptr<inlineBotSwitchPM> switch_pm_;
  std::vector<object_ptr<BotInlineResult>> results_;
  std::int32_t cache_time_;
  std::vector<object_ptr<User>> users_;
  enum Flags : std::int32_t {GALLERY_MASK = 1, NEXT_OFFSET_MASK = 2, SWITCH_PM_MASK = 4};

  messages_botResults();

  messages_botResults(std::int32_t flags_, bool gallery_, std::int64_t query_id_, std::string const &next_offset_, object_ptr<inlineBotSwitchPM> &&switch_pm_, std::vector<object_ptr<BotInlineResult>> &&results_, std::int32_t cache_time_, std::vector<object_ptr<User>> &&users_);

  static const std::int32_t ID = -1803769784;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<messages_botResults> fetch(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class messages_chatFull final : public Object {
 public:
  object_ptr<ChatFull> full_chat_;
  std::vector<object_ptr<Chat>> chats_;
  std::vector<object_ptr<User>> users_;

  messages_chatFull();

  messages_chatFull(object_ptr<ChatFull> &&full_chat_, std::vector<object_ptr<Chat>> &&chats_, std::vector<object_ptr<User>> &&users_);

  static const std::int32_t ID = -438840932;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<messages_chatFull> fetch(TlBufferParser &p) {
    return make_tl_object<messages_chatFull>(p);
  }

  explicit messages_chatFull(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class messages_Chats: public Object {
 public:

  static object_ptr<messages_Chats> fetch(TlBufferParser &p);
};

class messages_chats final : public messages_Chats {
 public:
  std::vector<object_ptr<Chat>> chats_;

  messages_chats();

  explicit messages_chats(std::vector<object_ptr<Chat>> &&chats_);

  static const std::int32_t ID = 1694474197;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<messages_chats> fetch(TlBufferParser &p) {
    return make_tl_object<messages_chats>(p);
  }

  explicit messages_chats(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class messages_chatsSlice final : public messages_Chats {
 public:
  std::int32_t count_;
  std::vector<object_ptr<Chat>> chats_;

  messages_chatsSlice();

  messages_chatsSlice(std::int32_t count_, std::vector<object_ptr<Chat>> &&chats_);

  static const std::int32_t ID = -1663561404;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<messages_chatsSlice> fetch(TlBufferParser &p) {
    return make_tl_object<messages_chatsSlice>(p);
  }

  explicit messages_chatsSlice(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class messages_DhConfig: public Object {
 public:

  static object_ptr<messages_DhConfig> fetch(TlBufferParser &p);
};

class messages_dhConfigNotModified final : public messages_DhConfig {
 public:
  BufferSlice random_;

  messages_dhConfigNotModified();

  explicit messages_dhConfigNotModified(BufferSlice &&random_);

  static const std::int32_t ID = -1058912715;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<messages_dhConfigNotModified> fetch(TlBufferParser &p) {
    return make_tl_object<messages_dhConfigNotModified>(p);
  }

  explicit messages_dhConfigNotModified(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class messages_dhConfig final : public messages_DhConfig {
 public:
  std::int32_t g_;
  BufferSlice p_;
  std::int32_t version_;
  BufferSlice random_;

  messages_dhConfig();

  messages_dhConfig(std::int32_t g_, BufferSlice &&p_, std::int32_t version_, BufferSlice &&random_);

  static const std::int32_t ID = 740433629;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<messages_dhConfig> fetch(TlBufferParser &p) {
    return make_tl_object<messages_dhConfig>(p);
  }

  explicit messages_dhConfig(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class messages_Dialogs: public Object {
 public:

  static object_ptr<messages_Dialogs> fetch(TlBufferParser &p);
};

class messages_dialogs final : public messages_Dialogs {
 public:
  std::vector<object_ptr<dialog>> dialogs_;
  std::vector<object_ptr<Message>> messages_;
  std::vector<object_ptr<Chat>> chats_;
  std::vector<object_ptr<User>> users_;

  messages_dialogs();

  messages_dialogs(std::vector<object_ptr<dialog>> &&dialogs_, std::vector<object_ptr<Message>> &&messages_, std::vector<object_ptr<Chat>> &&chats_, std::vector<object_ptr<User>> &&users_);

  static const std::int32_t ID = 364538944;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<messages_dialogs> fetch(TlBufferParser &p) {
    return make_tl_object<messages_dialogs>(p);
  }

  explicit messages_dialogs(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class messages_dialogsSlice final : public messages_Dialogs {
 public:
  std::int32_t count_;
  std::vector<object_ptr<dialog>> dialogs_;
  std::vector<object_ptr<Message>> messages_;
  std::vector<object_ptr<Chat>> chats_;
  std::vector<object_ptr<User>> users_;

  messages_dialogsSlice();

  messages_dialogsSlice(std::int32_t count_, std::vector<object_ptr<dialog>> &&dialogs_, std::vector<object_ptr<Message>> &&messages_, std::vector<object_ptr<Chat>> &&chats_, std::vector<object_ptr<User>> &&users_);

  static const std::int32_t ID = 1910543603;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<messages_dialogsSlice> fetch(TlBufferParser &p) {
    return make_tl_object<messages_dialogsSlice>(p);
  }

  explicit messages_dialogsSlice(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class messages_dialogsNotModified final : public messages_Dialogs {
 public:
  std::int32_t count_;

  messages_dialogsNotModified();

  explicit messages_dialogsNotModified(std::int32_t count_);

  static const std::int32_t ID = -253500010;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<messages_dialogsNotModified> fetch(TlBufferParser &p) {
    return make_tl_object<messages_dialogsNotModified>(p);
  }

  explicit messages_dialogsNotModified(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class messages_FavedStickers: public Object {
 public:

  static object_ptr<messages_FavedStickers> fetch(TlBufferParser &p);
};

class messages_favedStickersNotModified final : public messages_FavedStickers {
 public:

  messages_favedStickersNotModified();

  static const std::int32_t ID = -1634752813;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<messages_favedStickersNotModified> fetch(TlBufferParser &p) {
    return make_tl_object<messages_favedStickersNotModified>(p);
  }

  explicit messages_favedStickersNotModified(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class messages_favedStickers final : public messages_FavedStickers {
 public:
  std::int32_t hash_;
  std::vector<object_ptr<stickerPack>> packs_;
  std::vector<object_ptr<Document>> stickers_;

  messages_favedStickers();

  messages_favedStickers(std::int32_t hash_, std::vector<object_ptr<stickerPack>> &&packs_, std::vector<object_ptr<Document>> &&stickers_);

  static const std::int32_t ID = -209768682;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<messages_favedStickers> fetch(TlBufferParser &p) {
    return make_tl_object<messages_favedStickers>(p);
  }

  explicit messages_favedStickers(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class messages_FeaturedStickers: public Object {
 public:

  static object_ptr<messages_FeaturedStickers> fetch(TlBufferParser &p);
};

class messages_featuredStickersNotModified final : public messages_FeaturedStickers {
 public:

  messages_featuredStickersNotModified();

  static const std::int32_t ID = 82699215;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<messages_featuredStickersNotModified> fetch(TlBufferParser &p) {
    return make_tl_object<messages_featuredStickersNotModified>(p);
  }

  explicit messages_featuredStickersNotModified(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class messages_featuredStickers final : public messages_FeaturedStickers {
 public:
  std::int32_t hash_;
  std::vector<object_ptr<StickerSetCovered>> sets_;
  std::vector<std::int64_t> unread_;

  messages_featuredStickers();

  messages_featuredStickers(std::int32_t hash_, std::vector<object_ptr<StickerSetCovered>> &&sets_, std::vector<std::int64_t> &&unread_);

  static const std::int32_t ID = -123893531;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<messages_featuredStickers> fetch(TlBufferParser &p) {
    return make_tl_object<messages_featuredStickers>(p);
  }

  explicit messages_featuredStickers(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class messages_foundGifs final : public Object {
 public:
  std::int32_t next_offset_;
  std::vector<object_ptr<FoundGif>> results_;

  messages_foundGifs();

  messages_foundGifs(std::int32_t next_offset_, std::vector<object_ptr<FoundGif>> &&results_);

  static const std::int32_t ID = 1158290442;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<messages_foundGifs> fetch(TlBufferParser &p) {
    return make_tl_object<messages_foundGifs>(p);
  }

  explicit messages_foundGifs(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class messages_FoundStickerSets: public Object {
 public:

  static object_ptr<messages_FoundStickerSets> fetch(TlBufferParser &p);
};

class messages_foundStickerSetsNotModified final : public messages_FoundStickerSets {
 public:

  messages_foundStickerSetsNotModified();

  static const std::int32_t ID = 223655517;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<messages_foundStickerSetsNotModified> fetch(TlBufferParser &p) {
    return make_tl_object<messages_foundStickerSetsNotModified>(p);
  }

  explicit messages_foundStickerSetsNotModified(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class messages_foundStickerSets final : public messages_FoundStickerSets {
 public:
  std::int32_t hash_;
  std::vector<object_ptr<StickerSetCovered>> sets_;

  messages_foundStickerSets();

  messages_foundStickerSets(std::int32_t hash_, std::vector<object_ptr<StickerSetCovered>> &&sets_);

  static const std::int32_t ID = 1359533640;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<messages_foundStickerSets> fetch(TlBufferParser &p) {
    return make_tl_object<messages_foundStickerSets>(p);
  }

  explicit messages_foundStickerSets(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class messages_highScores final : public Object {
 public:
  std::vector<object_ptr<highScore>> scores_;
  std::vector<object_ptr<User>> users_;

  messages_highScores();

  messages_highScores(std::vector<object_ptr<highScore>> &&scores_, std::vector<object_ptr<User>> &&users_);

  static const std::int32_t ID = -1707344487;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<messages_highScores> fetch(TlBufferParser &p) {
    return make_tl_object<messages_highScores>(p);
  }

  explicit messages_highScores(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class messages_messageEditData final : public Object {
 public:
  std::int32_t flags_;
  bool caption_;
  enum Flags : std::int32_t {CAPTION_MASK = 1};

  messages_messageEditData();

  messages_messageEditData(std::int32_t flags_, bool caption_);

  static const std::int32_t ID = 649453030;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<messages_messageEditData> fetch(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class messages_Messages: public Object {
 public:

  static object_ptr<messages_Messages> fetch(TlBufferParser &p);
};

class messages_messages final : public messages_Messages {
 public:
  std::vector<object_ptr<Message>> messages_;
  std::vector<object_ptr<Chat>> chats_;
  std::vector<object_ptr<User>> users_;

  messages_messages();

  messages_messages(std::vector<object_ptr<Message>> &&messages_, std::vector<object_ptr<Chat>> &&chats_, std::vector<object_ptr<User>> &&users_);

  static const std::int32_t ID = -1938715001;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<messages_messages> fetch(TlBufferParser &p) {
    return make_tl_object<messages_messages>(p);
  }

  explicit messages_messages(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class messages_messagesSlice final : public messages_Messages {
 public:
  std::int32_t count_;
  std::vector<object_ptr<Message>> messages_;
  std::vector<object_ptr<Chat>> chats_;
  std::vector<object_ptr<User>> users_;

  messages_messagesSlice();

  messages_messagesSlice(std::int32_t count_, std::vector<object_ptr<Message>> &&messages_, std::vector<object_ptr<Chat>> &&chats_, std::vector<object_ptr<User>> &&users_);

  static const std::int32_t ID = 189033187;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<messages_messagesSlice> fetch(TlBufferParser &p) {
    return make_tl_object<messages_messagesSlice>(p);
  }

  explicit messages_messagesSlice(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class messages_channelMessages final : public messages_Messages {
 public:
  std::int32_t flags_;
  std::int32_t pts_;
  std::int32_t count_;
  std::vector<object_ptr<Message>> messages_;
  std::vector<object_ptr<Chat>> chats_;
  std::vector<object_ptr<User>> users_;

  messages_channelMessages();

  messages_channelMessages(std::int32_t flags_, std::int32_t pts_, std::int32_t count_, std::vector<object_ptr<Message>> &&messages_, std::vector<object_ptr<Chat>> &&chats_, std::vector<object_ptr<User>> &&users_);

  static const std::int32_t ID = -1725551049;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<messages_channelMessages> fetch(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class messages_messagesNotModified final : public messages_Messages {
 public:
  std::int32_t count_;

  messages_messagesNotModified();

  explicit messages_messagesNotModified(std::int32_t count_);

  static const std::int32_t ID = 1951620897;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<messages_messagesNotModified> fetch(TlBufferParser &p) {
    return make_tl_object<messages_messagesNotModified>(p);
  }

  explicit messages_messagesNotModified(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class messages_peerDialogs final : public Object {
 public:
  std::vector<object_ptr<dialog>> dialogs_;
  std::vector<object_ptr<Message>> messages_;
  std::vector<object_ptr<Chat>> chats_;
  std::vector<object_ptr<User>> users_;
  object_ptr<updates_state> state_;

  messages_peerDialogs();

  messages_peerDialogs(std::vector<object_ptr<dialog>> &&dialogs_, std::vector<object_ptr<Message>> &&messages_, std::vector<object_ptr<Chat>> &&chats_, std::vector<object_ptr<User>> &&users_, object_ptr<updates_state> &&state_);

  static const std::int32_t ID = 863093588;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<messages_peerDialogs> fetch(TlBufferParser &p) {
    return make_tl_object<messages_peerDialogs>(p);
  }

  explicit messages_peerDialogs(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class messages_RecentStickers: public Object {
 public:

  static object_ptr<messages_RecentStickers> fetch(TlBufferParser &p);
};

class messages_recentStickersNotModified final : public messages_RecentStickers {
 public:

  messages_recentStickersNotModified();

  static const std::int32_t ID = 186120336;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<messages_recentStickersNotModified> fetch(TlBufferParser &p) {
    return make_tl_object<messages_recentStickersNotModified>(p);
  }

  explicit messages_recentStickersNotModified(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class messages_recentStickers final : public messages_RecentStickers {
 public:
  std::int32_t hash_;
  std::vector<object_ptr<stickerPack>> packs_;
  std::vector<object_ptr<Document>> stickers_;
  std::vector<std::int32_t> dates_;

  messages_recentStickers();

  messages_recentStickers(std::int32_t hash_, std::vector<object_ptr<stickerPack>> &&packs_, std::vector<object_ptr<Document>> &&stickers_, std::vector<std::int32_t> &&dates_);

  static const std::int32_t ID = 586395571;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<messages_recentStickers> fetch(TlBufferParser &p) {
    return make_tl_object<messages_recentStickers>(p);
  }

  explicit messages_recentStickers(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class messages_SavedGifs: public Object {
 public:

  static object_ptr<messages_SavedGifs> fetch(TlBufferParser &p);
};

class messages_savedGifsNotModified final : public messages_SavedGifs {
 public:

  messages_savedGifsNotModified();

  static const std::int32_t ID = -402498398;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<messages_savedGifsNotModified> fetch(TlBufferParser &p) {
    return make_tl_object<messages_savedGifsNotModified>(p);
  }

  explicit messages_savedGifsNotModified(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class messages_savedGifs final : public messages_SavedGifs {
 public:
  std::int32_t hash_;
  std::vector<object_ptr<Document>> gifs_;

  messages_savedGifs();

  messages_savedGifs(std::int32_t hash_, std::vector<object_ptr<Document>> &&gifs_);

  static const std::int32_t ID = 772213157;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<messages_savedGifs> fetch(TlBufferParser &p) {
    return make_tl_object<messages_savedGifs>(p);
  }

  explicit messages_savedGifs(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class messages_SentEncryptedMessage: public Object {
 public:

  static object_ptr<messages_SentEncryptedMessage> fetch(TlBufferParser &p);
};

class messages_sentEncryptedMessage final : public messages_SentEncryptedMessage {
 public:
  std::int32_t date_;

  messages_sentEncryptedMessage();

  explicit messages_sentEncryptedMessage(std::int32_t date_);

  static const std::int32_t ID = 1443858741;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<messages_sentEncryptedMessage> fetch(TlBufferParser &p) {
    return make_tl_object<messages_sentEncryptedMessage>(p);
  }

  explicit messages_sentEncryptedMessage(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class messages_sentEncryptedFile final : public messages_SentEncryptedMessage {
 public:
  std::int32_t date_;
  object_ptr<EncryptedFile> file_;

  messages_sentEncryptedFile();

  messages_sentEncryptedFile(std::int32_t date_, object_ptr<EncryptedFile> &&file_);

  static const std::int32_t ID = -1802240206;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<messages_sentEncryptedFile> fetch(TlBufferParser &p) {
    return make_tl_object<messages_sentEncryptedFile>(p);
  }

  explicit messages_sentEncryptedFile(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class messages_stickerSet final : public Object {
 public:
  object_ptr<stickerSet> set_;
  std::vector<object_ptr<stickerPack>> packs_;
  std::vector<object_ptr<Document>> documents_;

  messages_stickerSet();

  messages_stickerSet(object_ptr<stickerSet> &&set_, std::vector<object_ptr<stickerPack>> &&packs_, std::vector<object_ptr<Document>> &&documents_);

  static const std::int32_t ID = -1240849242;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<messages_stickerSet> fetch(TlBufferParser &p) {
    return make_tl_object<messages_stickerSet>(p);
  }

  explicit messages_stickerSet(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class messages_StickerSetInstallResult: public Object {
 public:

  static object_ptr<messages_StickerSetInstallResult> fetch(TlBufferParser &p);
};

class messages_stickerSetInstallResultSuccess final : public messages_StickerSetInstallResult {
 public:

  messages_stickerSetInstallResultSuccess();

  static const std::int32_t ID = 946083368;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<messages_stickerSetInstallResultSuccess> fetch(TlBufferParser &p) {
    return make_tl_object<messages_stickerSetInstallResultSuccess>(p);
  }

  explicit messages_stickerSetInstallResultSuccess(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class messages_stickerSetInstallResultArchive final : public messages_StickerSetInstallResult {
 public:
  std::vector<object_ptr<StickerSetCovered>> sets_;

  messages_stickerSetInstallResultArchive();

  explicit messages_stickerSetInstallResultArchive(std::vector<object_ptr<StickerSetCovered>> &&sets_);

  static const std::int32_t ID = 904138920;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<messages_stickerSetInstallResultArchive> fetch(TlBufferParser &p) {
    return make_tl_object<messages_stickerSetInstallResultArchive>(p);
  }

  explicit messages_stickerSetInstallResultArchive(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class messages_Stickers: public Object {
 public:

  static object_ptr<messages_Stickers> fetch(TlBufferParser &p);
};

class messages_stickersNotModified final : public messages_Stickers {
 public:

  messages_stickersNotModified();

  static const std::int32_t ID = -244016606;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<messages_stickersNotModified> fetch(TlBufferParser &p) {
    return make_tl_object<messages_stickersNotModified>(p);
  }

  explicit messages_stickersNotModified(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class messages_stickers final : public messages_Stickers {
 public:
  std::int32_t hash_;
  std::vector<object_ptr<Document>> stickers_;

  messages_stickers();

  messages_stickers(std::int32_t hash_, std::vector<object_ptr<Document>> &&stickers_);

  static const std::int32_t ID = -463889475;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<messages_stickers> fetch(TlBufferParser &p) {
    return make_tl_object<messages_stickers>(p);
  }

  explicit messages_stickers(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class payments_paymentForm final : public Object {
 public:
  std::int32_t flags_;
  bool can_save_credentials_;
  bool password_missing_;
  std::int32_t bot_id_;
  object_ptr<invoice> invoice_;
  std::int32_t provider_id_;
  std::string url_;
  std::string native_provider_;
  object_ptr<dataJSON> native_params_;
  object_ptr<paymentRequestedInfo> saved_info_;
  object_ptr<paymentSavedCredentialsCard> saved_credentials_;
  std::vector<object_ptr<User>> users_;
  enum Flags : std::int32_t {CAN_SAVE_CREDENTIALS_MASK = 4, PASSWORD_MISSING_MASK = 8, NATIVE_PROVIDER_MASK = 16, NATIVE_PARAMS_MASK = 16, SAVED_INFO_MASK = 1, SAVED_CREDENTIALS_MASK = 2};

  payments_paymentForm();

  payments_paymentForm(std::int32_t flags_, bool can_save_credentials_, bool password_missing_, std::int32_t bot_id_, object_ptr<invoice> &&invoice_, std::int32_t provider_id_, std::string const &url_, std::string const &native_provider_, object_ptr<dataJSON> &&native_params_, object_ptr<paymentRequestedInfo> &&saved_info_, object_ptr<paymentSavedCredentialsCard> &&saved_credentials_, std::vector<object_ptr<User>> &&users_);

  static const std::int32_t ID = 1062645411;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<payments_paymentForm> fetch(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class payments_paymentReceipt final : public Object {
 public:
  std::int32_t flags_;
  std::int32_t date_;
  std::int32_t bot_id_;
  object_ptr<invoice> invoice_;
  std::int32_t provider_id_;
  object_ptr<paymentRequestedInfo> info_;
  object_ptr<shippingOption> shipping_;
  std::string currency_;
  std::int64_t total_amount_;
  std::string credentials_title_;
  std::vector<object_ptr<User>> users_;
  enum Flags : std::int32_t {INFO_MASK = 1, SHIPPING_MASK = 2};

  payments_paymentReceipt();

  payments_paymentReceipt(std::int32_t flags_, std::int32_t date_, std::int32_t bot_id_, object_ptr<invoice> &&invoice_, std::int32_t provider_id_, object_ptr<paymentRequestedInfo> &&info_, object_ptr<shippingOption> &&shipping_, std::string const &currency_, std::int64_t total_amount_, std::string const &credentials_title_, std::vector<object_ptr<User>> &&users_);

  static const std::int32_t ID = 1342771681;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<payments_paymentReceipt> fetch(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class payments_PaymentResult: public Object {
 public:

  static object_ptr<payments_PaymentResult> fetch(TlBufferParser &p);
};

class payments_paymentResult final : public payments_PaymentResult {
 public:
  object_ptr<Updates> updates_;

  payments_paymentResult();

  explicit payments_paymentResult(object_ptr<Updates> &&updates_);

  static const std::int32_t ID = 1314881805;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<payments_paymentResult> fetch(TlBufferParser &p) {
    return make_tl_object<payments_paymentResult>(p);
  }

  explicit payments_paymentResult(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class payments_paymentVerficationNeeded final : public payments_PaymentResult {
 public:
  std::string url_;

  payments_paymentVerficationNeeded();

  explicit payments_paymentVerficationNeeded(std::string const &url_);

  static const std::int32_t ID = 1800845601;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<payments_paymentVerficationNeeded> fetch(TlBufferParser &p) {
    return make_tl_object<payments_paymentVerficationNeeded>(p);
  }

  explicit payments_paymentVerficationNeeded(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class payments_savedInfo final : public Object {
 public:
  std::int32_t flags_;
  bool has_saved_credentials_;
  object_ptr<paymentRequestedInfo> saved_info_;
  enum Flags : std::int32_t {HAS_SAVED_CREDENTIALS_MASK = 2, SAVED_INFO_MASK = 1};

  payments_savedInfo();

  payments_savedInfo(std::int32_t flags_, bool has_saved_credentials_, object_ptr<paymentRequestedInfo> &&saved_info_);

  static const std::int32_t ID = -74456004;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<payments_savedInfo> fetch(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class payments_validatedRequestedInfo final : public Object {
 public:
  std::int32_t flags_;
  std::string id_;
  std::vector<object_ptr<shippingOption>> shipping_options_;
  enum Flags : std::int32_t {ID_MASK = 1, SHIPPING_OPTIONS_MASK = 2};

  payments_validatedRequestedInfo();

  payments_validatedRequestedInfo(std::int32_t flags_, std::string const &id_, std::vector<object_ptr<shippingOption>> &&shipping_options_);

  static const std::int32_t ID = -784000893;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<payments_validatedRequestedInfo> fetch(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class phone_phoneCall final : public Object {
 public:
  object_ptr<PhoneCall> phone_call_;
  std::vector<object_ptr<User>> users_;

  phone_phoneCall();

  phone_phoneCall(object_ptr<PhoneCall> &&phone_call_, std::vector<object_ptr<User>> &&users_);

  static const std::int32_t ID = -326966976;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<phone_phoneCall> fetch(TlBufferParser &p) {
    return make_tl_object<phone_phoneCall>(p);
  }

  explicit phone_phoneCall(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class photos_photo final : public Object {
 public:
  object_ptr<Photo> photo_;
  std::vector<object_ptr<User>> users_;

  photos_photo();

  photos_photo(object_ptr<Photo> &&photo_, std::vector<object_ptr<User>> &&users_);

  static const std::int32_t ID = 539045032;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<photos_photo> fetch(TlBufferParser &p) {
    return make_tl_object<photos_photo>(p);
  }

  explicit photos_photo(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class photos_Photos: public Object {
 public:

  static object_ptr<photos_Photos> fetch(TlBufferParser &p);
};

class photos_photos final : public photos_Photos {
 public:
  std::vector<object_ptr<Photo>> photos_;
  std::vector<object_ptr<User>> users_;

  photos_photos();

  photos_photos(std::vector<object_ptr<Photo>> &&photos_, std::vector<object_ptr<User>> &&users_);

  static const std::int32_t ID = -1916114267;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<photos_photos> fetch(TlBufferParser &p) {
    return make_tl_object<photos_photos>(p);
  }

  explicit photos_photos(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class photos_photosSlice final : public photos_Photos {
 public:
  std::int32_t count_;
  std::vector<object_ptr<Photo>> photos_;
  std::vector<object_ptr<User>> users_;

  photos_photosSlice();

  photos_photosSlice(std::int32_t count_, std::vector<object_ptr<Photo>> &&photos_, std::vector<object_ptr<User>> &&users_);

  static const std::int32_t ID = 352657236;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<photos_photosSlice> fetch(TlBufferParser &p) {
    return make_tl_object<photos_photosSlice>(p);
  }

  explicit photos_photosSlice(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class storage_FileType: public Object {
 public:

  static object_ptr<storage_FileType> fetch(TlBufferParser &p);
};

class storage_fileUnknown final : public storage_FileType {
 public:

  storage_fileUnknown();

  static const std::int32_t ID = -1432995067;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<storage_fileUnknown> fetch(TlBufferParser &p) {
    return make_tl_object<storage_fileUnknown>(p);
  }

  explicit storage_fileUnknown(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class storage_filePartial final : public storage_FileType {
 public:

  storage_filePartial();

  static const std::int32_t ID = 1086091090;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<storage_filePartial> fetch(TlBufferParser &p) {
    return make_tl_object<storage_filePartial>(p);
  }

  explicit storage_filePartial(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class storage_fileJpeg final : public storage_FileType {
 public:

  storage_fileJpeg();

  static const std::int32_t ID = 8322574;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<storage_fileJpeg> fetch(TlBufferParser &p) {
    return make_tl_object<storage_fileJpeg>(p);
  }

  explicit storage_fileJpeg(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class storage_fileGif final : public storage_FileType {
 public:

  storage_fileGif();

  static const std::int32_t ID = -891180321;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<storage_fileGif> fetch(TlBufferParser &p) {
    return make_tl_object<storage_fileGif>(p);
  }

  explicit storage_fileGif(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class storage_filePng final : public storage_FileType {
 public:

  storage_filePng();

  static const std::int32_t ID = 172975040;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<storage_filePng> fetch(TlBufferParser &p) {
    return make_tl_object<storage_filePng>(p);
  }

  explicit storage_filePng(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class storage_filePdf final : public storage_FileType {
 public:

  storage_filePdf();

  static const std::int32_t ID = -1373745011;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<storage_filePdf> fetch(TlBufferParser &p) {
    return make_tl_object<storage_filePdf>(p);
  }

  explicit storage_filePdf(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class storage_fileMp3 final : public storage_FileType {
 public:

  storage_fileMp3();

  static const std::int32_t ID = 1384777335;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<storage_fileMp3> fetch(TlBufferParser &p) {
    return make_tl_object<storage_fileMp3>(p);
  }

  explicit storage_fileMp3(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class storage_fileMov final : public storage_FileType {
 public:

  storage_fileMov();

  static const std::int32_t ID = 1258941372;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<storage_fileMov> fetch(TlBufferParser &p) {
    return make_tl_object<storage_fileMov>(p);
  }

  explicit storage_fileMov(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class storage_fileMp4 final : public storage_FileType {
 public:

  storage_fileMp4();

  static const std::int32_t ID = -1278304028;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<storage_fileMp4> fetch(TlBufferParser &p) {
    return make_tl_object<storage_fileMp4>(p);
  }

  explicit storage_fileMp4(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class storage_fileWebp final : public storage_FileType {
 public:

  storage_fileWebp();

  static const std::int32_t ID = 276907596;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<storage_fileWebp> fetch(TlBufferParser &p) {
    return make_tl_object<storage_fileWebp>(p);
  }

  explicit storage_fileWebp(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class updates_ChannelDifference: public Object {
 public:

  static object_ptr<updates_ChannelDifference> fetch(TlBufferParser &p);
};

class updates_channelDifferenceEmpty final : public updates_ChannelDifference {
 public:
  std::int32_t flags_;
  bool final_;
  std::int32_t pts_;
  std::int32_t timeout_;
  enum Flags : std::int32_t {FINAL_MASK = 1, TIMEOUT_MASK = 2};

  updates_channelDifferenceEmpty();

  updates_channelDifferenceEmpty(std::int32_t flags_, bool final_, std::int32_t pts_, std::int32_t timeout_);

  static const std::int32_t ID = 1041346555;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<updates_channelDifferenceEmpty> fetch(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class updates_channelDifferenceTooLong final : public updates_ChannelDifference {
 public:
  std::int32_t flags_;
  bool final_;
  std::int32_t pts_;
  std::int32_t timeout_;
  std::int32_t top_message_;
  std::int32_t read_inbox_max_id_;
  std::int32_t read_outbox_max_id_;
  std::int32_t unread_count_;
  std::int32_t unread_mentions_count_;
  std::vector<object_ptr<Message>> messages_;
  std::vector<object_ptr<Chat>> chats_;
  std::vector<object_ptr<User>> users_;
  enum Flags : std::int32_t {FINAL_MASK = 1, TIMEOUT_MASK = 2};

  updates_channelDifferenceTooLong();

  updates_channelDifferenceTooLong(std::int32_t flags_, bool final_, std::int32_t pts_, std::int32_t timeout_, std::int32_t top_message_, std::int32_t read_inbox_max_id_, std::int32_t read_outbox_max_id_, std::int32_t unread_count_, std::int32_t unread_mentions_count_, std::vector<object_ptr<Message>> &&messages_, std::vector<object_ptr<Chat>> &&chats_, std::vector<object_ptr<User>> &&users_);

  static const std::int32_t ID = 1788705589;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<updates_channelDifferenceTooLong> fetch(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class updates_channelDifference final : public updates_ChannelDifference {
 public:
  std::int32_t flags_;
  bool final_;
  std::int32_t pts_;
  std::int32_t timeout_;
  std::vector<object_ptr<Message>> new_messages_;
  std::vector<object_ptr<Update>> other_updates_;
  std::vector<object_ptr<Chat>> chats_;
  std::vector<object_ptr<User>> users_;
  enum Flags : std::int32_t {FINAL_MASK = 1, TIMEOUT_MASK = 2};

  updates_channelDifference();

  updates_channelDifference(std::int32_t flags_, bool final_, std::int32_t pts_, std::int32_t timeout_, std::vector<object_ptr<Message>> &&new_messages_, std::vector<object_ptr<Update>> &&other_updates_, std::vector<object_ptr<Chat>> &&chats_, std::vector<object_ptr<User>> &&users_);

  static const std::int32_t ID = 543450958;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<updates_channelDifference> fetch(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class updates_Difference: public Object {
 public:

  static object_ptr<updates_Difference> fetch(TlBufferParser &p);
};

class updates_differenceEmpty final : public updates_Difference {
 public:
  std::int32_t date_;
  std::int32_t seq_;

  updates_differenceEmpty();

  updates_differenceEmpty(std::int32_t date_, std::int32_t seq_);

  static const std::int32_t ID = 1567990072;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<updates_differenceEmpty> fetch(TlBufferParser &p) {
    return make_tl_object<updates_differenceEmpty>(p);
  }

  explicit updates_differenceEmpty(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class updates_difference final : public updates_Difference {
 public:
  std::vector<object_ptr<Message>> new_messages_;
  std::vector<object_ptr<EncryptedMessage>> new_encrypted_messages_;
  std::vector<object_ptr<Update>> other_updates_;
  std::vector<object_ptr<Chat>> chats_;
  std::vector<object_ptr<User>> users_;
  object_ptr<updates_state> state_;

  updates_difference();

  updates_difference(std::vector<object_ptr<Message>> &&new_messages_, std::vector<object_ptr<EncryptedMessage>> &&new_encrypted_messages_, std::vector<object_ptr<Update>> &&other_updates_, std::vector<object_ptr<Chat>> &&chats_, std::vector<object_ptr<User>> &&users_, object_ptr<updates_state> &&state_);

  static const std::int32_t ID = 16030880;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<updates_difference> fetch(TlBufferParser &p) {
    return make_tl_object<updates_difference>(p);
  }

  explicit updates_difference(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class updates_differenceSlice final : public updates_Difference {
 public:
  std::vector<object_ptr<Message>> new_messages_;
  std::vector<object_ptr<EncryptedMessage>> new_encrypted_messages_;
  std::vector<object_ptr<Update>> other_updates_;
  std::vector<object_ptr<Chat>> chats_;
  std::vector<object_ptr<User>> users_;
  object_ptr<updates_state> intermediate_state_;

  updates_differenceSlice();

  updates_differenceSlice(std::vector<object_ptr<Message>> &&new_messages_, std::vector<object_ptr<EncryptedMessage>> &&new_encrypted_messages_, std::vector<object_ptr<Update>> &&other_updates_, std::vector<object_ptr<Chat>> &&chats_, std::vector<object_ptr<User>> &&users_, object_ptr<updates_state> &&intermediate_state_);

  static const std::int32_t ID = -1459938943;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<updates_differenceSlice> fetch(TlBufferParser &p) {
    return make_tl_object<updates_differenceSlice>(p);
  }

  explicit updates_differenceSlice(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class updates_differenceTooLong final : public updates_Difference {
 public:
  std::int32_t pts_;

  updates_differenceTooLong();

  explicit updates_differenceTooLong(std::int32_t pts_);

  static const std::int32_t ID = 1258196845;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<updates_differenceTooLong> fetch(TlBufferParser &p) {
    return make_tl_object<updates_differenceTooLong>(p);
  }

  explicit updates_differenceTooLong(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class updates_state final : public Object {
 public:
  std::int32_t pts_;
  std::int32_t qts_;
  std::int32_t date_;
  std::int32_t seq_;
  std::int32_t unread_count_;

  updates_state();

  updates_state(std::int32_t pts_, std::int32_t qts_, std::int32_t date_, std::int32_t seq_, std::int32_t unread_count_);

  static const std::int32_t ID = -1519637954;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<updates_state> fetch(TlBufferParser &p) {
    return make_tl_object<updates_state>(p);
  }

  explicit updates_state(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class upload_CdnFile: public Object {
 public:

  static object_ptr<upload_CdnFile> fetch(TlBufferParser &p);
};

class upload_cdnFileReuploadNeeded final : public upload_CdnFile {
 public:
  BufferSlice request_token_;

  upload_cdnFileReuploadNeeded();

  explicit upload_cdnFileReuploadNeeded(BufferSlice &&request_token_);

  static const std::int32_t ID = -290921362;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<upload_cdnFileReuploadNeeded> fetch(TlBufferParser &p) {
    return make_tl_object<upload_cdnFileReuploadNeeded>(p);
  }

  explicit upload_cdnFileReuploadNeeded(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class upload_cdnFile final : public upload_CdnFile {
 public:
  BufferSlice bytes_;

  upload_cdnFile();

  explicit upload_cdnFile(BufferSlice &&bytes_);

  static const std::int32_t ID = -1449145777;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<upload_cdnFile> fetch(TlBufferParser &p) {
    return make_tl_object<upload_cdnFile>(p);
  }

  explicit upload_cdnFile(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class upload_File: public Object {
 public:

  static object_ptr<upload_File> fetch(TlBufferParser &p);
};

class upload_file final : public upload_File {
 public:
  object_ptr<storage_FileType> type_;
  std::int32_t mtime_;
  BufferSlice bytes_;

  upload_file();

  upload_file(object_ptr<storage_FileType> &&type_, std::int32_t mtime_, BufferSlice &&bytes_);

  static const std::int32_t ID = 157948117;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<upload_file> fetch(TlBufferParser &p) {
    return make_tl_object<upload_file>(p);
  }

  explicit upload_file(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class upload_fileCdnRedirect final : public upload_File {
 public:
  std::int32_t dc_id_;
  BufferSlice file_token_;
  BufferSlice encryption_key_;
  BufferSlice encryption_iv_;
  std::vector<object_ptr<fileHash>> file_hashes_;

  upload_fileCdnRedirect();

  upload_fileCdnRedirect(std::int32_t dc_id_, BufferSlice &&file_token_, BufferSlice &&encryption_key_, BufferSlice &&encryption_iv_, std::vector<object_ptr<fileHash>> &&file_hashes_);

  static const std::int32_t ID = -242427324;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<upload_fileCdnRedirect> fetch(TlBufferParser &p) {
    return make_tl_object<upload_fileCdnRedirect>(p);
  }

  explicit upload_fileCdnRedirect(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class upload_webFile final : public Object {
 public:
  std::int32_t size_;
  std::string mime_type_;
  object_ptr<storage_FileType> file_type_;
  std::int32_t mtime_;
  BufferSlice bytes_;

  upload_webFile();

  upload_webFile(std::int32_t size_, std::string const &mime_type_, object_ptr<storage_FileType> &&file_type_, std::int32_t mtime_, BufferSlice &&bytes_);

  static const std::int32_t ID = 568808380;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<upload_webFile> fetch(TlBufferParser &p) {
    return make_tl_object<upload_webFile>(p);
  }

  explicit upload_webFile(TlBufferParser &p);

  void store(TlStorerToString &s, const char *field_name) const final;
};

class account_acceptAuthorization final : public Function {
 public:
  std::int32_t bot_id_;
  std::string scope_;
  std::string public_key_;
  std::vector<object_ptr<secureValueHash>> value_hashes_;
  object_ptr<secureCredentialsEncrypted> credentials_;

  account_acceptAuthorization();

  account_acceptAuthorization(std::int32_t bot_id_, std::string const &scope_, std::string const &public_key_, std::vector<object_ptr<secureValueHash>> &&value_hashes_, object_ptr<secureCredentialsEncrypted> &&credentials_);

  static const std::int32_t ID = -419267436;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = bool;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class account_changePhone final : public Function {
 public:
  std::string phone_number_;
  std::string phone_code_hash_;
  std::string phone_code_;

  account_changePhone();

  account_changePhone(std::string const &phone_number_, std::string const &phone_code_hash_, std::string const &phone_code_);

  static const std::int32_t ID = 1891839707;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = object_ptr<User>;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class account_checkUsername final : public Function {
 public:
  std::string username_;

  account_checkUsername();

  explicit account_checkUsername(std::string const &username_);

  static const std::int32_t ID = 655677548;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = bool;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class account_confirmPhone final : public Function {
 public:
  std::string phone_code_hash_;
  std::string phone_code_;

  account_confirmPhone();

  account_confirmPhone(std::string const &phone_code_hash_, std::string const &phone_code_);

  static const std::int32_t ID = 1596029123;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = bool;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class account_deleteAccount final : public Function {
 public:
  std::string reason_;

  account_deleteAccount();

  explicit account_deleteAccount(std::string const &reason_);

  static const std::int32_t ID = 1099779595;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = bool;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class account_deleteSecureValue final : public Function {
 public:
  std::vector<object_ptr<SecureValueType>> types_;

  account_deleteSecureValue();

  explicit account_deleteSecureValue(std::vector<object_ptr<SecureValueType>> &&types_);

  static const std::int32_t ID = -1199522741;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = bool;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class account_finishTakeoutSession final : public Function {
 public:
  std::int32_t flags_;
  bool success_;
  enum Flags : std::int32_t {SUCCESS_MASK = 1};
  mutable std::int32_t var0;

  account_finishTakeoutSession();

  account_finishTakeoutSession(std::int32_t flags_, bool success_);

  static const std::int32_t ID = 489050862;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = bool;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class account_getAccountTTL final : public Function {
 public:

  account_getAccountTTL();

  static const std::int32_t ID = 150761757;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = object_ptr<accountDaysTTL>;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class account_getAllSecureValues final : public Function {
 public:

  account_getAllSecureValues();

  static const std::int32_t ID = -1299661699;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = std::vector<object_ptr<secureValue>>;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class account_getAuthorizationForm final : public Function {
 public:
  std::int32_t bot_id_;
  std::string scope_;
  std::string public_key_;

  account_getAuthorizationForm();

  account_getAuthorizationForm(std::int32_t bot_id_, std::string const &scope_, std::string const &public_key_);

  static const std::int32_t ID = -1200903967;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = object_ptr<account_authorizationForm>;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class account_getAuthorizations final : public Function {
 public:

  account_getAuthorizations();

  static const std::int32_t ID = -484392616;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = object_ptr<account_authorizations>;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class account_getNotifySettings final : public Function {
 public:
  object_ptr<InputNotifyPeer> peer_;

  account_getNotifySettings();

  explicit account_getNotifySettings(object_ptr<InputNotifyPeer> &&peer_);

  static const std::int32_t ID = 313765169;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = object_ptr<peerNotifySettings>;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class account_getPassword final : public Function {
 public:

  account_getPassword();

  static const std::int32_t ID = 1418342645;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = object_ptr<account_password>;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class account_getPasswordSettings final : public Function {
 public:
  object_ptr<InputCheckPasswordSRP> password_;

  account_getPasswordSettings();

  explicit account_getPasswordSettings(object_ptr<InputCheckPasswordSRP> &&password_);

  static const std::int32_t ID = -1663767815;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = object_ptr<account_passwordSettings>;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class account_getPrivacy final : public Function {
 public:
  object_ptr<InputPrivacyKey> key_;

  account_getPrivacy();

  explicit account_getPrivacy(object_ptr<InputPrivacyKey> &&key_);

  static const std::int32_t ID = -623130288;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = object_ptr<account_privacyRules>;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class account_getSecureValue final : public Function {
 public:
  std::vector<object_ptr<SecureValueType>> types_;

  account_getSecureValue();

  explicit account_getSecureValue(std::vector<object_ptr<SecureValueType>> &&types_);

  static const std::int32_t ID = 1936088002;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = std::vector<object_ptr<secureValue>>;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class account_getTmpPassword final : public Function {
 public:
  object_ptr<InputCheckPasswordSRP> password_;
  std::int32_t period_;

  account_getTmpPassword();

  account_getTmpPassword(object_ptr<InputCheckPasswordSRP> &&password_, std::int32_t period_);

  static const std::int32_t ID = 1151208273;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = object_ptr<account_tmpPassword>;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class account_getWallPapers final : public Function {
 public:

  account_getWallPapers();

  static const std::int32_t ID = -1068696894;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = std::vector<object_ptr<WallPaper>>;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class account_getWebAuthorizations final : public Function {
 public:

  account_getWebAuthorizations();

  static const std::int32_t ID = 405695855;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = object_ptr<account_webAuthorizations>;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class account_initTakeoutSession final : public Function {
 public:
  std::int32_t flags_;
  bool contacts_;
  bool message_users_;
  bool message_chats_;
  bool message_megagroups_;
  bool message_channels_;
  bool files_;
  std::int32_t file_max_size_;
  enum Flags : std::int32_t {CONTACTS_MASK = 1, MESSAGE_USERS_MASK = 2, MESSAGE_CHATS_MASK = 4, MESSAGE_MEGAGROUPS_MASK = 8, MESSAGE_CHANNELS_MASK = 16, FILES_MASK = 32, FILE_MAX_SIZE_MASK = 32};
  mutable std::int32_t var0;

  account_initTakeoutSession();

  account_initTakeoutSession(std::int32_t flags_, bool contacts_, bool message_users_, bool message_chats_, bool message_megagroups_, bool message_channels_, bool files_, std::int32_t file_max_size_);

  static const std::int32_t ID = -262453244;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = object_ptr<account_takeout>;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class account_registerDevice final : public Function {
 public:
  std::int32_t token_type_;
  std::string token_;
  bool app_sandbox_;
  BufferSlice secret_;
  std::vector<std::int32_t> other_uids_;

  account_registerDevice();

  account_registerDevice(std::int32_t token_type_, std::string const &token_, bool app_sandbox_, BufferSlice &&secret_, std::vector<std::int32_t> &&other_uids_);

  static const std::int32_t ID = 1555998096;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = bool;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class account_reportPeer final : public Function {
 public:
  object_ptr<InputPeer> peer_;
  object_ptr<ReportReason> reason_;

  account_reportPeer();

  account_reportPeer(object_ptr<InputPeer> &&peer_, object_ptr<ReportReason> &&reason_);

  static const std::int32_t ID = -1374118561;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = bool;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class account_resetAuthorization final : public Function {
 public:
  std::int64_t hash_;

  account_resetAuthorization();

  explicit account_resetAuthorization(std::int64_t hash_);

  static const std::int32_t ID = -545786948;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = bool;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class account_resetNotifySettings final : public Function {
 public:

  account_resetNotifySettings();

  static const std::int32_t ID = -612493497;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = bool;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class account_resetWebAuthorization final : public Function {
 public:
  std::int64_t hash_;

  account_resetWebAuthorization();

  explicit account_resetWebAuthorization(std::int64_t hash_);

  static const std::int32_t ID = 755087855;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = bool;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class account_resetWebAuthorizations final : public Function {
 public:

  account_resetWebAuthorizations();

  static const std::int32_t ID = 1747789204;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = bool;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class account_saveSecureValue final : public Function {
 public:
  object_ptr<inputSecureValue> value_;
  std::int64_t secure_secret_id_;

  account_saveSecureValue();

  account_saveSecureValue(object_ptr<inputSecureValue> &&value_, std::int64_t secure_secret_id_);

  static const std::int32_t ID = -1986010339;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = object_ptr<secureValue>;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class account_sendChangePhoneCode final : public Function {
 public:
  std::int32_t flags_;
  bool allow_flashcall_;
  std::string phone_number_;
  bool current_number_;
  enum Flags : std::int32_t {ALLOW_FLASHCALL_MASK = 1, CURRENT_NUMBER_MASK = 1};
  mutable std::int32_t var0;

  account_sendChangePhoneCode();

  account_sendChangePhoneCode(std::int32_t flags_, bool allow_flashcall_, std::string const &phone_number_, bool current_number_);

  static const std::int32_t ID = 149257707;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = object_ptr<auth_sentCode>;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class account_sendConfirmPhoneCode final : public Function {
 public:
  std::int32_t flags_;
  bool allow_flashcall_;
  std::string hash_;
  bool current_number_;
  enum Flags : std::int32_t {ALLOW_FLASHCALL_MASK = 1, CURRENT_NUMBER_MASK = 1};
  mutable std::int32_t var0;

  account_sendConfirmPhoneCode();

  account_sendConfirmPhoneCode(std::int32_t flags_, bool allow_flashcall_, std::string const &hash_, bool current_number_);

  static const std::int32_t ID = 353818557;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = object_ptr<auth_sentCode>;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class account_sendVerifyEmailCode final : public Function {
 public:
  std::string email_;

  account_sendVerifyEmailCode();

  explicit account_sendVerifyEmailCode(std::string const &email_);

  static const std::int32_t ID = 1880182943;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = object_ptr<account_sentEmailCode>;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class account_sendVerifyPhoneCode final : public Function {
 public:
  std::int32_t flags_;
  bool allow_flashcall_;
  std::string phone_number_;
  bool current_number_;
  enum Flags : std::int32_t {ALLOW_FLASHCALL_MASK = 1, CURRENT_NUMBER_MASK = 1};
  mutable std::int32_t var0;

  account_sendVerifyPhoneCode();

  account_sendVerifyPhoneCode(std::int32_t flags_, bool allow_flashcall_, std::string const &phone_number_, bool current_number_);

  static const std::int32_t ID = -2110553932;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = object_ptr<auth_sentCode>;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class account_setAccountTTL final : public Function {
 public:
  object_ptr<accountDaysTTL> ttl_;

  account_setAccountTTL();

  explicit account_setAccountTTL(object_ptr<accountDaysTTL> &&ttl_);

  static const std::int32_t ID = 608323678;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = bool;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class account_setPrivacy final : public Function {
 public:
  object_ptr<InputPrivacyKey> key_;
  std::vector<object_ptr<InputPrivacyRule>> rules_;

  account_setPrivacy();

  account_setPrivacy(object_ptr<InputPrivacyKey> &&key_, std::vector<object_ptr<InputPrivacyRule>> &&rules_);

  static const std::int32_t ID = -906486552;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = object_ptr<account_privacyRules>;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class account_unregisterDevice final : public Function {
 public:
  std::int32_t token_type_;
  std::string token_;
  std::vector<std::int32_t> other_uids_;

  account_unregisterDevice();

  account_unregisterDevice(std::int32_t token_type_, std::string const &token_, std::vector<std::int32_t> &&other_uids_);

  static const std::int32_t ID = 813089983;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = bool;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class account_updateDeviceLocked final : public Function {
 public:
  std::int32_t period_;

  account_updateDeviceLocked();

  explicit account_updateDeviceLocked(std::int32_t period_);

  static const std::int32_t ID = 954152242;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = bool;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class account_updateNotifySettings final : public Function {
 public:
  object_ptr<InputNotifyPeer> peer_;
  object_ptr<inputPeerNotifySettings> settings_;

  account_updateNotifySettings();

  account_updateNotifySettings(object_ptr<InputNotifyPeer> &&peer_, object_ptr<inputPeerNotifySettings> &&settings_);

  static const std::int32_t ID = -2067899501;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = bool;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class account_updatePasswordSettings final : public Function {
 public:
  object_ptr<InputCheckPasswordSRP> password_;
  object_ptr<account_passwordInputSettings> new_settings_;

  account_updatePasswordSettings();

  account_updatePasswordSettings(object_ptr<InputCheckPasswordSRP> &&password_, object_ptr<account_passwordInputSettings> &&new_settings_);

  static const std::int32_t ID = -1516564433;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = bool;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class account_updateProfile final : public Function {
 public:
  std::int32_t flags_;
  std::string first_name_;
  std::string last_name_;
  std::string about_;
  enum Flags : std::int32_t {FIRST_NAME_MASK = 1, LAST_NAME_MASK = 2, ABOUT_MASK = 4};
  mutable std::int32_t var0;

  account_updateProfile();

  account_updateProfile(std::int32_t flags_, std::string const &first_name_, std::string const &last_name_, std::string const &about_);

  static const std::int32_t ID = 2018596725;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = object_ptr<User>;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class account_updateStatus final : public Function {
 public:
  bool offline_;

  account_updateStatus();

  explicit account_updateStatus(bool offline_);

  static const std::int32_t ID = 1713919532;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = bool;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class account_updateUsername final : public Function {
 public:
  std::string username_;

  account_updateUsername();

  explicit account_updateUsername(std::string const &username_);

  static const std::int32_t ID = 1040964988;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = object_ptr<User>;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class account_verifyEmail final : public Function {
 public:
  std::string email_;
  std::string code_;

  account_verifyEmail();

  account_verifyEmail(std::string const &email_, std::string const &code_);

  static const std::int32_t ID = -323339813;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = bool;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class account_verifyPhone final : public Function {
 public:
  std::string phone_number_;
  std::string phone_code_hash_;
  std::string phone_code_;

  account_verifyPhone();

  account_verifyPhone(std::string const &phone_number_, std::string const &phone_code_hash_, std::string const &phone_code_);

  static const std::int32_t ID = 1305716726;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = bool;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class auth_bindTempAuthKey final : public Function {
 public:
  std::int64_t perm_auth_key_id_;
  std::int64_t nonce_;
  std::int32_t expires_at_;
  BufferSlice encrypted_message_;

  auth_bindTempAuthKey();

  auth_bindTempAuthKey(std::int64_t perm_auth_key_id_, std::int64_t nonce_, std::int32_t expires_at_, BufferSlice &&encrypted_message_);

  static const std::int32_t ID = -841733627;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = bool;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class auth_cancelCode final : public Function {
 public:
  std::string phone_number_;
  std::string phone_code_hash_;

  auth_cancelCode();

  auth_cancelCode(std::string const &phone_number_, std::string const &phone_code_hash_);

  static const std::int32_t ID = 520357240;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = bool;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class auth_checkPassword final : public Function {
 public:
  object_ptr<InputCheckPasswordSRP> password_;

  auth_checkPassword();

  explicit auth_checkPassword(object_ptr<InputCheckPasswordSRP> &&password_);

  static const std::int32_t ID = -779399914;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = object_ptr<auth_authorization>;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class auth_dropTempAuthKeys final : public Function {
 public:
  std::vector<std::int64_t> except_auth_keys_;

  auth_dropTempAuthKeys();

  explicit auth_dropTempAuthKeys(std::vector<std::int64_t> &&except_auth_keys_);

  static const std::int32_t ID = -1907842680;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = bool;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class auth_exportAuthorization final : public Function {
 public:
  std::int32_t dc_id_;

  auth_exportAuthorization();

  explicit auth_exportAuthorization(std::int32_t dc_id_);

  static const std::int32_t ID = -440401971;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = object_ptr<auth_exportedAuthorization>;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class auth_importAuthorization final : public Function {
 public:
  std::int32_t id_;
  BufferSlice bytes_;

  auth_importAuthorization();

  auth_importAuthorization(std::int32_t id_, BufferSlice &&bytes_);

  static const std::int32_t ID = -470837741;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = object_ptr<auth_authorization>;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class auth_importBotAuthorization final : public Function {
 public:
  std::int32_t flags_;
  std::int32_t api_id_;
  std::string api_hash_;
  std::string bot_auth_token_;

  auth_importBotAuthorization();

  auth_importBotAuthorization(std::int32_t flags_, std::int32_t api_id_, std::string const &api_hash_, std::string const &bot_auth_token_);

  static const std::int32_t ID = 1738800940;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = object_ptr<auth_authorization>;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class auth_logOut final : public Function {
 public:

  auth_logOut();

  static const std::int32_t ID = 1461180992;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = bool;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class auth_recoverPassword final : public Function {
 public:
  std::string code_;

  auth_recoverPassword();

  explicit auth_recoverPassword(std::string const &code_);

  static const std::int32_t ID = 1319464594;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = object_ptr<auth_authorization>;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class auth_requestPasswordRecovery final : public Function {
 public:

  auth_requestPasswordRecovery();

  static const std::int32_t ID = -661144474;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = object_ptr<auth_passwordRecovery>;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class auth_resendCode final : public Function {
 public:
  std::string phone_number_;
  std::string phone_code_hash_;

  auth_resendCode();

  auth_resendCode(std::string const &phone_number_, std::string const &phone_code_hash_);

  static const std::int32_t ID = 1056025023;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = object_ptr<auth_sentCode>;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class auth_resetAuthorizations final : public Function {
 public:

  auth_resetAuthorizations();

  static const std::int32_t ID = -1616179942;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = bool;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class auth_sendCode final : public Function {
 public:
  std::int32_t flags_;
  bool allow_flashcall_;
  std::string phone_number_;
  bool current_number_;
  std::int32_t api_id_;
  std::string api_hash_;
  enum Flags : std::int32_t {ALLOW_FLASHCALL_MASK = 1, CURRENT_NUMBER_MASK = 1};
  mutable std::int32_t var0;

  auth_sendCode();

  auth_sendCode(std::int32_t flags_, bool allow_flashcall_, std::string const &phone_number_, bool current_number_, std::int32_t api_id_, std::string const &api_hash_);

  static const std::int32_t ID = -2035355412;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = object_ptr<auth_sentCode>;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class auth_signIn final : public Function {
 public:
  std::string phone_number_;
  std::string phone_code_hash_;
  std::string phone_code_;

  auth_signIn();

  auth_signIn(std::string const &phone_number_, std::string const &phone_code_hash_, std::string const &phone_code_);

  static const std::int32_t ID = -1126886015;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = object_ptr<auth_authorization>;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class auth_signUp final : public Function {
 public:
  std::string phone_number_;
  std::string phone_code_hash_;
  std::string phone_code_;
  std::string first_name_;
  std::string last_name_;

  auth_signUp();

  auth_signUp(std::string const &phone_number_, std::string const &phone_code_hash_, std::string const &phone_code_, std::string const &first_name_, std::string const &last_name_);

  static const std::int32_t ID = 453408308;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = object_ptr<auth_authorization>;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class bots_answerWebhookJSONQuery final : public Function {
 public:
  std::int64_t query_id_;
  object_ptr<dataJSON> data_;

  bots_answerWebhookJSONQuery();

  bots_answerWebhookJSONQuery(std::int64_t query_id_, object_ptr<dataJSON> &&data_);

  static const std::int32_t ID = -434028723;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = bool;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class bots_sendCustomRequest final : public Function {
 public:
  std::string custom_method_;
  object_ptr<dataJSON> params_;

  bots_sendCustomRequest();

  bots_sendCustomRequest(std::string const &custom_method_, object_ptr<dataJSON> &&params_);

  static const std::int32_t ID = -1440257555;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = object_ptr<dataJSON>;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class channels_checkUsername final : public Function {
 public:
  object_ptr<InputChannel> channel_;
  std::string username_;

  channels_checkUsername();

  channels_checkUsername(object_ptr<InputChannel> &&channel_, std::string const &username_);

  static const std::int32_t ID = 283557164;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = bool;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class channels_createChannel final : public Function {
 public:
  std::int32_t flags_;
  bool broadcast_;
  bool megagroup_;
  std::string title_;
  std::string about_;
  enum Flags : std::int32_t {BROADCAST_MASK = 1, MEGAGROUP_MASK = 2};
  mutable std::int32_t var0;

  channels_createChannel();

  channels_createChannel(std::int32_t flags_, bool broadcast_, bool megagroup_, std::string const &title_, std::string const &about_);

  static const std::int32_t ID = -192332417;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = object_ptr<Updates>;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class channels_deleteChannel final : public Function {
 public:
  object_ptr<InputChannel> channel_;

  channels_deleteChannel();

  explicit channels_deleteChannel(object_ptr<InputChannel> &&channel_);

  static const std::int32_t ID = -1072619549;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = object_ptr<Updates>;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class channels_deleteHistory final : public Function {
 public:
  object_ptr<InputChannel> channel_;
  std::int32_t max_id_;

  channels_deleteHistory();

  channels_deleteHistory(object_ptr<InputChannel> &&channel_, std::int32_t max_id_);

  static const std::int32_t ID = -1355375294;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = bool;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class channels_deleteMessages final : public Function {
 public:
  object_ptr<InputChannel> channel_;
  std::vector<std::int32_t> id_;

  channels_deleteMessages();

  channels_deleteMessages(object_ptr<InputChannel> &&channel_, std::vector<std::int32_t> &&id_);

  static const std::int32_t ID = -2067661490;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = object_ptr<messages_affectedMessages>;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class channels_deleteUserHistory final : public Function {
 public:
  object_ptr<InputChannel> channel_;
  object_ptr<InputUser> user_id_;

  channels_deleteUserHistory();

  channels_deleteUserHistory(object_ptr<InputChannel> &&channel_, object_ptr<InputUser> &&user_id_);

  static const std::int32_t ID = -787622117;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = object_ptr<messages_affectedHistory>;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class channels_editAbout final : public Function {
 public:
  object_ptr<InputChannel> channel_;
  std::string about_;

  channels_editAbout();

  channels_editAbout(object_ptr<InputChannel> &&channel_, std::string const &about_);

  static const std::int32_t ID = 333610782;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = bool;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class channels_editAdmin final : public Function {
 public:
  object_ptr<InputChannel> channel_;
  object_ptr<InputUser> user_id_;
  object_ptr<channelAdminRights> admin_rights_;

  channels_editAdmin();

  channels_editAdmin(object_ptr<InputChannel> &&channel_, object_ptr<InputUser> &&user_id_, object_ptr<channelAdminRights> &&admin_rights_);

  static const std::int32_t ID = 548962836;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = object_ptr<Updates>;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class channels_editBanned final : public Function {
 public:
  object_ptr<InputChannel> channel_;
  object_ptr<InputUser> user_id_;
  object_ptr<channelBannedRights> banned_rights_;

  channels_editBanned();

  channels_editBanned(object_ptr<InputChannel> &&channel_, object_ptr<InputUser> &&user_id_, object_ptr<channelBannedRights> &&banned_rights_);

  static const std::int32_t ID = -1076292147;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = object_ptr<Updates>;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class channels_editPhoto final : public Function {
 public:
  object_ptr<InputChannel> channel_;
  object_ptr<InputChatPhoto> photo_;

  channels_editPhoto();

  channels_editPhoto(object_ptr<InputChannel> &&channel_, object_ptr<InputChatPhoto> &&photo_);

  static const std::int32_t ID = -248621111;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = object_ptr<Updates>;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class channels_editTitle final : public Function {
 public:
  object_ptr<InputChannel> channel_;
  std::string title_;

  channels_editTitle();

  channels_editTitle(object_ptr<InputChannel> &&channel_, std::string const &title_);

  static const std::int32_t ID = 1450044624;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = object_ptr<Updates>;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class channels_exportInvite final : public Function {
 public:
  object_ptr<InputChannel> channel_;

  channels_exportInvite();

  explicit channels_exportInvite(object_ptr<InputChannel> &&channel_);

  static const std::int32_t ID = -950663035;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = object_ptr<ExportedChatInvite>;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class channels_exportMessageLink final : public Function {
 public:
  object_ptr<InputChannel> channel_;
  std::int32_t id_;
  bool grouped_;

  channels_exportMessageLink();

  channels_exportMessageLink(object_ptr<InputChannel> &&channel_, std::int32_t id_, bool grouped_);

  static const std::int32_t ID = -826838685;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = object_ptr<exportedMessageLink>;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class channels_getAdminLog final : public Function {
 public:
  std::int32_t flags_;
  object_ptr<InputChannel> channel_;
  std::string q_;
  object_ptr<channelAdminLogEventsFilter> events_filter_;
  std::vector<object_ptr<InputUser>> admins_;
  std::int64_t max_id_;
  std::int64_t min_id_;
  std::int32_t limit_;
  enum Flags : std::int32_t {EVENTS_FILTER_MASK = 1, ADMINS_MASK = 2};
  mutable std::int32_t var0;

  channels_getAdminLog();

  channels_getAdminLog(std::int32_t flags_, object_ptr<InputChannel> &&channel_, std::string const &q_, object_ptr<channelAdminLogEventsFilter> &&events_filter_, std::vector<object_ptr<InputUser>> &&admins_, std::int64_t max_id_, std::int64_t min_id_, std::int32_t limit_);

  static const std::int32_t ID = 870184064;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = object_ptr<channels_adminLogResults>;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class channels_getAdminedPublicChannels final : public Function {
 public:

  channels_getAdminedPublicChannels();

  static const std::int32_t ID = -1920105769;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = object_ptr<messages_Chats>;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class channels_getChannels final : public Function {
 public:
  std::vector<object_ptr<InputChannel>> id_;

  channels_getChannels();

  explicit channels_getChannels(std::vector<object_ptr<InputChannel>> &&id_);

  static const std::int32_t ID = 176122811;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = object_ptr<messages_Chats>;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class channels_getFullChannel final : public Function {
 public:
  object_ptr<InputChannel> channel_;

  channels_getFullChannel();

  explicit channels_getFullChannel(object_ptr<InputChannel> &&channel_);

  static const std::int32_t ID = 141781513;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = object_ptr<messages_chatFull>;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class channels_getLeftChannels final : public Function {
 public:
  std::int32_t offset_;

  channels_getLeftChannels();

  explicit channels_getLeftChannels(std::int32_t offset_);

  static const std::int32_t ID = -2092831552;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = object_ptr<messages_Chats>;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class channels_getMessages final : public Function {
 public:
  object_ptr<InputChannel> channel_;
  std::vector<object_ptr<InputMessage>> id_;

  channels_getMessages();

  channels_getMessages(object_ptr<InputChannel> &&channel_, std::vector<object_ptr<InputMessage>> &&id_);

  static const std::int32_t ID = -1383294429;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = object_ptr<messages_Messages>;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class channels_getParticipant final : public Function {
 public:
  object_ptr<InputChannel> channel_;
  object_ptr<InputUser> user_id_;

  channels_getParticipant();

  channels_getParticipant(object_ptr<InputChannel> &&channel_, object_ptr<InputUser> &&user_id_);

  static const std::int32_t ID = 1416484774;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = object_ptr<channels_channelParticipant>;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class channels_getParticipants final : public Function {
 public:
  object_ptr<InputChannel> channel_;
  object_ptr<ChannelParticipantsFilter> filter_;
  std::int32_t offset_;
  std::int32_t limit_;
  std::int32_t hash_;

  channels_getParticipants();

  channels_getParticipants(object_ptr<InputChannel> &&channel_, object_ptr<ChannelParticipantsFilter> &&filter_, std::int32_t offset_, std::int32_t limit_, std::int32_t hash_);

  static const std::int32_t ID = 306054633;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = object_ptr<channels_ChannelParticipants>;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class channels_inviteToChannel final : public Function {
 public:
  object_ptr<InputChannel> channel_;
  std::vector<object_ptr<InputUser>> users_;

  channels_inviteToChannel();

  channels_inviteToChannel(object_ptr<InputChannel> &&channel_, std::vector<object_ptr<InputUser>> &&users_);

  static const std::int32_t ID = 429865580;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = object_ptr<Updates>;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class channels_joinChannel final : public Function {
 public:
  object_ptr<InputChannel> channel_;

  channels_joinChannel();

  explicit channels_joinChannel(object_ptr<InputChannel> &&channel_);

  static const std::int32_t ID = 615851205;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = object_ptr<Updates>;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class channels_leaveChannel final : public Function {
 public:
  object_ptr<InputChannel> channel_;

  channels_leaveChannel();

  explicit channels_leaveChannel(object_ptr<InputChannel> &&channel_);

  static const std::int32_t ID = -130635115;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = object_ptr<Updates>;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class channels_readHistory final : public Function {
 public:
  object_ptr<InputChannel> channel_;
  std::int32_t max_id_;

  channels_readHistory();

  channels_readHistory(object_ptr<InputChannel> &&channel_, std::int32_t max_id_);

  static const std::int32_t ID = -871347913;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = bool;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class channels_readMessageContents final : public Function {
 public:
  object_ptr<InputChannel> channel_;
  std::vector<std::int32_t> id_;

  channels_readMessageContents();

  channels_readMessageContents(object_ptr<InputChannel> &&channel_, std::vector<std::int32_t> &&id_);

  static const std::int32_t ID = -357180360;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = bool;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class channels_reportSpam final : public Function {
 public:
  object_ptr<InputChannel> channel_;
  object_ptr<InputUser> user_id_;
  std::vector<std::int32_t> id_;

  channels_reportSpam();

  channels_reportSpam(object_ptr<InputChannel> &&channel_, object_ptr<InputUser> &&user_id_, std::vector<std::int32_t> &&id_);

  static const std::int32_t ID = -32999408;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = bool;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class channels_setStickers final : public Function {
 public:
  object_ptr<InputChannel> channel_;
  object_ptr<InputStickerSet> stickerset_;

  channels_setStickers();

  channels_setStickers(object_ptr<InputChannel> &&channel_, object_ptr<InputStickerSet> &&stickerset_);

  static const std::int32_t ID = -359881479;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = bool;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class channels_toggleInvites final : public Function {
 public:
  object_ptr<InputChannel> channel_;
  bool enabled_;

  channels_toggleInvites();

  channels_toggleInvites(object_ptr<InputChannel> &&channel_, bool enabled_);

  static const std::int32_t ID = 1231065863;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = object_ptr<Updates>;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class channels_togglePreHistoryHidden final : public Function {
 public:
  object_ptr<InputChannel> channel_;
  bool enabled_;

  channels_togglePreHistoryHidden();

  channels_togglePreHistoryHidden(object_ptr<InputChannel> &&channel_, bool enabled_);

  static const std::int32_t ID = -356796084;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = object_ptr<Updates>;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class channels_toggleSignatures final : public Function {
 public:
  object_ptr<InputChannel> channel_;
  bool enabled_;

  channels_toggleSignatures();

  channels_toggleSignatures(object_ptr<InputChannel> &&channel_, bool enabled_);

  static const std::int32_t ID = 527021574;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = object_ptr<Updates>;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class channels_updatePinnedMessage final : public Function {
 public:
  std::int32_t flags_;
  bool silent_;
  object_ptr<InputChannel> channel_;
  std::int32_t id_;
  enum Flags : std::int32_t {SILENT_MASK = 1};
  mutable std::int32_t var0;

  channels_updatePinnedMessage();

  channels_updatePinnedMessage(std::int32_t flags_, bool silent_, object_ptr<InputChannel> &&channel_, std::int32_t id_);

  static const std::int32_t ID = -1490162350;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = object_ptr<Updates>;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class channels_updateUsername final : public Function {
 public:
  object_ptr<InputChannel> channel_;
  std::string username_;

  channels_updateUsername();

  channels_updateUsername(object_ptr<InputChannel> &&channel_, std::string const &username_);

  static const std::int32_t ID = 890549214;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = bool;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class contacts_block final : public Function {
 public:
  object_ptr<InputUser> id_;

  contacts_block();

  explicit contacts_block(object_ptr<InputUser> &&id_);

  static const std::int32_t ID = 858475004;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = bool;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class contacts_deleteContact final : public Function {
 public:
  object_ptr<InputUser> id_;

  contacts_deleteContact();

  explicit contacts_deleteContact(object_ptr<InputUser> &&id_);

  static const std::int32_t ID = -1902823612;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = object_ptr<contacts_link>;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class contacts_deleteContacts final : public Function {
 public:
  std::vector<object_ptr<InputUser>> id_;

  contacts_deleteContacts();

  explicit contacts_deleteContacts(std::vector<object_ptr<InputUser>> &&id_);

  static const std::int32_t ID = 1504393374;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = bool;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class contacts_exportCard final : public Function {
 public:

  contacts_exportCard();

  static const std::int32_t ID = -2065352905;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = std::vector<std::int32_t>;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class contacts_getBlocked final : public Function {
 public:
  std::int32_t offset_;
  std::int32_t limit_;

  contacts_getBlocked();

  contacts_getBlocked(std::int32_t offset_, std::int32_t limit_);

  static const std::int32_t ID = -176409329;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = object_ptr<contacts_Blocked>;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class contacts_getContacts final : public Function {
 public:
  std::int32_t hash_;

  contacts_getContacts();

  explicit contacts_getContacts(std::int32_t hash_);

  static const std::int32_t ID = -1071414113;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = object_ptr<contacts_Contacts>;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class contacts_getSaved final : public Function {
 public:

  contacts_getSaved();

  static const std::int32_t ID = -2098076769;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = std::vector<object_ptr<savedPhoneContact>>;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class contacts_getStatuses final : public Function {
 public:

  contacts_getStatuses();

  static const std::int32_t ID = -995929106;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = std::vector<object_ptr<contactStatus>>;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class contacts_getTopPeers final : public Function {
 public:
  std::int32_t flags_;
  bool correspondents_;
  bool bots_pm_;
  bool bots_inline_;
  bool phone_calls_;
  bool groups_;
  bool channels_;
  std::int32_t offset_;
  std::int32_t limit_;
  std::int32_t hash_;
  enum Flags : std::int32_t {CORRESPONDENTS_MASK = 1, BOTS_PM_MASK = 2, BOTS_INLINE_MASK = 4, PHONE_CALLS_MASK = 8, GROUPS_MASK = 1024, CHANNELS_MASK = 32768};
  mutable std::int32_t var0;

  contacts_getTopPeers();

  contacts_getTopPeers(std::int32_t flags_, bool correspondents_, bool bots_pm_, bool bots_inline_, bool phone_calls_, bool groups_, bool channels_, std::int32_t offset_, std::int32_t limit_, std::int32_t hash_);

  static const std::int32_t ID = -728224331;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = object_ptr<contacts_TopPeers>;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class contacts_importCard final : public Function {
 public:
  std::vector<std::int32_t> export_card_;

  contacts_importCard();

  explicit contacts_importCard(std::vector<std::int32_t> &&export_card_);

  static const std::int32_t ID = 1340184318;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = object_ptr<User>;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class contacts_importContacts final : public Function {
 public:
  std::vector<object_ptr<inputPhoneContact>> contacts_;

  contacts_importContacts();

  explicit contacts_importContacts(std::vector<object_ptr<inputPhoneContact>> &&contacts_);

  static const std::int32_t ID = 746589157;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = object_ptr<contacts_importedContacts>;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class contacts_resetSaved final : public Function {
 public:

  contacts_resetSaved();

  static const std::int32_t ID = -2020263951;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = bool;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class contacts_resetTopPeerRating final : public Function {
 public:
  object_ptr<TopPeerCategory> category_;
  object_ptr<InputPeer> peer_;

  contacts_resetTopPeerRating();

  contacts_resetTopPeerRating(object_ptr<TopPeerCategory> &&category_, object_ptr<InputPeer> &&peer_);

  static const std::int32_t ID = 451113900;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = bool;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class contacts_resolveUsername final : public Function {
 public:
  std::string username_;

  contacts_resolveUsername();

  explicit contacts_resolveUsername(std::string const &username_);

  static const std::int32_t ID = -113456221;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = object_ptr<contacts_resolvedPeer>;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class contacts_search final : public Function {
 public:
  std::string q_;
  std::int32_t limit_;

  contacts_search();

  contacts_search(std::string const &q_, std::int32_t limit_);

  static const std::int32_t ID = 301470424;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = object_ptr<contacts_found>;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class contacts_toggleTopPeers final : public Function {
 public:
  bool enabled_;

  contacts_toggleTopPeers();

  explicit contacts_toggleTopPeers(bool enabled_);

  static const std::int32_t ID = -2062238246;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = bool;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class contacts_unblock final : public Function {
 public:
  object_ptr<InputUser> id_;

  contacts_unblock();

  explicit contacts_unblock(object_ptr<InputUser> &&id_);

  static const std::int32_t ID = -448724803;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = bool;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class help_acceptTermsOfService final : public Function {
 public:
  object_ptr<dataJSON> id_;

  help_acceptTermsOfService();

  explicit help_acceptTermsOfService(object_ptr<dataJSON> &&id_);

  static const std::int32_t ID = -294455398;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = bool;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class help_getAppChangelog final : public Function {
 public:
  std::string prev_app_version_;

  help_getAppChangelog();

  explicit help_getAppChangelog(std::string const &prev_app_version_);

  static const std::int32_t ID = -1877938321;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = object_ptr<Updates>;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class help_getAppUpdate final : public Function {
 public:
  std::string source_;

  help_getAppUpdate();

  explicit help_getAppUpdate(std::string const &source_);

  static const std::int32_t ID = 1378703997;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = object_ptr<help_AppUpdate>;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class help_getCdnConfig final : public Function {
 public:

  help_getCdnConfig();

  static const std::int32_t ID = 1375900482;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = object_ptr<cdnConfig>;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class help_getConfig final : public Function {
 public:

  help_getConfig();

  static const std::int32_t ID = -990308245;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = object_ptr<config>;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class help_getDeepLinkInfo final : public Function {
 public:
  std::string path_;

  help_getDeepLinkInfo();

  explicit help_getDeepLinkInfo(std::string const &path_);

  static const std::int32_t ID = 1072547679;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = object_ptr<help_DeepLinkInfo>;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class help_getInviteText final : public Function {
 public:

  help_getInviteText();

  static const std::int32_t ID = 1295590211;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = object_ptr<help_inviteText>;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class help_getNearestDc final : public Function {
 public:

  help_getNearestDc();

  static const std::int32_t ID = 531836966;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = object_ptr<nearestDc>;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class help_getPassportConfig final : public Function {
 public:
  std::int32_t hash_;

  help_getPassportConfig();

  explicit help_getPassportConfig(std::int32_t hash_);

  static const std::int32_t ID = -966677240;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = object_ptr<help_PassportConfig>;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class help_getProxyData final : public Function {
 public:

  help_getProxyData();

  static const std::int32_t ID = 1031231713;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = object_ptr<help_ProxyData>;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class help_getRecentMeUrls final : public Function {
 public:
  std::string referer_;

  help_getRecentMeUrls();

  explicit help_getRecentMeUrls(std::string const &referer_);

  static const std::int32_t ID = 1036054804;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = object_ptr<help_recentMeUrls>;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class help_getSupport final : public Function {
 public:

  help_getSupport();

  static const std::int32_t ID = -1663104819;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = object_ptr<help_support>;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class help_getTermsOfServiceUpdate final : public Function {
 public:

  help_getTermsOfServiceUpdate();

  static const std::int32_t ID = 749019089;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = object_ptr<help_TermsOfServiceUpdate>;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class help_saveAppLog final : public Function {
 public:
  std::vector<object_ptr<inputAppEvent>> events_;

  help_saveAppLog();

  explicit help_saveAppLog(std::vector<object_ptr<inputAppEvent>> &&events_);

  static const std::int32_t ID = 1862465352;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = bool;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class help_setBotUpdatesStatus final : public Function {
 public:
  std::int32_t pending_updates_count_;
  std::string message_;

  help_setBotUpdatesStatus();

  help_setBotUpdatesStatus(std::int32_t pending_updates_count_, std::string const &message_);

  static const std::int32_t ID = -333262899;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = bool;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class langpack_getDifference final : public Function {
 public:
  std::int32_t from_version_;

  langpack_getDifference();

  explicit langpack_getDifference(std::int32_t from_version_);

  static const std::int32_t ID = 187583869;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = object_ptr<langPackDifference>;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class langpack_getLangPack final : public Function {
 public:
  std::string lang_pack_;
  std::string lang_code_;

  langpack_getLangPack();

  langpack_getLangPack(std::string const &lang_pack_, std::string const &lang_code_);

  static const std::int32_t ID = -219008246;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = object_ptr<langPackDifference>;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class langpack_getLanguages final : public Function {
 public:
  std::string lang_pack_;

  langpack_getLanguages();

  explicit langpack_getLanguages(std::string const &lang_pack_);

  static const std::int32_t ID = 1120311183;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = std::vector<object_ptr<langPackLanguage>>;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class langpack_getStrings final : public Function {
 public:
  std::string lang_pack_;
  std::string lang_code_;
  std::vector<std::string> keys_;

  langpack_getStrings();

  langpack_getStrings(std::string const &lang_pack_, std::string const &lang_code_, std::vector<std::string> &&keys_);

  static const std::int32_t ID = -269862909;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = std::vector<object_ptr<LangPackString>>;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class messages_acceptEncryption final : public Function {
 public:
  object_ptr<inputEncryptedChat> peer_;
  BufferSlice g_b_;
  std::int64_t key_fingerprint_;

  messages_acceptEncryption();

  messages_acceptEncryption(object_ptr<inputEncryptedChat> &&peer_, BufferSlice &&g_b_, std::int64_t key_fingerprint_);

  static const std::int32_t ID = 1035731989;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = object_ptr<EncryptedChat>;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class messages_addChatUser final : public Function {
 public:
  std::int32_t chat_id_;
  object_ptr<InputUser> user_id_;
  std::int32_t fwd_limit_;

  messages_addChatUser();

  messages_addChatUser(std::int32_t chat_id_, object_ptr<InputUser> &&user_id_, std::int32_t fwd_limit_);

  static const std::int32_t ID = -106911223;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = object_ptr<Updates>;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class messages_checkChatInvite final : public Function {
 public:
  std::string hash_;

  messages_checkChatInvite();

  explicit messages_checkChatInvite(std::string const &hash_);

  static const std::int32_t ID = 1051570619;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = object_ptr<ChatInvite>;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class messages_clearAllDrafts final : public Function {
 public:

  messages_clearAllDrafts();

  static const std::int32_t ID = 2119757468;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = bool;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class messages_clearRecentStickers final : public Function {
 public:
  std::int32_t flags_;
  bool attached_;
  enum Flags : std::int32_t {ATTACHED_MASK = 1};
  mutable std::int32_t var0;

  messages_clearRecentStickers();

  messages_clearRecentStickers(std::int32_t flags_, bool attached_);

  static const std::int32_t ID = -1986437075;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = bool;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class messages_createChat final : public Function {
 public:
  std::vector<object_ptr<InputUser>> users_;
  std::string title_;

  messages_createChat();

  messages_createChat(std::vector<object_ptr<InputUser>> &&users_, std::string const &title_);

  static const std::int32_t ID = 164303470;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = object_ptr<Updates>;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class messages_deleteChatUser final : public Function {
 public:
  std::int32_t chat_id_;
  object_ptr<InputUser> user_id_;

  messages_deleteChatUser();

  messages_deleteChatUser(std::int32_t chat_id_, object_ptr<InputUser> &&user_id_);

  static const std::int32_t ID = -530505962;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = object_ptr<Updates>;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class messages_deleteHistory final : public Function {
 public:
  std::int32_t flags_;
  bool just_clear_;
  object_ptr<InputPeer> peer_;
  std::int32_t max_id_;
  enum Flags : std::int32_t {JUST_CLEAR_MASK = 1};
  mutable std::int32_t var0;

  messages_deleteHistory();

  messages_deleteHistory(std::int32_t flags_, bool just_clear_, object_ptr<InputPeer> &&peer_, std::int32_t max_id_);

  static const std::int32_t ID = 469850889;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = object_ptr<messages_affectedHistory>;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class messages_deleteMessages final : public Function {
 public:
  std::int32_t flags_;
  bool revoke_;
  std::vector<std::int32_t> id_;
  enum Flags : std::int32_t {REVOKE_MASK = 1};
  mutable std::int32_t var0;

  messages_deleteMessages();

  messages_deleteMessages(std::int32_t flags_, bool revoke_, std::vector<std::int32_t> &&id_);

  static const std::int32_t ID = -443640366;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = object_ptr<messages_affectedMessages>;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class messages_discardEncryption final : public Function {
 public:
  std::int32_t chat_id_;

  messages_discardEncryption();

  explicit messages_discardEncryption(std::int32_t chat_id_);

  static const std::int32_t ID = -304536635;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = bool;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class messages_editChatAdmin final : public Function {
 public:
  std::int32_t chat_id_;
  object_ptr<InputUser> user_id_;
  bool is_admin_;

  messages_editChatAdmin();

  messages_editChatAdmin(std::int32_t chat_id_, object_ptr<InputUser> &&user_id_, bool is_admin_);

  static const std::int32_t ID = -1444503762;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = bool;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class messages_editChatPhoto final : public Function {
 public:
  std::int32_t chat_id_;
  object_ptr<InputChatPhoto> photo_;

  messages_editChatPhoto();

  messages_editChatPhoto(std::int32_t chat_id_, object_ptr<InputChatPhoto> &&photo_);

  static const std::int32_t ID = -900957736;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = object_ptr<Updates>;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class messages_editChatTitle final : public Function {
 public:
  std::int32_t chat_id_;
  std::string title_;

  messages_editChatTitle();

  messages_editChatTitle(std::int32_t chat_id_, std::string const &title_);

  static const std::int32_t ID = -599447467;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = object_ptr<Updates>;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class messages_editInlineBotMessage final : public Function {
 public:
  std::int32_t flags_;
  bool no_webpage_;
  bool stop_geo_live_;
  object_ptr<inputBotInlineMessageID> id_;
  std::string message_;
  object_ptr<InputMedia> media_;
  object_ptr<ReplyMarkup> reply_markup_;
  std::vector<object_ptr<MessageEntity>> entities_;
  object_ptr<InputGeoPoint> geo_point_;
  enum Flags : std::int32_t {NO_WEBPAGE_MASK = 2, STOP_GEO_LIVE_MASK = 4096, MESSAGE_MASK = 2048, MEDIA_MASK = 16384, REPLY_MARKUP_MASK = 4, ENTITIES_MASK = 8, GEO_POINT_MASK = 8192};
  mutable std::int32_t var0;

  messages_editInlineBotMessage();

  messages_editInlineBotMessage(std::int32_t flags_, bool no_webpage_, bool stop_geo_live_, object_ptr<inputBotInlineMessageID> &&id_, std::string const &message_, object_ptr<InputMedia> &&media_, object_ptr<ReplyMarkup> &&reply_markup_, std::vector<object_ptr<MessageEntity>> &&entities_, object_ptr<InputGeoPoint> &&geo_point_);

  static const std::int32_t ID = -1379669976;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = bool;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class messages_editMessage final : public Function {
 public:
  std::int32_t flags_;
  bool no_webpage_;
  bool stop_geo_live_;
  object_ptr<InputPeer> peer_;
  std::int32_t id_;
  std::string message_;
  object_ptr<InputMedia> media_;
  object_ptr<ReplyMarkup> reply_markup_;
  std::vector<object_ptr<MessageEntity>> entities_;
  object_ptr<InputGeoPoint> geo_point_;
  enum Flags : std::int32_t {NO_WEBPAGE_MASK = 2, STOP_GEO_LIVE_MASK = 4096, MESSAGE_MASK = 2048, MEDIA_MASK = 16384, REPLY_MARKUP_MASK = 4, ENTITIES_MASK = 8, GEO_POINT_MASK = 8192};
  mutable std::int32_t var0;

  messages_editMessage();

  messages_editMessage(std::int32_t flags_, bool no_webpage_, bool stop_geo_live_, object_ptr<InputPeer> &&peer_, std::int32_t id_, std::string const &message_, object_ptr<InputMedia> &&media_, object_ptr<ReplyMarkup> &&reply_markup_, std::vector<object_ptr<MessageEntity>> &&entities_, object_ptr<InputGeoPoint> &&geo_point_);

  static const std::int32_t ID = -1073683256;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = object_ptr<Updates>;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class messages_exportChatInvite final : public Function {
 public:
  std::int32_t chat_id_;

  messages_exportChatInvite();

  explicit messages_exportChatInvite(std::int32_t chat_id_);

  static const std::int32_t ID = 2106086025;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = object_ptr<ExportedChatInvite>;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class messages_faveSticker final : public Function {
 public:
  object_ptr<InputDocument> id_;
  bool unfave_;

  messages_faveSticker();

  messages_faveSticker(object_ptr<InputDocument> &&id_, bool unfave_);

  static const std::int32_t ID = -1174420133;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = bool;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class messages_forwardMessages final : public Function {
 public:
  std::int32_t flags_;
  bool silent_;
  bool background_;
  bool with_my_score_;
  bool grouped_;
  object_ptr<InputPeer> from_peer_;
  std::vector<std::int32_t> id_;
  std::vector<std::int64_t> random_id_;
  object_ptr<InputPeer> to_peer_;
  enum Flags : std::int32_t {SILENT_MASK = 32, BACKGROUND_MASK = 64, WITH_MY_SCORE_MASK = 256, GROUPED_MASK = 512};
  mutable std::int32_t var0;

  messages_forwardMessages();

  messages_forwardMessages(std::int32_t flags_, bool silent_, bool background_, bool with_my_score_, bool grouped_, object_ptr<InputPeer> &&from_peer_, std::vector<std::int32_t> &&id_, std::vector<std::int64_t> &&random_id_, object_ptr<InputPeer> &&to_peer_);

  static const std::int32_t ID = 1888354709;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = object_ptr<Updates>;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class messages_getAllChats final : public Function {
 public:
  std::vector<std::int32_t> except_ids_;

  messages_getAllChats();

  explicit messages_getAllChats(std::vector<std::int32_t> &&except_ids_);

  static const std::int32_t ID = -341307408;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = object_ptr<messages_Chats>;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class messages_getAllDrafts final : public Function {
 public:

  messages_getAllDrafts();

  static const std::int32_t ID = 1782549861;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = object_ptr<Updates>;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class messages_getAllStickers final : public Function {
 public:
  std::int32_t hash_;

  messages_getAllStickers();

  explicit messages_getAllStickers(std::int32_t hash_);

  static const std::int32_t ID = 479598769;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = object_ptr<messages_AllStickers>;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class messages_getArchivedStickers final : public Function {
 public:
  std::int32_t flags_;
  bool masks_;
  std::int64_t offset_id_;
  std::int32_t limit_;
  enum Flags : std::int32_t {MASKS_MASK = 1};
  mutable std::int32_t var0;

  messages_getArchivedStickers();

  messages_getArchivedStickers(std::int32_t flags_, bool masks_, std::int64_t offset_id_, std::int32_t limit_);

  static const std::int32_t ID = 1475442322;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = object_ptr<messages_archivedStickers>;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class messages_getAttachedStickers final : public Function {
 public:
  object_ptr<InputStickeredMedia> media_;

  messages_getAttachedStickers();

  explicit messages_getAttachedStickers(object_ptr<InputStickeredMedia> &&media_);

  static const std::int32_t ID = -866424884;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = std::vector<object_ptr<StickerSetCovered>>;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class messages_getBotCallbackAnswer final : public Function {
 public:
  std::int32_t flags_;
  bool game_;
  object_ptr<InputPeer> peer_;
  std::int32_t msg_id_;
  BufferSlice data_;
  enum Flags : std::int32_t {GAME_MASK = 2, DATA_MASK = 1};
  mutable std::int32_t var0;

  messages_getBotCallbackAnswer();

  messages_getBotCallbackAnswer(std::int32_t flags_, bool game_, object_ptr<InputPeer> &&peer_, std::int32_t msg_id_, BufferSlice &&data_);

  static const std::int32_t ID = -2130010132;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = object_ptr<messages_botCallbackAnswer>;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class messages_getChats final : public Function {
 public:
  std::vector<std::int32_t> id_;

  messages_getChats();

  explicit messages_getChats(std::vector<std::int32_t> &&id_);

  static const std::int32_t ID = 1013621127;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = object_ptr<messages_Chats>;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class messages_getCommonChats final : public Function {
 public:
  object_ptr<InputUser> user_id_;
  std::int32_t max_id_;
  std::int32_t limit_;

  messages_getCommonChats();

  messages_getCommonChats(object_ptr<InputUser> &&user_id_, std::int32_t max_id_, std::int32_t limit_);

  static const std::int32_t ID = 218777796;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = object_ptr<messages_Chats>;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class messages_getDhConfig final : public Function {
 public:
  std::int32_t version_;
  std::int32_t random_length_;

  messages_getDhConfig();

  messages_getDhConfig(std::int32_t version_, std::int32_t random_length_);

  static const std::int32_t ID = 651135312;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = object_ptr<messages_DhConfig>;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class messages_getDialogUnreadMarks final : public Function {
 public:

  messages_getDialogUnreadMarks();

  static const std::int32_t ID = 585256482;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = std::vector<object_ptr<dialogPeer>>;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class messages_getDialogs final : public Function {
 public:
  std::int32_t flags_;
  bool exclude_pinned_;
  std::int32_t offset_date_;
  std::int32_t offset_id_;
  object_ptr<InputPeer> offset_peer_;
  std::int32_t limit_;
  std::int32_t hash_;
  enum Flags : std::int32_t {EXCLUDE_PINNED_MASK = 1};
  mutable std::int32_t var0;

  messages_getDialogs();

  messages_getDialogs(std::int32_t flags_, bool exclude_pinned_, std::int32_t offset_date_, std::int32_t offset_id_, object_ptr<InputPeer> &&offset_peer_, std::int32_t limit_, std::int32_t hash_);

  static const std::int32_t ID = -1332171034;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = object_ptr<messages_Dialogs>;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class messages_getDocumentByHash final : public Function {
 public:
  BufferSlice sha256_;
  std::int32_t size_;
  std::string mime_type_;

  messages_getDocumentByHash();

  messages_getDocumentByHash(BufferSlice &&sha256_, std::int32_t size_, std::string const &mime_type_);

  static const std::int32_t ID = 864953444;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = object_ptr<Document>;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class messages_getFavedStickers final : public Function {
 public:
  std::int32_t hash_;

  messages_getFavedStickers();

  explicit messages_getFavedStickers(std::int32_t hash_);

  static const std::int32_t ID = 567151374;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = object_ptr<messages_FavedStickers>;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class messages_getFeaturedStickers final : public Function {
 public:
  std::int32_t hash_;

  messages_getFeaturedStickers();

  explicit messages_getFeaturedStickers(std::int32_t hash_);

  static const std::int32_t ID = 766298703;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = object_ptr<messages_FeaturedStickers>;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class messages_getFullChat final : public Function {
 public:
  std::int32_t chat_id_;

  messages_getFullChat();

  explicit messages_getFullChat(std::int32_t chat_id_);

  static const std::int32_t ID = 998448230;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = object_ptr<messages_chatFull>;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class messages_getGameHighScores final : public Function {
 public:
  object_ptr<InputPeer> peer_;
  std::int32_t id_;
  object_ptr<InputUser> user_id_;

  messages_getGameHighScores();

  messages_getGameHighScores(object_ptr<InputPeer> &&peer_, std::int32_t id_, object_ptr<InputUser> &&user_id_);

  static const std::int32_t ID = -400399203;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = object_ptr<messages_highScores>;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class messages_getHistory final : public Function {
 public:
  object_ptr<InputPeer> peer_;
  std::int32_t offset_id_;
  std::int32_t offset_date_;
  std::int32_t add_offset_;
  std::int32_t limit_;
  std::int32_t max_id_;
  std::int32_t min_id_;
  std::int32_t hash_;

  messages_getHistory();

  messages_getHistory(object_ptr<InputPeer> &&peer_, std::int32_t offset_id_, std::int32_t offset_date_, std::int32_t add_offset_, std::int32_t limit_, std::int32_t max_id_, std::int32_t min_id_, std::int32_t hash_);

  static const std::int32_t ID = -591691168;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = object_ptr<messages_Messages>;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class messages_getInlineBotResults final : public Function {
 public:
  std::int32_t flags_;
  object_ptr<InputUser> bot_;
  object_ptr<InputPeer> peer_;
  object_ptr<InputGeoPoint> geo_point_;
  std::string query_;
  std::string offset_;
  enum Flags : std::int32_t {GEO_POINT_MASK = 1};
  mutable std::int32_t var0;

  messages_getInlineBotResults();

  messages_getInlineBotResults(std::int32_t flags_, object_ptr<InputUser> &&bot_, object_ptr<InputPeer> &&peer_, object_ptr<InputGeoPoint> &&geo_point_, std::string const &query_, std::string const &offset_);

  static const std::int32_t ID = 1364105629;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = object_ptr<messages_botResults>;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class messages_getInlineGameHighScores final : public Function {
 public:
  object_ptr<inputBotInlineMessageID> id_;
  object_ptr<InputUser> user_id_;

  messages_getInlineGameHighScores();

  messages_getInlineGameHighScores(object_ptr<inputBotInlineMessageID> &&id_, object_ptr<InputUser> &&user_id_);

  static const std::int32_t ID = 258170395;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = object_ptr<messages_highScores>;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class messages_getMaskStickers final : public Function {
 public:
  std::int32_t hash_;

  messages_getMaskStickers();

  explicit messages_getMaskStickers(std::int32_t hash_);

  static const std::int32_t ID = 1706608543;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = object_ptr<messages_AllStickers>;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class messages_getMessageEditData final : public Function {
 public:
  object_ptr<InputPeer> peer_;
  std::int32_t id_;

  messages_getMessageEditData();

  messages_getMessageEditData(object_ptr<InputPeer> &&peer_, std::int32_t id_);

  static const std::int32_t ID = -39416522;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = object_ptr<messages_messageEditData>;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class messages_getMessages final : public Function {
 public:
  std::vector<object_ptr<InputMessage>> id_;

  messages_getMessages();

  explicit messages_getMessages(std::vector<object_ptr<InputMessage>> &&id_);

  static const std::int32_t ID = 1673946374;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = object_ptr<messages_Messages>;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class messages_getMessagesViews final : public Function {
 public:
  object_ptr<InputPeer> peer_;
  std::vector<std::int32_t> id_;
  bool increment_;

  messages_getMessagesViews();

  messages_getMessagesViews(object_ptr<InputPeer> &&peer_, std::vector<std::int32_t> &&id_, bool increment_);

  static const std::int32_t ID = -993483427;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = std::vector<std::int32_t>;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class messages_getPeerDialogs final : public Function {
 public:
  std::vector<object_ptr<inputDialogPeer>> peers_;

  messages_getPeerDialogs();

  explicit messages_getPeerDialogs(std::vector<object_ptr<inputDialogPeer>> &&peers_);

  static const std::int32_t ID = -462373635;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = object_ptr<messages_peerDialogs>;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class messages_getPeerSettings final : public Function {
 public:
  object_ptr<InputPeer> peer_;

  messages_getPeerSettings();

  explicit messages_getPeerSettings(object_ptr<InputPeer> &&peer_);

  static const std::int32_t ID = 913498268;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = object_ptr<peerSettings>;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class messages_getPinnedDialogs final : public Function {
 public:

  messages_getPinnedDialogs();

  static const std::int32_t ID = -497756594;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = object_ptr<messages_peerDialogs>;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class messages_getRecentLocations final : public Function {
 public:
  object_ptr<InputPeer> peer_;
  std::int32_t limit_;
  std::int32_t hash_;

  messages_getRecentLocations();

  messages_getRecentLocations(object_ptr<InputPeer> &&peer_, std::int32_t limit_, std::int32_t hash_);

  static const std::int32_t ID = -1144759543;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = object_ptr<messages_Messages>;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class messages_getRecentStickers final : public Function {
 public:
  std::int32_t flags_;
  bool attached_;
  std::int32_t hash_;
  enum Flags : std::int32_t {ATTACHED_MASK = 1};
  mutable std::int32_t var0;

  messages_getRecentStickers();

  messages_getRecentStickers(std::int32_t flags_, bool attached_, std::int32_t hash_);

  static const std::int32_t ID = 1587647177;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = object_ptr<messages_RecentStickers>;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class messages_getSavedGifs final : public Function {
 public:
  std::int32_t hash_;

  messages_getSavedGifs();

  explicit messages_getSavedGifs(std::int32_t hash_);

  static const std::int32_t ID = -2084618926;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = object_ptr<messages_SavedGifs>;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class messages_getSplitRanges final : public Function {
 public:

  messages_getSplitRanges();

  static const std::int32_t ID = 486505992;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = std::vector<object_ptr<messageRange>>;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class messages_getStickerSet final : public Function {
 public:
  object_ptr<InputStickerSet> stickerset_;

  messages_getStickerSet();

  explicit messages_getStickerSet(object_ptr<InputStickerSet> &&stickerset_);

  static const std::int32_t ID = 639215886;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = object_ptr<messages_stickerSet>;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class messages_getStickers final : public Function {
 public:
  std::string emoticon_;
  std::int32_t hash_;

  messages_getStickers();

  messages_getStickers(std::string const &emoticon_, std::int32_t hash_);

  static const std::int32_t ID = 71126828;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = object_ptr<messages_Stickers>;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class messages_getUnreadMentions final : public Function {
 public:
  object_ptr<InputPeer> peer_;
  std::int32_t offset_id_;
  std::int32_t add_offset_;
  std::int32_t limit_;
  std::int32_t max_id_;
  std::int32_t min_id_;

  messages_getUnreadMentions();

  messages_getUnreadMentions(object_ptr<InputPeer> &&peer_, std::int32_t offset_id_, std::int32_t add_offset_, std::int32_t limit_, std::int32_t max_id_, std::int32_t min_id_);

  static const std::int32_t ID = 1180140658;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = object_ptr<messages_Messages>;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class messages_getWebPage final : public Function {
 public:
  std::string url_;
  std::int32_t hash_;

  messages_getWebPage();

  messages_getWebPage(std::string const &url_, std::int32_t hash_);

  static const std::int32_t ID = 852135825;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = object_ptr<WebPage>;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class messages_getWebPagePreview final : public Function {
 public:
  std::int32_t flags_;
  std::string message_;
  std::vector<object_ptr<MessageEntity>> entities_;
  enum Flags : std::int32_t {ENTITIES_MASK = 8};
  mutable std::int32_t var0;

  messages_getWebPagePreview();

  messages_getWebPagePreview(std::int32_t flags_, std::string const &message_, std::vector<object_ptr<MessageEntity>> &&entities_);

  static const std::int32_t ID = -1956073268;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = object_ptr<MessageMedia>;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class messages_hideReportSpam final : public Function {
 public:
  object_ptr<InputPeer> peer_;

  messages_hideReportSpam();

  explicit messages_hideReportSpam(object_ptr<InputPeer> &&peer_);

  static const std::int32_t ID = -1460572005;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = bool;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class messages_importChatInvite final : public Function {
 public:
  std::string hash_;

  messages_importChatInvite();

  explicit messages_importChatInvite(std::string const &hash_);

  static const std::int32_t ID = 1817183516;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = object_ptr<Updates>;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class messages_installStickerSet final : public Function {
 public:
  object_ptr<InputStickerSet> stickerset_;
  bool archived_;

  messages_installStickerSet();

  messages_installStickerSet(object_ptr<InputStickerSet> &&stickerset_, bool archived_);

  static const std::int32_t ID = -946871200;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = object_ptr<messages_StickerSetInstallResult>;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class messages_markDialogUnread final : public Function {
 public:
  std::int32_t flags_;
  bool unread_;
  object_ptr<inputDialogPeer> peer_;
  enum Flags : std::int32_t {UNREAD_MASK = 1};
  mutable std::int32_t var0;

  messages_markDialogUnread();

  messages_markDialogUnread(std::int32_t flags_, bool unread_, object_ptr<inputDialogPeer> &&peer_);

  static const std::int32_t ID = -1031349873;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = bool;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class messages_migrateChat final : public Function {
 public:
  std::int32_t chat_id_;

  messages_migrateChat();

  explicit messages_migrateChat(std::int32_t chat_id_);

  static const std::int32_t ID = 363051235;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = object_ptr<Updates>;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class messages_readEncryptedHistory final : public Function {
 public:
  object_ptr<inputEncryptedChat> peer_;
  std::int32_t max_date_;

  messages_readEncryptedHistory();

  messages_readEncryptedHistory(object_ptr<inputEncryptedChat> &&peer_, std::int32_t max_date_);

  static const std::int32_t ID = 2135648522;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = bool;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class messages_readFeaturedStickers final : public Function {
 public:
  std::vector<std::int64_t> id_;

  messages_readFeaturedStickers();

  explicit messages_readFeaturedStickers(std::vector<std::int64_t> &&id_);

  static const std::int32_t ID = 1527873830;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = bool;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class messages_readHistory final : public Function {
 public:
  object_ptr<InputPeer> peer_;
  std::int32_t max_id_;

  messages_readHistory();

  messages_readHistory(object_ptr<InputPeer> &&peer_, std::int32_t max_id_);

  static const std::int32_t ID = 238054714;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = object_ptr<messages_affectedMessages>;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class messages_readMentions final : public Function {
 public:
  object_ptr<InputPeer> peer_;

  messages_readMentions();

  explicit messages_readMentions(object_ptr<InputPeer> &&peer_);

  static const std::int32_t ID = 251759059;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = object_ptr<messages_affectedHistory>;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class messages_readMessageContents final : public Function {
 public:
  std::vector<std::int32_t> id_;

  messages_readMessageContents();

  explicit messages_readMessageContents(std::vector<std::int32_t> &&id_);

  static const std::int32_t ID = 916930423;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = object_ptr<messages_affectedMessages>;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class messages_receivedMessages final : public Function {
 public:
  std::int32_t max_id_;

  messages_receivedMessages();

  explicit messages_receivedMessages(std::int32_t max_id_);

  static const std::int32_t ID = 94983360;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = std::vector<object_ptr<receivedNotifyMessage>>;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class messages_receivedQueue final : public Function {
 public:
  std::int32_t max_qts_;

  messages_receivedQueue();

  explicit messages_receivedQueue(std::int32_t max_qts_);

  static const std::int32_t ID = 1436924774;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = std::vector<std::int64_t>;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class messages_reorderPinnedDialogs final : public Function {
 public:
  std::int32_t flags_;
  bool force_;
  std::vector<object_ptr<inputDialogPeer>> order_;
  enum Flags : std::int32_t {FORCE_MASK = 1};
  mutable std::int32_t var0;

  messages_reorderPinnedDialogs();

  messages_reorderPinnedDialogs(std::int32_t flags_, bool force_, std::vector<object_ptr<inputDialogPeer>> &&order_);

  static const std::int32_t ID = 1532089919;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = bool;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class messages_reorderStickerSets final : public Function {
 public:
  std::int32_t flags_;
  bool masks_;
  std::vector<std::int64_t> order_;
  enum Flags : std::int32_t {MASKS_MASK = 1};
  mutable std::int32_t var0;

  messages_reorderStickerSets();

  messages_reorderStickerSets(std::int32_t flags_, bool masks_, std::vector<std::int64_t> &&order_);

  static const std::int32_t ID = 2016638777;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = bool;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class messages_report final : public Function {
 public:
  object_ptr<InputPeer> peer_;
  std::vector<std::int32_t> id_;
  object_ptr<ReportReason> reason_;

  messages_report();

  messages_report(object_ptr<InputPeer> &&peer_, std::vector<std::int32_t> &&id_, object_ptr<ReportReason> &&reason_);

  static const std::int32_t ID = -1115507112;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = bool;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class messages_reportEncryptedSpam final : public Function {
 public:
  object_ptr<inputEncryptedChat> peer_;

  messages_reportEncryptedSpam();

  explicit messages_reportEncryptedSpam(object_ptr<inputEncryptedChat> &&peer_);

  static const std::int32_t ID = 1259113487;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = bool;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class messages_reportSpam final : public Function {
 public:
  object_ptr<InputPeer> peer_;

  messages_reportSpam();

  explicit messages_reportSpam(object_ptr<InputPeer> &&peer_);

  static const std::int32_t ID = -820669733;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = bool;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class messages_requestEncryption final : public Function {
 public:
  object_ptr<InputUser> user_id_;
  std::int32_t random_id_;
  BufferSlice g_a_;

  messages_requestEncryption();

  messages_requestEncryption(object_ptr<InputUser> &&user_id_, std::int32_t random_id_, BufferSlice &&g_a_);

  static const std::int32_t ID = -162681021;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = object_ptr<EncryptedChat>;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class messages_saveDraft final : public Function {
 public:
  std::int32_t flags_;
  bool no_webpage_;
  std::int32_t reply_to_msg_id_;
  object_ptr<InputPeer> peer_;
  std::string message_;
  std::vector<object_ptr<MessageEntity>> entities_;
  enum Flags : std::int32_t {NO_WEBPAGE_MASK = 2, REPLY_TO_MSG_ID_MASK = 1, ENTITIES_MASK = 8};
  mutable std::int32_t var0;

  messages_saveDraft();

  messages_saveDraft(std::int32_t flags_, bool no_webpage_, std::int32_t reply_to_msg_id_, object_ptr<InputPeer> &&peer_, std::string const &message_, std::vector<object_ptr<MessageEntity>> &&entities_);

  static const std::int32_t ID = -1137057461;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = bool;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class messages_saveGif final : public Function {
 public:
  object_ptr<InputDocument> id_;
  bool unsave_;

  messages_saveGif();

  messages_saveGif(object_ptr<InputDocument> &&id_, bool unsave_);

  static const std::int32_t ID = 846868683;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = bool;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class messages_saveRecentSticker final : public Function {
 public:
  std::int32_t flags_;
  bool attached_;
  object_ptr<InputDocument> id_;
  bool unsave_;
  enum Flags : std::int32_t {ATTACHED_MASK = 1};
  mutable std::int32_t var0;

  messages_saveRecentSticker();

  messages_saveRecentSticker(std::int32_t flags_, bool attached_, object_ptr<InputDocument> &&id_, bool unsave_);

  static const std::int32_t ID = 958863608;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = bool;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class messages_search final : public Function {
 public:
  std::int32_t flags_;
  object_ptr<InputPeer> peer_;
  std::string q_;
  object_ptr<InputUser> from_id_;
  object_ptr<MessagesFilter> filter_;
  std::int32_t min_date_;
  std::int32_t max_date_;
  std::int32_t offset_id_;
  std::int32_t add_offset_;
  std::int32_t limit_;
  std::int32_t max_id_;
  std::int32_t min_id_;
  std::int32_t hash_;
  enum Flags : std::int32_t {FROM_ID_MASK = 1};
  mutable std::int32_t var0;

  messages_search();

  messages_search(std::int32_t flags_, object_ptr<InputPeer> &&peer_, std::string const &q_, object_ptr<InputUser> &&from_id_, object_ptr<MessagesFilter> &&filter_, std::int32_t min_date_, std::int32_t max_date_, std::int32_t offset_id_, std::int32_t add_offset_, std::int32_t limit_, std::int32_t max_id_, std::int32_t min_id_, std::int32_t hash_);

  static const std::int32_t ID = -2045448344;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = object_ptr<messages_Messages>;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class messages_searchGifs final : public Function {
 public:
  std::string q_;
  std::int32_t offset_;

  messages_searchGifs();

  messages_searchGifs(std::string const &q_, std::int32_t offset_);

  static const std::int32_t ID = -1080395925;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = object_ptr<messages_foundGifs>;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class messages_searchGlobal final : public Function {
 public:
  std::string q_;
  std::int32_t offset_date_;
  object_ptr<InputPeer> offset_peer_;
  std::int32_t offset_id_;
  std::int32_t limit_;

  messages_searchGlobal();

  messages_searchGlobal(std::string const &q_, std::int32_t offset_date_, object_ptr<InputPeer> &&offset_peer_, std::int32_t offset_id_, std::int32_t limit_);

  static const std::int32_t ID = -1640190800;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = object_ptr<messages_Messages>;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class messages_searchStickerSets final : public Function {
 public:
  std::int32_t flags_;
  bool exclude_featured_;
  std::string q_;
  std::int32_t hash_;
  enum Flags : std::int32_t {EXCLUDE_FEATURED_MASK = 1};
  mutable std::int32_t var0;

  messages_searchStickerSets();

  messages_searchStickerSets(std::int32_t flags_, bool exclude_featured_, std::string const &q_, std::int32_t hash_);

  static const std::int32_t ID = -1028140917;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = object_ptr<messages_FoundStickerSets>;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class messages_sendEncrypted final : public Function {
 public:
  object_ptr<inputEncryptedChat> peer_;
  std::int64_t random_id_;
  BufferSlice data_;

  messages_sendEncrypted();

  messages_sendEncrypted(object_ptr<inputEncryptedChat> &&peer_, std::int64_t random_id_, BufferSlice &&data_);

  static const std::int32_t ID = -1451792525;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = object_ptr<messages_SentEncryptedMessage>;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class messages_sendEncryptedFile final : public Function {
 public:
  object_ptr<inputEncryptedChat> peer_;
  std::int64_t random_id_;
  BufferSlice data_;
  object_ptr<InputEncryptedFile> file_;

  messages_sendEncryptedFile();

  messages_sendEncryptedFile(object_ptr<inputEncryptedChat> &&peer_, std::int64_t random_id_, BufferSlice &&data_, object_ptr<InputEncryptedFile> &&file_);

  static const std::int32_t ID = -1701831834;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = object_ptr<messages_SentEncryptedMessage>;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class messages_sendEncryptedService final : public Function {
 public:
  object_ptr<inputEncryptedChat> peer_;
  std::int64_t random_id_;
  BufferSlice data_;

  messages_sendEncryptedService();

  messages_sendEncryptedService(object_ptr<inputEncryptedChat> &&peer_, std::int64_t random_id_, BufferSlice &&data_);

  static const std::int32_t ID = 852769188;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = object_ptr<messages_SentEncryptedMessage>;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class messages_sendInlineBotResult final : public Function {
 public:
  std::int32_t flags_;
  bool silent_;
  bool background_;
  bool clear_draft_;
  object_ptr<InputPeer> peer_;
  std::int32_t reply_to_msg_id_;
  std::int64_t random_id_;
  std::int64_t query_id_;
  std::string id_;
  enum Flags : std::int32_t {SILENT_MASK = 32, BACKGROUND_MASK = 64, CLEAR_DRAFT_MASK = 128, REPLY_TO_MSG_ID_MASK = 1};
  mutable std::int32_t var0;

  messages_sendInlineBotResult();

  messages_sendInlineBotResult(std::int32_t flags_, bool silent_, bool background_, bool clear_draft_, object_ptr<InputPeer> &&peer_, std::int32_t reply_to_msg_id_, std::int64_t random_id_, std::int64_t query_id_, std::string const &id_);

  static const std::int32_t ID = -1318189314;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = object_ptr<Updates>;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class messages_sendMedia final : public Function {
 public:
  std::int32_t flags_;
  bool silent_;
  bool background_;
  bool clear_draft_;
  object_ptr<InputPeer> peer_;
  std::int32_t reply_to_msg_id_;
  object_ptr<InputMedia> media_;
  std::string message_;
  std::int64_t random_id_;
  object_ptr<ReplyMarkup> reply_markup_;
  std::vector<object_ptr<MessageEntity>> entities_;
  enum Flags : std::int32_t {SILENT_MASK = 32, BACKGROUND_MASK = 64, CLEAR_DRAFT_MASK = 128, REPLY_TO_MSG_ID_MASK = 1, REPLY_MARKUP_MASK = 4, ENTITIES_MASK = 8};
  mutable std::int32_t var0;

  messages_sendMedia();

  messages_sendMedia(std::int32_t flags_, bool silent_, bool background_, bool clear_draft_, object_ptr<InputPeer> &&peer_, std::int32_t reply_to_msg_id_, object_ptr<InputMedia> &&media_, std::string const &message_, std::int64_t random_id_, object_ptr<ReplyMarkup> &&reply_markup_, std::vector<object_ptr<MessageEntity>> &&entities_);

  static const std::int32_t ID = -1194252757;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = object_ptr<Updates>;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class messages_sendMessage final : public Function {
 public:
  std::int32_t flags_;
  bool no_webpage_;
  bool silent_;
  bool background_;
  bool clear_draft_;
  object_ptr<InputPeer> peer_;
  std::int32_t reply_to_msg_id_;
  std::string message_;
  std::int64_t random_id_;
  object_ptr<ReplyMarkup> reply_markup_;
  std::vector<object_ptr<MessageEntity>> entities_;
  enum Flags : std::int32_t {NO_WEBPAGE_MASK = 2, SILENT_MASK = 32, BACKGROUND_MASK = 64, CLEAR_DRAFT_MASK = 128, REPLY_TO_MSG_ID_MASK = 1, REPLY_MARKUP_MASK = 4, ENTITIES_MASK = 8};
  mutable std::int32_t var0;

  messages_sendMessage();

  messages_sendMessage(std::int32_t flags_, bool no_webpage_, bool silent_, bool background_, bool clear_draft_, object_ptr<InputPeer> &&peer_, std::int32_t reply_to_msg_id_, std::string const &message_, std::int64_t random_id_, object_ptr<ReplyMarkup> &&reply_markup_, std::vector<object_ptr<MessageEntity>> &&entities_);

  static const std::int32_t ID = -91733382;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = object_ptr<Updates>;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class messages_sendMultiMedia final : public Function {
 public:
  std::int32_t flags_;
  bool silent_;
  bool background_;
  bool clear_draft_;
  object_ptr<InputPeer> peer_;
  std::int32_t reply_to_msg_id_;
  std::vector<object_ptr<inputSingleMedia>> multi_media_;
  enum Flags : std::int32_t {SILENT_MASK = 32, BACKGROUND_MASK = 64, CLEAR_DRAFT_MASK = 128, REPLY_TO_MSG_ID_MASK = 1};
  mutable std::int32_t var0;

  messages_sendMultiMedia();

  messages_sendMultiMedia(std::int32_t flags_, bool silent_, bool background_, bool clear_draft_, object_ptr<InputPeer> &&peer_, std::int32_t reply_to_msg_id_, std::vector<object_ptr<inputSingleMedia>> &&multi_media_);

  static const std::int32_t ID = 546656559;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = object_ptr<Updates>;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class messages_sendScreenshotNotification final : public Function {
 public:
  object_ptr<InputPeer> peer_;
  std::int32_t reply_to_msg_id_;
  std::int64_t random_id_;

  messages_sendScreenshotNotification();

  messages_sendScreenshotNotification(object_ptr<InputPeer> &&peer_, std::int32_t reply_to_msg_id_, std::int64_t random_id_);

  static const std::int32_t ID = -914493408;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = object_ptr<Updates>;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class messages_setBotCallbackAnswer final : public Function {
 public:
  std::int32_t flags_;
  bool alert_;
  std::int64_t query_id_;
  std::string message_;
  std::string url_;
  std::int32_t cache_time_;
  enum Flags : std::int32_t {ALERT_MASK = 2, MESSAGE_MASK = 1, URL_MASK = 4};
  mutable std::int32_t var0;

  messages_setBotCallbackAnswer();

  messages_setBotCallbackAnswer(std::int32_t flags_, bool alert_, std::int64_t query_id_, std::string const &message_, std::string const &url_, std::int32_t cache_time_);

  static const std::int32_t ID = -712043766;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = bool;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class messages_setBotPrecheckoutResults final : public Function {
 public:
  std::int32_t flags_;
  bool success_;
  std::int64_t query_id_;
  std::string error_;
  enum Flags : std::int32_t {SUCCESS_MASK = 2, ERROR_MASK = 1};
  mutable std::int32_t var0;

  messages_setBotPrecheckoutResults();

  messages_setBotPrecheckoutResults(std::int32_t flags_, bool success_, std::int64_t query_id_, std::string const &error_);

  static const std::int32_t ID = 163765653;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = bool;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class messages_setBotShippingResults final : public Function {
 public:
  std::int32_t flags_;
  std::int64_t query_id_;
  std::string error_;
  std::vector<object_ptr<shippingOption>> shipping_options_;
  enum Flags : std::int32_t {ERROR_MASK = 1, SHIPPING_OPTIONS_MASK = 2};
  mutable std::int32_t var0;

  messages_setBotShippingResults();

  messages_setBotShippingResults(std::int32_t flags_, std::int64_t query_id_, std::string const &error_, std::vector<object_ptr<shippingOption>> &&shipping_options_);

  static const std::int32_t ID = -436833542;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = bool;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class messages_setEncryptedTyping final : public Function {
 public:
  object_ptr<inputEncryptedChat> peer_;
  bool typing_;

  messages_setEncryptedTyping();

  messages_setEncryptedTyping(object_ptr<inputEncryptedChat> &&peer_, bool typing_);

  static const std::int32_t ID = 2031374829;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = bool;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class messages_setGameScore final : public Function {
 public:
  std::int32_t flags_;
  bool edit_message_;
  bool force_;
  object_ptr<InputPeer> peer_;
  std::int32_t id_;
  object_ptr<InputUser> user_id_;
  std::int32_t score_;
  enum Flags : std::int32_t {EDIT_MESSAGE_MASK = 1, FORCE_MASK = 2};
  mutable std::int32_t var0;

  messages_setGameScore();

  messages_setGameScore(std::int32_t flags_, bool edit_message_, bool force_, object_ptr<InputPeer> &&peer_, std::int32_t id_, object_ptr<InputUser> &&user_id_, std::int32_t score_);

  static const std::int32_t ID = -1896289088;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = object_ptr<Updates>;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class messages_setInlineBotResults final : public Function {
 public:
  std::int32_t flags_;
  bool gallery_;
  bool private_;
  std::int64_t query_id_;
  std::vector<object_ptr<InputBotInlineResult>> results_;
  std::int32_t cache_time_;
  std::string next_offset_;
  object_ptr<inlineBotSwitchPM> switch_pm_;
  enum Flags : std::int32_t {GALLERY_MASK = 1, PRIVATE_MASK = 2, NEXT_OFFSET_MASK = 4, SWITCH_PM_MASK = 8};
  mutable std::int32_t var0;

  messages_setInlineBotResults();

  messages_setInlineBotResults(std::int32_t flags_, bool gallery_, bool private_, std::int64_t query_id_, std::vector<object_ptr<InputBotInlineResult>> &&results_, std::int32_t cache_time_, std::string const &next_offset_, object_ptr<inlineBotSwitchPM> &&switch_pm_);

  static const std::int32_t ID = -346119674;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = bool;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class messages_setInlineGameScore final : public Function {
 public:
  std::int32_t flags_;
  bool edit_message_;
  bool force_;
  object_ptr<inputBotInlineMessageID> id_;
  object_ptr<InputUser> user_id_;
  std::int32_t score_;
  enum Flags : std::int32_t {EDIT_MESSAGE_MASK = 1, FORCE_MASK = 2};
  mutable std::int32_t var0;

  messages_setInlineGameScore();

  messages_setInlineGameScore(std::int32_t flags_, bool edit_message_, bool force_, object_ptr<inputBotInlineMessageID> &&id_, object_ptr<InputUser> &&user_id_, std::int32_t score_);

  static const std::int32_t ID = 363700068;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = bool;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class messages_setTyping final : public Function {
 public:
  object_ptr<InputPeer> peer_;
  object_ptr<SendMessageAction> action_;

  messages_setTyping();

  messages_setTyping(object_ptr<InputPeer> &&peer_, object_ptr<SendMessageAction> &&action_);

  static const std::int32_t ID = -1551737264;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = bool;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class messages_startBot final : public Function {
 public:
  object_ptr<InputUser> bot_;
  object_ptr<InputPeer> peer_;
  std::int64_t random_id_;
  std::string start_param_;

  messages_startBot();

  messages_startBot(object_ptr<InputUser> &&bot_, object_ptr<InputPeer> &&peer_, std::int64_t random_id_, std::string const &start_param_);

  static const std::int32_t ID = -421563528;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = object_ptr<Updates>;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class messages_toggleChatAdmins final : public Function {
 public:
  std::int32_t chat_id_;
  bool enabled_;

  messages_toggleChatAdmins();

  messages_toggleChatAdmins(std::int32_t chat_id_, bool enabled_);

  static const std::int32_t ID = -326379039;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = object_ptr<Updates>;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class messages_toggleDialogPin final : public Function {
 public:
  std::int32_t flags_;
  bool pinned_;
  object_ptr<inputDialogPeer> peer_;
  enum Flags : std::int32_t {PINNED_MASK = 1};
  mutable std::int32_t var0;

  messages_toggleDialogPin();

  messages_toggleDialogPin(std::int32_t flags_, bool pinned_, object_ptr<inputDialogPeer> &&peer_);

  static const std::int32_t ID = -1489903017;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = bool;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class messages_uninstallStickerSet final : public Function {
 public:
  object_ptr<InputStickerSet> stickerset_;

  messages_uninstallStickerSet();

  explicit messages_uninstallStickerSet(object_ptr<InputStickerSet> &&stickerset_);

  static const std::int32_t ID = -110209570;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = bool;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class messages_uploadEncryptedFile final : public Function {
 public:
  object_ptr<inputEncryptedChat> peer_;
  object_ptr<InputEncryptedFile> file_;

  messages_uploadEncryptedFile();

  messages_uploadEncryptedFile(object_ptr<inputEncryptedChat> &&peer_, object_ptr<InputEncryptedFile> &&file_);

  static const std::int32_t ID = 1347929239;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = object_ptr<EncryptedFile>;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class messages_uploadMedia final : public Function {
 public:
  object_ptr<InputPeer> peer_;
  object_ptr<InputMedia> media_;

  messages_uploadMedia();

  messages_uploadMedia(object_ptr<InputPeer> &&peer_, object_ptr<InputMedia> &&media_);

  static const std::int32_t ID = 1369162417;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = object_ptr<MessageMedia>;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class payments_clearSavedInfo final : public Function {
 public:
  std::int32_t flags_;
  bool credentials_;
  bool info_;
  enum Flags : std::int32_t {CREDENTIALS_MASK = 1, INFO_MASK = 2};
  mutable std::int32_t var0;

  payments_clearSavedInfo();

  payments_clearSavedInfo(std::int32_t flags_, bool credentials_, bool info_);

  static const std::int32_t ID = -667062079;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = bool;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class payments_getPaymentForm final : public Function {
 public:
  std::int32_t msg_id_;

  payments_getPaymentForm();

  explicit payments_getPaymentForm(std::int32_t msg_id_);

  static const std::int32_t ID = -1712285883;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = object_ptr<payments_paymentForm>;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class payments_getPaymentReceipt final : public Function {
 public:
  std::int32_t msg_id_;

  payments_getPaymentReceipt();

  explicit payments_getPaymentReceipt(std::int32_t msg_id_);

  static const std::int32_t ID = -1601001088;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = object_ptr<payments_paymentReceipt>;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class payments_getSavedInfo final : public Function {
 public:

  payments_getSavedInfo();

  static const std::int32_t ID = 578650699;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = object_ptr<payments_savedInfo>;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class payments_sendPaymentForm final : public Function {
 public:
  std::int32_t flags_;
  std::int32_t msg_id_;
  std::string requested_info_id_;
  std::string shipping_option_id_;
  object_ptr<InputPaymentCredentials> credentials_;
  enum Flags : std::int32_t {REQUESTED_INFO_ID_MASK = 1, SHIPPING_OPTION_ID_MASK = 2};
  mutable std::int32_t var0;

  payments_sendPaymentForm();

  payments_sendPaymentForm(std::int32_t flags_, std::int32_t msg_id_, std::string const &requested_info_id_, std::string const &shipping_option_id_, object_ptr<InputPaymentCredentials> &&credentials_);

  static const std::int32_t ID = 730364339;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = object_ptr<payments_PaymentResult>;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class payments_validateRequestedInfo final : public Function {
 public:
  std::int32_t flags_;
  bool save_;
  std::int32_t msg_id_;
  object_ptr<paymentRequestedInfo> info_;
  enum Flags : std::int32_t {SAVE_MASK = 1};
  mutable std::int32_t var0;

  payments_validateRequestedInfo();

  payments_validateRequestedInfo(std::int32_t flags_, bool save_, std::int32_t msg_id_, object_ptr<paymentRequestedInfo> &&info_);

  static const std::int32_t ID = 1997180532;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = object_ptr<payments_validatedRequestedInfo>;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class phone_acceptCall final : public Function {
 public:
  object_ptr<inputPhoneCall> peer_;
  BufferSlice g_b_;
  object_ptr<phoneCallProtocol> protocol_;

  phone_acceptCall();

  phone_acceptCall(object_ptr<inputPhoneCall> &&peer_, BufferSlice &&g_b_, object_ptr<phoneCallProtocol> &&protocol_);

  static const std::int32_t ID = 1003664544;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = object_ptr<phone_phoneCall>;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class phone_confirmCall final : public Function {
 public:
  object_ptr<inputPhoneCall> peer_;
  BufferSlice g_a_;
  std::int64_t key_fingerprint_;
  object_ptr<phoneCallProtocol> protocol_;

  phone_confirmCall();

  phone_confirmCall(object_ptr<inputPhoneCall> &&peer_, BufferSlice &&g_a_, std::int64_t key_fingerprint_, object_ptr<phoneCallProtocol> &&protocol_);

  static const std::int32_t ID = 788404002;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = object_ptr<phone_phoneCall>;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class phone_discardCall final : public Function {
 public:
  object_ptr<inputPhoneCall> peer_;
  std::int32_t duration_;
  object_ptr<PhoneCallDiscardReason> reason_;
  std::int64_t connection_id_;

  phone_discardCall();

  phone_discardCall(object_ptr<inputPhoneCall> &&peer_, std::int32_t duration_, object_ptr<PhoneCallDiscardReason> &&reason_, std::int64_t connection_id_);

  static const std::int32_t ID = 2027164582;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = object_ptr<Updates>;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class phone_getCallConfig final : public Function {
 public:

  phone_getCallConfig();

  static const std::int32_t ID = 1430593449;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = object_ptr<dataJSON>;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class phone_receivedCall final : public Function {
 public:
  object_ptr<inputPhoneCall> peer_;

  phone_receivedCall();

  explicit phone_receivedCall(object_ptr<inputPhoneCall> &&peer_);

  static const std::int32_t ID = 399855457;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = bool;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class phone_requestCall final : public Function {
 public:
  object_ptr<InputUser> user_id_;
  std::int32_t random_id_;
  BufferSlice g_a_hash_;
  object_ptr<phoneCallProtocol> protocol_;

  phone_requestCall();

  phone_requestCall(object_ptr<InputUser> &&user_id_, std::int32_t random_id_, BufferSlice &&g_a_hash_, object_ptr<phoneCallProtocol> &&protocol_);

  static const std::int32_t ID = 1536537556;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = object_ptr<phone_phoneCall>;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class phone_saveCallDebug final : public Function {
 public:
  object_ptr<inputPhoneCall> peer_;
  object_ptr<dataJSON> debug_;

  phone_saveCallDebug();

  phone_saveCallDebug(object_ptr<inputPhoneCall> &&peer_, object_ptr<dataJSON> &&debug_);

  static const std::int32_t ID = 662363518;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = bool;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class phone_setCallRating final : public Function {
 public:
  object_ptr<inputPhoneCall> peer_;
  std::int32_t rating_;
  std::string comment_;

  phone_setCallRating();

  phone_setCallRating(object_ptr<inputPhoneCall> &&peer_, std::int32_t rating_, std::string const &comment_);

  static const std::int32_t ID = 475228724;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = object_ptr<Updates>;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class photos_deletePhotos final : public Function {
 public:
  std::vector<object_ptr<InputPhoto>> id_;

  photos_deletePhotos();

  explicit photos_deletePhotos(std::vector<object_ptr<InputPhoto>> &&id_);

  static const std::int32_t ID = -2016444625;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = std::vector<std::int64_t>;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class photos_getUserPhotos final : public Function {
 public:
  object_ptr<InputUser> user_id_;
  std::int32_t offset_;
  std::int64_t max_id_;
  std::int32_t limit_;

  photos_getUserPhotos();

  photos_getUserPhotos(object_ptr<InputUser> &&user_id_, std::int32_t offset_, std::int64_t max_id_, std::int32_t limit_);

  static const std::int32_t ID = -1848823128;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = object_ptr<photos_Photos>;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class photos_updateProfilePhoto final : public Function {
 public:
  object_ptr<InputPhoto> id_;

  photos_updateProfilePhoto();

  explicit photos_updateProfilePhoto(object_ptr<InputPhoto> &&id_);

  static const std::int32_t ID = -256159406;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = object_ptr<UserProfilePhoto>;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class photos_uploadProfilePhoto final : public Function {
 public:
  object_ptr<InputFile> file_;

  photos_uploadProfilePhoto();

  explicit photos_uploadProfilePhoto(object_ptr<InputFile> &&file_);

  static const std::int32_t ID = 1328726168;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = object_ptr<photos_photo>;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class stickers_addStickerToSet final : public Function {
 public:
  object_ptr<InputStickerSet> stickerset_;
  object_ptr<inputStickerSetItem> sticker_;

  stickers_addStickerToSet();

  stickers_addStickerToSet(object_ptr<InputStickerSet> &&stickerset_, object_ptr<inputStickerSetItem> &&sticker_);

  static const std::int32_t ID = -2041315650;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = object_ptr<messages_stickerSet>;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class stickers_changeStickerPosition final : public Function {
 public:
  object_ptr<InputDocument> sticker_;
  std::int32_t position_;

  stickers_changeStickerPosition();

  stickers_changeStickerPosition(object_ptr<InputDocument> &&sticker_, std::int32_t position_);

  static const std::int32_t ID = -4795190;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = object_ptr<messages_stickerSet>;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class stickers_createStickerSet final : public Function {
 public:
  std::int32_t flags_;
  bool masks_;
  object_ptr<InputUser> user_id_;
  std::string title_;
  std::string short_name_;
  std::vector<object_ptr<inputStickerSetItem>> stickers_;
  enum Flags : std::int32_t {MASKS_MASK = 1};
  mutable std::int32_t var0;

  stickers_createStickerSet();

  stickers_createStickerSet(std::int32_t flags_, bool masks_, object_ptr<InputUser> &&user_id_, std::string const &title_, std::string const &short_name_, std::vector<object_ptr<inputStickerSetItem>> &&stickers_);

  static const std::int32_t ID = -1680314774;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = object_ptr<messages_stickerSet>;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class stickers_removeStickerFromSet final : public Function {
 public:
  object_ptr<InputDocument> sticker_;

  stickers_removeStickerFromSet();

  explicit stickers_removeStickerFromSet(object_ptr<InputDocument> &&sticker_);

  static const std::int32_t ID = -143257775;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = object_ptr<messages_stickerSet>;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class test_useConfigSimple final : public Function {
 public:

  test_useConfigSimple();

  static const std::int32_t ID = -105401795;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = object_ptr<help_configSimple>;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class test_useError final : public Function {
 public:

  test_useError();

  static const std::int32_t ID = -294277375;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = object_ptr<error>;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class updates_getChannelDifference final : public Function {
 public:
  std::int32_t flags_;
  bool force_;
  object_ptr<InputChannel> channel_;
  object_ptr<ChannelMessagesFilter> filter_;
  std::int32_t pts_;
  std::int32_t limit_;
  enum Flags : std::int32_t {FORCE_MASK = 1};
  mutable std::int32_t var0;

  updates_getChannelDifference();

  updates_getChannelDifference(std::int32_t flags_, bool force_, object_ptr<InputChannel> &&channel_, object_ptr<ChannelMessagesFilter> &&filter_, std::int32_t pts_, std::int32_t limit_);

  static const std::int32_t ID = 51854712;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = object_ptr<updates_ChannelDifference>;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class updates_getDifference final : public Function {
 public:
  std::int32_t flags_;
  std::int32_t pts_;
  std::int32_t pts_total_limit_;
  std::int32_t date_;
  std::int32_t qts_;
  enum Flags : std::int32_t {PTS_TOTAL_LIMIT_MASK = 1};
  mutable std::int32_t var0;

  updates_getDifference();

  updates_getDifference(std::int32_t flags_, std::int32_t pts_, std::int32_t pts_total_limit_, std::int32_t date_, std::int32_t qts_);

  static const std::int32_t ID = 630429265;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = object_ptr<updates_Difference>;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class updates_getState final : public Function {
 public:

  updates_getState();

  static const std::int32_t ID = -304838614;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = object_ptr<updates_state>;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class upload_getCdnFile final : public Function {
 public:
  BufferSlice file_token_;
  std::int32_t offset_;
  std::int32_t limit_;

  upload_getCdnFile();

  upload_getCdnFile(BufferSlice &&file_token_, std::int32_t offset_, std::int32_t limit_);

  static const std::int32_t ID = 536919235;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = object_ptr<upload_CdnFile>;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class upload_getCdnFileHashes final : public Function {
 public:
  BufferSlice file_token_;
  std::int32_t offset_;

  upload_getCdnFileHashes();

  upload_getCdnFileHashes(BufferSlice &&file_token_, std::int32_t offset_);

  static const std::int32_t ID = 1302676017;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = std::vector<object_ptr<fileHash>>;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class upload_getFile final : public Function {
 public:
  object_ptr<InputFileLocation> location_;
  std::int32_t offset_;
  std::int32_t limit_;

  upload_getFile();

  upload_getFile(object_ptr<InputFileLocation> &&location_, std::int32_t offset_, std::int32_t limit_);

  static const std::int32_t ID = -475607115;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = object_ptr<upload_File>;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class upload_getFileHashes final : public Function {
 public:
  object_ptr<InputFileLocation> location_;
  std::int32_t offset_;

  upload_getFileHashes();

  upload_getFileHashes(object_ptr<InputFileLocation> &&location_, std::int32_t offset_);

  static const std::int32_t ID = -956147407;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = std::vector<object_ptr<fileHash>>;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class upload_getWebFile final : public Function {
 public:
  object_ptr<InputWebFileLocation> location_;
  std::int32_t offset_;
  std::int32_t limit_;

  upload_getWebFile();

  upload_getWebFile(object_ptr<InputWebFileLocation> &&location_, std::int32_t offset_, std::int32_t limit_);

  static const std::int32_t ID = 619086221;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = object_ptr<upload_webFile>;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class upload_reuploadCdnFile final : public Function {
 public:
  BufferSlice file_token_;
  BufferSlice request_token_;

  upload_reuploadCdnFile();

  upload_reuploadCdnFile(BufferSlice &&file_token_, BufferSlice &&request_token_);

  static const std::int32_t ID = -1691921240;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = std::vector<object_ptr<fileHash>>;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class upload_saveBigFilePart final : public Function {
 public:
  std::int64_t file_id_;
  std::int32_t file_part_;
  std::int32_t file_total_parts_;
  BufferSlice bytes_;

  upload_saveBigFilePart();

  upload_saveBigFilePart(std::int64_t file_id_, std::int32_t file_part_, std::int32_t file_total_parts_, BufferSlice &&bytes_);

  static const std::int32_t ID = -562337987;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = bool;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class upload_saveFilePart final : public Function {
 public:
  std::int64_t file_id_;
  std::int32_t file_part_;
  BufferSlice bytes_;

  upload_saveFilePart();

  upload_saveFilePart(std::int64_t file_id_, std::int32_t file_part_, BufferSlice &&bytes_);

  static const std::int32_t ID = -1291540959;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = bool;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class users_getFullUser final : public Function {
 public:
  object_ptr<InputUser> id_;

  users_getFullUser();

  explicit users_getFullUser(object_ptr<InputUser> &&id_);

  static const std::int32_t ID = -902781519;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = object_ptr<userFull>;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class users_getUsers final : public Function {
 public:
  std::vector<object_ptr<InputUser>> id_;

  users_getUsers();

  explicit users_getUsers(std::vector<object_ptr<InputUser>> &&id_);

  static const std::int32_t ID = 227648840;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = std::vector<object_ptr<User>>;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

class users_setSecureValueErrors final : public Function {
 public:
  object_ptr<InputUser> id_;
  std::vector<object_ptr<SecureValueError>> errors_;

  users_setSecureValueErrors();

  users_setSecureValueErrors(object_ptr<InputUser> &&id_, std::vector<object_ptr<SecureValueError>> &&errors_);

  static const std::int32_t ID = -1865902923;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = bool;

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlBufferParser &p);
};

}  // namespace telegram_api
}  // namespace td
