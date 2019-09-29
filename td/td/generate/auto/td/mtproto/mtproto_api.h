#pragma once

#include "td/tl/TlObject.h"

#include "td/utils/Slice.h"

#include <cstdint>
#include <memory>
#include <utility>
#include <vector>

namespace td {
class TlStorerCalcLength;
class TlStorerUnsafe;
class TlStorerToString;
class TlParser;

namespace mtproto_api {

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

class BadMsgNotification;

class bind_auth_key_inner;

class client_DH_inner_data;

class DestroySessionRes;

class future_salt;

class future_salts;

class gzip_packed;

class dummyHttpWait;

class MsgDetailedInfo;

class msg_resend_req;

class msgs_ack;

class msgs_all_info;

class msgs_state_info;

class msgs_state_req;

class new_session_created;

class P_Q_inner_data;

class pong;

class rsa_public_key;

class resPQ;

class RpcDropAnswer;

class rpc_error;

class Server_DH_Params;

class server_DH_inner_data;

class Set_client_DH_params_answer;

class Object;

class Object: public TlObject {
 public:

  static object_ptr<Object> fetch(TlParser &p);
};

class Function: public TlObject {
 public:

  static object_ptr<Function> fetch(TlParser &p);
};

class BadMsgNotification: public Object {
 public:

  static object_ptr<BadMsgNotification> fetch(TlParser &p);
};

class bad_msg_notification final : public BadMsgNotification {
 public:
  std::int64_t bad_msg_id_;
  std::int32_t bad_msg_seqno_;
  std::int32_t error_code_;

  bad_msg_notification();

  bad_msg_notification(std::int64_t bad_msg_id_, std::int32_t bad_msg_seqno_, std::int32_t error_code_);

  static const std::int32_t ID = -1477445615;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<bad_msg_notification> fetch(TlParser &p) {
    return make_tl_object<bad_msg_notification>(p);
  }

