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
class TlParser;

namespace secret_api {

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

class DecryptedMessage;

class DecryptedMessageAction;

class decryptedMessageLayer;

class DecryptedMessageMedia;

class DocumentAttribute;

class FileLocation;

class InputStickerSet;

class MessageEntity;

class PhotoSize;

class SendMessageAction;

class Object;

class Object: public TlObject {
 public:

  static object_ptr<Object> fetch(TlParser &p);
};

class Function: public TlObject {
 public:

  static object_ptr<Function> fetch(TlParser &p);
};

class DecryptedMessage: public Object {
 public:

  static object_ptr<DecryptedMessage> fetch(TlParser &p);
};

class decryptedMessage8 final : public DecryptedMessage {
 public:
  std::int64_t random_id_;
  BufferSlice random_bytes_;
  std::string message_;
  object_ptr<DecryptedMessageMedia> media_;

  decryptedMessage8();

  decryptedMessage8(std::int64_t random_id_, BufferSlice &&random_bytes_, std::string const &message_, object_ptr<DecryptedMessageMedia> &&media_);

  static const std::int32_t ID = 528568095;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<decryptedMessage8> fetch(TlParser &p) {
    return make_tl_object<decryptedMessage8>(p);
  }

  explicit decryptedMessage8(TlParser &p);

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class decryptedMessageService8 final : public DecryptedMessage {
 public:
  std::int64_t random_id_;
  BufferSlice random_bytes_;
  object_ptr<DecryptedMessageAction> action_;

  decryptedMessageService8();

  decryptedMessageService8(std::int64_t random_id_, BufferSlice &&random_bytes_, object_ptr<DecryptedMessageAction> &&action_);

  static const std::int32_t ID = -1438109059;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<decryptedMessageService8> fetch(TlParser &p) {
    return make_tl_object<decryptedMessageService8>(p);
  }

  explicit decryptedMessageService8(TlParser &p);

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class decryptedMessage23 final : public DecryptedMessage {
 public:
  std::int64_t random_id_;
  std::int32_t ttl_;
  std::string message_;
  object_ptr<DecryptedMessageMedia> media_;

  decryptedMessage23();

  decryptedMessage23(std::int64_t random_id_, std::int32_t ttl_, std::string const &message_, object_ptr<DecryptedMessageMedia> &&media_);

  static const std::int32_t ID = 541931640;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<decryptedMessage23> fetch(TlParser &p) {
    return make_tl_object<decryptedMessage23>(p);
  }

  explicit decryptedMessage23(TlParser &p);

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class decryptedMessageService final : public DecryptedMessage {
 public:
  std::int64_t random_id_;
  object_ptr<DecryptedMessageAction> action_;

  decryptedMessageService();

  decryptedMessageService(std::int64_t random_id_, object_ptr<DecryptedMessageAction> &&action_);

  static const std::int32_t ID = 1930838368;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<decryptedMessageService> fetch(TlParser &p) {
    return make_tl_object<decryptedMessageService>(p);
  }

  explicit decryptedMessageService(TlParser &p);

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class decryptedMessage46 final : public DecryptedMessage {
 public:
  std::int32_t flags_;
  std::int64_t random_id_;
  std::int32_t ttl_;
  std::string message_;
  object_ptr<DecryptedMessageMedia> media_;
  std::vector<object_ptr<MessageEntity>> entities_;
  std::string via_bot_name_;
  std::int64_t reply_to_random_id_;
  enum Flags : std::int32_t {MEDIA_MASK = 512, ENTITIES_MASK = 128, VIA_BOT_NAME_MASK = 2048, REPLY_TO_RANDOM_ID_MASK = 8};

  decryptedMessage46();

  decryptedMessage46(std::int32_t flags_, std::int64_t random_id_, std::int32_t ttl_, std::string const &message_, object_ptr<DecryptedMessageMedia> &&media_, std::vector<object_ptr<MessageEntity>> &&entities_, std::string const &via_bot_name_, std::int64_t reply_to_random_id_);

  static const std::int32_t ID = 917541342;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<decryptedMessage46> fetch(TlParser &p);

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class decryptedMessage final : public DecryptedMessage {
 public:
  std::int32_t flags_;
  std::int64_t random_id_;
  std::int32_t ttl_;
  std::string message_;
  object_ptr<DecryptedMessageMedia> media_;
  std::vector<object_ptr<MessageEntity>> entities_;
  std::string via_bot_name_;
  std::int64_t reply_to_random_id_;
  std::int64_t grouped_id_;
  enum Flags : std::int32_t {MEDIA_MASK = 512, ENTITIES_MASK = 128, VIA_BOT_NAME_MASK = 2048, REPLY_TO_RANDOM_ID_MASK = 8, GROUPED_ID_MASK = 131072};

  decryptedMessage();

  decryptedMessage(std::int32_t flags_, std::int64_t random_id_, std::int32_t ttl_, std::string const &message_, object_ptr<DecryptedMessageMedia> &&media_, std::vector<object_ptr<MessageEntity>> &&entities_, std::string const &via_bot_name_, std::int64_t reply_to_random_id_, std::int64_t grouped_id_);

  static const std::int32_t ID = -1848883596;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<decryptedMessage> fetch(TlParser &p);

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class DecryptedMessageAction: public Object {
 public:

  static object_ptr<DecryptedMessageAction> fetch(TlParser &p);
};

class decryptedMessageActionSetMessageTTL final : public DecryptedMessageAction {
 public:
  std::int32_t ttl_seconds_;

  decryptedMessageActionSetMessageTTL();

  explicit decryptedMessageActionSetMessageTTL(std::int32_t ttl_seconds_);

  static const std::int32_t ID = -1586283796;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<decryptedMessageActionSetMessageTTL> fetch(TlParser &p) {
    return make_tl_object<decryptedMessageActionSetMessageTTL>(p);
  }

  explicit decryptedMessageActionSetMessageTTL(TlParser &p);

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class decryptedMessageActionReadMessages final : public DecryptedMessageAction {
 public:
  std::vector<std::int64_t> random_ids_;

  decryptedMessageActionReadMessages();

  explicit decryptedMessageActionReadMessages(std::vector<std::int64_t> &&random_ids_);

  static const std::int32_t ID = 206520510;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<decryptedMessageActionReadMessages> fetch(TlParser &p) {
    return make_tl_object<decryptedMessageActionReadMessages>(p);
  }

  explicit decryptedMessageActionReadMessages(TlParser &p);

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class decryptedMessageActionDeleteMessages final : public DecryptedMessageAction {
 public:
  std::vector<std::int64_t> random_ids_;

  decryptedMessageActionDeleteMessages();

  explicit decryptedMessageActionDeleteMessages(std::vector<std::int64_t> &&random_ids_);

  static const std::int32_t ID = 1700872964;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<decryptedMessageActionDeleteMessages> fetch(TlParser &p) {
    return make_tl_object<decryptedMessageActionDeleteMessages>(p);
  }

  explicit decryptedMessageActionDeleteMessages(TlParser &p);

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class decryptedMessageActionScreenshotMessages final : public DecryptedMessageAction {
 public:
  std::vector<std::int64_t> random_ids_;

  decryptedMessageActionScreenshotMessages();

  explicit decryptedMessageActionScreenshotMessages(std::vector<std::int64_t> &&random_ids_);

  static const std::int32_t ID = -1967000459;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<decryptedMessageActionScreenshotMessages> fetch(TlParser &p) {
    return make_tl_object<decryptedMessageActionScreenshotMessages>(p);
  }

  explicit decryptedMessageActionScreenshotMessages(TlParser &p);

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class decryptedMessageActionFlushHistory final : public DecryptedMessageAction {
 public:

  decryptedMessageActionFlushHistory();

  static const std::int32_t ID = 1729750108;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<decryptedMessageActionFlushHistory> fetch(TlParser &p) {
    return make_tl_object<decryptedMessageActionFlushHistory>(p);
  }

  explicit decryptedMessageActionFlushHistory(TlParser &p);

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class decryptedMessageActionResend final : public DecryptedMessageAction {
 public:
  std::int32_t start_seq_no_;
  std::int32_t end_seq_no_;

  decryptedMessageActionResend();

  decryptedMessageActionResend(std::int32_t start_seq_no_, std::int32_t end_seq_no_);

  static const std::int32_t ID = 1360072880;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<decryptedMessageActionResend> fetch(TlParser &p) {
    return make_tl_object<decryptedMessageActionResend>(p);
  }

  explicit decryptedMessageActionResend(TlParser &p);

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class decryptedMessageActionNotifyLayer final : public DecryptedMessageAction {
 public:
  std::int32_t layer_;

  decryptedMessageActionNotifyLayer();

  explicit decryptedMessageActionNotifyLayer(std::int32_t layer_);

  static const std::int32_t ID = -217806717;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<decryptedMessageActionNotifyLayer> fetch(TlParser &p) {
    return make_tl_object<decryptedMessageActionNotifyLayer>(p);
  }

  explicit decryptedMessageActionNotifyLayer(TlParser &p);

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class decryptedMessageActionTyping final : public DecryptedMessageAction {
 public:
  object_ptr<SendMessageAction> action_;

  decryptedMessageActionTyping();

  explicit decryptedMessageActionTyping(object_ptr<SendMessageAction> &&action_);

  static const std::int32_t ID = -860719551;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<decryptedMessageActionTyping> fetch(TlParser &p) {
    return make_tl_object<decryptedMessageActionTyping>(p);
  }

  explicit decryptedMessageActionTyping(TlParser &p);

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class decryptedMessageActionRequestKey final : public DecryptedMessageAction {
 public:
  std::int64_t exchange_id_;
  BufferSlice g_a_;

  decryptedMessageActionRequestKey();

  decryptedMessageActionRequestKey(std::int64_t exchange_id_, BufferSlice &&g_a_);

  static const std::int32_t ID = -204906213;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<decryptedMessageActionRequestKey> fetch(TlParser &p) {
    return make_tl_object<decryptedMessageActionRequestKey>(p);
  }

  explicit decryptedMessageActionRequestKey(TlParser &p);

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class decryptedMessageActionAcceptKey final : public DecryptedMessageAction {
 public:
  std::int64_t exchange_id_;
  BufferSlice g_b_;
  std::int64_t key_fingerprint_;

  decryptedMessageActionAcceptKey();

  decryptedMessageActionAcceptKey(std::int64_t exchange_id_, BufferSlice &&g_b_, std::int64_t key_fingerprint_);

  static const std::int32_t ID = 1877046107;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<decryptedMessageActionAcceptKey> fetch(TlParser &p) {
    return make_tl_object<decryptedMessageActionAcceptKey>(p);
  }

  explicit decryptedMessageActionAcceptKey(TlParser &p);

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class decryptedMessageActionAbortKey final : public DecryptedMessageAction {
 public:
  std::int64_t exchange_id_;

  decryptedMessageActionAbortKey();

  explicit decryptedMessageActionAbortKey(std::int64_t exchange_id_);

  static const std::int32_t ID = -586814357;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<decryptedMessageActionAbortKey> fetch(TlParser &p) {
    return make_tl_object<decryptedMessageActionAbortKey>(p);
  }

  explicit decryptedMessageActionAbortKey(TlParser &p);

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class decryptedMessageActionCommitKey final : public DecryptedMessageAction {
 public:
  std::int64_t exchange_id_;
  std::int64_t key_fingerprint_;

  decryptedMessageActionCommitKey();

  decryptedMessageActionCommitKey(std::int64_t exchange_id_, std::int64_t key_fingerprint_);

  static const std::int32_t ID = -332526693;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<decryptedMessageActionCommitKey> fetch(TlParser &p) {
    return make_tl_object<decryptedMessageActionCommitKey>(p);
  }

  explicit decryptedMessageActionCommitKey(TlParser &p);

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class decryptedMessageActionNoop final : public DecryptedMessageAction {
 public:

  decryptedMessageActionNoop();

  static const std::int32_t ID = -1473258141;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<decryptedMessageActionNoop> fetch(TlParser &p) {
    return make_tl_object<decryptedMessageActionNoop>(p);
  }

  explicit decryptedMessageActionNoop(TlParser &p);

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class decryptedMessageLayer final : public Object {
 public:
  BufferSlice random_bytes_;
  std::int32_t layer_;
  std::int32_t in_seq_no_;
  std::int32_t out_seq_no_;
  object_ptr<DecryptedMessage> message_;

  decryptedMessageLayer();

  decryptedMessageLayer(BufferSlice &&random_bytes_, std::int32_t layer_, std::int32_t in_seq_no_, std::int32_t out_seq_no_, object_ptr<DecryptedMessage> &&message_);

  static const std::int32_t ID = 467867529;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<decryptedMessageLayer> fetch(TlParser &p) {
    return make_tl_object<decryptedMessageLayer>(p);
  }

  explicit decryptedMessageLayer(TlParser &p);

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class DecryptedMessageMedia: public Object {
 public:

  static object_ptr<DecryptedMessageMedia> fetch(TlParser &p);
};

class decryptedMessageMediaEmpty final : public DecryptedMessageMedia {
 public:

  decryptedMessageMediaEmpty();

  static const std::int32_t ID = 144661578;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<decryptedMessageMediaEmpty> fetch(TlParser &p) {
    return make_tl_object<decryptedMessageMediaEmpty>(p);
  }

  explicit decryptedMessageMediaEmpty(TlParser &p);

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class decryptedMessageMediaPhoto23 final : public DecryptedMessageMedia {
 public:
  BufferSlice thumb_;
  std::int32_t thumb_w_;
  std::int32_t thumb_h_;
  std::int32_t w_;
  std::int32_t h_;
  std::int32_t size_;
  BufferSlice key_;
  BufferSlice iv_;

  decryptedMessageMediaPhoto23();

  decryptedMessageMediaPhoto23(BufferSlice &&thumb_, std::int32_t thumb_w_, std::int32_t thumb_h_, std::int32_t w_, std::int32_t h_, std::int32_t size_, BufferSlice &&key_, BufferSlice &&iv_);

  static const std::int32_t ID = 846826124;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<decryptedMessageMediaPhoto23> fetch(TlParser &p) {
    return make_tl_object<decryptedMessageMediaPhoto23>(p);
  }

  explicit decryptedMessageMediaPhoto23(TlParser &p);

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class decryptedMessageMediaVideo8 final : public DecryptedMessageMedia {
 public:
  BufferSlice thumb_;
  std::int32_t thumb_w_;
  std::int32_t thumb_h_;
  std::int32_t duration_;
  std::int32_t w_;
  std::int32_t h_;
  std::int32_t size_;
  BufferSlice key_;
  BufferSlice iv_;

  decryptedMessageMediaVideo8();

  decryptedMessageMediaVideo8(BufferSlice &&thumb_, std::int32_t thumb_w_, std::int32_t thumb_h_, std::int32_t duration_, std::int32_t w_, std::int32_t h_, std::int32_t size_, BufferSlice &&key_, BufferSlice &&iv_);

  static const std::int32_t ID = 1290694387;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<decryptedMessageMediaVideo8> fetch(TlParser &p) {
    return make_tl_object<decryptedMessageMediaVideo8>(p);
  }

  explicit decryptedMessageMediaVideo8(TlParser &p);

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class decryptedMessageMediaGeoPoint final : public DecryptedMessageMedia {
 public:
  double lat_;
  double long_;

  decryptedMessageMediaGeoPoint();

  decryptedMessageMediaGeoPoint(double lat_, double long_);

  static const std::int32_t ID = 893913689;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<decryptedMessageMediaGeoPoint> fetch(TlParser &p) {
    return make_tl_object<decryptedMessageMediaGeoPoint>(p);
  }

  explicit decryptedMessageMediaGeoPoint(TlParser &p);

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class decryptedMessageMediaContact final : public DecryptedMessageMedia {
 public:
  std::string phone_number_;
  std::string first_name_;
  std::string last_name_;
  std::int32_t user_id_;

  decryptedMessageMediaContact();

  decryptedMessageMediaContact(std::string const &phone_number_, std::string const &first_name_, std::string const &last_name_, std::int32_t user_id_);

  static const std::int32_t ID = 1485441687;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<decryptedMessageMediaContact> fetch(TlParser &p) {
    return make_tl_object<decryptedMessageMediaContact>(p);
  }

  explicit decryptedMessageMediaContact(TlParser &p);

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class decryptedMessageMediaDocument23 final : public DecryptedMessageMedia {
 public:
  BufferSlice thumb_;
  std::int32_t thumb_w_;
  std::int32_t thumb_h_;
  std::string file_name_;
  std::string mime_type_;
  std::int32_t size_;
  BufferSlice key_;
  BufferSlice iv_;

  decryptedMessageMediaDocument23();

  decryptedMessageMediaDocument23(BufferSlice &&thumb_, std::int32_t thumb_w_, std::int32_t thumb_h_, std::string const &file_name_, std::string const &mime_type_, std::int32_t size_, BufferSlice &&key_, BufferSlice &&iv_);

  static const std::int32_t ID = -1332395189;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<decryptedMessageMediaDocument23> fetch(TlParser &p) {
    return make_tl_object<decryptedMessageMediaDocument23>(p);
  }

  explicit decryptedMessageMediaDocument23(TlParser &p);

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class decryptedMessageMediaAudio8 final : public DecryptedMessageMedia {
 public:
  std::int32_t duration_;
  std::int32_t size_;
  BufferSlice key_;
  BufferSlice iv_;

  decryptedMessageMediaAudio8();

  decryptedMessageMediaAudio8(std::int32_t duration_, std::int32_t size_, BufferSlice &&key_, BufferSlice &&iv_);

  static const std::int32_t ID = 1619031439;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<decryptedMessageMediaAudio8> fetch(TlParser &p) {
    return make_tl_object<decryptedMessageMediaAudio8>(p);
  }

  explicit decryptedMessageMediaAudio8(TlParser &p);

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class decryptedMessageMediaVideo23 final : public DecryptedMessageMedia {
 public:
  BufferSlice thumb_;
  std::int32_t thumb_w_;
  std::int32_t thumb_h_;
  std::int32_t duration_;
  std::string mime_type_;
  std::int32_t w_;
  std::int32_t h_;
  std::int32_t size_;
  BufferSlice key_;
  BufferSlice iv_;

  decryptedMessageMediaVideo23();

  decryptedMessageMediaVideo23(BufferSlice &&thumb_, std::int32_t thumb_w_, std::int32_t thumb_h_, std::int32_t duration_, std::string const &mime_type_, std::int32_t w_, std::int32_t h_, std::int32_t size_, BufferSlice &&key_, BufferSlice &&iv_);

  static const std::int32_t ID = 1380598109;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<decryptedMessageMediaVideo23> fetch(TlParser &p) {
    return make_tl_object<decryptedMessageMediaVideo23>(p);
  }

  explicit decryptedMessageMediaVideo23(TlParser &p);

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class decryptedMessageMediaAudio final : public DecryptedMessageMedia {
 public:
  std::int32_t duration_;
  std::string mime_type_;
  std::int32_t size_;
  BufferSlice key_;
  BufferSlice iv_;

  decryptedMessageMediaAudio();

  decryptedMessageMediaAudio(std::int32_t duration_, std::string const &mime_type_, std::int32_t size_, BufferSlice &&key_, BufferSlice &&iv_);

  static const std::int32_t ID = 1474341323;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<decryptedMessageMediaAudio> fetch(TlParser &p) {
    return make_tl_object<decryptedMessageMediaAudio>(p);
  }

  explicit decryptedMessageMediaAudio(TlParser &p);

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class decryptedMessageMediaExternalDocument final : public DecryptedMessageMedia {
 public:
  std::int64_t id_;
  std::int64_t access_hash_;
  std::int32_t date_;
  std::string mime_type_;
  std::int32_t size_;
  object_ptr<PhotoSize> thumb_;
  std::int32_t dc_id_;
  std::vector<object_ptr<DocumentAttribute>> attributes_;

  decryptedMessageMediaExternalDocument();

  decryptedMessageMediaExternalDocument(std::int64_t id_, std::int64_t access_hash_, std::int32_t date_, std::string const &mime_type_, std::int32_t size_, object_ptr<PhotoSize> &&thumb_, std::int32_t dc_id_, std::vector<object_ptr<DocumentAttribute>> &&attributes_);

  static const std::int32_t ID = -90853155;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<decryptedMessageMediaExternalDocument> fetch(TlParser &p) {
    return make_tl_object<decryptedMessageMediaExternalDocument>(p);
  }

  explicit decryptedMessageMediaExternalDocument(TlParser &p);

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class decryptedMessageMediaPhoto final : public DecryptedMessageMedia {
 public:
  BufferSlice thumb_;
  std::int32_t thumb_w_;
  std::int32_t thumb_h_;
  std::int32_t w_;
  std::int32_t h_;
  std::int32_t size_;
  BufferSlice key_;
  BufferSlice iv_;
  std::string caption_;

  decryptedMessageMediaPhoto();

  decryptedMessageMediaPhoto(BufferSlice &&thumb_, std::int32_t thumb_w_, std::int32_t thumb_h_, std::int32_t w_, std::int32_t h_, std::int32_t size_, BufferSlice &&key_, BufferSlice &&iv_, std::string const &caption_);

  static const std::int32_t ID = -235238024;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<decryptedMessageMediaPhoto> fetch(TlParser &p) {
    return make_tl_object<decryptedMessageMediaPhoto>(p);
  }

  explicit decryptedMessageMediaPhoto(TlParser &p);

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class decryptedMessageMediaVideo final : public DecryptedMessageMedia {
 public:
  BufferSlice thumb_;
  std::int32_t thumb_w_;
  std::int32_t thumb_h_;
  std::int32_t duration_;
  std::string mime_type_;
  std::int32_t w_;
  std::int32_t h_;
  std::int32_t size_;
  BufferSlice key_;
  BufferSlice iv_;
  std::string caption_;

  decryptedMessageMediaVideo();

  decryptedMessageMediaVideo(BufferSlice &&thumb_, std::int32_t thumb_w_, std::int32_t thumb_h_, std::int32_t duration_, std::string const &mime_type_, std::int32_t w_, std::int32_t h_, std::int32_t size_, BufferSlice &&key_, BufferSlice &&iv_, std::string const &caption_);

  static const std::int32_t ID = -1760785394;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<decryptedMessageMediaVideo> fetch(TlParser &p) {
    return make_tl_object<decryptedMessageMediaVideo>(p);
  }

  explicit decryptedMessageMediaVideo(TlParser &p);

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class decryptedMessageMediaDocument final : public DecryptedMessageMedia {
 public:
  BufferSlice thumb_;
  std::int32_t thumb_w_;
  std::int32_t thumb_h_;
  std::string mime_type_;
  std::int32_t size_;
  BufferSlice key_;
  BufferSlice iv_;
  std::vector<object_ptr<DocumentAttribute>> attributes_;
  std::string caption_;

  decryptedMessageMediaDocument();

  decryptedMessageMediaDocument(BufferSlice &&thumb_, std::int32_t thumb_w_, std::int32_t thumb_h_, std::string const &mime_type_, std::int32_t size_, BufferSlice &&key_, BufferSlice &&iv_, std::vector<object_ptr<DocumentAttribute>> &&attributes_, std::string const &caption_);

  static const std::int32_t ID = 2063502050;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<decryptedMessageMediaDocument> fetch(TlParser &p) {
    return make_tl_object<decryptedMessageMediaDocument>(p);
  }

  explicit decryptedMessageMediaDocument(TlParser &p);

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class decryptedMessageMediaVenue final : public DecryptedMessageMedia {
 public:
  double lat_;
  double long_;
  std::string title_;
  std::string address_;
  std::string provider_;
  std::string venue_id_;

  decryptedMessageMediaVenue();

  decryptedMessageMediaVenue(double lat_, double long_, std::string const &title_, std::string const &address_, std::string const &provider_, std::string const &venue_id_);

  static const std::int32_t ID = -1978796689;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<decryptedMessageMediaVenue> fetch(TlParser &p) {
    return make_tl_object<decryptedMessageMediaVenue>(p);
  }

  explicit decryptedMessageMediaVenue(TlParser &p);

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class decryptedMessageMediaWebPage final : public DecryptedMessageMedia {
 public:
  std::string url_;

  decryptedMessageMediaWebPage();

  explicit decryptedMessageMediaWebPage(std::string const &url_);

  static const std::int32_t ID = -452652584;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<decryptedMessageMediaWebPage> fetch(TlParser &p) {
    return make_tl_object<decryptedMessageMediaWebPage>(p);
  }

  explicit decryptedMessageMediaWebPage(TlParser &p);

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class DocumentAttribute: public Object {
 public:

  static object_ptr<DocumentAttribute> fetch(TlParser &p);
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

  static object_ptr<documentAttributeImageSize> fetch(TlParser &p) {
    return make_tl_object<documentAttributeImageSize>(p);
  }

  explicit documentAttributeImageSize(TlParser &p);

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

  static object_ptr<documentAttributeAnimated> fetch(TlParser &p) {
    return make_tl_object<documentAttributeAnimated>(p);
  }

  explicit documentAttributeAnimated(TlParser &p);

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class documentAttributeSticker23 final : public DocumentAttribute {
 public:

  documentAttributeSticker23();

  static const std::int32_t ID = -83208409;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<documentAttributeSticker23> fetch(TlParser &p) {
    return make_tl_object<documentAttributeSticker23>(p);
  }

  explicit documentAttributeSticker23(TlParser &p);

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class documentAttributeVideo final : public DocumentAttribute {
 public:
  std::int32_t duration_;
  std::int32_t w_;
  std::int32_t h_;

  documentAttributeVideo();

  documentAttributeVideo(std::int32_t duration_, std::int32_t w_, std::int32_t h_);

  static const std::int32_t ID = 1494273227;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<documentAttributeVideo> fetch(TlParser &p) {
    return make_tl_object<documentAttributeVideo>(p);
  }

  explicit documentAttributeVideo(TlParser &p);

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class documentAttributeAudio23 final : public DocumentAttribute {
 public:
  std::int32_t duration_;

  documentAttributeAudio23();

  explicit documentAttributeAudio23(std::int32_t duration_);

  static const std::int32_t ID = 85215461;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<documentAttributeAudio23> fetch(TlParser &p) {
    return make_tl_object<documentAttributeAudio23>(p);
  }

  explicit documentAttributeAudio23(TlParser &p);

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

  static object_ptr<documentAttributeFilename> fetch(TlParser &p) {
    return make_tl_object<documentAttributeFilename>(p);
  }

  explicit documentAttributeFilename(TlParser &p);

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class documentAttributeAudio45 final : public DocumentAttribute {
 public:
  std::int32_t duration_;
  std::string title_;
  std::string performer_;

  documentAttributeAudio45();

  documentAttributeAudio45(std::int32_t duration_, std::string const &title_, std::string const &performer_);

  static const std::int32_t ID = -556656416;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<documentAttributeAudio45> fetch(TlParser &p) {
    return make_tl_object<documentAttributeAudio45>(p);
  }

  explicit documentAttributeAudio45(TlParser &p);

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class documentAttributeSticker final : public DocumentAttribute {
 public:
  std::string alt_;
  object_ptr<InputStickerSet> stickerset_;

  documentAttributeSticker();

  documentAttributeSticker(std::string const &alt_, object_ptr<InputStickerSet> &&stickerset_);

  static const std::int32_t ID = 978674434;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<documentAttributeSticker> fetch(TlParser &p) {
    return make_tl_object<documentAttributeSticker>(p);
  }

  explicit documentAttributeSticker(TlParser &p);

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

  static object_ptr<documentAttributeAudio> fetch(TlParser &p);

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class documentAttributeVideo66 final : public DocumentAttribute {
 public:
  std::int32_t flags_;
  bool round_message_;
  std::int32_t duration_;
  std::int32_t w_;
  std::int32_t h_;
  enum Flags : std::int32_t {ROUND_MESSAGE_MASK = 1};

  documentAttributeVideo66();

  documentAttributeVideo66(std::int32_t flags_, bool round_message_, std::int32_t duration_, std::int32_t w_, std::int32_t h_);

  static const std::int32_t ID = 250621158;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<documentAttributeVideo66> fetch(TlParser &p);

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class FileLocation: public Object {
 public:

  static object_ptr<FileLocation> fetch(TlParser &p);
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

  static object_ptr<fileLocationUnavailable> fetch(TlParser &p) {
    return make_tl_object<fileLocationUnavailable>(p);
  }

  explicit fileLocationUnavailable(TlParser &p);

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

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

  static object_ptr<fileLocation> fetch(TlParser &p) {
    return make_tl_object<fileLocation>(p);
  }

  explicit fileLocation(TlParser &p);

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class InputStickerSet: public Object {
 public:

  static object_ptr<InputStickerSet> fetch(TlParser &p);
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

  static object_ptr<inputStickerSetShortName> fetch(TlParser &p) {
    return make_tl_object<inputStickerSetShortName>(p);
  }

  explicit inputStickerSetShortName(TlParser &p);

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class inputStickerSetEmpty final : public InputStickerSet {
 public:

  inputStickerSetEmpty();

  static const std::int32_t ID = -4838507;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<inputStickerSetEmpty> fetch(TlParser &p) {
    return make_tl_object<inputStickerSetEmpty>(p);
  }

  explicit inputStickerSetEmpty(TlParser &p);

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class MessageEntity: public Object {
 public:

  static object_ptr<MessageEntity> fetch(TlParser &p);
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

  static object_ptr<messageEntityUnknown> fetch(TlParser &p) {
    return make_tl_object<messageEntityUnknown>(p);
  }

  explicit messageEntityUnknown(TlParser &p);

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

  static object_ptr<messageEntityMention> fetch(TlParser &p) {
    return make_tl_object<messageEntityMention>(p);
  }

  explicit messageEntityMention(TlParser &p);

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

  static object_ptr<messageEntityHashtag> fetch(TlParser &p) {
    return make_tl_object<messageEntityHashtag>(p);
  }

  explicit messageEntityHashtag(TlParser &p);

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

  static object_ptr<messageEntityBotCommand> fetch(TlParser &p) {
    return make_tl_object<messageEntityBotCommand>(p);
  }

  explicit messageEntityBotCommand(TlParser &p);

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

  static object_ptr<messageEntityUrl> fetch(TlParser &p) {
    return make_tl_object<messageEntityUrl>(p);
  }

  explicit messageEntityUrl(TlParser &p);

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

  static object_ptr<messageEntityEmail> fetch(TlParser &p) {
    return make_tl_object<messageEntityEmail>(p);
  }

  explicit messageEntityEmail(TlParser &p);

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

  static object_ptr<messageEntityBold> fetch(TlParser &p) {
    return make_tl_object<messageEntityBold>(p);
  }

  explicit messageEntityBold(TlParser &p);

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

  static object_ptr<messageEntityItalic> fetch(TlParser &p) {
    return make_tl_object<messageEntityItalic>(p);
  }

  explicit messageEntityItalic(TlParser &p);

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

  static object_ptr<messageEntityCode> fetch(TlParser &p) {
    return make_tl_object<messageEntityCode>(p);
  }

  explicit messageEntityCode(TlParser &p);

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

  static object_ptr<messageEntityPre> fetch(TlParser &p) {
    return make_tl_object<messageEntityPre>(p);
  }

  explicit messageEntityPre(TlParser &p);

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

  static object_ptr<messageEntityTextUrl> fetch(TlParser &p) {
    return make_tl_object<messageEntityTextUrl>(p);
  }

  explicit messageEntityTextUrl(TlParser &p);

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

  static object_ptr<messageEntityMentionName> fetch(TlParser &p) {
    return make_tl_object<messageEntityMentionName>(p);
  }

  explicit messageEntityMentionName(TlParser &p);

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

  static object_ptr<messageEntityPhone> fetch(TlParser &p) {
    return make_tl_object<messageEntityPhone>(p);
  }

  explicit messageEntityPhone(TlParser &p);

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

  static object_ptr<messageEntityCashtag> fetch(TlParser &p) {
    return make_tl_object<messageEntityCashtag>(p);
  }

  explicit messageEntityCashtag(TlParser &p);

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class PhotoSize: public Object {
 public:

  static object_ptr<PhotoSize> fetch(TlParser &p);
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

  static object_ptr<photoSizeEmpty> fetch(TlParser &p) {
    return make_tl_object<photoSizeEmpty>(p);
  }

  explicit photoSizeEmpty(TlParser &p);

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

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

  static object_ptr<photoSize> fetch(TlParser &p) {
    return make_tl_object<photoSize>(p);
  }

  explicit photoSize(TlParser &p);

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

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

  static object_ptr<photoCachedSize> fetch(TlParser &p) {
    return make_tl_object<photoCachedSize>(p);
  }

  explicit photoCachedSize(TlParser &p);

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class SendMessageAction: public Object {
 public:

  static object_ptr<SendMessageAction> fetch(TlParser &p);
};

class sendMessageTypingAction final : public SendMessageAction {
 public:

  sendMessageTypingAction();

  static const std::int32_t ID = 381645902;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<sendMessageTypingAction> fetch(TlParser &p) {
    return make_tl_object<sendMessageTypingAction>(p);
  }

  explicit sendMessageTypingAction(TlParser &p);

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

  static object_ptr<sendMessageCancelAction> fetch(TlParser &p) {
    return make_tl_object<sendMessageCancelAction>(p);
  }

  explicit sendMessageCancelAction(TlParser &p);

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

  static object_ptr<sendMessageRecordVideoAction> fetch(TlParser &p) {
    return make_tl_object<sendMessageRecordVideoAction>(p);
  }

  explicit sendMessageRecordVideoAction(TlParser &p);

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class sendMessageUploadVideoAction final : public SendMessageAction {
 public:

  sendMessageUploadVideoAction();

  static const std::int32_t ID = -1845219337;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<sendMessageUploadVideoAction> fetch(TlParser &p) {
    return make_tl_object<sendMessageUploadVideoAction>(p);
  }

  explicit sendMessageUploadVideoAction(TlParser &p);

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

  static object_ptr<sendMessageRecordAudioAction> fetch(TlParser &p) {
    return make_tl_object<sendMessageRecordAudioAction>(p);
  }

  explicit sendMessageRecordAudioAction(TlParser &p);

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class sendMessageUploadAudioAction final : public SendMessageAction {
 public:

  sendMessageUploadAudioAction();

  static const std::int32_t ID = -424899985;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<sendMessageUploadAudioAction> fetch(TlParser &p) {
    return make_tl_object<sendMessageUploadAudioAction>(p);
  }

  explicit sendMessageUploadAudioAction(TlParser &p);

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class sendMessageUploadPhotoAction final : public SendMessageAction {
 public:

  sendMessageUploadPhotoAction();

  static const std::int32_t ID = -1727382502;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<sendMessageUploadPhotoAction> fetch(TlParser &p) {
    return make_tl_object<sendMessageUploadPhotoAction>(p);
  }

  explicit sendMessageUploadPhotoAction(TlParser &p);

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class sendMessageUploadDocumentAction final : public SendMessageAction {
 public:

  sendMessageUploadDocumentAction();

  static const std::int32_t ID = -1884362354;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<sendMessageUploadDocumentAction> fetch(TlParser &p) {
    return make_tl_object<sendMessageUploadDocumentAction>(p);
  }

  explicit sendMessageUploadDocumentAction(TlParser &p);

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

  static object_ptr<sendMessageGeoLocationAction> fetch(TlParser &p) {
    return make_tl_object<sendMessageGeoLocationAction>(p);
  }

  explicit sendMessageGeoLocationAction(TlParser &p);

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

  static object_ptr<sendMessageChooseContactAction> fetch(TlParser &p) {
    return make_tl_object<sendMessageChooseContactAction>(p);
  }

  explicit sendMessageChooseContactAction(TlParser &p);

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

  static object_ptr<sendMessageRecordRoundAction> fetch(TlParser &p) {
    return make_tl_object<sendMessageRecordRoundAction>(p);
  }

  explicit sendMessageRecordRoundAction(TlParser &p);

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class sendMessageUploadRoundAction final : public SendMessageAction {
 public:

  sendMessageUploadRoundAction();

  static const std::int32_t ID = -1150187996;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<sendMessageUploadRoundAction> fetch(TlParser &p) {
    return make_tl_object<sendMessageUploadRoundAction>(p);
  }

  explicit sendMessageUploadRoundAction(TlParser &p);

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class test_dummyFunction final : public Function {
 public:

  test_dummyFunction();

  static const std::int32_t ID = -936020215;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = bool;

  static object_ptr<test_dummyFunction> fetch(TlParser &p) {
    return make_tl_object<test_dummyFunction>(p);
  }

  explicit test_dummyFunction(TlParser &p);

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlParser &p);
};

}  // namespace secret_api
}  // namespace td
