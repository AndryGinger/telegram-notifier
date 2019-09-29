#include "secret_api.h"

#include "td/tl/tl_object_parse.h"
#include "td/tl/tl_object_store.h"

#include "td/utils/common.h"
#include "td/utils/format.h"
#include "td/utils/logging.h"
#include "td/utils/tl_parsers.h"
#include "td/utils/tl_storers.h"

namespace td {
namespace secret_api {

std::string to_string(const BaseObject &value) {
  TlStorerToString storer;
  value.store(storer, "");
  return storer.str();
}

object_ptr<Object> Object::fetch(TlParser &p) {
#define FAIL(error) p.set_error(error); return nullptr;
  int constructor = p.fetch_int();
  switch (constructor) {
    case decryptedMessage8::ID:
      return decryptedMessage8::fetch(p);
    case decryptedMessageService8::ID:
      return decryptedMessageService8::fetch(p);
    case decryptedMessage23::ID:
      return decryptedMessage23::fetch(p);
    case decryptedMessageService::ID:
      return decryptedMessageService::fetch(p);
    case decryptedMessage46::ID:
      return decryptedMessage46::fetch(p);
    case decryptedMessage::ID:
      return decryptedMessage::fetch(p);
    case decryptedMessageActionSetMessageTTL::ID:
      return decryptedMessageActionSetMessageTTL::fetch(p);
    case decryptedMessageActionReadMessages::ID:
      return decryptedMessageActionReadMessages::fetch(p);
    case decryptedMessageActionDeleteMessages::ID:
      return decryptedMessageActionDeleteMessages::fetch(p);
    case decryptedMessageActionScreenshotMessages::ID:
      return decryptedMessageActionScreenshotMessages::fetch(p);
    case decryptedMessageActionFlushHistory::ID:
      return decryptedMessageActionFlushHistory::fetch(p);
    case decryptedMessageActionResend::ID:
      return decryptedMessageActionResend::fetch(p);
    case decryptedMessageActionNotifyLayer::ID:
      return decryptedMessageActionNotifyLayer::fetch(p);
    case decryptedMessageActionTyping::ID:
      return decryptedMessageActionTyping::fetch(p);
    case decryptedMessageActionRequestKey::ID:
      return decryptedMessageActionRequestKey::fetch(p);
    case decryptedMessageActionAcceptKey::ID:
      return decryptedMessageActionAcceptKey::fetch(p);
    case decryptedMessageActionAbortKey::ID:
      return decryptedMessageActionAbortKey::fetch(p);
    case decryptedMessageActionCommitKey::ID:
      return decryptedMessageActionCommitKey::fetch(p);
    case decryptedMessageActionNoop::ID:
      return decryptedMessageActionNoop::fetch(p);
    case decryptedMessageLayer::ID:
      return decryptedMessageLayer::fetch(p);
    case decryptedMessageMediaEmpty::ID:
      return decryptedMessageMediaEmpty::fetch(p);
    case decryptedMessageMediaPhoto23::ID:
      return decryptedMessageMediaPhoto23::fetch(p);
    case decryptedMessageMediaVideo8::ID:
      return decryptedMessageMediaVideo8::fetch(p);
    case decryptedMessageMediaGeoPoint::ID:
      return decryptedMessageMediaGeoPoint::fetch(p);
    case decryptedMessageMediaContact::ID:
      return decryptedMessageMediaContact::fetch(p);
    case decryptedMessageMediaDocument23::ID:
      return decryptedMessageMediaDocument23::fetch(p);
    case decryptedMessageMediaAudio8::ID:
      return decryptedMessageMediaAudio8::fetch(p);
    case decryptedMessageMediaVideo23::ID:
      return decryptedMessageMediaVideo23::fetch(p);
    case decryptedMessageMediaAudio::ID:
      return decryptedMessageMediaAudio::fetch(p);
    case decryptedMessageMediaExternalDocument::ID:
      return decryptedMessageMediaExternalDocument::fetch(p);
    case decryptedMessageMediaPhoto::ID:
      return decryptedMessageMediaPhoto::fetch(p);
    case decryptedMessageMediaVideo::ID:
      return decryptedMessageMediaVideo::fetch(p);
    case decryptedMessageMediaDocument::ID:
      return decryptedMessageMediaDocument::fetch(p);
    case decryptedMessageMediaVenue::ID:
      return decryptedMessageMediaVenue::fetch(p);
    case decryptedMessageMediaWebPage::ID:
      return decryptedMessageMediaWebPage::fetch(p);
    case documentAttributeImageSize::ID:
      return documentAttributeImageSize::fetch(p);
    case documentAttributeAnimated::ID:
      return documentAttributeAnimated::fetch(p);
    case documentAttributeSticker23::ID:
      return documentAttributeSticker23::fetch(p);
    case documentAttributeVideo::ID:
      return documentAttributeVideo::fetch(p);
    case documentAttributeAudio23::ID:
      return documentAttributeAudio23::fetch(p);
    case documentAttributeFilename::ID:
      return documentAttributeFilename::fetch(p);
    case documentAttributeAudio45::ID:
      return documentAttributeAudio45::fetch(p);
    case documentAttributeSticker::ID:
      return documentAttributeSticker::fetch(p);
    case documentAttributeAudio::ID:
      return documentAttributeAudio::fetch(p);
    case documentAttributeVideo66::ID:
      return documentAttributeVideo66::fetch(p);
    case fileLocationUnavailable::ID:
      return fileLocationUnavailable::fetch(p);
    case fileLocation::ID:
      return fileLocation::fetch(p);
    case inputStickerSetShortName::ID:
      return inputStickerSetShortName::fetch(p);
    case inputStickerSetEmpty::ID:
      return inputStickerSetEmpty::fetch(p);
    case messageEntityUnknown::ID:
      return messageEntityUnknown::fetch(p);
    case messageEntityMention::ID:
      return messageEntityMention::fetch(p);
    case messageEntityHashtag::ID:
      return messageEntityHashtag::fetch(p);
    case messageEntityBotCommand::ID:
      return messageEntityBotCommand::fetch(p);
    case messageEntityUrl::ID:
      return messageEntityUrl::fetch(p);
    case messageEntityEmail::ID:
      return messageEntityEmail::fetch(p);
    case messageEntityBold::ID:
      return messageEntityBold::fetch(p);
    case messageEntityItalic::ID:
      return messageEntityItalic::fetch(p);
    case messageEntityCode::ID:
      return messageEntityCode::fetch(p);
    case messageEntityPre::ID:
      return messageEntityPre::fetch(p);
    case messageEntityTextUrl::ID:
      return messageEntityTextUrl::fetch(p);
    case messageEntityMentionName::ID:
      return messageEntityMentionName::fetch(p);
    case messageEntityPhone::ID:
      return messageEntityPhone::fetch(p);
    case messageEntityCashtag::ID:
      return messageEntityCashtag::fetch(p);
    case photoSizeEmpty::ID:
      return photoSizeEmpty::fetch(p);
    case photoSize::ID:
      return photoSize::fetch(p);
    case photoCachedSize::ID:
      return photoCachedSize::fetch(p);
    case sendMessageTypingAction::ID:
      return sendMessageTypingAction::fetch(p);
    case sendMessageCancelAction::ID:
      return sendMessageCancelAction::fetch(p);
    case sendMessageRecordVideoAction::ID:
      return sendMessageRecordVideoAction::fetch(p);
    case sendMessageUploadVideoAction::ID:
      return sendMessageUploadVideoAction::fetch(p);
    case sendMessageRecordAudioAction::ID:
      return sendMessageRecordAudioAction::fetch(p);
    case sendMessageUploadAudioAction::ID:
      return sendMessageUploadAudioAction::fetch(p);
    case sendMessageUploadPhotoAction::ID:
      return sendMessageUploadPhotoAction::fetch(p);
    case sendMessageUploadDocumentAction::ID:
      return sendMessageUploadDocumentAction::fetch(p);
    case sendMessageGeoLocationAction::ID:
      return sendMessageGeoLocationAction::fetch(p);
    case sendMessageChooseContactAction::ID:
      return sendMessageChooseContactAction::fetch(p);
    case sendMessageRecordRoundAction::ID:
      return sendMessageRecordRoundAction::fetch(p);
    case sendMessageUploadRoundAction::ID:
      return sendMessageUploadRoundAction::fetch(p);
    default:
      FAIL(PSTRING() << "Unknown constructor found " << format::as_hex(constructor));
  }
#undef FAIL
}

object_ptr<Function> Function::fetch(TlParser &p) {
#define FAIL(error) p.set_error(error); return nullptr;
  int constructor = p.fetch_int();
  switch (constructor) {
    case test_dummyFunction::ID:
      return test_dummyFunction::fetch(p);
    default:
      FAIL(PSTRING() << "Unknown constructor found " << format::as_hex(constructor));
  }
#undef FAIL
}

object_ptr<DecryptedMessage> DecryptedMessage::fetch(TlParser &p) {
#define FAIL(error) p.set_error(error); return nullptr;
  int constructor = p.fetch_int();
  switch (constructor) {
    case decryptedMessage8::ID:
      return decryptedMessage8::fetch(p);
    case decryptedMessageService8::ID:
      return decryptedMessageService8::fetch(p);
    case decryptedMessage23::ID:
      return decryptedMessage23::fetch(p);
    case decryptedMessageService::ID:
      return decryptedMessageService::fetch(p);
    case decryptedMessage46::ID:
      return decryptedMessage46::fetch(p);
    case decryptedMessage::ID:
      return decryptedMessage::fetch(p);
    default:
      FAIL(PSTRING() << "Unknown constructor found " << format::as_hex(constructor));
  }
#undef FAIL
}

decryptedMessage8::decryptedMessage8()
  : random_id_()
  , random_bytes_()
  , message_()
  , media_()
{}

decryptedMessage8::decryptedMessage8(std::int64_t random_id_, BufferSlice &&random_bytes_, std::string const &message_, object_ptr<DecryptedMessageMedia> &&media_)
  : random_id_(random_id_)
  , random_bytes_(std::move(random_bytes_))
  , message_(message_)
  , media_(std::move(media_))
{}

const std::int32_t decryptedMessage8::ID;

decryptedMessage8::decryptedMessage8(TlParser &p)
#define FAIL(error) p.set_error(error)
  : random_id_(TlFetchLong::parse(p))
  , random_bytes_(TlFetchBytes<BufferSlice>::parse(p))
  , message_(TlFetchString<std::string>::parse(p))
  , media_(TlFetchObject<DecryptedMessageMedia>::parse(p))
#undef FAIL
{}

void decryptedMessage8::store(TlStorerCalcLength &s) const {
  (void)sizeof(s);
  TlStoreBinary::store(random_id_, s);
  TlStoreString::store(random_bytes_, s);
  TlStoreString::store(message_, s);
  TlStoreBoxedUnknown<TlStoreObject>::store(media_, s);
}

void decryptedMessage8::store(TlStorerUnsafe &s) const {
  (void)sizeof(s);
  TlStoreBinary::store(random_id_, s);
  TlStoreString::store(random_bytes_, s);
  TlStoreString::store(message_, s);
  TlStoreBoxedUnknown<TlStoreObject>::store(media_, s);
}

void decryptedMessage8::store(TlStorerToString &s, const char *field_name) const {
  if (!LOG_IS_STRIPPED(ERROR)) {
    s.store_class_begin(field_name, "decryptedMessage8");
    s.store_field("random_id", random_id_);
    s.store_bytes_field("random_bytes", random_bytes_);
    s.store_field("message", message_);
    if (media_ == nullptr) { s.store_field("media", "null"); } else { media_->store(s, "media"); }
    s.store_class_end();
  }
}

decryptedMessageService8::decryptedMessageService8()
  : random_id_()
  , random_bytes_()
  , action_()
{}

decryptedMessageService8::decryptedMessageService8(std::int64_t random_id_, BufferSlice &&random_bytes_, object_ptr<DecryptedMessageAction> &&action_)
  : random_id_(random_id_)
  , random_bytes_(std::move(random_bytes_))
  , action_(std::move(action_))
{}

const std::int32_t decryptedMessageService8::ID;

decryptedMessageService8::decryptedMessageService8(TlParser &p)
#define FAIL(error) p.set_error(error)
  : random_id_(TlFetchLong::parse(p))
  , random_bytes_(TlFetchBytes<BufferSlice>::parse(p))
  , action_(TlFetchObject<DecryptedMessageAction>::parse(p))
#undef FAIL
{}

void decryptedMessageService8::store(TlStorerCalcLength &s) const {
  (void)sizeof(s);
  TlStoreBinary::store(random_id_, s);
  TlStoreString::store(random_bytes_, s);
  TlStoreBoxedUnknown<TlStoreObject>::store(action_, s);
}

void decryptedMessageService8::store(TlStorerUnsafe &s) const {
  (void)sizeof(s);
  TlStoreBinary::store(random_id_, s);
  TlStoreString::store(random_bytes_, s);
  TlStoreBoxedUnknown<TlStoreObject>::store(action_, s);
}

void decryptedMessageService8::store(TlStorerToString &s, const char *field_name) const {
  if (!LOG_IS_STRIPPED(ERROR)) {
    s.store_class_begin(field_name, "decryptedMessageService8");
    s.store_field("random_id", random_id_);
    s.store_bytes_field("random_bytes", random_bytes_);
    if (action_ == nullptr) { s.store_field("action", "null"); } else { action_->store(s, "action"); }
    s.store_class_end();
  }
}

decryptedMessage23::decryptedMessage23()
  : random_id_()
  , ttl_()
  , message_()
  , media_()
{}

decryptedMessage23::decryptedMessage23(std::int64_t random_id_, std::int32_t ttl_, std::string const &message_, object_ptr<DecryptedMessageMedia> &&media_)
  : random_id_(random_id_)
  , ttl_(ttl_)
  , message_(message_)
  , media_(std::move(media_))
{}

const std::int32_t decryptedMessage23::ID;

decryptedMessage23::decryptedMessage23(TlParser &p)
#define FAIL(error) p.set_error(error)
  : random_id_(TlFetchLong::parse(p))
  , ttl_(TlFetchInt::parse(p))
  , message_(TlFetchString<std::string>::parse(p))
  , media_(TlFetchObject<DecryptedMessageMedia>::parse(p))
#undef FAIL
{}

void decryptedMessage23::store(TlStorerCalcLength &s) const {
  (void)sizeof(s);
  TlStoreBinary::store(random_id_, s);
  TlStoreBinary::store(ttl_, s);
  TlStoreString::store(message_, s);
  TlStoreBoxedUnknown<TlStoreObject>::store(media_, s);
}

void decryptedMessage23::store(TlStorerUnsafe &s) const {
  (void)sizeof(s);
  TlStoreBinary::store(random_id_, s);
  TlStoreBinary::store(ttl_, s);
  TlStoreString::store(message_, s);
  TlStoreBoxedUnknown<TlStoreObject>::store(media_, s);
}

void decryptedMessage23::store(TlStorerToString &s, const char *field_name) const {
  if (!LOG_IS_STRIPPED(ERROR)) {
    s.store_class_begin(field_name, "decryptedMessage23");
    s.store_field("random_id", random_id_);
    s.store_field("ttl", ttl_);
    s.store_field("message", message_);
    if (media_ == nullptr) { s.store_field("media", "null"); } else { media_->store(s, "media"); }
    s.store_class_end();
  }
}

decryptedMessageService::decryptedMessageService()
  : random_id_()
  , action_()
{}

decryptedMessageService::decryptedMessageService(std::int64_t random_id_, object_ptr<DecryptedMessageAction> &&action_)
  : random_id_(random_id_)
  , action_(std::move(action_))
{}

const std::int32_t decryptedMessageService::ID;

decryptedMessageService::decryptedMessageService(TlParser &p)
#define FAIL(error) p.set_error(error)
  : random_id_(TlFetchLong::parse(p))
  , action_(TlFetchObject<DecryptedMessageAction>::parse(p))
#undef FAIL
{}

void decryptedMessageService::store(TlStorerCalcLength &s) const {
  (void)sizeof(s);
  TlStoreBinary::store(random_id_, s);
  TlStoreBoxedUnknown<TlStoreObject>::store(action_, s);
}

void decryptedMessageService::store(TlStorerUnsafe &s) const {
  (void)sizeof(s);
  TlStoreBinary::store(random_id_, s);
  TlStoreBoxedUnknown<TlStoreObject>::store(action_, s);
}

void decryptedMessageService::store(TlStorerToString &s, const char *field_name) const {
  if (!LOG_IS_STRIPPED(ERROR)) {
    s.store_class_begin(field_name, "decryptedMessageService");
    s.store_field("random_id", random_id_);
    if (action_ == nullptr) { s.store_field("action", "null"); } else { action_->store(s, "action"); }
    s.store_class_end();
  }
}

decryptedMessage46::decryptedMessage46()
  : flags_()
  , random_id_()
  , ttl_()
  , message_()
  , media_()
  , entities_()
  , via_bot_name_()
  , reply_to_random_id_()
{}

decryptedMessage46::decryptedMessage46(std::int32_t flags_, std::int64_t random_id_, std::int32_t ttl_, std::string const &message_, object_ptr<DecryptedMessageMedia> &&media_, std::vector<object_ptr<MessageEntity>> &&entities_, std::string const &via_bot_name_, std::int64_t reply_to_random_id_)
  : flags_(flags_)
  , random_id_(random_id_)
  , ttl_(ttl_)
  , message_(message_)
  , media_(std::move(media_))
  , entities_(std::move(entities_))
  , via_bot_name_(via_bot_name_)
  , reply_to_random_id_(reply_to_random_id_)
{}

const std::int32_t decryptedMessage46::ID;

object_ptr<decryptedMessage46> decryptedMessage46::fetch(TlParser &p) {
#define FAIL(error) p.set_error(error); return nullptr;
  object_ptr<decryptedMessage46> res = make_tl_object<decryptedMessage46>();
  std::int32_t var0;
  if ((var0 = res->flags_ = TlFetchInt::parse(p)) < 0) { FAIL("Variable of type # can't be negative"); }
  res->random_id_ = TlFetchLong::parse(p);
  res->ttl_ = TlFetchInt::parse(p);
  res->message_ = TlFetchString<std::string>::parse(p);
  if (var0 & 512) { res->media_ = TlFetchObject<DecryptedMessageMedia>::parse(p); }
  if (var0 & 128) { res->entities_ = TlFetchBoxed<TlFetchVector<TlFetchObject<MessageEntity>>, 481674261>::parse(p); }
  if (var0 & 2048) { res->via_bot_name_ = TlFetchString<std::string>::parse(p); }
  if (var0 & 8) { res->reply_to_random_id_ = TlFetchLong::parse(p); }
  if (p.get_error()) { FAIL(""); }
  return res;
#undef FAIL
}

void decryptedMessage46::store(TlStorerCalcLength &s) const {
  (void)sizeof(s);
  std::int32_t var0;
  TlStoreBinary::store((var0 = flags_), s);
  TlStoreBinary::store(random_id_, s);
  TlStoreBinary::store(ttl_, s);
  TlStoreString::store(message_, s);
  if (var0 & 512) { TlStoreBoxedUnknown<TlStoreObject>::store(media_, s); }
  if (var0 & 128) { TlStoreBoxed<TlStoreVector<TlStoreBoxedUnknown<TlStoreObject>>, 481674261>::store(entities_, s); }
  if (var0 & 2048) { TlStoreString::store(via_bot_name_, s); }
  if (var0 & 8) { TlStoreBinary::store(reply_to_random_id_, s); }
}

void decryptedMessage46::store(TlStorerUnsafe &s) const {
  (void)sizeof(s);
  std::int32_t var0;
  TlStoreBinary::store((var0 = flags_), s);
  TlStoreBinary::store(random_id_, s);
  TlStoreBinary::store(ttl_, s);
  TlStoreString::store(message_, s);
  if (var0 & 512) { TlStoreBoxedUnknown<TlStoreObject>::store(media_, s); }
  if (var0 & 128) { TlStoreBoxed<TlStoreVector<TlStoreBoxedUnknown<TlStoreObject>>, 481674261>::store(entities_, s); }
  if (var0 & 2048) { TlStoreString::store(via_bot_name_, s); }
  if (var0 & 8) { TlStoreBinary::store(reply_to_random_id_, s); }
}

void decryptedMessage46::store(TlStorerToString &s, const char *field_name) const {
  if (!LOG_IS_STRIPPED(ERROR)) {
    s.store_class_begin(field_name, "decryptedMessage46");
  std::int32_t var0;
    s.store_field("flags", (var0 = flags_));
    s.store_field("random_id", random_id_);
    s.store_field("ttl", ttl_);
    s.store_field("message", message_);
    if (var0 & 512) { if (media_ == nullptr) { s.store_field("media", "null"); } else { media_->store(s, "media"); } }
    if (var0 & 128) { { const std::vector<object_ptr<MessageEntity>> &v = entities_; const std::uint32_t multiplicity = static_cast<std::uint32_t>(v.size()); const auto vector_name = "vector[" + td::to_string(multiplicity)+ "]"; s.store_class_begin("entities", vector_name.c_str()); for (std::uint32_t i = 0; i < multiplicity; i++) { if (v[i] == nullptr) { s.store_field("", "null"); } else { v[i]->store(s, ""); } } s.store_class_end(); } }
    if (var0 & 2048) { s.store_field("via_bot_name", via_bot_name_); }
    if (var0 & 8) { s.store_field("reply_to_random_id", reply_to_random_id_); }
    s.store_class_end();
  }
}

decryptedMessage::decryptedMessage()
  : flags_()
  , random_id_()
  , ttl_()
  , message_()
  , media_()
  , entities_()
  , via_bot_name_()
  , reply_to_random_id_()
  , grouped_id_()
{}

decryptedMessage::decryptedMessage(std::int32_t flags_, std::int64_t random_id_, std::int32_t ttl_, std::string const &message_, object_ptr<DecryptedMessageMedia> &&media_, std::vector<object_ptr<MessageEntity>> &&entities_, std::string const &via_bot_name_, std::int64_t reply_to_random_id_, std::int64_t grouped_id_)
  : flags_(flags_)
  , random_id_(random_id_)
  , ttl_(ttl_)
  , message_(message_)
  , media_(std::move(media_))
  , entities_(std::move(entities_))
  , via_bot_name_(via_bot_name_)
  , reply_to_random_id_(reply_to_random_id_)
  , grouped_id_(grouped_id_)
{}

const std::int32_t decryptedMessage::ID;

object_ptr<decryptedMessage> decryptedMessage::fetch(TlParser &p) {
#define FAIL(error) p.set_error(error); return nullptr;
  object_ptr<decryptedMessage> res = make_tl_object<decryptedMessage>();
  std::int32_t var0;
  if ((var0 = res->flags_ = TlFetchInt::parse(p)) < 0) { FAIL("Variable of type # can't be negative"); }
  res->random_id_ = TlFetchLong::parse(p);
  res->ttl_ = TlFetchInt::parse(p);
  res->message_ = TlFetchString<std::string>::parse(p);
  if (var0 & 512) { res->media_ = TlFetchObject<DecryptedMessageMedia>::parse(p); }
  if (var0 & 128) { res->entities_ = TlFetchBoxed<TlFetchVector<TlFetchObject<MessageEntity>>, 481674261>::parse(p); }
  if (var0 & 2048) { res->via_bot_name_ = TlFetchString<std::string>::parse(p); }
  if (var0 & 8) { res->reply_to_random_id_ = TlFetchLong::parse(p); }
  if (var0 & 131072) { res->grouped_id_ = TlFetchLong::parse(p); }
  if (p.get_error()) { FAIL(""); }
  return res;
#undef FAIL
}

void decryptedMessage::store(TlStorerCalcLength &s) const {
  (void)sizeof(s);
  std::int32_t var0;
  TlStoreBinary::store((var0 = flags_), s);
  TlStoreBinary::store(random_id_, s);
  TlStoreBinary::store(ttl_, s);
  TlStoreString::store(message_, s);
  if (var0 & 512) { TlStoreBoxedUnknown<TlStoreObject>::store(media_, s); }
  if (var0 & 128) { TlStoreBoxed<TlStoreVector<TlStoreBoxedUnknown<TlStoreObject>>, 481674261>::store(entities_, s); }
  if (var0 & 2048) { TlStoreString::store(via_bot_name_, s); }
  if (var0 & 8) { TlStoreBinary::store(reply_to_random_id_, s); }
  if (var0 & 131072) { TlStoreBinary::store(grouped_id_, s); }
}

void decryptedMessage::store(TlStorerUnsafe &s) const {
  (void)sizeof(s);
  std::int32_t var0;
  TlStoreBinary::store((var0 = flags_), s);
  TlStoreBinary::store(random_id_, s);
  TlStoreBinary::store(ttl_, s);
  TlStoreString::store(message_, s);
  if (var0 & 512) { TlStoreBoxedUnknown<TlStoreObject>::store(media_, s); }
  if (var0 & 128) { TlStoreBoxed<TlStoreVector<TlStoreBoxedUnknown<TlStoreObject>>, 481674261>::store(entities_, s); }
  if (var0 & 2048) { TlStoreString::store(via_bot_name_, s); }
  if (var0 & 8) { TlStoreBinary::store(reply_to_random_id_, s); }
  if (var0 & 131072) { TlStoreBinary::store(grouped_id_, s); }
}

void decryptedMessage::store(TlStorerToString &s, const char *field_name) const {
  if (!LOG_IS_STRIPPED(ERROR)) {
    s.store_class_begin(field_name, "decryptedMessage");
  std::int32_t var0;
    s.store_field("flags", (var0 = flags_));
    s.store_field("random_id", random_id_);
    s.store_field("ttl", ttl_);
    s.store_field("message", message_);
    if (var0 & 512) { if (media_ == nullptr) { s.store_field("media", "null"); } else { media_->store(s, "media"); } }
    if (var0 & 128) { { const std::vector<object_ptr<MessageEntity>> &v = entities_; const std::uint32_t multiplicity = static_cast<std::uint32_t>(v.size()); const auto vector_name = "vector[" + td::to_string(multiplicity)+ "]"; s.store_class_begin("entities", vector_name.c_str()); for (std::uint32_t i = 0; i < multiplicity; i++) { if (v[i] == nullptr) { s.store_field("", "null"); } else { v[i]->store(s, ""); } } s.store_class_end(); } }
    if (var0 & 2048) { s.store_field("via_bot_name", via_bot_name_); }
    if (var0 & 8) { s.store_field("reply_to_random_id", reply_to_random_id_); }
    if (var0 & 131072) { s.store_field("grouped_id", grouped_id_); }
    s.store_class_end();
  }
}

object_ptr<DecryptedMessageAction> DecryptedMessageAction::fetch(TlParser &p) {
#define FAIL(error) p.set_error(error); return nullptr;
  int constructor = p.fetch_int();
  switch (constructor) {
    case decryptedMessageActionSetMessageTTL::ID:
      return decryptedMessageActionSetMessageTTL::fetch(p);
    case decryptedMessageActionReadMessages::ID:
      return decryptedMessageActionReadMessages::fetch(p);
    case decryptedMessageActionDeleteMessages::ID:
      return decryptedMessageActionDeleteMessages::fetch(p);
    case decryptedMessageActionScreenshotMessages::ID:
      return decryptedMessageActionScreenshotMessages::fetch(p);
    case decryptedMessageActionFlushHistory::ID:
      return decryptedMessageActionFlushHistory::fetch(p);
    case decryptedMessageActionResend::ID:
      return decryptedMessageActionResend::fetch(p);
    case decryptedMessageActionNotifyLayer::ID:
      return decryptedMessageActionNotifyLayer::fetch(p);
    case decryptedMessageActionTyping::ID:
      return decryptedMessageActionTyping::fetch(p);
    case decryptedMessageActionRequestKey::ID:
      return decryptedMessageActionRequestKey::fetch(p);
    case decryptedMessageActionAcceptKey::ID:
      return decryptedMessageActionAcceptKey::fetch(p);
    case decryptedMessageActionAbortKey::ID:
      return decryptedMessageActionAbortKey::fetch(p);
    case decryptedMessageActionCommitKey::ID:
      return decryptedMessageActionCommitKey::fetch(p);
    case decryptedMessageActionNoop::ID:
      return decryptedMessageActionNoop::fetch(p);
    default:
      FAIL(PSTRING() << "Unknown constructor found " << format::as_hex(constructor));
  }
#undef FAIL
}

decryptedMessageActionSetMessageTTL::decryptedMessageActionSetMessageTTL()
  : ttl_seconds_()
{}

decryptedMessageActionSetMessageTTL::decryptedMessageActionSetMessageTTL(std::int32_t ttl_seconds_)
  : ttl_seconds_(ttl_seconds_)
{}

const std::int32_t decryptedMessageActionSetMessageTTL::ID;

decryptedMessageActionSetMessageTTL::decryptedMessageActionSetMessageTTL(TlParser &p)
#define FAIL(error) p.set_error(error)
  : ttl_seconds_(TlFetchInt::parse(p))
#undef FAIL
{}

void decryptedMessageActionSetMessageTTL::store(TlStorerCalcLength &s) const {
  (void)sizeof(s);
  TlStoreBinary::store(ttl_seconds_, s);
}

void decryptedMessageActionSetMessageTTL::store(TlStorerUnsafe &s) const {
  (void)sizeof(s);
  TlStoreBinary::store(ttl_seconds_, s);
}

void decryptedMessageActionSetMessageTTL::store(TlStorerToString &s, const char *field_name) const {
  if (!LOG_IS_STRIPPED(ERROR)) {
    s.store_class_begin(field_name, "decryptedMessageActionSetMessageTTL");
    s.store_field("ttl_seconds", ttl_seconds_);
    s.store_class_end();
  }
}

decryptedMessageActionReadMessages::decryptedMessageActionReadMessages()
  : random_ids_()
{}

decryptedMessageActionReadMessages::decryptedMessageActionReadMessages(std::vector<std::int64_t> &&random_ids_)
  : random_ids_(std::move(random_ids_))
{}

const std::int32_t decryptedMessageActionReadMessages::ID;

decryptedMessageActionReadMessages::decryptedMessageActionReadMessages(TlParser &p)
#define FAIL(error) p.set_error(error)
  : random_ids_(TlFetchBoxed<TlFetchVector<TlFetchLong>, 481674261>::parse(p))
#undef FAIL
{}

void decryptedMessageActionReadMessages::store(TlStorerCalcLength &s) const {
  (void)sizeof(s);
  TlStoreBoxed<TlStoreVector<TlStoreBinary>, 481674261>::store(random_ids_, s);
}

void decryptedMessageActionReadMessages::store(TlStorerUnsafe &s) const {
  (void)sizeof(s);
  TlStoreBoxed<TlStoreVector<TlStoreBinary>, 481674261>::store(random_ids_, s);
}

void decryptedMessageActionReadMessages::store(TlStorerToString &s, const char *field_name) const {
  if (!LOG_IS_STRIPPED(ERROR)) {
    s.store_class_begin(field_name, "decryptedMessageActionReadMessages");
    { const std::vector<std::int64_t> &v = random_ids_; const std::uint32_t multiplicity = static_cast<std::uint32_t>(v.size()); const auto vector_name = "vector[" + td::to_string(multiplicity)+ "]"; s.store_class_begin("random_ids", vector_name.c_str()); for (std::uint32_t i = 0; i < multiplicity; i++) { s.store_field("", v[i]); } s.store_class_end(); }
    s.store_class_end();
  }
}

decryptedMessageActionDeleteMessages::decryptedMessageActionDeleteMessages()
  : random_ids_()
{}

decryptedMessageActionDeleteMessages::decryptedMessageActionDeleteMessages(std::vector<std::int64_t> &&random_ids_)
  : random_ids_(std::move(random_ids_))
{}

const std::int32_t decryptedMessageActionDeleteMessages::ID;

decryptedMessageActionDeleteMessages::decryptedMessageActionDeleteMessages(TlParser &p)
#define FAIL(error) p.set_error(error)
  : random_ids_(TlFetchBoxed<TlFetchVector<TlFetchLong>, 481674261>::parse(p))
#undef FAIL
{}

void decryptedMessageActionDeleteMessages::store(TlStorerCalcLength &s) const {
  (void)sizeof(s);
  TlStoreBoxed<TlStoreVector<TlStoreBinary>, 481674261>::store(random_ids_, s);
}

void decryptedMessageActionDeleteMessages::store(TlStorerUnsafe &s) const {
  (void)sizeof(s);
  TlStoreBoxed<TlStoreVector<TlStoreBinary>, 481674261>::store(random_ids_, s);
}

void decryptedMessageActionDeleteMessages::store(TlStorerToString &s, const char *field_name) const {
  if (!LOG_IS_STRIPPED(ERROR)) {
    s.store_class_begin(field_name, "decryptedMessageActionDeleteMessages");
    { const std::vector<std::int64_t> &v = random_ids_; const std::uint32_t multiplicity = static_cast<std::uint32_t>(v.size()); const auto vector_name = "vector[" + td::to_string(multiplicity)+ "]"; s.store_class_begin("random_ids", vector_name.c_str()); for (std::uint32_t i = 0; i < multiplicity; i++) { s.store_field("", v[i]); } s.store_class_end(); }
    s.store_class_end();
  }
}

decryptedMessageActionScreenshotMessages::decryptedMessageActionScreenshotMessages()
  : random_ids_()
{}

decryptedMessageActionScreenshotMessages::decryptedMessageActionScreenshotMessages(std::vector<std::int64_t> &&random_ids_)
  : random_ids_(std::move(random_ids_))
{}

const std::int32_t decryptedMessageActionScreenshotMessages::ID;

decryptedMessageActionScreenshotMessages::decryptedMessageActionScreenshotMessages(TlParser &p)
#define FAIL(error) p.set_error(error)
  : random_ids_(TlFetchBoxed<TlFetchVector<TlFetchLong>, 481674261>::parse(p))
#undef FAIL
{}

void decryptedMessageActionScreenshotMessages::store(TlStorerCalcLength &s) const {
  (void)sizeof(s);
  TlStoreBoxed<TlStoreVector<TlStoreBinary>, 481674261>::store(random_ids_, s);
}

void decryptedMessageActionScreenshotMessages::store(TlStorerUnsafe &s) const {
  (void)sizeof(s);
  TlStoreBoxed<TlStoreVector<TlStoreBinary>, 481674261>::store(random_ids_, s);
}

void decryptedMessageActionScreenshotMessages::store(TlStorerToString &s, const char *field_name) const {
  if (!LOG_IS_STRIPPED(ERROR)) {
    s.store_class_begin(field_name, "decryptedMessageActionScreenshotMessages");
    { const std::vector<std::int64_t> &v = random_ids_; const std::uint32_t multiplicity = static_cast<std::uint32_t>(v.size()); const auto vector_name = "vector[" + td::to_string(multiplicity)+ "]"; s.store_class_begin("random_ids", vector_name.c_str()); for (std::uint32_t i = 0; i < multiplicity; i++) { s.store_field("", v[i]); } s.store_class_end(); }
    s.store_class_end();
  }
}

decryptedMessageActionFlushHistory::decryptedMessageActionFlushHistory() {
}

const std::int32_t decryptedMessageActionFlushHistory::ID;

decryptedMessageActionFlushHistory::decryptedMessageActionFlushHistory(TlParser &p)
#define FAIL(error) p.set_error(error)
#undef FAIL
{
  (void)p;
}

void decryptedMessageActionFlushHistory::store(TlStorerCalcLength &s) const {
  (void)sizeof(s);
}

void decryptedMessageActionFlushHistory::store(TlStorerUnsafe &s) const {
  (void)sizeof(s);
}

void decryptedMessageActionFlushHistory::store(TlStorerToString &s, const char *field_name) const {
  if (!LOG_IS_STRIPPED(ERROR)) {
    s.store_class_begin(field_name, "decryptedMessageActionFlushHistory");
    s.store_class_end();
  }
}

decryptedMessageActionResend::decryptedMessageActionResend()
  : start_seq_no_()
  , end_seq_no_()
{}

decryptedMessageActionResend::decryptedMessageActionResend(std::int32_t start_seq_no_, std::int32_t end_seq_no_)
  : start_seq_no_(start_seq_no_)
  , end_seq_no_(end_seq_no_)
{}

const std::int32_t decryptedMessageActionResend::ID;

decryptedMessageActionResend::decryptedMessageActionResend(TlParser &p)
#define FAIL(error) p.set_error(error)
  : start_seq_no_(TlFetchInt::parse(p))
  , end_seq_no_(TlFetchInt::parse(p))
#undef FAIL
{}

void decryptedMessageActionResend::store(TlStorerCalcLength &s) const {
  (void)sizeof(s);
  TlStoreBinary::store(start_seq_no_, s);
  TlStoreBinary::store(end_seq_no_, s);
}

void decryptedMessageActionResend::store(TlStorerUnsafe &s) const {
  (void)sizeof(s);
  TlStoreBinary::store(start_seq_no_, s);
  TlStoreBinary::store(end_seq_no_, s);
}

void decryptedMessageActionResend::store(TlStorerToString &s, const char *field_name) const {
  if (!LOG_IS_STRIPPED(ERROR)) {
    s.store_class_begin(field_name, "decryptedMessageActionResend");
    s.store_field("start_seq_no", start_seq_no_);
    s.store_field("end_seq_no", end_seq_no_);
    s.store_class_end();
  }
}

decryptedMessageActionNotifyLayer::decryptedMessageActionNotifyLayer()
  : layer_()
{}

decryptedMessageActionNotifyLayer::decryptedMessageActionNotifyLayer(std::int32_t layer_)
  : layer_(layer_)
{}

const std::int32_t decryptedMessageActionNotifyLayer::ID;

decryptedMessageActionNotifyLayer::decryptedMessageActionNotifyLayer(TlParser &p)
#define FAIL(error) p.set_error(error)
  : layer_(TlFetchInt::parse(p))
#undef FAIL
{}

void decryptedMessageActionNotifyLayer::store(TlStorerCalcLength &s) const {
  (void)sizeof(s);
  TlStoreBinary::store(layer_, s);
}

void decryptedMessageActionNotifyLayer::store(TlStorerUnsafe &s) const {
  (void)sizeof(s);
  TlStoreBinary::store(layer_, s);
}

void decryptedMessageActionNotifyLayer::store(TlStorerToString &s, const char *field_name) const {
  if (!LOG_IS_STRIPPED(ERROR)) {
    s.store_class_begin(field_name, "decryptedMessageActionNotifyLayer");
    s.store_field("layer", layer_);
    s.store_class_end();
  }
}

decryptedMessageActionTyping::decryptedMessageActionTyping()
  : action_()
{}

decryptedMessageActionTyping::decryptedMessageActionTyping(object_ptr<SendMessageAction> &&action_)
  : action_(std::move(action_))
{}

const std::int32_t decryptedMessageActionTyping::ID;

decryptedMessageActionTyping::decryptedMessageActionTyping(TlParser &p)
#define FAIL(error) p.set_error(error)
  : action_(TlFetchObject<SendMessageAction>::parse(p))
#undef FAIL
{}

void decryptedMessageActionTyping::store(TlStorerCalcLength &s) const {
  (void)sizeof(s);
  TlStoreBoxedUnknown<TlStoreObject>::store(action_, s);
}

void decryptedMessageActionTyping::store(TlStorerUnsafe &s) const {
  (void)sizeof(s);
  TlStoreBoxedUnknown<TlStoreObject>::store(action_, s);
}

void decryptedMessageActionTyping::store(TlStorerToString &s, const char *field_name) const {
  if (!LOG_IS_STRIPPED(ERROR)) {
    s.store_class_begin(field_name, "decryptedMessageActionTyping");
    if (action_ == nullptr) { s.store_field("action", "null"); } else { action_->store(s, "action"); }
    s.store_class_end();
  }
}

decryptedMessageActionRequestKey::decryptedMessageActionRequestKey()
  : exchange_id_()
  , g_a_()
{}

decryptedMessageActionRequestKey::decryptedMessageActionRequestKey(std::int64_t exchange_id_, BufferSlice &&g_a_)
  : exchange_id_(exchange_id_)
  , g_a_(std::move(g_a_))
{}

const std::int32_t decryptedMessageActionRequestKey::ID;

decryptedMessageActionRequestKey::decryptedMessageActionRequestKey(TlParser &p)
#define FAIL(error) p.set_error(error)
  : exchange_id_(TlFetchLong::parse(p))
  , g_a_(TlFetchBytes<BufferSlice>::parse(p))
#undef FAIL
{}

void decryptedMessageActionRequestKey::store(TlStorerCalcLength &s) const {
  (void)sizeof(s);
  TlStoreBinary::store(exchange_id_, s);
  TlStoreString::store(g_a_, s);
}

void decryptedMessageActionRequestKey::store(TlStorerUnsafe &s) const {
  (void)sizeof(s);
  TlStoreBinary::store(exchange_id_, s);
  TlStoreString::store(g_a_, s);
}

void decryptedMessageActionRequestKey::store(TlStorerToString &s, const char *field_name) const {
  if (!LOG_IS_STRIPPED(ERROR)) {
    s.store_class_begin(field_name, "decryptedMessageActionRequestKey");
    s.store_field("exchange_id", exchange_id_);
    s.store_bytes_field("g_a", g_a_);
    s.store_class_end();
  }
}

decryptedMessageActionAcceptKey::decryptedMessageActionAcceptKey()
  : exchange_id_()
  , g_b_()
  , key_fingerprint_()
{}

decryptedMessageActionAcceptKey::decryptedMessageActionAcceptKey(std::int64_t exchange_id_, BufferSlice &&g_b_, std::int64_t key_fingerprint_)
  : exchange_id_(exchange_id_)
  , g_b_(std::move(g_b_))
  , key_fingerprint_(key_fingerprint_)
{}

const std::int32_t decryptedMessageActionAcceptKey::ID;

decryptedMessageActionAcceptKey::decryptedMessageActionAcceptKey(TlParser &p)
#define FAIL(error) p.set_error(error)
  : exchange_id_(TlFetchLong::parse(p))
  , g_b_(TlFetchBytes<BufferSlice>::parse(p))
  , key_fingerprint_(TlFetchLong::parse(p))
#undef FAIL
{}

void decryptedMessageActionAcceptKey::store(TlStorerCalcLength &s) const {
  (void)sizeof(s);
  TlStoreBinary::store(exchange_id_, s);
  TlStoreString::store(g_b_, s);
  TlStoreBinary::store(key_fingerprint_, s);
}

void decryptedMessageActionAcceptKey::store(TlStorerUnsafe &s) const {
  (void)sizeof(s);
  TlStoreBinary::store(exchange_id_, s);
  TlStoreString::store(g_b_, s);
  TlStoreBinary::store(key_fingerprint_, s);
}

void decryptedMessageActionAcceptKey::store(TlStorerToString &s, const char *field_name) const {
  if (!LOG_IS_STRIPPED(ERROR)) {
    s.store_class_begin(field_name, "decryptedMessageActionAcceptKey");
    s.store_field("exchange_id", exchange_id_);
    s.store_bytes_field("g_b", g_b_);
    s.store_field("key_fingerprint", key_fingerprint_);
    s.store_class_end();
  }
}

decryptedMessageActionAbortKey::decryptedMessageActionAbortKey()
  : exchange_id_()
{}

decryptedMessageActionAbortKey::decryptedMessageActionAbortKey(std::int64_t exchange_id_)
  : exchange_id_(exchange_id_)
{}

const std::int32_t decryptedMessageActionAbortKey::ID;

decryptedMessageActionAbortKey::decryptedMessageActionAbortKey(TlParser &p)
#define FAIL(error) p.set_error(error)
  : exchange_id_(TlFetchLong::parse(p))
#undef FAIL
{}

void decryptedMessageActionAbortKey::store(TlStorerCalcLength &s) const {
  (void)sizeof(s);
  TlStoreBinary::store(exchange_id_, s);
}

void decryptedMessageActionAbortKey::store(TlStorerUnsafe &s) const {
  (void)sizeof(s);
  TlStoreBinary::store(exchange_id_, s);
}

void decryptedMessageActionAbortKey::store(TlStorerToString &s, const char *field_name) const {
  if (!LOG_IS_STRIPPED(ERROR)) {
    s.store_class_begin(field_name, "decryptedMessageActionAbortKey");
    s.store_field("exchange_id", exchange_id_);
    s.store_class_end();
  }
}

decryptedMessageActionCommitKey::decryptedMessageActionCommitKey()
  : exchange_id_()
  , key_fingerprint_()
{}

decryptedMessageActionCommitKey::decryptedMessageActionCommitKey(std::int64_t exchange_id_, std::int64_t key_fingerprint_)
  : exchange_id_(exchange_id_)
  , key_fingerprint_(key_fingerprint_)
{}

const std::int32_t decryptedMessageActionCommitKey::ID;

decryptedMessageActionCommitKey::decryptedMessageActionCommitKey(TlParser &p)
#define FAIL(error) p.set_error(error)
  : exchange_id_(TlFetchLong::parse(p))
  , key_fingerprint_(TlFetchLong::parse(p))
#undef FAIL
{}

void decryptedMessageActionCommitKey::store(TlStorerCalcLength &s) const {
  (void)sizeof(s);
  TlStoreBinary::store(exchange_id_, s);
  TlStoreBinary::store(key_fingerprint_, s);
}

void decryptedMessageActionCommitKey::store(TlStorerUnsafe &s) const {
  (void)sizeof(s);
  TlStoreBinary::store(exchange_id_, s);
  TlStoreBinary::store(key_fingerprint_, s);
}

void decryptedMessageActionCommitKey::store(TlStorerToString &s, const char *field_name) const {
  if (!LOG_IS_STRIPPED(ERROR)) {
    s.store_class_begin(field_name, "decryptedMessageActionCommitKey");
    s.store_field("exchange_id", exchange_id_);
    s.store_field("key_fingerprint", key_fingerprint_);
    s.store_class_end();
  }
}

decryptedMessageActionNoop::decryptedMessageActionNoop() {
}

const std::int32_t decryptedMessageActionNoop::ID;

decryptedMessageActionNoop::decryptedMessageActionNoop(TlParser &p)
#define FAIL(error) p.set_error(error)
#undef FAIL
{
  (void)p;
}

void decryptedMessageActionNoop::store(TlStorerCalcLength &s) const {
  (void)sizeof(s);
}

void decryptedMessageActionNoop::store(TlStorerUnsafe &s) const {
  (void)sizeof(s);
}

void decryptedMessageActionNoop::store(TlStorerToString &s, const char *field_name) const {
  if (!LOG_IS_STRIPPED(ERROR)) {
    s.store_class_begin(field_name, "decryptedMessageActionNoop");
    s.store_class_end();
  }
}

decryptedMessageLayer::decryptedMessageLayer()
  : random_bytes_()
  , layer_()
  , in_seq_no_()
  , out_seq_no_()
  , message_()
{}

decryptedMessageLayer::decryptedMessageLayer(BufferSlice &&random_bytes_, std::int32_t layer_, std::int32_t in_seq_no_, std::int32_t out_seq_no_, object_ptr<DecryptedMessage> &&message_)
  : random_bytes_(std::move(random_bytes_))
  , layer_(layer_)
  , in_seq_no_(in_seq_no_)
  , out_seq_no_(out_seq_no_)
  , message_(std::move(message_))
{}

const std::int32_t decryptedMessageLayer::ID;

decryptedMessageLayer::decryptedMessageLayer(TlParser &p)
#define FAIL(error) p.set_error(error)
  : random_bytes_(TlFetchBytes<BufferSlice>::parse(p))
  , layer_(TlFetchInt::parse(p))
  , in_seq_no_(TlFetchInt::parse(p))
  , out_seq_no_(TlFetchInt::parse(p))
  , message_(TlFetchObject<DecryptedMessage>::parse(p))
#undef FAIL
{}

void decryptedMessageLayer::store(TlStorerCalcLength &s) const {
  (void)sizeof(s);
  TlStoreString::store(random_bytes_, s);
  TlStoreBinary::store(layer_, s);
  TlStoreBinary::store(in_seq_no_, s);
  TlStoreBinary::store(out_seq_no_, s);
  TlStoreBoxedUnknown<TlStoreObject>::store(message_, s);
}

void decryptedMessageLayer::store(TlStorerUnsafe &s) const {
  (void)sizeof(s);
  TlStoreString::store(random_bytes_, s);
  TlStoreBinary::store(layer_, s);
  TlStoreBinary::store(in_seq_no_, s);
  TlStoreBinary::store(out_seq_no_, s);
  TlStoreBoxedUnknown<TlStoreObject>::store(message_, s);
}

void decryptedMessageLayer::store(TlStorerToString &s, const char *field_name) const {
  if (!LOG_IS_STRIPPED(ERROR)) {
    s.store_class_begin(field_name, "decryptedMessageLayer");
    s.store_bytes_field("random_bytes", random_bytes_);
    s.store_field("layer", layer_);
    s.store_field("in_seq_no", in_seq_no_);
    s.store_field("out_seq_no", out_seq_no_);
    if (message_ == nullptr) { s.store_field("message", "null"); } else { message_->store(s, "message"); }
    s.store_class_end();
  }
}

object_ptr<DecryptedMessageMedia> DecryptedMessageMedia::fetch(TlParser &p) {
#define FAIL(error) p.set_error(error); return nullptr;
  int constructor = p.fetch_int();
  switch (constructor) {
    case decryptedMessageMediaEmpty::ID:
      return decryptedMessageMediaEmpty::fetch(p);
    case decryptedMessageMediaPhoto23::ID:
      return decryptedMessageMediaPhoto23::fetch(p);
    case decryptedMessageMediaVideo8::ID:
      return decryptedMessageMediaVideo8::fetch(p);
    case decryptedMessageMediaGeoPoint::ID:
      return decryptedMessageMediaGeoPoint::fetch(p);
    case decryptedMessageMediaContact::ID:
      return decryptedMessageMediaContact::fetch(p);
    case decryptedMessageMediaDocument23::ID:
      return decryptedMessageMediaDocument23::fetch(p);
    case decryptedMessageMediaAudio8::ID:
      return decryptedMessageMediaAudio8::fetch(p);
    case decryptedMessageMediaVideo23::ID:
      return decryptedMessageMediaVideo23::fetch(p);
    case decryptedMessageMediaAudio::ID:
      return decryptedMessageMediaAudio::fetch(p);
    case decryptedMessageMediaExternalDocument::ID:
      return decryptedMessageMediaExternalDocument::fetch(p);
    case decryptedMessageMediaPhoto::ID:
      return decryptedMessageMediaPhoto::fetch(p);
    case decryptedMessageMediaVideo::ID:
      return decryptedMessageMediaVideo::fetch(p);
    case decryptedMessageMediaDocument::ID:
      return decryptedMessageMediaDocument::fetch(p);
    case decryptedMessageMediaVenue::ID:
      return decryptedMessageMediaVenue::fetch(p);
    case decryptedMessageMediaWebPage::ID:
      return decryptedMessageMediaWebPage::fetch(p);
    default:
      FAIL(PSTRING() << "Unknown constructor found " << format::as_hex(constructor));
  }
#undef FAIL
}

decryptedMessageMediaEmpty::decryptedMessageMediaEmpty() {
}

const std::int32_t decryptedMessageMediaEmpty::ID;

decryptedMessageMediaEmpty::decryptedMessageMediaEmpty(TlParser &p)
#define FAIL(error) p.set_error(error)
#undef FAIL
{
  (void)p;
}

void decryptedMessageMediaEmpty::store(TlStorerCalcLength &s) const {
  (void)sizeof(s);
}

void decryptedMessageMediaEmpty::store(TlStorerUnsafe &s) const {
  (void)sizeof(s);
}

void decryptedMessageMediaEmpty::store(TlStorerToString &s, const char *field_name) const {
  if (!LOG_IS_STRIPPED(ERROR)) {
    s.store_class_begin(field_name, "decryptedMessageMediaEmpty");
    s.store_class_end();
  }
}

decryptedMessageMediaPhoto23::decryptedMessageMediaPhoto23()
  : thumb_()
  , thumb_w_()
  , thumb_h_()
  , w_()
  , h_()
  , size_()
  , key_()
  , iv_()
{}

decryptedMessageMediaPhoto23::decryptedMessageMediaPhoto23(BufferSlice &&thumb_, std::int32_t thumb_w_, std::int32_t thumb_h_, std::int32_t w_, std::int32_t h_, std::int32_t size_, BufferSlice &&key_, BufferSlice &&iv_)
  : thumb_(std::move(thumb_))
  , thumb_w_(thumb_w_)
  , thumb_h_(thumb_h_)
  , w_(w_)
  , h_(h_)
  , size_(size_)
  , key_(std::move(key_))
  , iv_(std::move(iv_))
{}

const std::int32_t decryptedMessageMediaPhoto23::ID;

decryptedMessageMediaPhoto23::decryptedMessageMediaPhoto23(TlParser &p)
#define FAIL(error) p.set_error(error)
  : thumb_(TlFetchBytes<BufferSlice>::parse(p))
  , thumb_w_(TlFetchInt::parse(p))
  , thumb_h_(TlFetchInt::parse(p))
  , w_(TlFetchInt::parse(p))
  , h_(TlFetchInt::parse(p))
  , size_(TlFetchInt::parse(p))
  , key_(TlFetchBytes<BufferSlice>::parse(p))
  , iv_(TlFetchBytes<BufferSlice>::parse(p))
#undef FAIL
{}

void decryptedMessageMediaPhoto23::store(TlStorerCalcLength &s) const {
  (void)sizeof(s);
  TlStoreString::store(thumb_, s);
  TlStoreBinary::store(thumb_w_, s);
  TlStoreBinary::store(thumb_h_, s);
  TlStoreBinary::store(w_, s);
  TlStoreBinary::store(h_, s);
  TlStoreBinary::store(size_, s);
  TlStoreString::store(key_, s);
  TlStoreString::store(iv_, s);
}

void decryptedMessageMediaPhoto23::store(TlStorerUnsafe &s) const {
  (void)sizeof(s);
  TlStoreString::store(thumb_, s);
  TlStoreBinary::store(thumb_w_, s);
  TlStoreBinary::store(thumb_h_, s);
  TlStoreBinary::store(w_, s);
  TlStoreBinary::store(h_, s);
  TlStoreBinary::store(size_, s);
  TlStoreString::store(key_, s);
  TlStoreString::store(iv_, s);
}

void decryptedMessageMediaPhoto23::store(TlStorerToString &s, const char *field_name) const {
  if (!LOG_IS_STRIPPED(ERROR)) {
    s.store_class_begin(field_name, "decryptedMessageMediaPhoto23");
    s.store_bytes_field("thumb", thumb_);
    s.store_field("thumb_w", thumb_w_);
    s.store_field("thumb_h", thumb_h_);
    s.store_field("w", w_);
    s.store_field("h", h_);
    s.store_field("size", size_);
    s.store_bytes_field("key", key_);
    s.store_bytes_field("iv", iv_);
    s.store_class_end();
  }
}

decryptedMessageMediaVideo8::decryptedMessageMediaVideo8()
  : thumb_()
  , thumb_w_()
  , thumb_h_()
  , duration_()
  , w_()
  , h_()
  , size_()
  , key_()
  , iv_()
{}

decryptedMessageMediaVideo8::decryptedMessageMediaVideo8(BufferSlice &&thumb_, std::int32_t thumb_w_, std::int32_t thumb_h_, std::int32_t duration_, std::int32_t w_, std::int32_t h_, std::int32_t size_, BufferSlice &&key_, BufferSlice &&iv_)
  : thumb_(std::move(thumb_))
  , thumb_w_(thumb_w_)
  , thumb_h_(thumb_h_)
  , duration_(duration_)
  , w_(w_)
  , h_(h_)
  , size_(size_)
  , key_(std::move(key_))
  , iv_(std::move(iv_))
{}

const std::int32_t decryptedMessageMediaVideo8::ID;

decryptedMessageMediaVideo8::decryptedMessageMediaVideo8(TlParser &p)
#define FAIL(error) p.set_error(error)
  : thumb_(TlFetchBytes<BufferSlice>::parse(p))
  , thumb_w_(TlFetchInt::parse(p))
  , thumb_h_(TlFetchInt::parse(p))
  , duration_(TlFetchInt::parse(p))
  , w_(TlFetchInt::parse(p))
  , h_(TlFetchInt::parse(p))
  , size_(TlFetchInt::parse(p))
  , key_(TlFetchBytes<BufferSlice>::parse(p))
  , iv_(TlFetchBytes<BufferSlice>::parse(p))
#undef FAIL
{}

void decryptedMessageMediaVideo8::store(TlStorerCalcLength &s) const {
  (void)sizeof(s);
  TlStoreString::store(thumb_, s);
  TlStoreBinary::store(thumb_w_, s);
  TlStoreBinary::store(thumb_h_, s);
  TlStoreBinary::store(duration_, s);
  TlStoreBinary::store(w_, s);
  TlStoreBinary::store(h_, s);
  TlStoreBinary::store(size_, s);
  TlStoreString::store(key_, s);
  TlStoreString::store(iv_, s);
}

void decryptedMessageMediaVideo8::store(TlStorerUnsafe &s) const {
  (void)sizeof(s);
  TlStoreString::store(thumb_, s);
  TlStoreBinary::store(thumb_w_, s);
  TlStoreBinary::store(thumb_h_, s);
  TlStoreBinary::store(duration_, s);
  TlStoreBinary::store(w_, s);
  TlStoreBinary::store(h_, s);
  TlStoreBinary::store(size_, s);
  TlStoreString::store(key_, s);
  TlStoreString::store(iv_, s);
}

void decryptedMessageMediaVideo8::store(TlStorerToString &s, const char *field_name) const {
  if (!LOG_IS_STRIPPED(ERROR)) {
    s.store_class_begin(field_name, "decryptedMessageMediaVideo8");
    s.store_bytes_field("thumb", thumb_);
    s.store_field("thumb_w", thumb_w_);
    s.store_field("thumb_h", thumb_h_);
    s.store_field("duration", duration_);
    s.store_field("w", w_);
    s.store_field("h", h_);
    s.store_field("size", size_);
    s.store_bytes_field("key", key_);
    s.store_bytes_field("iv", iv_);
    s.store_class_end();
  }
}

decryptedMessageMediaGeoPoint::decryptedMessageMediaGeoPoint()
  : lat_()
  , long_()
{}

decryptedMessageMediaGeoPoint::decryptedMessageMediaGeoPoint(double lat_, double long_)
  : lat_(lat_)
  , long_(long_)
{}

const std::int32_t decryptedMessageMediaGeoPoint::ID;

decryptedMessageMediaGeoPoint::decryptedMessageMediaGeoPoint(TlParser &p)
#define FAIL(error) p.set_error(error)
  : lat_(TlFetchDouble::parse(p))
  , long_(TlFetchDouble::parse(p))
#undef FAIL
{}

void decryptedMessageMediaGeoPoint::store(TlStorerCalcLength &s) const {
  (void)sizeof(s);
  TlStoreBinary::store(lat_, s);
  TlStoreBinary::store(long_, s);
}

void decryptedMessageMediaGeoPoint::store(TlStorerUnsafe &s) const {
  (void)sizeof(s);
  TlStoreBinary::store(lat_, s);
  TlStoreBinary::store(long_, s);
}

void decryptedMessageMediaGeoPoint::store(TlStorerToString &s, const char *field_name) const {
  if (!LOG_IS_STRIPPED(ERROR)) {
    s.store_class_begin(field_name, "decryptedMessageMediaGeoPoint");
    s.store_field("lat", lat_);
    s.store_field("long", long_);
    s.store_class_end();
  }
}

decryptedMessageMediaContact::decryptedMessageMediaContact()
  : phone_number_()
  , first_name_()
  , last_name_()
  , user_id_()
{}

decryptedMessageMediaContact::decryptedMessageMediaContact(std::string const &phone_number_, std::string const &first_name_, std::string const &last_name_, std::int32_t user_id_)
  : phone_number_(phone_number_)
  , first_name_(first_name_)
  , last_name_(last_name_)
  , user_id_(user_id_)
{}

const std::int32_t decryptedMessageMediaContact::ID;

decryptedMessageMediaContact::decryptedMessageMediaContact(TlParser &p)
#define FAIL(error) p.set_error(error)
  : phone_number_(TlFetchString<std::string>::parse(p))
  , first_name_(TlFetchString<std::string>::parse(p))
  , last_name_(TlFetchString<std::string>::parse(p))
  , user_id_(TlFetchInt::parse(p))
#undef FAIL
{}

void decryptedMessageMediaContact::store(TlStorerCalcLength &s) const {
  (void)sizeof(s);
  TlStoreString::store(phone_number_, s);
  TlStoreString::store(first_name_, s);
  TlStoreString::store(last_name_, s);
  TlStoreBinary::store(user_id_, s);
}

void decryptedMessageMediaContact::store(TlStorerUnsafe &s) const {
  (void)sizeof(s);
  TlStoreString::store(phone_number_, s);
  TlStoreString::store(first_name_, s);
  TlStoreString::store(last_name_, s);
  TlStoreBinary::store(user_id_, s);
}

void decryptedMessageMediaContact::store(TlStorerToString &s, const char *field_name) const {
  if (!LOG_IS_STRIPPED(ERROR)) {
    s.store_class_begin(field_name, "decryptedMessageMediaContact");
    s.store_field("phone_number", phone_number_);
    s.store_field("first_name", first_name_);
    s.store_field("last_name", last_name_);
    s.store_field("user_id", user_id_);
    s.store_class_end();
  }
}

decryptedMessageMediaDocument23::decryptedMessageMediaDocument23()
  : thumb_()
  , thumb_w_()
  , thumb_h_()
  , file_name_()
  , mime_type_()
  , size_()
  , key_()
  , iv_()
{}

decryptedMessageMediaDocument23::decryptedMessageMediaDocument23(BufferSlice &&thumb_, std::int32_t thumb_w_, std::int32_t thumb_h_, std::string const &file_name_, std::string const &mime_type_, std::int32_t size_, BufferSlice &&key_, BufferSlice &&iv_)
  : thumb_(std::move(thumb_))
  , thumb_w_(thumb_w_)
  , thumb_h_(thumb_h_)
  , file_name_(file_name_)
  , mime_type_(mime_type_)
  , size_(size_)
  , key_(std::move(key_))
  , iv_(std::move(iv_))
{}

const std::int32_t decryptedMessageMediaDocument23::ID;

decryptedMessageMediaDocument23::decryptedMessageMediaDocument23(TlParser &p)
#define FAIL(error) p.set_error(error)
  : thumb_(TlFetchBytes<BufferSlice>::parse(p))
  , thumb_w_(TlFetchInt::parse(p))
  , thumb_h_(TlFetchInt::parse(p))
  , file_name_(TlFetchString<std::string>::parse(p))
  , mime_type_(TlFetchString<std::string>::parse(p))
  , size_(TlFetchInt::parse(p))
  , key_(TlFetchBytes<BufferSlice>::parse(p))
  , iv_(TlFetchBytes<BufferSlice>::parse(p))
#undef FAIL
{}

void decryptedMessageMediaDocument23::store(TlStorerCalcLength &s) const {
  (void)sizeof(s);
  TlStoreString::store(thumb_, s);
  TlStoreBinary::store(thumb_w_, s);
  TlStoreBinary::store(thumb_h_, s);
  TlStoreString::store(file_name_, s);
  TlStoreString::store(mime_type_, s);
  TlStoreBinary::store(size_, s);
  TlStoreString::store(key_, s);
  TlStoreString::store(iv_, s);
}

void decryptedMessageMediaDocument23::store(TlStorerUnsafe &s) const {
  (void)sizeof(s);
  TlStoreString::store(thumb_, s);
  TlStoreBinary::store(thumb_w_, s);
  TlStoreBinary::store(thumb_h_, s);
  TlStoreString::store(file_name_, s);
  TlStoreString::store(mime_type_, s);
  TlStoreBinary::store(size_, s);
  TlStoreString::store(key_, s);
  TlStoreString::store(iv_, s);
}

void decryptedMessageMediaDocument23::store(TlStorerToString &s, const char *field_name) const {
  if (!LOG_IS_STRIPPED(ERROR)) {
    s.store_class_begin(field_name, "decryptedMessageMediaDocument23");
    s.store_bytes_field("thumb", thumb_);
    s.store_field("thumb_w", thumb_w_);
    s.store_field("thumb_h", thumb_h_);
    s.store_field("file_name", file_name_);
    s.store_field("mime_type", mime_type_);
    s.store_field("size", size_);
    s.store_bytes_field("key", key_);
    s.store_bytes_field("iv", iv_);
    s.store_class_end();
  }
}

decryptedMessageMediaAudio8::decryptedMessageMediaAudio8()
  : duration_()
  , size_()
  , key_()
  , iv_()
{}

decryptedMessageMediaAudio8::decryptedMessageMediaAudio8(std::int32_t duration_, std::int32_t size_, BufferSlice &&key_, BufferSlice &&iv_)
  : duration_(duration_)
  , size_(size_)
  , key_(std::move(key_))
  , iv_(std::move(iv_))
{}

const std::int32_t decryptedMessageMediaAudio8::ID;

decryptedMessageMediaAudio8::decryptedMessageMediaAudio8(TlParser &p)
#define FAIL(error) p.set_error(error)
  : duration_(TlFetchInt::parse(p))
  , size_(TlFetchInt::parse(p))
  , key_(TlFetchBytes<BufferSlice>::parse(p))
  , iv_(TlFetchBytes<BufferSlice>::parse(p))
#undef FAIL
{}

void decryptedMessageMediaAudio8::store(TlStorerCalcLength &s) const {
  (void)sizeof(s);
  TlStoreBinary::store(duration_, s);
  TlStoreBinary::store(size_, s);
  TlStoreString::store(key_, s);
  TlStoreString::store(iv_, s);
}

void decryptedMessageMediaAudio8::store(TlStorerUnsafe &s) const {
  (void)sizeof(s);
  TlStoreBinary::store(duration_, s);
  TlStoreBinary::store(size_, s);
  TlStoreString::store(key_, s);
  TlStoreString::store(iv_, s);
}

void decryptedMessageMediaAudio8::store(TlStorerToString &s, const char *field_name) const {
  if (!LOG_IS_STRIPPED(ERROR)) {
    s.store_class_begin(field_name, "decryptedMessageMediaAudio8");
    s.store_field("duration", duration_);
    s.store_field("size", size_);
    s.store_bytes_field("key", key_);
    s.store_bytes_field("iv", iv_);
    s.store_class_end();
  }
}

decryptedMessageMediaVideo23::decryptedMessageMediaVideo23()
  : thumb_()
  , thumb_w_()
  , thumb_h_()
  , duration_()
  , mime_type_()
  , w_()
  , h_()
  , size_()
  , key_()
  , iv_()
{}

decryptedMessageMediaVideo23::decryptedMessageMediaVideo23(BufferSlice &&thumb_, std::int32_t thumb_w_, std::int32_t thumb_h_, std::int32_t duration_, std::string const &mime_type_, std::int32_t w_, std::int32_t h_, std::int32_t size_, BufferSlice &&key_, BufferSlice &&iv_)
  : thumb_(std::move(thumb_))
  , thumb_w_(thumb_w_)
  , thumb_h_(thumb_h_)
  , duration_(duration_)
  , mime_type_(mime_type_)
  , w_(w_)
  , h_(h_)
  , size_(size_)
  , key_(std::move(key_))
  , iv_(std::move(iv_))
{}

const std::int32_t decryptedMessageMediaVideo23::ID;

decryptedMessageMediaVideo23::decryptedMessageMediaVideo23(TlParser &p)
#define FAIL(error) p.set_error(error)
  : thumb_(TlFetchBytes<BufferSlice>::parse(p))
  , thumb_w_(TlFetchInt::parse(p))
  , thumb_h_(TlFetchInt::parse(p))
  , duration_(TlFetchInt::parse(p))
  , mime_type_(TlFetchString<std::string>::parse(p))
  , w_(TlFetchInt::parse(p))
  , h_(TlFetchInt::parse(p))
  , size_(TlFetchInt::parse(p))
  , key_(TlFetchBytes<BufferSlice>::parse(p))
  , iv_(TlFetchBytes<BufferSlice>::parse(p))
#undef FAIL
{}

void decryptedMessageMediaVideo23::store(TlStorerCalcLength &s) const {
  (void)sizeof(s);
  TlStoreString::store(thumb_, s);
  TlStoreBinary::store(thumb_w_, s);
  TlStoreBinary::store(thumb_h_, s);
  TlStoreBinary::store(duration_, s);
  TlStoreString::store(mime_type_, s);
  TlStoreBinary::store(w_, s);
  TlStoreBinary::store(h_, s);
  TlStoreBinary::store(size_, s);
  TlStoreString::store(key_, s);
  TlStoreString::store(iv_, s);
}

void decryptedMessageMediaVideo23::store(TlStorerUnsafe &s) const {
  (void)sizeof(s);
  TlStoreString::store(thumb_, s);
  TlStoreBinary::store(thumb_w_, s);
  TlStoreBinary::store(thumb_h_, s);
  TlStoreBinary::store(duration_, s);
  TlStoreString::store(mime_type_, s);
  TlStoreBinary::store(w_, s);
  TlStoreBinary::store(h_, s);
  TlStoreBinary::store(size_, s);
  TlStoreString::store(key_, s);
  TlStoreString::store(iv_, s);
}

void decryptedMessageMediaVideo23::store(TlStorerToString &s, const char *field_name) const {
  if (!LOG_IS_STRIPPED(ERROR)) {
    s.store_class_begin(field_name, "decryptedMessageMediaVideo23");
    s.store_bytes_field("thumb", thumb_);
    s.store_field("thumb_w", thumb_w_);
    s.store_field("thumb_h", thumb_h_);
    s.store_field("duration", duration_);
    s.store_field("mime_type", mime_type_);
    s.store_field("w", w_);
    s.store_field("h", h_);
    s.store_field("size", size_);
    s.store_bytes_field("key", key_);
    s.store_bytes_field("iv", iv_);
    s.store_class_end();
  }
}

decryptedMessageMediaAudio::decryptedMessageMediaAudio()
  : duration_()
  , mime_type_()
  , size_()
  , key_()
  , iv_()
{}

decryptedMessageMediaAudio::decryptedMessageMediaAudio(std::int32_t duration_, std::string const &mime_type_, std::int32_t size_, BufferSlice &&key_, BufferSlice &&iv_)
  : duration_(duration_)
  , mime_type_(mime_type_)
  , size_(size_)
  , key_(std::move(key_))
  , iv_(std::move(iv_))
{}

const std::int32_t decryptedMessageMediaAudio::ID;

decryptedMessageMediaAudio::decryptedMessageMediaAudio(TlParser &p)
#define FAIL(error) p.set_error(error)
  : duration_(TlFetchInt::parse(p))
  , mime_type_(TlFetchString<std::string>::parse(p))
  , size_(TlFetchInt::parse(p))
  , key_(TlFetchBytes<BufferSlice>::parse(p))
  , iv_(TlFetchBytes<BufferSlice>::parse(p))
#undef FAIL
{}

void decryptedMessageMediaAudio::store(TlStorerCalcLength &s) const {
  (void)sizeof(s);
  TlStoreBinary::store(duration_, s);
  TlStoreString::store(mime_type_, s);
  TlStoreBinary::store(size_, s);
  TlStoreString::store(key_, s);
  TlStoreString::store(iv_, s);
}

void decryptedMessageMediaAudio::store(TlStorerUnsafe &s) const {
  (void)sizeof(s);
  TlStoreBinary::store(duration_, s);
  TlStoreString::store(mime_type_, s);
  TlStoreBinary::store(size_, s);
  TlStoreString::store(key_, s);
  TlStoreString::store(iv_, s);
}

void decryptedMessageMediaAudio::store(TlStorerToString &s, const char *field_name) const {
  if (!LOG_IS_STRIPPED(ERROR)) {
    s.store_class_begin(field_name, "decryptedMessageMediaAudio");
    s.store_field("duration", duration_);
    s.store_field("mime_type", mime_type_);
    s.store_field("size", size_);
    s.store_bytes_field("key", key_);
    s.store_bytes_field("iv", iv_);
    s.store_class_end();
  }
}

decryptedMessageMediaExternalDocument::decryptedMessageMediaExternalDocument()
  : id_()
  , access_hash_()
  , date_()
  , mime_type_()
  , size_()
  , thumb_()
  , dc_id_()
  , attributes_()
{}

decryptedMessageMediaExternalDocument::decryptedMessageMediaExternalDocument(std::int64_t id_, std::int64_t access_hash_, std::int32_t date_, std::string const &mime_type_, std::int32_t size_, object_ptr<PhotoSize> &&thumb_, std::int32_t dc_id_, std::vector<object_ptr<DocumentAttribute>> &&attributes_)
  : id_(id_)
  , access_hash_(access_hash_)
  , date_(date_)
  , mime_type_(mime_type_)
  , size_(size_)
  , thumb_(std::move(thumb_))
  , dc_id_(dc_id_)
  , attributes_(std::move(attributes_))
{}

const std::int32_t decryptedMessageMediaExternalDocument::ID;

decryptedMessageMediaExternalDocument::decryptedMessageMediaExternalDocument(TlParser &p)
#define FAIL(error) p.set_error(error)
  : id_(TlFetchLong::parse(p))
  , access_hash_(TlFetchLong::parse(p))
  , date_(TlFetchInt::parse(p))
  , mime_type_(TlFetchString<std::string>::parse(p))
  , size_(TlFetchInt::parse(p))
  , thumb_(TlFetchObject<PhotoSize>::parse(p))
  , dc_id_(TlFetchInt::parse(p))
  , attributes_(TlFetchBoxed<TlFetchVector<TlFetchObject<DocumentAttribute>>, 481674261>::parse(p))
#undef FAIL
{}

void decryptedMessageMediaExternalDocument::store(TlStorerCalcLength &s) const {
  (void)sizeof(s);
  TlStoreBinary::store(id_, s);
  TlStoreBinary::store(access_hash_, s);
  TlStoreBinary::store(date_, s);
  TlStoreString::store(mime_type_, s);
  TlStoreBinary::store(size_, s);
  TlStoreBoxedUnknown<TlStoreObject>::store(thumb_, s);
  TlStoreBinary::store(dc_id_, s);
  TlStoreBoxed<TlStoreVector<TlStoreBoxedUnknown<TlStoreObject>>, 481674261>::store(attributes_, s);
}

void decryptedMessageMediaExternalDocument::store(TlStorerUnsafe &s) const {
  (void)sizeof(s);
  TlStoreBinary::store(id_, s);
  TlStoreBinary::store(access_hash_, s);
  TlStoreBinary::store(date_, s);
  TlStoreString::store(mime_type_, s);
  TlStoreBinary::store(size_, s);
  TlStoreBoxedUnknown<TlStoreObject>::store(thumb_, s);
  TlStoreBinary::store(dc_id_, s);
  TlStoreBoxed<TlStoreVector<TlStoreBoxedUnknown<TlStoreObject>>, 481674261>::store(attributes_, s);
}

void decryptedMessageMediaExternalDocument::store(TlStorerToString &s, const char *field_name) const {
  if (!LOG_IS_STRIPPED(ERROR)) {
    s.store_class_begin(field_name, "decryptedMessageMediaExternalDocument");
    s.store_field("id", id_);
    s.store_field("access_hash", access_hash_);
    s.store_field("date", date_);
    s.store_field("mime_type", mime_type_);
    s.store_field("size", size_);
    if (thumb_ == nullptr) { s.store_field("thumb", "null"); } else { thumb_->store(s, "thumb"); }
    s.store_field("dc_id", dc_id_);
    { const std::vector<object_ptr<DocumentAttribute>> &v = attributes_; const std::uint32_t multiplicity = static_cast<std::uint32_t>(v.size()); const auto vector_name = "vector[" + td::to_string(multiplicity)+ "]"; s.store_class_begin("attributes", vector_name.c_str()); for (std::uint32_t i = 0; i < multiplicity; i++) { if (v[i] == nullptr) { s.store_field("", "null"); } else { v[i]->store(s, ""); } } s.store_class_end(); }
    s.store_class_end();
  }
}

decryptedMessageMediaPhoto::decryptedMessageMediaPhoto()
  : thumb_()
  , thumb_w_()
  , thumb_h_()
  , w_()
  , h_()
  , size_()
  , key_()
  , iv_()
  , caption_()
{}

decryptedMessageMediaPhoto::decryptedMessageMediaPhoto(BufferSlice &&thumb_, std::int32_t thumb_w_, std::int32_t thumb_h_, std::int32_t w_, std::int32_t h_, std::int32_t size_, BufferSlice &&key_, BufferSlice &&iv_, std::string const &caption_)
  : thumb_(std::move(thumb_))
  , thumb_w_(thumb_w_)
  , thumb_h_(thumb_h_)
  , w_(w_)
  , h_(h_)
  , size_(size_)
  , key_(std::move(key_))
  , iv_(std::move(iv_))
  , caption_(caption_)
{}

const std::int32_t decryptedMessageMediaPhoto::ID;

decryptedMessageMediaPhoto::decryptedMessageMediaPhoto(TlParser &p)
#define FAIL(error) p.set_error(error)
  : thumb_(TlFetchBytes<BufferSlice>::parse(p))
  , thumb_w_(TlFetchInt::parse(p))
  , thumb_h_(TlFetchInt::parse(p))
  , w_(TlFetchInt::parse(p))
  , h_(TlFetchInt::parse(p))
  , size_(TlFetchInt::parse(p))
  , key_(TlFetchBytes<BufferSlice>::parse(p))
  , iv_(TlFetchBytes<BufferSlice>::parse(p))
  , caption_(TlFetchString<std::string>::parse(p))
#undef FAIL
{}

void decryptedMessageMediaPhoto::store(TlStorerCalcLength &s) const {
  (void)sizeof(s);
  TlStoreString::store(thumb_, s);
  TlStoreBinary::store(thumb_w_, s);
  TlStoreBinary::store(thumb_h_, s);
  TlStoreBinary::store(w_, s);
  TlStoreBinary::store(h_, s);
  TlStoreBinary::store(size_, s);
  TlStoreString::store(key_, s);
  TlStoreString::store(iv_, s);
  TlStoreString::store(caption_, s);
}

void decryptedMessageMediaPhoto::store(TlStorerUnsafe &s) const {
  (void)sizeof(s);
  TlStoreString::store(thumb_, s);
  TlStoreBinary::store(thumb_w_, s);
  TlStoreBinary::store(thumb_h_, s);
  TlStoreBinary::store(w_, s);
  TlStoreBinary::store(h_, s);
  TlStoreBinary::store(size_, s);
  TlStoreString::store(key_, s);
  TlStoreString::store(iv_, s);
  TlStoreString::store(caption_, s);
}

void decryptedMessageMediaPhoto::store(TlStorerToString &s, const char *field_name) const {
  if (!LOG_IS_STRIPPED(ERROR)) {
    s.store_class_begin(field_name, "decryptedMessageMediaPhoto");
    s.store_bytes_field("thumb", thumb_);
    s.store_field("thumb_w", thumb_w_);
    s.store_field("thumb_h", thumb_h_);
    s.store_field("w", w_);
    s.store_field("h", h_);
    s.store_field("size", size_);
    s.store_bytes_field("key", key_);
    s.store_bytes_field("iv", iv_);
    s.store_field("caption", caption_);
    s.store_class_end();
  }
}

decryptedMessageMediaVideo::decryptedMessageMediaVideo()
  : thumb_()
  , thumb_w_()
  , thumb_h_()
  , duration_()
  , mime_type_()
  , w_()
  , h_()
  , size_()
  , key_()
  , iv_()
  , caption_()
{}

decryptedMessageMediaVideo::decryptedMessageMediaVideo(BufferSlice &&thumb_, std::int32_t thumb_w_, std::int32_t thumb_h_, std::int32_t duration_, std::string const &mime_type_, std::int32_t w_, std::int32_t h_, std::int32_t size_, BufferSlice &&key_, BufferSlice &&iv_, std::string const &caption_)
  : thumb_(std::move(thumb_))
  , thumb_w_(thumb_w_)
  , thumb_h_(thumb_h_)
  , duration_(duration_)
  , mime_type_(mime_type_)
  , w_(w_)
  , h_(h_)
  , size_(size_)
  , key_(std::move(key_))
  , iv_(std::move(iv_))
  , caption_(caption_)
{}

const std::int32_t decryptedMessageMediaVideo::ID;

decryptedMessageMediaVideo::decryptedMessageMediaVideo(TlParser &p)
#define FAIL(error) p.set_error(error)
  : thumb_(TlFetchBytes<BufferSlice>::parse(p))
  , thumb_w_(TlFetchInt::parse(p))
  , thumb_h_(TlFetchInt::parse(p))
  , duration_(TlFetchInt::parse(p))
  , mime_type_(TlFetchString<std::string>::parse(p))
  , w_(TlFetchInt::parse(p))
  , h_(TlFetchInt::parse(p))
  , size_(TlFetchInt::parse(p))
  , key_(TlFetchBytes<BufferSlice>::parse(p))
  , iv_(TlFetchBytes<BufferSlice>::parse(p))
  , caption_(TlFetchString<std::string>::parse(p))
#undef FAIL
{}

void decryptedMessageMediaVideo::store(TlStorerCalcLength &s) const {
  (void)sizeof(s);
  TlStoreString::store(thumb_, s);
  TlStoreBinary::store(thumb_w_, s);
  TlStoreBinary::store(thumb_h_, s);
  TlStoreBinary::store(duration_, s);
  TlStoreString::store(mime_type_, s);
  TlStoreBinary::store(w_, s);
  TlStoreBinary::store(h_, s);
  TlStoreBinary::store(size_, s);
  TlStoreString::store(key_, s);
  TlStoreString::store(iv_, s);
  TlStoreString::store(caption_, s);
}

void decryptedMessageMediaVideo::store(TlStorerUnsafe &s) const {
  (void)sizeof(s);
  TlStoreString::store(thumb_, s);
  TlStoreBinary::store(thumb_w_, s);
  TlStoreBinary::store(thumb_h_, s);
  TlStoreBinary::store(duration_, s);
  TlStoreString::store(mime_type_, s);
  TlStoreBinary::store(w_, s);
  TlStoreBinary::store(h_, s);
  TlStoreBinary::store(size_, s);
  TlStoreString::store(key_, s);
  TlStoreString::store(iv_, s);
  TlStoreString::store(caption_, s);
}

void decryptedMessageMediaVideo::store(TlStorerToString &s, const char *field_name) const {
  if (!LOG_IS_STRIPPED(ERROR)) {
    s.store_class_begin(field_name, "decryptedMessageMediaVideo");
    s.store_bytes_field("thumb", thumb_);
    s.store_field("thumb_w", thumb_w_);
    s.store_field("thumb_h", thumb_h_);
    s.store_field("duration", duration_);
    s.store_field("mime_type", mime_type_);
    s.store_field("w", w_);
    s.store_field("h", h_);
    s.store_field("size", size_);
    s.store_bytes_field("key", key_);
    s.store_bytes_field("iv", iv_);
    s.store_field("caption", caption_);
    s.store_class_end();
  }
}

decryptedMessageMediaDocument::decryptedMessageMediaDocument()
  : thumb_()
  , thumb_w_()
  , thumb_h_()
  , mime_type_()
  , size_()
  , key_()
  , iv_()
  , attributes_()
  , caption_()
{}

decryptedMessageMediaDocument::decryptedMessageMediaDocument(BufferSlice &&thumb_, std::int32_t thumb_w_, std::int32_t thumb_h_, std::string const &mime_type_, std::int32_t size_, BufferSlice &&key_, BufferSlice &&iv_, std::vector<object_ptr<DocumentAttribute>> &&attributes_, std::string const &caption_)
  : thumb_(std::move(thumb_))
  , thumb_w_(thumb_w_)
  , thumb_h_(thumb_h_)
  , mime_type_(mime_type_)
  , size_(size_)
  , key_(std::move(key_))
  , iv_(std::move(iv_))
  , attributes_(std::move(attributes_))
  , caption_(caption_)
{}

const std::int32_t decryptedMessageMediaDocument::ID;

decryptedMessageMediaDocument::decryptedMessageMediaDocument(TlParser &p)
#define FAIL(error) p.set_error(error)
  : thumb_(TlFetchBytes<BufferSlice>::parse(p))
  , thumb_w_(TlFetchInt::parse(p))
  , thumb_h_(TlFetchInt::parse(p))
  , mime_type_(TlFetchString<std::string>::parse(p))
  , size_(TlFetchInt::parse(p))
  , key_(TlFetchBytes<BufferSlice>::parse(p))
  , iv_(TlFetchBytes<BufferSlice>::parse(p))
  , attributes_(TlFetchBoxed<TlFetchVector<TlFetchObject<DocumentAttribute>>, 481674261>::parse(p))
  , caption_(TlFetchString<std::string>::parse(p))
#undef FAIL
{}

void decryptedMessageMediaDocument::store(TlStorerCalcLength &s) const {
  (void)sizeof(s);
  TlStoreString::store(thumb_, s);
  TlStoreBinary::store(thumb_w_, s);
  TlStoreBinary::store(thumb_h_, s);
  TlStoreString::store(mime_type_, s);
  TlStoreBinary::store(size_, s);
  TlStoreString::store(key_, s);
  TlStoreString::store(iv_, s);
  TlStoreBoxed<TlStoreVector<TlStoreBoxedUnknown<TlStoreObject>>, 481674261>::store(attributes_, s);
  TlStoreString::store(caption_, s);
}

void decryptedMessageMediaDocument::store(TlStorerUnsafe &s) const {
  (void)sizeof(s);
  TlStoreString::store(thumb_, s);
  TlStoreBinary::store(thumb_w_, s);
  TlStoreBinary::store(thumb_h_, s);
  TlStoreString::store(mime_type_, s);
  TlStoreBinary::store(size_, s);
  TlStoreString::store(key_, s);
  TlStoreString::store(iv_, s);
  TlStoreBoxed<TlStoreVector<TlStoreBoxedUnknown<TlStoreObject>>, 481674261>::store(attributes_, s);
  TlStoreString::store(caption_, s);
}

void decryptedMessageMediaDocument::store(TlStorerToString &s, const char *field_name) const {
  if (!LOG_IS_STRIPPED(ERROR)) {
    s.store_class_begin(field_name, "decryptedMessageMediaDocument");
    s.store_bytes_field("thumb", thumb_);
    s.store_field("thumb_w", thumb_w_);
    s.store_field("thumb_h", thumb_h_);
    s.store_field("mime_type", mime_type_);
    s.store_field("size", size_);
    s.store_bytes_field("key", key_);
    s.store_bytes_field("iv", iv_);
    { const std::vector<object_ptr<DocumentAttribute>> &v = attributes_; const std::uint32_t multiplicity = static_cast<std::uint32_t>(v.size()); const auto vector_name = "vector[" + td::to_string(multiplicity)+ "]"; s.store_class_begin("attributes", vector_name.c_str()); for (std::uint32_t i = 0; i < multiplicity; i++) { if (v[i] == nullptr) { s.store_field("", "null"); } else { v[i]->store(s, ""); } } s.store_class_end(); }
    s.store_field("caption", caption_);
    s.store_class_end();
  }
}

decryptedMessageMediaVenue::decryptedMessageMediaVenue()
  : lat_()
  , long_()
  , title_()
  , address_()
  , provider_()
  , venue_id_()
{}

decryptedMessageMediaVenue::decryptedMessageMediaVenue(double lat_, double long_, std::string const &title_, std::string const &address_, std::string const &provider_, std::string const &venue_id_)
  : lat_(lat_)
  , long_(long_)
  , title_(title_)
  , address_(address_)
  , provider_(provider_)
  , venue_id_(venue_id_)
{}

const std::int32_t decryptedMessageMediaVenue::ID;

decryptedMessageMediaVenue::decryptedMessageMediaVenue(TlParser &p)
#define FAIL(error) p.set_error(error)
  : lat_(TlFetchDouble::parse(p))
  , long_(TlFetchDouble::parse(p))
  , title_(TlFetchString<std::string>::parse(p))
  , address_(TlFetchString<std::string>::parse(p))
  , provider_(TlFetchString<std::string>::parse(p))
  , venue_id_(TlFetchString<std::string>::parse(p))
#undef FAIL
{}

void decryptedMessageMediaVenue::store(TlStorerCalcLength &s) const {
  (void)sizeof(s);
  TlStoreBinary::store(lat_, s);
  TlStoreBinary::store(long_, s);
  TlStoreString::store(title_, s);
  TlStoreString::store(address_, s);
  TlStoreString::store(provider_, s);
  TlStoreString::store(venue_id_, s);
}

void decryptedMessageMediaVenue::store(TlStorerUnsafe &s) const {
  (void)sizeof(s);
  TlStoreBinary::store(lat_, s);
  TlStoreBinary::store(long_, s);
  TlStoreString::store(title_, s);
  TlStoreString::store(address_, s);
  TlStoreString::store(provider_, s);
  TlStoreString::store(venue_id_, s);
}

void decryptedMessageMediaVenue::store(TlStorerToString &s, const char *field_name) const {
  if (!LOG_IS_STRIPPED(ERROR)) {
    s.store_class_begin(field_name, "decryptedMessageMediaVenue");
    s.store_field("lat", lat_);
    s.store_field("long", long_);
    s.store_field("title", title_);
    s.store_field("address", address_);
    s.store_field("provider", provider_);
    s.store_field("venue_id", venue_id_);
    s.store_class_end();
  }
}

decryptedMessageMediaWebPage::decryptedMessageMediaWebPage()
  : url_()
{}

decryptedMessageMediaWebPage::decryptedMessageMediaWebPage(std::string const &url_)
  : url_(url_)
{}

const std::int32_t decryptedMessageMediaWebPage::ID;

decryptedMessageMediaWebPage::decryptedMessageMediaWebPage(TlParser &p)
#define FAIL(error) p.set_error(error)
  : url_(TlFetchString<std::string>::parse(p))
#undef FAIL
{}

void decryptedMessageMediaWebPage::store(TlStorerCalcLength &s) const {
  (void)sizeof(s);
  TlStoreString::store(url_, s);
}

void decryptedMessageMediaWebPage::store(TlStorerUnsafe &s) const {
  (void)sizeof(s);
  TlStoreString::store(url_, s);
}

void decryptedMessageMediaWebPage::store(TlStorerToString &s, const char *field_name) const {
  if (!LOG_IS_STRIPPED(ERROR)) {
    s.store_class_begin(field_name, "decryptedMessageMediaWebPage");
    s.store_field("url", url_);
    s.store_class_end();
  }
}

object_ptr<DocumentAttribute> DocumentAttribute::fetch(TlParser &p) {
#define FAIL(error) p.set_error(error); return nullptr;
  int constructor = p.fetch_int();
  switch (constructor) {
    case documentAttributeImageSize::ID:
      return documentAttributeImageSize::fetch(p);
    case documentAttributeAnimated::ID:
      return documentAttributeAnimated::fetch(p);
    case documentAttributeSticker23::ID:
      return documentAttributeSticker23::fetch(p);
    case documentAttributeVideo::ID:
      return documentAttributeVideo::fetch(p);
    case documentAttributeAudio23::ID:
      return documentAttributeAudio23::fetch(p);
    case documentAttributeFilename::ID:
      return documentAttributeFilename::fetch(p);
    case documentAttributeAudio45::ID:
      return documentAttributeAudio45::fetch(p);
    case documentAttributeSticker::ID:
      return documentAttributeSticker::fetch(p);
    case documentAttributeAudio::ID:
      return documentAttributeAudio::fetch(p);
    case documentAttributeVideo66::ID:
      return documentAttributeVideo66::fetch(p);
    default:
      FAIL(PSTRING() << "Unknown constructor found " << format::as_hex(constructor));
  }
#undef FAIL
}

documentAttributeImageSize::documentAttributeImageSize()
  : w_()
  , h_()
{}

documentAttributeImageSize::documentAttributeImageSize(std::int32_t w_, std::int32_t h_)
  : w_(w_)
  , h_(h_)
{}

const std::int32_t documentAttributeImageSize::ID;

documentAttributeImageSize::documentAttributeImageSize(TlParser &p)
#define FAIL(error) p.set_error(error)
  : w_(TlFetchInt::parse(p))
  , h_(TlFetchInt::parse(p))
#undef FAIL
{}

void documentAttributeImageSize::store(TlStorerCalcLength &s) const {
  (void)sizeof(s);
  TlStoreBinary::store(w_, s);
  TlStoreBinary::store(h_, s);
}

void documentAttributeImageSize::store(TlStorerUnsafe &s) const {
  (void)sizeof(s);
  TlStoreBinary::store(w_, s);
  TlStoreBinary::store(h_, s);
}

void documentAttributeImageSize::store(TlStorerToString &s, const char *field_name) const {
  if (!LOG_IS_STRIPPED(ERROR)) {
    s.store_class_begin(field_name, "documentAttributeImageSize");
    s.store_field("w", w_);
    s.store_field("h", h_);
    s.store_class_end();
  }
}

documentAttributeAnimated::documentAttributeAnimated() {
}

const std::int32_t documentAttributeAnimated::ID;

documentAttributeAnimated::documentAttributeAnimated(TlParser &p)
#define FAIL(error) p.set_error(error)
#undef FAIL
{
  (void)p;
}

void documentAttributeAnimated::store(TlStorerCalcLength &s) const {
  (void)sizeof(s);
}

void documentAttributeAnimated::store(TlStorerUnsafe &s) const {
  (void)sizeof(s);
}

void documentAttributeAnimated::store(TlStorerToString &s, const char *field_name) const {
  if (!LOG_IS_STRIPPED(ERROR)) {
    s.store_class_begin(field_name, "documentAttributeAnimated");
    s.store_class_end();
  }
}

documentAttributeSticker23::documentAttributeSticker23() {
}

const std::int32_t documentAttributeSticker23::ID;

documentAttributeSticker23::documentAttributeSticker23(TlParser &p)
#define FAIL(error) p.set_error(error)
#undef FAIL
{
  (void)p;
}

void documentAttributeSticker23::store(TlStorerCalcLength &s) const {
  (void)sizeof(s);
}

void documentAttributeSticker23::store(TlStorerUnsafe &s) const {
  (void)sizeof(s);
}

void documentAttributeSticker23::store(TlStorerToString &s, const char *field_name) const {
  if (!LOG_IS_STRIPPED(ERROR)) {
    s.store_class_begin(field_name, "documentAttributeSticker23");
    s.store_class_end();
  }
}

documentAttributeVideo::documentAttributeVideo()
  : duration_()
  , w_()
  , h_()
{}

documentAttributeVideo::documentAttributeVideo(std::int32_t duration_, std::int32_t w_, std::int32_t h_)
  : duration_(duration_)
  , w_(w_)
  , h_(h_)
{}

const std::int32_t documentAttributeVideo::ID;

documentAttributeVideo::documentAttributeVideo(TlParser &p)
#define FAIL(error) p.set_error(error)
  : duration_(TlFetchInt::parse(p))
  , w_(TlFetchInt::parse(p))
  , h_(TlFetchInt::parse(p))
#undef FAIL
{}

void documentAttributeVideo::store(TlStorerCalcLength &s) const {
  (void)sizeof(s);
  TlStoreBinary::store(duration_, s);
  TlStoreBinary::store(w_, s);
  TlStoreBinary::store(h_, s);
}

void documentAttributeVideo::store(TlStorerUnsafe &s) const {
  (void)sizeof(s);
  TlStoreBinary::store(duration_, s);
  TlStoreBinary::store(w_, s);
  TlStoreBinary::store(h_, s);
}

void documentAttributeVideo::store(TlStorerToString &s, const char *field_name) const {
  if (!LOG_IS_STRIPPED(ERROR)) {
    s.store_class_begin(field_name, "documentAttributeVideo");
    s.store_field("duration", duration_);
    s.store_field("w", w_);
    s.store_field("h", h_);
    s.store_class_end();
  }
}

documentAttributeAudio23::documentAttributeAudio23()
  : duration_()
{}

documentAttributeAudio23::documentAttributeAudio23(std::int32_t duration_)
  : duration_(duration_)
{}

const std::int32_t documentAttributeAudio23::ID;

documentAttributeAudio23::documentAttributeAudio23(TlParser &p)
#define FAIL(error) p.set_error(error)
  : duration_(TlFetchInt::parse(p))
#undef FAIL
{}

void documentAttributeAudio23::store(TlStorerCalcLength &s) const {
  (void)sizeof(s);
  TlStoreBinary::store(duration_, s);
}

void documentAttributeAudio23::store(TlStorerUnsafe &s) const {
  (void)sizeof(s);
  TlStoreBinary::store(duration_, s);
}

void documentAttributeAudio23::store(TlStorerToString &s, const char *field_name) const {
  if (!LOG_IS_STRIPPED(ERROR)) {
    s.store_class_begin(field_name, "documentAttributeAudio23");
    s.store_field("duration", duration_);
    s.store_class_end();
  }
}

documentAttributeFilename::documentAttributeFilename()
  : file_name_()
{}

documentAttributeFilename::documentAttributeFilename(std::string const &file_name_)
  : file_name_(file_name_)
{}

const std::int32_t documentAttributeFilename::ID;

documentAttributeFilename::documentAttributeFilename(TlParser &p)
#define FAIL(error) p.set_error(error)
  : file_name_(TlFetchString<std::string>::parse(p))
#undef FAIL
{}

void documentAttributeFilename::store(TlStorerCalcLength &s) const {
  (void)sizeof(s);
  TlStoreString::store(file_name_, s);
}

void documentAttributeFilename::store(TlStorerUnsafe &s) const {
  (void)sizeof(s);
  TlStoreString::store(file_name_, s);
}

void documentAttributeFilename::store(TlStorerToString &s, const char *field_name) const {
  if (!LOG_IS_STRIPPED(ERROR)) {
    s.store_class_begin(field_name, "documentAttributeFilename");
    s.store_field("file_name", file_name_);
    s.store_class_end();
  }
}

documentAttributeAudio45::documentAttributeAudio45()
  : duration_()
  , title_()
  , performer_()
{}

documentAttributeAudio45::documentAttributeAudio45(std::int32_t duration_, std::string const &title_, std::string const &performer_)
  : duration_(duration_)
  , title_(title_)
  , performer_(performer_)
{}

const std::int32_t documentAttributeAudio45::ID;

documentAttributeAudio45::documentAttributeAudio45(TlParser &p)
#define FAIL(error) p.set_error(error)
  : duration_(TlFetchInt::parse(p))
  , title_(TlFetchString<std::string>::parse(p))
  , performer_(TlFetchString<std::string>::parse(p))
#undef FAIL
{}

void documentAttributeAudio45::store(TlStorerCalcLength &s) const {
  (void)sizeof(s);
  TlStoreBinary::store(duration_, s);
  TlStoreString::store(title_, s);
  TlStoreString::store(performer_, s);
}

void documentAttributeAudio45::store(TlStorerUnsafe &s) const {
  (void)sizeof(s);
  TlStoreBinary::store(duration_, s);
  TlStoreString::store(title_, s);
  TlStoreString::store(performer_, s);
}

void documentAttributeAudio45::store(TlStorerToString &s, const char *field_name) const {
  if (!LOG_IS_STRIPPED(ERROR)) {
    s.store_class_begin(field_name, "documentAttributeAudio45");
    s.store_field("duration", duration_);
    s.store_field("title", title_);
    s.store_field("performer", performer_);
    s.store_class_end();
  }
}

documentAttributeSticker::documentAttributeSticker()
  : alt_()
  , stickerset_()
{}

documentAttributeSticker::documentAttributeSticker(std::string const &alt_, object_ptr<InputStickerSet> &&stickerset_)
  : alt_(alt_)
  , stickerset_(std::move(stickerset_))
{}

const std::int32_t documentAttributeSticker::ID;

documentAttributeSticker::documentAttributeSticker(TlParser &p)
#define FAIL(error) p.set_error(error)
  : alt_(TlFetchString<std::string>::parse(p))
  , stickerset_(TlFetchObject<InputStickerSet>::parse(p))
#undef FAIL
{}

void documentAttributeSticker::store(TlStorerCalcLength &s) const {
  (void)sizeof(s);
  TlStoreString::store(alt_, s);
  TlStoreBoxedUnknown<TlStoreObject>::store(stickerset_, s);
}

void documentAttributeSticker::store(TlStorerUnsafe &s) const {
  (void)sizeof(s);
  TlStoreString::store(alt_, s);
  TlStoreBoxedUnknown<TlStoreObject>::store(stickerset_, s);
}

void documentAttributeSticker::store(TlStorerToString &s, const char *field_name) const {
  if (!LOG_IS_STRIPPED(ERROR)) {
    s.store_class_begin(field_name, "documentAttributeSticker");
    s.store_field("alt", alt_);
    if (stickerset_ == nullptr) { s.store_field("stickerset", "null"); } else { stickerset_->store(s, "stickerset"); }
    s.store_class_end();
  }
}

documentAttributeAudio::documentAttributeAudio()
  : flags_()
  , voice_()
  , duration_()
  , title_()
  , performer_()
  , waveform_()
{}

documentAttributeAudio::documentAttributeAudio(std::int32_t flags_, bool voice_, std::int32_t duration_, std::string const &title_, std::string const &performer_, BufferSlice &&waveform_)
  : flags_(flags_)
  , voice_(voice_)
  , duration_(duration_)
  , title_(title_)
  , performer_(performer_)
  , waveform_(std::move(waveform_))
{}

const std::int32_t documentAttributeAudio::ID;

object_ptr<documentAttributeAudio> documentAttributeAudio::fetch(TlParser &p) {
#define FAIL(error) p.set_error(error); return nullptr;
  object_ptr<documentAttributeAudio> res = make_tl_object<documentAttributeAudio>();
  std::int32_t var0;
  if ((var0 = res->flags_ = TlFetchInt::parse(p)) < 0) { FAIL("Variable of type # can't be negative"); }
  if (var0 & 1024) { res->voice_ = TlFetchTrue::parse(p); }
  res->duration_ = TlFetchInt::parse(p);
  if (var0 & 1) { res->title_ = TlFetchString<std::string>::parse(p); }
  if (var0 & 2) { res->performer_ = TlFetchString<std::string>::parse(p); }
  if (var0 & 4) { res->waveform_ = TlFetchBytes<BufferSlice>::parse(p); }
  if (p.get_error()) { FAIL(""); }
  return res;
#undef FAIL
}

void documentAttributeAudio::store(TlStorerCalcLength &s) const {
  (void)sizeof(s);
  std::int32_t var0;
  TlStoreBinary::store((var0 = flags_), s);
  if (var0 & 1024) { TlStoreTrue::store(voice_, s); }
  TlStoreBinary::store(duration_, s);
  if (var0 & 1) { TlStoreString::store(title_, s); }
  if (var0 & 2) { TlStoreString::store(performer_, s); }
  if (var0 & 4) { TlStoreString::store(waveform_, s); }
}

void documentAttributeAudio::store(TlStorerUnsafe &s) const {
  (void)sizeof(s);
  std::int32_t var0;
  TlStoreBinary::store((var0 = flags_), s);
  if (var0 & 1024) { TlStoreTrue::store(voice_, s); }
  TlStoreBinary::store(duration_, s);
  if (var0 & 1) { TlStoreString::store(title_, s); }
  if (var0 & 2) { TlStoreString::store(performer_, s); }
  if (var0 & 4) { TlStoreString::store(waveform_, s); }
}

void documentAttributeAudio::store(TlStorerToString &s, const char *field_name) const {
  if (!LOG_IS_STRIPPED(ERROR)) {
    s.store_class_begin(field_name, "documentAttributeAudio");
  std::int32_t var0;
    s.store_field("flags", (var0 = flags_));
    if (var0 & 1024) {  }
    s.store_field("duration", duration_);
    if (var0 & 1) { s.store_field("title", title_); }
    if (var0 & 2) { s.store_field("performer", performer_); }
    if (var0 & 4) { s.store_bytes_field("waveform", waveform_); }
    s.store_class_end();
  }
}

documentAttributeVideo66::documentAttributeVideo66()
  : flags_()
  , round_message_()
  , duration_()
  , w_()
  , h_()
{}

documentAttributeVideo66::documentAttributeVideo66(std::int32_t flags_, bool round_message_, std::int32_t duration_, std::int32_t w_, std::int32_t h_)
  : flags_(flags_)
  , round_message_(round_message_)
  , duration_(duration_)
  , w_(w_)
  , h_(h_)
{}

const std::int32_t documentAttributeVideo66::ID;

object_ptr<documentAttributeVideo66> documentAttributeVideo66::fetch(TlParser &p) {
#define FAIL(error) p.set_error(error); return nullptr;
  object_ptr<documentAttributeVideo66> res = make_tl_object<documentAttributeVideo66>();
  std::int32_t var0;
  if ((var0 = res->flags_ = TlFetchInt::parse(p)) < 0) { FAIL("Variable of type # can't be negative"); }
  if (var0 & 1) { res->round_message_ = TlFetchTrue::parse(p); }
  res->duration_ = TlFetchInt::parse(p);
  res->w_ = TlFetchInt::parse(p);
  res->h_ = TlFetchInt::parse(p);
  if (p.get_error()) { FAIL(""); }
  return res;
#undef FAIL
}

void documentAttributeVideo66::store(TlStorerCalcLength &s) const {
  (void)sizeof(s);
  std::int32_t var0;
  TlStoreBinary::store((var0 = flags_), s);
  if (var0 & 1) { TlStoreTrue::store(round_message_, s); }
  TlStoreBinary::store(duration_, s);
  TlStoreBinary::store(w_, s);
  TlStoreBinary::store(h_, s);
}

void documentAttributeVideo66::store(TlStorerUnsafe &s) const {
  (void)sizeof(s);
  std::int32_t var0;
  TlStoreBinary::store((var0 = flags_), s);
  if (var0 & 1) { TlStoreTrue::store(round_message_, s); }
  TlStoreBinary::store(duration_, s);
  TlStoreBinary::store(w_, s);
  TlStoreBinary::store(h_, s);
}

void documentAttributeVideo66::store(TlStorerToString &s, const char *field_name) const {
  if (!LOG_IS_STRIPPED(ERROR)) {
    s.store_class_begin(field_name, "documentAttributeVideo66");
  std::int32_t var0;
    s.store_field("flags", (var0 = flags_));
    if (var0 & 1) {  }
    s.store_field("duration", duration_);
    s.store_field("w", w_);
    s.store_field("h", h_);
    s.store_class_end();
  }
}

object_ptr<FileLocation> FileLocation::fetch(TlParser &p) {
#define FAIL(error) p.set_error(error); return nullptr;
  int constructor = p.fetch_int();
  switch (constructor) {
    case fileLocationUnavailable::ID:
      return fileLocationUnavailable::fetch(p);
    case fileLocation::ID:
      return fileLocation::fetch(p);
    default:
      FAIL(PSTRING() << "Unknown constructor found " << format::as_hex(constructor));
  }
#undef FAIL
}

fileLocationUnavailable::fileLocationUnavailable()
  : volume_id_()
  , local_id_()
  , secret_()
{}

fileLocationUnavailable::fileLocationUnavailable(std::int64_t volume_id_, std::int32_t local_id_, std::int64_t secret_)
  : volume_id_(volume_id_)
  , local_id_(local_id_)
  , secret_(secret_)
{}

const std::int32_t fileLocationUnavailable::ID;

fileLocationUnavailable::fileLocationUnavailable(TlParser &p)
#define FAIL(error) p.set_error(error)
  : volume_id_(TlFetchLong::parse(p))
  , local_id_(TlFetchInt::parse(p))
  , secret_(TlFetchLong::parse(p))
#undef FAIL
{}

void fileLocationUnavailable::store(TlStorerCalcLength &s) const {
  (void)sizeof(s);
  TlStoreBinary::store(volume_id_, s);
  TlStoreBinary::store(local_id_, s);
  TlStoreBinary::store(secret_, s);
}

void fileLocationUnavailable::store(TlStorerUnsafe &s) const {
  (void)sizeof(s);
  TlStoreBinary::store(volume_id_, s);
  TlStoreBinary::store(local_id_, s);
  TlStoreBinary::store(secret_, s);
}

void fileLocationUnavailable::store(TlStorerToString &s, const char *field_name) const {
  if (!LOG_IS_STRIPPED(ERROR)) {
    s.store_class_begin(field_name, "fileLocationUnavailable");
    s.store_field("volume_id", volume_id_);
    s.store_field("local_id", local_id_);
    s.store_field("secret", secret_);
    s.store_class_end();
  }
}

fileLocation::fileLocation()
  : dc_id_()
  , volume_id_()
  , local_id_()
  , secret_()
{}

fileLocation::fileLocation(std::int32_t dc_id_, std::int64_t volume_id_, std::int32_t local_id_, std::int64_t secret_)
  : dc_id_(dc_id_)
  , volume_id_(volume_id_)
  , local_id_(local_id_)
  , secret_(secret_)
{}

const std::int32_t fileLocation::ID;

fileLocation::fileLocation(TlParser &p)
#define FAIL(error) p.set_error(error)
  : dc_id_(TlFetchInt::parse(p))
  , volume_id_(TlFetchLong::parse(p))
  , local_id_(TlFetchInt::parse(p))
  , secret_(TlFetchLong::parse(p))
#undef FAIL
{}

void fileLocation::store(TlStorerCalcLength &s) const {
  (void)sizeof(s);
  TlStoreBinary::store(dc_id_, s);
  TlStoreBinary::store(volume_id_, s);
  TlStoreBinary::store(local_id_, s);
  TlStoreBinary::store(secret_, s);
}

void fileLocation::store(TlStorerUnsafe &s) const {
  (void)sizeof(s);
  TlStoreBinary::store(dc_id_, s);
  TlStoreBinary::store(volume_id_, s);
  TlStoreBinary::store(local_id_, s);
  TlStoreBinary::store(secret_, s);
}

void fileLocation::store(TlStorerToString &s, const char *field_name) const {
  if (!LOG_IS_STRIPPED(ERROR)) {
    s.store_class_begin(field_name, "fileLocation");
    s.store_field("dc_id", dc_id_);
    s.store_field("volume_id", volume_id_);
    s.store_field("local_id", local_id_);
    s.store_field("secret", secret_);
    s.store_class_end();
  }
}

object_ptr<InputStickerSet> InputStickerSet::fetch(TlParser &p) {
#define FAIL(error) p.set_error(error); return nullptr;
  int constructor = p.fetch_int();
  switch (constructor) {
    case inputStickerSetShortName::ID:
      return inputStickerSetShortName::fetch(p);
    case inputStickerSetEmpty::ID:
      return inputStickerSetEmpty::fetch(p);
    default:
      FAIL(PSTRING() << "Unknown constructor found " << format::as_hex(constructor));
  }
#undef FAIL
}

inputStickerSetShortName::inputStickerSetShortName()
  : short_name_()
{}

inputStickerSetShortName::inputStickerSetShortName(std::string const &short_name_)
  : short_name_(short_name_)
{}

const std::int32_t inputStickerSetShortName::ID;

inputStickerSetShortName::inputStickerSetShortName(TlParser &p)
#define FAIL(error) p.set_error(error)
  : short_name_(TlFetchString<std::string>::parse(p))
#undef FAIL
{}

void inputStickerSetShortName::store(TlStorerCalcLength &s) const {
  (void)sizeof(s);
  TlStoreString::store(short_name_, s);
}

void inputStickerSetShortName::store(TlStorerUnsafe &s) const {
  (void)sizeof(s);
  TlStoreString::store(short_name_, s);
}

void inputStickerSetShortName::store(TlStorerToString &s, const char *field_name) const {
  if (!LOG_IS_STRIPPED(ERROR)) {
    s.store_class_begin(field_name, "inputStickerSetShortName");
    s.store_field("short_name", short_name_);
    s.store_class_end();
  }
}

inputStickerSetEmpty::inputStickerSetEmpty() {
}

const std::int32_t inputStickerSetEmpty::ID;

inputStickerSetEmpty::inputStickerSetEmpty(TlParser &p)
#define FAIL(error) p.set_error(error)
#undef FAIL
{
  (void)p;
}

void inputStickerSetEmpty::store(TlStorerCalcLength &s) const {
  (void)sizeof(s);
}

void inputStickerSetEmpty::store(TlStorerUnsafe &s) const {
  (void)sizeof(s);
}

void inputStickerSetEmpty::store(TlStorerToString &s, const char *field_name) const {
  if (!LOG_IS_STRIPPED(ERROR)) {
    s.store_class_begin(field_name, "inputStickerSetEmpty");
    s.store_class_end();
  }
}

object_ptr<MessageEntity> MessageEntity::fetch(TlParser &p) {
#define FAIL(error) p.set_error(error); return nullptr;
  int constructor = p.fetch_int();
  switch (constructor) {
    case messageEntityUnknown::ID:
      return messageEntityUnknown::fetch(p);
    case messageEntityMention::ID:
      return messageEntityMention::fetch(p);
    case messageEntityHashtag::ID:
      return messageEntityHashtag::fetch(p);
    case messageEntityBotCommand::ID:
      return messageEntityBotCommand::fetch(p);
    case messageEntityUrl::ID:
      return messageEntityUrl::fetch(p);
    case messageEntityEmail::ID:
      return messageEntityEmail::fetch(p);
    case messageEntityBold::ID:
      return messageEntityBold::fetch(p);
    case messageEntityItalic::ID:
      return messageEntityItalic::fetch(p);
    case messageEntityCode::ID:
      return messageEntityCode::fetch(p);
    case messageEntityPre::ID:
      return messageEntityPre::fetch(p);
    case messageEntityTextUrl::ID:
      return messageEntityTextUrl::fetch(p);
    case messageEntityMentionName::ID:
      return messageEntityMentionName::fetch(p);
    case messageEntityPhone::ID:
      return messageEntityPhone::fetch(p);
    case messageEntityCashtag::ID:
      return messageEntityCashtag::fetch(p);
    default:
      FAIL(PSTRING() << "Unknown constructor found " << format::as_hex(constructor));
  }
#undef FAIL
}

messageEntityUnknown::messageEntityUnknown()
  : offset_()
  , length_()
{}

messageEntityUnknown::messageEntityUnknown(std::int32_t offset_, std::int32_t length_)
  : offset_(offset_)
  , length_(length_)
{}

const std::int32_t messageEntityUnknown::ID;

messageEntityUnknown::messageEntityUnknown(TlParser &p)
#define FAIL(error) p.set_error(error)
  : offset_(TlFetchInt::parse(p))
  , length_(TlFetchInt::parse(p))
#undef FAIL
{}

void messageEntityUnknown::store(TlStorerCalcLength &s) const {
  (void)sizeof(s);
  TlStoreBinary::store(offset_, s);
  TlStoreBinary::store(length_, s);
}

void messageEntityUnknown::store(TlStorerUnsafe &s) const {
  (void)sizeof(s);
  TlStoreBinary::store(offset_, s);
  TlStoreBinary::store(length_, s);
}

void messageEntityUnknown::store(TlStorerToString &s, const char *field_name) const {
  if (!LOG_IS_STRIPPED(ERROR)) {
    s.store_class_begin(field_name, "messageEntityUnknown");
    s.store_field("offset", offset_);
    s.store_field("length", length_);
    s.store_class_end();
  }
}

messageEntityMention::messageEntityMention()
  : offset_()
  , length_()
{}

messageEntityMention::messageEntityMention(std::int32_t offset_, std::int32_t length_)
  : offset_(offset_)
  , length_(length_)
{}

const std::int32_t messageEntityMention::ID;

messageEntityMention::messageEntityMention(TlParser &p)
#define FAIL(error) p.set_error(error)
  : offset_(TlFetchInt::parse(p))
  , length_(TlFetchInt::parse(p))
#undef FAIL
{}

void messageEntityMention::store(TlStorerCalcLength &s) const {
  (void)sizeof(s);
  TlStoreBinary::store(offset_, s);
  TlStoreBinary::store(length_, s);
}

void messageEntityMention::store(TlStorerUnsafe &s) const {
  (void)sizeof(s);
  TlStoreBinary::store(offset_, s);
  TlStoreBinary::store(length_, s);
}

void messageEntityMention::store(TlStorerToString &s, const char *field_name) const {
  if (!LOG_IS_STRIPPED(ERROR)) {
    s.store_class_begin(field_name, "messageEntityMention");
    s.store_field("offset", offset_);
    s.store_field("length", length_);
    s.store_class_end();
  }
}

messageEntityHashtag::messageEntityHashtag()
  : offset_()
  , length_()
{}

messageEntityHashtag::messageEntityHashtag(std::int32_t offset_, std::int32_t length_)
  : offset_(offset_)
  , length_(length_)
{}

const std::int32_t messageEntityHashtag::ID;

messageEntityHashtag::messageEntityHashtag(TlParser &p)
#define FAIL(error) p.set_error(error)
  : offset_(TlFetchInt::parse(p))
  , length_(TlFetchInt::parse(p))
#undef FAIL
{}

void messageEntityHashtag::store(TlStorerCalcLength &s) const {
  (void)sizeof(s);
  TlStoreBinary::store(offset_, s);
  TlStoreBinary::store(length_, s);
}

void messageEntityHashtag::store(TlStorerUnsafe &s) const {
  (void)sizeof(s);
  TlStoreBinary::store(offset_, s);
  TlStoreBinary::store(length_, s);
}

void messageEntityHashtag::store(TlStorerToString &s, const char *field_name) const {
  if (!LOG_IS_STRIPPED(ERROR)) {
    s.store_class_begin(field_name, "messageEntityHashtag");
    s.store_field("offset", offset_);
    s.store_field("length", length_);
    s.store_class_end();
  }
}

messageEntityBotCommand::messageEntityBotCommand()
  : offset_()
  , length_()
{}

messageEntityBotCommand::messageEntityBotCommand(std::int32_t offset_, std::int32_t length_)
  : offset_(offset_)
  , length_(length_)
{}

const std::int32_t messageEntityBotCommand::ID;

messageEntityBotCommand::messageEntityBotCommand(TlParser &p)
#define FAIL(error) p.set_error(error)
  : offset_(TlFetchInt::parse(p))
  , length_(TlFetchInt::parse(p))
#undef FAIL
{}

void messageEntityBotCommand::store(TlStorerCalcLength &s) const {
  (void)sizeof(s);
  TlStoreBinary::store(offset_, s);
  TlStoreBinary::store(length_, s);
}

void messageEntityBotCommand::store(TlStorerUnsafe &s) const {
  (void)sizeof(s);
  TlStoreBinary::store(offset_, s);
  TlStoreBinary::store(length_, s);
}

void messageEntityBotCommand::store(TlStorerToString &s, const char *field_name) const {
  if (!LOG_IS_STRIPPED(ERROR)) {
    s.store_class_begin(field_name, "messageEntityBotCommand");
    s.store_field("offset", offset_);
    s.store_field("length", length_);
    s.store_class_end();
  }
}

messageEntityUrl::messageEntityUrl()
  : offset_()
  , length_()
{}

messageEntityUrl::messageEntityUrl(std::int32_t offset_, std::int32_t length_)
  : offset_(offset_)
  , length_(length_)
{}

const std::int32_t messageEntityUrl::ID;

messageEntityUrl::messageEntityUrl(TlParser &p)
#define FAIL(error) p.set_error(error)
  : offset_(TlFetchInt::parse(p))
  , length_(TlFetchInt::parse(p))
#undef FAIL
{}

void messageEntityUrl::store(TlStorerCalcLength &s) const {
  (void)sizeof(s);
  TlStoreBinary::store(offset_, s);
  TlStoreBinary::store(length_, s);
}

void messageEntityUrl::store(TlStorerUnsafe &s) const {
  (void)sizeof(s);
  TlStoreBinary::store(offset_, s);
  TlStoreBinary::store(length_, s);
}

void messageEntityUrl::store(TlStorerToString &s, const char *field_name) const {
  if (!LOG_IS_STRIPPED(ERROR)) {
    s.store_class_begin(field_name, "messageEntityUrl");
    s.store_field("offset", offset_);
    s.store_field("length", length_);
    s.store_class_end();
  }
}

messageEntityEmail::messageEntityEmail()
  : offset_()
  , length_()
{}

messageEntityEmail::messageEntityEmail(std::int32_t offset_, std::int32_t length_)
  : offset_(offset_)
  , length_(length_)
{}

const std::int32_t messageEntityEmail::ID;

messageEntityEmail::messageEntityEmail(TlParser &p)
#define FAIL(error) p.set_error(error)
  : offset_(TlFetchInt::parse(p))
  , length_(TlFetchInt::parse(p))
#undef FAIL
{}

void messageEntityEmail::store(TlStorerCalcLength &s) const {
  (void)sizeof(s);
  TlStoreBinary::store(offset_, s);
  TlStoreBinary::store(length_, s);
}

void messageEntityEmail::store(TlStorerUnsafe &s) const {
  (void)sizeof(s);
  TlStoreBinary::store(offset_, s);
  TlStoreBinary::store(length_, s);
}

void messageEntityEmail::store(TlStorerToString &s, const char *field_name) const {
  if (!LOG_IS_STRIPPED(ERROR)) {
    s.store_class_begin(field_name, "messageEntityEmail");
    s.store_field("offset", offset_);
    s.store_field("length", length_);
    s.store_class_end();
  }
}

messageEntityBold::messageEntityBold()
  : offset_()
  , length_()
{}

messageEntityBold::messageEntityBold(std::int32_t offset_, std::int32_t length_)
  : offset_(offset_)
  , length_(length_)
{}

const std::int32_t messageEntityBold::ID;

messageEntityBold::messageEntityBold(TlParser &p)
#define FAIL(error) p.set_error(error)
  : offset_(TlFetchInt::parse(p))
  , length_(TlFetchInt::parse(p))
#undef FAIL
{}

void messageEntityBold::store(TlStorerCalcLength &s) const {
  (void)sizeof(s);
  TlStoreBinary::store(offset_, s);
  TlStoreBinary::store(length_, s);
}

void messageEntityBold::store(TlStorerUnsafe &s) const {
  (void)sizeof(s);
  TlStoreBinary::store(offset_, s);
  TlStoreBinary::store(length_, s);
}

void messageEntityBold::store(TlStorerToString &s, const char *field_name) const {
  if (!LOG_IS_STRIPPED(ERROR)) {
    s.store_class_begin(field_name, "messageEntityBold");
    s.store_field("offset", offset_);
    s.store_field("length", length_);
    s.store_class_end();
  }
}

messageEntityItalic::messageEntityItalic()
  : offset_()
  , length_()
{}

messageEntityItalic::messageEntityItalic(std::int32_t offset_, std::int32_t length_)
  : offset_(offset_)
  , length_(length_)
{}

const std::int32_t messageEntityItalic::ID;

messageEntityItalic::messageEntityItalic(TlParser &p)
#define FAIL(error) p.set_error(error)
  : offset_(TlFetchInt::parse(p))
  , length_(TlFetchInt::parse(p))
#undef FAIL
{}

void messageEntityItalic::store(TlStorerCalcLength &s) const {
  (void)sizeof(s);
  TlStoreBinary::store(offset_, s);
  TlStoreBinary::store(length_, s);
}

void messageEntityItalic::store(TlStorerUnsafe &s) const {
  (void)sizeof(s);
  TlStoreBinary::store(offset_, s);
  TlStoreBinary::store(length_, s);
}

void messageEntityItalic::store(TlStorerToString &s, const char *field_name) const {
  if (!LOG_IS_STRIPPED(ERROR)) {
    s.store_class_begin(field_name, "messageEntityItalic");
    s.store_field("offset", offset_);
    s.store_field("length", length_);
    s.store_class_end();
  }
}

messageEntityCode::messageEntityCode()
  : offset_()
  , length_()
{}

messageEntityCode::messageEntityCode(std::int32_t offset_, std::int32_t length_)
  : offset_(offset_)
  , length_(length_)
{}

const std::int32_t messageEntityCode::ID;

messageEntityCode::messageEntityCode(TlParser &p)
#define FAIL(error) p.set_error(error)
  : offset_(TlFetchInt::parse(p))
  , length_(TlFetchInt::parse(p))
#undef FAIL
{}

void messageEntityCode::store(TlStorerCalcLength &s) const {
  (void)sizeof(s);
  TlStoreBinary::store(offset_, s);
  TlStoreBinary::store(length_, s);
}

void messageEntityCode::store(TlStorerUnsafe &s) const {
  (void)sizeof(s);
  TlStoreBinary::store(offset_, s);
  TlStoreBinary::store(length_, s);
}

void messageEntityCode::store(TlStorerToString &s, const char *field_name) const {
  if (!LOG_IS_STRIPPED(ERROR)) {
    s.store_class_begin(field_name, "messageEntityCode");
    s.store_field("offset", offset_);
    s.store_field("length", length_);
    s.store_class_end();
  }
}

messageEntityPre::messageEntityPre()
  : offset_()
  , length_()
  , language_()
{}

messageEntityPre::messageEntityPre(std::int32_t offset_, std::int32_t length_, std::string const &language_)
  : offset_(offset_)
  , length_(length_)
  , language_(language_)
{}

const std::int32_t messageEntityPre::ID;

messageEntityPre::messageEntityPre(TlParser &p)
#define FAIL(error) p.set_error(error)
  : offset_(TlFetchInt::parse(p))
  , length_(TlFetchInt::parse(p))
  , language_(TlFetchString<std::string>::parse(p))
#undef FAIL
{}

void messageEntityPre::store(TlStorerCalcLength &s) const {
  (void)sizeof(s);
  TlStoreBinary::store(offset_, s);
  TlStoreBinary::store(length_, s);
  TlStoreString::store(language_, s);
}

void messageEntityPre::store(TlStorerUnsafe &s) const {
  (void)sizeof(s);
  TlStoreBinary::store(offset_, s);
  TlStoreBinary::store(length_, s);
  TlStoreString::store(language_, s);
}

void messageEntityPre::store(TlStorerToString &s, const char *field_name) const {
  if (!LOG_IS_STRIPPED(ERROR)) {
    s.store_class_begin(field_name, "messageEntityPre");
    s.store_field("offset", offset_);
    s.store_field("length", length_);
    s.store_field("language", language_);
    s.store_class_end();
  }
}

messageEntityTextUrl::messageEntityTextUrl()
  : offset_()
  , length_()
  , url_()
{}

messageEntityTextUrl::messageEntityTextUrl(std::int32_t offset_, std::int32_t length_, std::string const &url_)
  : offset_(offset_)
  , length_(length_)
  , url_(url_)
{}

const std::int32_t messageEntityTextUrl::ID;

messageEntityTextUrl::messageEntityTextUrl(TlParser &p)
#define FAIL(error) p.set_error(error)
  : offset_(TlFetchInt::parse(p))
  , length_(TlFetchInt::parse(p))
  , url_(TlFetchString<std::string>::parse(p))
#undef FAIL
{}

void messageEntityTextUrl::store(TlStorerCalcLength &s) const {
  (void)sizeof(s);
  TlStoreBinary::store(offset_, s);
  TlStoreBinary::store(length_, s);
  TlStoreString::store(url_, s);
}

void messageEntityTextUrl::store(TlStorerUnsafe &s) const {
  (void)sizeof(s);
  TlStoreBinary::store(offset_, s);
  TlStoreBinary::store(length_, s);
  TlStoreString::store(url_, s);
}

void messageEntityTextUrl::store(TlStorerToString &s, const char *field_name) const {
  if (!LOG_IS_STRIPPED(ERROR)) {
    s.store_class_begin(field_name, "messageEntityTextUrl");
    s.store_field("offset", offset_);
    s.store_field("length", length_);
    s.store_field("url", url_);
    s.store_class_end();
  }
}

messageEntityMentionName::messageEntityMentionName()
  : offset_()
  , length_()
  , user_id_()
{}

messageEntityMentionName::messageEntityMentionName(std::int32_t offset_, std::int32_t length_, std::int32_t user_id_)
  : offset_(offset_)
  , length_(length_)
  , user_id_(user_id_)
{}

const std::int32_t messageEntityMentionName::ID;

messageEntityMentionName::messageEntityMentionName(TlParser &p)
#define FAIL(error) p.set_error(error)
  : offset_(TlFetchInt::parse(p))
  , length_(TlFetchInt::parse(p))
  , user_id_(TlFetchInt::parse(p))
#undef FAIL
{}

void messageEntityMentionName::store(TlStorerCalcLength &s) const {
  (void)sizeof(s);
  TlStoreBinary::store(offset_, s);
  TlStoreBinary::store(length_, s);
  TlStoreBinary::store(user_id_, s);
}

void messageEntityMentionName::store(TlStorerUnsafe &s) const {
  (void)sizeof(s);
  TlStoreBinary::store(offset_, s);
  TlStoreBinary::store(length_, s);
  TlStoreBinary::store(user_id_, s);
}

void messageEntityMentionName::store(TlStorerToString &s, const char *field_name) const {
  if (!LOG_IS_STRIPPED(ERROR)) {
    s.store_class_begin(field_name, "messageEntityMentionName");
    s.store_field("offset", offset_);
    s.store_field("length", length_);
    s.store_field("user_id", user_id_);
    s.store_class_end();
  }
}

messageEntityPhone::messageEntityPhone()
  : offset_()
  , length_()
{}

messageEntityPhone::messageEntityPhone(std::int32_t offset_, std::int32_t length_)
  : offset_(offset_)
  , length_(length_)
{}

const std::int32_t messageEntityPhone::ID;

messageEntityPhone::messageEntityPhone(TlParser &p)
#define FAIL(error) p.set_error(error)
  : offset_(TlFetchInt::parse(p))
  , length_(TlFetchInt::parse(p))
#undef FAIL
{}

void messageEntityPhone::store(TlStorerCalcLength &s) const {
  (void)sizeof(s);
  TlStoreBinary::store(offset_, s);
  TlStoreBinary::store(length_, s);
}

void messageEntityPhone::store(TlStorerUnsafe &s) const {
  (void)sizeof(s);
  TlStoreBinary::store(offset_, s);
  TlStoreBinary::store(length_, s);
}

void messageEntityPhone::store(TlStorerToString &s, const char *field_name) const {
  if (!LOG_IS_STRIPPED(ERROR)) {
    s.store_class_begin(field_name, "messageEntityPhone");
    s.store_field("offset", offset_);
    s.store_field("length", length_);
    s.store_class_end();
  }
}

messageEntityCashtag::messageEntityCashtag()
  : offset_()
  , length_()
{}

messageEntityCashtag::messageEntityCashtag(std::int32_t offset_, std::int32_t length_)
  : offset_(offset_)
  , length_(length_)
{}

const std::int32_t messageEntityCashtag::ID;

messageEntityCashtag::messageEntityCashtag(TlParser &p)
#define FAIL(error) p.set_error(error)
  : offset_(TlFetchInt::parse(p))
  , length_(TlFetchInt::parse(p))
#undef FAIL
{}

void messageEntityCashtag::store(TlStorerCalcLength &s) const {
  (void)sizeof(s);
  TlStoreBinary::store(offset_, s);
  TlStoreBinary::store(length_, s);
}

void messageEntityCashtag::store(TlStorerUnsafe &s) const {
  (void)sizeof(s);
  TlStoreBinary::store(offset_, s);
  TlStoreBinary::store(length_, s);
}

void messageEntityCashtag::store(TlStorerToString &s, const char *field_name) const {
  if (!LOG_IS_STRIPPED(ERROR)) {
    s.store_class_begin(field_name, "messageEntityCashtag");
    s.store_field("offset", offset_);
    s.store_field("length", length_);
    s.store_class_end();
  }
}

object_ptr<PhotoSize> PhotoSize::fetch(TlParser &p) {
#define FAIL(error) p.set_error(error); return nullptr;
  int constructor = p.fetch_int();
  switch (constructor) {
    case photoSizeEmpty::ID:
      return photoSizeEmpty::fetch(p);
    case photoSize::ID:
      return photoSize::fetch(p);
    case photoCachedSize::ID:
      return photoCachedSize::fetch(p);
    default:
      FAIL(PSTRING() << "Unknown constructor found " << format::as_hex(constructor));
  }
#undef FAIL
}

photoSizeEmpty::photoSizeEmpty()
  : type_()
{}

photoSizeEmpty::photoSizeEmpty(std::string const &type_)
  : type_(type_)
{}

const std::int32_t photoSizeEmpty::ID;

photoSizeEmpty::photoSizeEmpty(TlParser &p)
#define FAIL(error) p.set_error(error)
  : type_(TlFetchString<std::string>::parse(p))
#undef FAIL
{}

void photoSizeEmpty::store(TlStorerCalcLength &s) const {
  (void)sizeof(s);
  TlStoreString::store(type_, s);
}

void photoSizeEmpty::store(TlStorerUnsafe &s) const {
  (void)sizeof(s);
  TlStoreString::store(type_, s);
}

void photoSizeEmpty::store(TlStorerToString &s, const char *field_name) const {
  if (!LOG_IS_STRIPPED(ERROR)) {
    s.store_class_begin(field_name, "photoSizeEmpty");
    s.store_field("type", type_);
    s.store_class_end();
  }
}

photoSize::photoSize()
  : type_()
  , location_()
  , w_()
  , h_()
  , size_()
{}

photoSize::photoSize(std::string const &type_, object_ptr<FileLocation> &&location_, std::int32_t w_, std::int32_t h_, std::int32_t size_)
  : type_(type_)
  , location_(std::move(location_))
  , w_(w_)
  , h_(h_)
  , size_(size_)
{}

const std::int32_t photoSize::ID;

photoSize::photoSize(TlParser &p)
#define FAIL(error) p.set_error(error)
  : type_(TlFetchString<std::string>::parse(p))
  , location_(TlFetchObject<FileLocation>::parse(p))
  , w_(TlFetchInt::parse(p))
  , h_(TlFetchInt::parse(p))
  , size_(TlFetchInt::parse(p))
#undef FAIL
{}

void photoSize::store(TlStorerCalcLength &s) const {
  (void)sizeof(s);
  TlStoreString::store(type_, s);
  TlStoreBoxedUnknown<TlStoreObject>::store(location_, s);
  TlStoreBinary::store(w_, s);
  TlStoreBinary::store(h_, s);
  TlStoreBinary::store(size_, s);
}

void photoSize::store(TlStorerUnsafe &s) const {
  (void)sizeof(s);
  TlStoreString::store(type_, s);
  TlStoreBoxedUnknown<TlStoreObject>::store(location_, s);
  TlStoreBinary::store(w_, s);
  TlStoreBinary::store(h_, s);
  TlStoreBinary::store(size_, s);
}

void photoSize::store(TlStorerToString &s, const char *field_name) const {
  if (!LOG_IS_STRIPPED(ERROR)) {
    s.store_class_begin(field_name, "photoSize");
    s.store_field("type", type_);
    if (location_ == nullptr) { s.store_field("location", "null"); } else { location_->store(s, "location"); }
    s.store_field("w", w_);
    s.store_field("h", h_);
    s.store_field("size", size_);
    s.store_class_end();
  }
}

photoCachedSize::photoCachedSize()
  : type_()
  , location_()
  , w_()
  , h_()
  , bytes_()
{}

photoCachedSize::photoCachedSize(std::string const &type_, object_ptr<FileLocation> &&location_, std::int32_t w_, std::int32_t h_, BufferSlice &&bytes_)
  : type_(type_)
  , location_(std::move(location_))
  , w_(w_)
  , h_(h_)
  , bytes_(std::move(bytes_))
{}

const std::int32_t photoCachedSize::ID;

photoCachedSize::photoCachedSize(TlParser &p)
#define FAIL(error) p.set_error(error)
  : type_(TlFetchString<std::string>::parse(p))
  , location_(TlFetchObject<FileLocation>::parse(p))
  , w_(TlFetchInt::parse(p))
  , h_(TlFetchInt::parse(p))
  , bytes_(TlFetchBytes<BufferSlice>::parse(p))
#undef FAIL
{}

void photoCachedSize::store(TlStorerCalcLength &s) const {
  (void)sizeof(s);
  TlStoreString::store(type_, s);
  TlStoreBoxedUnknown<TlStoreObject>::store(location_, s);
  TlStoreBinary::store(w_, s);
  TlStoreBinary::store(h_, s);
  TlStoreString::store(bytes_, s);
}

void photoCachedSize::store(TlStorerUnsafe &s) const {
  (void)sizeof(s);
  TlStoreString::store(type_, s);
  TlStoreBoxedUnknown<TlStoreObject>::store(location_, s);
  TlStoreBinary::store(w_, s);
  TlStoreBinary::store(h_, s);
  TlStoreString::store(bytes_, s);
}

void photoCachedSize::store(TlStorerToString &s, const char *field_name) const {
  if (!LOG_IS_STRIPPED(ERROR)) {
    s.store_class_begin(field_name, "photoCachedSize");
    s.store_field("type", type_);
    if (location_ == nullptr) { s.store_field("location", "null"); } else { location_->store(s, "location"); }
    s.store_field("w", w_);
    s.store_field("h", h_);
    s.store_bytes_field("bytes", bytes_);
    s.store_class_end();
  }
}

object_ptr<SendMessageAction> SendMessageAction::fetch(TlParser &p) {
#define FAIL(error) p.set_error(error); return nullptr;
  int constructor = p.fetch_int();
  switch (constructor) {
    case sendMessageTypingAction::ID:
      return sendMessageTypingAction::fetch(p);
    case sendMessageCancelAction::ID:
      return sendMessageCancelAction::fetch(p);
    case sendMessageRecordVideoAction::ID:
      return sendMessageRecordVideoAction::fetch(p);
    case sendMessageUploadVideoAction::ID:
      return sendMessageUploadVideoAction::fetch(p);
    case sendMessageRecordAudioAction::ID:
      return sendMessageRecordAudioAction::fetch(p);
    case sendMessageUploadAudioAction::ID:
      return sendMessageUploadAudioAction::fetch(p);
    case sendMessageUploadPhotoAction::ID:
      return sendMessageUploadPhotoAction::fetch(p);
    case sendMessageUploadDocumentAction::ID:
      return sendMessageUploadDocumentAction::fetch(p);
    case sendMessageGeoLocationAction::ID:
      return sendMessageGeoLocationAction::fetch(p);
    case sendMessageChooseContactAction::ID:
      return sendMessageChooseContactAction::fetch(p);
    case sendMessageRecordRoundAction::ID:
      return sendMessageRecordRoundAction::fetch(p);
    case sendMessageUploadRoundAction::ID:
      return sendMessageUploadRoundAction::fetch(p);
    default:
      FAIL(PSTRING() << "Unknown constructor found " << format::as_hex(constructor));
  }
#undef FAIL
}

sendMessageTypingAction::sendMessageTypingAction() {
}

const std::int32_t sendMessageTypingAction::ID;

sendMessageTypingAction::sendMessageTypingAction(TlParser &p)
#define FAIL(error) p.set_error(error)
#undef FAIL
{
  (void)p;
}

void sendMessageTypingAction::store(TlStorerCalcLength &s) const {
  (void)sizeof(s);
}

void sendMessageTypingAction::store(TlStorerUnsafe &s) const {
  (void)sizeof(s);
}

void sendMessageTypingAction::store(TlStorerToString &s, const char *field_name) const {
  if (!LOG_IS_STRIPPED(ERROR)) {
    s.store_class_begin(field_name, "sendMessageTypingAction");
    s.store_class_end();
  }
}

sendMessageCancelAction::sendMessageCancelAction() {
}

const std::int32_t sendMessageCancelAction::ID;

sendMessageCancelAction::sendMessageCancelAction(TlParser &p)
#define FAIL(error) p.set_error(error)
#undef FAIL
{
  (void)p;
}

void sendMessageCancelAction::store(TlStorerCalcLength &s) const {
  (void)sizeof(s);
}

void sendMessageCancelAction::store(TlStorerUnsafe &s) const {
  (void)sizeof(s);
}

void sendMessageCancelAction::store(TlStorerToString &s, const char *field_name) const {
  if (!LOG_IS_STRIPPED(ERROR)) {
    s.store_class_begin(field_name, "sendMessageCancelAction");
    s.store_class_end();
  }
}

sendMessageRecordVideoAction::sendMessageRecordVideoAction() {
}

const std::int32_t sendMessageRecordVideoAction::ID;

sendMessageRecordVideoAction::sendMessageRecordVideoAction(TlParser &p)
#define FAIL(error) p.set_error(error)
#undef FAIL
{
  (void)p;
}

void sendMessageRecordVideoAction::store(TlStorerCalcLength &s) const {
  (void)sizeof(s);
}

void sendMessageRecordVideoAction::store(TlStorerUnsafe &s) const {
  (void)sizeof(s);
}

void sendMessageRecordVideoAction::store(TlStorerToString &s, const char *field_name) const {
  if (!LOG_IS_STRIPPED(ERROR)) {
    s.store_class_begin(field_name, "sendMessageRecordVideoAction");
    s.store_class_end();
  }
}

sendMessageUploadVideoAction::sendMessageUploadVideoAction() {
}

const std::int32_t sendMessageUploadVideoAction::ID;

sendMessageUploadVideoAction::sendMessageUploadVideoAction(TlParser &p)
#define FAIL(error) p.set_error(error)
#undef FAIL
{
  (void)p;
}

void sendMessageUploadVideoAction::store(TlStorerCalcLength &s) const {
  (void)sizeof(s);
}

void sendMessageUploadVideoAction::store(TlStorerUnsafe &s) const {
  (void)sizeof(s);
}

void sendMessageUploadVideoAction::store(TlStorerToString &s, const char *field_name) const {
  if (!LOG_IS_STRIPPED(ERROR)) {
    s.store_class_begin(field_name, "sendMessageUploadVideoAction");
    s.store_class_end();
  }
}

sendMessageRecordAudioAction::sendMessageRecordAudioAction() {
}

const std::int32_t sendMessageRecordAudioAction::ID;

sendMessageRecordAudioAction::sendMessageRecordAudioAction(TlParser &p)
#define FAIL(error) p.set_error(error)
#undef FAIL
{
  (void)p;
}

void sendMessageRecordAudioAction::store(TlStorerCalcLength &s) const {
  (void)sizeof(s);
}

void sendMessageRecordAudioAction::store(TlStorerUnsafe &s) const {
  (void)sizeof(s);
}

void sendMessageRecordAudioAction::store(TlStorerToString &s, const char *field_name) const {
  if (!LOG_IS_STRIPPED(ERROR)) {
    s.store_class_begin(field_name, "sendMessageRecordAudioAction");
    s.store_class_end();
  }
}

sendMessageUploadAudioAction::sendMessageUploadAudioAction() {
}

const std::int32_t sendMessageUploadAudioAction::ID;

sendMessageUploadAudioAction::sendMessageUploadAudioAction(TlParser &p)
#define FAIL(error) p.set_error(error)
#undef FAIL
{
  (void)p;
}

void sendMessageUploadAudioAction::store(TlStorerCalcLength &s) const {
  (void)sizeof(s);
}

void sendMessageUploadAudioAction::store(TlStorerUnsafe &s) const {
  (void)sizeof(s);
}

void sendMessageUploadAudioAction::store(TlStorerToString &s, const char *field_name) const {
  if (!LOG_IS_STRIPPED(ERROR)) {
    s.store_class_begin(field_name, "sendMessageUploadAudioAction");
    s.store_class_end();
  }
}

sendMessageUploadPhotoAction::sendMessageUploadPhotoAction() {
}

const std::int32_t sendMessageUploadPhotoAction::ID;

sendMessageUploadPhotoAction::sendMessageUploadPhotoAction(TlParser &p)
#define FAIL(error) p.set_error(error)
#undef FAIL
{
  (void)p;
}

void sendMessageUploadPhotoAction::store(TlStorerCalcLength &s) const {
  (void)sizeof(s);
}

void sendMessageUploadPhotoAction::store(TlStorerUnsafe &s) const {
  (void)sizeof(s);
}

void sendMessageUploadPhotoAction::store(TlStorerToString &s, const char *field_name) const {
  if (!LOG_IS_STRIPPED(ERROR)) {
    s.store_class_begin(field_name, "sendMessageUploadPhotoAction");
    s.store_class_end();
  }
}

sendMessageUploadDocumentAction::sendMessageUploadDocumentAction() {
}

const std::int32_t sendMessageUploadDocumentAction::ID;

sendMessageUploadDocumentAction::sendMessageUploadDocumentAction(TlParser &p)
#define FAIL(error) p.set_error(error)
#undef FAIL
{
  (void)p;
}

void sendMessageUploadDocumentAction::store(TlStorerCalcLength &s) const {
  (void)sizeof(s);
}

void sendMessageUploadDocumentAction::store(TlStorerUnsafe &s) const {
  (void)sizeof(s);
}

void sendMessageUploadDocumentAction::store(TlStorerToString &s, const char *field_name) const {
  if (!LOG_IS_STRIPPED(ERROR)) {
    s.store_class_begin(field_name, "sendMessageUploadDocumentAction");
    s.store_class_end();
  }
}

sendMessageGeoLocationAction::sendMessageGeoLocationAction() {
}

const std::int32_t sendMessageGeoLocationAction::ID;

sendMessageGeoLocationAction::sendMessageGeoLocationAction(TlParser &p)
#define FAIL(error) p.set_error(error)
#undef FAIL
{
  (void)p;
}

void sendMessageGeoLocationAction::store(TlStorerCalcLength &s) const {
  (void)sizeof(s);
}

void sendMessageGeoLocationAction::store(TlStorerUnsafe &s) const {
  (void)sizeof(s);
}

void sendMessageGeoLocationAction::store(TlStorerToString &s, const char *field_name) const {
  if (!LOG_IS_STRIPPED(ERROR)) {
    s.store_class_begin(field_name, "sendMessageGeoLocationAction");
    s.store_class_end();
  }
}

sendMessageChooseContactAction::sendMessageChooseContactAction() {
}

const std::int32_t sendMessageChooseContactAction::ID;

sendMessageChooseContactAction::sendMessageChooseContactAction(TlParser &p)
#define FAIL(error) p.set_error(error)
#undef FAIL
{
  (void)p;
}

void sendMessageChooseContactAction::store(TlStorerCalcLength &s) const {
  (void)sizeof(s);
}

void sendMessageChooseContactAction::store(TlStorerUnsafe &s) const {
  (void)sizeof(s);
}

void sendMessageChooseContactAction::store(TlStorerToString &s, const char *field_name) const {
  if (!LOG_IS_STRIPPED(ERROR)) {
    s.store_class_begin(field_name, "sendMessageChooseContactAction");
    s.store_class_end();
  }
}

sendMessageRecordRoundAction::sendMessageRecordRoundAction() {
}

const std::int32_t sendMessageRecordRoundAction::ID;

sendMessageRecordRoundAction::sendMessageRecordRoundAction(TlParser &p)
#define FAIL(error) p.set_error(error)
#undef FAIL
{
  (void)p;
}

void sendMessageRecordRoundAction::store(TlStorerCalcLength &s) const {
  (void)sizeof(s);
}

void sendMessageRecordRoundAction::store(TlStorerUnsafe &s) const {
  (void)sizeof(s);
}

void sendMessageRecordRoundAction::store(TlStorerToString &s, const char *field_name) const {
  if (!LOG_IS_STRIPPED(ERROR)) {
    s.store_class_begin(field_name, "sendMessageRecordRoundAction");
    s.store_class_end();
  }
}

sendMessageUploadRoundAction::sendMessageUploadRoundAction() {
}

const std::int32_t sendMessageUploadRoundAction::ID;

sendMessageUploadRoundAction::sendMessageUploadRoundAction(TlParser &p)
#define FAIL(error) p.set_error(error)
#undef FAIL
{
  (void)p;
}

void sendMessageUploadRoundAction::store(TlStorerCalcLength &s) const {
  (void)sizeof(s);
}

void sendMessageUploadRoundAction::store(TlStorerUnsafe &s) const {
  (void)sizeof(s);
}

void sendMessageUploadRoundAction::store(TlStorerToString &s, const char *field_name) const {
  if (!LOG_IS_STRIPPED(ERROR)) {
    s.store_class_begin(field_name, "sendMessageUploadRoundAction");
    s.store_class_end();
  }
}

test_dummyFunction::test_dummyFunction() {
}

const std::int32_t test_dummyFunction::ID;

test_dummyFunction::test_dummyFunction(TlParser &p)
#define FAIL(error) p.set_error(error)
#undef FAIL
{
  (void)p;
}

void test_dummyFunction::store(TlStorerCalcLength &s) const {
  (void)sizeof(s);
  s.store_binary(-936020215);
}

void test_dummyFunction::store(TlStorerUnsafe &s) const {
  (void)sizeof(s);
  s.store_binary(-936020215);
}

void test_dummyFunction::store(TlStorerToString &s, const char *field_name) const {
  if (!LOG_IS_STRIPPED(ERROR)) {
    s.store_class_begin(field_name, "test_dummyFunction");
    s.store_class_end();
  }
}

test_dummyFunction::ReturnType test_dummyFunction::fetch_result(TlParser &p) {
#define FAIL(error) p.set_error(error); return ReturnType()
  return TlFetchBool::parse(p);
#undef FAIL
}
}  // namespace secret_api
}  // namespace td
