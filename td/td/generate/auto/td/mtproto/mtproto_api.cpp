#include "mtproto_api.h"

#include "td/tl/tl_object_parse.h"
#include "td/tl/tl_object_store.h"

#include "td/utils/common.h"
#include "td/utils/format.h"
#include "td/utils/logging.h"
#include "td/utils/tl_parsers.h"
#include "td/utils/tl_storers.h"

namespace td {
namespace mtproto_api {

std::string to_string(const BaseObject &value) {
  TlStorerToString storer;
  value.store(storer, "");
  return storer.str();
}

object_ptr<Object> Object::fetch(TlParser &p) {
#define FAIL(error) p.set_error(error); return nullptr;
  int constructor = p.fetch_int();
  switch (constructor) {
    case bad_msg_notification::ID:
      return bad_msg_notification::fetch(p);
    case bad_server_salt::ID:
      return bad_server_salt::fetch(p);
    case bind_auth_key_inner::ID:
      return bind_auth_key_inner::fetch(p);
    case client_DH_inner_data::ID:
      return client_DH_inner_data::fetch(p);
    case destroy_session_ok::ID:
      return destroy_session_ok::fetch(p);
    case destroy_session_none::ID:
      return destroy_session_none::fetch(p);
    case future_salt::ID:
      return future_salt::fetch(p);
    case future_salts::ID:
      return future_salts::fetch(p);
    case gzip_packed::ID:
      return gzip_packed::fetch(p);
    case dummyHttpWait::ID:
      return dummyHttpWait::fetch(p);
    case msg_detailed_info::ID:
      return msg_detailed_info::fetch(p);
    case msg_new_detailed_info::ID:
      return msg_new_detailed_info::fetch(p);
    case msg_resend_req::ID:
      return msg_resend_req::fetch(p);
    case msgs_ack::ID:
      return msgs_ack::fetch(p);
    case msgs_all_info::ID:
      return msgs_all_info::fetch(p);
    case msgs_state_info::ID:
      return msgs_state_info::fetch(p);
    case msgs_state_req::ID:
      return msgs_state_req::fetch(p);
    case new_session_created::ID:
      return new_session_created::fetch(p);
    case p_q_inner_data_dc::ID:
      return p_q_inner_data_dc::fetch(p);
    case p_q_inner_data_temp_dc::ID:
      return p_q_inner_data_temp_dc::fetch(p);
    case pong::ID:
      return pong::fetch(p);
    case rsa_public_key::ID:
      return rsa_public_key::fetch(p);
    case resPQ::ID:
      return resPQ::fetch(p);
    case rpc_answer_unknown::ID:
      return rpc_answer_unknown::fetch(p);
    case rpc_answer_dropped_running::ID:
      return rpc_answer_dropped_running::fetch(p);
    case rpc_answer_dropped::ID:
      return rpc_answer_dropped::fetch(p);
    case rpc_error::ID:
      return rpc_error::fetch(p);
    case server_DH_params_fail::ID:
      return server_DH_params_fail::fetch(p);
    case server_DH_params_ok::ID:
      return server_DH_params_ok::fetch(p);
    case server_DH_inner_data::ID:
      return server_DH_inner_data::fetch(p);
    case dh_gen_ok::ID:
      return dh_gen_ok::fetch(p);
    case dh_gen_retry::ID:
      return dh_gen_retry::fetch(p);
    case dh_gen_fail::ID:
      return dh_gen_fail::fetch(p);
    default:
      FAIL(PSTRING() << "Unknown constructor found " << format::as_hex(constructor));
  }
#undef FAIL
}

object_ptr<Function> Function::fetch(TlParser &p) {
#define FAIL(error) p.set_error(error); return nullptr;
  int constructor = p.fetch_int();
  switch (constructor) {
    case destroy_session::ID:
      return destroy_session::fetch(p);
    case get_future_salts::ID:
      return get_future_salts::fetch(p);
    case http_wait::ID:
      return http_wait::fetch(p);
    case ping::ID:
      return ping::fetch(p);
    case ping_delay_disconnect::ID:
      return ping_delay_disconnect::fetch(p);
    case req_DH_params::ID:
      return req_DH_params::fetch(p);
    case req_pq_multi::ID:
      return req_pq_multi::fetch(p);
    case rpc_drop_answer::ID:
      return rpc_drop_answer::fetch(p);
    case set_client_DH_params::ID:
      return set_client_DH_params::fetch(p);
    default:
      FAIL(PSTRING() << "Unknown constructor found " << format::as_hex(constructor));
  }
#undef FAIL
}

object_ptr<BadMsgNotification> BadMsgNotification::fetch(TlParser &p) {
#define FAIL(error) p.set_error(error); return nullptr;
  int constructor = p.fetch_int();
  switch (constructor) {
    case bad_msg_notification::ID:
      return bad_msg_notification::fetch(p);
    case bad_server_salt::ID:
      return bad_server_salt::fetch(p);
    default:
      FAIL(PSTRING() << "Unknown constructor found " << format::as_hex(constructor));
  }
#undef FAIL
}

bad_msg_notification::bad_msg_notification()
  : bad_msg_id_()
  , bad_msg_seqno_()
  , error_code_()
{}

bad_msg_notification::bad_msg_notification(std::int64_t bad_msg_id_, std::int32_t bad_msg_seqno_, std::int32_t error_code_)
  : bad_msg_id_(bad_msg_id_)
  , bad_msg_seqno_(bad_msg_seqno_)
  , error_code_(error_code_)
{}

const std::int32_t bad_msg_notification::ID;

bad_msg_notification::bad_msg_notification(TlParser &p)
#define FAIL(error) p.set_error(error)
  : bad_msg_id_(TlFetchLong::parse(p))
  , bad_msg_seqno_(TlFetchInt::parse(p))
  , error_code_(TlFetchInt::parse(p))
#undef FAIL
{}

void bad_msg_notification::store(TlStorerCalcLength &s) const {
  (void)sizeof(s);
  TlStoreBinary::store(bad_msg_id_, s);
  TlStoreBinary::store(bad_msg_seqno_, s);
  TlStoreBinary::store(error_code_, s);
}

void bad_msg_notification::store(TlStorerUnsafe &s) const {
  (void)sizeof(s);
  TlStoreBinary::store(bad_msg_id_, s);
  TlStoreBinary::store(bad_msg_seqno_, s);
  TlStoreBinary::store(error_code_, s);
}

void bad_msg_notification::store(TlStorerToString &s, const char *field_name) const {
  if (!LOG_IS_STRIPPED(ERROR)) {
    s.store_class_begin(field_name, "bad_msg_notification");
    s.store_field("bad_msg_id", bad_msg_id_);
    s.store_field("bad_msg_seqno", bad_msg_seqno_);
    s.store_field("error_code", error_code_);
    s.store_class_end();
  }
}

bad_server_salt::bad_server_salt()
  : bad_msg_id_()
  , bad_msg_seqno_()
  , error_code_()
  , new_server_salt_()
{}

bad_server_salt::bad_server_salt(std::int64_t bad_msg_id_, std::int32_t bad_msg_seqno_, std::int32_t error_code_, std::int64_t new_server_salt_)
  : bad_msg_id_(bad_msg_id_)
  , bad_msg_seqno_(bad_msg_seqno_)
  , error_code_(error_code_)
  , new_server_salt_(new_server_salt_)
{}

const std::int32_t bad_server_salt::ID;

bad_server_salt::bad_server_salt(TlParser &p)
#define FAIL(error) p.set_error(error)
  : bad_msg_id_(TlFetchLong::parse(p))
  , bad_msg_seqno_(TlFetchInt::parse(p))
  , error_code_(TlFetchInt::parse(p))
  , new_server_salt_(TlFetchLong::parse(p))
#undef FAIL
{}

void bad_server_salt::store(TlStorerCalcLength &s) const {
  (void)sizeof(s);
  TlStoreBinary::store(bad_msg_id_, s);
  TlStoreBinary::store(bad_msg_seqno_, s);
  TlStoreBinary::store(error_code_, s);
  TlStoreBinary::store(new_server_salt_, s);
}

void bad_server_salt::store(TlStorerUnsafe &s) const {
  (void)sizeof(s);
  TlStoreBinary::store(bad_msg_id_, s);
  TlStoreBinary::store(bad_msg_seqno_, s);
  TlStoreBinary::store(error_code_, s);
  TlStoreBinary::store(new_server_salt_, s);
}

void bad_server_salt::store(TlStorerToString &s, const char *field_name) const {
  if (!LOG_IS_STRIPPED(ERROR)) {
    s.store_class_begin(field_name, "bad_server_salt");
    s.store_field("bad_msg_id", bad_msg_id_);
    s.store_field("bad_msg_seqno", bad_msg_seqno_);
    s.store_field("error_code", error_code_);
    s.store_field("new_server_salt", new_server_salt_);
    s.store_class_end();
  }
}

bind_auth_key_inner::bind_auth_key_inner()
  : nonce_()
  , temp_auth_key_id_()
  , perm_auth_key_id_()
  , temp_session_id_()
  , expires_at_()
{}

bind_auth_key_inner::bind_auth_key_inner(std::int64_t nonce_, std::int64_t temp_auth_key_id_, std::int64_t perm_auth_key_id_, std::int64_t temp_session_id_, std::int32_t expires_at_)
  : nonce_(nonce_)
  , temp_auth_key_id_(temp_auth_key_id_)
  , perm_auth_key_id_(perm_auth_key_id_)
  , temp_session_id_(temp_session_id_)
  , expires_at_(expires_at_)
{}

const std::int32_t bind_auth_key_inner::ID;

bind_auth_key_inner::bind_auth_key_inner(TlParser &p)
#define FAIL(error) p.set_error(error)
  : nonce_(TlFetchLong::parse(p))
  , temp_auth_key_id_(TlFetchLong::parse(p))
  , perm_auth_key_id_(TlFetchLong::parse(p))
  , temp_session_id_(TlFetchLong::parse(p))
  , expires_at_(TlFetchInt::parse(p))
#undef FAIL
{}

void bind_auth_key_inner::store(TlStorerCalcLength &s) const {
  (void)sizeof(s);
  TlStoreBinary::store(nonce_, s);
  TlStoreBinary::store(temp_auth_key_id_, s);
  TlStoreBinary::store(perm_auth_key_id_, s);
  TlStoreBinary::store(temp_session_id_, s);
  TlStoreBinary::store(expires_at_, s);
}

void bind_auth_key_inner::store(TlStorerUnsafe &s) const {
  (void)sizeof(s);
  TlStoreBinary::store(nonce_, s);
  TlStoreBinary::store(temp_auth_key_id_, s);
  TlStoreBinary::store(perm_auth_key_id_, s);
  TlStoreBinary::store(temp_session_id_, s);
  TlStoreBinary::store(expires_at_, s);
}

void bind_auth_key_inner::store(TlStorerToString &s, const char *field_name) const {
  if (!LOG_IS_STRIPPED(ERROR)) {
    s.store_class_begin(field_name, "bind_auth_key_inner");
    s.store_field("nonce", nonce_);
    s.store_field("temp_auth_key_id", temp_auth_key_id_);
    s.store_field("perm_auth_key_id", perm_auth_key_id_);
    s.store_field("temp_session_id", temp_session_id_);
    s.store_field("expires_at", expires_at_);
    s.store_class_end();
  }
}

client_DH_inner_data::client_DH_inner_data()
  : nonce_()
  , server_nonce_()
  , retry_id_()
  , g_b_()
{}

client_DH_inner_data::client_DH_inner_data(UInt128 const &nonce_, UInt128 const &server_nonce_, std::int64_t retry_id_, Slice const &g_b_)
  : nonce_(nonce_)
  , server_nonce_(server_nonce_)
  , retry_id_(retry_id_)
  , g_b_(std::move(g_b_))
{}

const std::int32_t client_DH_inner_data::ID;

client_DH_inner_data::client_DH_inner_data(TlParser &p)
#define FAIL(error) p.set_error(error)
  : nonce_(TlFetchInt128::parse(p))
  , server_nonce_(TlFetchInt128::parse(p))
  , retry_id_(TlFetchLong::parse(p))
  , g_b_(TlFetchString<Slice>::parse(p))
#undef FAIL
{}

void client_DH_inner_data::store(TlStorerCalcLength &s) const {
  (void)sizeof(s);
  TlStoreBinary::store(nonce_, s);
  TlStoreBinary::store(server_nonce_, s);
  TlStoreBinary::store(retry_id_, s);
  TlStoreString::store(g_b_, s);
}

void client_DH_inner_data::store(TlStorerUnsafe &s) const {
  (void)sizeof(s);
  TlStoreBinary::store(nonce_, s);
  TlStoreBinary::store(server_nonce_, s);
  TlStoreBinary::store(retry_id_, s);
  TlStoreString::store(g_b_, s);
}

void client_DH_inner_data::store(TlStorerToString &s, const char *field_name) const {
  if (!LOG_IS_STRIPPED(ERROR)) {
    s.store_class_begin(field_name, "client_DH_inner_data");
    s.store_field("nonce", nonce_);
    s.store_field("server_nonce", server_nonce_);
    s.store_field("retry_id", retry_id_);
    s.store_field("g_b", g_b_);
    s.store_class_end();
  }
}

object_ptr<DestroySessionRes> DestroySessionRes::fetch(TlParser &p) {
#define FAIL(error) p.set_error(error); return nullptr;
  int constructor = p.fetch_int();
  switch (constructor) {
    case destroy_session_ok::ID:
      return destroy_session_ok::fetch(p);
    case destroy_session_none::ID:
      return destroy_session_none::fetch(p);
    default:
      FAIL(PSTRING() << "Unknown constructor found " << format::as_hex(constructor));
  }
#undef FAIL
}

destroy_session_ok::destroy_session_ok()
  : session_id_()
{}

destroy_session_ok::destroy_session_ok(std::int64_t session_id_)
  : session_id_(session_id_)
{}

const std::int32_t destroy_session_ok::ID;

destroy_session_ok::destroy_session_ok(TlParser &p)
#define FAIL(error) p.set_error(error)
  : session_id_(TlFetchLong::parse(p))
#undef FAIL
{}

void destroy_session_ok::store(TlStorerCalcLength &s) const {
  (void)sizeof(s);
  TlStoreBinary::store(session_id_, s);
}

void destroy_session_ok::store(TlStorerUnsafe &s) const {
  (void)sizeof(s);
  TlStoreBinary::store(session_id_, s);
}

void destroy_session_ok::store(TlStorerToString &s, const char *field_name) const {
  if (!LOG_IS_STRIPPED(ERROR)) {
    s.store_class_begin(field_name, "destroy_session_ok");
    s.store_field("session_id", session_id_);
    s.store_class_end();
  }
}

destroy_session_none::destroy_session_none()
  : session_id_()
{}

destroy_session_none::destroy_session_none(std::int64_t session_id_)
  : session_id_(session_id_)
{}

const std::int32_t destroy_session_none::ID;

destroy_session_none::destroy_session_none(TlParser &p)
#define FAIL(error) p.set_error(error)
  : session_id_(TlFetchLong::parse(p))
#undef FAIL
{}

void destroy_session_none::store(TlStorerCalcLength &s) const {
  (void)sizeof(s);
  TlStoreBinary::store(session_id_, s);
}

void destroy_session_none::store(TlStorerUnsafe &s) const {
  (void)sizeof(s);
  TlStoreBinary::store(session_id_, s);
}

void destroy_session_none::store(TlStorerToString &s, const char *field_name) const {
  if (!LOG_IS_STRIPPED(ERROR)) {
    s.store_class_begin(field_name, "destroy_session_none");
    s.store_field("session_id", session_id_);
    s.store_class_end();
  }
}

future_salt::future_salt()
  : valid_since_()
  , valid_until_()
  , salt_()
{}

future_salt::future_salt(std::int32_t valid_since_, std::int32_t valid_until_, std::int64_t salt_)
  : valid_since_(valid_since_)
  , valid_until_(valid_until_)
  , salt_(salt_)
{}

const std::int32_t future_salt::ID;

future_salt::future_salt(TlParser &p)
#define FAIL(error) p.set_error(error)
  : valid_since_(TlFetchInt::parse(p))
  , valid_until_(TlFetchInt::parse(p))
  , salt_(TlFetchLong::parse(p))
#undef FAIL
{}

void future_salt::store(TlStorerCalcLength &s) const {
  (void)sizeof(s);
  TlStoreBinary::store(valid_since_, s);
  TlStoreBinary::store(valid_until_, s);
  TlStoreBinary::store(salt_, s);
}

void future_salt::store(TlStorerUnsafe &s) const {
  (void)sizeof(s);
  TlStoreBinary::store(valid_since_, s);
  TlStoreBinary::store(valid_until_, s);
  TlStoreBinary::store(salt_, s);
}

void future_salt::store(TlStorerToString &s, const char *field_name) const {
  if (!LOG_IS_STRIPPED(ERROR)) {
    s.store_class_begin(field_name, "future_salt");
    s.store_field("valid_since", valid_since_);
    s.store_field("valid_until", valid_until_);
    s.store_field("salt", salt_);
    s.store_class_end();
  }
}

future_salts::future_salts()
  : req_msg_id_()
  , now_()
  , salts_()
{}

future_salts::future_salts(std::int64_t req_msg_id_, std::int32_t now_, std::vector<object_ptr<future_salt>> &&salts_)
  : req_msg_id_(req_msg_id_)
  , now_(now_)
  , salts_(std::move(salts_))
{}

const std::int32_t future_salts::ID;

future_salts::future_salts(TlParser &p)
#define FAIL(error) p.set_error(error)
  : req_msg_id_(TlFetchLong::parse(p))
  , now_(TlFetchInt::parse(p))
  , salts_(TlFetchVector<TlFetchObject<future_salt>>::parse(p))
#undef FAIL
{}

void future_salts::store(TlStorerCalcLength &s) const {
  (void)sizeof(s);
  TlStoreBinary::store(req_msg_id_, s);
  TlStoreBinary::store(now_, s);
  TlStoreVector<TlStoreObject>::store(salts_, s);
}

void future_salts::store(TlStorerUnsafe &s) const {
  (void)sizeof(s);
  TlStoreBinary::store(req_msg_id_, s);
  TlStoreBinary::store(now_, s);
  TlStoreVector<TlStoreObject>::store(salts_, s);
}

void future_salts::store(TlStorerToString &s, const char *field_name) const {
  if (!LOG_IS_STRIPPED(ERROR)) {
    s.store_class_begin(field_name, "future_salts");
    s.store_field("req_msg_id", req_msg_id_);
    s.store_field("now", now_);
    { const std::vector<object_ptr<future_salt>> &v = salts_; const std::uint32_t multiplicity = static_cast<std::uint32_t>(v.size()); const auto vector_name = "vector[" + td::to_string(multiplicity)+ "]"; s.store_class_begin("salts", vector_name.c_str()); for (std::uint32_t i = 0; i < multiplicity; i++) { if (v[i] == nullptr) { s.store_field("", "null"); } else { v[i]->store(s, ""); } } s.store_class_end(); }
    s.store_class_end();
  }
}

gzip_packed::gzip_packed()
  : packed_data_()
{}

gzip_packed::gzip_packed(Slice const &packed_data_)
  : packed_data_(std::move(packed_data_))
{}

const std::int32_t gzip_packed::ID;

gzip_packed::gzip_packed(TlParser &p)
#define FAIL(error) p.set_error(error)
  : packed_data_(TlFetchString<Slice>::parse(p))
#undef FAIL
{}

void gzip_packed::store(TlStorerCalcLength &s) const {
  (void)sizeof(s);
  TlStoreString::store(packed_data_, s);
}

void gzip_packed::store(TlStorerUnsafe &s) const {
  (void)sizeof(s);
  TlStoreString::store(packed_data_, s);
}

void gzip_packed::store(TlStorerToString &s, const char *field_name) const {
  if (!LOG_IS_STRIPPED(ERROR)) {
    s.store_class_begin(field_name, "gzip_packed");
    s.store_field("packed_data", packed_data_);
    s.store_class_end();
  }
}

dummyHttpWait::dummyHttpWait() {
}

const std::int32_t dummyHttpWait::ID;

dummyHttpWait::dummyHttpWait(TlParser &p)
#define FAIL(error) p.set_error(error)
#undef FAIL
{
  (void)p;
}

void dummyHttpWait::store(TlStorerCalcLength &s) const {
  (void)sizeof(s);
}

void dummyHttpWait::store(TlStorerUnsafe &s) const {
  (void)sizeof(s);
}

void dummyHttpWait::store(TlStorerToString &s, const char *field_name) const {
  if (!LOG_IS_STRIPPED(ERROR)) {
    s.store_class_begin(field_name, "dummyHttpWait");
    s.store_class_end();
  }
}

object_ptr<MsgDetailedInfo> MsgDetailedInfo::fetch(TlParser &p) {
#define FAIL(error) p.set_error(error); return nullptr;
  int constructor = p.fetch_int();
  switch (constructor) {
    case msg_detailed_info::ID:
      return msg_detailed_info::fetch(p);
    case msg_new_detailed_info::ID:
      return msg_new_detailed_info::fetch(p);
    default:
      FAIL(PSTRING() << "Unknown constructor found " << format::as_hex(constructor));
  }
#undef FAIL
}

msg_detailed_info::msg_detailed_info()
  : msg_id_()
  , answer_msg_id_()
  , bytes_()
  , status_()
{}

msg_detailed_info::msg_detailed_info(std::int64_t msg_id_, std::int64_t answer_msg_id_, std::int32_t bytes_, std::int32_t status_)
  : msg_id_(msg_id_)
  , answer_msg_id_(answer_msg_id_)
  , bytes_(bytes_)
  , status_(status_)
{}

const std::int32_t msg_detailed_info::ID;

msg_detailed_info::msg_detailed_info(TlParser &p)
#define FAIL(error) p.set_error(error)
  : msg_id_(TlFetchLong::parse(p))
  , answer_msg_id_(TlFetchLong::parse(p))
  , bytes_(TlFetchInt::parse(p))
  , status_(TlFetchInt::parse(p))
#undef FAIL
{}

void msg_detailed_info::store(TlStorerCalcLength &s) const {
  (void)sizeof(s);
  TlStoreBinary::store(msg_id_, s);
  TlStoreBinary::store(answer_msg_id_, s);
  TlStoreBinary::store(bytes_, s);
  TlStoreBinary::store(status_, s);
}

void msg_detailed_info::store(TlStorerUnsafe &s) const {
  (void)sizeof(s);
  TlStoreBinary::store(msg_id_, s);
  TlStoreBinary::store(answer_msg_id_, s);
  TlStoreBinary::store(bytes_, s);
  TlStoreBinary::store(status_, s);
}

void msg_detailed_info::store(TlStorerToString &s, const char *field_name) const {
  if (!LOG_IS_STRIPPED(ERROR)) {
    s.store_class_begin(field_name, "msg_detailed_info");
    s.store_field("msg_id", msg_id_);
    s.store_field("answer_msg_id", answer_msg_id_);
    s.store_field("bytes", bytes_);
    s.store_field("status", status_);
    s.store_class_end();
  }
}

msg_new_detailed_info::msg_new_detailed_info()
  : answer_msg_id_()
  , bytes_()
  , status_()
{}

msg_new_detailed_info::msg_new_detailed_info(std::int64_t answer_msg_id_, std::int32_t bytes_, std::int32_t status_)
  : answer_msg_id_(answer_msg_id_)
  , bytes_(bytes_)
  , status_(status_)
{}

const std::int32_t msg_new_detailed_info::ID;

msg_new_detailed_info::msg_new_detailed_info(TlParser &p)
#define FAIL(error) p.set_error(error)
  : answer_msg_id_(TlFetchLong::parse(p))
  , bytes_(TlFetchInt::parse(p))
  , status_(TlFetchInt::parse(p))
#undef FAIL
{}

void msg_new_detailed_info::store(TlStorerCalcLength &s) const {
  (void)sizeof(s);
  TlStoreBinary::store(answer_msg_id_, s);
  TlStoreBinary::store(bytes_, s);
  TlStoreBinary::store(status_, s);
}

void msg_new_detailed_info::store(TlStorerUnsafe &s) const {
  (void)sizeof(s);
  TlStoreBinary::store(answer_msg_id_, s);
  TlStoreBinary::store(bytes_, s);
  TlStoreBinary::store(status_, s);
}

void msg_new_detailed_info::store(TlStorerToString &s, const char *field_name) const {
  if (!LOG_IS_STRIPPED(ERROR)) {
    s.store_class_begin(field_name, "msg_new_detailed_info");
    s.store_field("answer_msg_id", answer_msg_id_);
    s.store_field("bytes", bytes_);
    s.store_field("status", status_);
    s.store_class_end();
  }
}

msg_resend_req::msg_resend_req()
  : msg_ids_()
{}

msg_resend_req::msg_resend_req(std::vector<std::int64_t> &&msg_ids_)
  : msg_ids_(std::move(msg_ids_))
{}

const std::int32_t msg_resend_req::ID;

msg_resend_req::msg_resend_req(TlParser &p)
#define FAIL(error) p.set_error(error)
  : msg_ids_(TlFetchBoxed<TlFetchVector<TlFetchLong>, 481674261>::parse(p))
#undef FAIL
{}

void msg_resend_req::store(TlStorerCalcLength &s) const {
  (void)sizeof(s);
  TlStoreBoxed<TlStoreVector<TlStoreBinary>, 481674261>::store(msg_ids_, s);
}

void msg_resend_req::store(TlStorerUnsafe &s) const {
  (void)sizeof(s);
  TlStoreBoxed<TlStoreVector<TlStoreBinary>, 481674261>::store(msg_ids_, s);
}

void msg_resend_req::store(TlStorerToString &s, const char *field_name) const {
  if (!LOG_IS_STRIPPED(ERROR)) {
    s.store_class_begin(field_name, "msg_resend_req");
    { const std::vector<std::int64_t> &v = msg_ids_; const std::uint32_t multiplicity = static_cast<std::uint32_t>(v.size()); const auto vector_name = "vector[" + td::to_string(multiplicity)+ "]"; s.store_class_begin("msg_ids", vector_name.c_str()); for (std::uint32_t i = 0; i < multiplicity; i++) { s.store_field("", v[i]); } s.store_class_end(); }
    s.store_class_end();
  }
}

msgs_ack::msgs_ack()
  : msg_ids_()
{}

msgs_ack::msgs_ack(std::vector<std::int64_t> &&msg_ids_)
  : msg_ids_(std::move(msg_ids_))
{}

const std::int32_t msgs_ack::ID;

msgs_ack::msgs_ack(TlParser &p)
#define FAIL(error) p.set_error(error)
  : msg_ids_(TlFetchBoxed<TlFetchVector<TlFetchLong>, 481674261>::parse(p))
#undef FAIL
{}

void msgs_ack::store(TlStorerCalcLength &s) const {
  (void)sizeof(s);
  TlStoreBoxed<TlStoreVector<TlStoreBinary>, 481674261>::store(msg_ids_, s);
}

void msgs_ack::store(TlStorerUnsafe &s) const {
  (void)sizeof(s);
  TlStoreBoxed<TlStoreVector<TlStoreBinary>, 481674261>::store(msg_ids_, s);
}

void msgs_ack::store(TlStorerToString &s, const char *field_name) const {
  if (!LOG_IS_STRIPPED(ERROR)) {
    s.store_class_begin(field_name, "msgs_ack");
    { const std::vector<std::int64_t> &v = msg_ids_; const std::uint32_t multiplicity = static_cast<std::uint32_t>(v.size()); const auto vector_name = "vector[" + td::to_string(multiplicity)+ "]"; s.store_class_begin("msg_ids", vector_name.c_str()); for (std::uint32_t i = 0; i < multiplicity; i++) { s.store_field("", v[i]); } s.store_class_end(); }
    s.store_class_end();
  }
}

msgs_all_info::msgs_all_info()
  : msg_ids_()
  , info_()
{}

msgs_all_info::msgs_all_info(std::vector<std::int64_t> &&msg_ids_, Slice const &info_)
  : msg_ids_(std::move(msg_ids_))
  , info_(std::move(info_))
{}

const std::int32_t msgs_all_info::ID;

msgs_all_info::msgs_all_info(TlParser &p)
#define FAIL(error) p.set_error(error)
  : msg_ids_(TlFetchBoxed<TlFetchVector<TlFetchLong>, 481674261>::parse(p))
  , info_(TlFetchString<Slice>::parse(p))
#undef FAIL
{}

void msgs_all_info::store(TlStorerCalcLength &s) const {
  (void)sizeof(s);
  TlStoreBoxed<TlStoreVector<TlStoreBinary>, 481674261>::store(msg_ids_, s);
  TlStoreString::store(info_, s);
}

void msgs_all_info::store(TlStorerUnsafe &s) const {
  (void)sizeof(s);
  TlStoreBoxed<TlStoreVector<TlStoreBinary>, 481674261>::store(msg_ids_, s);
  TlStoreString::store(info_, s);
}

void msgs_all_info::store(TlStorerToString &s, const char *field_name) const {
  if (!LOG_IS_STRIPPED(ERROR)) {
    s.store_class_begin(field_name, "msgs_all_info");
    { const std::vector<std::int64_t> &v = msg_ids_; const std::uint32_t multiplicity = static_cast<std::uint32_t>(v.size()); const auto vector_name = "vector[" + td::to_string(multiplicity)+ "]"; s.store_class_begin("msg_ids", vector_name.c_str()); for (std::uint32_t i = 0; i < multiplicity; i++) { s.store_field("", v[i]); } s.store_class_end(); }
    s.store_field("info", info_);
    s.store_class_end();
  }
}

msgs_state_info::msgs_state_info()
  : req_msg_id_()
  , info_()
{}

msgs_state_info::msgs_state_info(std::int64_t req_msg_id_, Slice const &info_)
  : req_msg_id_(req_msg_id_)
  , info_(std::move(info_))
{}

const std::int32_t msgs_state_info::ID;

msgs_state_info::msgs_state_info(TlParser &p)
#define FAIL(error) p.set_error(error)
  : req_msg_id_(TlFetchLong::parse(p))
  , info_(TlFetchString<Slice>::parse(p))
#undef FAIL
{}

void msgs_state_info::store(TlStorerCalcLength &s) const {
  (void)sizeof(s);
  TlStoreBinary::store(req_msg_id_, s);
  TlStoreString::store(info_, s);
}

void msgs_state_info::store(TlStorerUnsafe &s) const {
  (void)sizeof(s);
  TlStoreBinary::store(req_msg_id_, s);
  TlStoreString::store(info_, s);
}

void msgs_state_info::store(TlStorerToString &s, const char *field_name) const {
  if (!LOG_IS_STRIPPED(ERROR)) {
    s.store_class_begin(field_name, "msgs_state_info");
    s.store_field("req_msg_id", req_msg_id_);
    s.store_field("info", info_);
    s.store_class_end();
  }
}

msgs_state_req::msgs_state_req()
  : msg_ids_()
{}

msgs_state_req::msgs_state_req(std::vector<std::int64_t> &&msg_ids_)
  : msg_ids_(std::move(msg_ids_))
{}

const std::int32_t msgs_state_req::ID;

msgs_state_req::msgs_state_req(TlParser &p)
#define FAIL(error) p.set_error(error)
  : msg_ids_(TlFetchBoxed<TlFetchVector<TlFetchLong>, 481674261>::parse(p))
#undef FAIL
{}

void msgs_state_req::store(TlStorerCalcLength &s) const {
  (void)sizeof(s);
  TlStoreBoxed<TlStoreVector<TlStoreBinary>, 481674261>::store(msg_ids_, s);
}

void msgs_state_req::store(TlStorerUnsafe &s) const {
  (void)sizeof(s);
  TlStoreBoxed<TlStoreVector<TlStoreBinary>, 481674261>::store(msg_ids_, s);
}

void msgs_state_req::store(TlStorerToString &s, const char *field_name) const {
  if (!LOG_IS_STRIPPED(ERROR)) {
    s.store_class_begin(field_name, "msgs_state_req");
    { const std::vector<std::int64_t> &v = msg_ids_; const std::uint32_t multiplicity = static_cast<std::uint32_t>(v.size()); const auto vector_name = "vector[" + td::to_string(multiplicity)+ "]"; s.store_class_begin("msg_ids", vector_name.c_str()); for (std::uint32_t i = 0; i < multiplicity; i++) { s.store_field("", v[i]); } s.store_class_end(); }
    s.store_class_end();
  }
}

new_session_created::new_session_created()
  : first_msg_id_()
  , unique_id_()
  , server_salt_()
{}

new_session_created::new_session_created(std::int64_t first_msg_id_, std::int64_t unique_id_, std::int64_t server_salt_)
  : first_msg_id_(first_msg_id_)
  , unique_id_(unique_id_)
  , server_salt_(server_salt_)
{}

const std::int32_t new_session_created::ID;

new_session_created::new_session_created(TlParser &p)
#define FAIL(error) p.set_error(error)
  : first_msg_id_(TlFetchLong::parse(p))
  , unique_id_(TlFetchLong::parse(p))
  , server_salt_(TlFetchLong::parse(p))
#undef FAIL
{}

void new_session_created::store(TlStorerCalcLength &s) const {
  (void)sizeof(s);
  TlStoreBinary::store(first_msg_id_, s);
  TlStoreBinary::store(unique_id_, s);
  TlStoreBinary::store(server_salt_, s);
}

void new_session_created::store(TlStorerUnsafe &s) const {
  (void)sizeof(s);
  TlStoreBinary::store(first_msg_id_, s);
  TlStoreBinary::store(unique_id_, s);
  TlStoreBinary::store(server_salt_, s);
}

void new_session_created::store(TlStorerToString &s, const char *field_name) const {
  if (!LOG_IS_STRIPPED(ERROR)) {
    s.store_class_begin(field_name, "new_session_created");
    s.store_field("first_msg_id", first_msg_id_);
    s.store_field("unique_id", unique_id_);
    s.store_field("server_salt", server_salt_);
    s.store_class_end();
  }
}

object_ptr<P_Q_inner_data> P_Q_inner_data::fetch(TlParser &p) {
#define FAIL(error) p.set_error(error); return nullptr;
  int constructor = p.fetch_int();
  switch (constructor) {
    case p_q_inner_data_dc::ID:
      return p_q_inner_data_dc::fetch(p);
    case p_q_inner_data_temp_dc::ID:
      return p_q_inner_data_temp_dc::fetch(p);
    default:
      FAIL(PSTRING() << "Unknown constructor found " << format::as_hex(constructor));
  }
#undef FAIL
}

p_q_inner_data_dc::p_q_inner_data_dc()
  : pq_()
  , p_()
  , q_()
  , nonce_()
  , server_nonce_()
  , new_nonce_()
  , dc_()
{}

p_q_inner_data_dc::p_q_inner_data_dc(Slice const &pq_, Slice const &p_, Slice const &q_, UInt128 const &nonce_, UInt128 const &server_nonce_, UInt256 const &new_nonce_, std::int32_t dc_)
  : pq_(std::move(pq_))
  , p_(std::move(p_))
  , q_(std::move(q_))
  , nonce_(nonce_)
  , server_nonce_(server_nonce_)
  , new_nonce_(new_nonce_)
  , dc_(dc_)
{}

const std::int32_t p_q_inner_data_dc::ID;

p_q_inner_data_dc::p_q_inner_data_dc(TlParser &p)
#define FAIL(error) p.set_error(error)
  : pq_(TlFetchString<Slice>::parse(p))
  , p_(TlFetchString<Slice>::parse(p))
  , q_(TlFetchString<Slice>::parse(p))
  , nonce_(TlFetchInt128::parse(p))
  , server_nonce_(TlFetchInt128::parse(p))
  , new_nonce_(TlFetchInt256::parse(p))
  , dc_(TlFetchInt::parse(p))
#undef FAIL
{}

void p_q_inner_data_dc::store(TlStorerCalcLength &s) const {
  (void)sizeof(s);
  TlStoreString::store(pq_, s);
  TlStoreString::store(p_, s);
  TlStoreString::store(q_, s);
  TlStoreBinary::store(nonce_, s);
  TlStoreBinary::store(server_nonce_, s);
  TlStoreBinary::store(new_nonce_, s);
  TlStoreBinary::store(dc_, s);
}

void p_q_inner_data_dc::store(TlStorerUnsafe &s) const {
  (void)sizeof(s);
  TlStoreString::store(pq_, s);
  TlStoreString::store(p_, s);
  TlStoreString::store(q_, s);
  TlStoreBinary::store(nonce_, s);
  TlStoreBinary::store(server_nonce_, s);
  TlStoreBinary::store(new_nonce_, s);
  TlStoreBinary::store(dc_, s);
}

void p_q_inner_data_dc::store(TlStorerToString &s, const char *field_name) const {
  if (!LOG_IS_STRIPPED(ERROR)) {
    s.store_class_begin(field_name, "p_q_inner_data_dc");
    s.store_field("pq", pq_);
    s.store_field("p", p_);
    s.store_field("q", q_);
    s.store_field("nonce", nonce_);
    s.store_field("server_nonce", server_nonce_);
    s.store_field("new_nonce", new_nonce_);
    s.store_field("dc", dc_);
    s.store_class_end();
  }
}

p_q_inner_data_temp_dc::p_q_inner_data_temp_dc()
  : pq_()
  , p_()
  , q_()
  , nonce_()
  , server_nonce_()
  , new_nonce_()
  , dc_()
  , expires_in_()
{}

p_q_inner_data_temp_dc::p_q_inner_data_temp_dc(Slice const &pq_, Slice const &p_, Slice const &q_, UInt128 const &nonce_, UInt128 const &server_nonce_, UInt256 const &new_nonce_, std::int32_t dc_, std::int32_t expires_in_)
  : pq_(std::move(pq_))
  , p_(std::move(p_))
  , q_(std::move(q_))
  , nonce_(nonce_)
  , server_nonce_(server_nonce_)
  , new_nonce_(new_nonce_)
  , dc_(dc_)
  , expires_in_(expires_in_)
{}

const std::int32_t p_q_inner_data_temp_dc::ID;

p_q_inner_data_temp_dc::p_q_inner_data_temp_dc(TlParser &p)
#define FAIL(error) p.set_error(error)
  : pq_(TlFetchString<Slice>::parse(p))
  , p_(TlFetchString<Slice>::parse(p))
  , q_(TlFetchString<Slice>::parse(p))
  , nonce_(TlFetchInt128::parse(p))
  , server_nonce_(TlFetchInt128::parse(p))
  , new_nonce_(TlFetchInt256::parse(p))
  , dc_(TlFetchInt::parse(p))
  , expires_in_(TlFetchInt::parse(p))
#undef FAIL
{}

void p_q_inner_data_temp_dc::store(TlStorerCalcLength &s) const {
  (void)sizeof(s);
  TlStoreString::store(pq_, s);
  TlStoreString::store(p_, s);
  TlStoreString::store(q_, s);
  TlStoreBinary::store(nonce_, s);
  TlStoreBinary::store(server_nonce_, s);
  TlStoreBinary::store(new_nonce_, s);
  TlStoreBinary::store(dc_, s);
  TlStoreBinary::store(expires_in_, s);
}

void p_q_inner_data_temp_dc::store(TlStorerUnsafe &s) const {
  (void)sizeof(s);
  TlStoreString::store(pq_, s);
  TlStoreString::store(p_, s);
  TlStoreString::store(q_, s);
  TlStoreBinary::store(nonce_, s);
  TlStoreBinary::store(server_nonce_, s);
  TlStoreBinary::store(new_nonce_, s);
  TlStoreBinary::store(dc_, s);
  TlStoreBinary::store(expires_in_, s);
}

void p_q_inner_data_temp_dc::store(TlStorerToString &s, const char *field_name) const {
  if (!LOG_IS_STRIPPED(ERROR)) {
    s.store_class_begin(field_name, "p_q_inner_data_temp_dc");
    s.store_field("pq", pq_);
    s.store_field("p", p_);
    s.store_field("q", q_);
    s.store_field("nonce", nonce_);
    s.store_field("server_nonce", server_nonce_);
    s.store_field("new_nonce", new_nonce_);
    s.store_field("dc", dc_);
    s.store_field("expires_in", expires_in_);
    s.store_class_end();
  }
}

pong::pong()
  : msg_id_()
  , ping_id_()
{}

pong::pong(std::int64_t msg_id_, std::int64_t ping_id_)
  : msg_id_(msg_id_)
  , ping_id_(ping_id_)
{}

const std::int32_t pong::ID;

pong::pong(TlParser &p)
#define FAIL(error) p.set_error(error)
  : msg_id_(TlFetchLong::parse(p))
  , ping_id_(TlFetchLong::parse(p))
#undef FAIL
{}

void pong::store(TlStorerCalcLength &s) const {
  (void)sizeof(s);
  TlStoreBinary::store(msg_id_, s);
  TlStoreBinary::store(ping_id_, s);
}

void pong::store(TlStorerUnsafe &s) const {
  (void)sizeof(s);
  TlStoreBinary::store(msg_id_, s);
  TlStoreBinary::store(ping_id_, s);
}

void pong::store(TlStorerToString &s, const char *field_name) const {
  if (!LOG_IS_STRIPPED(ERROR)) {
    s.store_class_begin(field_name, "pong");
    s.store_field("msg_id", msg_id_);
    s.store_field("ping_id", ping_id_);
    s.store_class_end();
  }
}

rsa_public_key::rsa_public_key()
  : n_()
  , e_()
{}

rsa_public_key::rsa_public_key(Slice const &n_, Slice const &e_)
  : n_(std::move(n_))
  , e_(std::move(e_))
{}

const std::int32_t rsa_public_key::ID;

rsa_public_key::rsa_public_key(TlParser &p)
#define FAIL(error) p.set_error(error)
  : n_(TlFetchString<Slice>::parse(p))
  , e_(TlFetchString<Slice>::parse(p))
#undef FAIL
{}

void rsa_public_key::store(TlStorerCalcLength &s) const {
  (void)sizeof(s);
  TlStoreString::store(n_, s);
  TlStoreString::store(e_, s);
}

void rsa_public_key::store(TlStorerUnsafe &s) const {
  (void)sizeof(s);
  TlStoreString::store(n_, s);
  TlStoreString::store(e_, s);
}

void rsa_public_key::store(TlStorerToString &s, const char *field_name) const {
  if (!LOG_IS_STRIPPED(ERROR)) {
    s.store_class_begin(field_name, "rsa_public_key");
    s.store_field("n", n_);
    s.store_field("e", e_);
    s.store_class_end();
  }
}

resPQ::resPQ()
  : nonce_()
  , server_nonce_()
  , pq_()
  , server_public_key_fingerprints_()
{}

resPQ::resPQ(UInt128 const &nonce_, UInt128 const &server_nonce_, Slice const &pq_, std::vector<std::int64_t> &&server_public_key_fingerprints_)
  : nonce_(nonce_)
  , server_nonce_(server_nonce_)
  , pq_(std::move(pq_))
  , server_public_key_fingerprints_(std::move(server_public_key_fingerprints_))
{}

const std::int32_t resPQ::ID;

resPQ::resPQ(TlParser &p)
#define FAIL(error) p.set_error(error)
  : nonce_(TlFetchInt128::parse(p))
  , server_nonce_(TlFetchInt128::parse(p))
  , pq_(TlFetchString<Slice>::parse(p))
  , server_public_key_fingerprints_(TlFetchBoxed<TlFetchVector<TlFetchLong>, 481674261>::parse(p))
#undef FAIL
{}

void resPQ::store(TlStorerCalcLength &s) const {
  (void)sizeof(s);
  TlStoreBinary::store(nonce_, s);
  TlStoreBinary::store(server_nonce_, s);
  TlStoreString::store(pq_, s);
  TlStoreBoxed<TlStoreVector<TlStoreBinary>, 481674261>::store(server_public_key_fingerprints_, s);
}

void resPQ::store(TlStorerUnsafe &s) const {
  (void)sizeof(s);
  TlStoreBinary::store(nonce_, s);
  TlStoreBinary::store(server_nonce_, s);
  TlStoreString::store(pq_, s);
  TlStoreBoxed<TlStoreVector<TlStoreBinary>, 481674261>::store(server_public_key_fingerprints_, s);
}

void resPQ::store(TlStorerToString &s, const char *field_name) const {
  if (!LOG_IS_STRIPPED(ERROR)) {
    s.store_class_begin(field_name, "resPQ");
    s.store_field("nonce", nonce_);
    s.store_field("server_nonce", server_nonce_);
    s.store_field("pq", pq_);
    { const std::vector<std::int64_t> &v = server_public_key_fingerprints_; const std::uint32_t multiplicity = static_cast<std::uint32_t>(v.size()); const auto vector_name = "vector[" + td::to_string(multiplicity)+ "]"; s.store_class_begin("server_public_key_fingerprints", vector_name.c_str()); for (std::uint32_t i = 0; i < multiplicity; i++) { s.store_field("", v[i]); } s.store_class_end(); }
    s.store_class_end();
  }
}

object_ptr<RpcDropAnswer> RpcDropAnswer::fetch(TlParser &p) {
#define FAIL(error) p.set_error(error); return nullptr;
  int constructor = p.fetch_int();
  switch (constructor) {
    case rpc_answer_unknown::ID:
      return rpc_answer_unknown::fetch(p);
    case rpc_answer_dropped_running::ID:
      return rpc_answer_dropped_running::fetch(p);
    case rpc_answer_dropped::ID:
      return rpc_answer_dropped::fetch(p);
    default:
      FAIL(PSTRING() << "Unknown constructor found " << format::as_hex(constructor));
  }
#undef FAIL
}

rpc_answer_unknown::rpc_answer_unknown() {
}

const std::int32_t rpc_answer_unknown::ID;

rpc_answer_unknown::rpc_answer_unknown(TlParser &p)
#define FAIL(error) p.set_error(error)
#undef FAIL
{
  (void)p;
}

void rpc_answer_unknown::store(TlStorerCalcLength &s) const {
  (void)sizeof(s);
}

void rpc_answer_unknown::store(TlStorerUnsafe &s) const {
  (void)sizeof(s);
}

void rpc_answer_unknown::store(TlStorerToString &s, const char *field_name) const {
  if (!LOG_IS_STRIPPED(ERROR)) {
    s.store_class_begin(field_name, "rpc_answer_unknown");
    s.store_class_end();
  }
}

rpc_answer_dropped_running::rpc_answer_dropped_running() {
}

const std::int32_t rpc_answer_dropped_running::ID;

rpc_answer_dropped_running::rpc_answer_dropped_running(TlParser &p)
#define FAIL(error) p.set_error(error)
#undef FAIL
{
  (void)p;
}

void rpc_answer_dropped_running::store(TlStorerCalcLength &s) const {
  (void)sizeof(s);
}

void rpc_answer_dropped_running::store(TlStorerUnsafe &s) const {
  (void)sizeof(s);
}

void rpc_answer_dropped_running::store(TlStorerToString &s, const char *field_name) const {
  if (!LOG_IS_STRIPPED(ERROR)) {
    s.store_class_begin(field_name, "rpc_answer_dropped_running");
    s.store_class_end();
  }
}

rpc_answer_dropped::rpc_answer_dropped()
  : msg_id_()
  , seq_no_()
  , bytes_()
{}

rpc_answer_dropped::rpc_answer_dropped(std::int64_t msg_id_, std::int32_t seq_no_, std::int32_t bytes_)
  : msg_id_(msg_id_)
  , seq_no_(seq_no_)
  , bytes_(bytes_)
{}

const std::int32_t rpc_answer_dropped::ID;

rpc_answer_dropped::rpc_answer_dropped(TlParser &p)
#define FAIL(error) p.set_error(error)
  : msg_id_(TlFetchLong::parse(p))
  , seq_no_(TlFetchInt::parse(p))
  , bytes_(TlFetchInt::parse(p))
#undef FAIL
{}

void rpc_answer_dropped::store(TlStorerCalcLength &s) const {
  (void)sizeof(s);
  TlStoreBinary::store(msg_id_, s);
  TlStoreBinary::store(seq_no_, s);
  TlStoreBinary::store(bytes_, s);
}

void rpc_answer_dropped::store(TlStorerUnsafe &s) const {
  (void)sizeof(s);
  TlStoreBinary::store(msg_id_, s);
  TlStoreBinary::store(seq_no_, s);
  TlStoreBinary::store(bytes_, s);
}

void rpc_answer_dropped::store(TlStorerToString &s, const char *field_name) const {
  if (!LOG_IS_STRIPPED(ERROR)) {
    s.store_class_begin(field_name, "rpc_answer_dropped");
    s.store_field("msg_id", msg_id_);
    s.store_field("seq_no", seq_no_);
    s.store_field("bytes", bytes_);
    s.store_class_end();
  }
}

rpc_error::rpc_error()
  : error_code_()
  , error_message_()
{}

rpc_error::rpc_error(std::int32_t error_code_, Slice const &error_message_)
  : error_code_(error_code_)
  , error_message_(std::move(error_message_))
{}

const std::int32_t rpc_error::ID;

rpc_error::rpc_error(TlParser &p)
#define FAIL(error) p.set_error(error)
  : error_code_(TlFetchInt::parse(p))
  , error_message_(TlFetchString<Slice>::parse(p))
#undef FAIL
{}

void rpc_error::store(TlStorerCalcLength &s) const {
  (void)sizeof(s);
  TlStoreBinary::store(error_code_, s);
  TlStoreString::store(error_message_, s);
}

void rpc_error::store(TlStorerUnsafe &s) const {
  (void)sizeof(s);
  TlStoreBinary::store(error_code_, s);
  TlStoreString::store(error_message_, s);
}

void rpc_error::store(TlStorerToString &s, const char *field_name) const {
  if (!LOG_IS_STRIPPED(ERROR)) {
    s.store_class_begin(field_name, "rpc_error");
    s.store_field("error_code", error_code_);
    s.store_field("error_message", error_message_);
    s.store_class_end();
  }
}

object_ptr<Server_DH_Params> Server_DH_Params::fetch(TlParser &p) {
#define FAIL(error) p.set_error(error); return nullptr;
  int constructor = p.fetch_int();
  switch (constructor) {
    case server_DH_params_fail::ID:
      return server_DH_params_fail::fetch(p);
    case server_DH_params_ok::ID:
      return server_DH_params_ok::fetch(p);
    default:
      FAIL(PSTRING() << "Unknown constructor found " << format::as_hex(constructor));
  }
#undef FAIL
}

server_DH_params_fail::server_DH_params_fail()
  : nonce_()
  , server_nonce_()
  , new_nonce_hash_()
{}

server_DH_params_fail::server_DH_params_fail(UInt128 const &nonce_, UInt128 const &server_nonce_, UInt128 const &new_nonce_hash_)
  : nonce_(nonce_)
  , server_nonce_(server_nonce_)
  , new_nonce_hash_(new_nonce_hash_)
{}

const std::int32_t server_DH_params_fail::ID;

server_DH_params_fail::server_DH_params_fail(TlParser &p)
#define FAIL(error) p.set_error(error)
  : nonce_(TlFetchInt128::parse(p))
  , server_nonce_(TlFetchInt128::parse(p))
  , new_nonce_hash_(TlFetchInt128::parse(p))
#undef FAIL
{}

void server_DH_params_fail::store(TlStorerCalcLength &s) const {
  (void)sizeof(s);
  TlStoreBinary::store(nonce_, s);
  TlStoreBinary::store(server_nonce_, s);
  TlStoreBinary::store(new_nonce_hash_, s);
}

void server_DH_params_fail::store(TlStorerUnsafe &s) const {
  (void)sizeof(s);
  TlStoreBinary::store(nonce_, s);
  TlStoreBinary::store(server_nonce_, s);
  TlStoreBinary::store(new_nonce_hash_, s);
}

void server_DH_params_fail::store(TlStorerToString &s, const char *field_name) const {
  if (!LOG_IS_STRIPPED(ERROR)) {
    s.store_class_begin(field_name, "server_DH_params_fail");
    s.store_field("nonce", nonce_);
    s.store_field("server_nonce", server_nonce_);
    s.store_field("new_nonce_hash", new_nonce_hash_);
    s.store_class_end();
  }
}

server_DH_params_ok::server_DH_params_ok()
  : nonce_()
  , server_nonce_()
  , encrypted_answer_()
{}

server_DH_params_ok::server_DH_params_ok(UInt128 const &nonce_, UInt128 const &server_nonce_, Slice const &encrypted_answer_)
  : nonce_(nonce_)
  , server_nonce_(server_nonce_)
  , encrypted_answer_(std::move(encrypted_answer_))
{}

const std::int32_t server_DH_params_ok::ID;

server_DH_params_ok::server_DH_params_ok(TlParser &p)
#define FAIL(error) p.set_error(error)
  : nonce_(TlFetchInt128::parse(p))
  , server_nonce_(TlFetchInt128::parse(p))
  , encrypted_answer_(TlFetchString<Slice>::parse(p))
#undef FAIL
{}

void server_DH_params_ok::store(TlStorerCalcLength &s) const {
  (void)sizeof(s);
  TlStoreBinary::store(nonce_, s);
  TlStoreBinary::store(server_nonce_, s);
  TlStoreString::store(encrypted_answer_, s);
}

void server_DH_params_ok::store(TlStorerUnsafe &s) const {
  (void)sizeof(s);
  TlStoreBinary::store(nonce_, s);
  TlStoreBinary::store(server_nonce_, s);
  TlStoreString::store(encrypted_answer_, s);
}

void server_DH_params_ok::store(TlStorerToString &s, const char *field_name) const {
  if (!LOG_IS_STRIPPED(ERROR)) {
    s.store_class_begin(field_name, "server_DH_params_ok");
    s.store_field("nonce", nonce_);
    s.store_field("server_nonce", server_nonce_);
    s.store_field("encrypted_answer", encrypted_answer_);
    s.store_class_end();
  }
}

server_DH_inner_data::server_DH_inner_data()
  : nonce_()
  , server_nonce_()
  , g_()
  , dh_prime_()
  , g_a_()
  , server_time_()
{}

server_DH_inner_data::server_DH_inner_data(UInt128 const &nonce_, UInt128 const &server_nonce_, std::int32_t g_, Slice const &dh_prime_, Slice const &g_a_, std::int32_t server_time_)
  : nonce_(nonce_)
  , server_nonce_(server_nonce_)
  , g_(g_)
  , dh_prime_(std::move(dh_prime_))
  , g_a_(std::move(g_a_))
  , server_time_(server_time_)
{}

const std::int32_t server_DH_inner_data::ID;

server_DH_inner_data::server_DH_inner_data(TlParser &p)
#define FAIL(error) p.set_error(error)
  : nonce_(TlFetchInt128::parse(p))
  , server_nonce_(TlFetchInt128::parse(p))
  , g_(TlFetchInt::parse(p))
  , dh_prime_(TlFetchString<Slice>::parse(p))
  , g_a_(TlFetchString<Slice>::parse(p))
  , server_time_(TlFetchInt::parse(p))
#undef FAIL
{}

void server_DH_inner_data::store(TlStorerCalcLength &s) const {
  (void)sizeof(s);
  TlStoreBinary::store(nonce_, s);
  TlStoreBinary::store(server_nonce_, s);
  TlStoreBinary::store(g_, s);
  TlStoreString::store(dh_prime_, s);
  TlStoreString::store(g_a_, s);
  TlStoreBinary::store(server_time_, s);
}

void server_DH_inner_data::store(TlStorerUnsafe &s) const {
  (void)sizeof(s);
  TlStoreBinary::store(nonce_, s);
  TlStoreBinary::store(server_nonce_, s);
  TlStoreBinary::store(g_, s);
  TlStoreString::store(dh_prime_, s);
  TlStoreString::store(g_a_, s);
  TlStoreBinary::store(server_time_, s);
}

void server_DH_inner_data::store(TlStorerToString &s, const char *field_name) const {
  if (!LOG_IS_STRIPPED(ERROR)) {
    s.store_class_begin(field_name, "server_DH_inner_data");
    s.store_field("nonce", nonce_);
    s.store_field("server_nonce", server_nonce_);
    s.store_field("g", g_);
    s.store_field("dh_prime", dh_prime_);
    s.store_field("g_a", g_a_);
    s.store_field("server_time", server_time_);
    s.store_class_end();
  }
}

object_ptr<Set_client_DH_params_answer> Set_client_DH_params_answer::fetch(TlParser &p) {
#define FAIL(error) p.set_error(error); return nullptr;
  int constructor = p.fetch_int();
  switch (constructor) {
    case dh_gen_ok::ID:
      return dh_gen_ok::fetch(p);
    case dh_gen_retry::ID:
      return dh_gen_retry::fetch(p);
    case dh_gen_fail::ID:
      return dh_gen_fail::fetch(p);
    default:
      FAIL(PSTRING() << "Unknown constructor found " << format::as_hex(constructor));
  }
#undef FAIL
}

dh_gen_ok::dh_gen_ok()
  : nonce_()
  , server_nonce_()
  , new_nonce_hash1_()
{}

dh_gen_ok::dh_gen_ok(UInt128 const &nonce_, UInt128 const &server_nonce_, UInt128 const &new_nonce_hash1_)
  : nonce_(nonce_)
  , server_nonce_(server_nonce_)
  , new_nonce_hash1_(new_nonce_hash1_)
{}

const std::int32_t dh_gen_ok::ID;

dh_gen_ok::dh_gen_ok(TlParser &p)
#define FAIL(error) p.set_error(error)
  : nonce_(TlFetchInt128::parse(p))
  , server_nonce_(TlFetchInt128::parse(p))
  , new_nonce_hash1_(TlFetchInt128::parse(p))
#undef FAIL
{}

void dh_gen_ok::store(TlStorerCalcLength &s) const {
  (void)sizeof(s);
  TlStoreBinary::store(nonce_, s);
  TlStoreBinary::store(server_nonce_, s);
  TlStoreBinary::store(new_nonce_hash1_, s);
}

void dh_gen_ok::store(TlStorerUnsafe &s) const {
  (void)sizeof(s);
  TlStoreBinary::store(nonce_, s);
  TlStoreBinary::store(server_nonce_, s);
  TlStoreBinary::store(new_nonce_hash1_, s);
}

void dh_gen_ok::store(TlStorerToString &s, const char *field_name) const {
  if (!LOG_IS_STRIPPED(ERROR)) {
    s.store_class_begin(field_name, "dh_gen_ok");
    s.store_field("nonce", nonce_);
    s.store_field("server_nonce", server_nonce_);
    s.store_field("new_nonce_hash1", new_nonce_hash1_);
    s.store_class_end();
  }
}

dh_gen_retry::dh_gen_retry()
  : nonce_()
  , server_nonce_()
  , new_nonce_hash2_()
{}

dh_gen_retry::dh_gen_retry(UInt128 const &nonce_, UInt128 const &server_nonce_, UInt128 const &new_nonce_hash2_)
  : nonce_(nonce_)
  , server_nonce_(server_nonce_)
  , new_nonce_hash2_(new_nonce_hash2_)
{}

const std::int32_t dh_gen_retry::ID;

dh_gen_retry::dh_gen_retry(TlParser &p)
#define FAIL(error) p.set_error(error)
  : nonce_(TlFetchInt128::parse(p))
  , server_nonce_(TlFetchInt128::parse(p))
  , new_nonce_hash2_(TlFetchInt128::parse(p))
#undef FAIL
{}

void dh_gen_retry::store(TlStorerCalcLength &s) const {
  (void)sizeof(s);
  TlStoreBinary::store(nonce_, s);
  TlStoreBinary::store(server_nonce_, s);
  TlStoreBinary::store(new_nonce_hash2_, s);
}

void dh_gen_retry::store(TlStorerUnsafe &s) const {
  (void)sizeof(s);
  TlStoreBinary::store(nonce_, s);
  TlStoreBinary::store(server_nonce_, s);
  TlStoreBinary::store(new_nonce_hash2_, s);
}

void dh_gen_retry::store(TlStorerToString &s, const char *field_name) const {
  if (!LOG_IS_STRIPPED(ERROR)) {
    s.store_class_begin(field_name, "dh_gen_retry");
    s.store_field("nonce", nonce_);
    s.store_field("server_nonce", server_nonce_);
    s.store_field("new_nonce_hash2", new_nonce_hash2_);
    s.store_class_end();
  }
}

dh_gen_fail::dh_gen_fail()
  : nonce_()
  , server_nonce_()
  , new_nonce_hash3_()
{}

dh_gen_fail::dh_gen_fail(UInt128 const &nonce_, UInt128 const &server_nonce_, UInt128 const &new_nonce_hash3_)
  : nonce_(nonce_)
  , server_nonce_(server_nonce_)
  , new_nonce_hash3_(new_nonce_hash3_)
{}

const std::int32_t dh_gen_fail::ID;

dh_gen_fail::dh_gen_fail(TlParser &p)
#define FAIL(error) p.set_error(error)
  : nonce_(TlFetchInt128::parse(p))
  , server_nonce_(TlFetchInt128::parse(p))
  , new_nonce_hash3_(TlFetchInt128::parse(p))
#undef FAIL
{}

void dh_gen_fail::store(TlStorerCalcLength &s) const {
  (void)sizeof(s);
  TlStoreBinary::store(nonce_, s);
  TlStoreBinary::store(server_nonce_, s);
  TlStoreBinary::store(new_nonce_hash3_, s);
}

void dh_gen_fail::store(TlStorerUnsafe &s) const {
  (void)sizeof(s);
  TlStoreBinary::store(nonce_, s);
  TlStoreBinary::store(server_nonce_, s);
  TlStoreBinary::store(new_nonce_hash3_, s);
}

void dh_gen_fail::store(TlStorerToString &s, const char *field_name) const {
  if (!LOG_IS_STRIPPED(ERROR)) {
    s.store_class_begin(field_name, "dh_gen_fail");
    s.store_field("nonce", nonce_);
    s.store_field("server_nonce", server_nonce_);
    s.store_field("new_nonce_hash3", new_nonce_hash3_);
    s.store_class_end();
  }
}

destroy_session::destroy_session()
  : session_id_()
{}

destroy_session::destroy_session(std::int64_t session_id_)
  : session_id_(session_id_)
{}

const std::int32_t destroy_session::ID;

destroy_session::destroy_session(TlParser &p)
#define FAIL(error) p.set_error(error)
  : session_id_(TlFetchLong::parse(p))
#undef FAIL
{}

void destroy_session::store(TlStorerCalcLength &s) const {
  (void)sizeof(s);
  s.store_binary(-414113498);
  TlStoreBinary::store(session_id_, s);
}

void destroy_session::store(TlStorerUnsafe &s) const {
  (void)sizeof(s);
  s.store_binary(-414113498);
  TlStoreBinary::store(session_id_, s);
}

void destroy_session::store(TlStorerToString &s, const char *field_name) const {
  if (!LOG_IS_STRIPPED(ERROR)) {
    s.store_class_begin(field_name, "destroy_session");
    s.store_field("session_id", session_id_);
    s.store_class_end();
  }
}

destroy_session::ReturnType destroy_session::fetch_result(TlParser &p) {
#define FAIL(error) p.set_error(error); return ReturnType()
  return TlFetchObject<DestroySessionRes>::parse(p);
#undef FAIL
}

get_future_salts::get_future_salts()
  : num_()
{}

get_future_salts::get_future_salts(std::int32_t num_)
  : num_(num_)
{}

const std::int32_t get_future_salts::ID;

get_future_salts::get_future_salts(TlParser &p)
#define FAIL(error) p.set_error(error)
  : num_(TlFetchInt::parse(p))
#undef FAIL
{}

void get_future_salts::store(TlStorerCalcLength &s) const {
  (void)sizeof(s);
  s.store_binary(-1188971260);
  TlStoreBinary::store(num_, s);
}

void get_future_salts::store(TlStorerUnsafe &s) const {
  (void)sizeof(s);
  s.store_binary(-1188971260);
  TlStoreBinary::store(num_, s);
}

void get_future_salts::store(TlStorerToString &s, const char *field_name) const {
  if (!LOG_IS_STRIPPED(ERROR)) {
    s.store_class_begin(field_name, "get_future_salts");
    s.store_field("num", num_);
    s.store_class_end();
  }
}

get_future_salts::ReturnType get_future_salts::fetch_result(TlParser &p) {
#define FAIL(error) p.set_error(error); return ReturnType()
  return TlFetchBoxed<TlFetchObject<future_salts>, -1370486635>::parse(p);
#undef FAIL
}

http_wait::http_wait()
  : max_delay_()
  , wait_after_()
  , max_wait_()
{}

http_wait::http_wait(std::int32_t max_delay_, std::int32_t wait_after_, std::int32_t max_wait_)
  : max_delay_(max_delay_)
  , wait_after_(wait_after_)
  , max_wait_(max_wait_)
{}

const std::int32_t http_wait::ID;

http_wait::http_wait(TlParser &p)
#define FAIL(error) p.set_error(error)
  : max_delay_(TlFetchInt::parse(p))
  , wait_after_(TlFetchInt::parse(p))
  , max_wait_(TlFetchInt::parse(p))
#undef FAIL
{}

void http_wait::store(TlStorerCalcLength &s) const {
  (void)sizeof(s);
  s.store_binary(-1835453025);
  TlStoreBinary::store(max_delay_, s);
  TlStoreBinary::store(wait_after_, s);
  TlStoreBinary::store(max_wait_, s);
}

void http_wait::store(TlStorerUnsafe &s) const {
  (void)sizeof(s);
  s.store_binary(-1835453025);
  TlStoreBinary::store(max_delay_, s);
  TlStoreBinary::store(wait_after_, s);
  TlStoreBinary::store(max_wait_, s);
}

void http_wait::store(TlStorerToString &s, const char *field_name) const {
  if (!LOG_IS_STRIPPED(ERROR)) {
    s.store_class_begin(field_name, "http_wait");
    s.store_field("max_delay", max_delay_);
    s.store_field("wait_after", wait_after_);
    s.store_field("max_wait", max_wait_);
    s.store_class_end();
  }
}

http_wait::ReturnType http_wait::fetch_result(TlParser &p) {
#define FAIL(error) p.set_error(error); return ReturnType()
  return TlFetchBoxed<TlFetchObject<dummyHttpWait>, -919090642>::parse(p);
#undef FAIL
}

ping::ping()
  : ping_id_()
{}

ping::ping(std::int64_t ping_id_)
  : ping_id_(ping_id_)
{}

const std::int32_t ping::ID;

ping::ping(TlParser &p)
#define FAIL(error) p.set_error(error)
  : ping_id_(TlFetchLong::parse(p))
#undef FAIL
{}

void ping::store(TlStorerCalcLength &s) const {
  (void)sizeof(s);
  s.store_binary(2059302892);
  TlStoreBinary::store(ping_id_, s);
}

void ping::store(TlStorerUnsafe &s) const {
  (void)sizeof(s);
  s.store_binary(2059302892);
  TlStoreBinary::store(ping_id_, s);
}

void ping::store(TlStorerToString &s, const char *field_name) const {
  if (!LOG_IS_STRIPPED(ERROR)) {
    s.store_class_begin(field_name, "ping");
    s.store_field("ping_id", ping_id_);
    s.store_class_end();
  }
}

ping::ReturnType ping::fetch_result(TlParser &p) {
#define FAIL(error) p.set_error(error); return ReturnType()
  return TlFetchBoxed<TlFetchObject<pong>, 880243653>::parse(p);
#undef FAIL
}

ping_delay_disconnect::ping_delay_disconnect()
  : ping_id_()
  , disconnect_delay_()
{}

ping_delay_disconnect::ping_delay_disconnect(std::int64_t ping_id_, std::int32_t disconnect_delay_)
  : ping_id_(ping_id_)
  , disconnect_delay_(disconnect_delay_)
{}

const std::int32_t ping_delay_disconnect::ID;

ping_delay_disconnect::ping_delay_disconnect(TlParser &p)
#define FAIL(error) p.set_error(error)
  : ping_id_(TlFetchLong::parse(p))
  , disconnect_delay_(TlFetchInt::parse(p))
#undef FAIL
{}

void ping_delay_disconnect::store(TlStorerCalcLength &s) const {
  (void)sizeof(s);
  s.store_binary(-213746804);
  TlStoreBinary::store(ping_id_, s);
  TlStoreBinary::store(disconnect_delay_, s);
}

void ping_delay_disconnect::store(TlStorerUnsafe &s) const {
  (void)sizeof(s);
  s.store_binary(-213746804);
  TlStoreBinary::store(ping_id_, s);
  TlStoreBinary::store(disconnect_delay_, s);
}

void ping_delay_disconnect::store(TlStorerToString &s, const char *field_name) const {
  if (!LOG_IS_STRIPPED(ERROR)) {
    s.store_class_begin(field_name, "ping_delay_disconnect");
    s.store_field("ping_id", ping_id_);
    s.store_field("disconnect_delay", disconnect_delay_);
    s.store_class_end();
  }
}

ping_delay_disconnect::ReturnType ping_delay_disconnect::fetch_result(TlParser &p) {
#define FAIL(error) p.set_error(error); return ReturnType()
  return TlFetchBoxed<TlFetchObject<pong>, 880243653>::parse(p);
#undef FAIL
}

req_DH_params::req_DH_params()
  : nonce_()
  , server_nonce_()
  , p_()
  , q_()
  , public_key_fingerprint_()
  , encrypted_data_()
{}

req_DH_params::req_DH_params(UInt128 const &nonce_, UInt128 const &server_nonce_, Slice const &p_, Slice const &q_, std::int64_t public_key_fingerprint_, Slice const &encrypted_data_)
  : nonce_(nonce_)
  , server_nonce_(server_nonce_)
  , p_(std::move(p_))
  , q_(std::move(q_))
  , public_key_fingerprint_(public_key_fingerprint_)
  , encrypted_data_(std::move(encrypted_data_))
{}

const std::int32_t req_DH_params::ID;

req_DH_params::req_DH_params(TlParser &p)
#define FAIL(error) p.set_error(error)
  : nonce_(TlFetchInt128::parse(p))
  , server_nonce_(TlFetchInt128::parse(p))
  , p_(TlFetchString<Slice>::parse(p))
  , q_(TlFetchString<Slice>::parse(p))
  , public_key_fingerprint_(TlFetchLong::parse(p))
  , encrypted_data_(TlFetchString<Slice>::parse(p))
#undef FAIL
{}

void req_DH_params::store(TlStorerCalcLength &s) const {
  (void)sizeof(s);
  s.store_binary(-686627650);
  TlStoreBinary::store(nonce_, s);
  TlStoreBinary::store(server_nonce_, s);
  TlStoreString::store(p_, s);
  TlStoreString::store(q_, s);
  TlStoreBinary::store(public_key_fingerprint_, s);
  TlStoreString::store(encrypted_data_, s);
}

void req_DH_params::store(TlStorerUnsafe &s) const {
  (void)sizeof(s);
  s.store_binary(-686627650);
  TlStoreBinary::store(nonce_, s);
  TlStoreBinary::store(server_nonce_, s);
  TlStoreString::store(p_, s);
  TlStoreString::store(q_, s);
  TlStoreBinary::store(public_key_fingerprint_, s);
  TlStoreString::store(encrypted_data_, s);
}

void req_DH_params::store(TlStorerToString &s, const char *field_name) const {
  if (!LOG_IS_STRIPPED(ERROR)) {
    s.store_class_begin(field_name, "req_DH_params");
    s.store_field("nonce", nonce_);
    s.store_field("server_nonce", server_nonce_);
    s.store_field("p", p_);
    s.store_field("q", q_);
    s.store_field("public_key_fingerprint", public_key_fingerprint_);
    s.store_field("encrypted_data", encrypted_data_);
    s.store_class_end();
  }
}

req_DH_params::ReturnType req_DH_params::fetch_result(TlParser &p) {
#define FAIL(error) p.set_error(error); return ReturnType()
  return TlFetchObject<Server_DH_Params>::parse(p);
#undef FAIL
}

req_pq_multi::req_pq_multi()
  : nonce_()
{}

req_pq_multi::req_pq_multi(UInt128 const &nonce_)
  : nonce_(nonce_)
{}

const std::int32_t req_pq_multi::ID;

req_pq_multi::req_pq_multi(TlParser &p)
#define FAIL(error) p.set_error(error)
  : nonce_(TlFetchInt128::parse(p))
#undef FAIL
{}

void req_pq_multi::store(TlStorerCalcLength &s) const {
  (void)sizeof(s);
  s.store_binary(-1099002127);
  TlStoreBinary::store(nonce_, s);
}

void req_pq_multi::store(TlStorerUnsafe &s) const {
  (void)sizeof(s);
  s.store_binary(-1099002127);
  TlStoreBinary::store(nonce_, s);
}

void req_pq_multi::store(TlStorerToString &s, const char *field_name) const {
  if (!LOG_IS_STRIPPED(ERROR)) {
    s.store_class_begin(field_name, "req_pq_multi");
    s.store_field("nonce", nonce_);
    s.store_class_end();
  }
}

req_pq_multi::ReturnType req_pq_multi::fetch_result(TlParser &p) {
#define FAIL(error) p.set_error(error); return ReturnType()
  return TlFetchBoxed<TlFetchObject<resPQ>, 85337187>::parse(p);
#undef FAIL
}

rpc_drop_answer::rpc_drop_answer()
  : req_msg_id_()
{}

rpc_drop_answer::rpc_drop_answer(std::int64_t req_msg_id_)
  : req_msg_id_(req_msg_id_)
{}

const std::int32_t rpc_drop_answer::ID;

rpc_drop_answer::rpc_drop_answer(TlParser &p)
#define FAIL(error) p.set_error(error)
  : req_msg_id_(TlFetchLong::parse(p))
#undef FAIL
{}

void rpc_drop_answer::store(TlStorerCalcLength &s) const {
  (void)sizeof(s);
  s.store_binary(1491380032);
  TlStoreBinary::store(req_msg_id_, s);
}

void rpc_drop_answer::store(TlStorerUnsafe &s) const {
  (void)sizeof(s);
  s.store_binary(1491380032);
  TlStoreBinary::store(req_msg_id_, s);
}

void rpc_drop_answer::store(TlStorerToString &s, const char *field_name) const {
  if (!LOG_IS_STRIPPED(ERROR)) {
    s.store_class_begin(field_name, "rpc_drop_answer");
    s.store_field("req_msg_id", req_msg_id_);
    s.store_class_end();
  }
}

rpc_drop_answer::ReturnType rpc_drop_answer::fetch_result(TlParser &p) {
#define FAIL(error) p.set_error(error); return ReturnType()
  return TlFetchObject<RpcDropAnswer>::parse(p);
#undef FAIL
}

set_client_DH_params::set_client_DH_params()
  : nonce_()
  , server_nonce_()
  , encrypted_data_()
{}

set_client_DH_params::set_client_DH_params(UInt128 const &nonce_, UInt128 const &server_nonce_, Slice const &encrypted_data_)
  : nonce_(nonce_)
  , server_nonce_(server_nonce_)
  , encrypted_data_(std::move(encrypted_data_))
{}

const std::int32_t set_client_DH_params::ID;

set_client_DH_params::set_client_DH_params(TlParser &p)
#define FAIL(error) p.set_error(error)
  : nonce_(TlFetchInt128::parse(p))
  , server_nonce_(TlFetchInt128::parse(p))
  , encrypted_data_(TlFetchString<Slice>::parse(p))
#undef FAIL
{}

void set_client_DH_params::store(TlStorerCalcLength &s) const {
  (void)sizeof(s);
  s.store_binary(-184262881);
  TlStoreBinary::store(nonce_, s);
  TlStoreBinary::store(server_nonce_, s);
  TlStoreString::store(encrypted_data_, s);
}

void set_client_DH_params::store(TlStorerUnsafe &s) const {
  (void)sizeof(s);
  s.store_binary(-184262881);
  TlStoreBinary::store(nonce_, s);
  TlStoreBinary::store(server_nonce_, s);
  TlStoreString::store(encrypted_data_, s);
}

void set_client_DH_params::store(TlStorerToString &s, const char *field_name) const {
  if (!LOG_IS_STRIPPED(ERROR)) {
    s.store_class_begin(field_name, "set_client_DH_params");
    s.store_field("nonce", nonce_);
    s.store_field("server_nonce", server_nonce_);
    s.store_field("encrypted_data", encrypted_data_);
    s.store_class_end();
  }
}

set_client_DH_params::ReturnType set_client_DH_params::fetch_result(TlParser &p) {
#define FAIL(error) p.set_error(error); return ReturnType()
  return TlFetchObject<Set_client_DH_params_answer>::parse(p);
#undef FAIL
}
}  // namespace mtproto_api
}  // namespace td