  explicit bad_msg_notification(TlParser &p);

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class bad_server_salt final : public BadMsgNotification {
 public:
  std::int64_t bad_msg_id_;
  std::int32_t bad_msg_seqno_;
  std::int32_t error_code_;
  std::int64_t new_server_salt_;

  bad_server_salt();

  bad_server_salt(std::int64_t bad_msg_id_, std::int32_t bad_msg_seqno_, std::int32_t error_code_, std::int64_t new_server_salt_);

  static const std::int32_t ID = -307542917;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<bad_server_salt> fetch(TlParser &p) {
    return make_tl_object<bad_server_salt>(p);
  }

  explicit bad_server_salt(TlParser &p);

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class bind_auth_key_inner final : public Object {
 public:
  std::int64_t nonce_;
  std::int64_t temp_auth_key_id_;
  std::int64_t perm_auth_key_id_;
  std::int64_t temp_session_id_;
  std::int32_t expires_at_;

  bind_auth_key_inner();

  bind_auth_key_inner(std::int64_t nonce_, std::int64_t temp_auth_key_id_, std::int64_t perm_auth_key_id_, std::int64_t temp_session_id_, std::int32_t expires_at_);

  static const std::int32_t ID = 1973679973;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<bind_auth_key_inner> fetch(TlParser &p) {
    return make_tl_object<bind_auth_key_inner>(p);
  }

  explicit bind_auth_key_inner(TlParser &p);

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class client_DH_inner_data final : public Object {
 public:
  UInt128 nonce_;
  UInt128 server_nonce_;
  std::int64_t retry_id_;
  Slice g_b_;

  client_DH_inner_data();

  client_DH_inner_data(UInt128 const &nonce_, UInt128 const &server_nonce_, std::int64_t retry_id_, Slice const &g_b_);

  static const std::int32_t ID = 1715713620;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<client_DH_inner_data> fetch(TlParser &p) {
    return make_tl_object<client_DH_inner_data>(p);
  }

  explicit client_DH_inner_data(TlParser &p);

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class DestroySessionRes: public Object {
 public:

  static object_ptr<DestroySessionRes> fetch(TlParser &p);
};

class destroy_session_ok final : public DestroySessionRes {
 public:
  std::int64_t session_id_;

  destroy_session_ok();

  explicit destroy_session_ok(std::int64_t session_id_);

  static const std::int32_t ID = -501201412;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<destroy_session_ok> fetch(TlParser &p) {
    return make_tl_object<destroy_session_ok>(p);
  }

  explicit destroy_session_ok(TlParser &p);

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class destroy_session_none final : public DestroySessionRes {
 public:
  std::int64_t session_id_;

  destroy_session_none();

  explicit destroy_session_none(std::int64_t session_id_);

  static const std::int32_t ID = 1658015945;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<destroy_session_none> fetch(TlParser &p) {
    return make_tl_object<destroy_session_none>(p);
  }

  explicit destroy_session_none(TlParser &p);

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class future_salt final : public Object {
 public:
  std::int32_t valid_since_;
  std::int32_t valid_until_;
  std::int64_t salt_;

  future_salt();

  future_salt(std::int32_t valid_since_, std::int32_t valid_until_, std::int64_t salt_);

  static const std::int32_t ID = 155834844;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<future_salt> fetch(TlParser &p) {
    return make_tl_object<future_salt>(p);
  }

  explicit future_salt(TlParser &p);

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class future_salts final : public Object {
 public:
  std::int64_t req_msg_id_;
  std::int32_t now_;
  std::vector<object_ptr<future_salt>> salts_;

  future_salts();

  future_salts(std::int64_t req_msg_id_, std::int32_t now_, std::vector<object_ptr<future_salt>> &&salts_);

  static const std::int32_t ID = -1370486635;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<future_salts> fetch(TlParser &p) {
    return make_tl_object<future_salts>(p);
  }

  explicit future_salts(TlParser &p);

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class gzip_packed final : public Object {
 public:
  Slice packed_data_;

  gzip_packed();

  explicit gzip_packed(Slice const &packed_data_);

  static const std::int32_t ID = 812830625;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<gzip_packed> fetch(TlParser &p) {
    return make_tl_object<gzip_packed>(p);
  }

  explicit gzip_packed(TlParser &p);

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class dummyHttpWait final : public Object {
 public:

  dummyHttpWait();

  static const std::int32_t ID = -919090642;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<dummyHttpWait> fetch(TlParser &p) {
    return make_tl_object<dummyHttpWait>(p);
  }

  explicit dummyHttpWait(TlParser &p);

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class MsgDetailedInfo: public Object {
 public:

  static object_ptr<MsgDetailedInfo> fetch(TlParser &p);
};

class msg_detailed_info final : public MsgDetailedInfo {
 public:
  std::int64_t msg_id_;
  std::int64_t answer_msg_id_;
  std::int32_t bytes_;
  std::int32_t status_;

  msg_detailed_info();

  msg_detailed_info(std::int64_t msg_id_, std::int64_t answer_msg_id_, std::int32_t bytes_, std::int32_t status_);

  static const std::int32_t ID = 661470918;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<msg_detailed_info> fetch(TlParser &p) {
    return make_tl_object<msg_detailed_info>(p);
  }

  explicit msg_detailed_info(TlParser &p);

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class msg_new_detailed_info final : public MsgDetailedInfo {
 public:
  std::int64_t answer_msg_id_;
  std::int32_t bytes_;
  std::int32_t status_;

  msg_new_detailed_info();

  msg_new_detailed_info(std::int64_t answer_msg_id_, std::int32_t bytes_, std::int32_t status_);

  static const std::int32_t ID = -2137147681;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<msg_new_detailed_info> fetch(TlParser &p) {
    return make_tl_object<msg_new_detailed_info>(p);
  }

  explicit msg_new_detailed_info(TlParser &p);

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class msg_resend_req final : public Object {
 public:
  std::vector<std::int64_t> msg_ids_;

  msg_resend_req();

  explicit msg_resend_req(std::vector<std::int64_t> &&msg_ids_);

  static const std::int32_t ID = 2105940488;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<msg_resend_req> fetch(TlParser &p) {
    return make_tl_object<msg_resend_req>(p);
  }

  explicit msg_resend_req(TlParser &p);

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class msgs_ack final : public Object {
 public:
  std::vector<std::int64_t> msg_ids_;

  msgs_ack();

  explicit msgs_ack(std::vector<std::int64_t> &&msg_ids_);

  static const std::int32_t ID = 1658238041;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<msgs_ack> fetch(TlParser &p) {
    return make_tl_object<msgs_ack>(p);
  }

  explicit msgs_ack(TlParser &p);

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class msgs_all_info final : public Object {
 public:
  std::vector<std::int64_t> msg_ids_;
  Slice info_;

  msgs_all_info();

  msgs_all_info(std::vector<std::int64_t> &&msg_ids_, Slice const &info_);

  static const std::int32_t ID = -1933520591;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<msgs_all_info> fetch(TlParser &p) {
    return make_tl_object<msgs_all_info>(p);
  }

  explicit msgs_all_info(TlParser &p);

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class msgs_state_info final : public Object {
 public:
  std::int64_t req_msg_id_;
  Slice info_;

  msgs_state_info();

  msgs_state_info(std::int64_t req_msg_id_, Slice const &info_);

  static const std::int32_t ID = 81704317;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<msgs_state_info> fetch(TlParser &p) {
    return make_tl_object<msgs_state_info>(p);
  }

  explicit msgs_state_info(TlParser &p);

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class msgs_state_req final : public Object {
 public:
  std::vector<std::int64_t> msg_ids_;

  msgs_state_req();

  explicit msgs_state_req(std::vector<std::int64_t> &&msg_ids_);

  static const std::int32_t ID = -630588590;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<msgs_state_req> fetch(TlParser &p) {
    return make_tl_object<msgs_state_req>(p);
  }

  explicit msgs_state_req(TlParser &p);

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class new_session_created final : public Object {
 public:
  std::int64_t first_msg_id_;
  std::int64_t unique_id_;
  std::int64_t server_salt_;

  new_session_created();

  new_session_created(std::int64_t first_msg_id_, std::int64_t unique_id_, std::int64_t server_salt_);

  static const std::int32_t ID = -1631450872;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<new_session_created> fetch(TlParser &p) {
    return make_tl_object<new_session_created>(p);
  }

  explicit new_session_created(TlParser &p);

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class P_Q_inner_data: public Object {
 public:

  static object_ptr<P_Q_inner_data> fetch(TlParser &p);
};

class p_q_inner_data_dc final : public P_Q_inner_data {
 public:
  Slice pq_;
  Slice p_;
  Slice q_;
  UInt128 nonce_;
  UInt128 server_nonce_;
  UInt256 new_nonce_;
  std::int32_t dc_;

  p_q_inner_data_dc();

  p_q_inner_data_dc(Slice const &pq_, Slice const &p_, Slice const &q_, UInt128 const &nonce_, UInt128 const &server_nonce_, UInt256 const &new_nonce_, std::int32_t dc_);

  static const std::int32_t ID = -1443537003;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<p_q_inner_data_dc> fetch(TlParser &p) {
    return make_tl_object<p_q_inner_data_dc>(p);
  }

  explicit p_q_inner_data_dc(TlParser &p);

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class p_q_inner_data_temp_dc final : public P_Q_inner_data {
 public:
  Slice pq_;
  Slice p_;
  Slice q_;
  UInt128 nonce_;
  UInt128 server_nonce_;
  UInt256 new_nonce_;
  std::int32_t dc_;
  std::int32_t expires_in_;

  p_q_inner_data_temp_dc();

  p_q_inner_data_temp_dc(Slice const &pq_, Slice const &p_, Slice const &q_, UInt128 const &nonce_, UInt128 const &server_nonce_, UInt256 const &new_nonce_, std::int32_t dc_, std::int32_t expires_in_);

  static const std::int32_t ID = 1459478408;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<p_q_inner_data_temp_dc> fetch(TlParser &p) {
    return make_tl_object<p_q_inner_data_temp_dc>(p);
  }

  explicit p_q_inner_data_temp_dc(TlParser &p);

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class pong final : public Object {
 public:
  std::int64_t msg_id_;
  std::int64_t ping_id_;

  pong();

  pong(std::int64_t msg_id_, std::int64_t ping_id_);

  static const std::int32_t ID = 880243653;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<pong> fetch(TlParser &p) {
    return make_tl_object<pong>(p);
  }

  explicit pong(TlParser &p);

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class rsa_public_key final : public Object {
 public:
  Slice n_;
  Slice e_;

  rsa_public_key();

  rsa_public_key(Slice const &n_, Slice const &e_);

  static const std::int32_t ID = 2048510838;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<rsa_public_key> fetch(TlParser &p) {
    return make_tl_object<rsa_public_key>(p);
  }

  explicit rsa_public_key(TlParser &p);

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class resPQ final : public Object {
 public:
  UInt128 nonce_;
  UInt128 server_nonce_;
  Slice pq_;
  std::vector<std::int64_t> server_public_key_fingerprints_;

  resPQ();

  resPQ(UInt128 const &nonce_, UInt128 const &server_nonce_, Slice const &pq_, std::vector<std::int64_t> &&server_public_key_fingerprints_);

  static const std::int32_t ID = 85337187;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<resPQ> fetch(TlParser &p) {
    return make_tl_object<resPQ>(p);
  }

  explicit resPQ(TlParser &p);

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class RpcDropAnswer: public Object {
 public:

  static object_ptr<RpcDropAnswer> fetch(TlParser &p);
};

class rpc_answer_unknown final : public RpcDropAnswer {
 public:

  rpc_answer_unknown();

  static const std::int32_t ID = 1579864942;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<rpc_answer_unknown> fetch(TlParser &p) {
    return make_tl_object<rpc_answer_unknown>(p);
  }

  explicit rpc_answer_unknown(TlParser &p);

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class rpc_answer_dropped_running final : public RpcDropAnswer {
 public:

  rpc_answer_dropped_running();

  static const std::int32_t ID = -847714938;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<rpc_answer_dropped_running> fetch(TlParser &p) {
    return make_tl_object<rpc_answer_dropped_running>(p);
  }

  explicit rpc_answer_dropped_running(TlParser &p);

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class rpc_answer_dropped final : public RpcDropAnswer {
 public:
  std::int64_t msg_id_;
  std::int32_t seq_no_;
  std::int32_t bytes_;

  rpc_answer_dropped();

  rpc_answer_dropped(std::int64_t msg_id_, std::int32_t seq_no_, std::int32_t bytes_);

  static const std::int32_t ID = -1539647305;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<rpc_answer_dropped> fetch(TlParser &p) {
    return make_tl_object<rpc_answer_dropped>(p);
  }

  explicit rpc_answer_dropped(TlParser &p);

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class rpc_error final : public Object {
 public:
  std::int32_t error_code_;
  Slice error_message_;

  rpc_error();

  rpc_error(std::int32_t error_code_, Slice const &error_message_);

  static const std::int32_t ID = 558156313;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<rpc_error> fetch(TlParser &p) {
    return make_tl_object<rpc_error>(p);
  }

  explicit rpc_error(TlParser &p);

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class Server_DH_Params: public Object {
 public:

  static object_ptr<Server_DH_Params> fetch(TlParser &p);
};

class server_DH_params_fail final : public Server_DH_Params {
 public:
  UInt128 nonce_;
  UInt128 server_nonce_;
  UInt128 new_nonce_hash_;

  server_DH_params_fail();

  server_DH_params_fail(UInt128 const &nonce_, UInt128 const &server_nonce_, UInt128 const &new_nonce_hash_);

  static const std::int32_t ID = 2043348061;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<server_DH_params_fail> fetch(TlParser &p) {
    return make_tl_object<server_DH_params_fail>(p);
  }

  explicit server_DH_params_fail(TlParser &p);

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class server_DH_params_ok final : public Server_DH_Params {
 public:
  UInt128 nonce_;
  UInt128 server_nonce_;
  Slice encrypted_answer_;

  server_DH_params_ok();

  server_DH_params_ok(UInt128 const &nonce_, UInt128 const &server_nonce_, Slice const &encrypted_answer_);

  static const std::int32_t ID = -790100132;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<server_DH_params_ok> fetch(TlParser &p) {
    return make_tl_object<server_DH_params_ok>(p);
  }

  explicit server_DH_params_ok(TlParser &p);

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class server_DH_inner_data final : public Object {
 public:
  UInt128 nonce_;
  UInt128 server_nonce_;
  std::int32_t g_;
  Slice dh_prime_;
  Slice g_a_;
  std::int32_t server_time_;

  server_DH_inner_data();

  server_DH_inner_data(UInt128 const &nonce_, UInt128 const &server_nonce_, std::int32_t g_, Slice const &dh_prime_, Slice const &g_a_, std::int32_t server_time_);

  static const std::int32_t ID = -1249309254;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<server_DH_inner_data> fetch(TlParser &p) {
    return make_tl_object<server_DH_inner_data>(p);
  }

  explicit server_DH_inner_data(TlParser &p);

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class Set_client_DH_params_answer: public Object {
 public:

  static object_ptr<Set_client_DH_params_answer> fetch(TlParser &p);
};

class dh_gen_ok final : public Set_client_DH_params_answer {
 public:
  UInt128 nonce_;
  UInt128 server_nonce_;
  UInt128 new_nonce_hash1_;

  dh_gen_ok();

  dh_gen_ok(UInt128 const &nonce_, UInt128 const &server_nonce_, UInt128 const &new_nonce_hash1_);

  static const std::int32_t ID = 1003222836;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<dh_gen_ok> fetch(TlParser &p) {
    return make_tl_object<dh_gen_ok>(p);
  }

  explicit dh_gen_ok(TlParser &p);

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class dh_gen_retry final : public Set_client_DH_params_answer {
 public:
  UInt128 nonce_;
  UInt128 server_nonce_;
  UInt128 new_nonce_hash2_;

  dh_gen_retry();

  dh_gen_retry(UInt128 const &nonce_, UInt128 const &server_nonce_, UInt128 const &new_nonce_hash2_);

  static const std::int32_t ID = 1188831161;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<dh_gen_retry> fetch(TlParser &p) {
    return make_tl_object<dh_gen_retry>(p);
  }

  explicit dh_gen_retry(TlParser &p);

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class dh_gen_fail final : public Set_client_DH_params_answer {
 public:
  UInt128 nonce_;
  UInt128 server_nonce_;
  UInt128 new_nonce_hash3_;

  dh_gen_fail();

  dh_gen_fail(UInt128 const &nonce_, UInt128 const &server_nonce_, UInt128 const &new_nonce_hash3_);

  static const std::int32_t ID = -1499615742;
  std::int32_t get_id() const final {
    return ID;
  }

  static object_ptr<dh_gen_fail> fetch(TlParser &p) {
    return make_tl_object<dh_gen_fail>(p);
  }

  explicit dh_gen_fail(TlParser &p);

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;
};

class destroy_session final : public Function {
 public:
  std::int64_t session_id_;

  destroy_session();

  explicit destroy_session(std::int64_t session_id_);

  static const std::int32_t ID = -414113498;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = object_ptr<DestroySessionRes>;

  static object_ptr<destroy_session> fetch(TlParser &p) {
    return make_tl_object<destroy_session>(p);
  }

  explicit destroy_session(TlParser &p);

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlParser &p);
};

class get_future_salts final : public Function {
 public:
  std::int32_t num_;

  get_future_salts();

  explicit get_future_salts(std::int32_t num_);

  static const std::int32_t ID = -1188971260;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = object_ptr<future_salts>;

  static object_ptr<get_future_salts> fetch(TlParser &p) {
    return make_tl_object<get_future_salts>(p);
  }

  explicit get_future_salts(TlParser &p);

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlParser &p);
};

class http_wait final : public Function {
 public:
  std::int32_t max_delay_;
  std::int32_t wait_after_;
  std::int32_t max_wait_;

  http_wait();

  http_wait(std::int32_t max_delay_, std::int32_t wait_after_, std::int32_t max_wait_);

  static const std::int32_t ID = -1835453025;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = object_ptr<dummyHttpWait>;

  static object_ptr<http_wait> fetch(TlParser &p) {
    return make_tl_object<http_wait>(p);
  }

  explicit http_wait(TlParser &p);

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlParser &p);
};

class ping final : public Function {
 public:
  std::int64_t ping_id_;

  ping();

  explicit ping(std::int64_t ping_id_);

  static const std::int32_t ID = 2059302892;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = object_ptr<pong>;

  static object_ptr<ping> fetch(TlParser &p) {
    return make_tl_object<ping>(p);
  }

  explicit ping(TlParser &p);

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlParser &p);
};

class ping_delay_disconnect final : public Function {
 public:
  std::int64_t ping_id_;
  std::int32_t disconnect_delay_;

  ping_delay_disconnect();

  ping_delay_disconnect(std::int64_t ping_id_, std::int32_t disconnect_delay_);

  static const std::int32_t ID = -213746804;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = object_ptr<pong>;

  static object_ptr<ping_delay_disconnect> fetch(TlParser &p) {
    return make_tl_object<ping_delay_disconnect>(p);
  }

  explicit ping_delay_disconnect(TlParser &p);

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlParser &p);
};

class req_DH_params final : public Function {
 public:
  UInt128 nonce_;
  UInt128 server_nonce_;
  Slice p_;
  Slice q_;
  std::int64_t public_key_fingerprint_;
  Slice encrypted_data_;

  req_DH_params();

  req_DH_params(UInt128 const &nonce_, UInt128 const &server_nonce_, Slice const &p_, Slice const &q_, std::int64_t public_key_fingerprint_, Slice const &encrypted_data_);

  static const std::int32_t ID = -686627650;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = object_ptr<Server_DH_Params>;

  static object_ptr<req_DH_params> fetch(TlParser &p) {
    return make_tl_object<req_DH_params>(p);
  }

  explicit req_DH_params(TlParser &p);

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlParser &p);
};

class req_pq_multi final : public Function {
 public:
  UInt128 nonce_;

  req_pq_multi();

  explicit req_pq_multi(UInt128 const &nonce_);

  static const std::int32_t ID = -1099002127;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = object_ptr<resPQ>;

  static object_ptr<req_pq_multi> fetch(TlParser &p) {
    return make_tl_object<req_pq_multi>(p);
  }

  explicit req_pq_multi(TlParser &p);

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlParser &p);
};

class rpc_drop_answer final : public Function {
 public:
  std::int64_t req_msg_id_;

  rpc_drop_answer();

  explicit rpc_drop_answer(std::int64_t req_msg_id_);

  static const std::int32_t ID = 1491380032;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = object_ptr<RpcDropAnswer>;

  static object_ptr<rpc_drop_answer> fetch(TlParser &p) {
    return make_tl_object<rpc_drop_answer>(p);
  }

  explicit rpc_drop_answer(TlParser &p);

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlParser &p);
};

class set_client_DH_params final : public Function {
 public:
  UInt128 nonce_;
  UInt128 server_nonce_;
  Slice encrypted_data_;

  set_client_DH_params();

  set_client_DH_params(UInt128 const &nonce_, UInt128 const &server_nonce_, Slice const &encrypted_data_);

  static const std::int32_t ID = -184262881;
  std::int32_t get_id() const final {
    return ID;
  }

  using ReturnType = object_ptr<Set_client_DH_params_answer>;

  static object_ptr<set_client_DH_params> fetch(TlParser &p) {
    return make_tl_object<set_client_DH_params>(p);
  }

  explicit set_client_DH_params(TlParser &p);

  void store(TlStorerCalcLength &s) const final;

  void store(TlStorerUnsafe &s) const final;

  void store(TlStorerToString &s, const char *field_name) const final;

  static ReturnType fetch_result(TlParser &p);
};

}  // namespace mtproto_api
}  // namespace td
