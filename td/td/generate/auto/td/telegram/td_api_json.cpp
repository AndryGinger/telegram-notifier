#include "td/telegram/td_api_json.h"

#include "td/telegram/td_api.h"
#include "td/telegram/td_api.hpp"

#include "td/tl/tl_json.h"

#include "td/utils/base64.h"
#include "td/utils/common.h"
#include "td/utils/Slice.h"

#include <unordered_map>

namespace td {
namespace td_api{
Result<int32> tl_constructor_from_string(td_api::AuthenticationCodeType *object, const std::string &str) {
  static const std::unordered_map<Slice, int32, SliceHash> m = {
    {"authenticationCodeTypeTelegramMessage", 2079628074},
    {"authenticationCodeTypeSms", 962650760},
    {"authenticationCodeTypeCall", 1636265063},
    {"authenticationCodeTypeFlashCall", 1395882402}
  };
  auto it = m.find(str);
  if (it == m.end()) {
    return Status::Error("Unknown class");
  }
  return it->second;
}
Result<int32> tl_constructor_from_string(td_api::AuthorizationState *object, const std::string &str) {
  static const std::unordered_map<Slice, int32, SliceHash> m = {
    {"authorizationStateWaitTdlibParameters", 904720988},
    {"authorizationStateWaitEncryptionKey", 612103496},
    {"authorizationStateWaitPhoneNumber", 306402531},
    {"authorizationStateWaitCode", -122899120},
    {"authorizationStateWaitPassword", 187548796},
    {"authorizationStateReady", -1834871737},
    {"authorizationStateLoggingOut", 154449270},
    {"authorizationStateClosing", 445855311},
    {"authorizationStateClosed", 1526047584}
  };
  auto it = m.find(str);
  if (it == m.end()) {
    return Status::Error("Unknown class");
  }
  return it->second;
}
Result<int32> tl_constructor_from_string(td_api::CallDiscardReason *object, const std::string &str) {
  static const std::unordered_map<Slice, int32, SliceHash> m = {
    {"callDiscardReasonEmpty", -1258917949},
    {"callDiscardReasonMissed", 1680358012},
    {"callDiscardReasonDeclined", -1729926094},
    {"callDiscardReasonDisconnected", -1342872670},
    {"callDiscardReasonHungUp", 438216166}
  };
  auto it = m.find(str);
  if (it == m.end()) {
    return Status::Error("Unknown class");
  }
  return it->second;
}
Result<int32> tl_constructor_from_string(td_api::CallState *object, const std::string &str) {
  static const std::unordered_map<Slice, int32, SliceHash> m = {
    {"callStatePending", 1073048620},
    {"callStateExchangingKeys", -1848149403},
    {"callStateReady", 1518705438},
    {"callStateHangingUp", -2133790038},
    {"callStateDiscarded", -190853167},
    {"callStateError", -975215467}
  };
  auto it = m.find(str);
  if (it == m.end()) {
    return Status::Error("Unknown class");
  }
  return it->second;
}
Result<int32> tl_constructor_from_string(td_api::CallbackQueryPayload *object, const std::string &str) {
  static const std::unordered_map<Slice, int32, SliceHash> m = {
    {"callbackQueryPayloadData", -1977729946},
    {"callbackQueryPayloadGame", 1303571512}
  };
  auto it = m.find(str);
  if (it == m.end()) {
    return Status::Error("Unknown class");
  }
  return it->second;
}
Result<int32> tl_constructor_from_string(td_api::ChatAction *object, const std::string &str) {
  static const std::unordered_map<Slice, int32, SliceHash> m = {
    {"chatActionTyping", 380122167},
    {"chatActionRecordingVideo", 216553362},
    {"chatActionUploadingVideo", 1234185270},
    {"chatActionRecordingVoiceNote", -808850058},
    {"chatActionUploadingVoiceNote", -613643666},
    {"chatActionUploadingPhoto", 654240583},
    {"chatActionUploadingDocument", 167884362},
    {"chatActionChoosingLocation", -2017893596},
    {"chatActionChoosingContact", -1222507496},
    {"chatActionStartPlayingGame", -865884164},
    {"chatActionRecordingVideoNote", 16523393},
    {"chatActionUploadingVideoNote", 1172364918},
    {"chatActionCancel", 1160523958}
  };
  auto it = m.find(str);
  if (it == m.end()) {
    return Status::Error("Unknown class");
  }
  return it->second;
}
Result<int32> tl_constructor_from_string(td_api::ChatEventAction *object, const std::string &str) {
  static const std::unordered_map<Slice, int32, SliceHash> m = {
    {"chatEventMessageEdited", -430967304},
    {"chatEventMessageDeleted", -892974601},
    {"chatEventMessagePinned", 438742298},
    {"chatEventMessageUnpinned", 2002594849},
    {"chatEventMemberJoined", -235468508},
    {"chatEventMemberLeft", -948420593},
    {"chatEventMemberInvited", -2093688706},
    {"chatEventMemberPromoted", 1887176186},
    {"chatEventMemberRestricted", 584946294},
    {"chatEventTitleChanged", 1134103250},
    {"chatEventDescriptionChanged", 39112478},
    {"chatEventUsernameChanged", 1728558443},
    {"chatEventPhotoChanged", -811572541},
    {"chatEventInvitesToggled", 568706937},
    {"chatEventSignMessagesToggled", -1313265634},
    {"chatEventStickerSetChanged", -1243130481},
    {"chatEventIsAllHistoryAvailableToggled", -1599063019}
  };
  auto it = m.find(str);
  if (it == m.end()) {
    return Status::Error("Unknown class");
  }
  return it->second;
}
Result<int32> tl_constructor_from_string(td_api::ChatMemberStatus *object, const std::string &str) {
  static const std::unordered_map<Slice, int32, SliceHash> m = {
    {"chatMemberStatusCreator", 1756320508},
    {"chatMemberStatusAdministrator", 45106688},
    {"chatMemberStatusMember", 844723285},
    {"chatMemberStatusRestricted", 2068116214},
    {"chatMemberStatusLeft", -5815259},
    {"chatMemberStatusBanned", -1653518666}
  };
  auto it = m.find(str);
  if (it == m.end()) {
    return Status::Error("Unknown class");
  }
  return it->second;
}
Result<int32> tl_constructor_from_string(td_api::ChatMembersFilter *object, const std::string &str) {
  static const std::unordered_map<Slice, int32, SliceHash> m = {
    {"chatMembersFilterAdministrators", -1266893796},
    {"chatMembersFilterMembers", 670504342},
    {"chatMembersFilterRestricted", 1256282813},
    {"chatMembersFilterBanned", -1863102648},
    {"chatMembersFilterBots", -1422567288}
  };
  auto it = m.find(str);
  if (it == m.end()) {
    return Status::Error("Unknown class");
  }
  return it->second;
}
Result<int32> tl_constructor_from_string(td_api::ChatReportReason *object, const std::string &str) {
  static const std::unordered_map<Slice, int32, SliceHash> m = {
    {"chatReportReasonSpam", -510848863},
    {"chatReportReasonViolence", -1330235395},
    {"chatReportReasonPornography", 722614385},
    {"chatReportReasonCopyright", 986898080},
    {"chatReportReasonCustom", 544575454}
  };
  auto it = m.find(str);
  if (it == m.end()) {
    return Status::Error("Unknown class");
  }
  return it->second;
}
Result<int32> tl_constructor_from_string(td_api::ChatType *object, const std::string &str) {
  static const std::unordered_map<Slice, int32, SliceHash> m = {
    {"chatTypePrivate", 1700720838},
    {"chatTypeBasicGroup", 21815278},
    {"chatTypeSupergroup", 955152366},
    {"chatTypeSecret", 136722563}
  };
  auto it = m.find(str);
  if (it == m.end()) {
    return Status::Error("Unknown class");
  }
  return it->second;
}
Result<int32> tl_constructor_from_string(td_api::CheckChatUsernameResult *object, const std::string &str) {
  static const std::unordered_map<Slice, int32, SliceHash> m = {
    {"checkChatUsernameResultOk", -1498956964},
    {"checkChatUsernameResultUsernameInvalid", -636979370},
    {"checkChatUsernameResultUsernameOccupied", 1320892201},
    {"checkChatUsernameResultPublicChatsTooMuch", 858247741},
    {"checkChatUsernameResultPublicGroupsUnavailable", -51833641}
  };
  auto it = m.find(str);
  if (it == m.end()) {
    return Status::Error("Unknown class");
  }
  return it->second;
}
Result<int32> tl_constructor_from_string(td_api::ConnectionState *object, const std::string &str) {
  static const std::unordered_map<Slice, int32, SliceHash> m = {
    {"connectionStateWaitingForNetwork", 1695405912},
    {"connectionStateConnectingToProxy", -93187239},
    {"connectionStateConnecting", -1298400670},
    {"connectionStateUpdating", -188104009},
    {"connectionStateReady", 48608492}
  };
  auto it = m.find(str);
  if (it == m.end()) {
    return Status::Error("Unknown class");
  }
  return it->second;
}
Result<int32> tl_constructor_from_string(td_api::DeviceToken *object, const std::string &str) {
  static const std::unordered_map<Slice, int32, SliceHash> m = {
    {"deviceTokenGoogleCloudMessaging", 1092220225},
    {"deviceTokenApplePush", 387541955},
    {"deviceTokenApplePushVoIP", -327676505},
    {"deviceTokenWindowsPush", -1410514289},
    {"deviceTokenMicrosoftPush", 1224269900},
    {"deviceTokenMicrosoftPushVoIP", -785603759},
    {"deviceTokenWebPush", -1694507273},
    {"deviceTokenSimplePush", 49584736},
    {"deviceTokenUbuntuPush", 1782320422},
    {"deviceTokenBlackBerryPush", 1559167234},
    {"deviceTokenTizenPush", -1359947213}
  };
  auto it = m.find(str);
  if (it == m.end()) {
    return Status::Error("Unknown class");
  }
  return it->second;
}
Result<int32> tl_constructor_from_string(td_api::FileType *object, const std::string &str) {
  static const std::unordered_map<Slice, int32, SliceHash> m = {
    {"fileTypeNone", 2003009189},
    {"fileTypeAnimation", -290816582},
    {"fileTypeAudio", -709112160},
    {"fileTypeDocument", -564722929},
    {"fileTypePhoto", -1718914651},
    {"fileTypeProfilePhoto", 1795089315},
    {"fileTypeSecret", -1871899401},
    {"fileTypeSecretThumbnail", -1401326026},
    {"fileTypeSecure", -1419133146},
    {"fileTypeSticker", 475233385},
    {"fileTypeThumbnail", -12443298},
    {"fileTypeUnknown", -2011566768},
    {"fileTypeVideo", 1430816539},
    {"fileTypeVideoNote", -518412385},
    {"fileTypeVoiceNote", -588681661},
    {"fileTypeWallpaper", 1854930076}
  };
  auto it = m.find(str);
  if (it == m.end()) {
    return Status::Error("Unknown class");
  }
  return it->second;
}
Result<int32> tl_constructor_from_string(td_api::InlineKeyboardButtonType *object, const std::string &str) {
  static const std::unordered_map<Slice, int32, SliceHash> m = {
    {"inlineKeyboardButtonTypeUrl", 1130741420},
    {"inlineKeyboardButtonTypeCallback", -1127515139},
    {"inlineKeyboardButtonTypeCallbackGame", -383429528},
    {"inlineKeyboardButtonTypeSwitchInline", -2035563307},
    {"inlineKeyboardButtonTypeBuy", 1360739440}
  };
  auto it = m.find(str);
  if (it == m.end()) {
    return Status::Error("Unknown class");
  }
  return it->second;
}
Result<int32> tl_constructor_from_string(td_api::InlineQueryResult *object, const std::string &str) {
  static const std::unordered_map<Slice, int32, SliceHash> m = {
    {"inlineQueryResultArticle", -518366710},
    {"inlineQueryResultContact", 410081985},
    {"inlineQueryResultLocation", -158305341},
    {"inlineQueryResultVenue", -1592932211},
    {"inlineQueryResultGame", 1706916987},
    {"inlineQueryResultAnimation", 2009984267},
    {"inlineQueryResultAudio", 842650360},
    {"inlineQueryResultDocument", -1491268539},
    {"inlineQueryResultPhoto", 1848319440},
    {"inlineQueryResultSticker", -1848224245},
    {"inlineQueryResultVideo", -1373158683},
    {"inlineQueryResultVoiceNote", -1897393105}
  };
  auto it = m.find(str);
  if (it == m.end()) {
    return Status::Error("Unknown class");
  }
  return it->second;
}
Result<int32> tl_constructor_from_string(td_api::InputCredentials *object, const std::string &str) {
  static const std::unordered_map<Slice, int32, SliceHash> m = {
    {"inputCredentialsSaved", -2034385364},
    {"inputCredentialsNew", -829689558},
    {"inputCredentialsAndroidPay", 1979566832},
    {"inputCredentialsApplePay", -1246570799}
  };
  auto it = m.find(str);
  if (it == m.end()) {
    return Status::Error("Unknown class");
  }
  return it->second;
}
Result<int32> tl_constructor_from_string(td_api::InputFile *object, const std::string &str) {
  static const std::unordered_map<Slice, int32, SliceHash> m = {
    {"inputFileId", 1788906253},
    {"inputFileRemote", -107574466},
    {"inputFileLocal", 2056030919},
    {"inputFileGenerated", -1781351885}
  };
  auto it = m.find(str);
  if (it == m.end()) {
    return Status::Error("Unknown class");
  }
  return it->second;
}
Result<int32> tl_constructor_from_string(td_api::InputInlineQueryResult *object, const std::string &str) {
  static const std::unordered_map<Slice, int32, SliceHash> m = {
    {"inputInlineQueryResultAnimatedGif", -891474894},
    {"inputInlineQueryResultAnimatedMpeg4", -1629529888},
    {"inputInlineQueryResultArticle", 1973670156},
    {"inputInlineQueryResultAudio", 1260139988},
    {"inputInlineQueryResultContact", 1846064594},
    {"inputInlineQueryResultDocument", 578801869},
    {"inputInlineQueryResultGame", 966074327},
    {"inputInlineQueryResultLocation", -1887650218},
    {"inputInlineQueryResultPhoto", -1123338721},
    {"inputInlineQueryResultSticker", 274007129},
    {"inputInlineQueryResultVenue", 541704509},
    {"inputInlineQueryResultVideo", 1724073191},
    {"inputInlineQueryResultVoiceNote", -1790072503}
  };
  auto it = m.find(str);
  if (it == m.end()) {
    return Status::Error("Unknown class");
  }
  return it->second;
}
Result<int32> tl_constructor_from_string(td_api::InputMessageContent *object, const std::string &str) {
  static const std::unordered_map<Slice, int32, SliceHash> m = {
    {"inputMessageText", 247050392},
    {"inputMessageAnimation", 926542724},
    {"inputMessageAudio", -626786126},
    {"inputMessageDocument", 937970604},
    {"inputMessagePhoto", 1648801584},
    {"inputMessageSticker", 740776325},
    {"inputMessageVideo", -2108486755},
    {"inputMessageVideoNote", 279108859},
    {"inputMessageVoiceNote", 2136519657},
    {"inputMessageLocation", -1624179655},
    {"inputMessageVenue", 1447926269},
    {"inputMessageContact", -982446849},
    {"inputMessageGame", -1728000914},
    {"inputMessageInvoice", 1038812175},
    {"inputMessageForwarded", 1561363198}
  };
  auto it = m.find(str);
  if (it == m.end()) {
    return Status::Error("Unknown class");
  }
  return it->second;
}
Result<int32> tl_constructor_from_string(td_api::InputPassportElement *object, const std::string &str) {
  static const std::unordered_map<Slice, int32, SliceHash> m = {
    {"inputPassportElementPersonalDetails", 164791359},
    {"inputPassportElementPassport", -497011356},
    {"inputPassportElementDriverLicense", 304813264},
    {"inputPassportElementIdentityCard", -9963390},
    {"inputPassportElementInternalPassport", 715360043},
    {"inputPassportElementAddress", 461630480},
    {"inputPassportElementUtilityBill", 1389203841},
    {"inputPassportElementBankStatement", -26585208},
    {"inputPassportElementRentalAgreement", 1736154155},
    {"inputPassportElementPassportRegistration", 1314562128},
    {"inputPassportElementTemporaryRegistration", -1913238047},
    {"inputPassportElementPhoneNumber", 1319357497},
    {"inputPassportElementEmailAddress", -248605659}
  };
  auto it = m.find(str);
  if (it == m.end()) {
    return Status::Error("Unknown class");
  }
  return it->second;
}
Result<int32> tl_constructor_from_string(td_api::InputPassportElementErrorSource *object, const std::string &str) {
  static const std::unordered_map<Slice, int32, SliceHash> m = {
    {"inputPassportElementErrorSourceUnspecified", 267230319},
    {"inputPassportElementErrorSourceDataField", -426795002},
    {"inputPassportElementErrorSourceFrontSide", 588023741},
    {"inputPassportElementErrorSourceReverseSide", 413072891},
    {"inputPassportElementErrorSourceSelfie", -773575528},
    {"inputPassportElementErrorSourceTranslationFile", 505842299},
    {"inputPassportElementErrorSourceTranslationFiles", -527254048},
    {"inputPassportElementErrorSourceFile", -298492469},
    {"inputPassportElementErrorSourceFiles", -2008541640}
  };
  auto it = m.find(str);
  if (it == m.end()) {
    return Status::Error("Unknown class");
  }
  return it->second;
}
Result<int32> tl_constructor_from_string(td_api::KeyboardButtonType *object, const std::string &str) {
  static const std::unordered_map<Slice, int32, SliceHash> m = {
    {"keyboardButtonTypeText", -1773037256},
    {"keyboardButtonTypeRequestPhoneNumber", -1529235527},
    {"keyboardButtonTypeRequestLocation", -125661955}
  };
  auto it = m.find(str);
  if (it == m.end()) {
    return Status::Error("Unknown class");
  }
  return it->second;
}
Result<int32> tl_constructor_from_string(td_api::LanguagePackStringValue *object, const std::string &str) {
  static const std::unordered_map<Slice, int32, SliceHash> m = {
    {"languagePackStringValueOrdinary", -249256352},
    {"languagePackStringValuePluralized", 1906840261},
    {"languagePackStringValueDeleted", 1834792698}
  };
  auto it = m.find(str);
  if (it == m.end()) {
    return Status::Error("Unknown class");
  }
  return it->second;
}
Result<int32> tl_constructor_from_string(td_api::LinkState *object, const std::string &str) {
  static const std::unordered_map<Slice, int32, SliceHash> m = {
    {"linkStateNone", 951430287},
    {"linkStateKnowsPhoneNumber", 380898199},
    {"linkStateIsContact", -1000499465}
  };
  auto it = m.find(str);
  if (it == m.end()) {
    return Status::Error("Unknown class");
  }
  return it->second;
}
Result<int32> tl_constructor_from_string(td_api::MaskPoint *object, const std::string &str) {
  static const std::unordered_map<Slice, int32, SliceHash> m = {
    {"maskPointForehead", 1027512005},
    {"maskPointEyes", 1748310861},
    {"maskPointMouth", 411773406},
    {"maskPointChin", 534995335}
  };
  auto it = m.find(str);
  if (it == m.end()) {
    return Status::Error("Unknown class");
  }
  return it->second;
}
Result<int32> tl_constructor_from_string(td_api::MessageContent *object, const std::string &str) {
  static const std::unordered_map<Slice, int32, SliceHash> m = {
    {"messageText", 1989037971},
    {"messageAnimation", 1306939396},
    {"messageAudio", 276722716},
    {"messageDocument", 596945783},
    {"messagePhoto", -1851395174},
    {"messageExpiredPhoto", -1404641801},
    {"messageSticker", 1779022878},
    {"messageVideo", 2021281344},
    {"messageExpiredVideo", -1212209981},
    {"messageVideoNote", 963323014},
    {"messageVoiceNote", 527777781},
    {"messageLocation", -1301887786},
    {"messageVenue", -2146492043},
    {"messageContact", -512684966},
    {"messageGame", -69441162},
    {"messageInvoice", -1916671476},
    {"messageCall", 366512596},
    {"messageBasicGroupChatCreate", 1575377646},
    {"messageSupergroupChatCreate", -434325733},
    {"messageChatChangeTitle", 748272449},
    {"messageChatChangePhoto", 319630249},
    {"messageChatDeletePhoto", -184374809},
    {"messageChatAddMembers", 401228326},
    {"messageChatJoinByLink", 1846493311},
    {"messageChatDeleteMember", 1164414043},
    {"messageChatUpgradeTo", 1957816681},
    {"messageChatUpgradeFrom", 1642272558},
    {"messagePinMessage", 953503801},
    {"messageScreenshotTaken", -1564971605},
    {"messageChatSetTtl", 1810060209},
    {"messageCustomServiceAction", 1435879282},
    {"messageGameScore", 1344904575},
    {"messagePaymentSuccessful", -595962993},
    {"messagePaymentSuccessfulBot", -412310696},
    {"messageContactRegistered", -1502020353},
    {"messageWebsiteConnected", -1074551800},
    {"messagePassportDataSent", 1017405171},
    {"messagePassportDataReceived", -1367863624},
    {"messageUnsupported", -1816726139}
  };
  auto it = m.find(str);
  if (it == m.end()) {
    return Status::Error("Unknown class");
  }
  return it->second;
}
Result<int32> tl_constructor_from_string(td_api::MessageForwardInfo *object, const std::string &str) {
  static const std::unordered_map<Slice, int32, SliceHash> m = {
    {"messageForwardedFromUser", 1004332765},
    {"messageForwardedPost", -244050875}
  };
  auto it = m.find(str);
  if (it == m.end()) {
    return Status::Error("Unknown class");
  }
  return it->second;
}
Result<int32> tl_constructor_from_string(td_api::MessageSendingState *object, const std::string &str) {
  static const std::unordered_map<Slice, int32, SliceHash> m = {
    {"messageSendingStatePending", -1381803582},
    {"messageSendingStateFailed", -546610323}
  };
  auto it = m.find(str);
  if (it == m.end()) {
    return Status::Error("Unknown class");
  }
  return it->second;
}
Result<int32> tl_constructor_from_string(td_api::NetworkStatisticsEntry *object, const std::string &str) {
  static const std::unordered_map<Slice, int32, SliceHash> m = {
    {"networkStatisticsEntryFile", 188452706},
    {"networkStatisticsEntryCall", 737000365}
  };
  auto it = m.find(str);
  if (it == m.end()) {
    return Status::Error("Unknown class");
  }
  return it->second;
}
Result<int32> tl_constructor_from_string(td_api::NetworkType *object, const std::string &str) {
  static const std::unordered_map<Slice, int32, SliceHash> m = {
    {"networkTypeNone", -1971691759},
    {"networkTypeMobile", 819228239},
    {"networkTypeMobileRoaming", -1435199760},
    {"networkTypeWiFi", -633872070},
    {"networkTypeOther", 1942128539}
  };
  auto it = m.find(str);
  if (it == m.end()) {
    return Status::Error("Unknown class");
  }
  return it->second;
}
Result<int32> tl_constructor_from_string(td_api::NotificationSettingsScope *object, const std::string &str) {
  static const std::unordered_map<Slice, int32, SliceHash> m = {
    {"notificationSettingsScopePrivateChats", 937446759},
    {"notificationSettingsScopeGroupChats", 1212142067}
  };
  auto it = m.find(str);
  if (it == m.end()) {
    return Status::Error("Unknown class");
  }
  return it->second;
}
Result<int32> tl_constructor_from_string(td_api::OptionValue *object, const std::string &str) {
  static const std::unordered_map<Slice, int32, SliceHash> m = {
    {"optionValueBoolean", 63135518},
    {"optionValueEmpty", 918955155},
    {"optionValueInteger", -1400911104},
    {"optionValueString", 756248212}
  };
  auto it = m.find(str);
  if (it == m.end()) {
    return Status::Error("Unknown class");
  }
  return it->second;
}
Result<int32> tl_constructor_from_string(td_api::PageBlock *object, const std::string &str) {
  static const std::unordered_map<Slice, int32, SliceHash> m = {
    {"pageBlockTitle", 1629664784},
    {"pageBlockSubtitle", 264524263},
    {"pageBlockAuthorDate", 1300231184},
    {"pageBlockHeader", 1402854811},
    {"pageBlockSubheader", 1263956774},
    {"pageBlockParagraph", 1182402406},
    {"pageBlockPreformatted", -1066346178},
    {"pageBlockFooter", 886429480},
    {"pageBlockDivider", -618614392},
    {"pageBlockAnchor", -837994576},
    {"pageBlockList", -1752631674},
    {"pageBlockBlockQuote", -37421406},
    {"pageBlockPullQuote", -1799498665},
    {"pageBlockAnimation", 1639478661},
    {"pageBlockAudio", 1898245855},
    {"pageBlockPhoto", -637181825},
    {"pageBlockVideo", 1610373002},
    {"pageBlockCover", 972174080},
    {"pageBlockEmbedded", -211257334},
    {"pageBlockEmbeddedPost", 1049948772},
    {"pageBlockCollage", 911142202},
    {"pageBlockSlideshow", 178557514},
    {"pageBlockChatLink", 214606645}
  };
  auto it = m.find(str);
  if (it == m.end()) {
    return Status::Error("Unknown class");
  }
  return it->second;
}
Result<int32> tl_constructor_from_string(td_api::PassportElement *object, const std::string &str) {
  static const std::unordered_map<Slice, int32, SliceHash> m = {
    {"passportElementPersonalDetails", 1217724035},
    {"passportElementPassport", -263985373},
    {"passportElementDriverLicense", 1643580589},
    {"passportElementIdentityCard", 2083775797},
    {"passportElementInternalPassport", 36220295},
    {"passportElementAddress", -782625232},
    {"passportElementUtilityBill", -234611246},
    {"passportElementBankStatement", -366464408},
    {"passportElementRentalAgreement", -290141400},
    {"passportElementPassportRegistration", 618323071},
    {"passportElementTemporaryRegistration", 1237626864},
    {"passportElementPhoneNumber", -1320118375},
    {"passportElementEmailAddress", -1528129531}
  };
  auto it = m.find(str);
  if (it == m.end()) {
    return Status::Error("Unknown class");
  }
  return it->second;
}
Result<int32> tl_constructor_from_string(td_api::PassportElementErrorSource *object, const std::string &str) {
  static const std::unordered_map<Slice, int32, SliceHash> m = {
    {"passportElementErrorSourceUnspecified", -378320830},
    {"passportElementErrorSourceDataField", -308650776},
    {"passportElementErrorSourceFrontSide", 1895658292},
    {"passportElementErrorSourceReverseSide", 1918630391},
    {"passportElementErrorSourceSelfie", -797043672},
    {"passportElementErrorSourceTranslationFile", -643919323},
    {"passportElementErrorSourceTranslationFiles", 581280796},
    {"passportElementErrorSourceFile", -226596202},
    {"passportElementErrorSourceFiles", 1894164178}
  };
  auto it = m.find(str);
  if (it == m.end()) {
    return Status::Error("Unknown class");
  }
  return it->second;
}
Result<int32> tl_constructor_from_string(td_api::PassportElementType *object, const std::string &str) {
  static const std::unordered_map<Slice, int32, SliceHash> m = {
    {"passportElementTypePersonalDetails", -1032136365},
    {"passportElementTypePassport", -436360376},
    {"passportElementTypeDriverLicense", 1827298379},
    {"passportElementTypeIdentityCard", -502356132},
    {"passportElementTypeInternalPassport", -793781959},
    {"passportElementTypeAddress", 496327874},
    {"passportElementTypeUtilityBill", 627084906},
    {"passportElementTypeBankStatement", 574095667},
    {"passportElementTypeRentalAgreement", -2060583280},
    {"passportElementTypePassportRegistration", -159478209},
    {"passportElementTypeTemporaryRegistration", 1092498527},
    {"passportElementTypePhoneNumber", -995361172},
    {"passportElementTypeEmailAddress", -79321405}
  };
  auto it = m.find(str);
  if (it == m.end()) {
    return Status::Error("Unknown class");
  }
  return it->second;
}
Result<int32> tl_constructor_from_string(td_api::ProxyType *object, const std::string &str) {
  static const std::unordered_map<Slice, int32, SliceHash> m = {
    {"proxyTypeSocks5", -890027341},
    {"proxyTypeHttp", -1547188361},
    {"proxyTypeMtproto", -1964826627}
  };
  auto it = m.find(str);
  if (it == m.end()) {
    return Status::Error("Unknown class");
  }
  return it->second;
}
Result<int32> tl_constructor_from_string(td_api::ReplyMarkup *object, const std::string &str) {
  static const std::unordered_map<Slice, int32, SliceHash> m = {
    {"replyMarkupRemoveKeyboard", -691252879},
    {"replyMarkupForceReply", 1039104593},
    {"replyMarkupShowKeyboard", -992627133},
    {"replyMarkupInlineKeyboard", -619317658}
  };
  auto it = m.find(str);
  if (it == m.end()) {
    return Status::Error("Unknown class");
  }
  return it->second;
}
Result<int32> tl_constructor_from_string(td_api::RichText *object, const std::string &str) {
  static const std::unordered_map<Slice, int32, SliceHash> m = {
    {"richTextPlain", 482617702},
    {"richTextBold", 1670844268},
    {"richTextItalic", 1853354047},
    {"richTextUnderline", -536019572},
    {"richTextStrikethrough", 723413585},
    {"richTextFixed", -1271496249},
    {"richTextUrl", 1967248447},
    {"richTextEmailAddress", 40018679},
    {"richTexts", 1647457821}
  };
  auto it = m.find(str);
  if (it == m.end()) {
    return Status::Error("Unknown class");
  }
  return it->second;
}
Result<int32> tl_constructor_from_string(td_api::SearchMessagesFilter *object, const std::string &str) {
  static const std::unordered_map<Slice, int32, SliceHash> m = {
    {"searchMessagesFilterEmpty", -869395657},
    {"searchMessagesFilterAnimation", -155713339},
    {"searchMessagesFilterAudio", 867505275},
    {"searchMessagesFilterDocument", 1526331215},
    {"searchMessagesFilterPhoto", 925932293},
    {"searchMessagesFilterVideo", 115538222},
    {"searchMessagesFilterVoiceNote", 1841439357},
    {"searchMessagesFilterPhotoAndVideo", 1352130963},
    {"searchMessagesFilterUrl", -1828724341},
    {"searchMessagesFilterChatPhoto", -1247751329},
    {"searchMessagesFilterCall", 1305231012},
    {"searchMessagesFilterMissedCall", 970663098},
    {"searchMessagesFilterVideoNote", 564323321},
    {"searchMessagesFilterVoiceAndVideoNote", 664174819},
    {"searchMessagesFilterMention", 2001258652},
    {"searchMessagesFilterUnreadMention", -95769149}
  };
  auto it = m.find(str);
  if (it == m.end()) {
    return Status::Error("Unknown class");
  }
  return it->second;
}
Result<int32> tl_constructor_from_string(td_api::SecretChatState *object, const std::string &str) {
  static const std::unordered_map<Slice, int32, SliceHash> m = {
    {"secretChatStatePending", -1637050756},
    {"secretChatStateReady", -1611352087},
    {"secretChatStateClosed", -1945106707}
  };
  auto it = m.find(str);
  if (it == m.end()) {
    return Status::Error("Unknown class");
  }
  return it->second;
}
Result<int32> tl_constructor_from_string(td_api::SupergroupMembersFilter *object, const std::string &str) {
  static const std::unordered_map<Slice, int32, SliceHash> m = {
    {"supergroupMembersFilterRecent", 1178199509},
    {"supergroupMembersFilterAdministrators", -2097380265},
    {"supergroupMembersFilterSearch", -1696358469},
    {"supergroupMembersFilterRestricted", -1107800034},
    {"supergroupMembersFilterBanned", -1210621683},
    {"supergroupMembersFilterBots", 492138918}
  };
  auto it = m.find(str);
  if (it == m.end()) {
    return Status::Error("Unknown class");
  }
  return it->second;
}
Result<int32> tl_constructor_from_string(td_api::TMeUrlType *object, const std::string &str) {
  static const std::unordered_map<Slice, int32, SliceHash> m = {
    {"tMeUrlTypeUser", -1198700130},
    {"tMeUrlTypeSupergroup", -1353369944},
    {"tMeUrlTypeChatInvite", 313907785},
    {"tMeUrlTypeStickerSet", 1602473196}
  };
  auto it = m.find(str);
  if (it == m.end()) {
    return Status::Error("Unknown class");
  }
  return it->second;
}
Result<int32> tl_constructor_from_string(td_api::TextEntityType *object, const std::string &str) {
  static const std::unordered_map<Slice, int32, SliceHash> m = {
    {"textEntityTypeMention", 934535013},
    {"textEntityTypeHashtag", -1023958307},
    {"textEntityTypeCashtag", 1222915915},
    {"textEntityTypeBotCommand", -1150997581},
    {"textEntityTypeUrl", -1312762756},
    {"textEntityTypeEmailAddress", 1425545249},
    {"textEntityTypeBold", -1128210000},
    {"textEntityTypeItalic", -118253987},
    {"textEntityTypeCode", -974534326},
    {"textEntityTypePre", 1648958606},
    {"textEntityTypePreCode", -945325397},
    {"textEntityTypeTextUrl", 445719651},
    {"textEntityTypeMentionName", -791517091},
    {"textEntityTypePhoneNumber", -1160140246}
  };
  auto it = m.find(str);
  if (it == m.end()) {
    return Status::Error("Unknown class");
  }
  return it->second;
}
Result<int32> tl_constructor_from_string(td_api::TextParseMode *object, const std::string &str) {
  static const std::unordered_map<Slice, int32, SliceHash> m = {
    {"textParseModeMarkdown", 969225580},
    {"textParseModeHTML", 1660208627}
  };
  auto it = m.find(str);
  if (it == m.end()) {
    return Status::Error("Unknown class");
  }
  return it->second;
}
Result<int32> tl_constructor_from_string(td_api::TopChatCategory *object, const std::string &str) {
  static const std::unordered_map<Slice, int32, SliceHash> m = {
    {"topChatCategoryUsers", 1026706816},
    {"topChatCategoryBots", -1577129195},
    {"topChatCategoryGroups", 1530056846},
    {"topChatCategoryChannels", -500825885},
    {"topChatCategoryInlineBots", 377023356},
    {"topChatCategoryCalls", 356208861}
  };
  auto it = m.find(str);
  if (it == m.end()) {
    return Status::Error("Unknown class");
  }
  return it->second;
}
Result<int32> tl_constructor_from_string(td_api::Update *object, const std::string &str) {
  static const std::unordered_map<Slice, int32, SliceHash> m = {
    {"updateAuthorizationState", 1622347490},
    {"updateNewMessage", 238944219},
    {"updateMessageSendAcknowledged", 1302843961},
    {"updateMessageSendSucceeded", 1815715197},
    {"updateMessageSendFailed", -1032335779},
    {"updateMessageContent", 506903332},
    {"updateMessageEdited", -559545626},
    {"updateMessageViews", -1854131125},
    {"updateMessageContentOpened", -1520523131},
    {"updateMessageMentionRead", -252228282},
    {"updateNewChat", 2075757773},
    {"updateChatTitle", -175405660},
    {"updateChatPhoto", -209353966},
    {"updateChatLastMessage", 580348828},
    {"updateChatOrder", -1601888026},
    {"updateChatIsPinned", 488876260},
    {"updateChatIsMarkedAsUnread", 1468347188},
    {"updateChatIsSponsored", -1196180070},
    {"updateChatDefaultDisableNotification", 464087707},
    {"updateChatReadInbox", -797952281},
    {"updateChatReadOutbox", 708334213},
    {"updateChatUnreadMentionCount", -2131461348},
    {"updateChatNotificationSettings", -803163050},
    {"updateScopeNotificationSettings", -1203975309},
    {"updateChatReplyMarkup", 1309386144},
    {"updateChatDraftMessage", -1436617498},
    {"updateDeleteMessages", 1669252686},
    {"updateUserChatAction", 1444133514},
    {"updateUserStatus", -1443545195},
    {"updateUser", 1183394041},
    {"updateBasicGroup", -1003239581},
    {"updateSupergroup", -76782300},
    {"updateSecretChat", -1666903253},
    {"updateUserFullInfo", 222103874},
    {"updateBasicGroupFullInfo", 924030531},
    {"updateSupergroupFullInfo", 1288828758},
    {"updateServiceNotification", 1318622637},
    {"updateFile", 114132831},
    {"updateFileGenerationStart", 216817388},
    {"updateFileGenerationStop", -1894449685},
    {"updateCall", 1337184477},
    {"updateUserPrivacySettingRules", -912960778},
    {"updateUnreadMessageCount", -824420376},
    {"updateUnreadChatCount", 891150304},
    {"updateOption", 900822020},
    {"updateInstalledStickerSets", 1125575977},
    {"updateTrendingStickerSets", 450714593},
    {"updateRecentStickers", 1906403540},
    {"updateFavoriteStickers", 1662240999},
    {"updateSavedAnimations", 65563814},
    {"updateLanguagePackStrings", -1056319886},
    {"updateConnectionState", 1469292078},
    {"updateTermsOfService", -1304640162},
    {"updateNewInlineQuery", 2064730634},
    {"updateNewChosenInlineResult", 527526965},
    {"updateNewCallbackQuery", -2044226370},
    {"updateNewInlineCallbackQuery", -1879154829},
    {"updateNewShippingQuery", -817474682},
    {"updateNewPreCheckoutQuery", 87964006},
    {"updateNewCustomEvent", 1994222092},
    {"updateNewCustomQuery", -687670874}
  };
  auto it = m.find(str);
  if (it == m.end()) {
    return Status::Error("Unknown class");
  }
  return it->second;
}
Result<int32> tl_constructor_from_string(td_api::UserPrivacySetting *object, const std::string &str) {
  static const std::unordered_map<Slice, int32, SliceHash> m = {
    {"userPrivacySettingShowStatus", 1862829310},
    {"userPrivacySettingAllowChatInvites", 1271668007},
    {"userPrivacySettingAllowCalls", -906967291}
  };
  auto it = m.find(str);
  if (it == m.end()) {
    return Status::Error("Unknown class");
  }
  return it->second;
}
Result<int32> tl_constructor_from_string(td_api::UserPrivacySettingRule *object, const std::string &str) {
  static const std::unordered_map<Slice, int32, SliceHash> m = {
    {"userPrivacySettingRuleAllowAll", -1967186881},
    {"userPrivacySettingRuleAllowContacts", -1892733680},
    {"userPrivacySettingRuleAllowUsers", 427601278},
    {"userPrivacySettingRuleRestrictAll", -1406495408},
    {"userPrivacySettingRuleRestrictContacts", 1008389378},
    {"userPrivacySettingRuleRestrictUsers", 2119951802}
  };
  auto it = m.find(str);
  if (it == m.end()) {
    return Status::Error("Unknown class");
  }
  return it->second;
}
Result<int32> tl_constructor_from_string(td_api::UserStatus *object, const std::string &str) {
  static const std::unordered_map<Slice, int32, SliceHash> m = {
    {"userStatusEmpty", 164646985},
    {"userStatusOnline", -1529460876},
    {"userStatusOffline", -759984891},
    {"userStatusRecently", -496024847},
    {"userStatusLastWeek", 129960444},
    {"userStatusLastMonth", 2011940674}
  };
  auto it = m.find(str);
  if (it == m.end()) {
    return Status::Error("Unknown class");
  }
  return it->second;
}
Result<int32> tl_constructor_from_string(td_api::UserType *object, const std::string &str) {
  static const std::unordered_map<Slice, int32, SliceHash> m = {
    {"userTypeRegular", -598644325},
    {"userTypeDeleted", -1807729372},
    {"userTypeBot", 1262387765},
    {"userTypeUnknown", -724541123}
  };
  auto it = m.find(str);
  if (it == m.end()) {
    return Status::Error("Unknown class");
  }
  return it->second;
}
Result<int32> tl_constructor_from_string(td_api::Object *object, const std::string &str) {
  static const std::unordered_map<Slice, int32, SliceHash> m = {
    {"accountTtl", 1324495492},
    {"address", -2043654342},
    {"animation", -1723168340},
    {"animations", 344216945},
    {"audio", 383148432},
    {"authenticationCodeInfo", -860345416},
    {"authenticationCodeTypeTelegramMessage", 2079628074},
    {"authenticationCodeTypeSms", 962650760},
    {"authenticationCodeTypeCall", 1636265063},
    {"authenticationCodeTypeFlashCall", 1395882402},
    {"authorizationStateWaitTdlibParameters", 904720988},
    {"authorizationStateWaitEncryptionKey", 612103496},
    {"authorizationStateWaitPhoneNumber", 306402531},
    {"authorizationStateWaitCode", -122899120},
    {"authorizationStateWaitPassword", 187548796},
    {"authorizationStateReady", -1834871737},
    {"authorizationStateLoggingOut", 154449270},
    {"authorizationStateClosing", 445855311},
    {"authorizationStateClosed", 1526047584},
    {"basicGroup", 1572712718},
    {"basicGroupFullInfo", 952266076},
    {"botCommand", -1032140601},
    {"botInfo", 1296528907},
    {"call", -1837599107},
    {"callConnection", 1318542714},
    {"callDiscardReasonEmpty", -1258917949},
    {"callDiscardReasonMissed", 1680358012},
    {"callDiscardReasonDeclined", -1729926094},
    {"callDiscardReasonDisconnected", -1342872670},
    {"callDiscardReasonHungUp", 438216166},
    {"callId", 65717769},
    {"callProtocol", -1042830667},
    {"callStatePending", 1073048620},
    {"callStateExchangingKeys", -1848149403},
    {"callStateReady", 1518705438},
    {"callStateHangingUp", -2133790038},
    {"callStateDiscarded", -190853167},
    {"callStateError", -975215467},
    {"callbackQueryAnswer", 360867933},
    {"callbackQueryPayloadData", -1977729946},
    {"callbackQueryPayloadGame", 1303571512},
    {"chat", -4728182},
    {"chatActionTyping", 380122167},
    {"chatActionRecordingVideo", 216553362},
    {"chatActionUploadingVideo", 1234185270},
    {"chatActionRecordingVoiceNote", -808850058},
    {"chatActionUploadingVoiceNote", -613643666},
    {"chatActionUploadingPhoto", 654240583},
    {"chatActionUploadingDocument", 167884362},
    {"chatActionChoosingLocation", -2017893596},
    {"chatActionChoosingContact", -1222507496},
    {"chatActionStartPlayingGame", -865884164},
    {"chatActionRecordingVideoNote", 16523393},
    {"chatActionUploadingVideoNote", 1172364918},
    {"chatActionCancel", 1160523958},
    {"chatEvent", -609912404},
    {"chatEventMessageEdited", -430967304},
    {"chatEventMessageDeleted", -892974601},
    {"chatEventMessagePinned", 438742298},
    {"chatEventMessageUnpinned", 2002594849},
    {"chatEventMemberJoined", -235468508},
    {"chatEventMemberLeft", -948420593},
    {"chatEventMemberInvited", -2093688706},
    {"chatEventMemberPromoted", 1887176186},
    {"chatEventMemberRestricted", 584946294},
    {"chatEventTitleChanged", 1134103250},
    {"chatEventDescriptionChanged", 39112478},
    {"chatEventUsernameChanged", 1728558443},
    {"chatEventPhotoChanged", -811572541},
    {"chatEventInvitesToggled", 568706937},
    {"chatEventSignMessagesToggled", -1313265634},
    {"chatEventStickerSetChanged", -1243130481},
    {"chatEventIsAllHistoryAvailableToggled", -1599063019},
    {"chatEventLogFilters", 941939684},
    {"chatEvents", -585329664},
    {"chatInviteLink", -882072492},
    {"chatInviteLinkInfo", -323394424},
    {"chatMember", -806137076},
    {"chatMemberStatusCreator", 1756320508},
    {"chatMemberStatusAdministrator", 45106688},
    {"chatMemberStatusMember", 844723285},
    {"chatMemberStatusRestricted", 2068116214},
    {"chatMemberStatusLeft", -5815259},
    {"chatMemberStatusBanned", -1653518666},
    {"chatMembers", -497558622},
    {"chatMembersFilterAdministrators", -1266893796},
    {"chatMembersFilterMembers", 670504342},
    {"chatMembersFilterRestricted", 1256282813},
    {"chatMembersFilterBanned", -1863102648},
    {"chatMembersFilterBots", -1422567288},
    {"chatNotificationSettings", 1949924445},
    {"chatPhoto", -217062456},
    {"chatReportReasonSpam", -510848863},
    {"chatReportReasonViolence", -1330235395},
    {"chatReportReasonPornography", 722614385},
    {"chatReportReasonCopyright", 986898080},
    {"chatReportReasonCustom", 544575454},
    {"chatReportSpamState", -1919240972},
    {"chatTypePrivate", 1700720838},
    {"chatTypeBasicGroup", 21815278},
    {"chatTypeSupergroup", 955152366},
    {"chatTypeSecret", 136722563},
    {"chats", -1687756019},
    {"checkChatUsernameResultOk", -1498956964},
    {"checkChatUsernameResultUsernameInvalid", -636979370},
    {"checkChatUsernameResultUsernameOccupied", 1320892201},
    {"checkChatUsernameResultPublicChatsTooMuch", 858247741},
    {"checkChatUsernameResultPublicGroupsUnavailable", -51833641},
    {"connectedWebsite", -1538986855},
    {"connectedWebsites", -1727949694},
    {"connectionStateWaitingForNetwork", 1695405912},
    {"connectionStateConnectingToProxy", -93187239},
    {"connectionStateConnecting", -1298400670},
    {"connectionStateUpdating", -188104009},
    {"connectionStateReady", 48608492},
    {"contact", -1483002540},
    {"count", 1295577348},
    {"customRequestResult", -2009960452},
    {"date", -277956960},
    {"datedFile", -1840795491},
    {"deepLinkInfo", 1864081662},
    {"deviceTokenGoogleCloudMessaging", 1092220225},
    {"deviceTokenApplePush", 387541955},
    {"deviceTokenApplePushVoIP", -327676505},
    {"deviceTokenWindowsPush", -1410514289},
    {"deviceTokenMicrosoftPush", 1224269900},
    {"deviceTokenMicrosoftPushVoIP", -785603759},
    {"deviceTokenWebPush", -1694507273},
    {"deviceTokenSimplePush", 49584736},
    {"deviceTokenUbuntuPush", 1782320422},
    {"deviceTokenBlackBerryPush", 1559167234},
    {"deviceTokenTizenPush", -1359947213},
    {"document", -736037786},
    {"draftMessage", 1902914742},
    {"emailAddressAuthenticationCodeInfo", 1151066659},
    {"encryptedCredentials", 1331106766},
    {"encryptedPassportElement", 2002386193},
    {"error", -1679978726},
    {"file", 766337656},
    {"fileTypeNone", 2003009189},
    {"fileTypeAnimation", -290816582},
    {"fileTypeAudio", -709112160},
    {"fileTypeDocument", -564722929},
    {"fileTypePhoto", -1718914651},
    {"fileTypeProfilePhoto", 1795089315},
    {"fileTypeSecret", -1871899401},
    {"fileTypeSecretThumbnail", -1401326026},
    {"fileTypeSecure", -1419133146},
    {"fileTypeSticker", 475233385},
    {"fileTypeThumbnail", -12443298},
    {"fileTypeUnknown", -2011566768},
    {"fileTypeVideo", 1430816539},
    {"fileTypeVideoNote", -518412385},
    {"fileTypeVoiceNote", -588681661},
    {"fileTypeWallpaper", 1854930076},
    {"formattedText", -252624564},
    {"foundMessages", 2135623881},
    {"game", -1565597752},
    {"gameHighScore", -30778358},
    {"gameHighScores", -725770727},
    {"hashtags", 676798885},
    {"identityDocument", 445952972},
    {"importedContacts", -741685354},
    {"inlineKeyboardButton", -372105704},
    {"inlineKeyboardButtonTypeUrl", 1130741420},
    {"inlineKeyboardButtonTypeCallback", -1127515139},
    {"inlineKeyboardButtonTypeCallbackGame", -383429528},
    {"inlineKeyboardButtonTypeSwitchInline", -2035563307},
    {"inlineKeyboardButtonTypeBuy", 1360739440},
    {"inlineQueryResultArticle", -518366710},
    {"inlineQueryResultContact", 410081985},
    {"inlineQueryResultLocation", -158305341},
    {"inlineQueryResultVenue", -1592932211},
    {"inlineQueryResultGame", 1706916987},
    {"inlineQueryResultAnimation", 2009984267},
    {"inlineQueryResultAudio", 842650360},
    {"inlineQueryResultDocument", -1491268539},
    {"inlineQueryResultPhoto", 1848319440},
    {"inlineQueryResultSticker", -1848224245},
    {"inlineQueryResultVideo", -1373158683},
    {"inlineQueryResultVoiceNote", -1897393105},
    {"inlineQueryResults", 1000709656},
    {"inputCredentialsSaved", -2034385364},
    {"inputCredentialsNew", -829689558},
    {"inputCredentialsAndroidPay", 1979566832},
    {"inputCredentialsApplePay", -1246570799},
    {"inputFileId", 1788906253},
    {"inputFileRemote", -107574466},
    {"inputFileLocal", 2056030919},
    {"inputFileGenerated", -1781351885},
    {"inputIdentityDocument", -381776063},
    {"inputInlineQueryResultAnimatedGif", -891474894},
    {"inputInlineQueryResultAnimatedMpeg4", -1629529888},
    {"inputInlineQueryResultArticle", 1973670156},
    {"inputInlineQueryResultAudio", 1260139988},
    {"inputInlineQueryResultContact", 1846064594},
    {"inputInlineQueryResultDocument", 578801869},
    {"inputInlineQueryResultGame", 966074327},
    {"inputInlineQueryResultLocation", -1887650218},
    {"inputInlineQueryResultPhoto", -1123338721},
    {"inputInlineQueryResultSticker", 274007129},
    {"inputInlineQueryResultVenue", 541704509},
    {"inputInlineQueryResultVideo", 1724073191},
    {"inputInlineQueryResultVoiceNote", -1790072503},
    {"inputMessageText", 247050392},
    {"inputMessageAnimation", 926542724},
    {"inputMessageAudio", -626786126},
    {"inputMessageDocument", 937970604},
    {"inputMessagePhoto", 1648801584},
    {"inputMessageSticker", 740776325},
    {"inputMessageVideo", -2108486755},
    {"inputMessageVideoNote", 279108859},
    {"inputMessageVoiceNote", 2136519657},
    {"inputMessageLocation", -1624179655},
    {"inputMessageVenue", 1447926269},
    {"inputMessageContact", -982446849},
    {"inputMessageGame", -1728000914},
    {"inputMessageInvoice", 1038812175},
    {"inputMessageForwarded", 1561363198},
    {"inputPassportElementPersonalDetails", 164791359},
    {"inputPassportElementPassport", -497011356},
    {"inputPassportElementDriverLicense", 304813264},
    {"inputPassportElementIdentityCard", -9963390},
    {"inputPassportElementInternalPassport", 715360043},
    {"inputPassportElementAddress", 461630480},
    {"inputPassportElementUtilityBill", 1389203841},
    {"inputPassportElementBankStatement", -26585208},
    {"inputPassportElementRentalAgreement", 1736154155},
    {"inputPassportElementPassportRegistration", 1314562128},
    {"inputPassportElementTemporaryRegistration", -1913238047},
    {"inputPassportElementPhoneNumber", 1319357497},
    {"inputPassportElementEmailAddress", -248605659},
    {"inputPassportElementError", 285756898},
    {"inputPassportElementErrorSourceUnspecified", 267230319},
    {"inputPassportElementErrorSourceDataField", -426795002},
    {"inputPassportElementErrorSourceFrontSide", 588023741},
    {"inputPassportElementErrorSourceReverseSide", 413072891},
    {"inputPassportElementErrorSourceSelfie", -773575528},
    {"inputPassportElementErrorSourceTranslationFile", 505842299},
    {"inputPassportElementErrorSourceTranslationFiles", -527254048},
    {"inputPassportElementErrorSourceFile", -298492469},
    {"inputPassportElementErrorSourceFiles", -2008541640},
    {"inputPersonalDocument", 1676966826},
    {"inputSticker", -1998602205},
    {"inputThumbnail", 1582387236},
    {"invoice", -368451690},
    {"keyboardButton", -2069836172},
    {"keyboardButtonTypeText", -1773037256},
    {"keyboardButtonTypeRequestPhoneNumber", -1529235527},
    {"keyboardButtonTypeRequestLocation", -125661955},
    {"labeledPricePart", 552789798},
    {"languagePackInfo", 1716484242},
    {"languagePackString", 1307632736},
    {"languagePackStringValueOrdinary", -249256352},
    {"languagePackStringValuePluralized", 1906840261},
    {"languagePackStringValueDeleted", 1834792698},
    {"languagePackStrings", 1172082922},
    {"linkStateNone", 951430287},
    {"linkStateKnowsPhoneNumber", 380898199},
    {"linkStateIsContact", -1000499465},
    {"localFile", 847939462},
    {"localizationTargetInfo", -2048670809},
    {"location", 749028016},
    {"maskPointForehead", 1027512005},
    {"maskPointEyes", 1748310861},
    {"maskPointMouth", 411773406},
    {"maskPointChin", 534995335},
    {"maskPosition", -2097433026},
    {"message", -675737627},
    {"messageText", 1989037971},
    {"messageAnimation", 1306939396},
    {"messageAudio", 276722716},
    {"messageDocument", 596945783},
    {"messagePhoto", -1851395174},
    {"messageExpiredPhoto", -1404641801},
    {"messageSticker", 1779022878},
    {"messageVideo", 2021281344},
    {"messageExpiredVideo", -1212209981},
    {"messageVideoNote", 963323014},
    {"messageVoiceNote", 527777781},
    {"messageLocation", -1301887786},
    {"messageVenue", -2146492043},
    {"messageContact", -512684966},
    {"messageGame", -69441162},
    {"messageInvoice", -1916671476},
    {"messageCall", 366512596},
    {"messageBasicGroupChatCreate", 1575377646},
    {"messageSupergroupChatCreate", -434325733},
    {"messageChatChangeTitle", 748272449},
    {"messageChatChangePhoto", 319630249},
    {"messageChatDeletePhoto", -184374809},
    {"messageChatAddMembers", 401228326},
    {"messageChatJoinByLink", 1846493311},
    {"messageChatDeleteMember", 1164414043},
    {"messageChatUpgradeTo", 1957816681},
    {"messageChatUpgradeFrom", 1642272558},
    {"messagePinMessage", 953503801},
    {"messageScreenshotTaken", -1564971605},
    {"messageChatSetTtl", 1810060209},
    {"messageCustomServiceAction", 1435879282},
    {"messageGameScore", 1344904575},
    {"messagePaymentSuccessful", -595962993},
    {"messagePaymentSuccessfulBot", -412310696},
    {"messageContactRegistered", -1502020353},
    {"messageWebsiteConnected", -1074551800},
    {"messagePassportDataSent", 1017405171},
    {"messagePassportDataReceived", -1367863624},
    {"messageUnsupported", -1816726139},
    {"messageForwardedFromUser", 1004332765},
    {"messageForwardedPost", -244050875},
    {"messageSendingStatePending", -1381803582},
    {"messageSendingStateFailed", -546610323},
    {"messages", -16498159},
    {"networkStatistics", 1615554212},
    {"networkStatisticsEntryFile", 188452706},
    {"networkStatisticsEntryCall", 737000365},
    {"networkTypeNone", -1971691759},
    {"networkTypeMobile", 819228239},
    {"networkTypeMobileRoaming", -1435199760},
    {"networkTypeWiFi", -633872070},
    {"networkTypeOther", 1942128539},
    {"notificationSettingsScopePrivateChats", 937446759},
    {"notificationSettingsScopeGroupChats", 1212142067},
    {"ok", -722616727},
    {"optionValueBoolean", 63135518},
    {"optionValueEmpty", 918955155},
    {"optionValueInteger", -1400911104},
    {"optionValueString", 756248212},
    {"orderInfo", 783997294},
    {"pageBlockTitle", 1629664784},
    {"pageBlockSubtitle", 264524263},
    {"pageBlockAuthorDate", 1300231184},
    {"pageBlockHeader", 1402854811},
    {"pageBlockSubheader", 1263956774},
    {"pageBlockParagraph", 1182402406},
    {"pageBlockPreformatted", -1066346178},
    {"pageBlockFooter", 886429480},
    {"pageBlockDivider", -618614392},
    {"pageBlockAnchor", -837994576},
    {"pageBlockList", -1752631674},
    {"pageBlockBlockQuote", -37421406},
    {"pageBlockPullQuote", -1799498665},
    {"pageBlockAnimation", 1639478661},
    {"pageBlockAudio", 1898245855},
    {"pageBlockPhoto", -637181825},
    {"pageBlockVideo", 1610373002},
    {"pageBlockCover", 972174080},
    {"pageBlockEmbedded", -211257334},
    {"pageBlockEmbeddedPost", 1049948772},
    {"pageBlockCollage", 911142202},
    {"pageBlockSlideshow", 178557514},
    {"pageBlockChatLink", 214606645},
    {"passportAuthorizationForm", -1780995944},
    {"passportElementPersonalDetails", 1217724035},
    {"passportElementPassport", -263985373},
    {"passportElementDriverLicense", 1643580589},
    {"passportElementIdentityCard", 2083775797},
    {"passportElementInternalPassport", 36220295},
    {"passportElementAddress", -782625232},
    {"passportElementUtilityBill", -234611246},
    {"passportElementBankStatement", -366464408},
    {"passportElementRentalAgreement", -290141400},
    {"passportElementPassportRegistration", 618323071},
    {"passportElementTemporaryRegistration", 1237626864},
    {"passportElementPhoneNumber", -1320118375},
    {"passportElementEmailAddress", -1528129531},
    {"passportElementError", -1861902395},
    {"passportElementErrorSourceUnspecified", -378320830},
    {"passportElementErrorSourceDataField", -308650776},
    {"passportElementErrorSourceFrontSide", 1895658292},
    {"passportElementErrorSourceReverseSide", 1918630391},
    {"passportElementErrorSourceSelfie", -797043672},
    {"passportElementErrorSourceTranslationFile", -643919323},
    {"passportElementErrorSourceTranslationFiles", 581280796},
    {"passportElementErrorSourceFile", -226596202},
    {"passportElementErrorSourceFiles", 1894164178},
    {"passportElementTypePersonalDetails", -1032136365},
    {"passportElementTypePassport", -436360376},
    {"passportElementTypeDriverLicense", 1827298379},
    {"passportElementTypeIdentityCard", -502356132},
    {"passportElementTypeInternalPassport", -793781959},
    {"passportElementTypeAddress", 496327874},
    {"passportElementTypeUtilityBill", 627084906},
    {"passportElementTypeBankStatement", 574095667},
    {"passportElementTypeRentalAgreement", -2060583280},
    {"passportElementTypePassportRegistration", -159478209},
    {"passportElementTypeTemporaryRegistration", 1092498527},
    {"passportElementTypePhoneNumber", -995361172},
    {"passportElementTypeEmailAddress", -79321405},
    {"passportElements", 1264617556},
    {"passportRequiredElement", -1983641651},
    {"passportSuitableElement", -789019876},
    {"passwordState", -1209872059},
    {"paymentForm", -200418230},
    {"paymentReceipt", -1171223545},
    {"paymentResult", -804263843},
    {"paymentsProviderStripe", 1090791032},
    {"personalDetails", -1061656137},
    {"personalDocument", -1011634661},
    {"photo", -1949521787},
    {"photoSize", 421980227},
    {"profilePhoto", 978085937},
    {"proxies", 1200447205},
    {"proxy", 196049779},
    {"proxyTypeSocks5", -890027341},
    {"proxyTypeHttp", -1547188361},
    {"proxyTypeMtproto", -1964826627},
    {"publicMessageLink", -679603433},
    {"recoveryEmailAddress", 1290526187},
    {"remoteFile", 1761289748},
    {"replyMarkupRemoveKeyboard", -691252879},
    {"replyMarkupForceReply", 1039104593},
    {"replyMarkupShowKeyboard", -992627133},
    {"replyMarkupInlineKeyboard", -619317658},
    {"richTextPlain", 482617702},
    {"richTextBold", 1670844268},
    {"richTextItalic", 1853354047},
    {"richTextUnderline", -536019572},
    {"richTextStrikethrough", 723413585},
    {"richTextFixed", -1271496249},
    {"richTextUrl", 1967248447},
    {"richTextEmailAddress", 40018679},
    {"richTexts", 1647457821},
    {"savedCredentials", -370273060},
    {"scopeNotificationSettings", 607439283},
    {"searchMessagesFilterEmpty", -869395657},
    {"searchMessagesFilterAnimation", -155713339},
    {"searchMessagesFilterAudio", 867505275},
    {"searchMessagesFilterDocument", 1526331215},
    {"searchMessagesFilterPhoto", 925932293},
    {"searchMessagesFilterVideo", 115538222},
    {"searchMessagesFilterVoiceNote", 1841439357},
    {"searchMessagesFilterPhotoAndVideo", 1352130963},
    {"searchMessagesFilterUrl", -1828724341},
    {"searchMessagesFilterChatPhoto", -1247751329},
    {"searchMessagesFilterCall", 1305231012},
    {"searchMessagesFilterMissedCall", 970663098},
    {"searchMessagesFilterVideoNote", 564323321},
    {"searchMessagesFilterVoiceAndVideoNote", 664174819},
    {"searchMessagesFilterMention", 2001258652},
    {"searchMessagesFilterUnreadMention", -95769149},
    {"seconds", 959899022},
    {"secretChat", 1279231629},
    {"secretChatStatePending", -1637050756},
    {"secretChatStateReady", -1611352087},
    {"secretChatStateClosed", -1945106707},
    {"session", 1715359000},
    {"sessions", -463118121},
    {"shippingOption", 1425690001},
    {"sticker", -876442962},
    {"stickerEmojis", -1781588570},
    {"stickerSet", 72047469},
    {"stickerSetInfo", 1469837113},
    {"stickerSets", -1883828812},
    {"stickers", 1974859260},
    {"storageStatistics", 217237013},
    {"storageStatisticsByChat", 635434531},
    {"storageStatisticsByFileType", 714012840},
    {"storageStatisticsFast", -2005401007},
    {"supergroup", -1737513476},
    {"supergroupFullInfo", -1482349223},
    {"supergroupMembersFilterRecent", 1178199509},
    {"supergroupMembersFilterAdministrators", -2097380265},
    {"supergroupMembersFilterSearch", -1696358469},
    {"supergroupMembersFilterRestricted", -1107800034},
    {"supergroupMembersFilterBanned", -1210621683},
    {"supergroupMembersFilterBots", 492138918},
    {"tMeUrl", -1140786622},
    {"tMeUrlTypeUser", -1198700130},
    {"tMeUrlTypeSupergroup", -1353369944},
    {"tMeUrlTypeChatInvite", 313907785},
    {"tMeUrlTypeStickerSet", 1602473196},
    {"tMeUrls", -1130595098},
    {"tdlibParameters", -761520773},
    {"temporaryPasswordState", 939837410},
    {"termsOfService", 739422597},
    {"testBytes", -1541225250},
    {"testInt", -574804983},
    {"testString", -27891572},
    {"testVectorInt", 593682027},
    {"testVectorIntObject", 125891546},
    {"testVectorString", 79339995},
    {"testVectorStringObject", 80780537},
    {"text", 578181272},
    {"textEntities", -933199172},
    {"textEntity", -1951688280},
    {"textEntityTypeMention", 934535013},
    {"textEntityTypeHashtag", -1023958307},
    {"textEntityTypeCashtag", 1222915915},
    {"textEntityTypeBotCommand", -1150997581},
    {"textEntityTypeUrl", -1312762756},
    {"textEntityTypeEmailAddress", 1425545249},
    {"textEntityTypeBold", -1128210000},
    {"textEntityTypeItalic", -118253987},
    {"textEntityTypeCode", -974534326},
    {"textEntityTypePre", 1648958606},
    {"textEntityTypePreCode", -945325397},
    {"textEntityTypeTextUrl", 445719651},
    {"textEntityTypeMentionName", -791517091},
    {"textEntityTypePhoneNumber", -1160140246},
    {"textParseModeMarkdown", 969225580},
    {"textParseModeHTML", 1660208627},
    {"topChatCategoryUsers", 1026706816},
    {"topChatCategoryBots", -1577129195},
    {"topChatCategoryGroups", 1530056846},
    {"topChatCategoryChannels", -500825885},
    {"topChatCategoryInlineBots", 377023356},
    {"topChatCategoryCalls", 356208861},
    {"updateAuthorizationState", 1622347490},
    {"updateNewMessage", 238944219},
    {"updateMessageSendAcknowledged", 1302843961},
    {"updateMessageSendSucceeded", 1815715197},
    {"updateMessageSendFailed", -1032335779},
    {"updateMessageContent", 506903332},
    {"updateMessageEdited", -559545626},
    {"updateMessageViews", -1854131125},
    {"updateMessageContentOpened", -1520523131},
    {"updateMessageMentionRead", -252228282},
    {"updateNewChat", 2075757773},
    {"updateChatTitle", -175405660},
    {"updateChatPhoto", -209353966},
    {"updateChatLastMessage", 580348828},
    {"updateChatOrder", -1601888026},
    {"updateChatIsPinned", 488876260},
    {"updateChatIsMarkedAsUnread", 1468347188},
    {"updateChatIsSponsored", -1196180070},
    {"updateChatDefaultDisableNotification", 464087707},
    {"updateChatReadInbox", -797952281},
    {"updateChatReadOutbox", 708334213},
    {"updateChatUnreadMentionCount", -2131461348},
    {"updateChatNotificationSettings", -803163050},
    {"updateScopeNotificationSettings", -1203975309},
    {"updateChatReplyMarkup", 1309386144},
    {"updateChatDraftMessage", -1436617498},
    {"updateDeleteMessages", 1669252686},
    {"updateUserChatAction", 1444133514},
    {"updateUserStatus", -1443545195},
    {"updateUser", 1183394041},
    {"updateBasicGroup", -1003239581},
    {"updateSupergroup", -76782300},
    {"updateSecretChat", -1666903253},
    {"updateUserFullInfo", 222103874},
    {"updateBasicGroupFullInfo", 924030531},
    {"updateSupergroupFullInfo", 1288828758},
    {"updateServiceNotification", 1318622637},
    {"updateFile", 114132831},
    {"updateFileGenerationStart", 216817388},
    {"updateFileGenerationStop", -1894449685},
    {"updateCall", 1337184477},
    {"updateUserPrivacySettingRules", -912960778},
    {"updateUnreadMessageCount", -824420376},
    {"updateUnreadChatCount", 891150304},
    {"updateOption", 900822020},
    {"updateInstalledStickerSets", 1125575977},
    {"updateTrendingStickerSets", 450714593},
    {"updateRecentStickers", 1906403540},
    {"updateFavoriteStickers", 1662240999},
    {"updateSavedAnimations", 65563814},
    {"updateLanguagePackStrings", -1056319886},
    {"updateConnectionState", 1469292078},
    {"updateTermsOfService", -1304640162},
    {"updateNewInlineQuery", 2064730634},
    {"updateNewChosenInlineResult", 527526965},
    {"updateNewCallbackQuery", -2044226370},
    {"updateNewInlineCallbackQuery", -1879154829},
    {"updateNewShippingQuery", -817474682},
    {"updateNewPreCheckoutQuery", 87964006},
    {"updateNewCustomEvent", 1994222092},
    {"updateNewCustomQuery", -687670874},
    {"user", -732086407},
    {"userFullInfo", 1076948004},
    {"userPrivacySettingShowStatus", 1862829310},
    {"userPrivacySettingAllowChatInvites", 1271668007},
    {"userPrivacySettingAllowCalls", -906967291},
    {"userPrivacySettingRuleAllowAll", -1967186881},
    {"userPrivacySettingRuleAllowContacts", -1892733680},
    {"userPrivacySettingRuleAllowUsers", 427601278},
    {"userPrivacySettingRuleRestrictAll", -1406495408},
    {"userPrivacySettingRuleRestrictContacts", 1008389378},
    {"userPrivacySettingRuleRestrictUsers", 2119951802},
    {"userPrivacySettingRules", 322477541},
    {"userProfilePhotos", 1388892074},
    {"userStatusEmpty", 164646985},
    {"userStatusOnline", -1529460876},
    {"userStatusOffline", -759984891},
    {"userStatusRecently", -496024847},
    {"userStatusLastWeek", 129960444},
    {"userStatusLastMonth", 2011940674},
    {"userTypeRegular", -598644325},
    {"userTypeDeleted", -1807729372},
    {"userTypeBot", 1262387765},
    {"userTypeUnknown", -724541123},
    {"users", 273760088},
    {"validatedOrderInfo", 1511451484},
    {"venue", 1070406393},
    {"video", -437410347},
    {"videoNote", -1177396120},
    {"voiceNote", -2066012058},
    {"wallpaper", 282771691},
    {"wallpapers", 877926640},
    {"webPage", 1465949075},
    {"webPageInstantView", 1804324850}
  };
  auto it = m.find(str);
  if (it == m.end()) {
    return Status::Error("Unknown class");
  }
  return it->second;
}
Result<int32> tl_constructor_from_string(td_api::Function *object, const std::string &str) {
  static const std::unordered_map<Slice, int32, SliceHash> m = {
    {"acceptCall", -646618416},
    {"acceptTermsOfService", 2130576356},
    {"addChatMember", 1182817962},
    {"addChatMembers", 1234094617},
    {"addFavoriteSticker", 324504799},
    {"addLocalMessage", -348943149},
    {"addNetworkStatistics", 1264825305},
    {"addProxy", 331529432},
    {"addRecentSticker", -1478109026},
    {"addRecentlyFoundChat", -1746396787},
    {"addSavedAnimation", -1538525088},
    {"addStickerToSet", 1422402800},
    {"answerCallbackQuery", -1153028490},
    {"answerCustomQuery", -1293603521},
    {"answerInlineQuery", 485879477},
    {"answerPreCheckoutQuery", -1486789653},
    {"answerShippingQuery", -434601324},
    {"blockUser", -1239315139},
    {"cancelDownloadFile", -1954524450},
    {"cancelUploadFile", 1623539600},
    {"changeChatReportSpamState", 1768597097},
    {"changeImportedContacts", 1968207955},
    {"changePhoneNumber", -1510625218},
    {"changeStickerSet", 449357293},
    {"checkAuthenticationBotToken", 639321206},
    {"checkAuthenticationCode", -707293555},
    {"checkAuthenticationPassword", -2025698400},
    {"checkChangePhoneNumberCode", -1720278429},
    {"checkChatInviteLink", -496940997},
    {"checkChatUsername", -2003506154},
    {"checkDatabaseEncryptionKey", 1018769307},
    {"checkEmailAddressVerificationCode", -426386685},
    {"checkPhoneNumberConfirmationCode", -1348060966},
    {"checkPhoneNumberVerificationCode", 1497462718},
    {"cleanFileName", 967964667},
    {"clearAllDraftMessages", -46369573},
    {"clearImportedContacts", 869503298},
    {"clearRecentStickers", -321242684},
    {"clearRecentlyFoundChats", -285582542},
    {"close", -1187782273},
    {"closeChat", 39749353},
    {"closeSecretChat", -471006133},
    {"createBasicGroupChat", 642492777},
    {"createCall", -1742408159},
    {"createNewBasicGroupChat", 1874532069},
    {"createNewSecretChat", 1689344881},
    {"createNewStickerSet", 205093058},
    {"createNewSupergroupChat", 1284982268},
    {"createPrivateChat", -1807530364},
    {"createSecretChat", 1930285615},
    {"createSupergroupChat", 352742758},
    {"createTemporaryPassword", -1626509434},
    {"deleteAccount", -1203056508},
    {"deleteChatHistory", -1384632722},
    {"deleteChatMessagesFromUser", -1599689199},
    {"deleteChatReplyMarkup", 100637531},
    {"deleteFile", 1807653676},
    {"deleteLanguagePack", -2108761026},
    {"deleteMessages", 1130090173},
    {"deletePassportElement", -1719555468},
    {"deleteProfilePhoto", 1319794625},
    {"deleteSavedCredentials", 826300114},
    {"deleteSavedOrderInfo", 1629058164},
    {"deleteSupergroup", -1999855965},
    {"destroy", 685331274},
    {"disableProxy", -2100095102},
    {"discardCall", -923187372},
    {"disconnectAllWebsites", -1082985981},
    {"disconnectWebsite", -778767395},
    {"downloadFile", 1531851978},
    {"editCustomLanguagePackInfo", 1320751257},
    {"editInlineMessageCaption", -760985929},
    {"editInlineMessageLiveLocation", 655046316},
    {"editInlineMessageMedia", 23553921},
    {"editInlineMessageReplyMarkup", -67565858},
    {"editInlineMessageText", -855457307},
    {"editMessageCaption", 1154677038},
    {"editMessageLiveLocation", -1146772745},
    {"editMessageMedia", -1152678125},
    {"editMessageReplyMarkup", 332127881},
    {"editMessageText", 196272567},
    {"editProxy", -1605883821},
    {"enableProxy", 1494450838},
    {"finishFileGeneration", -1055060835},
    {"forwardMessages", -537573308},
    {"generateChatInviteLink", 1945532500},
    {"getAccountTtl", -443905161},
    {"getActiveLiveLocationMessages", -1425459567},
    {"getActiveSessions", 1119710526},
    {"getAllPassportElements", -2038945045},
    {"getArchivedStickerSets", 1996943238},
    {"getAttachedStickerSets", 1302172429},
    {"getAuthorizationState", 1949154877},
    {"getBasicGroup", 561775568},
    {"getBasicGroupFullInfo", 1770517905},
    {"getBlockedUsers", -742912777},
    {"getCallbackQueryAnswer", 116357727},
    {"getChat", 1866601536},
    {"getChatAdministrators", 508231041},
    {"getChatEventLog", 206900967},
    {"getChatHistory", -799960451},
    {"getChatMember", 677085892},
    {"getChatMessageByDate", 1062564150},
    {"getChatMessageCount", 205435308},
    {"getChatPinnedMessage", 359865008},
    {"getChatReportSpamState", -748866856},
    {"getChats", -2121381601},
    {"getConnectedWebsites", -170536110},
    {"getContacts", -1417722768},
    {"getCountryCode", 1540593906},
    {"getCreatedPublicChats", 1609082914},
    {"getDeepLinkInfo", 680673150},
    {"getFavoriteStickers", -338964672},
    {"getFile", 1553923406},
    {"getFileExtension", -106055372},
    {"getFileMimeType", -2073879671},
    {"getGameHighScores", 1920923753},
    {"getGroupsInCommon", -23238689},
    {"getImportedContactCount", -656336346},
    {"getInlineGameHighScores", -1833445800},
    {"getInlineQueryResults", -1182511172},
    {"getInstalledStickerSets", 1214523749},
    {"getInviteText", 794573512},
    {"getLanguagePackString", 150789747},
    {"getLanguagePackStrings", 1246259088},
    {"getLocalizationTargetInfo", 1849499526},
    {"getMapThumbnailFile", -152660070},
    {"getMe", -191516033},
    {"getMessage", -1821196160},
    {"getMessages", 425299338},
    {"getNetworkStatistics", -986228706},
    {"getOption", -1572495746},
    {"getPassportAuthorizationForm", 1998294216},
    {"getPassportElement", -1882398342},
    {"getPasswordState", -174752904},
    {"getPaymentForm", -2146950882},
    {"getPaymentReceipt", 1013758294},
    {"getPreferredCountryLanguage", -933049386},
    {"getProxies", -95026381},
    {"getProxyLink", -1285597664},
    {"getPublicMessageLink", -374642839},
    {"getRecentInlineBots", 1437823548},
    {"getRecentStickers", -579622241},
    {"getRecentlyVisitedTMeUrls", 806754961},
    {"getRecoveryEmailAddress", -1594770947},
    {"getRemoteFile", 2137204530},
    {"getRepliedMessage", -641918531},
    {"getSavedAnimations", 7051032},
    {"getSavedOrderInfo", -1152016675},
    {"getScopeNotificationSettings", -995613361},
    {"getSecretChat", 40599169},
    {"getStickerEmojis", 95352475},
    {"getStickerSet", 1052318659},
    {"getStickers", -1594919556},
    {"getStorageStatistics", -853193929},
    {"getStorageStatisticsFast", 61368066},
    {"getSupergroup", -2063063706},
    {"getSupergroupFullInfo", -1150331262},
    {"getSupergroupMembers", 1427643098},
    {"getSupportUser", -1733497700},
    {"getTemporaryPasswordState", -12670830},
    {"getTextEntities", -341490693},
    {"getTopChats", -388410847},
    {"getTrendingStickerSets", -1729129957},
    {"getUser", -47586017},
    {"getUserFullInfo", -655443263},
    {"getUserPrivacySettingRules", -2077223311},
    {"getUserProfilePhotos", -2062927433},
    {"getWallpapers", 2097518555},
    {"getWebPageInstantView", -1962649975},
    {"getWebPagePreview", 573441580},
    {"importContacts", -215132767},
    {"joinChat", 326769313},
    {"joinChatByInviteLink", -1049973882},
    {"leaveChat", -1825080735},
    {"logOut", -1581923301},
    {"openChat", -323371509},
    {"openMessageContent", -739088005},
    {"optimizeStorage", 980397489},
    {"parseTextEntities", -1709194593},
    {"pinSupergroupMessage", 1141187557},
    {"pingProxy", -979681103},
    {"processDcUpdate", -1806562997},
    {"readAllChatMentions", 1357558453},
    {"recoverAuthenticationPassword", 787436412},
    {"recoverPassword", 1660185903},
    {"registerDevice", -413637293},
    {"removeContacts", -615510759},
    {"removeFavoriteSticker", 1152945264},
    {"removeProxy", 1369219847},
    {"removeRecentHashtag", -1013735260},
    {"removeRecentSticker", 1246577677},
    {"removeRecentlyFoundChat", 717340444},
    {"removeSavedAnimation", -495605479},
    {"removeStickerFromSet", 1642196644},
    {"removeTopChat", -1907876267},
    {"reorderInstalledStickerSets", 1114537563},
    {"reportChat", -312579772},
    {"reportSupergroupSpam", -2125451498},
    {"requestAuthenticationPasswordRecovery", 1393896118},
    {"requestPasswordRecovery", -13777582},
    {"resendAuthenticationCode", -814377191},
    {"resendChangePhoneNumberCode", -786772060},
    {"resendEmailAddressVerificationCode", -1872416732},
    {"resendPhoneNumberConfirmationCode", 2069068522},
    {"resendPhoneNumberVerificationCode", 1367629820},
    {"resetAllNotificationSettings", -174020359},
    {"resetNetworkStatistics", 1646452102},
    {"searchCallMessages", -1077230820},
    {"searchChatMembers", -445823291},
    {"searchChatMessages", -1528846671},
    {"searchChatRecentLocationMessages", 950238950},
    {"searchChats", -1879787060},
    {"searchChatsOnServer", -1158402188},
    {"searchContacts", -1794690715},
    {"searchHashtags", 1043637617},
    {"searchInstalledStickerSets", 681171344},
    {"searchMessages", 1579305146},
    {"searchPublicChat", 857135533},
    {"searchPublicChats", 970385337},
    {"searchSecretMessages", -1670627915},
    {"searchStickerSet", 1157930222},
    {"searchStickerSets", -1082314629},
    {"searchStickers", 1555771203},
    {"sendBotStartMessage", 1112181339},
    {"sendCallDebugInformation", 2019243839},
    {"sendCallRating", 243075146},
    {"sendChatAction", -841357536},
    {"sendChatScreenshotTakenNotification", 448399457},
    {"sendChatSetTtlMessage", 1432535564},
    {"sendCustomRequest", 285045153},
    {"sendEmailAddressVerificationCode", -221621379},
    {"sendInlineQueryResultMessage", -643910868},
    {"sendMessage", 1694632114},
    {"sendMessageAlbum", -291823014},
    {"sendPassportAuthorizationForm", -602402218},
    {"sendPaymentForm", 591581572},
    {"sendPhoneNumberConfirmationCode", 1975492794},
    {"sendPhoneNumberVerificationCode", -280632685},
    {"setAccountTtl", 701389032},
    {"setAlarm", -873497067},
    {"setAuthenticationPhoneNumber", -856055465},
    {"setBio", -1619582124},
    {"setBotUpdatesStatus", -1154926191},
    {"setChatClientData", -827119811},
    {"setChatDraftMessage", -588175579},
    {"setChatMemberStatus", -1754439241},
    {"setChatNotificationSettings", 777199614},
    {"setChatPhoto", 132244217},
    {"setChatTitle", 164282047},
    {"setCustomLanguagePack", -296742819},
    {"setCustomLanguagePackString", 1316365592},
    {"setDatabaseEncryptionKey", -1204599371},
    {"setFileGenerationProgress", -540459953},
    {"setGameScore", -1768307069},
    {"setInlineGameScore", 758435487},
    {"setName", 1711693584},
    {"setNetworkType", -701635234},
    {"setOption", 2114670322},
    {"setPassportElement", 2068173212},
    {"setPassportElementErrors", 1455869875},
    {"setPassword", -1193589027},
    {"setPinnedChats", -1369665719},
    {"setProfilePhoto", 1594734550},
    {"setRecoveryEmailAddress", -1981836385},
    {"setScopeNotificationSettings", -2049984966},
    {"setStickerPositionInSet", 2075281185},
    {"setSupergroupDescription", 227623488},
    {"setSupergroupStickerSet", -295782298},
    {"setSupergroupUsername", -1428333122},
    {"setTdlibParameters", -1912557997},
    {"setUserPrivacySettingRules", -473812741},
    {"setUsername", 439901214},
    {"terminateAllOtherSessions", 1874485523},
    {"terminateSession", -407385812},
    {"testCallBytes", -736011607},
    {"testCallEmpty", -627291626},
    {"testCallString", -1732818385},
    {"testCallVectorInt", -2137277793},
    {"testCallVectorIntObject", 1825428218},
    {"testCallVectorString", -408600900},
    {"testCallVectorStringObject", 1527666429},
    {"testGetDifference", 1747084069},
    {"testNetwork", -1343998901},
    {"testSquareInt", -60135024},
    {"testUseError", 528842186},
    {"testUseUpdate", 717094686},
    {"toggleBasicGroupAdministrators", -591395611},
    {"toggleChatDefaultDisableNotification", 314794002},
    {"toggleChatIsMarkedAsUnread", -986129697},
    {"toggleChatIsPinned", -1166802621},
    {"toggleSupergroupInvites", -797384141},
    {"toggleSupergroupIsAllHistoryAvailable", 1701526555},
    {"toggleSupergroupSignMessages", -558196581},
    {"unblockUser", -307286367},
    {"unpinSupergroupMessage", -1987029530},
    {"upgradeBasicGroupChatToSupergroupChat", 300488122},
    {"uploadFile", -745597786},
    {"uploadStickerFile", 1134087551},
    {"validateOrderInfo", 9480644},
    {"viewMessages", -1925784915},
    {"viewTrendingStickerSets", -952416520}
  };
  auto it = m.find(str);
  if (it == m.end()) {
    return Status::Error("Unknown class");
  }
  return it->second;
}
Status from_json(td_api::accountTtl &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "days", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.days_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::address &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "country_code", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.country_code_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "state", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.state_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "city", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.city_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "street_line1", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.street_line1_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "street_line2", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.street_line2_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "postal_code", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.postal_code_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::animation &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "duration", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.duration_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "width", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.width_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "height", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.height_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "file_name", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.file_name_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "mime_type", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.mime_type_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "thumbnail", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.thumbnail_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "animation", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.animation_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::animations &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "animations", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.animations_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::audio &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "duration", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.duration_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "title", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.title_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "performer", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.performer_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "file_name", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.file_name_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "mime_type", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.mime_type_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "album_cover_thumbnail", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.album_cover_thumbnail_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "audio", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.audio_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::authenticationCodeInfo &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "phone_number", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.phone_number_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "type", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.type_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "next_type", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.next_type_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "timeout", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.timeout_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::authenticationCodeTypeTelegramMessage &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "length", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.length_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::authenticationCodeTypeSms &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "length", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.length_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::authenticationCodeTypeCall &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "length", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.length_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::authenticationCodeTypeFlashCall &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "pattern", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.pattern_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::authorizationStateWaitTdlibParameters &to, JsonObject &from) {
  return Status::OK();
}
Status from_json(td_api::authorizationStateWaitEncryptionKey &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "is_encrypted", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.is_encrypted_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::authorizationStateWaitPhoneNumber &to, JsonObject &from) {
  return Status::OK();
}
Status from_json(td_api::authorizationStateWaitCode &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "is_registered", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.is_registered_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "terms_of_service", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.terms_of_service_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "code_info", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.code_info_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::authorizationStateWaitPassword &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "password_hint", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.password_hint_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "has_recovery_email_address", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.has_recovery_email_address_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "recovery_email_address_pattern", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.recovery_email_address_pattern_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::authorizationStateReady &to, JsonObject &from) {
  return Status::OK();
}
Status from_json(td_api::authorizationStateLoggingOut &to, JsonObject &from) {
  return Status::OK();
}
Status from_json(td_api::authorizationStateClosing &to, JsonObject &from) {
  return Status::OK();
}
Status from_json(td_api::authorizationStateClosed &to, JsonObject &from) {
  return Status::OK();
}
Status from_json(td_api::basicGroup &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "member_count", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.member_count_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "status", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.status_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "everyone_is_administrator", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.everyone_is_administrator_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "is_active", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.is_active_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "upgraded_to_supergroup_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.upgraded_to_supergroup_id_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::basicGroupFullInfo &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "creator_user_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.creator_user_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "members", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.members_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "invite_link", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.invite_link_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::botCommand &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "command", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.command_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "description", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.description_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::botInfo &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "description", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.description_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "commands", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.commands_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::call &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "user_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.user_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "is_outgoing", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.is_outgoing_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "state", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.state_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::callConnection &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "ip", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.ip_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "ipv6", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.ipv6_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "port", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.port_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "peer_tag", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json_bytes(to.peer_tag_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::callDiscardReasonEmpty &to, JsonObject &from) {
  return Status::OK();
}
Status from_json(td_api::callDiscardReasonMissed &to, JsonObject &from) {
  return Status::OK();
}
Status from_json(td_api::callDiscardReasonDeclined &to, JsonObject &from) {
  return Status::OK();
}
Status from_json(td_api::callDiscardReasonDisconnected &to, JsonObject &from) {
  return Status::OK();
}
Status from_json(td_api::callDiscardReasonHungUp &to, JsonObject &from) {
  return Status::OK();
}
Status from_json(td_api::callId &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.id_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::callProtocol &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "udp_p2p", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.udp_p2p_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "udp_reflector", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.udp_reflector_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "min_layer", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.min_layer_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "max_layer", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.max_layer_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::callStatePending &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "is_created", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.is_created_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "is_received", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.is_received_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::callStateExchangingKeys &to, JsonObject &from) {
  return Status::OK();
}
Status from_json(td_api::callStateReady &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "protocol", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.protocol_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "connections", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.connections_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "config", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.config_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "encryption_key", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json_bytes(to.encryption_key_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "emojis", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.emojis_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::callStateHangingUp &to, JsonObject &from) {
  return Status::OK();
}
Status from_json(td_api::callStateDiscarded &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "reason", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.reason_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "need_rating", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.need_rating_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "need_debug_information", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.need_debug_information_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::callStateError &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "error", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.error_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::callbackQueryAnswer &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "text", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.text_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "show_alert", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.show_alert_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "url", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.url_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::callbackQueryPayloadData &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "data", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json_bytes(to.data_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::callbackQueryPayloadGame &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "game_short_name", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.game_short_name_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::chat &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "type", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.type_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "title", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.title_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "photo", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.photo_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "last_message", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.last_message_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "order", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.order_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "is_pinned", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.is_pinned_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "is_marked_as_unread", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.is_marked_as_unread_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "is_sponsored", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.is_sponsored_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "can_be_reported", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.can_be_reported_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "default_disable_notification", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.default_disable_notification_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "unread_count", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.unread_count_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "last_read_inbox_message_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.last_read_inbox_message_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "last_read_outbox_message_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.last_read_outbox_message_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "unread_mention_count", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.unread_mention_count_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "notification_settings", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.notification_settings_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "reply_markup_message_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.reply_markup_message_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "draft_message", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.draft_message_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "client_data", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.client_data_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::chatActionTyping &to, JsonObject &from) {
  return Status::OK();
}
Status from_json(td_api::chatActionRecordingVideo &to, JsonObject &from) {
  return Status::OK();
}
Status from_json(td_api::chatActionUploadingVideo &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "progress", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.progress_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::chatActionRecordingVoiceNote &to, JsonObject &from) {
  return Status::OK();
}
Status from_json(td_api::chatActionUploadingVoiceNote &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "progress", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.progress_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::chatActionUploadingPhoto &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "progress", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.progress_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::chatActionUploadingDocument &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "progress", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.progress_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::chatActionChoosingLocation &to, JsonObject &from) {
  return Status::OK();
}
Status from_json(td_api::chatActionChoosingContact &to, JsonObject &from) {
  return Status::OK();
}
Status from_json(td_api::chatActionStartPlayingGame &to, JsonObject &from) {
  return Status::OK();
}
Status from_json(td_api::chatActionRecordingVideoNote &to, JsonObject &from) {
  return Status::OK();
}
Status from_json(td_api::chatActionUploadingVideoNote &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "progress", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.progress_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::chatActionCancel &to, JsonObject &from) {
  return Status::OK();
}
Status from_json(td_api::chatEvent &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "date", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.date_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "user_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.user_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "action", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.action_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::chatEventMessageEdited &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "old_message", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.old_message_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "new_message", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.new_message_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::chatEventMessageDeleted &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "message", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.message_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::chatEventMessagePinned &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "message", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.message_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::chatEventMessageUnpinned &to, JsonObject &from) {
  return Status::OK();
}
Status from_json(td_api::chatEventMemberJoined &to, JsonObject &from) {
  return Status::OK();
}
Status from_json(td_api::chatEventMemberLeft &to, JsonObject &from) {
  return Status::OK();
}
Status from_json(td_api::chatEventMemberInvited &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "user_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.user_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "status", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.status_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::chatEventMemberPromoted &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "user_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.user_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "old_status", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.old_status_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "new_status", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.new_status_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::chatEventMemberRestricted &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "user_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.user_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "old_status", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.old_status_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "new_status", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.new_status_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::chatEventTitleChanged &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "old_title", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.old_title_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "new_title", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.new_title_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::chatEventDescriptionChanged &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "old_description", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.old_description_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "new_description", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.new_description_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::chatEventUsernameChanged &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "old_username", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.old_username_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "new_username", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.new_username_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::chatEventPhotoChanged &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "old_photo", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.old_photo_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "new_photo", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.new_photo_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::chatEventInvitesToggled &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "anyone_can_invite", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.anyone_can_invite_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::chatEventSignMessagesToggled &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "sign_messages", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.sign_messages_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::chatEventStickerSetChanged &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "old_sticker_set_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.old_sticker_set_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "new_sticker_set_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.new_sticker_set_id_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::chatEventIsAllHistoryAvailableToggled &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "is_all_history_available", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.is_all_history_available_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::chatEventLogFilters &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "message_edits", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.message_edits_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "message_deletions", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.message_deletions_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "message_pins", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.message_pins_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "member_joins", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.member_joins_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "member_leaves", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.member_leaves_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "member_invites", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.member_invites_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "member_promotions", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.member_promotions_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "member_restrictions", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.member_restrictions_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "info_changes", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.info_changes_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "setting_changes", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.setting_changes_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::chatEvents &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "events", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.events_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::chatInviteLink &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "invite_link", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.invite_link_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::chatInviteLinkInfo &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "chat_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.chat_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "type", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.type_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "title", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.title_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "photo", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.photo_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "member_count", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.member_count_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "member_user_ids", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.member_user_ids_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "is_public", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.is_public_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::chatMember &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "user_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.user_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "inviter_user_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.inviter_user_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "joined_chat_date", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.joined_chat_date_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "status", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.status_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "bot_info", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.bot_info_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::chatMemberStatusCreator &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "is_member", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.is_member_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::chatMemberStatusAdministrator &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "can_be_edited", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.can_be_edited_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "can_change_info", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.can_change_info_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "can_post_messages", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.can_post_messages_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "can_edit_messages", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.can_edit_messages_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "can_delete_messages", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.can_delete_messages_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "can_invite_users", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.can_invite_users_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "can_restrict_members", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.can_restrict_members_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "can_pin_messages", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.can_pin_messages_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "can_promote_members", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.can_promote_members_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::chatMemberStatusMember &to, JsonObject &from) {
  return Status::OK();
}
Status from_json(td_api::chatMemberStatusRestricted &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "is_member", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.is_member_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "restricted_until_date", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.restricted_until_date_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "can_send_messages", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.can_send_messages_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "can_send_media_messages", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.can_send_media_messages_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "can_send_other_messages", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.can_send_other_messages_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "can_add_web_page_previews", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.can_add_web_page_previews_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::chatMemberStatusLeft &to, JsonObject &from) {
  return Status::OK();
}
Status from_json(td_api::chatMemberStatusBanned &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "banned_until_date", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.banned_until_date_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::chatMembers &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "total_count", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.total_count_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "members", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.members_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::chatMembersFilterAdministrators &to, JsonObject &from) {
  return Status::OK();
}
Status from_json(td_api::chatMembersFilterMembers &to, JsonObject &from) {
  return Status::OK();
}
Status from_json(td_api::chatMembersFilterRestricted &to, JsonObject &from) {
  return Status::OK();
}
Status from_json(td_api::chatMembersFilterBanned &to, JsonObject &from) {
  return Status::OK();
}
Status from_json(td_api::chatMembersFilterBots &to, JsonObject &from) {
  return Status::OK();
}
Status from_json(td_api::chatNotificationSettings &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "use_default_mute_for", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.use_default_mute_for_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "mute_for", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.mute_for_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "use_default_sound", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.use_default_sound_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "sound", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.sound_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "use_default_show_preview", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.use_default_show_preview_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "show_preview", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.show_preview_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::chatPhoto &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "small", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.small_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "big", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.big_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::chatReportReasonSpam &to, JsonObject &from) {
  return Status::OK();
}
Status from_json(td_api::chatReportReasonViolence &to, JsonObject &from) {
  return Status::OK();
}
Status from_json(td_api::chatReportReasonPornography &to, JsonObject &from) {
  return Status::OK();
}
Status from_json(td_api::chatReportReasonCopyright &to, JsonObject &from) {
  return Status::OK();
}
Status from_json(td_api::chatReportReasonCustom &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "text", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.text_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::chatReportSpamState &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "can_report_spam", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.can_report_spam_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::chatTypePrivate &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "user_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.user_id_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::chatTypeBasicGroup &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "basic_group_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.basic_group_id_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::chatTypeSupergroup &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "supergroup_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.supergroup_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "is_channel", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.is_channel_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::chatTypeSecret &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "secret_chat_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.secret_chat_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "user_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.user_id_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::chats &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "chat_ids", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.chat_ids_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::checkChatUsernameResultOk &to, JsonObject &from) {
  return Status::OK();
}
Status from_json(td_api::checkChatUsernameResultUsernameInvalid &to, JsonObject &from) {
  return Status::OK();
}
Status from_json(td_api::checkChatUsernameResultUsernameOccupied &to, JsonObject &from) {
  return Status::OK();
}
Status from_json(td_api::checkChatUsernameResultPublicChatsTooMuch &to, JsonObject &from) {
  return Status::OK();
}
Status from_json(td_api::checkChatUsernameResultPublicGroupsUnavailable &to, JsonObject &from) {
  return Status::OK();
}
Status from_json(td_api::connectedWebsite &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "domain_name", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.domain_name_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "bot_user_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.bot_user_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "browser", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.browser_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "platform", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.platform_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "log_in_date", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.log_in_date_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "last_active_date", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.last_active_date_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "ip", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.ip_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "location", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.location_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::connectedWebsites &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "websites", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.websites_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::connectionStateWaitingForNetwork &to, JsonObject &from) {
  return Status::OK();
}
Status from_json(td_api::connectionStateConnectingToProxy &to, JsonObject &from) {
  return Status::OK();
}
Status from_json(td_api::connectionStateConnecting &to, JsonObject &from) {
  return Status::OK();
}
Status from_json(td_api::connectionStateUpdating &to, JsonObject &from) {
  return Status::OK();
}
Status from_json(td_api::connectionStateReady &to, JsonObject &from) {
  return Status::OK();
}
Status from_json(td_api::contact &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "phone_number", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.phone_number_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "first_name", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.first_name_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "last_name", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.last_name_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "vcard", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.vcard_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "user_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.user_id_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::count &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "count", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.count_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::customRequestResult &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "result", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.result_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::date &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "day", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.day_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "month", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.month_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "year", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.year_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::datedFile &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "file", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.file_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "date", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.date_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::deepLinkInfo &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "text", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.text_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "need_update_application", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.need_update_application_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::deviceTokenGoogleCloudMessaging &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "token", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.token_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::deviceTokenApplePush &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "device_token", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.device_token_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "is_app_sandbox", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.is_app_sandbox_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::deviceTokenApplePushVoIP &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "device_token", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.device_token_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "is_app_sandbox", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.is_app_sandbox_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::deviceTokenWindowsPush &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "access_token", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.access_token_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::deviceTokenMicrosoftPush &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "channel_uri", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.channel_uri_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::deviceTokenMicrosoftPushVoIP &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "channel_uri", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.channel_uri_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::deviceTokenWebPush &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "endpoint", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.endpoint_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "p256dh_base64url", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.p256dh_base64url_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "auth_base64url", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.auth_base64url_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::deviceTokenSimplePush &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "endpoint", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.endpoint_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::deviceTokenUbuntuPush &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "token", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.token_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::deviceTokenBlackBerryPush &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "token", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.token_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::deviceTokenTizenPush &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "reg_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.reg_id_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::document &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "file_name", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.file_name_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "mime_type", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.mime_type_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "thumbnail", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.thumbnail_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "document", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.document_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::draftMessage &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "reply_to_message_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.reply_to_message_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "input_message_text", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.input_message_text_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::emailAddressAuthenticationCodeInfo &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "email_address_pattern", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.email_address_pattern_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "length", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.length_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::encryptedCredentials &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "data", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json_bytes(to.data_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "hash", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json_bytes(to.hash_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "secret", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json_bytes(to.secret_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::encryptedPassportElement &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "type", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.type_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "data", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json_bytes(to.data_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "front_side", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.front_side_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "reverse_side", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.reverse_side_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "selfie", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.selfie_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "translation", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.translation_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "files", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.files_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "value", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.value_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "hash", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.hash_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::error &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "code", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.code_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "message", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.message_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::file &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "size", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.size_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "expected_size", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.expected_size_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "local", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.local_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "remote", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.remote_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::fileTypeNone &to, JsonObject &from) {
  return Status::OK();
}
Status from_json(td_api::fileTypeAnimation &to, JsonObject &from) {
  return Status::OK();
}
Status from_json(td_api::fileTypeAudio &to, JsonObject &from) {
  return Status::OK();
}
Status from_json(td_api::fileTypeDocument &to, JsonObject &from) {
  return Status::OK();
}
Status from_json(td_api::fileTypePhoto &to, JsonObject &from) {
  return Status::OK();
}
Status from_json(td_api::fileTypeProfilePhoto &to, JsonObject &from) {
  return Status::OK();
}
Status from_json(td_api::fileTypeSecret &to, JsonObject &from) {
  return Status::OK();
}
Status from_json(td_api::fileTypeSecretThumbnail &to, JsonObject &from) {
  return Status::OK();
}
Status from_json(td_api::fileTypeSecure &to, JsonObject &from) {
  return Status::OK();
}
Status from_json(td_api::fileTypeSticker &to, JsonObject &from) {
  return Status::OK();
}
Status from_json(td_api::fileTypeThumbnail &to, JsonObject &from) {
  return Status::OK();
}
Status from_json(td_api::fileTypeUnknown &to, JsonObject &from) {
  return Status::OK();
}
Status from_json(td_api::fileTypeVideo &to, JsonObject &from) {
  return Status::OK();
}
Status from_json(td_api::fileTypeVideoNote &to, JsonObject &from) {
  return Status::OK();
}
Status from_json(td_api::fileTypeVoiceNote &to, JsonObject &from) {
  return Status::OK();
}
Status from_json(td_api::fileTypeWallpaper &to, JsonObject &from) {
  return Status::OK();
}
Status from_json(td_api::formattedText &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "text", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.text_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "entities", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.entities_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::foundMessages &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "messages", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.messages_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "next_from_search_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.next_from_search_id_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::game &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "short_name", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.short_name_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "title", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.title_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "text", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.text_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "description", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.description_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "photo", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.photo_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "animation", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.animation_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::gameHighScore &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "position", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.position_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "user_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.user_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "score", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.score_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::gameHighScores &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "scores", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.scores_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::hashtags &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "hashtags", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.hashtags_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::identityDocument &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "number", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.number_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "expiry_date", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.expiry_date_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "front_side", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.front_side_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "reverse_side", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.reverse_side_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "selfie", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.selfie_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "translation", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.translation_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::importedContacts &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "user_ids", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.user_ids_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "importer_count", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.importer_count_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::inlineKeyboardButton &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "text", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.text_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "type", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.type_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::inlineKeyboardButtonTypeUrl &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "url", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.url_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::inlineKeyboardButtonTypeCallback &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "data", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json_bytes(to.data_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::inlineKeyboardButtonTypeCallbackGame &to, JsonObject &from) {
  return Status::OK();
}
Status from_json(td_api::inlineKeyboardButtonTypeSwitchInline &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "query", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.query_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "in_current_chat", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.in_current_chat_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::inlineKeyboardButtonTypeBuy &to, JsonObject &from) {
  return Status::OK();
}
Status from_json(td_api::inlineQueryResultArticle &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "url", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.url_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "hide_url", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.hide_url_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "title", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.title_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "description", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.description_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "thumbnail", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.thumbnail_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::inlineQueryResultContact &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "contact", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.contact_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "thumbnail", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.thumbnail_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::inlineQueryResultLocation &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "location", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.location_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "title", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.title_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "thumbnail", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.thumbnail_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::inlineQueryResultVenue &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "venue", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.venue_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "thumbnail", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.thumbnail_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::inlineQueryResultGame &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "game", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.game_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::inlineQueryResultAnimation &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "animation", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.animation_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "title", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.title_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::inlineQueryResultAudio &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "audio", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.audio_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::inlineQueryResultDocument &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "document", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.document_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "title", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.title_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "description", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.description_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::inlineQueryResultPhoto &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "photo", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.photo_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "title", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.title_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "description", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.description_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::inlineQueryResultSticker &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "sticker", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.sticker_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::inlineQueryResultVideo &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "video", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.video_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "title", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.title_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "description", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.description_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::inlineQueryResultVoiceNote &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "voice_note", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.voice_note_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "title", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.title_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::inlineQueryResults &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "inline_query_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.inline_query_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "next_offset", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.next_offset_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "results", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.results_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "switch_pm_text", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.switch_pm_text_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "switch_pm_parameter", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.switch_pm_parameter_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::inputCredentialsSaved &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "saved_credentials_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.saved_credentials_id_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::inputCredentialsNew &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "data", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.data_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "allow_save", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.allow_save_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::inputCredentialsAndroidPay &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "data", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.data_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::inputCredentialsApplePay &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "data", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.data_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::inputFileId &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.id_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::inputFileRemote &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.id_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::inputFileLocal &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "path", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.path_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::inputFileGenerated &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "original_path", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.original_path_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "conversion", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.conversion_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "expected_size", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.expected_size_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::inputIdentityDocument &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "number", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.number_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "expiry_date", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.expiry_date_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "front_side", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.front_side_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "reverse_side", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.reverse_side_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "selfie", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.selfie_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "translation", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.translation_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::inputInlineQueryResultAnimatedGif &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "title", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.title_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "thumbnail_url", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.thumbnail_url_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "gif_url", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.gif_url_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "gif_duration", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.gif_duration_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "gif_width", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.gif_width_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "gif_height", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.gif_height_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "reply_markup", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.reply_markup_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "input_message_content", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.input_message_content_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::inputInlineQueryResultAnimatedMpeg4 &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "title", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.title_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "thumbnail_url", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.thumbnail_url_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "mpeg4_url", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.mpeg4_url_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "mpeg4_duration", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.mpeg4_duration_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "mpeg4_width", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.mpeg4_width_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "mpeg4_height", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.mpeg4_height_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "reply_markup", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.reply_markup_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "input_message_content", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.input_message_content_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::inputInlineQueryResultArticle &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "url", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.url_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "hide_url", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.hide_url_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "title", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.title_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "description", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.description_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "thumbnail_url", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.thumbnail_url_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "thumbnail_width", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.thumbnail_width_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "thumbnail_height", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.thumbnail_height_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "reply_markup", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.reply_markup_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "input_message_content", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.input_message_content_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::inputInlineQueryResultAudio &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "title", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.title_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "performer", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.performer_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "audio_url", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.audio_url_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "audio_duration", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.audio_duration_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "reply_markup", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.reply_markup_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "input_message_content", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.input_message_content_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::inputInlineQueryResultContact &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "contact", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.contact_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "thumbnail_url", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.thumbnail_url_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "thumbnail_width", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.thumbnail_width_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "thumbnail_height", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.thumbnail_height_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "reply_markup", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.reply_markup_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "input_message_content", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.input_message_content_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::inputInlineQueryResultDocument &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "title", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.title_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "description", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.description_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "document_url", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.document_url_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "mime_type", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.mime_type_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "thumbnail_url", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.thumbnail_url_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "thumbnail_width", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.thumbnail_width_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "thumbnail_height", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.thumbnail_height_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "reply_markup", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.reply_markup_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "input_message_content", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.input_message_content_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::inputInlineQueryResultGame &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "game_short_name", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.game_short_name_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "reply_markup", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.reply_markup_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::inputInlineQueryResultLocation &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "location", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.location_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "live_period", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.live_period_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "title", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.title_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "thumbnail_url", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.thumbnail_url_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "thumbnail_width", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.thumbnail_width_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "thumbnail_height", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.thumbnail_height_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "reply_markup", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.reply_markup_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "input_message_content", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.input_message_content_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::inputInlineQueryResultPhoto &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "title", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.title_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "description", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.description_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "thumbnail_url", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.thumbnail_url_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "photo_url", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.photo_url_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "photo_width", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.photo_width_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "photo_height", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.photo_height_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "reply_markup", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.reply_markup_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "input_message_content", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.input_message_content_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::inputInlineQueryResultSticker &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "thumbnail_url", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.thumbnail_url_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "sticker_url", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.sticker_url_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "sticker_width", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.sticker_width_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "sticker_height", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.sticker_height_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "reply_markup", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.reply_markup_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "input_message_content", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.input_message_content_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::inputInlineQueryResultVenue &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "venue", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.venue_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "thumbnail_url", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.thumbnail_url_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "thumbnail_width", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.thumbnail_width_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "thumbnail_height", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.thumbnail_height_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "reply_markup", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.reply_markup_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "input_message_content", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.input_message_content_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::inputInlineQueryResultVideo &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "title", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.title_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "description", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.description_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "thumbnail_url", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.thumbnail_url_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "video_url", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.video_url_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "mime_type", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.mime_type_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "video_width", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.video_width_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "video_height", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.video_height_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "video_duration", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.video_duration_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "reply_markup", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.reply_markup_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "input_message_content", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.input_message_content_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::inputInlineQueryResultVoiceNote &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "title", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.title_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "voice_note_url", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.voice_note_url_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "voice_note_duration", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.voice_note_duration_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "reply_markup", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.reply_markup_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "input_message_content", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.input_message_content_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::inputMessageText &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "text", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.text_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "disable_web_page_preview", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.disable_web_page_preview_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "clear_draft", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.clear_draft_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::inputMessageAnimation &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "animation", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.animation_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "thumbnail", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.thumbnail_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "duration", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.duration_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "width", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.width_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "height", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.height_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "caption", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.caption_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::inputMessageAudio &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "audio", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.audio_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "album_cover_thumbnail", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.album_cover_thumbnail_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "duration", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.duration_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "title", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.title_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "performer", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.performer_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "caption", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.caption_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::inputMessageDocument &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "document", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.document_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "thumbnail", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.thumbnail_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "caption", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.caption_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::inputMessagePhoto &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "photo", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.photo_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "thumbnail", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.thumbnail_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "added_sticker_file_ids", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.added_sticker_file_ids_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "width", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.width_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "height", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.height_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "caption", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.caption_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "ttl", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.ttl_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::inputMessageSticker &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "sticker", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.sticker_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "thumbnail", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.thumbnail_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "width", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.width_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "height", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.height_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::inputMessageVideo &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "video", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.video_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "thumbnail", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.thumbnail_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "added_sticker_file_ids", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.added_sticker_file_ids_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "duration", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.duration_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "width", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.width_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "height", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.height_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "supports_streaming", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.supports_streaming_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "caption", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.caption_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "ttl", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.ttl_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::inputMessageVideoNote &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "video_note", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.video_note_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "thumbnail", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.thumbnail_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "duration", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.duration_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "length", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.length_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::inputMessageVoiceNote &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "voice_note", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.voice_note_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "duration", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.duration_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "waveform", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json_bytes(to.waveform_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "caption", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.caption_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::inputMessageLocation &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "location", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.location_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "live_period", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.live_period_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::inputMessageVenue &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "venue", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.venue_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::inputMessageContact &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "contact", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.contact_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::inputMessageGame &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "bot_user_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.bot_user_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "game_short_name", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.game_short_name_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::inputMessageInvoice &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "invoice", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.invoice_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "title", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.title_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "description", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.description_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "photo_url", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.photo_url_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "photo_size", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.photo_size_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "photo_width", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.photo_width_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "photo_height", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.photo_height_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "payload", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json_bytes(to.payload_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "provider_token", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.provider_token_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "provider_data", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.provider_data_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "start_parameter", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.start_parameter_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::inputMessageForwarded &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "from_chat_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.from_chat_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "message_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.message_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "in_game_share", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.in_game_share_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::inputPassportElementPersonalDetails &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "personal_details", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.personal_details_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::inputPassportElementPassport &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "passport", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.passport_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::inputPassportElementDriverLicense &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "driver_license", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.driver_license_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::inputPassportElementIdentityCard &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "identity_card", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.identity_card_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::inputPassportElementInternalPassport &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "internal_passport", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.internal_passport_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::inputPassportElementAddress &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "address", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.address_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::inputPassportElementUtilityBill &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "utility_bill", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.utility_bill_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::inputPassportElementBankStatement &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "bank_statement", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.bank_statement_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::inputPassportElementRentalAgreement &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "rental_agreement", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.rental_agreement_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::inputPassportElementPassportRegistration &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "passport_registration", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.passport_registration_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::inputPassportElementTemporaryRegistration &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "temporary_registration", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.temporary_registration_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::inputPassportElementPhoneNumber &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "phone_number", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.phone_number_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::inputPassportElementEmailAddress &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "email_address", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.email_address_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::inputPassportElementError &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "type", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.type_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "message", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.message_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "source", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.source_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::inputPassportElementErrorSourceUnspecified &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "element_hash", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json_bytes(to.element_hash_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::inputPassportElementErrorSourceDataField &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "field_name", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.field_name_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "data_hash", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json_bytes(to.data_hash_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::inputPassportElementErrorSourceFrontSide &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "file_hash", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json_bytes(to.file_hash_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::inputPassportElementErrorSourceReverseSide &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "file_hash", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json_bytes(to.file_hash_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::inputPassportElementErrorSourceSelfie &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "file_hash", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json_bytes(to.file_hash_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::inputPassportElementErrorSourceTranslationFile &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "file_hash", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json_bytes(to.file_hash_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::inputPassportElementErrorSourceTranslationFiles &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "file_hashes", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.file_hashes_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::inputPassportElementErrorSourceFile &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "file_hash", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json_bytes(to.file_hash_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::inputPassportElementErrorSourceFiles &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "file_hashes", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.file_hashes_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::inputPersonalDocument &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "files", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.files_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "translation", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.translation_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::inputSticker &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "png_sticker", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.png_sticker_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "emojis", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.emojis_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "mask_position", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.mask_position_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::inputThumbnail &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "thumbnail", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.thumbnail_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "width", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.width_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "height", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.height_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::invoice &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "currency", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.currency_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "price_parts", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.price_parts_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "is_test", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.is_test_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "need_name", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.need_name_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "need_phone_number", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.need_phone_number_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "need_email_address", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.need_email_address_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "need_shipping_address", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.need_shipping_address_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "send_phone_number_to_provider", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.send_phone_number_to_provider_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "send_email_address_to_provider", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.send_email_address_to_provider_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "is_flexible", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.is_flexible_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::keyboardButton &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "text", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.text_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "type", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.type_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::keyboardButtonTypeText &to, JsonObject &from) {
  return Status::OK();
}
Status from_json(td_api::keyboardButtonTypeRequestPhoneNumber &to, JsonObject &from) {
  return Status::OK();
}
Status from_json(td_api::keyboardButtonTypeRequestLocation &to, JsonObject &from) {
  return Status::OK();
}
Status from_json(td_api::labeledPricePart &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "label", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.label_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "amount", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.amount_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::languagePackInfo &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "name", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.name_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "native_name", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.native_name_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "local_string_count", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.local_string_count_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::languagePackString &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "key", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.key_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "value", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.value_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::languagePackStringValueOrdinary &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "value", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.value_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::languagePackStringValuePluralized &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "zero_value", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.zero_value_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "one_value", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.one_value_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "two_value", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.two_value_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "few_value", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.few_value_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "many_value", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.many_value_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "other_value", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.other_value_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::languagePackStringValueDeleted &to, JsonObject &from) {
  return Status::OK();
}
Status from_json(td_api::languagePackStrings &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "strings", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.strings_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::linkStateNone &to, JsonObject &from) {
  return Status::OK();
}
Status from_json(td_api::linkStateKnowsPhoneNumber &to, JsonObject &from) {
  return Status::OK();
}
Status from_json(td_api::linkStateIsContact &to, JsonObject &from) {
  return Status::OK();
}
Status from_json(td_api::localFile &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "path", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.path_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "can_be_downloaded", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.can_be_downloaded_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "can_be_deleted", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.can_be_deleted_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "is_downloading_active", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.is_downloading_active_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "is_downloading_completed", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.is_downloading_completed_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "downloaded_prefix_size", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.downloaded_prefix_size_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "downloaded_size", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.downloaded_size_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::localizationTargetInfo &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "language_packs", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.language_packs_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::location &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "latitude", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.latitude_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "longitude", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.longitude_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::maskPointForehead &to, JsonObject &from) {
  return Status::OK();
}
Status from_json(td_api::maskPointEyes &to, JsonObject &from) {
  return Status::OK();
}
Status from_json(td_api::maskPointMouth &to, JsonObject &from) {
  return Status::OK();
}
Status from_json(td_api::maskPointChin &to, JsonObject &from) {
  return Status::OK();
}
Status from_json(td_api::maskPosition &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "point", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.point_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "x_shift", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.x_shift_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "y_shift", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.y_shift_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "scale", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.scale_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::message &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "sender_user_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.sender_user_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "chat_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.chat_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "sending_state", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.sending_state_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "is_outgoing", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.is_outgoing_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "can_be_edited", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.can_be_edited_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "can_be_forwarded", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.can_be_forwarded_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "can_be_deleted_only_for_self", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.can_be_deleted_only_for_self_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "can_be_deleted_for_all_users", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.can_be_deleted_for_all_users_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "is_channel_post", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.is_channel_post_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "contains_unread_mention", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.contains_unread_mention_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "date", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.date_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "edit_date", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.edit_date_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "forward_info", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.forward_info_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "reply_to_message_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.reply_to_message_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "ttl", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.ttl_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "ttl_expires_in", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.ttl_expires_in_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "via_bot_user_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.via_bot_user_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "author_signature", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.author_signature_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "views", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.views_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "media_album_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.media_album_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "content", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.content_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "reply_markup", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.reply_markup_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::messageText &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "text", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.text_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "web_page", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.web_page_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::messageAnimation &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "animation", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.animation_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "caption", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.caption_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "is_secret", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.is_secret_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::messageAudio &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "audio", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.audio_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "caption", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.caption_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::messageDocument &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "document", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.document_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "caption", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.caption_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::messagePhoto &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "photo", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.photo_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "caption", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.caption_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "is_secret", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.is_secret_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::messageExpiredPhoto &to, JsonObject &from) {
  return Status::OK();
}
Status from_json(td_api::messageSticker &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "sticker", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.sticker_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::messageVideo &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "video", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.video_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "caption", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.caption_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "is_secret", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.is_secret_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::messageExpiredVideo &to, JsonObject &from) {
  return Status::OK();
}
Status from_json(td_api::messageVideoNote &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "video_note", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.video_note_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "is_viewed", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.is_viewed_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "is_secret", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.is_secret_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::messageVoiceNote &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "voice_note", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.voice_note_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "caption", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.caption_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "is_listened", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.is_listened_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::messageLocation &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "location", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.location_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "live_period", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.live_period_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "expires_in", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.expires_in_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::messageVenue &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "venue", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.venue_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::messageContact &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "contact", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.contact_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::messageGame &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "game", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.game_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::messageInvoice &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "title", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.title_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "description", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.description_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "photo", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.photo_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "currency", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.currency_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "total_amount", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.total_amount_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "start_parameter", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.start_parameter_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "is_test", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.is_test_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "need_shipping_address", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.need_shipping_address_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "receipt_message_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.receipt_message_id_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::messageCall &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "discard_reason", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.discard_reason_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "duration", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.duration_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::messageBasicGroupChatCreate &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "title", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.title_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "member_user_ids", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.member_user_ids_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::messageSupergroupChatCreate &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "title", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.title_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::messageChatChangeTitle &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "title", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.title_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::messageChatChangePhoto &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "photo", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.photo_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::messageChatDeletePhoto &to, JsonObject &from) {
  return Status::OK();
}
Status from_json(td_api::messageChatAddMembers &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "member_user_ids", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.member_user_ids_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::messageChatJoinByLink &to, JsonObject &from) {
  return Status::OK();
}
Status from_json(td_api::messageChatDeleteMember &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "user_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.user_id_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::messageChatUpgradeTo &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "supergroup_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.supergroup_id_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::messageChatUpgradeFrom &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "title", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.title_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "basic_group_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.basic_group_id_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::messagePinMessage &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "message_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.message_id_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::messageScreenshotTaken &to, JsonObject &from) {
  return Status::OK();
}
Status from_json(td_api::messageChatSetTtl &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "ttl", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.ttl_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::messageCustomServiceAction &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "text", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.text_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::messageGameScore &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "game_message_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.game_message_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "game_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.game_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "score", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.score_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::messagePaymentSuccessful &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "invoice_message_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.invoice_message_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "currency", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.currency_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "total_amount", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.total_amount_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::messagePaymentSuccessfulBot &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "invoice_message_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.invoice_message_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "currency", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.currency_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "total_amount", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.total_amount_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "invoice_payload", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json_bytes(to.invoice_payload_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "shipping_option_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.shipping_option_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "order_info", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.order_info_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "telegram_payment_charge_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.telegram_payment_charge_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "provider_payment_charge_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.provider_payment_charge_id_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::messageContactRegistered &to, JsonObject &from) {
  return Status::OK();
}
Status from_json(td_api::messageWebsiteConnected &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "domain_name", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.domain_name_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::messagePassportDataSent &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "types", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.types_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::messagePassportDataReceived &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "elements", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.elements_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "credentials", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.credentials_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::messageUnsupported &to, JsonObject &from) {
  return Status::OK();
}
Status from_json(td_api::messageForwardedFromUser &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "sender_user_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.sender_user_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "date", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.date_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "forwarded_from_chat_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.forwarded_from_chat_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "forwarded_from_message_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.forwarded_from_message_id_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::messageForwardedPost &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "chat_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.chat_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "author_signature", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.author_signature_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "date", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.date_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "message_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.message_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "forwarded_from_chat_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.forwarded_from_chat_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "forwarded_from_message_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.forwarded_from_message_id_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::messageSendingStatePending &to, JsonObject &from) {
  return Status::OK();
}
Status from_json(td_api::messageSendingStateFailed &to, JsonObject &from) {
  return Status::OK();
}
Status from_json(td_api::messages &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "total_count", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.total_count_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "messages", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.messages_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::networkStatistics &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "since_date", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.since_date_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "entries", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.entries_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::networkStatisticsEntryFile &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "file_type", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.file_type_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "network_type", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.network_type_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "sent_bytes", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.sent_bytes_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "received_bytes", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.received_bytes_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::networkStatisticsEntryCall &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "network_type", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.network_type_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "sent_bytes", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.sent_bytes_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "received_bytes", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.received_bytes_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "duration", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.duration_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::networkTypeNone &to, JsonObject &from) {
  return Status::OK();
}
Status from_json(td_api::networkTypeMobile &to, JsonObject &from) {
  return Status::OK();
}
Status from_json(td_api::networkTypeMobileRoaming &to, JsonObject &from) {
  return Status::OK();
}
Status from_json(td_api::networkTypeWiFi &to, JsonObject &from) {
  return Status::OK();
}
Status from_json(td_api::networkTypeOther &to, JsonObject &from) {
  return Status::OK();
}
Status from_json(td_api::notificationSettingsScopePrivateChats &to, JsonObject &from) {
  return Status::OK();
}
Status from_json(td_api::notificationSettingsScopeGroupChats &to, JsonObject &from) {
  return Status::OK();
}
Status from_json(td_api::ok &to, JsonObject &from) {
  return Status::OK();
}
Status from_json(td_api::optionValueBoolean &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "value", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.value_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::optionValueEmpty &to, JsonObject &from) {
  return Status::OK();
}
Status from_json(td_api::optionValueInteger &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "value", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.value_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::optionValueString &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "value", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.value_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::orderInfo &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "name", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.name_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "phone_number", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.phone_number_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "email_address", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.email_address_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "shipping_address", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.shipping_address_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::pageBlockTitle &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "title", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.title_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::pageBlockSubtitle &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "subtitle", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.subtitle_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::pageBlockAuthorDate &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "author", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.author_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "publish_date", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.publish_date_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::pageBlockHeader &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "header", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.header_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::pageBlockSubheader &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "subheader", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.subheader_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::pageBlockParagraph &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "text", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.text_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::pageBlockPreformatted &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "text", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.text_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "language", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.language_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::pageBlockFooter &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "footer", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.footer_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::pageBlockDivider &to, JsonObject &from) {
  return Status::OK();
}
Status from_json(td_api::pageBlockAnchor &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "name", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.name_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::pageBlockList &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "items", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.items_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "is_ordered", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.is_ordered_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::pageBlockBlockQuote &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "text", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.text_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "caption", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.caption_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::pageBlockPullQuote &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "text", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.text_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "caption", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.caption_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::pageBlockAnimation &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "animation", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.animation_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "caption", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.caption_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "need_autoplay", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.need_autoplay_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::pageBlockAudio &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "audio", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.audio_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "caption", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.caption_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::pageBlockPhoto &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "photo", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.photo_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "caption", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.caption_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::pageBlockVideo &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "video", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.video_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "caption", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.caption_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "need_autoplay", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.need_autoplay_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "is_looped", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.is_looped_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::pageBlockCover &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "cover", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.cover_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::pageBlockEmbedded &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "url", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.url_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "html", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.html_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "poster_photo", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.poster_photo_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "width", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.width_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "height", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.height_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "caption", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.caption_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "is_full_width", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.is_full_width_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "allow_scrolling", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.allow_scrolling_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::pageBlockEmbeddedPost &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "url", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.url_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "author", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.author_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "author_photo", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.author_photo_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "date", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.date_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "page_blocks", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.page_blocks_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "caption", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.caption_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::pageBlockCollage &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "page_blocks", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.page_blocks_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "caption", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.caption_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::pageBlockSlideshow &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "page_blocks", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.page_blocks_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "caption", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.caption_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::pageBlockChatLink &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "title", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.title_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "photo", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.photo_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "username", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.username_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::passportAuthorizationForm &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "required_elements", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.required_elements_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "elements", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.elements_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "errors", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.errors_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "privacy_policy_url", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.privacy_policy_url_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::passportElementPersonalDetails &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "personal_details", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.personal_details_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::passportElementPassport &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "passport", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.passport_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::passportElementDriverLicense &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "driver_license", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.driver_license_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::passportElementIdentityCard &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "identity_card", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.identity_card_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::passportElementInternalPassport &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "internal_passport", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.internal_passport_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::passportElementAddress &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "address", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.address_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::passportElementUtilityBill &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "utility_bill", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.utility_bill_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::passportElementBankStatement &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "bank_statement", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.bank_statement_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::passportElementRentalAgreement &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "rental_agreement", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.rental_agreement_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::passportElementPassportRegistration &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "passport_registration", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.passport_registration_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::passportElementTemporaryRegistration &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "temporary_registration", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.temporary_registration_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::passportElementPhoneNumber &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "phone_number", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.phone_number_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::passportElementEmailAddress &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "email_address", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.email_address_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::passportElementError &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "type", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.type_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "message", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.message_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "source", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.source_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::passportElementErrorSourceUnspecified &to, JsonObject &from) {
  return Status::OK();
}
Status from_json(td_api::passportElementErrorSourceDataField &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "field_name", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.field_name_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::passportElementErrorSourceFrontSide &to, JsonObject &from) {
  return Status::OK();
}
Status from_json(td_api::passportElementErrorSourceReverseSide &to, JsonObject &from) {
  return Status::OK();
}
Status from_json(td_api::passportElementErrorSourceSelfie &to, JsonObject &from) {
  return Status::OK();
}
Status from_json(td_api::passportElementErrorSourceTranslationFile &to, JsonObject &from) {
  return Status::OK();
}
Status from_json(td_api::passportElementErrorSourceTranslationFiles &to, JsonObject &from) {
  return Status::OK();
}
Status from_json(td_api::passportElementErrorSourceFile &to, JsonObject &from) {
  return Status::OK();
}
Status from_json(td_api::passportElementErrorSourceFiles &to, JsonObject &from) {
  return Status::OK();
}
Status from_json(td_api::passportElementTypePersonalDetails &to, JsonObject &from) {
  return Status::OK();
}
Status from_json(td_api::passportElementTypePassport &to, JsonObject &from) {
  return Status::OK();
}
Status from_json(td_api::passportElementTypeDriverLicense &to, JsonObject &from) {
  return Status::OK();
}
Status from_json(td_api::passportElementTypeIdentityCard &to, JsonObject &from) {
  return Status::OK();
}
Status from_json(td_api::passportElementTypeInternalPassport &to, JsonObject &from) {
  return Status::OK();
}
Status from_json(td_api::passportElementTypeAddress &to, JsonObject &from) {
  return Status::OK();
}
Status from_json(td_api::passportElementTypeUtilityBill &to, JsonObject &from) {
  return Status::OK();
}
Status from_json(td_api::passportElementTypeBankStatement &to, JsonObject &from) {
  return Status::OK();
}
Status from_json(td_api::passportElementTypeRentalAgreement &to, JsonObject &from) {
  return Status::OK();
}
Status from_json(td_api::passportElementTypePassportRegistration &to, JsonObject &from) {
  return Status::OK();
}
Status from_json(td_api::passportElementTypeTemporaryRegistration &to, JsonObject &from) {
  return Status::OK();
}
Status from_json(td_api::passportElementTypePhoneNumber &to, JsonObject &from) {
  return Status::OK();
}
Status from_json(td_api::passportElementTypeEmailAddress &to, JsonObject &from) {
  return Status::OK();
}
Status from_json(td_api::passportElements &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "elements", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.elements_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::passportRequiredElement &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "suitable_elements", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.suitable_elements_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::passportSuitableElement &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "type", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.type_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "is_selfie_required", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.is_selfie_required_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "is_translation_required", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.is_translation_required_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "is_native_name_required", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.is_native_name_required_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::passwordState &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "has_password", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.has_password_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "password_hint", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.password_hint_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "has_recovery_email_address", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.has_recovery_email_address_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "has_passport_data", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.has_passport_data_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "unconfirmed_recovery_email_address_pattern", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.unconfirmed_recovery_email_address_pattern_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::paymentForm &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "invoice", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.invoice_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "url", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.url_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "payments_provider", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.payments_provider_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "saved_order_info", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.saved_order_info_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "saved_credentials", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.saved_credentials_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "can_save_credentials", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.can_save_credentials_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "need_password", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.need_password_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::paymentReceipt &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "date", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.date_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "payments_provider_user_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.payments_provider_user_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "invoice", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.invoice_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "order_info", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.order_info_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "shipping_option", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.shipping_option_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "credentials_title", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.credentials_title_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::paymentResult &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "success", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.success_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "verification_url", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.verification_url_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::paymentsProviderStripe &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "publishable_key", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.publishable_key_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "need_country", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.need_country_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "need_postal_code", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.need_postal_code_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "need_cardholder_name", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.need_cardholder_name_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::personalDetails &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "first_name", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.first_name_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "middle_name", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.middle_name_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "last_name", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.last_name_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "native_first_name", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.native_first_name_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "native_middle_name", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.native_middle_name_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "native_last_name", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.native_last_name_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "birthdate", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.birthdate_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "gender", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.gender_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "country_code", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.country_code_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "residence_country_code", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.residence_country_code_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::personalDocument &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "files", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.files_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "translation", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.translation_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::photo &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "has_stickers", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.has_stickers_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "sizes", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.sizes_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::photoSize &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "type", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.type_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "photo", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.photo_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "width", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.width_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "height", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.height_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::profilePhoto &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "small", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.small_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "big", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.big_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::proxies &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "proxies", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.proxies_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::proxy &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "server", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.server_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "port", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.port_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "last_used_date", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.last_used_date_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "is_enabled", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.is_enabled_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "type", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.type_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::proxyTypeSocks5 &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "username", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.username_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "password", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.password_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::proxyTypeHttp &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "username", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.username_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "password", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.password_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "http_only", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.http_only_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::proxyTypeMtproto &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "secret", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.secret_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::publicMessageLink &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "link", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.link_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "html", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.html_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::recoveryEmailAddress &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "recovery_email_address", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.recovery_email_address_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::remoteFile &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "is_uploading_active", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.is_uploading_active_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "is_uploading_completed", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.is_uploading_completed_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "uploaded_size", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.uploaded_size_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::replyMarkupRemoveKeyboard &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "is_personal", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.is_personal_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::replyMarkupForceReply &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "is_personal", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.is_personal_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::replyMarkupShowKeyboard &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "rows", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.rows_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "resize_keyboard", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.resize_keyboard_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "one_time", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.one_time_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "is_personal", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.is_personal_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::replyMarkupInlineKeyboard &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "rows", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.rows_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::richTextPlain &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "text", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.text_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::richTextBold &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "text", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.text_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::richTextItalic &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "text", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.text_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::richTextUnderline &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "text", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.text_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::richTextStrikethrough &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "text", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.text_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::richTextFixed &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "text", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.text_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::richTextUrl &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "text", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.text_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "url", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.url_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::richTextEmailAddress &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "text", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.text_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "email_address", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.email_address_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::richTexts &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "texts", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.texts_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::savedCredentials &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "title", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.title_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::scopeNotificationSettings &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "mute_for", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.mute_for_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "sound", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.sound_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "show_preview", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.show_preview_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::searchMessagesFilterEmpty &to, JsonObject &from) {
  return Status::OK();
}
Status from_json(td_api::searchMessagesFilterAnimation &to, JsonObject &from) {
  return Status::OK();
}
Status from_json(td_api::searchMessagesFilterAudio &to, JsonObject &from) {
  return Status::OK();
}
Status from_json(td_api::searchMessagesFilterDocument &to, JsonObject &from) {
  return Status::OK();
}
Status from_json(td_api::searchMessagesFilterPhoto &to, JsonObject &from) {
  return Status::OK();
}
Status from_json(td_api::searchMessagesFilterVideo &to, JsonObject &from) {
  return Status::OK();
}
Status from_json(td_api::searchMessagesFilterVoiceNote &to, JsonObject &from) {
  return Status::OK();
}
Status from_json(td_api::searchMessagesFilterPhotoAndVideo &to, JsonObject &from) {
  return Status::OK();
}
Status from_json(td_api::searchMessagesFilterUrl &to, JsonObject &from) {
  return Status::OK();
}
Status from_json(td_api::searchMessagesFilterChatPhoto &to, JsonObject &from) {
  return Status::OK();
}
Status from_json(td_api::searchMessagesFilterCall &to, JsonObject &from) {
  return Status::OK();
}
Status from_json(td_api::searchMessagesFilterMissedCall &to, JsonObject &from) {
  return Status::OK();
}
Status from_json(td_api::searchMessagesFilterVideoNote &to, JsonObject &from) {
  return Status::OK();
}
Status from_json(td_api::searchMessagesFilterVoiceAndVideoNote &to, JsonObject &from) {
  return Status::OK();
}
Status from_json(td_api::searchMessagesFilterMention &to, JsonObject &from) {
  return Status::OK();
}
Status from_json(td_api::searchMessagesFilterUnreadMention &to, JsonObject &from) {
  return Status::OK();
}
Status from_json(td_api::seconds &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "seconds", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.seconds_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::secretChat &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "user_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.user_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "state", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.state_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "is_outbound", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.is_outbound_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "ttl", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.ttl_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "key_hash", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json_bytes(to.key_hash_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "layer", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.layer_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::secretChatStatePending &to, JsonObject &from) {
  return Status::OK();
}
Status from_json(td_api::secretChatStateReady &to, JsonObject &from) {
  return Status::OK();
}
Status from_json(td_api::secretChatStateClosed &to, JsonObject &from) {
  return Status::OK();
}
Status from_json(td_api::session &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "is_current", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.is_current_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "api_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.api_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "application_name", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.application_name_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "application_version", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.application_version_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "is_official_application", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.is_official_application_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "device_model", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.device_model_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "platform", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.platform_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "system_version", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.system_version_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "log_in_date", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.log_in_date_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "last_active_date", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.last_active_date_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "ip", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.ip_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "country", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.country_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "region", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.region_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::sessions &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "sessions", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.sessions_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::shippingOption &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "title", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.title_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "price_parts", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.price_parts_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::sticker &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "set_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.set_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "width", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.width_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "height", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.height_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "emoji", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.emoji_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "is_mask", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.is_mask_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "mask_position", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.mask_position_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "thumbnail", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.thumbnail_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "sticker", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.sticker_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::stickerEmojis &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "emojis", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.emojis_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::stickerSet &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "title", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.title_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "name", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.name_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "is_installed", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.is_installed_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "is_archived", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.is_archived_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "is_official", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.is_official_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "is_masks", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.is_masks_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "is_viewed", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.is_viewed_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "stickers", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.stickers_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "emojis", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.emojis_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::stickerSetInfo &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "title", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.title_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "name", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.name_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "is_installed", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.is_installed_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "is_archived", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.is_archived_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "is_official", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.is_official_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "is_masks", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.is_masks_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "is_viewed", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.is_viewed_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "size", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.size_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "covers", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.covers_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::stickerSets &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "total_count", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.total_count_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "sets", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.sets_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::stickers &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "stickers", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.stickers_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::storageStatistics &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "size", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.size_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "count", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.count_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "by_chat", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.by_chat_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::storageStatisticsByChat &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "chat_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.chat_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "size", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.size_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "count", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.count_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "by_file_type", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.by_file_type_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::storageStatisticsByFileType &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "file_type", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.file_type_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "size", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.size_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "count", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.count_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::storageStatisticsFast &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "files_size", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.files_size_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "file_count", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.file_count_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "database_size", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.database_size_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::supergroup &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "username", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.username_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "date", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.date_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "status", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.status_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "member_count", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.member_count_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "anyone_can_invite", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.anyone_can_invite_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "sign_messages", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.sign_messages_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "is_channel", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.is_channel_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "is_verified", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.is_verified_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "restriction_reason", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.restriction_reason_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::supergroupFullInfo &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "description", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.description_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "member_count", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.member_count_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "administrator_count", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.administrator_count_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "restricted_count", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.restricted_count_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "banned_count", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.banned_count_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "can_get_members", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.can_get_members_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "can_set_username", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.can_set_username_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "can_set_sticker_set", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.can_set_sticker_set_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "is_all_history_available", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.is_all_history_available_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "sticker_set_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.sticker_set_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "invite_link", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.invite_link_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "pinned_message_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.pinned_message_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "upgraded_from_basic_group_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.upgraded_from_basic_group_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "upgraded_from_max_message_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.upgraded_from_max_message_id_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::supergroupMembersFilterRecent &to, JsonObject &from) {
  return Status::OK();
}
Status from_json(td_api::supergroupMembersFilterAdministrators &to, JsonObject &from) {
  return Status::OK();
}
Status from_json(td_api::supergroupMembersFilterSearch &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "query", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.query_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::supergroupMembersFilterRestricted &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "query", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.query_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::supergroupMembersFilterBanned &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "query", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.query_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::supergroupMembersFilterBots &to, JsonObject &from) {
  return Status::OK();
}
Status from_json(td_api::tMeUrl &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "url", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.url_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "type", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.type_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::tMeUrlTypeUser &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "user_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.user_id_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::tMeUrlTypeSupergroup &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "supergroup_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.supergroup_id_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::tMeUrlTypeChatInvite &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "info", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.info_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::tMeUrlTypeStickerSet &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "sticker_set_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.sticker_set_id_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::tMeUrls &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "urls", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.urls_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::tdlibParameters &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "use_test_dc", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.use_test_dc_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "database_directory", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.database_directory_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "files_directory", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.files_directory_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "use_file_database", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.use_file_database_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "use_chat_info_database", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.use_chat_info_database_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "use_message_database", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.use_message_database_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "use_secret_chats", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.use_secret_chats_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "api_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.api_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "api_hash", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.api_hash_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "system_language_code", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.system_language_code_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "device_model", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.device_model_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "system_version", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.system_version_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "application_version", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.application_version_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "enable_storage_optimizer", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.enable_storage_optimizer_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "ignore_file_names", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.ignore_file_names_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::temporaryPasswordState &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "has_password", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.has_password_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "valid_for", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.valid_for_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::termsOfService &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "text", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.text_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "min_user_age", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.min_user_age_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "show_popup", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.show_popup_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::testBytes &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "value", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json_bytes(to.value_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::testInt &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "value", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.value_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::testString &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "value", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.value_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::testVectorInt &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "value", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.value_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::testVectorIntObject &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "value", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.value_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::testVectorString &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "value", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.value_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::testVectorStringObject &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "value", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.value_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::text &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "text", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.text_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::textEntities &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "entities", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.entities_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::textEntity &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "offset", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.offset_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "length", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.length_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "type", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.type_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::textEntityTypeMention &to, JsonObject &from) {
  return Status::OK();
}
Status from_json(td_api::textEntityTypeHashtag &to, JsonObject &from) {
  return Status::OK();
}
Status from_json(td_api::textEntityTypeCashtag &to, JsonObject &from) {
  return Status::OK();
}
Status from_json(td_api::textEntityTypeBotCommand &to, JsonObject &from) {
  return Status::OK();
}
Status from_json(td_api::textEntityTypeUrl &to, JsonObject &from) {
  return Status::OK();
}
Status from_json(td_api::textEntityTypeEmailAddress &to, JsonObject &from) {
  return Status::OK();
}
Status from_json(td_api::textEntityTypeBold &to, JsonObject &from) {
  return Status::OK();
}
Status from_json(td_api::textEntityTypeItalic &to, JsonObject &from) {
  return Status::OK();
}
Status from_json(td_api::textEntityTypeCode &to, JsonObject &from) {
  return Status::OK();
}
Status from_json(td_api::textEntityTypePre &to, JsonObject &from) {
  return Status::OK();
}
Status from_json(td_api::textEntityTypePreCode &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "language", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.language_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::textEntityTypeTextUrl &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "url", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.url_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::textEntityTypeMentionName &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "user_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.user_id_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::textEntityTypePhoneNumber &to, JsonObject &from) {
  return Status::OK();
}
Status from_json(td_api::textParseModeMarkdown &to, JsonObject &from) {
  return Status::OK();
}
Status from_json(td_api::textParseModeHTML &to, JsonObject &from) {
  return Status::OK();
}
Status from_json(td_api::topChatCategoryUsers &to, JsonObject &from) {
  return Status::OK();
}
Status from_json(td_api::topChatCategoryBots &to, JsonObject &from) {
  return Status::OK();
}
Status from_json(td_api::topChatCategoryGroups &to, JsonObject &from) {
  return Status::OK();
}
Status from_json(td_api::topChatCategoryChannels &to, JsonObject &from) {
  return Status::OK();
}
Status from_json(td_api::topChatCategoryInlineBots &to, JsonObject &from) {
  return Status::OK();
}
Status from_json(td_api::topChatCategoryCalls &to, JsonObject &from) {
  return Status::OK();
}
Status from_json(td_api::updateAuthorizationState &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "authorization_state", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.authorization_state_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::updateNewMessage &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "message", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.message_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "disable_notification", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.disable_notification_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "contains_mention", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.contains_mention_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::updateMessageSendAcknowledged &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "chat_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.chat_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "message_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.message_id_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::updateMessageSendSucceeded &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "message", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.message_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "old_message_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.old_message_id_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::updateMessageSendFailed &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "message", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.message_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "old_message_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.old_message_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "error_code", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.error_code_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "error_message", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.error_message_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::updateMessageContent &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "chat_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.chat_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "message_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.message_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "new_content", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.new_content_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::updateMessageEdited &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "chat_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.chat_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "message_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.message_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "edit_date", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.edit_date_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "reply_markup", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.reply_markup_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::updateMessageViews &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "chat_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.chat_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "message_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.message_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "views", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.views_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::updateMessageContentOpened &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "chat_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.chat_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "message_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.message_id_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::updateMessageMentionRead &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "chat_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.chat_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "message_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.message_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "unread_mention_count", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.unread_mention_count_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::updateNewChat &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "chat", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.chat_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::updateChatTitle &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "chat_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.chat_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "title", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.title_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::updateChatPhoto &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "chat_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.chat_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "photo", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.photo_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::updateChatLastMessage &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "chat_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.chat_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "last_message", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.last_message_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "order", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.order_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::updateChatOrder &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "chat_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.chat_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "order", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.order_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::updateChatIsPinned &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "chat_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.chat_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "is_pinned", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.is_pinned_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "order", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.order_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::updateChatIsMarkedAsUnread &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "chat_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.chat_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "is_marked_as_unread", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.is_marked_as_unread_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::updateChatIsSponsored &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "chat_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.chat_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "is_sponsored", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.is_sponsored_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "order", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.order_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::updateChatDefaultDisableNotification &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "chat_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.chat_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "default_disable_notification", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.default_disable_notification_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::updateChatReadInbox &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "chat_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.chat_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "last_read_inbox_message_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.last_read_inbox_message_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "unread_count", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.unread_count_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::updateChatReadOutbox &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "chat_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.chat_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "last_read_outbox_message_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.last_read_outbox_message_id_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::updateChatUnreadMentionCount &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "chat_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.chat_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "unread_mention_count", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.unread_mention_count_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::updateChatNotificationSettings &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "chat_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.chat_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "notification_settings", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.notification_settings_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::updateScopeNotificationSettings &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "scope", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.scope_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "notification_settings", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.notification_settings_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::updateChatReplyMarkup &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "chat_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.chat_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "reply_markup_message_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.reply_markup_message_id_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::updateChatDraftMessage &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "chat_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.chat_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "draft_message", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.draft_message_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "order", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.order_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::updateDeleteMessages &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "chat_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.chat_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "message_ids", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.message_ids_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "is_permanent", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.is_permanent_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "from_cache", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.from_cache_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::updateUserChatAction &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "chat_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.chat_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "user_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.user_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "action", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.action_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::updateUserStatus &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "user_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.user_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "status", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.status_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::updateUser &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "user", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.user_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::updateBasicGroup &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "basic_group", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.basic_group_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::updateSupergroup &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "supergroup", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.supergroup_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::updateSecretChat &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "secret_chat", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.secret_chat_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::updateUserFullInfo &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "user_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.user_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "user_full_info", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.user_full_info_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::updateBasicGroupFullInfo &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "basic_group_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.basic_group_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "basic_group_full_info", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.basic_group_full_info_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::updateSupergroupFullInfo &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "supergroup_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.supergroup_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "supergroup_full_info", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.supergroup_full_info_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::updateServiceNotification &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "type", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.type_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "content", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.content_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::updateFile &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "file", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.file_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::updateFileGenerationStart &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "generation_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.generation_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "original_path", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.original_path_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "destination_path", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.destination_path_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "conversion", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.conversion_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::updateFileGenerationStop &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "generation_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.generation_id_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::updateCall &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "call", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.call_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::updateUserPrivacySettingRules &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "setting", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.setting_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "rules", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.rules_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::updateUnreadMessageCount &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "unread_count", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.unread_count_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "unread_unmuted_count", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.unread_unmuted_count_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::updateUnreadChatCount &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "unread_count", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.unread_count_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "unread_unmuted_count", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.unread_unmuted_count_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "marked_as_unread_count", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.marked_as_unread_count_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "marked_as_unread_unmuted_count", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.marked_as_unread_unmuted_count_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::updateOption &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "name", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.name_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "value", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.value_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::updateInstalledStickerSets &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "is_masks", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.is_masks_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "sticker_set_ids", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.sticker_set_ids_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::updateTrendingStickerSets &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "sticker_sets", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.sticker_sets_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::updateRecentStickers &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "is_attached", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.is_attached_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "sticker_ids", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.sticker_ids_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::updateFavoriteStickers &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "sticker_ids", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.sticker_ids_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::updateSavedAnimations &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "animation_ids", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.animation_ids_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::updateLanguagePackStrings &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "localization_target", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.localization_target_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "language_pack_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.language_pack_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "strings", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.strings_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::updateConnectionState &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "state", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.state_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::updateTermsOfService &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "terms_of_service_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.terms_of_service_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "terms_of_service", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.terms_of_service_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::updateNewInlineQuery &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "sender_user_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.sender_user_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "user_location", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.user_location_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "query", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.query_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "offset", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.offset_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::updateNewChosenInlineResult &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "sender_user_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.sender_user_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "user_location", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.user_location_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "query", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.query_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "result_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.result_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "inline_message_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.inline_message_id_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::updateNewCallbackQuery &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "sender_user_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.sender_user_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "chat_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.chat_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "message_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.message_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "chat_instance", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.chat_instance_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "payload", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.payload_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::updateNewInlineCallbackQuery &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "sender_user_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.sender_user_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "inline_message_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.inline_message_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "chat_instance", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.chat_instance_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "payload", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.payload_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::updateNewShippingQuery &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "sender_user_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.sender_user_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "invoice_payload", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.invoice_payload_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "shipping_address", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.shipping_address_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::updateNewPreCheckoutQuery &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "sender_user_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.sender_user_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "currency", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.currency_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "total_amount", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.total_amount_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "invoice_payload", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json_bytes(to.invoice_payload_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "shipping_option_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.shipping_option_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "order_info", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.order_info_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::updateNewCustomEvent &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "event", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.event_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::updateNewCustomQuery &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "data", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.data_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "timeout", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.timeout_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::user &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "first_name", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.first_name_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "last_name", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.last_name_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "username", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.username_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "phone_number", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.phone_number_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "status", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.status_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "profile_photo", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.profile_photo_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "outgoing_link", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.outgoing_link_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "incoming_link", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.incoming_link_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "is_verified", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.is_verified_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "restriction_reason", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.restriction_reason_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "have_access", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.have_access_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "type", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.type_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "language_code", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.language_code_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::userFullInfo &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "is_blocked", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.is_blocked_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "can_be_called", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.can_be_called_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "has_private_calls", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.has_private_calls_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "bio", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.bio_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "share_text", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.share_text_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "group_in_common_count", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.group_in_common_count_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "bot_info", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.bot_info_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::userPrivacySettingShowStatus &to, JsonObject &from) {
  return Status::OK();
}
Status from_json(td_api::userPrivacySettingAllowChatInvites &to, JsonObject &from) {
  return Status::OK();
}
Status from_json(td_api::userPrivacySettingAllowCalls &to, JsonObject &from) {
  return Status::OK();
}
Status from_json(td_api::userPrivacySettingRuleAllowAll &to, JsonObject &from) {
  return Status::OK();
}
Status from_json(td_api::userPrivacySettingRuleAllowContacts &to, JsonObject &from) {
  return Status::OK();
}
Status from_json(td_api::userPrivacySettingRuleAllowUsers &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "user_ids", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.user_ids_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::userPrivacySettingRuleRestrictAll &to, JsonObject &from) {
  return Status::OK();
}
Status from_json(td_api::userPrivacySettingRuleRestrictContacts &to, JsonObject &from) {
  return Status::OK();
}
Status from_json(td_api::userPrivacySettingRuleRestrictUsers &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "user_ids", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.user_ids_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::userPrivacySettingRules &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "rules", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.rules_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::userProfilePhotos &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "total_count", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.total_count_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "photos", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.photos_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::userStatusEmpty &to, JsonObject &from) {
  return Status::OK();
}
Status from_json(td_api::userStatusOnline &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "expires", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.expires_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::userStatusOffline &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "was_online", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.was_online_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::userStatusRecently &to, JsonObject &from) {
  return Status::OK();
}
Status from_json(td_api::userStatusLastWeek &to, JsonObject &from) {
  return Status::OK();
}
Status from_json(td_api::userStatusLastMonth &to, JsonObject &from) {
  return Status::OK();
}
Status from_json(td_api::userTypeRegular &to, JsonObject &from) {
  return Status::OK();
}
Status from_json(td_api::userTypeDeleted &to, JsonObject &from) {
  return Status::OK();
}
Status from_json(td_api::userTypeBot &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "can_join_groups", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.can_join_groups_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "can_read_all_group_messages", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.can_read_all_group_messages_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "is_inline", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.is_inline_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "inline_query_placeholder", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.inline_query_placeholder_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "need_location", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.need_location_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::userTypeUnknown &to, JsonObject &from) {
  return Status::OK();
}
Status from_json(td_api::users &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "total_count", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.total_count_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "user_ids", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.user_ids_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::validatedOrderInfo &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "order_info_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.order_info_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "shipping_options", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.shipping_options_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::venue &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "location", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.location_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "title", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.title_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "address", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.address_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "provider", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.provider_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "type", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.type_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::video &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "duration", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.duration_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "width", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.width_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "height", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.height_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "file_name", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.file_name_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "mime_type", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.mime_type_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "has_stickers", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.has_stickers_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "supports_streaming", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.supports_streaming_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "thumbnail", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.thumbnail_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "video", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.video_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::videoNote &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "duration", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.duration_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "length", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.length_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "thumbnail", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.thumbnail_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "video", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.video_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::voiceNote &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "duration", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.duration_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "waveform", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json_bytes(to.waveform_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "mime_type", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.mime_type_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "voice", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.voice_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::wallpaper &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "sizes", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.sizes_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "color", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.color_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::wallpapers &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "wallpapers", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.wallpapers_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::webPage &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "url", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.url_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "display_url", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.display_url_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "type", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.type_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "site_name", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.site_name_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "title", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.title_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "description", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.description_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "photo", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.photo_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "embed_url", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.embed_url_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "embed_type", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.embed_type_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "embed_width", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.embed_width_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "embed_height", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.embed_height_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "duration", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.duration_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "author", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.author_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "animation", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.animation_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "audio", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.audio_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "document", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.document_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "sticker", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.sticker_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "video", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.video_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "video_note", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.video_note_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "voice_note", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.voice_note_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "has_instant_view", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.has_instant_view_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::webPageInstantView &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "page_blocks", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.page_blocks_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "is_full", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.is_full_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::acceptCall &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "call_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.call_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "protocol", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.protocol_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::acceptTermsOfService &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "terms_of_service_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.terms_of_service_id_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::addChatMember &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "chat_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.chat_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "user_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.user_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "forward_limit", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.forward_limit_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::addChatMembers &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "chat_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.chat_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "user_ids", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.user_ids_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::addFavoriteSticker &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "sticker", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.sticker_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::addLocalMessage &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "chat_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.chat_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "sender_user_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.sender_user_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "reply_to_message_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.reply_to_message_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "disable_notification", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.disable_notification_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "input_message_content", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.input_message_content_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::addNetworkStatistics &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "entry", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.entry_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::addProxy &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "server", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.server_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "port", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.port_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "enable", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.enable_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "type", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.type_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::addRecentSticker &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "is_attached", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.is_attached_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "sticker", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.sticker_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::addRecentlyFoundChat &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "chat_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.chat_id_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::addSavedAnimation &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "animation", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.animation_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::addStickerToSet &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "user_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.user_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "name", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.name_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "sticker", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.sticker_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::answerCallbackQuery &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "callback_query_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.callback_query_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "text", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.text_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "show_alert", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.show_alert_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "url", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.url_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "cache_time", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.cache_time_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::answerCustomQuery &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "custom_query_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.custom_query_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "data", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.data_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::answerInlineQuery &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "inline_query_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.inline_query_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "is_personal", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.is_personal_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "results", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.results_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "cache_time", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.cache_time_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "next_offset", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.next_offset_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "switch_pm_text", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.switch_pm_text_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "switch_pm_parameter", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.switch_pm_parameter_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::answerPreCheckoutQuery &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "pre_checkout_query_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.pre_checkout_query_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "error_message", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.error_message_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::answerShippingQuery &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "shipping_query_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.shipping_query_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "shipping_options", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.shipping_options_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "error_message", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.error_message_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::blockUser &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "user_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.user_id_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::cancelDownloadFile &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "file_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.file_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "only_if_pending", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.only_if_pending_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::cancelUploadFile &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "file_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.file_id_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::changeChatReportSpamState &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "chat_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.chat_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "is_spam_chat", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.is_spam_chat_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::changeImportedContacts &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "contacts", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.contacts_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::changePhoneNumber &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "phone_number", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.phone_number_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "allow_flash_call", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.allow_flash_call_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "is_current_phone_number", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.is_current_phone_number_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::changeStickerSet &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "set_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.set_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "is_installed", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.is_installed_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "is_archived", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.is_archived_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::checkAuthenticationBotToken &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "token", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.token_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::checkAuthenticationCode &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "code", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.code_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "first_name", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.first_name_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "last_name", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.last_name_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::checkAuthenticationPassword &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "password", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.password_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::checkChangePhoneNumberCode &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "code", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.code_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::checkChatInviteLink &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "invite_link", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.invite_link_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::checkChatUsername &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "chat_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.chat_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "username", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.username_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::checkDatabaseEncryptionKey &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "encryption_key", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json_bytes(to.encryption_key_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::checkEmailAddressVerificationCode &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "code", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.code_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::checkPhoneNumberConfirmationCode &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "code", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.code_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::checkPhoneNumberVerificationCode &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "code", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.code_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::cleanFileName &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "file_name", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.file_name_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::clearAllDraftMessages &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "exclude_secret_chats", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.exclude_secret_chats_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::clearImportedContacts &to, JsonObject &from) {
  return Status::OK();
}
Status from_json(td_api::clearRecentStickers &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "is_attached", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.is_attached_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::clearRecentlyFoundChats &to, JsonObject &from) {
  return Status::OK();
}
Status from_json(td_api::close &to, JsonObject &from) {
  return Status::OK();
}
Status from_json(td_api::closeChat &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "chat_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.chat_id_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::closeSecretChat &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "secret_chat_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.secret_chat_id_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::createBasicGroupChat &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "basic_group_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.basic_group_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "force", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.force_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::createCall &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "user_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.user_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "protocol", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.protocol_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::createNewBasicGroupChat &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "user_ids", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.user_ids_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "title", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.title_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::createNewSecretChat &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "user_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.user_id_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::createNewStickerSet &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "user_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.user_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "title", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.title_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "name", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.name_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "is_masks", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.is_masks_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "stickers", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.stickers_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::createNewSupergroupChat &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "title", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.title_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "is_channel", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.is_channel_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "description", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.description_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::createPrivateChat &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "user_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.user_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "force", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.force_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::createSecretChat &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "secret_chat_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.secret_chat_id_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::createSupergroupChat &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "supergroup_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.supergroup_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "force", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.force_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::createTemporaryPassword &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "password", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.password_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "valid_for", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.valid_for_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::deleteAccount &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "reason", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.reason_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::deleteChatHistory &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "chat_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.chat_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "remove_from_chat_list", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.remove_from_chat_list_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::deleteChatMessagesFromUser &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "chat_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.chat_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "user_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.user_id_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::deleteChatReplyMarkup &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "chat_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.chat_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "message_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.message_id_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::deleteFile &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "file_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.file_id_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::deleteLanguagePack &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "language_pack_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.language_pack_id_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::deleteMessages &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "chat_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.chat_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "message_ids", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.message_ids_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "revoke", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.revoke_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::deletePassportElement &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "type", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.type_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::deleteProfilePhoto &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "profile_photo_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.profile_photo_id_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::deleteSavedCredentials &to, JsonObject &from) {
  return Status::OK();
}
Status from_json(td_api::deleteSavedOrderInfo &to, JsonObject &from) {
  return Status::OK();
}
Status from_json(td_api::deleteSupergroup &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "supergroup_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.supergroup_id_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::destroy &to, JsonObject &from) {
  return Status::OK();
}
Status from_json(td_api::disableProxy &to, JsonObject &from) {
  return Status::OK();
}
Status from_json(td_api::discardCall &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "call_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.call_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "is_disconnected", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.is_disconnected_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "duration", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.duration_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "connection_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.connection_id_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::disconnectAllWebsites &to, JsonObject &from) {
  return Status::OK();
}
Status from_json(td_api::disconnectWebsite &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "website_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.website_id_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::downloadFile &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "file_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.file_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "priority", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.priority_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::editCustomLanguagePackInfo &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "info", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.info_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::editInlineMessageCaption &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "inline_message_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.inline_message_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "reply_markup", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.reply_markup_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "caption", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.caption_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::editInlineMessageLiveLocation &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "inline_message_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.inline_message_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "reply_markup", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.reply_markup_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "location", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.location_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::editInlineMessageMedia &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "inline_message_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.inline_message_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "reply_markup", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.reply_markup_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "input_message_content", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.input_message_content_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::editInlineMessageReplyMarkup &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "inline_message_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.inline_message_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "reply_markup", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.reply_markup_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::editInlineMessageText &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "inline_message_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.inline_message_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "reply_markup", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.reply_markup_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "input_message_content", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.input_message_content_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::editMessageCaption &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "chat_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.chat_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "message_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.message_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "reply_markup", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.reply_markup_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "caption", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.caption_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::editMessageLiveLocation &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "chat_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.chat_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "message_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.message_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "reply_markup", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.reply_markup_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "location", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.location_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::editMessageMedia &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "chat_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.chat_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "message_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.message_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "reply_markup", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.reply_markup_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "input_message_content", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.input_message_content_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::editMessageReplyMarkup &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "chat_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.chat_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "message_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.message_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "reply_markup", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.reply_markup_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::editMessageText &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "chat_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.chat_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "message_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.message_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "reply_markup", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.reply_markup_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "input_message_content", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.input_message_content_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::editProxy &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "proxy_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.proxy_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "server", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.server_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "port", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.port_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "enable", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.enable_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "type", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.type_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::enableProxy &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "proxy_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.proxy_id_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::finishFileGeneration &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "generation_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.generation_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "error", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.error_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::forwardMessages &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "chat_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.chat_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "from_chat_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.from_chat_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "message_ids", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.message_ids_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "disable_notification", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.disable_notification_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "from_background", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.from_background_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "as_album", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.as_album_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::generateChatInviteLink &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "chat_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.chat_id_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::getAccountTtl &to, JsonObject &from) {
  return Status::OK();
}
Status from_json(td_api::getActiveLiveLocationMessages &to, JsonObject &from) {
  return Status::OK();
}
Status from_json(td_api::getActiveSessions &to, JsonObject &from) {
  return Status::OK();
}
Status from_json(td_api::getAllPassportElements &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "password", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.password_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::getArchivedStickerSets &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "is_masks", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.is_masks_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "offset_sticker_set_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.offset_sticker_set_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "limit", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.limit_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::getAttachedStickerSets &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "file_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.file_id_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::getAuthorizationState &to, JsonObject &from) {
  return Status::OK();
}
Status from_json(td_api::getBasicGroup &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "basic_group_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.basic_group_id_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::getBasicGroupFullInfo &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "basic_group_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.basic_group_id_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::getBlockedUsers &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "offset", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.offset_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "limit", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.limit_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::getCallbackQueryAnswer &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "chat_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.chat_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "message_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.message_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "payload", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.payload_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::getChat &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "chat_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.chat_id_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::getChatAdministrators &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "chat_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.chat_id_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::getChatEventLog &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "chat_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.chat_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "query", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.query_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "from_event_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.from_event_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "limit", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.limit_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "filters", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.filters_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "user_ids", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.user_ids_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::getChatHistory &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "chat_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.chat_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "from_message_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.from_message_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "offset", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.offset_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "limit", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.limit_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "only_local", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.only_local_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::getChatMember &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "chat_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.chat_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "user_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.user_id_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::getChatMessageByDate &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "chat_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.chat_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "date", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.date_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::getChatMessageCount &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "chat_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.chat_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "filter", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.filter_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "return_local", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.return_local_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::getChatPinnedMessage &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "chat_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.chat_id_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::getChatReportSpamState &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "chat_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.chat_id_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::getChats &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "offset_order", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.offset_order_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "offset_chat_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.offset_chat_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "limit", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.limit_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::getConnectedWebsites &to, JsonObject &from) {
  return Status::OK();
}
Status from_json(td_api::getContacts &to, JsonObject &from) {
  return Status::OK();
}
Status from_json(td_api::getCountryCode &to, JsonObject &from) {
  return Status::OK();
}
Status from_json(td_api::getCreatedPublicChats &to, JsonObject &from) {
  return Status::OK();
}
Status from_json(td_api::getDeepLinkInfo &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "link", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.link_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::getFavoriteStickers &to, JsonObject &from) {
  return Status::OK();
}
Status from_json(td_api::getFile &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "file_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.file_id_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::getFileExtension &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "mime_type", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.mime_type_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::getFileMimeType &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "file_name", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.file_name_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::getGameHighScores &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "chat_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.chat_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "message_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.message_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "user_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.user_id_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::getGroupsInCommon &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "user_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.user_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "offset_chat_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.offset_chat_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "limit", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.limit_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::getImportedContactCount &to, JsonObject &from) {
  return Status::OK();
}
Status from_json(td_api::getInlineGameHighScores &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "inline_message_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.inline_message_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "user_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.user_id_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::getInlineQueryResults &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "bot_user_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.bot_user_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "chat_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.chat_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "user_location", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.user_location_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "query", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.query_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "offset", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.offset_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::getInstalledStickerSets &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "is_masks", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.is_masks_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::getInviteText &to, JsonObject &from) {
  return Status::OK();
}
Status from_json(td_api::getLanguagePackString &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "language_pack_database_path", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.language_pack_database_path_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "localization_target", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.localization_target_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "language_pack_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.language_pack_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "key", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.key_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::getLanguagePackStrings &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "language_pack_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.language_pack_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "keys", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.keys_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::getLocalizationTargetInfo &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "only_local", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.only_local_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::getMapThumbnailFile &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "location", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.location_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "zoom", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.zoom_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "width", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.width_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "height", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.height_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "scale", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.scale_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "chat_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.chat_id_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::getMe &to, JsonObject &from) {
  return Status::OK();
}
Status from_json(td_api::getMessage &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "chat_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.chat_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "message_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.message_id_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::getMessages &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "chat_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.chat_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "message_ids", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.message_ids_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::getNetworkStatistics &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "only_current", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.only_current_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::getOption &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "name", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.name_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::getPassportAuthorizationForm &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "bot_user_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.bot_user_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "scope", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.scope_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "public_key", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.public_key_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "nonce", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.nonce_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "password", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.password_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::getPassportElement &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "type", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.type_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "password", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.password_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::getPasswordState &to, JsonObject &from) {
  return Status::OK();
}
Status from_json(td_api::getPaymentForm &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "chat_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.chat_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "message_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.message_id_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::getPaymentReceipt &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "chat_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.chat_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "message_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.message_id_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::getPreferredCountryLanguage &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "country_code", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.country_code_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::getProxies &to, JsonObject &from) {
  return Status::OK();
}
Status from_json(td_api::getProxyLink &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "proxy_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.proxy_id_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::getPublicMessageLink &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "chat_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.chat_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "message_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.message_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "for_album", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.for_album_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::getRecentInlineBots &to, JsonObject &from) {
  return Status::OK();
}
Status from_json(td_api::getRecentStickers &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "is_attached", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.is_attached_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::getRecentlyVisitedTMeUrls &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "referrer", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.referrer_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::getRecoveryEmailAddress &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "password", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.password_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::getRemoteFile &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "remote_file_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.remote_file_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "file_type", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.file_type_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::getRepliedMessage &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "chat_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.chat_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "message_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.message_id_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::getSavedAnimations &to, JsonObject &from) {
  return Status::OK();
}
Status from_json(td_api::getSavedOrderInfo &to, JsonObject &from) {
  return Status::OK();
}
Status from_json(td_api::getScopeNotificationSettings &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "scope", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.scope_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::getSecretChat &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "secret_chat_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.secret_chat_id_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::getStickerEmojis &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "sticker", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.sticker_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::getStickerSet &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "set_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.set_id_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::getStickers &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "emoji", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.emoji_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "limit", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.limit_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::getStorageStatistics &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "chat_limit", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.chat_limit_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::getStorageStatisticsFast &to, JsonObject &from) {
  return Status::OK();
}
Status from_json(td_api::getSupergroup &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "supergroup_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.supergroup_id_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::getSupergroupFullInfo &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "supergroup_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.supergroup_id_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::getSupergroupMembers &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "supergroup_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.supergroup_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "filter", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.filter_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "offset", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.offset_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "limit", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.limit_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::getSupportUser &to, JsonObject &from) {
  return Status::OK();
}
Status from_json(td_api::getTemporaryPasswordState &to, JsonObject &from) {
  return Status::OK();
}
Status from_json(td_api::getTextEntities &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "text", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.text_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::getTopChats &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "category", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.category_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "limit", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.limit_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::getTrendingStickerSets &to, JsonObject &from) {
  return Status::OK();
}
Status from_json(td_api::getUser &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "user_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.user_id_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::getUserFullInfo &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "user_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.user_id_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::getUserPrivacySettingRules &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "setting", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.setting_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::getUserProfilePhotos &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "user_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.user_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "offset", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.offset_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "limit", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.limit_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::getWallpapers &to, JsonObject &from) {
  return Status::OK();
}
Status from_json(td_api::getWebPageInstantView &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "url", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.url_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "force_full", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.force_full_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::getWebPagePreview &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "text", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.text_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::importContacts &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "contacts", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.contacts_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::joinChat &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "chat_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.chat_id_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::joinChatByInviteLink &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "invite_link", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.invite_link_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::leaveChat &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "chat_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.chat_id_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::logOut &to, JsonObject &from) {
  return Status::OK();
}
Status from_json(td_api::openChat &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "chat_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.chat_id_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::openMessageContent &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "chat_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.chat_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "message_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.message_id_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::optimizeStorage &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "size", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.size_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "ttl", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.ttl_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "count", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.count_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "immunity_delay", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.immunity_delay_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "file_types", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.file_types_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "chat_ids", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.chat_ids_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "exclude_chat_ids", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.exclude_chat_ids_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "chat_limit", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.chat_limit_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::parseTextEntities &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "text", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.text_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "parse_mode", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.parse_mode_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::pinSupergroupMessage &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "supergroup_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.supergroup_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "message_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.message_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "disable_notification", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.disable_notification_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::pingProxy &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "proxy_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.proxy_id_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::processDcUpdate &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "dc", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.dc_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "addr", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.addr_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::readAllChatMentions &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "chat_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.chat_id_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::recoverAuthenticationPassword &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "recovery_code", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.recovery_code_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::recoverPassword &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "recovery_code", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.recovery_code_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::registerDevice &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "device_token", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.device_token_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "other_user_ids", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.other_user_ids_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::removeContacts &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "user_ids", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.user_ids_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::removeFavoriteSticker &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "sticker", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.sticker_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::removeProxy &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "proxy_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.proxy_id_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::removeRecentHashtag &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "hashtag", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.hashtag_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::removeRecentSticker &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "is_attached", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.is_attached_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "sticker", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.sticker_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::removeRecentlyFoundChat &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "chat_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.chat_id_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::removeSavedAnimation &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "animation", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.animation_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::removeStickerFromSet &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "sticker", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.sticker_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::removeTopChat &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "category", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.category_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "chat_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.chat_id_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::reorderInstalledStickerSets &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "is_masks", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.is_masks_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "sticker_set_ids", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.sticker_set_ids_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::reportChat &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "chat_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.chat_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "reason", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.reason_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "message_ids", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.message_ids_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::reportSupergroupSpam &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "supergroup_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.supergroup_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "user_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.user_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "message_ids", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.message_ids_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::requestAuthenticationPasswordRecovery &to, JsonObject &from) {
  return Status::OK();
}
Status from_json(td_api::requestPasswordRecovery &to, JsonObject &from) {
  return Status::OK();
}
Status from_json(td_api::resendAuthenticationCode &to, JsonObject &from) {
  return Status::OK();
}
Status from_json(td_api::resendChangePhoneNumberCode &to, JsonObject &from) {
  return Status::OK();
}
Status from_json(td_api::resendEmailAddressVerificationCode &to, JsonObject &from) {
  return Status::OK();
}
Status from_json(td_api::resendPhoneNumberConfirmationCode &to, JsonObject &from) {
  return Status::OK();
}
Status from_json(td_api::resendPhoneNumberVerificationCode &to, JsonObject &from) {
  return Status::OK();
}
Status from_json(td_api::resetAllNotificationSettings &to, JsonObject &from) {
  return Status::OK();
}
Status from_json(td_api::resetNetworkStatistics &to, JsonObject &from) {
  return Status::OK();
}
Status from_json(td_api::searchCallMessages &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "from_message_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.from_message_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "limit", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.limit_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "only_missed", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.only_missed_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::searchChatMembers &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "chat_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.chat_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "query", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.query_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "limit", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.limit_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "filter", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.filter_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::searchChatMessages &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "chat_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.chat_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "query", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.query_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "sender_user_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.sender_user_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "from_message_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.from_message_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "offset", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.offset_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "limit", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.limit_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "filter", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.filter_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::searchChatRecentLocationMessages &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "chat_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.chat_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "limit", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.limit_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::searchChats &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "query", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.query_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "limit", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.limit_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::searchChatsOnServer &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "query", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.query_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "limit", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.limit_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::searchContacts &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "query", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.query_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "limit", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.limit_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::searchHashtags &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "prefix", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.prefix_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "limit", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.limit_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::searchInstalledStickerSets &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "is_masks", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.is_masks_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "query", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.query_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "limit", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.limit_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::searchMessages &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "query", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.query_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "offset_date", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.offset_date_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "offset_chat_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.offset_chat_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "offset_message_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.offset_message_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "limit", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.limit_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::searchPublicChat &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "username", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.username_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::searchPublicChats &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "query", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.query_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::searchSecretMessages &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "chat_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.chat_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "query", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.query_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "from_search_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.from_search_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "limit", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.limit_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "filter", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.filter_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::searchStickerSet &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "name", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.name_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::searchStickerSets &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "query", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.query_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::searchStickers &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "emoji", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.emoji_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "limit", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.limit_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::sendBotStartMessage &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "bot_user_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.bot_user_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "chat_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.chat_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "parameter", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.parameter_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::sendCallDebugInformation &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "call_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.call_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "debug_information", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.debug_information_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::sendCallRating &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "call_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.call_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "rating", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.rating_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "comment", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.comment_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::sendChatAction &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "chat_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.chat_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "action", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.action_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::sendChatScreenshotTakenNotification &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "chat_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.chat_id_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::sendChatSetTtlMessage &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "chat_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.chat_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "ttl", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.ttl_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::sendCustomRequest &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "method", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.method_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "parameters", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.parameters_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::sendEmailAddressVerificationCode &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "email_address", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.email_address_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::sendInlineQueryResultMessage &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "chat_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.chat_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "reply_to_message_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.reply_to_message_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "disable_notification", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.disable_notification_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "from_background", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.from_background_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "query_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.query_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "result_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.result_id_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::sendMessage &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "chat_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.chat_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "reply_to_message_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.reply_to_message_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "disable_notification", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.disable_notification_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "from_background", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.from_background_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "reply_markup", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.reply_markup_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "input_message_content", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.input_message_content_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::sendMessageAlbum &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "chat_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.chat_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "reply_to_message_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.reply_to_message_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "disable_notification", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.disable_notification_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "from_background", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.from_background_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "input_message_contents", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.input_message_contents_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::sendPassportAuthorizationForm &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "autorization_form_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.autorization_form_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "types", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.types_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::sendPaymentForm &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "chat_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.chat_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "message_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.message_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "order_info_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.order_info_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "shipping_option_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.shipping_option_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "credentials", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.credentials_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::sendPhoneNumberConfirmationCode &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "hash", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.hash_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "phone_number", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.phone_number_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "allow_flash_call", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.allow_flash_call_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "is_current_phone_number", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.is_current_phone_number_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::sendPhoneNumberVerificationCode &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "phone_number", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.phone_number_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "allow_flash_call", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.allow_flash_call_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "is_current_phone_number", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.is_current_phone_number_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::setAccountTtl &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "ttl", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.ttl_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::setAlarm &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "seconds", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.seconds_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::setAuthenticationPhoneNumber &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "phone_number", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.phone_number_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "allow_flash_call", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.allow_flash_call_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "is_current_phone_number", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.is_current_phone_number_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::setBio &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "bio", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.bio_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::setBotUpdatesStatus &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "pending_update_count", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.pending_update_count_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "error_message", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.error_message_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::setChatClientData &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "chat_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.chat_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "client_data", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.client_data_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::setChatDraftMessage &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "chat_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.chat_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "draft_message", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.draft_message_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::setChatMemberStatus &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "chat_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.chat_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "user_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.user_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "status", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.status_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::setChatNotificationSettings &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "chat_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.chat_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "notification_settings", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.notification_settings_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::setChatPhoto &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "chat_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.chat_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "photo", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.photo_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::setChatTitle &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "chat_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.chat_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "title", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.title_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::setCustomLanguagePack &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "info", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.info_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "strings", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.strings_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::setCustomLanguagePackString &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "language_pack_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.language_pack_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "new_string", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.new_string_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::setDatabaseEncryptionKey &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "new_encryption_key", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json_bytes(to.new_encryption_key_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::setFileGenerationProgress &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "generation_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.generation_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "expected_size", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.expected_size_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "local_prefix_size", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.local_prefix_size_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::setGameScore &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "chat_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.chat_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "message_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.message_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "edit_message", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.edit_message_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "user_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.user_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "score", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.score_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "force", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.force_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::setInlineGameScore &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "inline_message_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.inline_message_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "edit_message", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.edit_message_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "user_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.user_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "score", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.score_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "force", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.force_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::setName &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "first_name", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.first_name_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "last_name", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.last_name_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::setNetworkType &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "type", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.type_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::setOption &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "name", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.name_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "value", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.value_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::setPassportElement &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "element", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.element_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "password", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.password_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::setPassportElementErrors &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "user_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.user_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "errors", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.errors_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::setPassword &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "old_password", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.old_password_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "new_password", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.new_password_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "new_hint", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.new_hint_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "set_recovery_email_address", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.set_recovery_email_address_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "new_recovery_email_address", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.new_recovery_email_address_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::setPinnedChats &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "chat_ids", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.chat_ids_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::setProfilePhoto &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "photo", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.photo_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::setRecoveryEmailAddress &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "password", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.password_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "new_recovery_email_address", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.new_recovery_email_address_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::setScopeNotificationSettings &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "scope", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.scope_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "notification_settings", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.notification_settings_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::setStickerPositionInSet &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "sticker", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.sticker_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "position", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.position_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::setSupergroupDescription &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "supergroup_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.supergroup_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "description", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.description_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::setSupergroupStickerSet &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "supergroup_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.supergroup_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "sticker_set_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.sticker_set_id_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::setSupergroupUsername &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "supergroup_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.supergroup_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "username", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.username_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::setTdlibParameters &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "parameters", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.parameters_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::setUserPrivacySettingRules &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "setting", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.setting_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "rules", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.rules_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::setUsername &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "username", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.username_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::terminateAllOtherSessions &to, JsonObject &from) {
  return Status::OK();
}
Status from_json(td_api::terminateSession &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "session_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.session_id_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::testCallBytes &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "x", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json_bytes(to.x_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::testCallEmpty &to, JsonObject &from) {
  return Status::OK();
}
Status from_json(td_api::testCallString &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "x", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.x_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::testCallVectorInt &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "x", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.x_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::testCallVectorIntObject &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "x", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.x_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::testCallVectorString &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "x", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.x_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::testCallVectorStringObject &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "x", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.x_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::testGetDifference &to, JsonObject &from) {
  return Status::OK();
}
Status from_json(td_api::testNetwork &to, JsonObject &from) {
  return Status::OK();
}
Status from_json(td_api::testSquareInt &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "x", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.x_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::testUseError &to, JsonObject &from) {
  return Status::OK();
}
Status from_json(td_api::testUseUpdate &to, JsonObject &from) {
  return Status::OK();
}
Status from_json(td_api::toggleBasicGroupAdministrators &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "basic_group_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.basic_group_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "everyone_is_administrator", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.everyone_is_administrator_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::toggleChatDefaultDisableNotification &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "chat_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.chat_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "default_disable_notification", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.default_disable_notification_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::toggleChatIsMarkedAsUnread &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "chat_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.chat_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "is_marked_as_unread", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.is_marked_as_unread_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::toggleChatIsPinned &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "chat_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.chat_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "is_pinned", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.is_pinned_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::toggleSupergroupInvites &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "supergroup_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.supergroup_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "anyone_can_invite", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.anyone_can_invite_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::toggleSupergroupIsAllHistoryAvailable &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "supergroup_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.supergroup_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "is_all_history_available", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.is_all_history_available_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::toggleSupergroupSignMessages &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "supergroup_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.supergroup_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "sign_messages", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.sign_messages_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::unblockUser &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "user_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.user_id_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::unpinSupergroupMessage &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "supergroup_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.supergroup_id_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::upgradeBasicGroupChatToSupergroupChat &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "chat_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.chat_id_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::uploadFile &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "file", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.file_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "file_type", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.file_type_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "priority", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.priority_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::uploadStickerFile &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "user_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.user_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "png_sticker", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.png_sticker_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::validateOrderInfo &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "chat_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.chat_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "message_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.message_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "order_info", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.order_info_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "allow_save", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.allow_save_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::viewMessages &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "chat_id", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.chat_id_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "message_ids", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.message_ids_, value));
    }
  }
  {
    TRY_RESULT(value, get_json_object_field(from, "force_read", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.force_read_, value));
    }
  }
  return Status::OK();
}
Status from_json(td_api::viewTrendingStickerSets &to, JsonObject &from) {
  {
    TRY_RESULT(value, get_json_object_field(from, "sticker_set_ids", JsonValue::Type::Null, true));
    if (value.type() != JsonValue::Type::Null) {
      TRY_STATUS(from_json(to.sticker_set_ids_, value));
    }
  }
  return Status::OK();
}
void to_json(JsonValueScope &jv, const td_api::accountTtl &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "accountTtl");
  jo << ctie("days", ToJson(object.days_));
}
void to_json(JsonValueScope &jv, const td_api::address &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "address");
  jo << ctie("country_code", ToJson(object.country_code_));
  jo << ctie("state", ToJson(object.state_));
  jo << ctie("city", ToJson(object.city_));
  jo << ctie("street_line1", ToJson(object.street_line1_));
  jo << ctie("street_line2", ToJson(object.street_line2_));
  jo << ctie("postal_code", ToJson(object.postal_code_));
}
void to_json(JsonValueScope &jv, const td_api::animation &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "animation");
  jo << ctie("duration", ToJson(object.duration_));
  jo << ctie("width", ToJson(object.width_));
  jo << ctie("height", ToJson(object.height_));
  jo << ctie("file_name", ToJson(object.file_name_));
  jo << ctie("mime_type", ToJson(object.mime_type_));
  if (object.thumbnail_) {
    jo << ctie("thumbnail", ToJson(object.thumbnail_));
  }
  if (object.animation_) {
    jo << ctie("animation", ToJson(object.animation_));
  }
}
void to_json(JsonValueScope &jv, const td_api::animations &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "animations");
  jo << ctie("animations", ToJson(object.animations_));
}
void to_json(JsonValueScope &jv, const td_api::audio &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "audio");
  jo << ctie("duration", ToJson(object.duration_));
  jo << ctie("title", ToJson(object.title_));
  jo << ctie("performer", ToJson(object.performer_));
  jo << ctie("file_name", ToJson(object.file_name_));
  jo << ctie("mime_type", ToJson(object.mime_type_));
  if (object.album_cover_thumbnail_) {
    jo << ctie("album_cover_thumbnail", ToJson(object.album_cover_thumbnail_));
  }
  if (object.audio_) {
    jo << ctie("audio", ToJson(object.audio_));
  }
}
void to_json(JsonValueScope &jv, const td_api::authenticationCodeInfo &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "authenticationCodeInfo");
  jo << ctie("phone_number", ToJson(object.phone_number_));
  if (object.type_) {
    jo << ctie("type", ToJson(object.type_));
  }
  if (object.next_type_) {
    jo << ctie("next_type", ToJson(object.next_type_));
  }
  jo << ctie("timeout", ToJson(object.timeout_));
}
void to_json(JsonValueScope &jv, const td_api::AuthenticationCodeType &object) {
  td_api::downcast_call(const_cast<td_api::AuthenticationCodeType &>(object), [&jv](const auto &object) { to_json(jv, object); });
}
void to_json(JsonValueScope &jv, const td_api::authenticationCodeTypeTelegramMessage &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "authenticationCodeTypeTelegramMessage");
  jo << ctie("length", ToJson(object.length_));
}
void to_json(JsonValueScope &jv, const td_api::authenticationCodeTypeSms &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "authenticationCodeTypeSms");
  jo << ctie("length", ToJson(object.length_));
}
void to_json(JsonValueScope &jv, const td_api::authenticationCodeTypeCall &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "authenticationCodeTypeCall");
  jo << ctie("length", ToJson(object.length_));
}
void to_json(JsonValueScope &jv, const td_api::authenticationCodeTypeFlashCall &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "authenticationCodeTypeFlashCall");
  jo << ctie("pattern", ToJson(object.pattern_));
}
void to_json(JsonValueScope &jv, const td_api::AuthorizationState &object) {
  td_api::downcast_call(const_cast<td_api::AuthorizationState &>(object), [&jv](const auto &object) { to_json(jv, object); });
}
void to_json(JsonValueScope &jv, const td_api::authorizationStateWaitTdlibParameters &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "authorizationStateWaitTdlibParameters");
}
void to_json(JsonValueScope &jv, const td_api::authorizationStateWaitEncryptionKey &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "authorizationStateWaitEncryptionKey");
  jo << ctie("is_encrypted", ToJson(object.is_encrypted_));
}
void to_json(JsonValueScope &jv, const td_api::authorizationStateWaitPhoneNumber &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "authorizationStateWaitPhoneNumber");
}
void to_json(JsonValueScope &jv, const td_api::authorizationStateWaitCode &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "authorizationStateWaitCode");
  jo << ctie("is_registered", ToJson(object.is_registered_));
  if (object.terms_of_service_) {
    jo << ctie("terms_of_service", ToJson(object.terms_of_service_));
  }
  if (object.code_info_) {
    jo << ctie("code_info", ToJson(object.code_info_));
  }
}
void to_json(JsonValueScope &jv, const td_api::authorizationStateWaitPassword &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "authorizationStateWaitPassword");
  jo << ctie("password_hint", ToJson(object.password_hint_));
  jo << ctie("has_recovery_email_address", ToJson(object.has_recovery_email_address_));
  jo << ctie("recovery_email_address_pattern", ToJson(object.recovery_email_address_pattern_));
}
void to_json(JsonValueScope &jv, const td_api::authorizationStateReady &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "authorizationStateReady");
}
void to_json(JsonValueScope &jv, const td_api::authorizationStateLoggingOut &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "authorizationStateLoggingOut");
}
void to_json(JsonValueScope &jv, const td_api::authorizationStateClosing &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "authorizationStateClosing");
}
void to_json(JsonValueScope &jv, const td_api::authorizationStateClosed &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "authorizationStateClosed");
}
void to_json(JsonValueScope &jv, const td_api::basicGroup &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "basicGroup");
  jo << ctie("id", ToJson(object.id_));
  jo << ctie("member_count", ToJson(object.member_count_));
  if (object.status_) {
    jo << ctie("status", ToJson(object.status_));
  }
  jo << ctie("everyone_is_administrator", ToJson(object.everyone_is_administrator_));
  jo << ctie("is_active", ToJson(object.is_active_));
  jo << ctie("upgraded_to_supergroup_id", ToJson(object.upgraded_to_supergroup_id_));
}
void to_json(JsonValueScope &jv, const td_api::basicGroupFullInfo &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "basicGroupFullInfo");
  jo << ctie("creator_user_id", ToJson(object.creator_user_id_));
  jo << ctie("members", ToJson(object.members_));
  jo << ctie("invite_link", ToJson(object.invite_link_));
}
void to_json(JsonValueScope &jv, const td_api::botCommand &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "botCommand");
  jo << ctie("command", ToJson(object.command_));
  jo << ctie("description", ToJson(object.description_));
}
void to_json(JsonValueScope &jv, const td_api::botInfo &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "botInfo");
  jo << ctie("description", ToJson(object.description_));
  jo << ctie("commands", ToJson(object.commands_));
}
void to_json(JsonValueScope &jv, const td_api::call &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "call");
  jo << ctie("id", ToJson(object.id_));
  jo << ctie("user_id", ToJson(object.user_id_));
  jo << ctie("is_outgoing", ToJson(object.is_outgoing_));
  if (object.state_) {
    jo << ctie("state", ToJson(object.state_));
  }
}
void to_json(JsonValueScope &jv, const td_api::callConnection &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "callConnection");
  jo << ctie("id", ToJson(JsonInt64{object.id_}));
  jo << ctie("ip", ToJson(object.ip_));
  jo << ctie("ipv6", ToJson(object.ipv6_));
  jo << ctie("port", ToJson(object.port_));
  jo << ctie("peer_tag", ToJson(base64_encode(object.peer_tag_)));
}
void to_json(JsonValueScope &jv, const td_api::CallDiscardReason &object) {
  td_api::downcast_call(const_cast<td_api::CallDiscardReason &>(object), [&jv](const auto &object) { to_json(jv, object); });
}
void to_json(JsonValueScope &jv, const td_api::callDiscardReasonEmpty &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "callDiscardReasonEmpty");
}
void to_json(JsonValueScope &jv, const td_api::callDiscardReasonMissed &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "callDiscardReasonMissed");
}
void to_json(JsonValueScope &jv, const td_api::callDiscardReasonDeclined &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "callDiscardReasonDeclined");
}
void to_json(JsonValueScope &jv, const td_api::callDiscardReasonDisconnected &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "callDiscardReasonDisconnected");
}
void to_json(JsonValueScope &jv, const td_api::callDiscardReasonHungUp &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "callDiscardReasonHungUp");
}
void to_json(JsonValueScope &jv, const td_api::callId &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "callId");
  jo << ctie("id", ToJson(object.id_));
}
void to_json(JsonValueScope &jv, const td_api::callProtocol &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "callProtocol");
  jo << ctie("udp_p2p", ToJson(object.udp_p2p_));
  jo << ctie("udp_reflector", ToJson(object.udp_reflector_));
  jo << ctie("min_layer", ToJson(object.min_layer_));
  jo << ctie("max_layer", ToJson(object.max_layer_));
}
void to_json(JsonValueScope &jv, const td_api::CallState &object) {
  td_api::downcast_call(const_cast<td_api::CallState &>(object), [&jv](const auto &object) { to_json(jv, object); });
}
void to_json(JsonValueScope &jv, const td_api::callStatePending &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "callStatePending");
  jo << ctie("is_created", ToJson(object.is_created_));
  jo << ctie("is_received", ToJson(object.is_received_));
}
void to_json(JsonValueScope &jv, const td_api::callStateExchangingKeys &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "callStateExchangingKeys");
}
void to_json(JsonValueScope &jv, const td_api::callStateReady &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "callStateReady");
  if (object.protocol_) {
    jo << ctie("protocol", ToJson(object.protocol_));
  }
  jo << ctie("connections", ToJson(object.connections_));
  jo << ctie("config", ToJson(object.config_));
  jo << ctie("encryption_key", ToJson(base64_encode(object.encryption_key_)));
  jo << ctie("emojis", ToJson(object.emojis_));
}
void to_json(JsonValueScope &jv, const td_api::callStateHangingUp &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "callStateHangingUp");
}
void to_json(JsonValueScope &jv, const td_api::callStateDiscarded &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "callStateDiscarded");
  if (object.reason_) {
    jo << ctie("reason", ToJson(object.reason_));
  }
  jo << ctie("need_rating", ToJson(object.need_rating_));
  jo << ctie("need_debug_information", ToJson(object.need_debug_information_));
}
void to_json(JsonValueScope &jv, const td_api::callStateError &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "callStateError");
  if (object.error_) {
    jo << ctie("error", ToJson(object.error_));
  }
}
void to_json(JsonValueScope &jv, const td_api::callbackQueryAnswer &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "callbackQueryAnswer");
  jo << ctie("text", ToJson(object.text_));
  jo << ctie("show_alert", ToJson(object.show_alert_));
  jo << ctie("url", ToJson(object.url_));
}
void to_json(JsonValueScope &jv, const td_api::CallbackQueryPayload &object) {
  td_api::downcast_call(const_cast<td_api::CallbackQueryPayload &>(object), [&jv](const auto &object) { to_json(jv, object); });
}
void to_json(JsonValueScope &jv, const td_api::callbackQueryPayloadData &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "callbackQueryPayloadData");
  jo << ctie("data", ToJson(base64_encode(object.data_)));
}
void to_json(JsonValueScope &jv, const td_api::callbackQueryPayloadGame &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "callbackQueryPayloadGame");
  jo << ctie("game_short_name", ToJson(object.game_short_name_));
}
void to_json(JsonValueScope &jv, const td_api::chat &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "chat");
  jo << ctie("id", ToJson(object.id_));
  if (object.type_) {
    jo << ctie("type", ToJson(object.type_));
  }
  jo << ctie("title", ToJson(object.title_));
  if (object.photo_) {
    jo << ctie("photo", ToJson(object.photo_));
  }
  if (object.last_message_) {
    jo << ctie("last_message", ToJson(object.last_message_));
  }
  jo << ctie("order", ToJson(JsonInt64{object.order_}));
  jo << ctie("is_pinned", ToJson(object.is_pinned_));
  jo << ctie("is_marked_as_unread", ToJson(object.is_marked_as_unread_));
  jo << ctie("is_sponsored", ToJson(object.is_sponsored_));
  jo << ctie("can_be_reported", ToJson(object.can_be_reported_));
  jo << ctie("default_disable_notification", ToJson(object.default_disable_notification_));
  jo << ctie("unread_count", ToJson(object.unread_count_));
  jo << ctie("last_read_inbox_message_id", ToJson(object.last_read_inbox_message_id_));
  jo << ctie("last_read_outbox_message_id", ToJson(object.last_read_outbox_message_id_));
  jo << ctie("unread_mention_count", ToJson(object.unread_mention_count_));
  if (object.notification_settings_) {
    jo << ctie("notification_settings", ToJson(object.notification_settings_));
  }
  jo << ctie("reply_markup_message_id", ToJson(object.reply_markup_message_id_));
  if (object.draft_message_) {
    jo << ctie("draft_message", ToJson(object.draft_message_));
  }
  jo << ctie("client_data", ToJson(object.client_data_));
}
void to_json(JsonValueScope &jv, const td_api::ChatAction &object) {
  td_api::downcast_call(const_cast<td_api::ChatAction &>(object), [&jv](const auto &object) { to_json(jv, object); });
}
void to_json(JsonValueScope &jv, const td_api::chatActionTyping &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "chatActionTyping");
}
void to_json(JsonValueScope &jv, const td_api::chatActionRecordingVideo &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "chatActionRecordingVideo");
}
void to_json(JsonValueScope &jv, const td_api::chatActionUploadingVideo &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "chatActionUploadingVideo");
  jo << ctie("progress", ToJson(object.progress_));
}
void to_json(JsonValueScope &jv, const td_api::chatActionRecordingVoiceNote &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "chatActionRecordingVoiceNote");
}
void to_json(JsonValueScope &jv, const td_api::chatActionUploadingVoiceNote &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "chatActionUploadingVoiceNote");
  jo << ctie("progress", ToJson(object.progress_));
}
void to_json(JsonValueScope &jv, const td_api::chatActionUploadingPhoto &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "chatActionUploadingPhoto");
  jo << ctie("progress", ToJson(object.progress_));
}
void to_json(JsonValueScope &jv, const td_api::chatActionUploadingDocument &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "chatActionUploadingDocument");
  jo << ctie("progress", ToJson(object.progress_));
}
void to_json(JsonValueScope &jv, const td_api::chatActionChoosingLocation &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "chatActionChoosingLocation");
}
void to_json(JsonValueScope &jv, const td_api::chatActionChoosingContact &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "chatActionChoosingContact");
}
void to_json(JsonValueScope &jv, const td_api::chatActionStartPlayingGame &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "chatActionStartPlayingGame");
}
void to_json(JsonValueScope &jv, const td_api::chatActionRecordingVideoNote &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "chatActionRecordingVideoNote");
}
void to_json(JsonValueScope &jv, const td_api::chatActionUploadingVideoNote &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "chatActionUploadingVideoNote");
  jo << ctie("progress", ToJson(object.progress_));
}
void to_json(JsonValueScope &jv, const td_api::chatActionCancel &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "chatActionCancel");
}
void to_json(JsonValueScope &jv, const td_api::chatEvent &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "chatEvent");
  jo << ctie("id", ToJson(JsonInt64{object.id_}));
  jo << ctie("date", ToJson(object.date_));
  jo << ctie("user_id", ToJson(object.user_id_));
  if (object.action_) {
    jo << ctie("action", ToJson(object.action_));
  }
}
void to_json(JsonValueScope &jv, const td_api::ChatEventAction &object) {
  td_api::downcast_call(const_cast<td_api::ChatEventAction &>(object), [&jv](const auto &object) { to_json(jv, object); });
}
void to_json(JsonValueScope &jv, const td_api::chatEventMessageEdited &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "chatEventMessageEdited");
  if (object.old_message_) {
    jo << ctie("old_message", ToJson(object.old_message_));
  }
  if (object.new_message_) {
    jo << ctie("new_message", ToJson(object.new_message_));
  }
}
void to_json(JsonValueScope &jv, const td_api::chatEventMessageDeleted &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "chatEventMessageDeleted");
  if (object.message_) {
    jo << ctie("message", ToJson(object.message_));
  }
}
void to_json(JsonValueScope &jv, const td_api::chatEventMessagePinned &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "chatEventMessagePinned");
  if (object.message_) {
    jo << ctie("message", ToJson(object.message_));
  }
}
void to_json(JsonValueScope &jv, const td_api::chatEventMessageUnpinned &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "chatEventMessageUnpinned");
}
void to_json(JsonValueScope &jv, const td_api::chatEventMemberJoined &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "chatEventMemberJoined");
}
void to_json(JsonValueScope &jv, const td_api::chatEventMemberLeft &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "chatEventMemberLeft");
}
void to_json(JsonValueScope &jv, const td_api::chatEventMemberInvited &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "chatEventMemberInvited");
  jo << ctie("user_id", ToJson(object.user_id_));
  if (object.status_) {
    jo << ctie("status", ToJson(object.status_));
  }
}
void to_json(JsonValueScope &jv, const td_api::chatEventMemberPromoted &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "chatEventMemberPromoted");
  jo << ctie("user_id", ToJson(object.user_id_));
  if (object.old_status_) {
    jo << ctie("old_status", ToJson(object.old_status_));
  }
  if (object.new_status_) {
    jo << ctie("new_status", ToJson(object.new_status_));
  }
}
void to_json(JsonValueScope &jv, const td_api::chatEventMemberRestricted &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "chatEventMemberRestricted");
  jo << ctie("user_id", ToJson(object.user_id_));
  if (object.old_status_) {
    jo << ctie("old_status", ToJson(object.old_status_));
  }
  if (object.new_status_) {
    jo << ctie("new_status", ToJson(object.new_status_));
  }
}
void to_json(JsonValueScope &jv, const td_api::chatEventTitleChanged &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "chatEventTitleChanged");
  jo << ctie("old_title", ToJson(object.old_title_));
  jo << ctie("new_title", ToJson(object.new_title_));
}
void to_json(JsonValueScope &jv, const td_api::chatEventDescriptionChanged &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "chatEventDescriptionChanged");
  jo << ctie("old_description", ToJson(object.old_description_));
  jo << ctie("new_description", ToJson(object.new_description_));
}
void to_json(JsonValueScope &jv, const td_api::chatEventUsernameChanged &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "chatEventUsernameChanged");
  jo << ctie("old_username", ToJson(object.old_username_));
  jo << ctie("new_username", ToJson(object.new_username_));
}
void to_json(JsonValueScope &jv, const td_api::chatEventPhotoChanged &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "chatEventPhotoChanged");
  if (object.old_photo_) {
    jo << ctie("old_photo", ToJson(object.old_photo_));
  }
  if (object.new_photo_) {
    jo << ctie("new_photo", ToJson(object.new_photo_));
  }
}
void to_json(JsonValueScope &jv, const td_api::chatEventInvitesToggled &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "chatEventInvitesToggled");
  jo << ctie("anyone_can_invite", ToJson(object.anyone_can_invite_));
}
void to_json(JsonValueScope &jv, const td_api::chatEventSignMessagesToggled &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "chatEventSignMessagesToggled");
  jo << ctie("sign_messages", ToJson(object.sign_messages_));
}
void to_json(JsonValueScope &jv, const td_api::chatEventStickerSetChanged &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "chatEventStickerSetChanged");
  jo << ctie("old_sticker_set_id", ToJson(JsonInt64{object.old_sticker_set_id_}));
  jo << ctie("new_sticker_set_id", ToJson(JsonInt64{object.new_sticker_set_id_}));
}
void to_json(JsonValueScope &jv, const td_api::chatEventIsAllHistoryAvailableToggled &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "chatEventIsAllHistoryAvailableToggled");
  jo << ctie("is_all_history_available", ToJson(object.is_all_history_available_));
}
void to_json(JsonValueScope &jv, const td_api::chatEventLogFilters &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "chatEventLogFilters");
  jo << ctie("message_edits", ToJson(object.message_edits_));
  jo << ctie("message_deletions", ToJson(object.message_deletions_));
  jo << ctie("message_pins", ToJson(object.message_pins_));
  jo << ctie("member_joins", ToJson(object.member_joins_));
  jo << ctie("member_leaves", ToJson(object.member_leaves_));
  jo << ctie("member_invites", ToJson(object.member_invites_));
  jo << ctie("member_promotions", ToJson(object.member_promotions_));
  jo << ctie("member_restrictions", ToJson(object.member_restrictions_));
  jo << ctie("info_changes", ToJson(object.info_changes_));
  jo << ctie("setting_changes", ToJson(object.setting_changes_));
}
void to_json(JsonValueScope &jv, const td_api::chatEvents &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "chatEvents");
  jo << ctie("events", ToJson(object.events_));
}
void to_json(JsonValueScope &jv, const td_api::chatInviteLink &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "chatInviteLink");
  jo << ctie("invite_link", ToJson(object.invite_link_));
}
void to_json(JsonValueScope &jv, const td_api::chatInviteLinkInfo &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "chatInviteLinkInfo");
  jo << ctie("chat_id", ToJson(object.chat_id_));
  if (object.type_) {
    jo << ctie("type", ToJson(object.type_));
  }
  jo << ctie("title", ToJson(object.title_));
  if (object.photo_) {
    jo << ctie("photo", ToJson(object.photo_));
  }
  jo << ctie("member_count", ToJson(object.member_count_));
  jo << ctie("member_user_ids", ToJson(object.member_user_ids_));
  jo << ctie("is_public", ToJson(object.is_public_));
}
void to_json(JsonValueScope &jv, const td_api::chatMember &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "chatMember");
  jo << ctie("user_id", ToJson(object.user_id_));
  jo << ctie("inviter_user_id", ToJson(object.inviter_user_id_));
  jo << ctie("joined_chat_date", ToJson(object.joined_chat_date_));
  if (object.status_) {
    jo << ctie("status", ToJson(object.status_));
  }
  if (object.bot_info_) {
    jo << ctie("bot_info", ToJson(object.bot_info_));
  }
}
void to_json(JsonValueScope &jv, const td_api::ChatMemberStatus &object) {
  td_api::downcast_call(const_cast<td_api::ChatMemberStatus &>(object), [&jv](const auto &object) { to_json(jv, object); });
}
void to_json(JsonValueScope &jv, const td_api::chatMemberStatusCreator &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "chatMemberStatusCreator");
  jo << ctie("is_member", ToJson(object.is_member_));
}
void to_json(JsonValueScope &jv, const td_api::chatMemberStatusAdministrator &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "chatMemberStatusAdministrator");
  jo << ctie("can_be_edited", ToJson(object.can_be_edited_));
  jo << ctie("can_change_info", ToJson(object.can_change_info_));
  jo << ctie("can_post_messages", ToJson(object.can_post_messages_));
  jo << ctie("can_edit_messages", ToJson(object.can_edit_messages_));
  jo << ctie("can_delete_messages", ToJson(object.can_delete_messages_));
  jo << ctie("can_invite_users", ToJson(object.can_invite_users_));
  jo << ctie("can_restrict_members", ToJson(object.can_restrict_members_));
  jo << ctie("can_pin_messages", ToJson(object.can_pin_messages_));
  jo << ctie("can_promote_members", ToJson(object.can_promote_members_));
}
void to_json(JsonValueScope &jv, const td_api::chatMemberStatusMember &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "chatMemberStatusMember");
}
void to_json(JsonValueScope &jv, const td_api::chatMemberStatusRestricted &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "chatMemberStatusRestricted");
  jo << ctie("is_member", ToJson(object.is_member_));
  jo << ctie("restricted_until_date", ToJson(object.restricted_until_date_));
  jo << ctie("can_send_messages", ToJson(object.can_send_messages_));
  jo << ctie("can_send_media_messages", ToJson(object.can_send_media_messages_));
  jo << ctie("can_send_other_messages", ToJson(object.can_send_other_messages_));
  jo << ctie("can_add_web_page_previews", ToJson(object.can_add_web_page_previews_));
}
void to_json(JsonValueScope &jv, const td_api::chatMemberStatusLeft &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "chatMemberStatusLeft");
}
void to_json(JsonValueScope &jv, const td_api::chatMemberStatusBanned &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "chatMemberStatusBanned");
  jo << ctie("banned_until_date", ToJson(object.banned_until_date_));
}
void to_json(JsonValueScope &jv, const td_api::chatMembers &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "chatMembers");
  jo << ctie("total_count", ToJson(object.total_count_));
  jo << ctie("members", ToJson(object.members_));
}
void to_json(JsonValueScope &jv, const td_api::ChatMembersFilter &object) {
  td_api::downcast_call(const_cast<td_api::ChatMembersFilter &>(object), [&jv](const auto &object) { to_json(jv, object); });
}
void to_json(JsonValueScope &jv, const td_api::chatMembersFilterAdministrators &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "chatMembersFilterAdministrators");
}
void to_json(JsonValueScope &jv, const td_api::chatMembersFilterMembers &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "chatMembersFilterMembers");
}
void to_json(JsonValueScope &jv, const td_api::chatMembersFilterRestricted &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "chatMembersFilterRestricted");
}
void to_json(JsonValueScope &jv, const td_api::chatMembersFilterBanned &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "chatMembersFilterBanned");
}
void to_json(JsonValueScope &jv, const td_api::chatMembersFilterBots &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "chatMembersFilterBots");
}
void to_json(JsonValueScope &jv, const td_api::chatNotificationSettings &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "chatNotificationSettings");
  jo << ctie("use_default_mute_for", ToJson(object.use_default_mute_for_));
  jo << ctie("mute_for", ToJson(object.mute_for_));
  jo << ctie("use_default_sound", ToJson(object.use_default_sound_));
  jo << ctie("sound", ToJson(object.sound_));
  jo << ctie("use_default_show_preview", ToJson(object.use_default_show_preview_));
  jo << ctie("show_preview", ToJson(object.show_preview_));
}
void to_json(JsonValueScope &jv, const td_api::chatPhoto &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "chatPhoto");
  if (object.small_) {
    jo << ctie("small", ToJson(object.small_));
  }
  if (object.big_) {
    jo << ctie("big", ToJson(object.big_));
  }
}
void to_json(JsonValueScope &jv, const td_api::ChatReportReason &object) {
  td_api::downcast_call(const_cast<td_api::ChatReportReason &>(object), [&jv](const auto &object) { to_json(jv, object); });
}
void to_json(JsonValueScope &jv, const td_api::chatReportReasonSpam &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "chatReportReasonSpam");
}
void to_json(JsonValueScope &jv, const td_api::chatReportReasonViolence &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "chatReportReasonViolence");
}
void to_json(JsonValueScope &jv, const td_api::chatReportReasonPornography &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "chatReportReasonPornography");
}
void to_json(JsonValueScope &jv, const td_api::chatReportReasonCopyright &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "chatReportReasonCopyright");
}
void to_json(JsonValueScope &jv, const td_api::chatReportReasonCustom &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "chatReportReasonCustom");
  jo << ctie("text", ToJson(object.text_));
}
void to_json(JsonValueScope &jv, const td_api::chatReportSpamState &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "chatReportSpamState");
  jo << ctie("can_report_spam", ToJson(object.can_report_spam_));
}
void to_json(JsonValueScope &jv, const td_api::ChatType &object) {
  td_api::downcast_call(const_cast<td_api::ChatType &>(object), [&jv](const auto &object) { to_json(jv, object); });
}
void to_json(JsonValueScope &jv, const td_api::chatTypePrivate &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "chatTypePrivate");
  jo << ctie("user_id", ToJson(object.user_id_));
}
void to_json(JsonValueScope &jv, const td_api::chatTypeBasicGroup &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "chatTypeBasicGroup");
  jo << ctie("basic_group_id", ToJson(object.basic_group_id_));
}
void to_json(JsonValueScope &jv, const td_api::chatTypeSupergroup &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "chatTypeSupergroup");
  jo << ctie("supergroup_id", ToJson(object.supergroup_id_));
  jo << ctie("is_channel", ToJson(object.is_channel_));
}
void to_json(JsonValueScope &jv, const td_api::chatTypeSecret &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "chatTypeSecret");
  jo << ctie("secret_chat_id", ToJson(object.secret_chat_id_));
  jo << ctie("user_id", ToJson(object.user_id_));
}
void to_json(JsonValueScope &jv, const td_api::chats &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "chats");
  jo << ctie("chat_ids", ToJson(object.chat_ids_));
}
void to_json(JsonValueScope &jv, const td_api::CheckChatUsernameResult &object) {
  td_api::downcast_call(const_cast<td_api::CheckChatUsernameResult &>(object), [&jv](const auto &object) { to_json(jv, object); });
}
void to_json(JsonValueScope &jv, const td_api::checkChatUsernameResultOk &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "checkChatUsernameResultOk");
}
void to_json(JsonValueScope &jv, const td_api::checkChatUsernameResultUsernameInvalid &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "checkChatUsernameResultUsernameInvalid");
}
void to_json(JsonValueScope &jv, const td_api::checkChatUsernameResultUsernameOccupied &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "checkChatUsernameResultUsernameOccupied");
}
void to_json(JsonValueScope &jv, const td_api::checkChatUsernameResultPublicChatsTooMuch &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "checkChatUsernameResultPublicChatsTooMuch");
}
void to_json(JsonValueScope &jv, const td_api::checkChatUsernameResultPublicGroupsUnavailable &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "checkChatUsernameResultPublicGroupsUnavailable");
}
void to_json(JsonValueScope &jv, const td_api::connectedWebsite &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "connectedWebsite");
  jo << ctie("id", ToJson(JsonInt64{object.id_}));
  jo << ctie("domain_name", ToJson(object.domain_name_));
  jo << ctie("bot_user_id", ToJson(object.bot_user_id_));
  jo << ctie("browser", ToJson(object.browser_));
  jo << ctie("platform", ToJson(object.platform_));
  jo << ctie("log_in_date", ToJson(object.log_in_date_));
  jo << ctie("last_active_date", ToJson(object.last_active_date_));
  jo << ctie("ip", ToJson(object.ip_));
  jo << ctie("location", ToJson(object.location_));
}
void to_json(JsonValueScope &jv, const td_api::connectedWebsites &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "connectedWebsites");
  jo << ctie("websites", ToJson(object.websites_));
}
void to_json(JsonValueScope &jv, const td_api::ConnectionState &object) {
  td_api::downcast_call(const_cast<td_api::ConnectionState &>(object), [&jv](const auto &object) { to_json(jv, object); });
}
void to_json(JsonValueScope &jv, const td_api::connectionStateWaitingForNetwork &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "connectionStateWaitingForNetwork");
}
void to_json(JsonValueScope &jv, const td_api::connectionStateConnectingToProxy &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "connectionStateConnectingToProxy");
}
void to_json(JsonValueScope &jv, const td_api::connectionStateConnecting &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "connectionStateConnecting");
}
void to_json(JsonValueScope &jv, const td_api::connectionStateUpdating &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "connectionStateUpdating");
}
void to_json(JsonValueScope &jv, const td_api::connectionStateReady &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "connectionStateReady");
}
void to_json(JsonValueScope &jv, const td_api::contact &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "contact");
  jo << ctie("phone_number", ToJson(object.phone_number_));
  jo << ctie("first_name", ToJson(object.first_name_));
  jo << ctie("last_name", ToJson(object.last_name_));
  jo << ctie("vcard", ToJson(object.vcard_));
  jo << ctie("user_id", ToJson(object.user_id_));
}
void to_json(JsonValueScope &jv, const td_api::count &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "count");
  jo << ctie("count", ToJson(object.count_));
}
void to_json(JsonValueScope &jv, const td_api::customRequestResult &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "customRequestResult");
  jo << ctie("result", ToJson(object.result_));
}
void to_json(JsonValueScope &jv, const td_api::date &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "date");
  jo << ctie("day", ToJson(object.day_));
  jo << ctie("month", ToJson(object.month_));
  jo << ctie("year", ToJson(object.year_));
}
void to_json(JsonValueScope &jv, const td_api::datedFile &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "datedFile");
  if (object.file_) {
    jo << ctie("file", ToJson(object.file_));
  }
  jo << ctie("date", ToJson(object.date_));
}
void to_json(JsonValueScope &jv, const td_api::deepLinkInfo &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "deepLinkInfo");
  if (object.text_) {
    jo << ctie("text", ToJson(object.text_));
  }
  jo << ctie("need_update_application", ToJson(object.need_update_application_));
}
void to_json(JsonValueScope &jv, const td_api::DeviceToken &object) {
  td_api::downcast_call(const_cast<td_api::DeviceToken &>(object), [&jv](const auto &object) { to_json(jv, object); });
}
void to_json(JsonValueScope &jv, const td_api::deviceTokenGoogleCloudMessaging &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "deviceTokenGoogleCloudMessaging");
  jo << ctie("token", ToJson(object.token_));
}
void to_json(JsonValueScope &jv, const td_api::deviceTokenApplePush &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "deviceTokenApplePush");
  jo << ctie("device_token", ToJson(object.device_token_));
  jo << ctie("is_app_sandbox", ToJson(object.is_app_sandbox_));
}
void to_json(JsonValueScope &jv, const td_api::deviceTokenApplePushVoIP &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "deviceTokenApplePushVoIP");
  jo << ctie("device_token", ToJson(object.device_token_));
  jo << ctie("is_app_sandbox", ToJson(object.is_app_sandbox_));
}
void to_json(JsonValueScope &jv, const td_api::deviceTokenWindowsPush &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "deviceTokenWindowsPush");
  jo << ctie("access_token", ToJson(object.access_token_));
}
void to_json(JsonValueScope &jv, const td_api::deviceTokenMicrosoftPush &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "deviceTokenMicrosoftPush");
  jo << ctie("channel_uri", ToJson(object.channel_uri_));
}
void to_json(JsonValueScope &jv, const td_api::deviceTokenMicrosoftPushVoIP &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "deviceTokenMicrosoftPushVoIP");
  jo << ctie("channel_uri", ToJson(object.channel_uri_));
}
void to_json(JsonValueScope &jv, const td_api::deviceTokenWebPush &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "deviceTokenWebPush");
  jo << ctie("endpoint", ToJson(object.endpoint_));
  jo << ctie("p256dh_base64url", ToJson(object.p256dh_base64url_));
  jo << ctie("auth_base64url", ToJson(object.auth_base64url_));
}
void to_json(JsonValueScope &jv, const td_api::deviceTokenSimplePush &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "deviceTokenSimplePush");
  jo << ctie("endpoint", ToJson(object.endpoint_));
}
void to_json(JsonValueScope &jv, const td_api::deviceTokenUbuntuPush &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "deviceTokenUbuntuPush");
  jo << ctie("token", ToJson(object.token_));
}
void to_json(JsonValueScope &jv, const td_api::deviceTokenBlackBerryPush &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "deviceTokenBlackBerryPush");
  jo << ctie("token", ToJson(object.token_));
}
void to_json(JsonValueScope &jv, const td_api::deviceTokenTizenPush &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "deviceTokenTizenPush");
  jo << ctie("reg_id", ToJson(object.reg_id_));
}
void to_json(JsonValueScope &jv, const td_api::document &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "document");
  jo << ctie("file_name", ToJson(object.file_name_));
  jo << ctie("mime_type", ToJson(object.mime_type_));
  if (object.thumbnail_) {
    jo << ctie("thumbnail", ToJson(object.thumbnail_));
  }
  if (object.document_) {
    jo << ctie("document", ToJson(object.document_));
  }
}
void to_json(JsonValueScope &jv, const td_api::draftMessage &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "draftMessage");
  jo << ctie("reply_to_message_id", ToJson(object.reply_to_message_id_));
  if (object.input_message_text_) {
    jo << ctie("input_message_text", ToJson(object.input_message_text_));
  }
}
void to_json(JsonValueScope &jv, const td_api::emailAddressAuthenticationCodeInfo &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "emailAddressAuthenticationCodeInfo");
  jo << ctie("email_address_pattern", ToJson(object.email_address_pattern_));
  jo << ctie("length", ToJson(object.length_));
}
void to_json(JsonValueScope &jv, const td_api::encryptedCredentials &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "encryptedCredentials");
  jo << ctie("data", ToJson(base64_encode(object.data_)));
  jo << ctie("hash", ToJson(base64_encode(object.hash_)));
  jo << ctie("secret", ToJson(base64_encode(object.secret_)));
}
void to_json(JsonValueScope &jv, const td_api::encryptedPassportElement &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "encryptedPassportElement");
  if (object.type_) {
    jo << ctie("type", ToJson(object.type_));
  }
  jo << ctie("data", ToJson(base64_encode(object.data_)));
  if (object.front_side_) {
    jo << ctie("front_side", ToJson(object.front_side_));
  }
  if (object.reverse_side_) {
    jo << ctie("reverse_side", ToJson(object.reverse_side_));
  }
  if (object.selfie_) {
    jo << ctie("selfie", ToJson(object.selfie_));
  }
  jo << ctie("translation", ToJson(object.translation_));
  jo << ctie("files", ToJson(object.files_));
  jo << ctie("value", ToJson(object.value_));
  jo << ctie("hash", ToJson(object.hash_));
}
void to_json(JsonValueScope &jv, const td_api::error &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "error");
  jo << ctie("code", ToJson(object.code_));
  jo << ctie("message", ToJson(object.message_));
}
void to_json(JsonValueScope &jv, const td_api::file &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "file");
  jo << ctie("id", ToJson(object.id_));
  jo << ctie("size", ToJson(object.size_));
  jo << ctie("expected_size", ToJson(object.expected_size_));
  if (object.local_) {
    jo << ctie("local", ToJson(object.local_));
  }
  if (object.remote_) {
    jo << ctie("remote", ToJson(object.remote_));
  }
}
void to_json(JsonValueScope &jv, const td_api::FileType &object) {
  td_api::downcast_call(const_cast<td_api::FileType &>(object), [&jv](const auto &object) { to_json(jv, object); });
}
void to_json(JsonValueScope &jv, const td_api::fileTypeNone &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "fileTypeNone");
}
void to_json(JsonValueScope &jv, const td_api::fileTypeAnimation &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "fileTypeAnimation");
}
void to_json(JsonValueScope &jv, const td_api::fileTypeAudio &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "fileTypeAudio");
}
void to_json(JsonValueScope &jv, const td_api::fileTypeDocument &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "fileTypeDocument");
}
void to_json(JsonValueScope &jv, const td_api::fileTypePhoto &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "fileTypePhoto");
}
void to_json(JsonValueScope &jv, const td_api::fileTypeProfilePhoto &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "fileTypeProfilePhoto");
}
void to_json(JsonValueScope &jv, const td_api::fileTypeSecret &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "fileTypeSecret");
}
void to_json(JsonValueScope &jv, const td_api::fileTypeSecretThumbnail &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "fileTypeSecretThumbnail");
}
void to_json(JsonValueScope &jv, const td_api::fileTypeSecure &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "fileTypeSecure");
}
void to_json(JsonValueScope &jv, const td_api::fileTypeSticker &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "fileTypeSticker");
}
void to_json(JsonValueScope &jv, const td_api::fileTypeThumbnail &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "fileTypeThumbnail");
}
void to_json(JsonValueScope &jv, const td_api::fileTypeUnknown &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "fileTypeUnknown");
}
void to_json(JsonValueScope &jv, const td_api::fileTypeVideo &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "fileTypeVideo");
}
void to_json(JsonValueScope &jv, const td_api::fileTypeVideoNote &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "fileTypeVideoNote");
}
void to_json(JsonValueScope &jv, const td_api::fileTypeVoiceNote &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "fileTypeVoiceNote");
}
void to_json(JsonValueScope &jv, const td_api::fileTypeWallpaper &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "fileTypeWallpaper");
}
void to_json(JsonValueScope &jv, const td_api::formattedText &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "formattedText");
  jo << ctie("text", ToJson(object.text_));
  jo << ctie("entities", ToJson(object.entities_));
}
void to_json(JsonValueScope &jv, const td_api::foundMessages &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "foundMessages");
  jo << ctie("messages", ToJson(object.messages_));
  jo << ctie("next_from_search_id", ToJson(JsonInt64{object.next_from_search_id_}));
}
void to_json(JsonValueScope &jv, const td_api::game &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "game");
  jo << ctie("id", ToJson(JsonInt64{object.id_}));
  jo << ctie("short_name", ToJson(object.short_name_));
  jo << ctie("title", ToJson(object.title_));
  if (object.text_) {
    jo << ctie("text", ToJson(object.text_));
  }
  jo << ctie("description", ToJson(object.description_));
  if (object.photo_) {
    jo << ctie("photo", ToJson(object.photo_));
  }
  if (object.animation_) {
    jo << ctie("animation", ToJson(object.animation_));
  }
}
void to_json(JsonValueScope &jv, const td_api::gameHighScore &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "gameHighScore");
  jo << ctie("position", ToJson(object.position_));
  jo << ctie("user_id", ToJson(object.user_id_));
  jo << ctie("score", ToJson(object.score_));
}
void to_json(JsonValueScope &jv, const td_api::gameHighScores &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "gameHighScores");
  jo << ctie("scores", ToJson(object.scores_));
}
void to_json(JsonValueScope &jv, const td_api::hashtags &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "hashtags");
  jo << ctie("hashtags", ToJson(object.hashtags_));
}
void to_json(JsonValueScope &jv, const td_api::identityDocument &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "identityDocument");
  jo << ctie("number", ToJson(object.number_));
  if (object.expiry_date_) {
    jo << ctie("expiry_date", ToJson(object.expiry_date_));
  }
  if (object.front_side_) {
    jo << ctie("front_side", ToJson(object.front_side_));
  }
  if (object.reverse_side_) {
    jo << ctie("reverse_side", ToJson(object.reverse_side_));
  }
  if (object.selfie_) {
    jo << ctie("selfie", ToJson(object.selfie_));
  }
  jo << ctie("translation", ToJson(object.translation_));
}
void to_json(JsonValueScope &jv, const td_api::importedContacts &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "importedContacts");
  jo << ctie("user_ids", ToJson(object.user_ids_));
  jo << ctie("importer_count", ToJson(object.importer_count_));
}
void to_json(JsonValueScope &jv, const td_api::inlineKeyboardButton &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "inlineKeyboardButton");
  jo << ctie("text", ToJson(object.text_));
  if (object.type_) {
    jo << ctie("type", ToJson(object.type_));
  }
}
void to_json(JsonValueScope &jv, const td_api::InlineKeyboardButtonType &object) {
  td_api::downcast_call(const_cast<td_api::InlineKeyboardButtonType &>(object), [&jv](const auto &object) { to_json(jv, object); });
}
void to_json(JsonValueScope &jv, const td_api::inlineKeyboardButtonTypeUrl &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "inlineKeyboardButtonTypeUrl");
  jo << ctie("url", ToJson(object.url_));
}
void to_json(JsonValueScope &jv, const td_api::inlineKeyboardButtonTypeCallback &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "inlineKeyboardButtonTypeCallback");
  jo << ctie("data", ToJson(base64_encode(object.data_)));
}
void to_json(JsonValueScope &jv, const td_api::inlineKeyboardButtonTypeCallbackGame &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "inlineKeyboardButtonTypeCallbackGame");
}
void to_json(JsonValueScope &jv, const td_api::inlineKeyboardButtonTypeSwitchInline &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "inlineKeyboardButtonTypeSwitchInline");
  jo << ctie("query", ToJson(object.query_));
  jo << ctie("in_current_chat", ToJson(object.in_current_chat_));
}
void to_json(JsonValueScope &jv, const td_api::inlineKeyboardButtonTypeBuy &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "inlineKeyboardButtonTypeBuy");
}
void to_json(JsonValueScope &jv, const td_api::InlineQueryResult &object) {
  td_api::downcast_call(const_cast<td_api::InlineQueryResult &>(object), [&jv](const auto &object) { to_json(jv, object); });
}
void to_json(JsonValueScope &jv, const td_api::inlineQueryResultArticle &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "inlineQueryResultArticle");
  jo << ctie("id", ToJson(object.id_));
  jo << ctie("url", ToJson(object.url_));
  jo << ctie("hide_url", ToJson(object.hide_url_));
  jo << ctie("title", ToJson(object.title_));
  jo << ctie("description", ToJson(object.description_));
  if (object.thumbnail_) {
    jo << ctie("thumbnail", ToJson(object.thumbnail_));
  }
}
void to_json(JsonValueScope &jv, const td_api::inlineQueryResultContact &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "inlineQueryResultContact");
  jo << ctie("id", ToJson(object.id_));
  if (object.contact_) {
    jo << ctie("contact", ToJson(object.contact_));
  }
  if (object.thumbnail_) {
    jo << ctie("thumbnail", ToJson(object.thumbnail_));
  }
}
void to_json(JsonValueScope &jv, const td_api::inlineQueryResultLocation &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "inlineQueryResultLocation");
  jo << ctie("id", ToJson(object.id_));
  if (object.location_) {
    jo << ctie("location", ToJson(object.location_));
  }
  jo << ctie("title", ToJson(object.title_));
  if (object.thumbnail_) {
    jo << ctie("thumbnail", ToJson(object.thumbnail_));
  }
}
void to_json(JsonValueScope &jv, const td_api::inlineQueryResultVenue &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "inlineQueryResultVenue");
  jo << ctie("id", ToJson(object.id_));
  if (object.venue_) {
    jo << ctie("venue", ToJson(object.venue_));
  }
  if (object.thumbnail_) {
    jo << ctie("thumbnail", ToJson(object.thumbnail_));
  }
}
void to_json(JsonValueScope &jv, const td_api::inlineQueryResultGame &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "inlineQueryResultGame");
  jo << ctie("id", ToJson(object.id_));
  if (object.game_) {
    jo << ctie("game", ToJson(object.game_));
  }
}
void to_json(JsonValueScope &jv, const td_api::inlineQueryResultAnimation &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "inlineQueryResultAnimation");
  jo << ctie("id", ToJson(object.id_));
  if (object.animation_) {
    jo << ctie("animation", ToJson(object.animation_));
  }
  jo << ctie("title", ToJson(object.title_));
}
void to_json(JsonValueScope &jv, const td_api::inlineQueryResultAudio &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "inlineQueryResultAudio");
  jo << ctie("id", ToJson(object.id_));
  if (object.audio_) {
    jo << ctie("audio", ToJson(object.audio_));
  }
}
void to_json(JsonValueScope &jv, const td_api::inlineQueryResultDocument &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "inlineQueryResultDocument");
  jo << ctie("id", ToJson(object.id_));
  if (object.document_) {
    jo << ctie("document", ToJson(object.document_));
  }
  jo << ctie("title", ToJson(object.title_));
  jo << ctie("description", ToJson(object.description_));
}
void to_json(JsonValueScope &jv, const td_api::inlineQueryResultPhoto &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "inlineQueryResultPhoto");
  jo << ctie("id", ToJson(object.id_));
  if (object.photo_) {
    jo << ctie("photo", ToJson(object.photo_));
  }
  jo << ctie("title", ToJson(object.title_));
  jo << ctie("description", ToJson(object.description_));
}
void to_json(JsonValueScope &jv, const td_api::inlineQueryResultSticker &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "inlineQueryResultSticker");
  jo << ctie("id", ToJson(object.id_));
  if (object.sticker_) {
    jo << ctie("sticker", ToJson(object.sticker_));
  }
}
void to_json(JsonValueScope &jv, const td_api::inlineQueryResultVideo &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "inlineQueryResultVideo");
  jo << ctie("id", ToJson(object.id_));
  if (object.video_) {
    jo << ctie("video", ToJson(object.video_));
  }
  jo << ctie("title", ToJson(object.title_));
  jo << ctie("description", ToJson(object.description_));
}
void to_json(JsonValueScope &jv, const td_api::inlineQueryResultVoiceNote &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "inlineQueryResultVoiceNote");
  jo << ctie("id", ToJson(object.id_));
  if (object.voice_note_) {
    jo << ctie("voice_note", ToJson(object.voice_note_));
  }
  jo << ctie("title", ToJson(object.title_));
}
void to_json(JsonValueScope &jv, const td_api::inlineQueryResults &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "inlineQueryResults");
  jo << ctie("inline_query_id", ToJson(JsonInt64{object.inline_query_id_}));
  jo << ctie("next_offset", ToJson(object.next_offset_));
  jo << ctie("results", ToJson(object.results_));
  jo << ctie("switch_pm_text", ToJson(object.switch_pm_text_));
  jo << ctie("switch_pm_parameter", ToJson(object.switch_pm_parameter_));
}
void to_json(JsonValueScope &jv, const td_api::InputCredentials &object) {
  td_api::downcast_call(const_cast<td_api::InputCredentials &>(object), [&jv](const auto &object) { to_json(jv, object); });
}
void to_json(JsonValueScope &jv, const td_api::inputCredentialsSaved &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "inputCredentialsSaved");
  jo << ctie("saved_credentials_id", ToJson(object.saved_credentials_id_));
}
void to_json(JsonValueScope &jv, const td_api::inputCredentialsNew &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "inputCredentialsNew");
  jo << ctie("data", ToJson(object.data_));
  jo << ctie("allow_save", ToJson(object.allow_save_));
}
void to_json(JsonValueScope &jv, const td_api::inputCredentialsAndroidPay &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "inputCredentialsAndroidPay");
  jo << ctie("data", ToJson(object.data_));
}
void to_json(JsonValueScope &jv, const td_api::inputCredentialsApplePay &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "inputCredentialsApplePay");
  jo << ctie("data", ToJson(object.data_));
}
void to_json(JsonValueScope &jv, const td_api::InputFile &object) {
  td_api::downcast_call(const_cast<td_api::InputFile &>(object), [&jv](const auto &object) { to_json(jv, object); });
}
void to_json(JsonValueScope &jv, const td_api::inputFileId &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "inputFileId");
  jo << ctie("id", ToJson(object.id_));
}
void to_json(JsonValueScope &jv, const td_api::inputFileRemote &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "inputFileRemote");
  jo << ctie("id", ToJson(object.id_));
}
void to_json(JsonValueScope &jv, const td_api::inputFileLocal &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "inputFileLocal");
  jo << ctie("path", ToJson(object.path_));
}
void to_json(JsonValueScope &jv, const td_api::inputFileGenerated &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "inputFileGenerated");
  jo << ctie("original_path", ToJson(object.original_path_));
  jo << ctie("conversion", ToJson(object.conversion_));
  jo << ctie("expected_size", ToJson(object.expected_size_));
}
void to_json(JsonValueScope &jv, const td_api::inputIdentityDocument &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "inputIdentityDocument");
  jo << ctie("number", ToJson(object.number_));
  if (object.expiry_date_) {
    jo << ctie("expiry_date", ToJson(object.expiry_date_));
  }
  if (object.front_side_) {
    jo << ctie("front_side", ToJson(object.front_side_));
  }
  if (object.reverse_side_) {
    jo << ctie("reverse_side", ToJson(object.reverse_side_));
  }
  if (object.selfie_) {
    jo << ctie("selfie", ToJson(object.selfie_));
  }
  jo << ctie("translation", ToJson(object.translation_));
}
void to_json(JsonValueScope &jv, const td_api::InputInlineQueryResult &object) {
  td_api::downcast_call(const_cast<td_api::InputInlineQueryResult &>(object), [&jv](const auto &object) { to_json(jv, object); });
}
void to_json(JsonValueScope &jv, const td_api::inputInlineQueryResultAnimatedGif &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "inputInlineQueryResultAnimatedGif");
  jo << ctie("id", ToJson(object.id_));
  jo << ctie("title", ToJson(object.title_));
  jo << ctie("thumbnail_url", ToJson(object.thumbnail_url_));
  jo << ctie("gif_url", ToJson(object.gif_url_));
  jo << ctie("gif_duration", ToJson(object.gif_duration_));
  jo << ctie("gif_width", ToJson(object.gif_width_));
  jo << ctie("gif_height", ToJson(object.gif_height_));
  if (object.reply_markup_) {
    jo << ctie("reply_markup", ToJson(object.reply_markup_));
  }
  if (object.input_message_content_) {
    jo << ctie("input_message_content", ToJson(object.input_message_content_));
  }
}
void to_json(JsonValueScope &jv, const td_api::inputInlineQueryResultAnimatedMpeg4 &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "inputInlineQueryResultAnimatedMpeg4");
  jo << ctie("id", ToJson(object.id_));
  jo << ctie("title", ToJson(object.title_));
  jo << ctie("thumbnail_url", ToJson(object.thumbnail_url_));
  jo << ctie("mpeg4_url", ToJson(object.mpeg4_url_));
  jo << ctie("mpeg4_duration", ToJson(object.mpeg4_duration_));
  jo << ctie("mpeg4_width", ToJson(object.mpeg4_width_));
  jo << ctie("mpeg4_height", ToJson(object.mpeg4_height_));
  if (object.reply_markup_) {
    jo << ctie("reply_markup", ToJson(object.reply_markup_));
  }
  if (object.input_message_content_) {
    jo << ctie("input_message_content", ToJson(object.input_message_content_));
  }
}
void to_json(JsonValueScope &jv, const td_api::inputInlineQueryResultArticle &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "inputInlineQueryResultArticle");
  jo << ctie("id", ToJson(object.id_));
  jo << ctie("url", ToJson(object.url_));
  jo << ctie("hide_url", ToJson(object.hide_url_));
  jo << ctie("title", ToJson(object.title_));
  jo << ctie("description", ToJson(object.description_));
  jo << ctie("thumbnail_url", ToJson(object.thumbnail_url_));
  jo << ctie("thumbnail_width", ToJson(object.thumbnail_width_));
  jo << ctie("thumbnail_height", ToJson(object.thumbnail_height_));
  if (object.reply_markup_) {
    jo << ctie("reply_markup", ToJson(object.reply_markup_));
  }
  if (object.input_message_content_) {
    jo << ctie("input_message_content", ToJson(object.input_message_content_));
  }
}
void to_json(JsonValueScope &jv, const td_api::inputInlineQueryResultAudio &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "inputInlineQueryResultAudio");
  jo << ctie("id", ToJson(object.id_));
  jo << ctie("title", ToJson(object.title_));
  jo << ctie("performer", ToJson(object.performer_));
  jo << ctie("audio_url", ToJson(object.audio_url_));
  jo << ctie("audio_duration", ToJson(object.audio_duration_));
  if (object.reply_markup_) {
    jo << ctie("reply_markup", ToJson(object.reply_markup_));
  }
  if (object.input_message_content_) {
    jo << ctie("input_message_content", ToJson(object.input_message_content_));
  }
}
void to_json(JsonValueScope &jv, const td_api::inputInlineQueryResultContact &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "inputInlineQueryResultContact");
  jo << ctie("id", ToJson(object.id_));
  if (object.contact_) {
    jo << ctie("contact", ToJson(object.contact_));
  }
  jo << ctie("thumbnail_url", ToJson(object.thumbnail_url_));
  jo << ctie("thumbnail_width", ToJson(object.thumbnail_width_));
  jo << ctie("thumbnail_height", ToJson(object.thumbnail_height_));
  if (object.reply_markup_) {
    jo << ctie("reply_markup", ToJson(object.reply_markup_));
  }
  if (object.input_message_content_) {
    jo << ctie("input_message_content", ToJson(object.input_message_content_));
  }
}
void to_json(JsonValueScope &jv, const td_api::inputInlineQueryResultDocument &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "inputInlineQueryResultDocument");
  jo << ctie("id", ToJson(object.id_));
  jo << ctie("title", ToJson(object.title_));
  jo << ctie("description", ToJson(object.description_));
  jo << ctie("document_url", ToJson(object.document_url_));
  jo << ctie("mime_type", ToJson(object.mime_type_));
  jo << ctie("thumbnail_url", ToJson(object.thumbnail_url_));
  jo << ctie("thumbnail_width", ToJson(object.thumbnail_width_));
  jo << ctie("thumbnail_height", ToJson(object.thumbnail_height_));
  if (object.reply_markup_) {
    jo << ctie("reply_markup", ToJson(object.reply_markup_));
  }
  if (object.input_message_content_) {
    jo << ctie("input_message_content", ToJson(object.input_message_content_));
  }
}
void to_json(JsonValueScope &jv, const td_api::inputInlineQueryResultGame &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "inputInlineQueryResultGame");
  jo << ctie("id", ToJson(object.id_));
  jo << ctie("game_short_name", ToJson(object.game_short_name_));
  if (object.reply_markup_) {
    jo << ctie("reply_markup", ToJson(object.reply_markup_));
  }
}
void to_json(JsonValueScope &jv, const td_api::inputInlineQueryResultLocation &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "inputInlineQueryResultLocation");
  jo << ctie("id", ToJson(object.id_));
  if (object.location_) {
    jo << ctie("location", ToJson(object.location_));
  }
  jo << ctie("live_period", ToJson(object.live_period_));
  jo << ctie("title", ToJson(object.title_));
  jo << ctie("thumbnail_url", ToJson(object.thumbnail_url_));
  jo << ctie("thumbnail_width", ToJson(object.thumbnail_width_));
  jo << ctie("thumbnail_height", ToJson(object.thumbnail_height_));
  if (object.reply_markup_) {
    jo << ctie("reply_markup", ToJson(object.reply_markup_));
  }
  if (object.input_message_content_) {
    jo << ctie("input_message_content", ToJson(object.input_message_content_));
  }
}
void to_json(JsonValueScope &jv, const td_api::inputInlineQueryResultPhoto &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "inputInlineQueryResultPhoto");
  jo << ctie("id", ToJson(object.id_));
  jo << ctie("title", ToJson(object.title_));
  jo << ctie("description", ToJson(object.description_));
  jo << ctie("thumbnail_url", ToJson(object.thumbnail_url_));
  jo << ctie("photo_url", ToJson(object.photo_url_));
  jo << ctie("photo_width", ToJson(object.photo_width_));
  jo << ctie("photo_height", ToJson(object.photo_height_));
  if (object.reply_markup_) {
    jo << ctie("reply_markup", ToJson(object.reply_markup_));
  }
  if (object.input_message_content_) {
    jo << ctie("input_message_content", ToJson(object.input_message_content_));
  }
}
void to_json(JsonValueScope &jv, const td_api::inputInlineQueryResultSticker &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "inputInlineQueryResultSticker");
  jo << ctie("id", ToJson(object.id_));
  jo << ctie("thumbnail_url", ToJson(object.thumbnail_url_));
  jo << ctie("sticker_url", ToJson(object.sticker_url_));
  jo << ctie("sticker_width", ToJson(object.sticker_width_));
  jo << ctie("sticker_height", ToJson(object.sticker_height_));
  if (object.reply_markup_) {
    jo << ctie("reply_markup", ToJson(object.reply_markup_));
  }
  if (object.input_message_content_) {
    jo << ctie("input_message_content", ToJson(object.input_message_content_));
  }
}
void to_json(JsonValueScope &jv, const td_api::inputInlineQueryResultVenue &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "inputInlineQueryResultVenue");
  jo << ctie("id", ToJson(object.id_));
  if (object.venue_) {
    jo << ctie("venue", ToJson(object.venue_));
  }
  jo << ctie("thumbnail_url", ToJson(object.thumbnail_url_));
  jo << ctie("thumbnail_width", ToJson(object.thumbnail_width_));
  jo << ctie("thumbnail_height", ToJson(object.thumbnail_height_));
  if (object.reply_markup_) {
    jo << ctie("reply_markup", ToJson(object.reply_markup_));
  }
  if (object.input_message_content_) {
    jo << ctie("input_message_content", ToJson(object.input_message_content_));
  }
}
void to_json(JsonValueScope &jv, const td_api::inputInlineQueryResultVideo &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "inputInlineQueryResultVideo");
  jo << ctie("id", ToJson(object.id_));
  jo << ctie("title", ToJson(object.title_));
  jo << ctie("description", ToJson(object.description_));
  jo << ctie("thumbnail_url", ToJson(object.thumbnail_url_));
  jo << ctie("video_url", ToJson(object.video_url_));
  jo << ctie("mime_type", ToJson(object.mime_type_));
  jo << ctie("video_width", ToJson(object.video_width_));
  jo << ctie("video_height", ToJson(object.video_height_));
  jo << ctie("video_duration", ToJson(object.video_duration_));
  if (object.reply_markup_) {
    jo << ctie("reply_markup", ToJson(object.reply_markup_));
  }
  if (object.input_message_content_) {
    jo << ctie("input_message_content", ToJson(object.input_message_content_));
  }
}
void to_json(JsonValueScope &jv, const td_api::inputInlineQueryResultVoiceNote &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "inputInlineQueryResultVoiceNote");
  jo << ctie("id", ToJson(object.id_));
  jo << ctie("title", ToJson(object.title_));
  jo << ctie("voice_note_url", ToJson(object.voice_note_url_));
  jo << ctie("voice_note_duration", ToJson(object.voice_note_duration_));
  if (object.reply_markup_) {
    jo << ctie("reply_markup", ToJson(object.reply_markup_));
  }
  if (object.input_message_content_) {
    jo << ctie("input_message_content", ToJson(object.input_message_content_));
  }
}
void to_json(JsonValueScope &jv, const td_api::InputMessageContent &object) {
  td_api::downcast_call(const_cast<td_api::InputMessageContent &>(object), [&jv](const auto &object) { to_json(jv, object); });
}
void to_json(JsonValueScope &jv, const td_api::inputMessageText &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "inputMessageText");
  if (object.text_) {
    jo << ctie("text", ToJson(object.text_));
  }
  jo << ctie("disable_web_page_preview", ToJson(object.disable_web_page_preview_));
  jo << ctie("clear_draft", ToJson(object.clear_draft_));
}
void to_json(JsonValueScope &jv, const td_api::inputMessageAnimation &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "inputMessageAnimation");
  if (object.animation_) {
    jo << ctie("animation", ToJson(object.animation_));
  }
  if (object.thumbnail_) {
    jo << ctie("thumbnail", ToJson(object.thumbnail_));
  }
  jo << ctie("duration", ToJson(object.duration_));
  jo << ctie("width", ToJson(object.width_));
  jo << ctie("height", ToJson(object.height_));
  if (object.caption_) {
    jo << ctie("caption", ToJson(object.caption_));
  }
}
void to_json(JsonValueScope &jv, const td_api::inputMessageAudio &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "inputMessageAudio");
  if (object.audio_) {
    jo << ctie("audio", ToJson(object.audio_));
  }
  if (object.album_cover_thumbnail_) {
    jo << ctie("album_cover_thumbnail", ToJson(object.album_cover_thumbnail_));
  }
  jo << ctie("duration", ToJson(object.duration_));
  jo << ctie("title", ToJson(object.title_));
  jo << ctie("performer", ToJson(object.performer_));
  if (object.caption_) {
    jo << ctie("caption", ToJson(object.caption_));
  }
}
void to_json(JsonValueScope &jv, const td_api::inputMessageDocument &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "inputMessageDocument");
  if (object.document_) {
    jo << ctie("document", ToJson(object.document_));
  }
  if (object.thumbnail_) {
    jo << ctie("thumbnail", ToJson(object.thumbnail_));
  }
  if (object.caption_) {
    jo << ctie("caption", ToJson(object.caption_));
  }
}
void to_json(JsonValueScope &jv, const td_api::inputMessagePhoto &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "inputMessagePhoto");
  if (object.photo_) {
    jo << ctie("photo", ToJson(object.photo_));
  }
  if (object.thumbnail_) {
    jo << ctie("thumbnail", ToJson(object.thumbnail_));
  }
  jo << ctie("added_sticker_file_ids", ToJson(object.added_sticker_file_ids_));
  jo << ctie("width", ToJson(object.width_));
  jo << ctie("height", ToJson(object.height_));
  if (object.caption_) {
    jo << ctie("caption", ToJson(object.caption_));
  }
  jo << ctie("ttl", ToJson(object.ttl_));
}
void to_json(JsonValueScope &jv, const td_api::inputMessageSticker &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "inputMessageSticker");
  if (object.sticker_) {
    jo << ctie("sticker", ToJson(object.sticker_));
  }
  if (object.thumbnail_) {
    jo << ctie("thumbnail", ToJson(object.thumbnail_));
  }
  jo << ctie("width", ToJson(object.width_));
  jo << ctie("height", ToJson(object.height_));
}
void to_json(JsonValueScope &jv, const td_api::inputMessageVideo &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "inputMessageVideo");
  if (object.video_) {
    jo << ctie("video", ToJson(object.video_));
  }
  if (object.thumbnail_) {
    jo << ctie("thumbnail", ToJson(object.thumbnail_));
  }
  jo << ctie("added_sticker_file_ids", ToJson(object.added_sticker_file_ids_));
  jo << ctie("duration", ToJson(object.duration_));
  jo << ctie("width", ToJson(object.width_));
  jo << ctie("height", ToJson(object.height_));
  jo << ctie("supports_streaming", ToJson(object.supports_streaming_));
  if (object.caption_) {
    jo << ctie("caption", ToJson(object.caption_));
  }
  jo << ctie("ttl", ToJson(object.ttl_));
}
void to_json(JsonValueScope &jv, const td_api::inputMessageVideoNote &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "inputMessageVideoNote");
  if (object.video_note_) {
    jo << ctie("video_note", ToJson(object.video_note_));
  }
  if (object.thumbnail_) {
    jo << ctie("thumbnail", ToJson(object.thumbnail_));
  }
  jo << ctie("duration", ToJson(object.duration_));
  jo << ctie("length", ToJson(object.length_));
}
void to_json(JsonValueScope &jv, const td_api::inputMessageVoiceNote &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "inputMessageVoiceNote");
  if (object.voice_note_) {
    jo << ctie("voice_note", ToJson(object.voice_note_));
  }
  jo << ctie("duration", ToJson(object.duration_));
  jo << ctie("waveform", ToJson(base64_encode(object.waveform_)));
  if (object.caption_) {
    jo << ctie("caption", ToJson(object.caption_));
  }
}
void to_json(JsonValueScope &jv, const td_api::inputMessageLocation &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "inputMessageLocation");
  if (object.location_) {
    jo << ctie("location", ToJson(object.location_));
  }
  jo << ctie("live_period", ToJson(object.live_period_));
}
void to_json(JsonValueScope &jv, const td_api::inputMessageVenue &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "inputMessageVenue");
  if (object.venue_) {
    jo << ctie("venue", ToJson(object.venue_));
  }
}
void to_json(JsonValueScope &jv, const td_api::inputMessageContact &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "inputMessageContact");
  if (object.contact_) {
    jo << ctie("contact", ToJson(object.contact_));
  }
}
void to_json(JsonValueScope &jv, const td_api::inputMessageGame &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "inputMessageGame");
  jo << ctie("bot_user_id", ToJson(object.bot_user_id_));
  jo << ctie("game_short_name", ToJson(object.game_short_name_));
}
void to_json(JsonValueScope &jv, const td_api::inputMessageInvoice &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "inputMessageInvoice");
  if (object.invoice_) {
    jo << ctie("invoice", ToJson(object.invoice_));
  }
  jo << ctie("title", ToJson(object.title_));
  jo << ctie("description", ToJson(object.description_));
  jo << ctie("photo_url", ToJson(object.photo_url_));
  jo << ctie("photo_size", ToJson(object.photo_size_));
  jo << ctie("photo_width", ToJson(object.photo_width_));
  jo << ctie("photo_height", ToJson(object.photo_height_));
  jo << ctie("payload", ToJson(base64_encode(object.payload_)));
  jo << ctie("provider_token", ToJson(object.provider_token_));
  jo << ctie("provider_data", ToJson(object.provider_data_));
  jo << ctie("start_parameter", ToJson(object.start_parameter_));
}
void to_json(JsonValueScope &jv, const td_api::inputMessageForwarded &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "inputMessageForwarded");
  jo << ctie("from_chat_id", ToJson(object.from_chat_id_));
  jo << ctie("message_id", ToJson(object.message_id_));
  jo << ctie("in_game_share", ToJson(object.in_game_share_));
}
void to_json(JsonValueScope &jv, const td_api::InputPassportElement &object) {
  td_api::downcast_call(const_cast<td_api::InputPassportElement &>(object), [&jv](const auto &object) { to_json(jv, object); });
}
void to_json(JsonValueScope &jv, const td_api::inputPassportElementPersonalDetails &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "inputPassportElementPersonalDetails");
  if (object.personal_details_) {
    jo << ctie("personal_details", ToJson(object.personal_details_));
  }
}
void to_json(JsonValueScope &jv, const td_api::inputPassportElementPassport &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "inputPassportElementPassport");
  if (object.passport_) {
    jo << ctie("passport", ToJson(object.passport_));
  }
}
void to_json(JsonValueScope &jv, const td_api::inputPassportElementDriverLicense &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "inputPassportElementDriverLicense");
  if (object.driver_license_) {
    jo << ctie("driver_license", ToJson(object.driver_license_));
  }
}
void to_json(JsonValueScope &jv, const td_api::inputPassportElementIdentityCard &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "inputPassportElementIdentityCard");
  if (object.identity_card_) {
    jo << ctie("identity_card", ToJson(object.identity_card_));
  }
}
void to_json(JsonValueScope &jv, const td_api::inputPassportElementInternalPassport &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "inputPassportElementInternalPassport");
  if (object.internal_passport_) {
    jo << ctie("internal_passport", ToJson(object.internal_passport_));
  }
}
void to_json(JsonValueScope &jv, const td_api::inputPassportElementAddress &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "inputPassportElementAddress");
  if (object.address_) {
    jo << ctie("address", ToJson(object.address_));
  }
}
void to_json(JsonValueScope &jv, const td_api::inputPassportElementUtilityBill &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "inputPassportElementUtilityBill");
  if (object.utility_bill_) {
    jo << ctie("utility_bill", ToJson(object.utility_bill_));
  }
}
void to_json(JsonValueScope &jv, const td_api::inputPassportElementBankStatement &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "inputPassportElementBankStatement");
  if (object.bank_statement_) {
    jo << ctie("bank_statement", ToJson(object.bank_statement_));
  }
}
void to_json(JsonValueScope &jv, const td_api::inputPassportElementRentalAgreement &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "inputPassportElementRentalAgreement");
  if (object.rental_agreement_) {
    jo << ctie("rental_agreement", ToJson(object.rental_agreement_));
  }
}
void to_json(JsonValueScope &jv, const td_api::inputPassportElementPassportRegistration &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "inputPassportElementPassportRegistration");
  if (object.passport_registration_) {
    jo << ctie("passport_registration", ToJson(object.passport_registration_));
  }
}
void to_json(JsonValueScope &jv, const td_api::inputPassportElementTemporaryRegistration &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "inputPassportElementTemporaryRegistration");
  if (object.temporary_registration_) {
    jo << ctie("temporary_registration", ToJson(object.temporary_registration_));
  }
}
void to_json(JsonValueScope &jv, const td_api::inputPassportElementPhoneNumber &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "inputPassportElementPhoneNumber");
  jo << ctie("phone_number", ToJson(object.phone_number_));
}
void to_json(JsonValueScope &jv, const td_api::inputPassportElementEmailAddress &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "inputPassportElementEmailAddress");
  jo << ctie("email_address", ToJson(object.email_address_));
}
void to_json(JsonValueScope &jv, const td_api::inputPassportElementError &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "inputPassportElementError");
  if (object.type_) {
    jo << ctie("type", ToJson(object.type_));
  }
  jo << ctie("message", ToJson(object.message_));
  if (object.source_) {
    jo << ctie("source", ToJson(object.source_));
  }
}
void to_json(JsonValueScope &jv, const td_api::InputPassportElementErrorSource &object) {
  td_api::downcast_call(const_cast<td_api::InputPassportElementErrorSource &>(object), [&jv](const auto &object) { to_json(jv, object); });
}
void to_json(JsonValueScope &jv, const td_api::inputPassportElementErrorSourceUnspecified &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "inputPassportElementErrorSourceUnspecified");
  jo << ctie("element_hash", ToJson(base64_encode(object.element_hash_)));
}
void to_json(JsonValueScope &jv, const td_api::inputPassportElementErrorSourceDataField &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "inputPassportElementErrorSourceDataField");
  jo << ctie("field_name", ToJson(object.field_name_));
  jo << ctie("data_hash", ToJson(base64_encode(object.data_hash_)));
}
void to_json(JsonValueScope &jv, const td_api::inputPassportElementErrorSourceFrontSide &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "inputPassportElementErrorSourceFrontSide");
  jo << ctie("file_hash", ToJson(base64_encode(object.file_hash_)));
}
void to_json(JsonValueScope &jv, const td_api::inputPassportElementErrorSourceReverseSide &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "inputPassportElementErrorSourceReverseSide");
  jo << ctie("file_hash", ToJson(base64_encode(object.file_hash_)));
}
void to_json(JsonValueScope &jv, const td_api::inputPassportElementErrorSourceSelfie &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "inputPassportElementErrorSourceSelfie");
  jo << ctie("file_hash", ToJson(base64_encode(object.file_hash_)));
}
void to_json(JsonValueScope &jv, const td_api::inputPassportElementErrorSourceTranslationFile &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "inputPassportElementErrorSourceTranslationFile");
  jo << ctie("file_hash", ToJson(base64_encode(object.file_hash_)));
}
void to_json(JsonValueScope &jv, const td_api::inputPassportElementErrorSourceTranslationFiles &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "inputPassportElementErrorSourceTranslationFiles");
  jo << ctie("file_hashes", ToJson(object.file_hashes_));
}
void to_json(JsonValueScope &jv, const td_api::inputPassportElementErrorSourceFile &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "inputPassportElementErrorSourceFile");
  jo << ctie("file_hash", ToJson(base64_encode(object.file_hash_)));
}
void to_json(JsonValueScope &jv, const td_api::inputPassportElementErrorSourceFiles &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "inputPassportElementErrorSourceFiles");
  jo << ctie("file_hashes", ToJson(object.file_hashes_));
}
void to_json(JsonValueScope &jv, const td_api::inputPersonalDocument &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "inputPersonalDocument");
  jo << ctie("files", ToJson(object.files_));
  jo << ctie("translation", ToJson(object.translation_));
}
void to_json(JsonValueScope &jv, const td_api::inputSticker &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "inputSticker");
  if (object.png_sticker_) {
    jo << ctie("png_sticker", ToJson(object.png_sticker_));
  }
  jo << ctie("emojis", ToJson(object.emojis_));
  if (object.mask_position_) {
    jo << ctie("mask_position", ToJson(object.mask_position_));
  }
}
void to_json(JsonValueScope &jv, const td_api::inputThumbnail &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "inputThumbnail");
  if (object.thumbnail_) {
    jo << ctie("thumbnail", ToJson(object.thumbnail_));
  }
  jo << ctie("width", ToJson(object.width_));
  jo << ctie("height", ToJson(object.height_));
}
void to_json(JsonValueScope &jv, const td_api::invoice &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "invoice");
  jo << ctie("currency", ToJson(object.currency_));
  jo << ctie("price_parts", ToJson(object.price_parts_));
  jo << ctie("is_test", ToJson(object.is_test_));
  jo << ctie("need_name", ToJson(object.need_name_));
  jo << ctie("need_phone_number", ToJson(object.need_phone_number_));
  jo << ctie("need_email_address", ToJson(object.need_email_address_));
  jo << ctie("need_shipping_address", ToJson(object.need_shipping_address_));
  jo << ctie("send_phone_number_to_provider", ToJson(object.send_phone_number_to_provider_));
  jo << ctie("send_email_address_to_provider", ToJson(object.send_email_address_to_provider_));
  jo << ctie("is_flexible", ToJson(object.is_flexible_));
}
void to_json(JsonValueScope &jv, const td_api::keyboardButton &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "keyboardButton");
  jo << ctie("text", ToJson(object.text_));
  if (object.type_) {
    jo << ctie("type", ToJson(object.type_));
  }
}
void to_json(JsonValueScope &jv, const td_api::KeyboardButtonType &object) {
  td_api::downcast_call(const_cast<td_api::KeyboardButtonType &>(object), [&jv](const auto &object) { to_json(jv, object); });
}
void to_json(JsonValueScope &jv, const td_api::keyboardButtonTypeText &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "keyboardButtonTypeText");
}
void to_json(JsonValueScope &jv, const td_api::keyboardButtonTypeRequestPhoneNumber &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "keyboardButtonTypeRequestPhoneNumber");
}
void to_json(JsonValueScope &jv, const td_api::keyboardButtonTypeRequestLocation &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "keyboardButtonTypeRequestLocation");
}
void to_json(JsonValueScope &jv, const td_api::labeledPricePart &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "labeledPricePart");
  jo << ctie("label", ToJson(object.label_));
  jo << ctie("amount", ToJson(object.amount_));
}
void to_json(JsonValueScope &jv, const td_api::languagePackInfo &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "languagePackInfo");
  jo << ctie("id", ToJson(object.id_));
  jo << ctie("name", ToJson(object.name_));
  jo << ctie("native_name", ToJson(object.native_name_));
  jo << ctie("local_string_count", ToJson(object.local_string_count_));
}
void to_json(JsonValueScope &jv, const td_api::languagePackString &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "languagePackString");
  jo << ctie("key", ToJson(object.key_));
  if (object.value_) {
    jo << ctie("value", ToJson(object.value_));
  }
}
void to_json(JsonValueScope &jv, const td_api::LanguagePackStringValue &object) {
  td_api::downcast_call(const_cast<td_api::LanguagePackStringValue &>(object), [&jv](const auto &object) { to_json(jv, object); });
}
void to_json(JsonValueScope &jv, const td_api::languagePackStringValueOrdinary &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "languagePackStringValueOrdinary");
  jo << ctie("value", ToJson(object.value_));
}
void to_json(JsonValueScope &jv, const td_api::languagePackStringValuePluralized &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "languagePackStringValuePluralized");
  jo << ctie("zero_value", ToJson(object.zero_value_));
  jo << ctie("one_value", ToJson(object.one_value_));
  jo << ctie("two_value", ToJson(object.two_value_));
  jo << ctie("few_value", ToJson(object.few_value_));
  jo << ctie("many_value", ToJson(object.many_value_));
  jo << ctie("other_value", ToJson(object.other_value_));
}
void to_json(JsonValueScope &jv, const td_api::languagePackStringValueDeleted &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "languagePackStringValueDeleted");
}
void to_json(JsonValueScope &jv, const td_api::languagePackStrings &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "languagePackStrings");
  jo << ctie("strings", ToJson(object.strings_));
}
void to_json(JsonValueScope &jv, const td_api::LinkState &object) {
  td_api::downcast_call(const_cast<td_api::LinkState &>(object), [&jv](const auto &object) { to_json(jv, object); });
}
void to_json(JsonValueScope &jv, const td_api::linkStateNone &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "linkStateNone");
}
void to_json(JsonValueScope &jv, const td_api::linkStateKnowsPhoneNumber &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "linkStateKnowsPhoneNumber");
}
void to_json(JsonValueScope &jv, const td_api::linkStateIsContact &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "linkStateIsContact");
}
void to_json(JsonValueScope &jv, const td_api::localFile &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "localFile");
  jo << ctie("path", ToJson(object.path_));
  jo << ctie("can_be_downloaded", ToJson(object.can_be_downloaded_));
  jo << ctie("can_be_deleted", ToJson(object.can_be_deleted_));
  jo << ctie("is_downloading_active", ToJson(object.is_downloading_active_));
  jo << ctie("is_downloading_completed", ToJson(object.is_downloading_completed_));
  jo << ctie("downloaded_prefix_size", ToJson(object.downloaded_prefix_size_));
  jo << ctie("downloaded_size", ToJson(object.downloaded_size_));
}
void to_json(JsonValueScope &jv, const td_api::localizationTargetInfo &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "localizationTargetInfo");
  jo << ctie("language_packs", ToJson(object.language_packs_));
}
void to_json(JsonValueScope &jv, const td_api::location &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "location");
  jo << ctie("latitude", ToJson(object.latitude_));
  jo << ctie("longitude", ToJson(object.longitude_));
}
void to_json(JsonValueScope &jv, const td_api::MaskPoint &object) {
  td_api::downcast_call(const_cast<td_api::MaskPoint &>(object), [&jv](const auto &object) { to_json(jv, object); });
}
void to_json(JsonValueScope &jv, const td_api::maskPointForehead &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "maskPointForehead");
}
void to_json(JsonValueScope &jv, const td_api::maskPointEyes &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "maskPointEyes");
}
void to_json(JsonValueScope &jv, const td_api::maskPointMouth &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "maskPointMouth");
}
void to_json(JsonValueScope &jv, const td_api::maskPointChin &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "maskPointChin");
}
void to_json(JsonValueScope &jv, const td_api::maskPosition &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "maskPosition");
  if (object.point_) {
    jo << ctie("point", ToJson(object.point_));
  }
  jo << ctie("x_shift", ToJson(object.x_shift_));
  jo << ctie("y_shift", ToJson(object.y_shift_));
  jo << ctie("scale", ToJson(object.scale_));
}
void to_json(JsonValueScope &jv, const td_api::message &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "message");
  jo << ctie("id", ToJson(object.id_));
  jo << ctie("sender_user_id", ToJson(object.sender_user_id_));
  jo << ctie("chat_id", ToJson(object.chat_id_));
  if (object.sending_state_) {
    jo << ctie("sending_state", ToJson(object.sending_state_));
  }
  jo << ctie("is_outgoing", ToJson(object.is_outgoing_));
  jo << ctie("can_be_edited", ToJson(object.can_be_edited_));
  jo << ctie("can_be_forwarded", ToJson(object.can_be_forwarded_));
  jo << ctie("can_be_deleted_only_for_self", ToJson(object.can_be_deleted_only_for_self_));
  jo << ctie("can_be_deleted_for_all_users", ToJson(object.can_be_deleted_for_all_users_));
  jo << ctie("is_channel_post", ToJson(object.is_channel_post_));
  jo << ctie("contains_unread_mention", ToJson(object.contains_unread_mention_));
  jo << ctie("date", ToJson(object.date_));
  jo << ctie("edit_date", ToJson(object.edit_date_));
  if (object.forward_info_) {
    jo << ctie("forward_info", ToJson(object.forward_info_));
  }
  jo << ctie("reply_to_message_id", ToJson(object.reply_to_message_id_));
  jo << ctie("ttl", ToJson(object.ttl_));
  jo << ctie("ttl_expires_in", ToJson(object.ttl_expires_in_));
  jo << ctie("via_bot_user_id", ToJson(object.via_bot_user_id_));
  jo << ctie("author_signature", ToJson(object.author_signature_));
  jo << ctie("views", ToJson(object.views_));
  jo << ctie("media_album_id", ToJson(JsonInt64{object.media_album_id_}));
  if (object.content_) {
    jo << ctie("content", ToJson(object.content_));
  }
  if (object.reply_markup_) {
    jo << ctie("reply_markup", ToJson(object.reply_markup_));
  }
}
void to_json(JsonValueScope &jv, const td_api::MessageContent &object) {
  td_api::downcast_call(const_cast<td_api::MessageContent &>(object), [&jv](const auto &object) { to_json(jv, object); });
}
void to_json(JsonValueScope &jv, const td_api::messageText &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "messageText");
  if (object.text_) {
    jo << ctie("text", ToJson(object.text_));
  }
  if (object.web_page_) {
    jo << ctie("web_page", ToJson(object.web_page_));
  }
}
void to_json(JsonValueScope &jv, const td_api::messageAnimation &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "messageAnimation");
  if (object.animation_) {
    jo << ctie("animation", ToJson(object.animation_));
  }
  if (object.caption_) {
    jo << ctie("caption", ToJson(object.caption_));
  }
  jo << ctie("is_secret", ToJson(object.is_secret_));
}
void to_json(JsonValueScope &jv, const td_api::messageAudio &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "messageAudio");
  if (object.audio_) {
    jo << ctie("audio", ToJson(object.audio_));
  }
  if (object.caption_) {
    jo << ctie("caption", ToJson(object.caption_));
  }
}
void to_json(JsonValueScope &jv, const td_api::messageDocument &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "messageDocument");
  if (object.document_) {
    jo << ctie("document", ToJson(object.document_));
  }
  if (object.caption_) {
    jo << ctie("caption", ToJson(object.caption_));
  }
}
void to_json(JsonValueScope &jv, const td_api::messagePhoto &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "messagePhoto");
  if (object.photo_) {
    jo << ctie("photo", ToJson(object.photo_));
  }
  if (object.caption_) {
    jo << ctie("caption", ToJson(object.caption_));
  }
  jo << ctie("is_secret", ToJson(object.is_secret_));
}
void to_json(JsonValueScope &jv, const td_api::messageExpiredPhoto &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "messageExpiredPhoto");
}
void to_json(JsonValueScope &jv, const td_api::messageSticker &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "messageSticker");
  if (object.sticker_) {
    jo << ctie("sticker", ToJson(object.sticker_));
  }
}
void to_json(JsonValueScope &jv, const td_api::messageVideo &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "messageVideo");
  if (object.video_) {
    jo << ctie("video", ToJson(object.video_));
  }
  if (object.caption_) {
    jo << ctie("caption", ToJson(object.caption_));
  }
  jo << ctie("is_secret", ToJson(object.is_secret_));
}
void to_json(JsonValueScope &jv, const td_api::messageExpiredVideo &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "messageExpiredVideo");
}
void to_json(JsonValueScope &jv, const td_api::messageVideoNote &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "messageVideoNote");
  if (object.video_note_) {
    jo << ctie("video_note", ToJson(object.video_note_));
  }
  jo << ctie("is_viewed", ToJson(object.is_viewed_));
  jo << ctie("is_secret", ToJson(object.is_secret_));
}
void to_json(JsonValueScope &jv, const td_api::messageVoiceNote &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "messageVoiceNote");
  if (object.voice_note_) {
    jo << ctie("voice_note", ToJson(object.voice_note_));
  }
  if (object.caption_) {
    jo << ctie("caption", ToJson(object.caption_));
  }
  jo << ctie("is_listened", ToJson(object.is_listened_));
}
void to_json(JsonValueScope &jv, const td_api::messageLocation &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "messageLocation");
  if (object.location_) {
    jo << ctie("location", ToJson(object.location_));
  }
  jo << ctie("live_period", ToJson(object.live_period_));
  jo << ctie("expires_in", ToJson(object.expires_in_));
}
void to_json(JsonValueScope &jv, const td_api::messageVenue &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "messageVenue");
  if (object.venue_) {
    jo << ctie("venue", ToJson(object.venue_));
  }
}
void to_json(JsonValueScope &jv, const td_api::messageContact &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "messageContact");
  if (object.contact_) {
    jo << ctie("contact", ToJson(object.contact_));
  }
}
void to_json(JsonValueScope &jv, const td_api::messageGame &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "messageGame");
  if (object.game_) {
    jo << ctie("game", ToJson(object.game_));
  }
}
void to_json(JsonValueScope &jv, const td_api::messageInvoice &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "messageInvoice");
  jo << ctie("title", ToJson(object.title_));
  jo << ctie("description", ToJson(object.description_));
  if (object.photo_) {
    jo << ctie("photo", ToJson(object.photo_));
  }
  jo << ctie("currency", ToJson(object.currency_));
  jo << ctie("total_amount", ToJson(object.total_amount_));
  jo << ctie("start_parameter", ToJson(object.start_parameter_));
  jo << ctie("is_test", ToJson(object.is_test_));
  jo << ctie("need_shipping_address", ToJson(object.need_shipping_address_));
  jo << ctie("receipt_message_id", ToJson(object.receipt_message_id_));
}
void to_json(JsonValueScope &jv, const td_api::messageCall &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "messageCall");
  if (object.discard_reason_) {
    jo << ctie("discard_reason", ToJson(object.discard_reason_));
  }
  jo << ctie("duration", ToJson(object.duration_));
}
void to_json(JsonValueScope &jv, const td_api::messageBasicGroupChatCreate &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "messageBasicGroupChatCreate");
  jo << ctie("title", ToJson(object.title_));
  jo << ctie("member_user_ids", ToJson(object.member_user_ids_));
}
void to_json(JsonValueScope &jv, const td_api::messageSupergroupChatCreate &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "messageSupergroupChatCreate");
  jo << ctie("title", ToJson(object.title_));
}
void to_json(JsonValueScope &jv, const td_api::messageChatChangeTitle &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "messageChatChangeTitle");
  jo << ctie("title", ToJson(object.title_));
}
void to_json(JsonValueScope &jv, const td_api::messageChatChangePhoto &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "messageChatChangePhoto");
  if (object.photo_) {
    jo << ctie("photo", ToJson(object.photo_));
  }
}
void to_json(JsonValueScope &jv, const td_api::messageChatDeletePhoto &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "messageChatDeletePhoto");
}
void to_json(JsonValueScope &jv, const td_api::messageChatAddMembers &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "messageChatAddMembers");
  jo << ctie("member_user_ids", ToJson(object.member_user_ids_));
}
void to_json(JsonValueScope &jv, const td_api::messageChatJoinByLink &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "messageChatJoinByLink");
}
void to_json(JsonValueScope &jv, const td_api::messageChatDeleteMember &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "messageChatDeleteMember");
  jo << ctie("user_id", ToJson(object.user_id_));
}
void to_json(JsonValueScope &jv, const td_api::messageChatUpgradeTo &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "messageChatUpgradeTo");
  jo << ctie("supergroup_id", ToJson(object.supergroup_id_));
}
void to_json(JsonValueScope &jv, const td_api::messageChatUpgradeFrom &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "messageChatUpgradeFrom");
  jo << ctie("title", ToJson(object.title_));
  jo << ctie("basic_group_id", ToJson(object.basic_group_id_));
}
void to_json(JsonValueScope &jv, const td_api::messagePinMessage &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "messagePinMessage");
  jo << ctie("message_id", ToJson(object.message_id_));
}
void to_json(JsonValueScope &jv, const td_api::messageScreenshotTaken &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "messageScreenshotTaken");
}
void to_json(JsonValueScope &jv, const td_api::messageChatSetTtl &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "messageChatSetTtl");
  jo << ctie("ttl", ToJson(object.ttl_));
}
void to_json(JsonValueScope &jv, const td_api::messageCustomServiceAction &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "messageCustomServiceAction");
  jo << ctie("text", ToJson(object.text_));
}
void to_json(JsonValueScope &jv, const td_api::messageGameScore &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "messageGameScore");
  jo << ctie("game_message_id", ToJson(object.game_message_id_));
  jo << ctie("game_id", ToJson(JsonInt64{object.game_id_}));
  jo << ctie("score", ToJson(object.score_));
}
void to_json(JsonValueScope &jv, const td_api::messagePaymentSuccessful &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "messagePaymentSuccessful");
  jo << ctie("invoice_message_id", ToJson(object.invoice_message_id_));
  jo << ctie("currency", ToJson(object.currency_));
  jo << ctie("total_amount", ToJson(object.total_amount_));
}
void to_json(JsonValueScope &jv, const td_api::messagePaymentSuccessfulBot &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "messagePaymentSuccessfulBot");
  jo << ctie("invoice_message_id", ToJson(object.invoice_message_id_));
  jo << ctie("currency", ToJson(object.currency_));
  jo << ctie("total_amount", ToJson(object.total_amount_));
  jo << ctie("invoice_payload", ToJson(base64_encode(object.invoice_payload_)));
  jo << ctie("shipping_option_id", ToJson(object.shipping_option_id_));
  if (object.order_info_) {
    jo << ctie("order_info", ToJson(object.order_info_));
  }
  jo << ctie("telegram_payment_charge_id", ToJson(object.telegram_payment_charge_id_));
  jo << ctie("provider_payment_charge_id", ToJson(object.provider_payment_charge_id_));
}
void to_json(JsonValueScope &jv, const td_api::messageContactRegistered &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "messageContactRegistered");
}
void to_json(JsonValueScope &jv, const td_api::messageWebsiteConnected &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "messageWebsiteConnected");
  jo << ctie("domain_name", ToJson(object.domain_name_));
}
void to_json(JsonValueScope &jv, const td_api::messagePassportDataSent &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "messagePassportDataSent");
  jo << ctie("types", ToJson(object.types_));
}
void to_json(JsonValueScope &jv, const td_api::messagePassportDataReceived &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "messagePassportDataReceived");
  jo << ctie("elements", ToJson(object.elements_));
  if (object.credentials_) {
    jo << ctie("credentials", ToJson(object.credentials_));
  }
}
void to_json(JsonValueScope &jv, const td_api::messageUnsupported &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "messageUnsupported");
}
void to_json(JsonValueScope &jv, const td_api::MessageForwardInfo &object) {
  td_api::downcast_call(const_cast<td_api::MessageForwardInfo &>(object), [&jv](const auto &object) { to_json(jv, object); });
}
void to_json(JsonValueScope &jv, const td_api::messageForwardedFromUser &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "messageForwardedFromUser");
  jo << ctie("sender_user_id", ToJson(object.sender_user_id_));
  jo << ctie("date", ToJson(object.date_));
  jo << ctie("forwarded_from_chat_id", ToJson(object.forwarded_from_chat_id_));
  jo << ctie("forwarded_from_message_id", ToJson(object.forwarded_from_message_id_));
}
void to_json(JsonValueScope &jv, const td_api::messageForwardedPost &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "messageForwardedPost");
  jo << ctie("chat_id", ToJson(object.chat_id_));
  jo << ctie("author_signature", ToJson(object.author_signature_));
  jo << ctie("date", ToJson(object.date_));
  jo << ctie("message_id", ToJson(object.message_id_));
  jo << ctie("forwarded_from_chat_id", ToJson(object.forwarded_from_chat_id_));
  jo << ctie("forwarded_from_message_id", ToJson(object.forwarded_from_message_id_));
}
void to_json(JsonValueScope &jv, const td_api::MessageSendingState &object) {
  td_api::downcast_call(const_cast<td_api::MessageSendingState &>(object), [&jv](const auto &object) { to_json(jv, object); });
}
void to_json(JsonValueScope &jv, const td_api::messageSendingStatePending &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "messageSendingStatePending");
}
void to_json(JsonValueScope &jv, const td_api::messageSendingStateFailed &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "messageSendingStateFailed");
}
void to_json(JsonValueScope &jv, const td_api::messages &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "messages");
  jo << ctie("total_count", ToJson(object.total_count_));
  jo << ctie("messages", ToJson(object.messages_));
}
void to_json(JsonValueScope &jv, const td_api::networkStatistics &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "networkStatistics");
  jo << ctie("since_date", ToJson(object.since_date_));
  jo << ctie("entries", ToJson(object.entries_));
}
void to_json(JsonValueScope &jv, const td_api::NetworkStatisticsEntry &object) {
  td_api::downcast_call(const_cast<td_api::NetworkStatisticsEntry &>(object), [&jv](const auto &object) { to_json(jv, object); });
}
void to_json(JsonValueScope &jv, const td_api::networkStatisticsEntryFile &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "networkStatisticsEntryFile");
  if (object.file_type_) {
    jo << ctie("file_type", ToJson(object.file_type_));
  }
  if (object.network_type_) {
    jo << ctie("network_type", ToJson(object.network_type_));
  }
  jo << ctie("sent_bytes", ToJson(object.sent_bytes_));
  jo << ctie("received_bytes", ToJson(object.received_bytes_));
}
void to_json(JsonValueScope &jv, const td_api::networkStatisticsEntryCall &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "networkStatisticsEntryCall");
  if (object.network_type_) {
    jo << ctie("network_type", ToJson(object.network_type_));
  }
  jo << ctie("sent_bytes", ToJson(object.sent_bytes_));
  jo << ctie("received_bytes", ToJson(object.received_bytes_));
  jo << ctie("duration", ToJson(object.duration_));
}
void to_json(JsonValueScope &jv, const td_api::NetworkType &object) {
  td_api::downcast_call(const_cast<td_api::NetworkType &>(object), [&jv](const auto &object) { to_json(jv, object); });
}
void to_json(JsonValueScope &jv, const td_api::networkTypeNone &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "networkTypeNone");
}
void to_json(JsonValueScope &jv, const td_api::networkTypeMobile &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "networkTypeMobile");
}
void to_json(JsonValueScope &jv, const td_api::networkTypeMobileRoaming &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "networkTypeMobileRoaming");
}
void to_json(JsonValueScope &jv, const td_api::networkTypeWiFi &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "networkTypeWiFi");
}
void to_json(JsonValueScope &jv, const td_api::networkTypeOther &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "networkTypeOther");
}
void to_json(JsonValueScope &jv, const td_api::NotificationSettingsScope &object) {
  td_api::downcast_call(const_cast<td_api::NotificationSettingsScope &>(object), [&jv](const auto &object) { to_json(jv, object); });
}
void to_json(JsonValueScope &jv, const td_api::notificationSettingsScopePrivateChats &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "notificationSettingsScopePrivateChats");
}
void to_json(JsonValueScope &jv, const td_api::notificationSettingsScopeGroupChats &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "notificationSettingsScopeGroupChats");
}
void to_json(JsonValueScope &jv, const td_api::ok &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "ok");
}
void to_json(JsonValueScope &jv, const td_api::OptionValue &object) {
  td_api::downcast_call(const_cast<td_api::OptionValue &>(object), [&jv](const auto &object) { to_json(jv, object); });
}
void to_json(JsonValueScope &jv, const td_api::optionValueBoolean &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "optionValueBoolean");
  jo << ctie("value", ToJson(object.value_));
}
void to_json(JsonValueScope &jv, const td_api::optionValueEmpty &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "optionValueEmpty");
}
void to_json(JsonValueScope &jv, const td_api::optionValueInteger &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "optionValueInteger");
  jo << ctie("value", ToJson(object.value_));
}
void to_json(JsonValueScope &jv, const td_api::optionValueString &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "optionValueString");
  jo << ctie("value", ToJson(object.value_));
}
void to_json(JsonValueScope &jv, const td_api::orderInfo &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "orderInfo");
  jo << ctie("name", ToJson(object.name_));
  jo << ctie("phone_number", ToJson(object.phone_number_));
  jo << ctie("email_address", ToJson(object.email_address_));
  if (object.shipping_address_) {
    jo << ctie("shipping_address", ToJson(object.shipping_address_));
  }
}
void to_json(JsonValueScope &jv, const td_api::PageBlock &object) {
  td_api::downcast_call(const_cast<td_api::PageBlock &>(object), [&jv](const auto &object) { to_json(jv, object); });
}
void to_json(JsonValueScope &jv, const td_api::pageBlockTitle &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "pageBlockTitle");
  if (object.title_) {
    jo << ctie("title", ToJson(object.title_));
  }
}
void to_json(JsonValueScope &jv, const td_api::pageBlockSubtitle &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "pageBlockSubtitle");
  if (object.subtitle_) {
    jo << ctie("subtitle", ToJson(object.subtitle_));
  }
}
void to_json(JsonValueScope &jv, const td_api::pageBlockAuthorDate &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "pageBlockAuthorDate");
  if (object.author_) {
    jo << ctie("author", ToJson(object.author_));
  }
  jo << ctie("publish_date", ToJson(object.publish_date_));
}
void to_json(JsonValueScope &jv, const td_api::pageBlockHeader &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "pageBlockHeader");
  if (object.header_) {
    jo << ctie("header", ToJson(object.header_));
  }
}
void to_json(JsonValueScope &jv, const td_api::pageBlockSubheader &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "pageBlockSubheader");
  if (object.subheader_) {
    jo << ctie("subheader", ToJson(object.subheader_));
  }
}
void to_json(JsonValueScope &jv, const td_api::pageBlockParagraph &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "pageBlockParagraph");
  if (object.text_) {
    jo << ctie("text", ToJson(object.text_));
  }
}
void to_json(JsonValueScope &jv, const td_api::pageBlockPreformatted &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "pageBlockPreformatted");
  if (object.text_) {
    jo << ctie("text", ToJson(object.text_));
  }
  jo << ctie("language", ToJson(object.language_));
}
void to_json(JsonValueScope &jv, const td_api::pageBlockFooter &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "pageBlockFooter");
  if (object.footer_) {
    jo << ctie("footer", ToJson(object.footer_));
  }
}
void to_json(JsonValueScope &jv, const td_api::pageBlockDivider &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "pageBlockDivider");
}
void to_json(JsonValueScope &jv, const td_api::pageBlockAnchor &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "pageBlockAnchor");
  jo << ctie("name", ToJson(object.name_));
}
void to_json(JsonValueScope &jv, const td_api::pageBlockList &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "pageBlockList");
  jo << ctie("items", ToJson(object.items_));
  jo << ctie("is_ordered", ToJson(object.is_ordered_));
}
void to_json(JsonValueScope &jv, const td_api::pageBlockBlockQuote &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "pageBlockBlockQuote");
  if (object.text_) {
    jo << ctie("text", ToJson(object.text_));
  }
  if (object.caption_) {
    jo << ctie("caption", ToJson(object.caption_));
  }
}
void to_json(JsonValueScope &jv, const td_api::pageBlockPullQuote &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "pageBlockPullQuote");
  if (object.text_) {
    jo << ctie("text", ToJson(object.text_));
  }
  if (object.caption_) {
    jo << ctie("caption", ToJson(object.caption_));
  }
}
void to_json(JsonValueScope &jv, const td_api::pageBlockAnimation &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "pageBlockAnimation");
  if (object.animation_) {
    jo << ctie("animation", ToJson(object.animation_));
  }
  if (object.caption_) {
    jo << ctie("caption", ToJson(object.caption_));
  }
  jo << ctie("need_autoplay", ToJson(object.need_autoplay_));
}
void to_json(JsonValueScope &jv, const td_api::pageBlockAudio &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "pageBlockAudio");
  if (object.audio_) {
    jo << ctie("audio", ToJson(object.audio_));
  }
  if (object.caption_) {
    jo << ctie("caption", ToJson(object.caption_));
  }
}
void to_json(JsonValueScope &jv, const td_api::pageBlockPhoto &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "pageBlockPhoto");
  if (object.photo_) {
    jo << ctie("photo", ToJson(object.photo_));
  }
  if (object.caption_) {
    jo << ctie("caption", ToJson(object.caption_));
  }
}
void to_json(JsonValueScope &jv, const td_api::pageBlockVideo &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "pageBlockVideo");
  if (object.video_) {
    jo << ctie("video", ToJson(object.video_));
  }
  if (object.caption_) {
    jo << ctie("caption", ToJson(object.caption_));
  }
  jo << ctie("need_autoplay", ToJson(object.need_autoplay_));
  jo << ctie("is_looped", ToJson(object.is_looped_));
}
void to_json(JsonValueScope &jv, const td_api::pageBlockCover &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "pageBlockCover");
  if (object.cover_) {
    jo << ctie("cover", ToJson(object.cover_));
  }
}
void to_json(JsonValueScope &jv, const td_api::pageBlockEmbedded &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "pageBlockEmbedded");
  jo << ctie("url", ToJson(object.url_));
  jo << ctie("html", ToJson(object.html_));
  if (object.poster_photo_) {
    jo << ctie("poster_photo", ToJson(object.poster_photo_));
  }
  jo << ctie("width", ToJson(object.width_));
  jo << ctie("height", ToJson(object.height_));
  if (object.caption_) {
    jo << ctie("caption", ToJson(object.caption_));
  }
  jo << ctie("is_full_width", ToJson(object.is_full_width_));
  jo << ctie("allow_scrolling", ToJson(object.allow_scrolling_));
}
void to_json(JsonValueScope &jv, const td_api::pageBlockEmbeddedPost &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "pageBlockEmbeddedPost");
  jo << ctie("url", ToJson(object.url_));
  jo << ctie("author", ToJson(object.author_));
  if (object.author_photo_) {
    jo << ctie("author_photo", ToJson(object.author_photo_));
  }
  jo << ctie("date", ToJson(object.date_));
  jo << ctie("page_blocks", ToJson(object.page_blocks_));
  if (object.caption_) {
    jo << ctie("caption", ToJson(object.caption_));
  }
}
void to_json(JsonValueScope &jv, const td_api::pageBlockCollage &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "pageBlockCollage");
  jo << ctie("page_blocks", ToJson(object.page_blocks_));
  if (object.caption_) {
    jo << ctie("caption", ToJson(object.caption_));
  }
}
void to_json(JsonValueScope &jv, const td_api::pageBlockSlideshow &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "pageBlockSlideshow");
  jo << ctie("page_blocks", ToJson(object.page_blocks_));
  if (object.caption_) {
    jo << ctie("caption", ToJson(object.caption_));
  }
}
void to_json(JsonValueScope &jv, const td_api::pageBlockChatLink &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "pageBlockChatLink");
  jo << ctie("title", ToJson(object.title_));
  if (object.photo_) {
    jo << ctie("photo", ToJson(object.photo_));
  }
  jo << ctie("username", ToJson(object.username_));
}
void to_json(JsonValueScope &jv, const td_api::passportAuthorizationForm &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "passportAuthorizationForm");
  jo << ctie("id", ToJson(object.id_));
  jo << ctie("required_elements", ToJson(object.required_elements_));
  jo << ctie("elements", ToJson(object.elements_));
  jo << ctie("errors", ToJson(object.errors_));
  jo << ctie("privacy_policy_url", ToJson(object.privacy_policy_url_));
}
void to_json(JsonValueScope &jv, const td_api::PassportElement &object) {
  td_api::downcast_call(const_cast<td_api::PassportElement &>(object), [&jv](const auto &object) { to_json(jv, object); });
}
void to_json(JsonValueScope &jv, const td_api::passportElementPersonalDetails &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "passportElementPersonalDetails");
  if (object.personal_details_) {
    jo << ctie("personal_details", ToJson(object.personal_details_));
  }
}
void to_json(JsonValueScope &jv, const td_api::passportElementPassport &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "passportElementPassport");
  if (object.passport_) {
    jo << ctie("passport", ToJson(object.passport_));
  }
}
void to_json(JsonValueScope &jv, const td_api::passportElementDriverLicense &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "passportElementDriverLicense");
  if (object.driver_license_) {
    jo << ctie("driver_license", ToJson(object.driver_license_));
  }
}
void to_json(JsonValueScope &jv, const td_api::passportElementIdentityCard &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "passportElementIdentityCard");
  if (object.identity_card_) {
    jo << ctie("identity_card", ToJson(object.identity_card_));
  }
}
void to_json(JsonValueScope &jv, const td_api::passportElementInternalPassport &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "passportElementInternalPassport");
  if (object.internal_passport_) {
    jo << ctie("internal_passport", ToJson(object.internal_passport_));
  }
}
void to_json(JsonValueScope &jv, const td_api::passportElementAddress &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "passportElementAddress");
  if (object.address_) {
    jo << ctie("address", ToJson(object.address_));
  }
}
void to_json(JsonValueScope &jv, const td_api::passportElementUtilityBill &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "passportElementUtilityBill");
  if (object.utility_bill_) {
    jo << ctie("utility_bill", ToJson(object.utility_bill_));
  }
}
void to_json(JsonValueScope &jv, const td_api::passportElementBankStatement &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "passportElementBankStatement");
  if (object.bank_statement_) {
    jo << ctie("bank_statement", ToJson(object.bank_statement_));
  }
}
void to_json(JsonValueScope &jv, const td_api::passportElementRentalAgreement &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "passportElementRentalAgreement");
  if (object.rental_agreement_) {
    jo << ctie("rental_agreement", ToJson(object.rental_agreement_));
  }
}
void to_json(JsonValueScope &jv, const td_api::passportElementPassportRegistration &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "passportElementPassportRegistration");
  if (object.passport_registration_) {
    jo << ctie("passport_registration", ToJson(object.passport_registration_));
  }
}
void to_json(JsonValueScope &jv, const td_api::passportElementTemporaryRegistration &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "passportElementTemporaryRegistration");
  if (object.temporary_registration_) {
    jo << ctie("temporary_registration", ToJson(object.temporary_registration_));
  }
}
void to_json(JsonValueScope &jv, const td_api::passportElementPhoneNumber &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "passportElementPhoneNumber");
  jo << ctie("phone_number", ToJson(object.phone_number_));
}
void to_json(JsonValueScope &jv, const td_api::passportElementEmailAddress &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "passportElementEmailAddress");
  jo << ctie("email_address", ToJson(object.email_address_));
}
void to_json(JsonValueScope &jv, const td_api::passportElementError &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "passportElementError");
  if (object.type_) {
    jo << ctie("type", ToJson(object.type_));
  }
  jo << ctie("message", ToJson(object.message_));
  if (object.source_) {
    jo << ctie("source", ToJson(object.source_));
  }
}
void to_json(JsonValueScope &jv, const td_api::PassportElementErrorSource &object) {
  td_api::downcast_call(const_cast<td_api::PassportElementErrorSource &>(object), [&jv](const auto &object) { to_json(jv, object); });
}
void to_json(JsonValueScope &jv, const td_api::passportElementErrorSourceUnspecified &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "passportElementErrorSourceUnspecified");
}
void to_json(JsonValueScope &jv, const td_api::passportElementErrorSourceDataField &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "passportElementErrorSourceDataField");
  jo << ctie("field_name", ToJson(object.field_name_));
}
void to_json(JsonValueScope &jv, const td_api::passportElementErrorSourceFrontSide &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "passportElementErrorSourceFrontSide");
}
void to_json(JsonValueScope &jv, const td_api::passportElementErrorSourceReverseSide &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "passportElementErrorSourceReverseSide");
}
void to_json(JsonValueScope &jv, const td_api::passportElementErrorSourceSelfie &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "passportElementErrorSourceSelfie");
}
void to_json(JsonValueScope &jv, const td_api::passportElementErrorSourceTranslationFile &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "passportElementErrorSourceTranslationFile");
}
void to_json(JsonValueScope &jv, const td_api::passportElementErrorSourceTranslationFiles &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "passportElementErrorSourceTranslationFiles");
}
void to_json(JsonValueScope &jv, const td_api::passportElementErrorSourceFile &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "passportElementErrorSourceFile");
}
void to_json(JsonValueScope &jv, const td_api::passportElementErrorSourceFiles &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "passportElementErrorSourceFiles");
}
void to_json(JsonValueScope &jv, const td_api::PassportElementType &object) {
  td_api::downcast_call(const_cast<td_api::PassportElementType &>(object), [&jv](const auto &object) { to_json(jv, object); });
}
void to_json(JsonValueScope &jv, const td_api::passportElementTypePersonalDetails &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "passportElementTypePersonalDetails");
}
void to_json(JsonValueScope &jv, const td_api::passportElementTypePassport &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "passportElementTypePassport");
}
void to_json(JsonValueScope &jv, const td_api::passportElementTypeDriverLicense &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "passportElementTypeDriverLicense");
}
void to_json(JsonValueScope &jv, const td_api::passportElementTypeIdentityCard &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "passportElementTypeIdentityCard");
}
void to_json(JsonValueScope &jv, const td_api::passportElementTypeInternalPassport &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "passportElementTypeInternalPassport");
}
void to_json(JsonValueScope &jv, const td_api::passportElementTypeAddress &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "passportElementTypeAddress");
}
void to_json(JsonValueScope &jv, const td_api::passportElementTypeUtilityBill &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "passportElementTypeUtilityBill");
}
void to_json(JsonValueScope &jv, const td_api::passportElementTypeBankStatement &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "passportElementTypeBankStatement");
}
void to_json(JsonValueScope &jv, const td_api::passportElementTypeRentalAgreement &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "passportElementTypeRentalAgreement");
}
void to_json(JsonValueScope &jv, const td_api::passportElementTypePassportRegistration &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "passportElementTypePassportRegistration");
}
void to_json(JsonValueScope &jv, const td_api::passportElementTypeTemporaryRegistration &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "passportElementTypeTemporaryRegistration");
}
void to_json(JsonValueScope &jv, const td_api::passportElementTypePhoneNumber &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "passportElementTypePhoneNumber");
}
void to_json(JsonValueScope &jv, const td_api::passportElementTypeEmailAddress &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "passportElementTypeEmailAddress");
}
void to_json(JsonValueScope &jv, const td_api::passportElements &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "passportElements");
  jo << ctie("elements", ToJson(object.elements_));
}
void to_json(JsonValueScope &jv, const td_api::passportRequiredElement &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "passportRequiredElement");
  jo << ctie("suitable_elements", ToJson(object.suitable_elements_));
}
void to_json(JsonValueScope &jv, const td_api::passportSuitableElement &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "passportSuitableElement");
  if (object.type_) {
    jo << ctie("type", ToJson(object.type_));
  }
  jo << ctie("is_selfie_required", ToJson(object.is_selfie_required_));
  jo << ctie("is_translation_required", ToJson(object.is_translation_required_));
  jo << ctie("is_native_name_required", ToJson(object.is_native_name_required_));
}
void to_json(JsonValueScope &jv, const td_api::passwordState &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "passwordState");
  jo << ctie("has_password", ToJson(object.has_password_));
  jo << ctie("password_hint", ToJson(object.password_hint_));
  jo << ctie("has_recovery_email_address", ToJson(object.has_recovery_email_address_));
  jo << ctie("has_passport_data", ToJson(object.has_passport_data_));
  jo << ctie("unconfirmed_recovery_email_address_pattern", ToJson(object.unconfirmed_recovery_email_address_pattern_));
}
void to_json(JsonValueScope &jv, const td_api::paymentForm &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "paymentForm");
  if (object.invoice_) {
    jo << ctie("invoice", ToJson(object.invoice_));
  }
  jo << ctie("url", ToJson(object.url_));
  if (object.payments_provider_) {
    jo << ctie("payments_provider", ToJson(object.payments_provider_));
  }
  if (object.saved_order_info_) {
    jo << ctie("saved_order_info", ToJson(object.saved_order_info_));
  }
  if (object.saved_credentials_) {
    jo << ctie("saved_credentials", ToJson(object.saved_credentials_));
  }
  jo << ctie("can_save_credentials", ToJson(object.can_save_credentials_));
  jo << ctie("need_password", ToJson(object.need_password_));
}
void to_json(JsonValueScope &jv, const td_api::paymentReceipt &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "paymentReceipt");
  jo << ctie("date", ToJson(object.date_));
  jo << ctie("payments_provider_user_id", ToJson(object.payments_provider_user_id_));
  if (object.invoice_) {
    jo << ctie("invoice", ToJson(object.invoice_));
  }
  if (object.order_info_) {
    jo << ctie("order_info", ToJson(object.order_info_));
  }
  if (object.shipping_option_) {
    jo << ctie("shipping_option", ToJson(object.shipping_option_));
  }
  jo << ctie("credentials_title", ToJson(object.credentials_title_));
}
void to_json(JsonValueScope &jv, const td_api::paymentResult &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "paymentResult");
  jo << ctie("success", ToJson(object.success_));
  jo << ctie("verification_url", ToJson(object.verification_url_));
}
void to_json(JsonValueScope &jv, const td_api::paymentsProviderStripe &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "paymentsProviderStripe");
  jo << ctie("publishable_key", ToJson(object.publishable_key_));
  jo << ctie("need_country", ToJson(object.need_country_));
  jo << ctie("need_postal_code", ToJson(object.need_postal_code_));
  jo << ctie("need_cardholder_name", ToJson(object.need_cardholder_name_));
}
void to_json(JsonValueScope &jv, const td_api::personalDetails &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "personalDetails");
  jo << ctie("first_name", ToJson(object.first_name_));
  jo << ctie("middle_name", ToJson(object.middle_name_));
  jo << ctie("last_name", ToJson(object.last_name_));
  jo << ctie("native_first_name", ToJson(object.native_first_name_));
  jo << ctie("native_middle_name", ToJson(object.native_middle_name_));
  jo << ctie("native_last_name", ToJson(object.native_last_name_));
  if (object.birthdate_) {
    jo << ctie("birthdate", ToJson(object.birthdate_));
  }
  jo << ctie("gender", ToJson(object.gender_));
  jo << ctie("country_code", ToJson(object.country_code_));
  jo << ctie("residence_country_code", ToJson(object.residence_country_code_));
}
void to_json(JsonValueScope &jv, const td_api::personalDocument &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "personalDocument");
  jo << ctie("files", ToJson(object.files_));
  jo << ctie("translation", ToJson(object.translation_));
}
void to_json(JsonValueScope &jv, const td_api::photo &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "photo");
  jo << ctie("id", ToJson(JsonInt64{object.id_}));
  jo << ctie("has_stickers", ToJson(object.has_stickers_));
  jo << ctie("sizes", ToJson(object.sizes_));
}
void to_json(JsonValueScope &jv, const td_api::photoSize &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "photoSize");
  jo << ctie("type", ToJson(object.type_));
  if (object.photo_) {
    jo << ctie("photo", ToJson(object.photo_));
  }
  jo << ctie("width", ToJson(object.width_));
  jo << ctie("height", ToJson(object.height_));
}
void to_json(JsonValueScope &jv, const td_api::profilePhoto &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "profilePhoto");
  jo << ctie("id", ToJson(JsonInt64{object.id_}));
  if (object.small_) {
    jo << ctie("small", ToJson(object.small_));
  }
  if (object.big_) {
    jo << ctie("big", ToJson(object.big_));
  }
}
void to_json(JsonValueScope &jv, const td_api::proxies &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "proxies");
  jo << ctie("proxies", ToJson(object.proxies_));
}
void to_json(JsonValueScope &jv, const td_api::proxy &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "proxy");
  jo << ctie("id", ToJson(object.id_));
  jo << ctie("server", ToJson(object.server_));
  jo << ctie("port", ToJson(object.port_));
  jo << ctie("last_used_date", ToJson(object.last_used_date_));
  jo << ctie("is_enabled", ToJson(object.is_enabled_));
  if (object.type_) {
    jo << ctie("type", ToJson(object.type_));
  }
}
void to_json(JsonValueScope &jv, const td_api::ProxyType &object) {
  td_api::downcast_call(const_cast<td_api::ProxyType &>(object), [&jv](const auto &object) { to_json(jv, object); });
}
void to_json(JsonValueScope &jv, const td_api::proxyTypeSocks5 &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "proxyTypeSocks5");
  jo << ctie("username", ToJson(object.username_));
  jo << ctie("password", ToJson(object.password_));
}
void to_json(JsonValueScope &jv, const td_api::proxyTypeHttp &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "proxyTypeHttp");
  jo << ctie("username", ToJson(object.username_));
  jo << ctie("password", ToJson(object.password_));
  jo << ctie("http_only", ToJson(object.http_only_));
}
void to_json(JsonValueScope &jv, const td_api::proxyTypeMtproto &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "proxyTypeMtproto");
  jo << ctie("secret", ToJson(object.secret_));
}
void to_json(JsonValueScope &jv, const td_api::publicMessageLink &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "publicMessageLink");
  jo << ctie("link", ToJson(object.link_));
  jo << ctie("html", ToJson(object.html_));
}
void to_json(JsonValueScope &jv, const td_api::recoveryEmailAddress &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "recoveryEmailAddress");
  jo << ctie("recovery_email_address", ToJson(object.recovery_email_address_));
}
void to_json(JsonValueScope &jv, const td_api::remoteFile &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "remoteFile");
  jo << ctie("id", ToJson(object.id_));
  jo << ctie("is_uploading_active", ToJson(object.is_uploading_active_));
  jo << ctie("is_uploading_completed", ToJson(object.is_uploading_completed_));
  jo << ctie("uploaded_size", ToJson(object.uploaded_size_));
}
void to_json(JsonValueScope &jv, const td_api::ReplyMarkup &object) {
  td_api::downcast_call(const_cast<td_api::ReplyMarkup &>(object), [&jv](const auto &object) { to_json(jv, object); });
}
void to_json(JsonValueScope &jv, const td_api::replyMarkupRemoveKeyboard &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "replyMarkupRemoveKeyboard");
  jo << ctie("is_personal", ToJson(object.is_personal_));
}
void to_json(JsonValueScope &jv, const td_api::replyMarkupForceReply &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "replyMarkupForceReply");
  jo << ctie("is_personal", ToJson(object.is_personal_));
}
void to_json(JsonValueScope &jv, const td_api::replyMarkupShowKeyboard &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "replyMarkupShowKeyboard");
  jo << ctie("rows", ToJson(object.rows_));
  jo << ctie("resize_keyboard", ToJson(object.resize_keyboard_));
  jo << ctie("one_time", ToJson(object.one_time_));
  jo << ctie("is_personal", ToJson(object.is_personal_));
}
void to_json(JsonValueScope &jv, const td_api::replyMarkupInlineKeyboard &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "replyMarkupInlineKeyboard");
  jo << ctie("rows", ToJson(object.rows_));
}
void to_json(JsonValueScope &jv, const td_api::RichText &object) {
  td_api::downcast_call(const_cast<td_api::RichText &>(object), [&jv](const auto &object) { to_json(jv, object); });
}
void to_json(JsonValueScope &jv, const td_api::richTextPlain &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "richTextPlain");
  jo << ctie("text", ToJson(object.text_));
}
void to_json(JsonValueScope &jv, const td_api::richTextBold &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "richTextBold");
  if (object.text_) {
    jo << ctie("text", ToJson(object.text_));
  }
}
void to_json(JsonValueScope &jv, const td_api::richTextItalic &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "richTextItalic");
  if (object.text_) {
    jo << ctie("text", ToJson(object.text_));
  }
}
void to_json(JsonValueScope &jv, const td_api::richTextUnderline &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "richTextUnderline");
  if (object.text_) {
    jo << ctie("text", ToJson(object.text_));
  }
}
void to_json(JsonValueScope &jv, const td_api::richTextStrikethrough &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "richTextStrikethrough");
  if (object.text_) {
    jo << ctie("text", ToJson(object.text_));
  }
}
void to_json(JsonValueScope &jv, const td_api::richTextFixed &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "richTextFixed");
  if (object.text_) {
    jo << ctie("text", ToJson(object.text_));
  }
}
void to_json(JsonValueScope &jv, const td_api::richTextUrl &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "richTextUrl");
  if (object.text_) {
    jo << ctie("text", ToJson(object.text_));
  }
  jo << ctie("url", ToJson(object.url_));
}
void to_json(JsonValueScope &jv, const td_api::richTextEmailAddress &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "richTextEmailAddress");
  if (object.text_) {
    jo << ctie("text", ToJson(object.text_));
  }
  jo << ctie("email_address", ToJson(object.email_address_));
}
void to_json(JsonValueScope &jv, const td_api::richTexts &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "richTexts");
  jo << ctie("texts", ToJson(object.texts_));
}
void to_json(JsonValueScope &jv, const td_api::savedCredentials &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "savedCredentials");
  jo << ctie("id", ToJson(object.id_));
  jo << ctie("title", ToJson(object.title_));
}
void to_json(JsonValueScope &jv, const td_api::scopeNotificationSettings &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "scopeNotificationSettings");
  jo << ctie("mute_for", ToJson(object.mute_for_));
  jo << ctie("sound", ToJson(object.sound_));
  jo << ctie("show_preview", ToJson(object.show_preview_));
}
void to_json(JsonValueScope &jv, const td_api::SearchMessagesFilter &object) {
  td_api::downcast_call(const_cast<td_api::SearchMessagesFilter &>(object), [&jv](const auto &object) { to_json(jv, object); });
}
void to_json(JsonValueScope &jv, const td_api::searchMessagesFilterEmpty &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "searchMessagesFilterEmpty");
}
void to_json(JsonValueScope &jv, const td_api::searchMessagesFilterAnimation &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "searchMessagesFilterAnimation");
}
void to_json(JsonValueScope &jv, const td_api::searchMessagesFilterAudio &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "searchMessagesFilterAudio");
}
void to_json(JsonValueScope &jv, const td_api::searchMessagesFilterDocument &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "searchMessagesFilterDocument");
}
void to_json(JsonValueScope &jv, const td_api::searchMessagesFilterPhoto &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "searchMessagesFilterPhoto");
}
void to_json(JsonValueScope &jv, const td_api::searchMessagesFilterVideo &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "searchMessagesFilterVideo");
}
void to_json(JsonValueScope &jv, const td_api::searchMessagesFilterVoiceNote &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "searchMessagesFilterVoiceNote");
}
void to_json(JsonValueScope &jv, const td_api::searchMessagesFilterPhotoAndVideo &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "searchMessagesFilterPhotoAndVideo");
}
void to_json(JsonValueScope &jv, const td_api::searchMessagesFilterUrl &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "searchMessagesFilterUrl");
}
void to_json(JsonValueScope &jv, const td_api::searchMessagesFilterChatPhoto &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "searchMessagesFilterChatPhoto");
}
void to_json(JsonValueScope &jv, const td_api::searchMessagesFilterCall &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "searchMessagesFilterCall");
}
void to_json(JsonValueScope &jv, const td_api::searchMessagesFilterMissedCall &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "searchMessagesFilterMissedCall");
}
void to_json(JsonValueScope &jv, const td_api::searchMessagesFilterVideoNote &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "searchMessagesFilterVideoNote");
}
void to_json(JsonValueScope &jv, const td_api::searchMessagesFilterVoiceAndVideoNote &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "searchMessagesFilterVoiceAndVideoNote");
}
void to_json(JsonValueScope &jv, const td_api::searchMessagesFilterMention &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "searchMessagesFilterMention");
}
void to_json(JsonValueScope &jv, const td_api::searchMessagesFilterUnreadMention &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "searchMessagesFilterUnreadMention");
}
void to_json(JsonValueScope &jv, const td_api::seconds &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "seconds");
  jo << ctie("seconds", ToJson(object.seconds_));
}
void to_json(JsonValueScope &jv, const td_api::secretChat &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "secretChat");
  jo << ctie("id", ToJson(object.id_));
  jo << ctie("user_id", ToJson(object.user_id_));
  if (object.state_) {
    jo << ctie("state", ToJson(object.state_));
  }
  jo << ctie("is_outbound", ToJson(object.is_outbound_));
  jo << ctie("ttl", ToJson(object.ttl_));
  jo << ctie("key_hash", ToJson(base64_encode(object.key_hash_)));
  jo << ctie("layer", ToJson(object.layer_));
}
void to_json(JsonValueScope &jv, const td_api::SecretChatState &object) {
  td_api::downcast_call(const_cast<td_api::SecretChatState &>(object), [&jv](const auto &object) { to_json(jv, object); });
}
void to_json(JsonValueScope &jv, const td_api::secretChatStatePending &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "secretChatStatePending");
}
void to_json(JsonValueScope &jv, const td_api::secretChatStateReady &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "secretChatStateReady");
}
void to_json(JsonValueScope &jv, const td_api::secretChatStateClosed &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "secretChatStateClosed");
}
void to_json(JsonValueScope &jv, const td_api::session &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "session");
  jo << ctie("id", ToJson(JsonInt64{object.id_}));
  jo << ctie("is_current", ToJson(object.is_current_));
  jo << ctie("api_id", ToJson(object.api_id_));
  jo << ctie("application_name", ToJson(object.application_name_));
  jo << ctie("application_version", ToJson(object.application_version_));
  jo << ctie("is_official_application", ToJson(object.is_official_application_));
  jo << ctie("device_model", ToJson(object.device_model_));
  jo << ctie("platform", ToJson(object.platform_));
  jo << ctie("system_version", ToJson(object.system_version_));
  jo << ctie("log_in_date", ToJson(object.log_in_date_));
  jo << ctie("last_active_date", ToJson(object.last_active_date_));
  jo << ctie("ip", ToJson(object.ip_));
  jo << ctie("country", ToJson(object.country_));
  jo << ctie("region", ToJson(object.region_));
}
void to_json(JsonValueScope &jv, const td_api::sessions &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "sessions");
  jo << ctie("sessions", ToJson(object.sessions_));
}
void to_json(JsonValueScope &jv, const td_api::shippingOption &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "shippingOption");
  jo << ctie("id", ToJson(object.id_));
  jo << ctie("title", ToJson(object.title_));
  jo << ctie("price_parts", ToJson(object.price_parts_));
}
void to_json(JsonValueScope &jv, const td_api::sticker &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "sticker");
  jo << ctie("set_id", ToJson(JsonInt64{object.set_id_}));
  jo << ctie("width", ToJson(object.width_));
  jo << ctie("height", ToJson(object.height_));
  jo << ctie("emoji", ToJson(object.emoji_));
  jo << ctie("is_mask", ToJson(object.is_mask_));
  if (object.mask_position_) {
    jo << ctie("mask_position", ToJson(object.mask_position_));
  }
  if (object.thumbnail_) {
    jo << ctie("thumbnail", ToJson(object.thumbnail_));
  }
  if (object.sticker_) {
    jo << ctie("sticker", ToJson(object.sticker_));
  }
}
void to_json(JsonValueScope &jv, const td_api::stickerEmojis &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "stickerEmojis");
  jo << ctie("emojis", ToJson(object.emojis_));
}
void to_json(JsonValueScope &jv, const td_api::stickerSet &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "stickerSet");
  jo << ctie("id", ToJson(JsonInt64{object.id_}));
  jo << ctie("title", ToJson(object.title_));
  jo << ctie("name", ToJson(object.name_));
  jo << ctie("is_installed", ToJson(object.is_installed_));
  jo << ctie("is_archived", ToJson(object.is_archived_));
  jo << ctie("is_official", ToJson(object.is_official_));
  jo << ctie("is_masks", ToJson(object.is_masks_));
  jo << ctie("is_viewed", ToJson(object.is_viewed_));
  jo << ctie("stickers", ToJson(object.stickers_));
  jo << ctie("emojis", ToJson(object.emojis_));
}
void to_json(JsonValueScope &jv, const td_api::stickerSetInfo &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "stickerSetInfo");
  jo << ctie("id", ToJson(JsonInt64{object.id_}));
  jo << ctie("title", ToJson(object.title_));
  jo << ctie("name", ToJson(object.name_));
  jo << ctie("is_installed", ToJson(object.is_installed_));
  jo << ctie("is_archived", ToJson(object.is_archived_));
  jo << ctie("is_official", ToJson(object.is_official_));
  jo << ctie("is_masks", ToJson(object.is_masks_));
  jo << ctie("is_viewed", ToJson(object.is_viewed_));
  jo << ctie("size", ToJson(object.size_));
  jo << ctie("covers", ToJson(object.covers_));
}
void to_json(JsonValueScope &jv, const td_api::stickerSets &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "stickerSets");
  jo << ctie("total_count", ToJson(object.total_count_));
  jo << ctie("sets", ToJson(object.sets_));
}
void to_json(JsonValueScope &jv, const td_api::stickers &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "stickers");
  jo << ctie("stickers", ToJson(object.stickers_));
}
void to_json(JsonValueScope &jv, const td_api::storageStatistics &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "storageStatistics");
  jo << ctie("size", ToJson(object.size_));
  jo << ctie("count", ToJson(object.count_));
  jo << ctie("by_chat", ToJson(object.by_chat_));
}
void to_json(JsonValueScope &jv, const td_api::storageStatisticsByChat &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "storageStatisticsByChat");
  jo << ctie("chat_id", ToJson(object.chat_id_));
  jo << ctie("size", ToJson(object.size_));
  jo << ctie("count", ToJson(object.count_));
  jo << ctie("by_file_type", ToJson(object.by_file_type_));
}
void to_json(JsonValueScope &jv, const td_api::storageStatisticsByFileType &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "storageStatisticsByFileType");
  if (object.file_type_) {
    jo << ctie("file_type", ToJson(object.file_type_));
  }
  jo << ctie("size", ToJson(object.size_));
  jo << ctie("count", ToJson(object.count_));
}
void to_json(JsonValueScope &jv, const td_api::storageStatisticsFast &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "storageStatisticsFast");
  jo << ctie("files_size", ToJson(object.files_size_));
  jo << ctie("file_count", ToJson(object.file_count_));
  jo << ctie("database_size", ToJson(object.database_size_));
}
void to_json(JsonValueScope &jv, const td_api::supergroup &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "supergroup");
  jo << ctie("id", ToJson(object.id_));
  jo << ctie("username", ToJson(object.username_));
  jo << ctie("date", ToJson(object.date_));
  if (object.status_) {
    jo << ctie("status", ToJson(object.status_));
  }
  jo << ctie("member_count", ToJson(object.member_count_));
  jo << ctie("anyone_can_invite", ToJson(object.anyone_can_invite_));
  jo << ctie("sign_messages", ToJson(object.sign_messages_));
  jo << ctie("is_channel", ToJson(object.is_channel_));
  jo << ctie("is_verified", ToJson(object.is_verified_));
  jo << ctie("restriction_reason", ToJson(object.restriction_reason_));
}
void to_json(JsonValueScope &jv, const td_api::supergroupFullInfo &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "supergroupFullInfo");
  jo << ctie("description", ToJson(object.description_));
  jo << ctie("member_count", ToJson(object.member_count_));
  jo << ctie("administrator_count", ToJson(object.administrator_count_));
  jo << ctie("restricted_count", ToJson(object.restricted_count_));
  jo << ctie("banned_count", ToJson(object.banned_count_));
  jo << ctie("can_get_members", ToJson(object.can_get_members_));
  jo << ctie("can_set_username", ToJson(object.can_set_username_));
  jo << ctie("can_set_sticker_set", ToJson(object.can_set_sticker_set_));
  jo << ctie("is_all_history_available", ToJson(object.is_all_history_available_));
  jo << ctie("sticker_set_id", ToJson(JsonInt64{object.sticker_set_id_}));
  jo << ctie("invite_link", ToJson(object.invite_link_));
  jo << ctie("pinned_message_id", ToJson(object.pinned_message_id_));
  jo << ctie("upgraded_from_basic_group_id", ToJson(object.upgraded_from_basic_group_id_));
  jo << ctie("upgraded_from_max_message_id", ToJson(object.upgraded_from_max_message_id_));
}
void to_json(JsonValueScope &jv, const td_api::SupergroupMembersFilter &object) {
  td_api::downcast_call(const_cast<td_api::SupergroupMembersFilter &>(object), [&jv](const auto &object) { to_json(jv, object); });
}
void to_json(JsonValueScope &jv, const td_api::supergroupMembersFilterRecent &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "supergroupMembersFilterRecent");
}
void to_json(JsonValueScope &jv, const td_api::supergroupMembersFilterAdministrators &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "supergroupMembersFilterAdministrators");
}
void to_json(JsonValueScope &jv, const td_api::supergroupMembersFilterSearch &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "supergroupMembersFilterSearch");
  jo << ctie("query", ToJson(object.query_));
}
void to_json(JsonValueScope &jv, const td_api::supergroupMembersFilterRestricted &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "supergroupMembersFilterRestricted");
  jo << ctie("query", ToJson(object.query_));
}
void to_json(JsonValueScope &jv, const td_api::supergroupMembersFilterBanned &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "supergroupMembersFilterBanned");
  jo << ctie("query", ToJson(object.query_));
}
void to_json(JsonValueScope &jv, const td_api::supergroupMembersFilterBots &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "supergroupMembersFilterBots");
}
void to_json(JsonValueScope &jv, const td_api::tMeUrl &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "tMeUrl");
  jo << ctie("url", ToJson(object.url_));
  if (object.type_) {
    jo << ctie("type", ToJson(object.type_));
  }
}
void to_json(JsonValueScope &jv, const td_api::TMeUrlType &object) {
  td_api::downcast_call(const_cast<td_api::TMeUrlType &>(object), [&jv](const auto &object) { to_json(jv, object); });
}
void to_json(JsonValueScope &jv, const td_api::tMeUrlTypeUser &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "tMeUrlTypeUser");
  jo << ctie("user_id", ToJson(object.user_id_));
}
void to_json(JsonValueScope &jv, const td_api::tMeUrlTypeSupergroup &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "tMeUrlTypeSupergroup");
  jo << ctie("supergroup_id", ToJson(object.supergroup_id_));
}
void to_json(JsonValueScope &jv, const td_api::tMeUrlTypeChatInvite &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "tMeUrlTypeChatInvite");
  if (object.info_) {
    jo << ctie("info", ToJson(object.info_));
  }
}
void to_json(JsonValueScope &jv, const td_api::tMeUrlTypeStickerSet &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "tMeUrlTypeStickerSet");
  jo << ctie("sticker_set_id", ToJson(JsonInt64{object.sticker_set_id_}));
}
void to_json(JsonValueScope &jv, const td_api::tMeUrls &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "tMeUrls");
  jo << ctie("urls", ToJson(object.urls_));
}
void to_json(JsonValueScope &jv, const td_api::tdlibParameters &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "tdlibParameters");
  jo << ctie("use_test_dc", ToJson(object.use_test_dc_));
  jo << ctie("database_directory", ToJson(object.database_directory_));
  jo << ctie("files_directory", ToJson(object.files_directory_));
  jo << ctie("use_file_database", ToJson(object.use_file_database_));
  jo << ctie("use_chat_info_database", ToJson(object.use_chat_info_database_));
  jo << ctie("use_message_database", ToJson(object.use_message_database_));
  jo << ctie("use_secret_chats", ToJson(object.use_secret_chats_));
  jo << ctie("api_id", ToJson(object.api_id_));
  jo << ctie("api_hash", ToJson(object.api_hash_));
  jo << ctie("system_language_code", ToJson(object.system_language_code_));
  jo << ctie("device_model", ToJson(object.device_model_));
  jo << ctie("system_version", ToJson(object.system_version_));
  jo << ctie("application_version", ToJson(object.application_version_));
  jo << ctie("enable_storage_optimizer", ToJson(object.enable_storage_optimizer_));
  jo << ctie("ignore_file_names", ToJson(object.ignore_file_names_));
}
void to_json(JsonValueScope &jv, const td_api::temporaryPasswordState &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "temporaryPasswordState");
  jo << ctie("has_password", ToJson(object.has_password_));
  jo << ctie("valid_for", ToJson(object.valid_for_));
}
void to_json(JsonValueScope &jv, const td_api::termsOfService &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "termsOfService");
  if (object.text_) {
    jo << ctie("text", ToJson(object.text_));
  }
  jo << ctie("min_user_age", ToJson(object.min_user_age_));
  jo << ctie("show_popup", ToJson(object.show_popup_));
}
void to_json(JsonValueScope &jv, const td_api::testBytes &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "testBytes");
  jo << ctie("value", ToJson(base64_encode(object.value_)));
}
void to_json(JsonValueScope &jv, const td_api::testInt &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "testInt");
  jo << ctie("value", ToJson(object.value_));
}
void to_json(JsonValueScope &jv, const td_api::testString &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "testString");
  jo << ctie("value", ToJson(object.value_));
}
void to_json(JsonValueScope &jv, const td_api::testVectorInt &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "testVectorInt");
  jo << ctie("value", ToJson(object.value_));
}
void to_json(JsonValueScope &jv, const td_api::testVectorIntObject &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "testVectorIntObject");
  jo << ctie("value", ToJson(object.value_));
}
void to_json(JsonValueScope &jv, const td_api::testVectorString &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "testVectorString");
  jo << ctie("value", ToJson(object.value_));
}
void to_json(JsonValueScope &jv, const td_api::testVectorStringObject &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "testVectorStringObject");
  jo << ctie("value", ToJson(object.value_));
}
void to_json(JsonValueScope &jv, const td_api::text &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "text");
  jo << ctie("text", ToJson(object.text_));
}
void to_json(JsonValueScope &jv, const td_api::textEntities &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "textEntities");
  jo << ctie("entities", ToJson(object.entities_));
}
void to_json(JsonValueScope &jv, const td_api::textEntity &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "textEntity");
  jo << ctie("offset", ToJson(object.offset_));
  jo << ctie("length", ToJson(object.length_));
  if (object.type_) {
    jo << ctie("type", ToJson(object.type_));
  }
}
void to_json(JsonValueScope &jv, const td_api::TextEntityType &object) {
  td_api::downcast_call(const_cast<td_api::TextEntityType &>(object), [&jv](const auto &object) { to_json(jv, object); });
}
void to_json(JsonValueScope &jv, const td_api::textEntityTypeMention &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "textEntityTypeMention");
}
void to_json(JsonValueScope &jv, const td_api::textEntityTypeHashtag &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "textEntityTypeHashtag");
}
void to_json(JsonValueScope &jv, const td_api::textEntityTypeCashtag &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "textEntityTypeCashtag");
}
void to_json(JsonValueScope &jv, const td_api::textEntityTypeBotCommand &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "textEntityTypeBotCommand");
}
void to_json(JsonValueScope &jv, const td_api::textEntityTypeUrl &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "textEntityTypeUrl");
}
void to_json(JsonValueScope &jv, const td_api::textEntityTypeEmailAddress &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "textEntityTypeEmailAddress");
}
void to_json(JsonValueScope &jv, const td_api::textEntityTypeBold &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "textEntityTypeBold");
}
void to_json(JsonValueScope &jv, const td_api::textEntityTypeItalic &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "textEntityTypeItalic");
}
void to_json(JsonValueScope &jv, const td_api::textEntityTypeCode &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "textEntityTypeCode");
}
void to_json(JsonValueScope &jv, const td_api::textEntityTypePre &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "textEntityTypePre");
}
void to_json(JsonValueScope &jv, const td_api::textEntityTypePreCode &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "textEntityTypePreCode");
  jo << ctie("language", ToJson(object.language_));
}
void to_json(JsonValueScope &jv, const td_api::textEntityTypeTextUrl &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "textEntityTypeTextUrl");
  jo << ctie("url", ToJson(object.url_));
}
void to_json(JsonValueScope &jv, const td_api::textEntityTypeMentionName &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "textEntityTypeMentionName");
  jo << ctie("user_id", ToJson(object.user_id_));
}
void to_json(JsonValueScope &jv, const td_api::textEntityTypePhoneNumber &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "textEntityTypePhoneNumber");
}
void to_json(JsonValueScope &jv, const td_api::TextParseMode &object) {
  td_api::downcast_call(const_cast<td_api::TextParseMode &>(object), [&jv](const auto &object) { to_json(jv, object); });
}
void to_json(JsonValueScope &jv, const td_api::textParseModeMarkdown &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "textParseModeMarkdown");
}
void to_json(JsonValueScope &jv, const td_api::textParseModeHTML &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "textParseModeHTML");
}
void to_json(JsonValueScope &jv, const td_api::TopChatCategory &object) {
  td_api::downcast_call(const_cast<td_api::TopChatCategory &>(object), [&jv](const auto &object) { to_json(jv, object); });
}
void to_json(JsonValueScope &jv, const td_api::topChatCategoryUsers &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "topChatCategoryUsers");
}
void to_json(JsonValueScope &jv, const td_api::topChatCategoryBots &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "topChatCategoryBots");
}
void to_json(JsonValueScope &jv, const td_api::topChatCategoryGroups &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "topChatCategoryGroups");
}
void to_json(JsonValueScope &jv, const td_api::topChatCategoryChannels &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "topChatCategoryChannels");
}
void to_json(JsonValueScope &jv, const td_api::topChatCategoryInlineBots &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "topChatCategoryInlineBots");
}
void to_json(JsonValueScope &jv, const td_api::topChatCategoryCalls &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "topChatCategoryCalls");
}
void to_json(JsonValueScope &jv, const td_api::Update &object) {
  td_api::downcast_call(const_cast<td_api::Update &>(object), [&jv](const auto &object) { to_json(jv, object); });
}
void to_json(JsonValueScope &jv, const td_api::updateAuthorizationState &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "updateAuthorizationState");
  if (object.authorization_state_) {
    jo << ctie("authorization_state", ToJson(object.authorization_state_));
  }
}
void to_json(JsonValueScope &jv, const td_api::updateNewMessage &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "updateNewMessage");
  if (object.message_) {
    jo << ctie("message", ToJson(object.message_));
  }
  jo << ctie("disable_notification", ToJson(object.disable_notification_));
  jo << ctie("contains_mention", ToJson(object.contains_mention_));
}
void to_json(JsonValueScope &jv, const td_api::updateMessageSendAcknowledged &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "updateMessageSendAcknowledged");
  jo << ctie("chat_id", ToJson(object.chat_id_));
  jo << ctie("message_id", ToJson(object.message_id_));
}
void to_json(JsonValueScope &jv, const td_api::updateMessageSendSucceeded &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "updateMessageSendSucceeded");
  if (object.message_) {
    jo << ctie("message", ToJson(object.message_));
  }
  jo << ctie("old_message_id", ToJson(object.old_message_id_));
}
void to_json(JsonValueScope &jv, const td_api::updateMessageSendFailed &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "updateMessageSendFailed");
  if (object.message_) {
    jo << ctie("message", ToJson(object.message_));
  }
  jo << ctie("old_message_id", ToJson(object.old_message_id_));
  jo << ctie("error_code", ToJson(object.error_code_));
  jo << ctie("error_message", ToJson(object.error_message_));
}
void to_json(JsonValueScope &jv, const td_api::updateMessageContent &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "updateMessageContent");
  jo << ctie("chat_id", ToJson(object.chat_id_));
  jo << ctie("message_id", ToJson(object.message_id_));
  if (object.new_content_) {
    jo << ctie("new_content", ToJson(object.new_content_));
  }
}
void to_json(JsonValueScope &jv, const td_api::updateMessageEdited &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "updateMessageEdited");
  jo << ctie("chat_id", ToJson(object.chat_id_));
  jo << ctie("message_id", ToJson(object.message_id_));
  jo << ctie("edit_date", ToJson(object.edit_date_));
  if (object.reply_markup_) {
    jo << ctie("reply_markup", ToJson(object.reply_markup_));
  }
}
void to_json(JsonValueScope &jv, const td_api::updateMessageViews &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "updateMessageViews");
  jo << ctie("chat_id", ToJson(object.chat_id_));
  jo << ctie("message_id", ToJson(object.message_id_));
  jo << ctie("views", ToJson(object.views_));
}
void to_json(JsonValueScope &jv, const td_api::updateMessageContentOpened &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "updateMessageContentOpened");
  jo << ctie("chat_id", ToJson(object.chat_id_));
  jo << ctie("message_id", ToJson(object.message_id_));
}
void to_json(JsonValueScope &jv, const td_api::updateMessageMentionRead &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "updateMessageMentionRead");
  jo << ctie("chat_id", ToJson(object.chat_id_));
  jo << ctie("message_id", ToJson(object.message_id_));
  jo << ctie("unread_mention_count", ToJson(object.unread_mention_count_));
}
void to_json(JsonValueScope &jv, const td_api::updateNewChat &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "updateNewChat");
  if (object.chat_) {
    jo << ctie("chat", ToJson(object.chat_));
  }
}
void to_json(JsonValueScope &jv, const td_api::updateChatTitle &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "updateChatTitle");
  jo << ctie("chat_id", ToJson(object.chat_id_));
  jo << ctie("title", ToJson(object.title_));
}
void to_json(JsonValueScope &jv, const td_api::updateChatPhoto &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "updateChatPhoto");
  jo << ctie("chat_id", ToJson(object.chat_id_));
  if (object.photo_) {
    jo << ctie("photo", ToJson(object.photo_));
  }
}
void to_json(JsonValueScope &jv, const td_api::updateChatLastMessage &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "updateChatLastMessage");
  jo << ctie("chat_id", ToJson(object.chat_id_));
  if (object.last_message_) {
    jo << ctie("last_message", ToJson(object.last_message_));
  }
  jo << ctie("order", ToJson(JsonInt64{object.order_}));
}
void to_json(JsonValueScope &jv, const td_api::updateChatOrder &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "updateChatOrder");
  jo << ctie("chat_id", ToJson(object.chat_id_));
  jo << ctie("order", ToJson(JsonInt64{object.order_}));
}
void to_json(JsonValueScope &jv, const td_api::updateChatIsPinned &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "updateChatIsPinned");
  jo << ctie("chat_id", ToJson(object.chat_id_));
  jo << ctie("is_pinned", ToJson(object.is_pinned_));
  jo << ctie("order", ToJson(JsonInt64{object.order_}));
}
void to_json(JsonValueScope &jv, const td_api::updateChatIsMarkedAsUnread &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "updateChatIsMarkedAsUnread");
  jo << ctie("chat_id", ToJson(object.chat_id_));
  jo << ctie("is_marked_as_unread", ToJson(object.is_marked_as_unread_));
}
void to_json(JsonValueScope &jv, const td_api::updateChatIsSponsored &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "updateChatIsSponsored");
  jo << ctie("chat_id", ToJson(object.chat_id_));
  jo << ctie("is_sponsored", ToJson(object.is_sponsored_));
  jo << ctie("order", ToJson(JsonInt64{object.order_}));
}
void to_json(JsonValueScope &jv, const td_api::updateChatDefaultDisableNotification &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "updateChatDefaultDisableNotification");
  jo << ctie("chat_id", ToJson(object.chat_id_));
  jo << ctie("default_disable_notification", ToJson(object.default_disable_notification_));
}
void to_json(JsonValueScope &jv, const td_api::updateChatReadInbox &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "updateChatReadInbox");
  jo << ctie("chat_id", ToJson(object.chat_id_));
  jo << ctie("last_read_inbox_message_id", ToJson(object.last_read_inbox_message_id_));
  jo << ctie("unread_count", ToJson(object.unread_count_));
}
void to_json(JsonValueScope &jv, const td_api::updateChatReadOutbox &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "updateChatReadOutbox");
  jo << ctie("chat_id", ToJson(object.chat_id_));
  jo << ctie("last_read_outbox_message_id", ToJson(object.last_read_outbox_message_id_));
}
void to_json(JsonValueScope &jv, const td_api::updateChatUnreadMentionCount &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "updateChatUnreadMentionCount");
  jo << ctie("chat_id", ToJson(object.chat_id_));
  jo << ctie("unread_mention_count", ToJson(object.unread_mention_count_));
}
void to_json(JsonValueScope &jv, const td_api::updateChatNotificationSettings &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "updateChatNotificationSettings");
  jo << ctie("chat_id", ToJson(object.chat_id_));
  if (object.notification_settings_) {
    jo << ctie("notification_settings", ToJson(object.notification_settings_));
  }
}
void to_json(JsonValueScope &jv, const td_api::updateScopeNotificationSettings &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "updateScopeNotificationSettings");
  if (object.scope_) {
    jo << ctie("scope", ToJson(object.scope_));
  }
  if (object.notification_settings_) {
    jo << ctie("notification_settings", ToJson(object.notification_settings_));
  }
}
void to_json(JsonValueScope &jv, const td_api::updateChatReplyMarkup &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "updateChatReplyMarkup");
  jo << ctie("chat_id", ToJson(object.chat_id_));
  jo << ctie("reply_markup_message_id", ToJson(object.reply_markup_message_id_));
}
void to_json(JsonValueScope &jv, const td_api::updateChatDraftMessage &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "updateChatDraftMessage");
  jo << ctie("chat_id", ToJson(object.chat_id_));
  if (object.draft_message_) {
    jo << ctie("draft_message", ToJson(object.draft_message_));
  }
  jo << ctie("order", ToJson(JsonInt64{object.order_}));
}
void to_json(JsonValueScope &jv, const td_api::updateDeleteMessages &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "updateDeleteMessages");
  jo << ctie("chat_id", ToJson(object.chat_id_));
  jo << ctie("message_ids", ToJson(object.message_ids_));
  jo << ctie("is_permanent", ToJson(object.is_permanent_));
  jo << ctie("from_cache", ToJson(object.from_cache_));
}
void to_json(JsonValueScope &jv, const td_api::updateUserChatAction &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "updateUserChatAction");
  jo << ctie("chat_id", ToJson(object.chat_id_));
  jo << ctie("user_id", ToJson(object.user_id_));
  if (object.action_) {
    jo << ctie("action", ToJson(object.action_));
  }
}
void to_json(JsonValueScope &jv, const td_api::updateUserStatus &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "updateUserStatus");
  jo << ctie("user_id", ToJson(object.user_id_));
  if (object.status_) {
    jo << ctie("status", ToJson(object.status_));
  }
}
void to_json(JsonValueScope &jv, const td_api::updateUser &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "updateUser");
  if (object.user_) {
    jo << ctie("user", ToJson(object.user_));
  }
}
void to_json(JsonValueScope &jv, const td_api::updateBasicGroup &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "updateBasicGroup");
  if (object.basic_group_) {
    jo << ctie("basic_group", ToJson(object.basic_group_));
  }
}
void to_json(JsonValueScope &jv, const td_api::updateSupergroup &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "updateSupergroup");
  if (object.supergroup_) {
    jo << ctie("supergroup", ToJson(object.supergroup_));
  }
}
void to_json(JsonValueScope &jv, const td_api::updateSecretChat &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "updateSecretChat");
  if (object.secret_chat_) {
    jo << ctie("secret_chat", ToJson(object.secret_chat_));
  }
}
void to_json(JsonValueScope &jv, const td_api::updateUserFullInfo &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "updateUserFullInfo");
  jo << ctie("user_id", ToJson(object.user_id_));
  if (object.user_full_info_) {
    jo << ctie("user_full_info", ToJson(object.user_full_info_));
  }
}
void to_json(JsonValueScope &jv, const td_api::updateBasicGroupFullInfo &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "updateBasicGroupFullInfo");
  jo << ctie("basic_group_id", ToJson(object.basic_group_id_));
  if (object.basic_group_full_info_) {
    jo << ctie("basic_group_full_info", ToJson(object.basic_group_full_info_));
  }
}
void to_json(JsonValueScope &jv, const td_api::updateSupergroupFullInfo &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "updateSupergroupFullInfo");
  jo << ctie("supergroup_id", ToJson(object.supergroup_id_));
  if (object.supergroup_full_info_) {
    jo << ctie("supergroup_full_info", ToJson(object.supergroup_full_info_));
  }
}
void to_json(JsonValueScope &jv, const td_api::updateServiceNotification &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "updateServiceNotification");
  jo << ctie("type", ToJson(object.type_));
  if (object.content_) {
    jo << ctie("content", ToJson(object.content_));
  }
}
void to_json(JsonValueScope &jv, const td_api::updateFile &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "updateFile");
  if (object.file_) {
    jo << ctie("file", ToJson(object.file_));
  }
}
void to_json(JsonValueScope &jv, const td_api::updateFileGenerationStart &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "updateFileGenerationStart");
  jo << ctie("generation_id", ToJson(JsonInt64{object.generation_id_}));
  jo << ctie("original_path", ToJson(object.original_path_));
  jo << ctie("destination_path", ToJson(object.destination_path_));
  jo << ctie("conversion", ToJson(object.conversion_));
}
void to_json(JsonValueScope &jv, const td_api::updateFileGenerationStop &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "updateFileGenerationStop");
  jo << ctie("generation_id", ToJson(JsonInt64{object.generation_id_}));
}
void to_json(JsonValueScope &jv, const td_api::updateCall &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "updateCall");
  if (object.call_) {
    jo << ctie("call", ToJson(object.call_));
  }
}
void to_json(JsonValueScope &jv, const td_api::updateUserPrivacySettingRules &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "updateUserPrivacySettingRules");
  if (object.setting_) {
    jo << ctie("setting", ToJson(object.setting_));
  }
  if (object.rules_) {
    jo << ctie("rules", ToJson(object.rules_));
  }
}
void to_json(JsonValueScope &jv, const td_api::updateUnreadMessageCount &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "updateUnreadMessageCount");
  jo << ctie("unread_count", ToJson(object.unread_count_));
  jo << ctie("unread_unmuted_count", ToJson(object.unread_unmuted_count_));
}
void to_json(JsonValueScope &jv, const td_api::updateUnreadChatCount &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "updateUnreadChatCount");
  jo << ctie("unread_count", ToJson(object.unread_count_));
  jo << ctie("unread_unmuted_count", ToJson(object.unread_unmuted_count_));
  jo << ctie("marked_as_unread_count", ToJson(object.marked_as_unread_count_));
  jo << ctie("marked_as_unread_unmuted_count", ToJson(object.marked_as_unread_unmuted_count_));
}
void to_json(JsonValueScope &jv, const td_api::updateOption &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "updateOption");
  jo << ctie("name", ToJson(object.name_));
  if (object.value_) {
    jo << ctie("value", ToJson(object.value_));
  }
}
void to_json(JsonValueScope &jv, const td_api::updateInstalledStickerSets &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "updateInstalledStickerSets");
  jo << ctie("is_masks", ToJson(object.is_masks_));
  jo << ctie("sticker_set_ids", ToJson(JsonVectorInt64{object.sticker_set_ids_}));
}
void to_json(JsonValueScope &jv, const td_api::updateTrendingStickerSets &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "updateTrendingStickerSets");
  if (object.sticker_sets_) {
    jo << ctie("sticker_sets", ToJson(object.sticker_sets_));
  }
}
void to_json(JsonValueScope &jv, const td_api::updateRecentStickers &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "updateRecentStickers");
  jo << ctie("is_attached", ToJson(object.is_attached_));
  jo << ctie("sticker_ids", ToJson(object.sticker_ids_));
}
void to_json(JsonValueScope &jv, const td_api::updateFavoriteStickers &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "updateFavoriteStickers");
  jo << ctie("sticker_ids", ToJson(object.sticker_ids_));
}
void to_json(JsonValueScope &jv, const td_api::updateSavedAnimations &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "updateSavedAnimations");
  jo << ctie("animation_ids", ToJson(object.animation_ids_));
}
void to_json(JsonValueScope &jv, const td_api::updateLanguagePackStrings &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "updateLanguagePackStrings");
  jo << ctie("localization_target", ToJson(object.localization_target_));
  jo << ctie("language_pack_id", ToJson(object.language_pack_id_));
  jo << ctie("strings", ToJson(object.strings_));
}
void to_json(JsonValueScope &jv, const td_api::updateConnectionState &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "updateConnectionState");
  if (object.state_) {
    jo << ctie("state", ToJson(object.state_));
  }
}
void to_json(JsonValueScope &jv, const td_api::updateTermsOfService &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "updateTermsOfService");
  jo << ctie("terms_of_service_id", ToJson(object.terms_of_service_id_));
  if (object.terms_of_service_) {
    jo << ctie("terms_of_service", ToJson(object.terms_of_service_));
  }
}
void to_json(JsonValueScope &jv, const td_api::updateNewInlineQuery &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "updateNewInlineQuery");
  jo << ctie("id", ToJson(JsonInt64{object.id_}));
  jo << ctie("sender_user_id", ToJson(object.sender_user_id_));
  if (object.user_location_) {
    jo << ctie("user_location", ToJson(object.user_location_));
  }
  jo << ctie("query", ToJson(object.query_));
  jo << ctie("offset", ToJson(object.offset_));
}
void to_json(JsonValueScope &jv, const td_api::updateNewChosenInlineResult &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "updateNewChosenInlineResult");
  jo << ctie("sender_user_id", ToJson(object.sender_user_id_));
  if (object.user_location_) {
    jo << ctie("user_location", ToJson(object.user_location_));
  }
  jo << ctie("query", ToJson(object.query_));
  jo << ctie("result_id", ToJson(object.result_id_));
  jo << ctie("inline_message_id", ToJson(object.inline_message_id_));
}
void to_json(JsonValueScope &jv, const td_api::updateNewCallbackQuery &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "updateNewCallbackQuery");
  jo << ctie("id", ToJson(JsonInt64{object.id_}));
  jo << ctie("sender_user_id", ToJson(object.sender_user_id_));
  jo << ctie("chat_id", ToJson(object.chat_id_));
  jo << ctie("message_id", ToJson(object.message_id_));
  jo << ctie("chat_instance", ToJson(JsonInt64{object.chat_instance_}));
  if (object.payload_) {
    jo << ctie("payload", ToJson(object.payload_));
  }
}
void to_json(JsonValueScope &jv, const td_api::updateNewInlineCallbackQuery &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "updateNewInlineCallbackQuery");
  jo << ctie("id", ToJson(JsonInt64{object.id_}));
  jo << ctie("sender_user_id", ToJson(object.sender_user_id_));
  jo << ctie("inline_message_id", ToJson(object.inline_message_id_));
  jo << ctie("chat_instance", ToJson(JsonInt64{object.chat_instance_}));
  if (object.payload_) {
    jo << ctie("payload", ToJson(object.payload_));
  }
}
void to_json(JsonValueScope &jv, const td_api::updateNewShippingQuery &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "updateNewShippingQuery");
  jo << ctie("id", ToJson(JsonInt64{object.id_}));
  jo << ctie("sender_user_id", ToJson(object.sender_user_id_));
  jo << ctie("invoice_payload", ToJson(object.invoice_payload_));
  if (object.shipping_address_) {
    jo << ctie("shipping_address", ToJson(object.shipping_address_));
  }
}
void to_json(JsonValueScope &jv, const td_api::updateNewPreCheckoutQuery &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "updateNewPreCheckoutQuery");
  jo << ctie("id", ToJson(JsonInt64{object.id_}));
  jo << ctie("sender_user_id", ToJson(object.sender_user_id_));
  jo << ctie("currency", ToJson(object.currency_));
  jo << ctie("total_amount", ToJson(object.total_amount_));
  jo << ctie("invoice_payload", ToJson(base64_encode(object.invoice_payload_)));
  jo << ctie("shipping_option_id", ToJson(object.shipping_option_id_));
  if (object.order_info_) {
    jo << ctie("order_info", ToJson(object.order_info_));
  }
}
void to_json(JsonValueScope &jv, const td_api::updateNewCustomEvent &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "updateNewCustomEvent");
  jo << ctie("event", ToJson(object.event_));
}
void to_json(JsonValueScope &jv, const td_api::updateNewCustomQuery &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "updateNewCustomQuery");
  jo << ctie("id", ToJson(JsonInt64{object.id_}));
  jo << ctie("data", ToJson(object.data_));
  jo << ctie("timeout", ToJson(object.timeout_));
}
void to_json(JsonValueScope &jv, const td_api::user &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "user");
  jo << ctie("id", ToJson(object.id_));
  jo << ctie("first_name", ToJson(object.first_name_));
  jo << ctie("last_name", ToJson(object.last_name_));
  jo << ctie("username", ToJson(object.username_));
  jo << ctie("phone_number", ToJson(object.phone_number_));
  if (object.status_) {
    jo << ctie("status", ToJson(object.status_));
  }
  if (object.profile_photo_) {
    jo << ctie("profile_photo", ToJson(object.profile_photo_));
  }
  if (object.outgoing_link_) {
    jo << ctie("outgoing_link", ToJson(object.outgoing_link_));
  }
  if (object.incoming_link_) {
    jo << ctie("incoming_link", ToJson(object.incoming_link_));
  }
  jo << ctie("is_verified", ToJson(object.is_verified_));
  jo << ctie("restriction_reason", ToJson(object.restriction_reason_));
  jo << ctie("have_access", ToJson(object.have_access_));
  if (object.type_) {
    jo << ctie("type", ToJson(object.type_));
  }
  jo << ctie("language_code", ToJson(object.language_code_));
}
void to_json(JsonValueScope &jv, const td_api::userFullInfo &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "userFullInfo");
  jo << ctie("is_blocked", ToJson(object.is_blocked_));
  jo << ctie("can_be_called", ToJson(object.can_be_called_));
  jo << ctie("has_private_calls", ToJson(object.has_private_calls_));
  jo << ctie("bio", ToJson(object.bio_));
  jo << ctie("share_text", ToJson(object.share_text_));
  jo << ctie("group_in_common_count", ToJson(object.group_in_common_count_));
  if (object.bot_info_) {
    jo << ctie("bot_info", ToJson(object.bot_info_));
  }
}
void to_json(JsonValueScope &jv, const td_api::UserPrivacySetting &object) {
  td_api::downcast_call(const_cast<td_api::UserPrivacySetting &>(object), [&jv](const auto &object) { to_json(jv, object); });
}
void to_json(JsonValueScope &jv, const td_api::userPrivacySettingShowStatus &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "userPrivacySettingShowStatus");
}
void to_json(JsonValueScope &jv, const td_api::userPrivacySettingAllowChatInvites &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "userPrivacySettingAllowChatInvites");
}
void to_json(JsonValueScope &jv, const td_api::userPrivacySettingAllowCalls &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "userPrivacySettingAllowCalls");
}
void to_json(JsonValueScope &jv, const td_api::UserPrivacySettingRule &object) {
  td_api::downcast_call(const_cast<td_api::UserPrivacySettingRule &>(object), [&jv](const auto &object) { to_json(jv, object); });
}
void to_json(JsonValueScope &jv, const td_api::userPrivacySettingRuleAllowAll &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "userPrivacySettingRuleAllowAll");
}
void to_json(JsonValueScope &jv, const td_api::userPrivacySettingRuleAllowContacts &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "userPrivacySettingRuleAllowContacts");
}
void to_json(JsonValueScope &jv, const td_api::userPrivacySettingRuleAllowUsers &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "userPrivacySettingRuleAllowUsers");
  jo << ctie("user_ids", ToJson(object.user_ids_));
}
void to_json(JsonValueScope &jv, const td_api::userPrivacySettingRuleRestrictAll &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "userPrivacySettingRuleRestrictAll");
}
void to_json(JsonValueScope &jv, const td_api::userPrivacySettingRuleRestrictContacts &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "userPrivacySettingRuleRestrictContacts");
}
void to_json(JsonValueScope &jv, const td_api::userPrivacySettingRuleRestrictUsers &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "userPrivacySettingRuleRestrictUsers");
  jo << ctie("user_ids", ToJson(object.user_ids_));
}
void to_json(JsonValueScope &jv, const td_api::userPrivacySettingRules &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "userPrivacySettingRules");
  jo << ctie("rules", ToJson(object.rules_));
}
void to_json(JsonValueScope &jv, const td_api::userProfilePhotos &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "userProfilePhotos");
  jo << ctie("total_count", ToJson(object.total_count_));
  jo << ctie("photos", ToJson(object.photos_));
}
void to_json(JsonValueScope &jv, const td_api::UserStatus &object) {
  td_api::downcast_call(const_cast<td_api::UserStatus &>(object), [&jv](const auto &object) { to_json(jv, object); });
}
void to_json(JsonValueScope &jv, const td_api::userStatusEmpty &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "userStatusEmpty");
}
void to_json(JsonValueScope &jv, const td_api::userStatusOnline &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "userStatusOnline");
  jo << ctie("expires", ToJson(object.expires_));
}
void to_json(JsonValueScope &jv, const td_api::userStatusOffline &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "userStatusOffline");
  jo << ctie("was_online", ToJson(object.was_online_));
}
void to_json(JsonValueScope &jv, const td_api::userStatusRecently &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "userStatusRecently");
}
void to_json(JsonValueScope &jv, const td_api::userStatusLastWeek &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "userStatusLastWeek");
}
void to_json(JsonValueScope &jv, const td_api::userStatusLastMonth &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "userStatusLastMonth");
}
void to_json(JsonValueScope &jv, const td_api::UserType &object) {
  td_api::downcast_call(const_cast<td_api::UserType &>(object), [&jv](const auto &object) { to_json(jv, object); });
}
void to_json(JsonValueScope &jv, const td_api::userTypeRegular &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "userTypeRegular");
}
void to_json(JsonValueScope &jv, const td_api::userTypeDeleted &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "userTypeDeleted");
}
void to_json(JsonValueScope &jv, const td_api::userTypeBot &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "userTypeBot");
  jo << ctie("can_join_groups", ToJson(object.can_join_groups_));
  jo << ctie("can_read_all_group_messages", ToJson(object.can_read_all_group_messages_));
  jo << ctie("is_inline", ToJson(object.is_inline_));
  jo << ctie("inline_query_placeholder", ToJson(object.inline_query_placeholder_));
  jo << ctie("need_location", ToJson(object.need_location_));
}
void to_json(JsonValueScope &jv, const td_api::userTypeUnknown &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "userTypeUnknown");
}
void to_json(JsonValueScope &jv, const td_api::users &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "users");
  jo << ctie("total_count", ToJson(object.total_count_));
  jo << ctie("user_ids", ToJson(object.user_ids_));
}
void to_json(JsonValueScope &jv, const td_api::validatedOrderInfo &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "validatedOrderInfo");
  jo << ctie("order_info_id", ToJson(object.order_info_id_));
  jo << ctie("shipping_options", ToJson(object.shipping_options_));
}
void to_json(JsonValueScope &jv, const td_api::venue &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "venue");
  if (object.location_) {
    jo << ctie("location", ToJson(object.location_));
  }
  jo << ctie("title", ToJson(object.title_));
  jo << ctie("address", ToJson(object.address_));
  jo << ctie("provider", ToJson(object.provider_));
  jo << ctie("id", ToJson(object.id_));
  jo << ctie("type", ToJson(object.type_));
}
void to_json(JsonValueScope &jv, const td_api::video &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "video");
  jo << ctie("duration", ToJson(object.duration_));
  jo << ctie("width", ToJson(object.width_));
  jo << ctie("height", ToJson(object.height_));
  jo << ctie("file_name", ToJson(object.file_name_));
  jo << ctie("mime_type", ToJson(object.mime_type_));
  jo << ctie("has_stickers", ToJson(object.has_stickers_));
  jo << ctie("supports_streaming", ToJson(object.supports_streaming_));
  if (object.thumbnail_) {
    jo << ctie("thumbnail", ToJson(object.thumbnail_));
  }
  if (object.video_) {
    jo << ctie("video", ToJson(object.video_));
  }
}
void to_json(JsonValueScope &jv, const td_api::videoNote &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "videoNote");
  jo << ctie("duration", ToJson(object.duration_));
  jo << ctie("length", ToJson(object.length_));
  if (object.thumbnail_) {
    jo << ctie("thumbnail", ToJson(object.thumbnail_));
  }
  if (object.video_) {
    jo << ctie("video", ToJson(object.video_));
  }
}
void to_json(JsonValueScope &jv, const td_api::voiceNote &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "voiceNote");
  jo << ctie("duration", ToJson(object.duration_));
  jo << ctie("waveform", ToJson(base64_encode(object.waveform_)));
  jo << ctie("mime_type", ToJson(object.mime_type_));
  if (object.voice_) {
    jo << ctie("voice", ToJson(object.voice_));
  }
}
void to_json(JsonValueScope &jv, const td_api::wallpaper &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "wallpaper");
  jo << ctie("id", ToJson(object.id_));
  jo << ctie("sizes", ToJson(object.sizes_));
  jo << ctie("color", ToJson(object.color_));
}
void to_json(JsonValueScope &jv, const td_api::wallpapers &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "wallpapers");
  jo << ctie("wallpapers", ToJson(object.wallpapers_));
}
void to_json(JsonValueScope &jv, const td_api::webPage &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "webPage");
  jo << ctie("url", ToJson(object.url_));
  jo << ctie("display_url", ToJson(object.display_url_));
  jo << ctie("type", ToJson(object.type_));
  jo << ctie("site_name", ToJson(object.site_name_));
  jo << ctie("title", ToJson(object.title_));
  jo << ctie("description", ToJson(object.description_));
  if (object.photo_) {
    jo << ctie("photo", ToJson(object.photo_));
  }
  jo << ctie("embed_url", ToJson(object.embed_url_));
  jo << ctie("embed_type", ToJson(object.embed_type_));
  jo << ctie("embed_width", ToJson(object.embed_width_));
  jo << ctie("embed_height", ToJson(object.embed_height_));
  jo << ctie("duration", ToJson(object.duration_));
  jo << ctie("author", ToJson(object.author_));
  if (object.animation_) {
    jo << ctie("animation", ToJson(object.animation_));
  }
  if (object.audio_) {
    jo << ctie("audio", ToJson(object.audio_));
  }
  if (object.document_) {
    jo << ctie("document", ToJson(object.document_));
  }
  if (object.sticker_) {
    jo << ctie("sticker", ToJson(object.sticker_));
  }
  if (object.video_) {
    jo << ctie("video", ToJson(object.video_));
  }
  if (object.video_note_) {
    jo << ctie("video_note", ToJson(object.video_note_));
  }
  if (object.voice_note_) {
    jo << ctie("voice_note", ToJson(object.voice_note_));
  }
  jo << ctie("has_instant_view", ToJson(object.has_instant_view_));
}
void to_json(JsonValueScope &jv, const td_api::webPageInstantView &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "webPageInstantView");
  jo << ctie("page_blocks", ToJson(object.page_blocks_));
  jo << ctie("is_full", ToJson(object.is_full_));
}
void to_json(JsonValueScope &jv, const td_api::acceptCall &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "acceptCall");
  jo << ctie("call_id", ToJson(object.call_id_));
  if (object.protocol_) {
    jo << ctie("protocol", ToJson(object.protocol_));
  }
}
void to_json(JsonValueScope &jv, const td_api::acceptTermsOfService &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "acceptTermsOfService");
  jo << ctie("terms_of_service_id", ToJson(object.terms_of_service_id_));
}
void to_json(JsonValueScope &jv, const td_api::addChatMember &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "addChatMember");
  jo << ctie("chat_id", ToJson(object.chat_id_));
  jo << ctie("user_id", ToJson(object.user_id_));
  jo << ctie("forward_limit", ToJson(object.forward_limit_));
}
void to_json(JsonValueScope &jv, const td_api::addChatMembers &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "addChatMembers");
  jo << ctie("chat_id", ToJson(object.chat_id_));
  jo << ctie("user_ids", ToJson(object.user_ids_));
}
void to_json(JsonValueScope &jv, const td_api::addFavoriteSticker &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "addFavoriteSticker");
  if (object.sticker_) {
    jo << ctie("sticker", ToJson(object.sticker_));
  }
}
void to_json(JsonValueScope &jv, const td_api::addLocalMessage &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "addLocalMessage");
  jo << ctie("chat_id", ToJson(object.chat_id_));
  jo << ctie("sender_user_id", ToJson(object.sender_user_id_));
  jo << ctie("reply_to_message_id", ToJson(object.reply_to_message_id_));
  jo << ctie("disable_notification", ToJson(object.disable_notification_));
  if (object.input_message_content_) {
    jo << ctie("input_message_content", ToJson(object.input_message_content_));
  }
}
void to_json(JsonValueScope &jv, const td_api::addNetworkStatistics &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "addNetworkStatistics");
  if (object.entry_) {
    jo << ctie("entry", ToJson(object.entry_));
  }
}
void to_json(JsonValueScope &jv, const td_api::addProxy &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "addProxy");
  jo << ctie("server", ToJson(object.server_));
  jo << ctie("port", ToJson(object.port_));
  jo << ctie("enable", ToJson(object.enable_));
  if (object.type_) {
    jo << ctie("type", ToJson(object.type_));
  }
}
void to_json(JsonValueScope &jv, const td_api::addRecentSticker &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "addRecentSticker");
  jo << ctie("is_attached", ToJson(object.is_attached_));
  if (object.sticker_) {
    jo << ctie("sticker", ToJson(object.sticker_));
  }
}
void to_json(JsonValueScope &jv, const td_api::addRecentlyFoundChat &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "addRecentlyFoundChat");
  jo << ctie("chat_id", ToJson(object.chat_id_));
}
void to_json(JsonValueScope &jv, const td_api::addSavedAnimation &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "addSavedAnimation");
  if (object.animation_) {
    jo << ctie("animation", ToJson(object.animation_));
  }
}
void to_json(JsonValueScope &jv, const td_api::addStickerToSet &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "addStickerToSet");
  jo << ctie("user_id", ToJson(object.user_id_));
  jo << ctie("name", ToJson(object.name_));
  if (object.sticker_) {
    jo << ctie("sticker", ToJson(object.sticker_));
  }
}
void to_json(JsonValueScope &jv, const td_api::answerCallbackQuery &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "answerCallbackQuery");
  jo << ctie("callback_query_id", ToJson(JsonInt64{object.callback_query_id_}));
  jo << ctie("text", ToJson(object.text_));
  jo << ctie("show_alert", ToJson(object.show_alert_));
  jo << ctie("url", ToJson(object.url_));
  jo << ctie("cache_time", ToJson(object.cache_time_));
}
void to_json(JsonValueScope &jv, const td_api::answerCustomQuery &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "answerCustomQuery");
  jo << ctie("custom_query_id", ToJson(JsonInt64{object.custom_query_id_}));
  jo << ctie("data", ToJson(object.data_));
}
void to_json(JsonValueScope &jv, const td_api::answerInlineQuery &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "answerInlineQuery");
  jo << ctie("inline_query_id", ToJson(JsonInt64{object.inline_query_id_}));
  jo << ctie("is_personal", ToJson(object.is_personal_));
  jo << ctie("results", ToJson(object.results_));
  jo << ctie("cache_time", ToJson(object.cache_time_));
  jo << ctie("next_offset", ToJson(object.next_offset_));
  jo << ctie("switch_pm_text", ToJson(object.switch_pm_text_));
  jo << ctie("switch_pm_parameter", ToJson(object.switch_pm_parameter_));
}
void to_json(JsonValueScope &jv, const td_api::answerPreCheckoutQuery &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "answerPreCheckoutQuery");
  jo << ctie("pre_checkout_query_id", ToJson(JsonInt64{object.pre_checkout_query_id_}));
  jo << ctie("error_message", ToJson(object.error_message_));
}
void to_json(JsonValueScope &jv, const td_api::answerShippingQuery &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "answerShippingQuery");
  jo << ctie("shipping_query_id", ToJson(JsonInt64{object.shipping_query_id_}));
  jo << ctie("shipping_options", ToJson(object.shipping_options_));
  jo << ctie("error_message", ToJson(object.error_message_));
}
void to_json(JsonValueScope &jv, const td_api::blockUser &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "blockUser");
  jo << ctie("user_id", ToJson(object.user_id_));
}
void to_json(JsonValueScope &jv, const td_api::cancelDownloadFile &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "cancelDownloadFile");
  jo << ctie("file_id", ToJson(object.file_id_));
  jo << ctie("only_if_pending", ToJson(object.only_if_pending_));
}
void to_json(JsonValueScope &jv, const td_api::cancelUploadFile &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "cancelUploadFile");
  jo << ctie("file_id", ToJson(object.file_id_));
}
void to_json(JsonValueScope &jv, const td_api::changeChatReportSpamState &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "changeChatReportSpamState");
  jo << ctie("chat_id", ToJson(object.chat_id_));
  jo << ctie("is_spam_chat", ToJson(object.is_spam_chat_));
}
void to_json(JsonValueScope &jv, const td_api::changeImportedContacts &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "changeImportedContacts");
  jo << ctie("contacts", ToJson(object.contacts_));
}
void to_json(JsonValueScope &jv, const td_api::changePhoneNumber &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "changePhoneNumber");
  jo << ctie("phone_number", ToJson(object.phone_number_));
  jo << ctie("allow_flash_call", ToJson(object.allow_flash_call_));
  jo << ctie("is_current_phone_number", ToJson(object.is_current_phone_number_));
}
void to_json(JsonValueScope &jv, const td_api::changeStickerSet &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "changeStickerSet");
  jo << ctie("set_id", ToJson(JsonInt64{object.set_id_}));
  jo << ctie("is_installed", ToJson(object.is_installed_));
  jo << ctie("is_archived", ToJson(object.is_archived_));
}
void to_json(JsonValueScope &jv, const td_api::checkAuthenticationBotToken &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "checkAuthenticationBotToken");
  jo << ctie("token", ToJson(object.token_));
}
void to_json(JsonValueScope &jv, const td_api::checkAuthenticationCode &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "checkAuthenticationCode");
  jo << ctie("code", ToJson(object.code_));
  jo << ctie("first_name", ToJson(object.first_name_));
  jo << ctie("last_name", ToJson(object.last_name_));
}
void to_json(JsonValueScope &jv, const td_api::checkAuthenticationPassword &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "checkAuthenticationPassword");
  jo << ctie("password", ToJson(object.password_));
}
void to_json(JsonValueScope &jv, const td_api::checkChangePhoneNumberCode &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "checkChangePhoneNumberCode");
  jo << ctie("code", ToJson(object.code_));
}
void to_json(JsonValueScope &jv, const td_api::checkChatInviteLink &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "checkChatInviteLink");
  jo << ctie("invite_link", ToJson(object.invite_link_));
}
void to_json(JsonValueScope &jv, const td_api::checkChatUsername &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "checkChatUsername");
  jo << ctie("chat_id", ToJson(JsonInt64{object.chat_id_}));
  jo << ctie("username", ToJson(object.username_));
}
void to_json(JsonValueScope &jv, const td_api::checkDatabaseEncryptionKey &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "checkDatabaseEncryptionKey");
  jo << ctie("encryption_key", ToJson(base64_encode(object.encryption_key_)));
}
void to_json(JsonValueScope &jv, const td_api::checkEmailAddressVerificationCode &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "checkEmailAddressVerificationCode");
  jo << ctie("code", ToJson(object.code_));
}
void to_json(JsonValueScope &jv, const td_api::checkPhoneNumberConfirmationCode &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "checkPhoneNumberConfirmationCode");
  jo << ctie("code", ToJson(object.code_));
}
void to_json(JsonValueScope &jv, const td_api::checkPhoneNumberVerificationCode &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "checkPhoneNumberVerificationCode");
  jo << ctie("code", ToJson(object.code_));
}
void to_json(JsonValueScope &jv, const td_api::cleanFileName &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "cleanFileName");
  jo << ctie("file_name", ToJson(object.file_name_));
}
void to_json(JsonValueScope &jv, const td_api::clearAllDraftMessages &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "clearAllDraftMessages");
  jo << ctie("exclude_secret_chats", ToJson(object.exclude_secret_chats_));
}
void to_json(JsonValueScope &jv, const td_api::clearImportedContacts &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "clearImportedContacts");
}
void to_json(JsonValueScope &jv, const td_api::clearRecentStickers &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "clearRecentStickers");
  jo << ctie("is_attached", ToJson(object.is_attached_));
}
void to_json(JsonValueScope &jv, const td_api::clearRecentlyFoundChats &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "clearRecentlyFoundChats");
}
void to_json(JsonValueScope &jv, const td_api::close &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "close");
}
void to_json(JsonValueScope &jv, const td_api::closeChat &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "closeChat");
  jo << ctie("chat_id", ToJson(object.chat_id_));
}
void to_json(JsonValueScope &jv, const td_api::closeSecretChat &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "closeSecretChat");
  jo << ctie("secret_chat_id", ToJson(object.secret_chat_id_));
}
void to_json(JsonValueScope &jv, const td_api::createBasicGroupChat &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "createBasicGroupChat");
  jo << ctie("basic_group_id", ToJson(object.basic_group_id_));
  jo << ctie("force", ToJson(object.force_));
}
void to_json(JsonValueScope &jv, const td_api::createCall &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "createCall");
  jo << ctie("user_id", ToJson(object.user_id_));
  if (object.protocol_) {
    jo << ctie("protocol", ToJson(object.protocol_));
  }
}
void to_json(JsonValueScope &jv, const td_api::createNewBasicGroupChat &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "createNewBasicGroupChat");
  jo << ctie("user_ids", ToJson(object.user_ids_));
  jo << ctie("title", ToJson(object.title_));
}
void to_json(JsonValueScope &jv, const td_api::createNewSecretChat &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "createNewSecretChat");
  jo << ctie("user_id", ToJson(object.user_id_));
}
void to_json(JsonValueScope &jv, const td_api::createNewStickerSet &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "createNewStickerSet");
  jo << ctie("user_id", ToJson(object.user_id_));
  jo << ctie("title", ToJson(object.title_));
  jo << ctie("name", ToJson(object.name_));
  jo << ctie("is_masks", ToJson(object.is_masks_));
  jo << ctie("stickers", ToJson(object.stickers_));
}
void to_json(JsonValueScope &jv, const td_api::createNewSupergroupChat &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "createNewSupergroupChat");
  jo << ctie("title", ToJson(object.title_));
  jo << ctie("is_channel", ToJson(object.is_channel_));
  jo << ctie("description", ToJson(object.description_));
}
void to_json(JsonValueScope &jv, const td_api::createPrivateChat &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "createPrivateChat");
  jo << ctie("user_id", ToJson(object.user_id_));
  jo << ctie("force", ToJson(object.force_));
}
void to_json(JsonValueScope &jv, const td_api::createSecretChat &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "createSecretChat");
  jo << ctie("secret_chat_id", ToJson(object.secret_chat_id_));
}
void to_json(JsonValueScope &jv, const td_api::createSupergroupChat &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "createSupergroupChat");
  jo << ctie("supergroup_id", ToJson(object.supergroup_id_));
  jo << ctie("force", ToJson(object.force_));
}
void to_json(JsonValueScope &jv, const td_api::createTemporaryPassword &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "createTemporaryPassword");
  jo << ctie("password", ToJson(object.password_));
  jo << ctie("valid_for", ToJson(object.valid_for_));
}
void to_json(JsonValueScope &jv, const td_api::deleteAccount &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "deleteAccount");
  jo << ctie("reason", ToJson(object.reason_));
}
void to_json(JsonValueScope &jv, const td_api::deleteChatHistory &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "deleteChatHistory");
  jo << ctie("chat_id", ToJson(object.chat_id_));
  jo << ctie("remove_from_chat_list", ToJson(object.remove_from_chat_list_));
}
void to_json(JsonValueScope &jv, const td_api::deleteChatMessagesFromUser &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "deleteChatMessagesFromUser");
  jo << ctie("chat_id", ToJson(object.chat_id_));
  jo << ctie("user_id", ToJson(object.user_id_));
}
void to_json(JsonValueScope &jv, const td_api::deleteChatReplyMarkup &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "deleteChatReplyMarkup");
  jo << ctie("chat_id", ToJson(object.chat_id_));
  jo << ctie("message_id", ToJson(object.message_id_));
}
void to_json(JsonValueScope &jv, const td_api::deleteFile &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "deleteFile");
  jo << ctie("file_id", ToJson(object.file_id_));
}
void to_json(JsonValueScope &jv, const td_api::deleteLanguagePack &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "deleteLanguagePack");
  jo << ctie("language_pack_id", ToJson(object.language_pack_id_));
}
void to_json(JsonValueScope &jv, const td_api::deleteMessages &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "deleteMessages");
  jo << ctie("chat_id", ToJson(object.chat_id_));
  jo << ctie("message_ids", ToJson(object.message_ids_));
  jo << ctie("revoke", ToJson(object.revoke_));
}
void to_json(JsonValueScope &jv, const td_api::deletePassportElement &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "deletePassportElement");
  if (object.type_) {
    jo << ctie("type", ToJson(object.type_));
  }
}
void to_json(JsonValueScope &jv, const td_api::deleteProfilePhoto &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "deleteProfilePhoto");
  jo << ctie("profile_photo_id", ToJson(JsonInt64{object.profile_photo_id_}));
}
void to_json(JsonValueScope &jv, const td_api::deleteSavedCredentials &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "deleteSavedCredentials");
}
void to_json(JsonValueScope &jv, const td_api::deleteSavedOrderInfo &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "deleteSavedOrderInfo");
}
void to_json(JsonValueScope &jv, const td_api::deleteSupergroup &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "deleteSupergroup");
  jo << ctie("supergroup_id", ToJson(object.supergroup_id_));
}
void to_json(JsonValueScope &jv, const td_api::destroy &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "destroy");
}
void to_json(JsonValueScope &jv, const td_api::disableProxy &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "disableProxy");
}
void to_json(JsonValueScope &jv, const td_api::discardCall &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "discardCall");
  jo << ctie("call_id", ToJson(object.call_id_));
  jo << ctie("is_disconnected", ToJson(object.is_disconnected_));
  jo << ctie("duration", ToJson(object.duration_));
  jo << ctie("connection_id", ToJson(JsonInt64{object.connection_id_}));
}
void to_json(JsonValueScope &jv, const td_api::disconnectAllWebsites &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "disconnectAllWebsites");
}
void to_json(JsonValueScope &jv, const td_api::disconnectWebsite &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "disconnectWebsite");
  jo << ctie("website_id", ToJson(JsonInt64{object.website_id_}));
}
void to_json(JsonValueScope &jv, const td_api::downloadFile &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "downloadFile");
  jo << ctie("file_id", ToJson(object.file_id_));
  jo << ctie("priority", ToJson(object.priority_));
}
void to_json(JsonValueScope &jv, const td_api::editCustomLanguagePackInfo &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "editCustomLanguagePackInfo");
  if (object.info_) {
    jo << ctie("info", ToJson(object.info_));
  }
}
void to_json(JsonValueScope &jv, const td_api::editInlineMessageCaption &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "editInlineMessageCaption");
  jo << ctie("inline_message_id", ToJson(object.inline_message_id_));
  if (object.reply_markup_) {
    jo << ctie("reply_markup", ToJson(object.reply_markup_));
  }
  if (object.caption_) {
    jo << ctie("caption", ToJson(object.caption_));
  }
}
void to_json(JsonValueScope &jv, const td_api::editInlineMessageLiveLocation &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "editInlineMessageLiveLocation");
  jo << ctie("inline_message_id", ToJson(object.inline_message_id_));
  if (object.reply_markup_) {
    jo << ctie("reply_markup", ToJson(object.reply_markup_));
  }
  if (object.location_) {
    jo << ctie("location", ToJson(object.location_));
  }
}
void to_json(JsonValueScope &jv, const td_api::editInlineMessageMedia &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "editInlineMessageMedia");
  jo << ctie("inline_message_id", ToJson(object.inline_message_id_));
  if (object.reply_markup_) {
    jo << ctie("reply_markup", ToJson(object.reply_markup_));
  }
  if (object.input_message_content_) {
    jo << ctie("input_message_content", ToJson(object.input_message_content_));
  }
}
void to_json(JsonValueScope &jv, const td_api::editInlineMessageReplyMarkup &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "editInlineMessageReplyMarkup");
  jo << ctie("inline_message_id", ToJson(object.inline_message_id_));
  if (object.reply_markup_) {
    jo << ctie("reply_markup", ToJson(object.reply_markup_));
  }
}
void to_json(JsonValueScope &jv, const td_api::editInlineMessageText &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "editInlineMessageText");
  jo << ctie("inline_message_id", ToJson(object.inline_message_id_));
  if (object.reply_markup_) {
    jo << ctie("reply_markup", ToJson(object.reply_markup_));
  }
  if (object.input_message_content_) {
    jo << ctie("input_message_content", ToJson(object.input_message_content_));
  }
}
void to_json(JsonValueScope &jv, const td_api::editMessageCaption &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "editMessageCaption");
  jo << ctie("chat_id", ToJson(object.chat_id_));
  jo << ctie("message_id", ToJson(object.message_id_));
  if (object.reply_markup_) {
    jo << ctie("reply_markup", ToJson(object.reply_markup_));
  }
  if (object.caption_) {
    jo << ctie("caption", ToJson(object.caption_));
  }
}
void to_json(JsonValueScope &jv, const td_api::editMessageLiveLocation &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "editMessageLiveLocation");
  jo << ctie("chat_id", ToJson(object.chat_id_));
  jo << ctie("message_id", ToJson(object.message_id_));
  if (object.reply_markup_) {
    jo << ctie("reply_markup", ToJson(object.reply_markup_));
  }
  if (object.location_) {
    jo << ctie("location", ToJson(object.location_));
  }
}
void to_json(JsonValueScope &jv, const td_api::editMessageMedia &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "editMessageMedia");
  jo << ctie("chat_id", ToJson(object.chat_id_));
  jo << ctie("message_id", ToJson(object.message_id_));
  if (object.reply_markup_) {
    jo << ctie("reply_markup", ToJson(object.reply_markup_));
  }
  if (object.input_message_content_) {
    jo << ctie("input_message_content", ToJson(object.input_message_content_));
  }
}
void to_json(JsonValueScope &jv, const td_api::editMessageReplyMarkup &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "editMessageReplyMarkup");
  jo << ctie("chat_id", ToJson(object.chat_id_));
  jo << ctie("message_id", ToJson(object.message_id_));
  if (object.reply_markup_) {
    jo << ctie("reply_markup", ToJson(object.reply_markup_));
  }
}
void to_json(JsonValueScope &jv, const td_api::editMessageText &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "editMessageText");
  jo << ctie("chat_id", ToJson(object.chat_id_));
  jo << ctie("message_id", ToJson(object.message_id_));
  if (object.reply_markup_) {
    jo << ctie("reply_markup", ToJson(object.reply_markup_));
  }
  if (object.input_message_content_) {
    jo << ctie("input_message_content", ToJson(object.input_message_content_));
  }
}
void to_json(JsonValueScope &jv, const td_api::editProxy &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "editProxy");
  jo << ctie("proxy_id", ToJson(object.proxy_id_));
  jo << ctie("server", ToJson(object.server_));
  jo << ctie("port", ToJson(object.port_));
  jo << ctie("enable", ToJson(object.enable_));
  if (object.type_) {
    jo << ctie("type", ToJson(object.type_));
  }
}
void to_json(JsonValueScope &jv, const td_api::enableProxy &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "enableProxy");
  jo << ctie("proxy_id", ToJson(object.proxy_id_));
}
void to_json(JsonValueScope &jv, const td_api::finishFileGeneration &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "finishFileGeneration");
  jo << ctie("generation_id", ToJson(JsonInt64{object.generation_id_}));
  if (object.error_) {
    jo << ctie("error", ToJson(object.error_));
  }
}
void to_json(JsonValueScope &jv, const td_api::forwardMessages &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "forwardMessages");
  jo << ctie("chat_id", ToJson(object.chat_id_));
  jo << ctie("from_chat_id", ToJson(object.from_chat_id_));
  jo << ctie("message_ids", ToJson(object.message_ids_));
  jo << ctie("disable_notification", ToJson(object.disable_notification_));
  jo << ctie("from_background", ToJson(object.from_background_));
  jo << ctie("as_album", ToJson(object.as_album_));
}
void to_json(JsonValueScope &jv, const td_api::generateChatInviteLink &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "generateChatInviteLink");
  jo << ctie("chat_id", ToJson(object.chat_id_));
}
void to_json(JsonValueScope &jv, const td_api::getAccountTtl &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "getAccountTtl");
}
void to_json(JsonValueScope &jv, const td_api::getActiveLiveLocationMessages &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "getActiveLiveLocationMessages");
}
void to_json(JsonValueScope &jv, const td_api::getActiveSessions &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "getActiveSessions");
}
void to_json(JsonValueScope &jv, const td_api::getAllPassportElements &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "getAllPassportElements");
  jo << ctie("password", ToJson(object.password_));
}
void to_json(JsonValueScope &jv, const td_api::getArchivedStickerSets &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "getArchivedStickerSets");
  jo << ctie("is_masks", ToJson(object.is_masks_));
  jo << ctie("offset_sticker_set_id", ToJson(JsonInt64{object.offset_sticker_set_id_}));
  jo << ctie("limit", ToJson(object.limit_));
}
void to_json(JsonValueScope &jv, const td_api::getAttachedStickerSets &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "getAttachedStickerSets");
  jo << ctie("file_id", ToJson(object.file_id_));
}
void to_json(JsonValueScope &jv, const td_api::getAuthorizationState &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "getAuthorizationState");
}
void to_json(JsonValueScope &jv, const td_api::getBasicGroup &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "getBasicGroup");
  jo << ctie("basic_group_id", ToJson(object.basic_group_id_));
}
void to_json(JsonValueScope &jv, const td_api::getBasicGroupFullInfo &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "getBasicGroupFullInfo");
  jo << ctie("basic_group_id", ToJson(object.basic_group_id_));
}
void to_json(JsonValueScope &jv, const td_api::getBlockedUsers &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "getBlockedUsers");
  jo << ctie("offset", ToJson(object.offset_));
  jo << ctie("limit", ToJson(object.limit_));
}
void to_json(JsonValueScope &jv, const td_api::getCallbackQueryAnswer &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "getCallbackQueryAnswer");
  jo << ctie("chat_id", ToJson(object.chat_id_));
  jo << ctie("message_id", ToJson(object.message_id_));
  if (object.payload_) {
    jo << ctie("payload", ToJson(object.payload_));
  }
}
void to_json(JsonValueScope &jv, const td_api::getChat &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "getChat");
  jo << ctie("chat_id", ToJson(object.chat_id_));
}
void to_json(JsonValueScope &jv, const td_api::getChatAdministrators &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "getChatAdministrators");
  jo << ctie("chat_id", ToJson(object.chat_id_));
}
void to_json(JsonValueScope &jv, const td_api::getChatEventLog &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "getChatEventLog");
  jo << ctie("chat_id", ToJson(object.chat_id_));
  jo << ctie("query", ToJson(object.query_));
  jo << ctie("from_event_id", ToJson(JsonInt64{object.from_event_id_}));
  jo << ctie("limit", ToJson(object.limit_));
  if (object.filters_) {
    jo << ctie("filters", ToJson(object.filters_));
  }
  jo << ctie("user_ids", ToJson(object.user_ids_));
}
void to_json(JsonValueScope &jv, const td_api::getChatHistory &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "getChatHistory");
  jo << ctie("chat_id", ToJson(object.chat_id_));
  jo << ctie("from_message_id", ToJson(object.from_message_id_));
  jo << ctie("offset", ToJson(object.offset_));
  jo << ctie("limit", ToJson(object.limit_));
  jo << ctie("only_local", ToJson(object.only_local_));
}
void to_json(JsonValueScope &jv, const td_api::getChatMember &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "getChatMember");
  jo << ctie("chat_id", ToJson(object.chat_id_));
  jo << ctie("user_id", ToJson(object.user_id_));
}
void to_json(JsonValueScope &jv, const td_api::getChatMessageByDate &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "getChatMessageByDate");
  jo << ctie("chat_id", ToJson(object.chat_id_));
  jo << ctie("date", ToJson(object.date_));
}
void to_json(JsonValueScope &jv, const td_api::getChatMessageCount &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "getChatMessageCount");
  jo << ctie("chat_id", ToJson(object.chat_id_));
  if (object.filter_) {
    jo << ctie("filter", ToJson(object.filter_));
  }
  jo << ctie("return_local", ToJson(object.return_local_));
}
void to_json(JsonValueScope &jv, const td_api::getChatPinnedMessage &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "getChatPinnedMessage");
  jo << ctie("chat_id", ToJson(object.chat_id_));
}
void to_json(JsonValueScope &jv, const td_api::getChatReportSpamState &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "getChatReportSpamState");
  jo << ctie("chat_id", ToJson(object.chat_id_));
}
void to_json(JsonValueScope &jv, const td_api::getChats &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "getChats");
  jo << ctie("offset_order", ToJson(JsonInt64{object.offset_order_}));
  jo << ctie("offset_chat_id", ToJson(object.offset_chat_id_));
  jo << ctie("limit", ToJson(object.limit_));
}
void to_json(JsonValueScope &jv, const td_api::getConnectedWebsites &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "getConnectedWebsites");
}
void to_json(JsonValueScope &jv, const td_api::getContacts &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "getContacts");
}
void to_json(JsonValueScope &jv, const td_api::getCountryCode &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "getCountryCode");
}
void to_json(JsonValueScope &jv, const td_api::getCreatedPublicChats &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "getCreatedPublicChats");
}
void to_json(JsonValueScope &jv, const td_api::getDeepLinkInfo &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "getDeepLinkInfo");
  jo << ctie("link", ToJson(object.link_));
}
void to_json(JsonValueScope &jv, const td_api::getFavoriteStickers &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "getFavoriteStickers");
}
void to_json(JsonValueScope &jv, const td_api::getFile &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "getFile");
  jo << ctie("file_id", ToJson(object.file_id_));
}
void to_json(JsonValueScope &jv, const td_api::getFileExtension &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "getFileExtension");
  jo << ctie("mime_type", ToJson(object.mime_type_));
}
void to_json(JsonValueScope &jv, const td_api::getFileMimeType &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "getFileMimeType");
  jo << ctie("file_name", ToJson(object.file_name_));
}
void to_json(JsonValueScope &jv, const td_api::getGameHighScores &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "getGameHighScores");
  jo << ctie("chat_id", ToJson(object.chat_id_));
  jo << ctie("message_id", ToJson(object.message_id_));
  jo << ctie("user_id", ToJson(object.user_id_));
}
void to_json(JsonValueScope &jv, const td_api::getGroupsInCommon &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "getGroupsInCommon");
  jo << ctie("user_id", ToJson(object.user_id_));
  jo << ctie("offset_chat_id", ToJson(object.offset_chat_id_));
  jo << ctie("limit", ToJson(object.limit_));
}
void to_json(JsonValueScope &jv, const td_api::getImportedContactCount &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "getImportedContactCount");
}
void to_json(JsonValueScope &jv, const td_api::getInlineGameHighScores &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "getInlineGameHighScores");
  jo << ctie("inline_message_id", ToJson(object.inline_message_id_));
  jo << ctie("user_id", ToJson(object.user_id_));
}
void to_json(JsonValueScope &jv, const td_api::getInlineQueryResults &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "getInlineQueryResults");
  jo << ctie("bot_user_id", ToJson(object.bot_user_id_));
  jo << ctie("chat_id", ToJson(object.chat_id_));
  if (object.user_location_) {
    jo << ctie("user_location", ToJson(object.user_location_));
  }
  jo << ctie("query", ToJson(object.query_));
  jo << ctie("offset", ToJson(object.offset_));
}
void to_json(JsonValueScope &jv, const td_api::getInstalledStickerSets &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "getInstalledStickerSets");
  jo << ctie("is_masks", ToJson(object.is_masks_));
}
void to_json(JsonValueScope &jv, const td_api::getInviteText &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "getInviteText");
}
void to_json(JsonValueScope &jv, const td_api::getLanguagePackString &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "getLanguagePackString");
  jo << ctie("language_pack_database_path", ToJson(object.language_pack_database_path_));
  jo << ctie("localization_target", ToJson(object.localization_target_));
  jo << ctie("language_pack_id", ToJson(object.language_pack_id_));
  jo << ctie("key", ToJson(object.key_));
}
void to_json(JsonValueScope &jv, const td_api::getLanguagePackStrings &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "getLanguagePackStrings");
  jo << ctie("language_pack_id", ToJson(object.language_pack_id_));
  jo << ctie("keys", ToJson(object.keys_));
}
void to_json(JsonValueScope &jv, const td_api::getLocalizationTargetInfo &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "getLocalizationTargetInfo");
  jo << ctie("only_local", ToJson(object.only_local_));
}
void to_json(JsonValueScope &jv, const td_api::getMapThumbnailFile &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "getMapThumbnailFile");
  if (object.location_) {
    jo << ctie("location", ToJson(object.location_));
  }
  jo << ctie("zoom", ToJson(object.zoom_));
  jo << ctie("width", ToJson(object.width_));
  jo << ctie("height", ToJson(object.height_));
  jo << ctie("scale", ToJson(object.scale_));
  jo << ctie("chat_id", ToJson(object.chat_id_));
}
void to_json(JsonValueScope &jv, const td_api::getMe &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "getMe");
}
void to_json(JsonValueScope &jv, const td_api::getMessage &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "getMessage");
  jo << ctie("chat_id", ToJson(object.chat_id_));
  jo << ctie("message_id", ToJson(object.message_id_));
}
void to_json(JsonValueScope &jv, const td_api::getMessages &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "getMessages");
  jo << ctie("chat_id", ToJson(object.chat_id_));
  jo << ctie("message_ids", ToJson(object.message_ids_));
}
void to_json(JsonValueScope &jv, const td_api::getNetworkStatistics &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "getNetworkStatistics");
  jo << ctie("only_current", ToJson(object.only_current_));
}
void to_json(JsonValueScope &jv, const td_api::getOption &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "getOption");
  jo << ctie("name", ToJson(object.name_));
}
void to_json(JsonValueScope &jv, const td_api::getPassportAuthorizationForm &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "getPassportAuthorizationForm");
  jo << ctie("bot_user_id", ToJson(object.bot_user_id_));
  jo << ctie("scope", ToJson(object.scope_));
  jo << ctie("public_key", ToJson(object.public_key_));
  jo << ctie("nonce", ToJson(object.nonce_));
  jo << ctie("password", ToJson(object.password_));
}
void to_json(JsonValueScope &jv, const td_api::getPassportElement &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "getPassportElement");
  if (object.type_) {
    jo << ctie("type", ToJson(object.type_));
  }
  jo << ctie("password", ToJson(object.password_));
}
void to_json(JsonValueScope &jv, const td_api::getPasswordState &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "getPasswordState");
}
void to_json(JsonValueScope &jv, const td_api::getPaymentForm &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "getPaymentForm");
  jo << ctie("chat_id", ToJson(object.chat_id_));
  jo << ctie("message_id", ToJson(object.message_id_));
}
void to_json(JsonValueScope &jv, const td_api::getPaymentReceipt &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "getPaymentReceipt");
  jo << ctie("chat_id", ToJson(object.chat_id_));
  jo << ctie("message_id", ToJson(object.message_id_));
}
void to_json(JsonValueScope &jv, const td_api::getPreferredCountryLanguage &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "getPreferredCountryLanguage");
  jo << ctie("country_code", ToJson(object.country_code_));
}
void to_json(JsonValueScope &jv, const td_api::getProxies &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "getProxies");
}
void to_json(JsonValueScope &jv, const td_api::getProxyLink &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "getProxyLink");
  jo << ctie("proxy_id", ToJson(object.proxy_id_));
}
void to_json(JsonValueScope &jv, const td_api::getPublicMessageLink &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "getPublicMessageLink");
  jo << ctie("chat_id", ToJson(object.chat_id_));
  jo << ctie("message_id", ToJson(object.message_id_));
  jo << ctie("for_album", ToJson(object.for_album_));
}
void to_json(JsonValueScope &jv, const td_api::getRecentInlineBots &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "getRecentInlineBots");
}
void to_json(JsonValueScope &jv, const td_api::getRecentStickers &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "getRecentStickers");
  jo << ctie("is_attached", ToJson(object.is_attached_));
}
void to_json(JsonValueScope &jv, const td_api::getRecentlyVisitedTMeUrls &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "getRecentlyVisitedTMeUrls");
  jo << ctie("referrer", ToJson(object.referrer_));
}
void to_json(JsonValueScope &jv, const td_api::getRecoveryEmailAddress &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "getRecoveryEmailAddress");
  jo << ctie("password", ToJson(object.password_));
}
void to_json(JsonValueScope &jv, const td_api::getRemoteFile &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "getRemoteFile");
  jo << ctie("remote_file_id", ToJson(object.remote_file_id_));
  if (object.file_type_) {
    jo << ctie("file_type", ToJson(object.file_type_));
  }
}
void to_json(JsonValueScope &jv, const td_api::getRepliedMessage &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "getRepliedMessage");
  jo << ctie("chat_id", ToJson(object.chat_id_));
  jo << ctie("message_id", ToJson(object.message_id_));
}
void to_json(JsonValueScope &jv, const td_api::getSavedAnimations &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "getSavedAnimations");
}
void to_json(JsonValueScope &jv, const td_api::getSavedOrderInfo &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "getSavedOrderInfo");
}
void to_json(JsonValueScope &jv, const td_api::getScopeNotificationSettings &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "getScopeNotificationSettings");
  if (object.scope_) {
    jo << ctie("scope", ToJson(object.scope_));
  }
}
void to_json(JsonValueScope &jv, const td_api::getSecretChat &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "getSecretChat");
  jo << ctie("secret_chat_id", ToJson(object.secret_chat_id_));
}
void to_json(JsonValueScope &jv, const td_api::getStickerEmojis &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "getStickerEmojis");
  if (object.sticker_) {
    jo << ctie("sticker", ToJson(object.sticker_));
  }
}
void to_json(JsonValueScope &jv, const td_api::getStickerSet &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "getStickerSet");
  jo << ctie("set_id", ToJson(JsonInt64{object.set_id_}));
}
void to_json(JsonValueScope &jv, const td_api::getStickers &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "getStickers");
  jo << ctie("emoji", ToJson(object.emoji_));
  jo << ctie("limit", ToJson(object.limit_));
}
void to_json(JsonValueScope &jv, const td_api::getStorageStatistics &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "getStorageStatistics");
  jo << ctie("chat_limit", ToJson(object.chat_limit_));
}
void to_json(JsonValueScope &jv, const td_api::getStorageStatisticsFast &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "getStorageStatisticsFast");
}
void to_json(JsonValueScope &jv, const td_api::getSupergroup &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "getSupergroup");
  jo << ctie("supergroup_id", ToJson(object.supergroup_id_));
}
void to_json(JsonValueScope &jv, const td_api::getSupergroupFullInfo &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "getSupergroupFullInfo");
  jo << ctie("supergroup_id", ToJson(object.supergroup_id_));
}
void to_json(JsonValueScope &jv, const td_api::getSupergroupMembers &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "getSupergroupMembers");
  jo << ctie("supergroup_id", ToJson(object.supergroup_id_));
  if (object.filter_) {
    jo << ctie("filter", ToJson(object.filter_));
  }
  jo << ctie("offset", ToJson(object.offset_));
  jo << ctie("limit", ToJson(object.limit_));
}
void to_json(JsonValueScope &jv, const td_api::getSupportUser &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "getSupportUser");
}
void to_json(JsonValueScope &jv, const td_api::getTemporaryPasswordState &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "getTemporaryPasswordState");
}
void to_json(JsonValueScope &jv, const td_api::getTextEntities &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "getTextEntities");
  jo << ctie("text", ToJson(object.text_));
}
void to_json(JsonValueScope &jv, const td_api::getTopChats &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "getTopChats");
  if (object.category_) {
    jo << ctie("category", ToJson(object.category_));
  }
  jo << ctie("limit", ToJson(object.limit_));
}
void to_json(JsonValueScope &jv, const td_api::getTrendingStickerSets &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "getTrendingStickerSets");
}
void to_json(JsonValueScope &jv, const td_api::getUser &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "getUser");
  jo << ctie("user_id", ToJson(object.user_id_));
}
void to_json(JsonValueScope &jv, const td_api::getUserFullInfo &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "getUserFullInfo");
  jo << ctie("user_id", ToJson(object.user_id_));
}
void to_json(JsonValueScope &jv, const td_api::getUserPrivacySettingRules &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "getUserPrivacySettingRules");
  if (object.setting_) {
    jo << ctie("setting", ToJson(object.setting_));
  }
}
void to_json(JsonValueScope &jv, const td_api::getUserProfilePhotos &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "getUserProfilePhotos");
  jo << ctie("user_id", ToJson(object.user_id_));
  jo << ctie("offset", ToJson(object.offset_));
  jo << ctie("limit", ToJson(object.limit_));
}
void to_json(JsonValueScope &jv, const td_api::getWallpapers &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "getWallpapers");
}
void to_json(JsonValueScope &jv, const td_api::getWebPageInstantView &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "getWebPageInstantView");
  jo << ctie("url", ToJson(object.url_));
  jo << ctie("force_full", ToJson(object.force_full_));
}
void to_json(JsonValueScope &jv, const td_api::getWebPagePreview &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "getWebPagePreview");
  if (object.text_) {
    jo << ctie("text", ToJson(object.text_));
  }
}
void to_json(JsonValueScope &jv, const td_api::importContacts &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "importContacts");
  jo << ctie("contacts", ToJson(object.contacts_));
}
void to_json(JsonValueScope &jv, const td_api::joinChat &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "joinChat");
  jo << ctie("chat_id", ToJson(object.chat_id_));
}
void to_json(JsonValueScope &jv, const td_api::joinChatByInviteLink &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "joinChatByInviteLink");
  jo << ctie("invite_link", ToJson(object.invite_link_));
}
void to_json(JsonValueScope &jv, const td_api::leaveChat &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "leaveChat");
  jo << ctie("chat_id", ToJson(object.chat_id_));
}
void to_json(JsonValueScope &jv, const td_api::logOut &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "logOut");
}
void to_json(JsonValueScope &jv, const td_api::openChat &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "openChat");
  jo << ctie("chat_id", ToJson(object.chat_id_));
}
void to_json(JsonValueScope &jv, const td_api::openMessageContent &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "openMessageContent");
  jo << ctie("chat_id", ToJson(object.chat_id_));
  jo << ctie("message_id", ToJson(object.message_id_));
}
void to_json(JsonValueScope &jv, const td_api::optimizeStorage &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "optimizeStorage");
  jo << ctie("size", ToJson(object.size_));
  jo << ctie("ttl", ToJson(object.ttl_));
  jo << ctie("count", ToJson(object.count_));
  jo << ctie("immunity_delay", ToJson(object.immunity_delay_));
  jo << ctie("file_types", ToJson(object.file_types_));
  jo << ctie("chat_ids", ToJson(object.chat_ids_));
  jo << ctie("exclude_chat_ids", ToJson(object.exclude_chat_ids_));
  jo << ctie("chat_limit", ToJson(object.chat_limit_));
}
void to_json(JsonValueScope &jv, const td_api::parseTextEntities &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "parseTextEntities");
  jo << ctie("text", ToJson(object.text_));
  if (object.parse_mode_) {
    jo << ctie("parse_mode", ToJson(object.parse_mode_));
  }
}
void to_json(JsonValueScope &jv, const td_api::pinSupergroupMessage &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "pinSupergroupMessage");
  jo << ctie("supergroup_id", ToJson(object.supergroup_id_));
  jo << ctie("message_id", ToJson(object.message_id_));
  jo << ctie("disable_notification", ToJson(object.disable_notification_));
}
void to_json(JsonValueScope &jv, const td_api::pingProxy &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "pingProxy");
  jo << ctie("proxy_id", ToJson(object.proxy_id_));
}
void to_json(JsonValueScope &jv, const td_api::processDcUpdate &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "processDcUpdate");
  jo << ctie("dc", ToJson(object.dc_));
  jo << ctie("addr", ToJson(object.addr_));
}
void to_json(JsonValueScope &jv, const td_api::readAllChatMentions &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "readAllChatMentions");
  jo << ctie("chat_id", ToJson(object.chat_id_));
}
void to_json(JsonValueScope &jv, const td_api::recoverAuthenticationPassword &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "recoverAuthenticationPassword");
  jo << ctie("recovery_code", ToJson(object.recovery_code_));
}
void to_json(JsonValueScope &jv, const td_api::recoverPassword &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "recoverPassword");
  jo << ctie("recovery_code", ToJson(object.recovery_code_));
}
void to_json(JsonValueScope &jv, const td_api::registerDevice &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "registerDevice");
  if (object.device_token_) {
    jo << ctie("device_token", ToJson(object.device_token_));
  }
  jo << ctie("other_user_ids", ToJson(object.other_user_ids_));
}
void to_json(JsonValueScope &jv, const td_api::removeContacts &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "removeContacts");
  jo << ctie("user_ids", ToJson(object.user_ids_));
}
void to_json(JsonValueScope &jv, const td_api::removeFavoriteSticker &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "removeFavoriteSticker");
  if (object.sticker_) {
    jo << ctie("sticker", ToJson(object.sticker_));
  }
}
void to_json(JsonValueScope &jv, const td_api::removeProxy &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "removeProxy");
  jo << ctie("proxy_id", ToJson(object.proxy_id_));
}
void to_json(JsonValueScope &jv, const td_api::removeRecentHashtag &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "removeRecentHashtag");
  jo << ctie("hashtag", ToJson(object.hashtag_));
}
void to_json(JsonValueScope &jv, const td_api::removeRecentSticker &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "removeRecentSticker");
  jo << ctie("is_attached", ToJson(object.is_attached_));
  if (object.sticker_) {
    jo << ctie("sticker", ToJson(object.sticker_));
  }
}
void to_json(JsonValueScope &jv, const td_api::removeRecentlyFoundChat &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "removeRecentlyFoundChat");
  jo << ctie("chat_id", ToJson(object.chat_id_));
}
void to_json(JsonValueScope &jv, const td_api::removeSavedAnimation &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "removeSavedAnimation");
  if (object.animation_) {
    jo << ctie("animation", ToJson(object.animation_));
  }
}
void to_json(JsonValueScope &jv, const td_api::removeStickerFromSet &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "removeStickerFromSet");
  if (object.sticker_) {
    jo << ctie("sticker", ToJson(object.sticker_));
  }
}
void to_json(JsonValueScope &jv, const td_api::removeTopChat &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "removeTopChat");
  if (object.category_) {
    jo << ctie("category", ToJson(object.category_));
  }
  jo << ctie("chat_id", ToJson(object.chat_id_));
}
void to_json(JsonValueScope &jv, const td_api::reorderInstalledStickerSets &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "reorderInstalledStickerSets");
  jo << ctie("is_masks", ToJson(object.is_masks_));
  jo << ctie("sticker_set_ids", ToJson(JsonVectorInt64{object.sticker_set_ids_}));
}
void to_json(JsonValueScope &jv, const td_api::reportChat &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "reportChat");
  jo << ctie("chat_id", ToJson(object.chat_id_));
  if (object.reason_) {
    jo << ctie("reason", ToJson(object.reason_));
  }
  jo << ctie("message_ids", ToJson(object.message_ids_));
}
void to_json(JsonValueScope &jv, const td_api::reportSupergroupSpam &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "reportSupergroupSpam");
  jo << ctie("supergroup_id", ToJson(object.supergroup_id_));
  jo << ctie("user_id", ToJson(object.user_id_));
  jo << ctie("message_ids", ToJson(object.message_ids_));
}
void to_json(JsonValueScope &jv, const td_api::requestAuthenticationPasswordRecovery &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "requestAuthenticationPasswordRecovery");
}
void to_json(JsonValueScope &jv, const td_api::requestPasswordRecovery &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "requestPasswordRecovery");
}
void to_json(JsonValueScope &jv, const td_api::resendAuthenticationCode &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "resendAuthenticationCode");
}
void to_json(JsonValueScope &jv, const td_api::resendChangePhoneNumberCode &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "resendChangePhoneNumberCode");
}
void to_json(JsonValueScope &jv, const td_api::resendEmailAddressVerificationCode &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "resendEmailAddressVerificationCode");
}
void to_json(JsonValueScope &jv, const td_api::resendPhoneNumberConfirmationCode &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "resendPhoneNumberConfirmationCode");
}
void to_json(JsonValueScope &jv, const td_api::resendPhoneNumberVerificationCode &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "resendPhoneNumberVerificationCode");
}
void to_json(JsonValueScope &jv, const td_api::resetAllNotificationSettings &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "resetAllNotificationSettings");
}
void to_json(JsonValueScope &jv, const td_api::resetNetworkStatistics &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "resetNetworkStatistics");
}
void to_json(JsonValueScope &jv, const td_api::searchCallMessages &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "searchCallMessages");
  jo << ctie("from_message_id", ToJson(object.from_message_id_));
  jo << ctie("limit", ToJson(object.limit_));
  jo << ctie("only_missed", ToJson(object.only_missed_));
}
void to_json(JsonValueScope &jv, const td_api::searchChatMembers &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "searchChatMembers");
  jo << ctie("chat_id", ToJson(object.chat_id_));
  jo << ctie("query", ToJson(object.query_));
  jo << ctie("limit", ToJson(object.limit_));
  if (object.filter_) {
    jo << ctie("filter", ToJson(object.filter_));
  }
}
void to_json(JsonValueScope &jv, const td_api::searchChatMessages &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "searchChatMessages");
  jo << ctie("chat_id", ToJson(object.chat_id_));
  jo << ctie("query", ToJson(object.query_));
  jo << ctie("sender_user_id", ToJson(object.sender_user_id_));
  jo << ctie("from_message_id", ToJson(object.from_message_id_));
  jo << ctie("offset", ToJson(object.offset_));
  jo << ctie("limit", ToJson(object.limit_));
  if (object.filter_) {
    jo << ctie("filter", ToJson(object.filter_));
  }
}
void to_json(JsonValueScope &jv, const td_api::searchChatRecentLocationMessages &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "searchChatRecentLocationMessages");
  jo << ctie("chat_id", ToJson(object.chat_id_));
  jo << ctie("limit", ToJson(object.limit_));
}
void to_json(JsonValueScope &jv, const td_api::searchChats &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "searchChats");
  jo << ctie("query", ToJson(object.query_));
  jo << ctie("limit", ToJson(object.limit_));
}
void to_json(JsonValueScope &jv, const td_api::searchChatsOnServer &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "searchChatsOnServer");
  jo << ctie("query", ToJson(object.query_));
  jo << ctie("limit", ToJson(object.limit_));
}
void to_json(JsonValueScope &jv, const td_api::searchContacts &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "searchContacts");
  jo << ctie("query", ToJson(object.query_));
  jo << ctie("limit", ToJson(object.limit_));
}
void to_json(JsonValueScope &jv, const td_api::searchHashtags &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "searchHashtags");
  jo << ctie("prefix", ToJson(object.prefix_));
  jo << ctie("limit", ToJson(object.limit_));
}
void to_json(JsonValueScope &jv, const td_api::searchInstalledStickerSets &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "searchInstalledStickerSets");
  jo << ctie("is_masks", ToJson(object.is_masks_));
  jo << ctie("query", ToJson(object.query_));
  jo << ctie("limit", ToJson(object.limit_));
}
void to_json(JsonValueScope &jv, const td_api::searchMessages &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "searchMessages");
  jo << ctie("query", ToJson(object.query_));
  jo << ctie("offset_date", ToJson(object.offset_date_));
  jo << ctie("offset_chat_id", ToJson(object.offset_chat_id_));
  jo << ctie("offset_message_id", ToJson(object.offset_message_id_));
  jo << ctie("limit", ToJson(object.limit_));
}
void to_json(JsonValueScope &jv, const td_api::searchPublicChat &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "searchPublicChat");
  jo << ctie("username", ToJson(object.username_));
}
void to_json(JsonValueScope &jv, const td_api::searchPublicChats &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "searchPublicChats");
  jo << ctie("query", ToJson(object.query_));
}
void to_json(JsonValueScope &jv, const td_api::searchSecretMessages &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "searchSecretMessages");
  jo << ctie("chat_id", ToJson(object.chat_id_));
  jo << ctie("query", ToJson(object.query_));
  jo << ctie("from_search_id", ToJson(JsonInt64{object.from_search_id_}));
  jo << ctie("limit", ToJson(object.limit_));
  if (object.filter_) {
    jo << ctie("filter", ToJson(object.filter_));
  }
}
void to_json(JsonValueScope &jv, const td_api::searchStickerSet &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "searchStickerSet");
  jo << ctie("name", ToJson(object.name_));
}
void to_json(JsonValueScope &jv, const td_api::searchStickerSets &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "searchStickerSets");
  jo << ctie("query", ToJson(object.query_));
}
void to_json(JsonValueScope &jv, const td_api::searchStickers &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "searchStickers");
  jo << ctie("emoji", ToJson(object.emoji_));
  jo << ctie("limit", ToJson(object.limit_));
}
void to_json(JsonValueScope &jv, const td_api::sendBotStartMessage &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "sendBotStartMessage");
  jo << ctie("bot_user_id", ToJson(object.bot_user_id_));
  jo << ctie("chat_id", ToJson(object.chat_id_));
  jo << ctie("parameter", ToJson(object.parameter_));
}
void to_json(JsonValueScope &jv, const td_api::sendCallDebugInformation &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "sendCallDebugInformation");
  jo << ctie("call_id", ToJson(object.call_id_));
  jo << ctie("debug_information", ToJson(object.debug_information_));
}
void to_json(JsonValueScope &jv, const td_api::sendCallRating &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "sendCallRating");
  jo << ctie("call_id", ToJson(object.call_id_));
  jo << ctie("rating", ToJson(object.rating_));
  jo << ctie("comment", ToJson(object.comment_));
}
void to_json(JsonValueScope &jv, const td_api::sendChatAction &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "sendChatAction");
  jo << ctie("chat_id", ToJson(object.chat_id_));
  if (object.action_) {
    jo << ctie("action", ToJson(object.action_));
  }
}
void to_json(JsonValueScope &jv, const td_api::sendChatScreenshotTakenNotification &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "sendChatScreenshotTakenNotification");
  jo << ctie("chat_id", ToJson(object.chat_id_));
}
void to_json(JsonValueScope &jv, const td_api::sendChatSetTtlMessage &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "sendChatSetTtlMessage");
  jo << ctie("chat_id", ToJson(object.chat_id_));
  jo << ctie("ttl", ToJson(object.ttl_));
}
void to_json(JsonValueScope &jv, const td_api::sendCustomRequest &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "sendCustomRequest");
  jo << ctie("method", ToJson(object.method_));
  jo << ctie("parameters", ToJson(object.parameters_));
}
void to_json(JsonValueScope &jv, const td_api::sendEmailAddressVerificationCode &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "sendEmailAddressVerificationCode");
  jo << ctie("email_address", ToJson(object.email_address_));
}
void to_json(JsonValueScope &jv, const td_api::sendInlineQueryResultMessage &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "sendInlineQueryResultMessage");
  jo << ctie("chat_id", ToJson(object.chat_id_));
  jo << ctie("reply_to_message_id", ToJson(object.reply_to_message_id_));
  jo << ctie("disable_notification", ToJson(object.disable_notification_));
  jo << ctie("from_background", ToJson(object.from_background_));
  jo << ctie("query_id", ToJson(JsonInt64{object.query_id_}));
  jo << ctie("result_id", ToJson(object.result_id_));
}
void to_json(JsonValueScope &jv, const td_api::sendMessage &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "sendMessage");
  jo << ctie("chat_id", ToJson(object.chat_id_));
  jo << ctie("reply_to_message_id", ToJson(object.reply_to_message_id_));
  jo << ctie("disable_notification", ToJson(object.disable_notification_));
  jo << ctie("from_background", ToJson(object.from_background_));
  if (object.reply_markup_) {
    jo << ctie("reply_markup", ToJson(object.reply_markup_));
  }
  if (object.input_message_content_) {
    jo << ctie("input_message_content", ToJson(object.input_message_content_));
  }
}
void to_json(JsonValueScope &jv, const td_api::sendMessageAlbum &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "sendMessageAlbum");
  jo << ctie("chat_id", ToJson(object.chat_id_));
  jo << ctie("reply_to_message_id", ToJson(object.reply_to_message_id_));
  jo << ctie("disable_notification", ToJson(object.disable_notification_));
  jo << ctie("from_background", ToJson(object.from_background_));
  jo << ctie("input_message_contents", ToJson(object.input_message_contents_));
}
void to_json(JsonValueScope &jv, const td_api::sendPassportAuthorizationForm &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "sendPassportAuthorizationForm");
  jo << ctie("autorization_form_id", ToJson(object.autorization_form_id_));
  jo << ctie("types", ToJson(object.types_));
}
void to_json(JsonValueScope &jv, const td_api::sendPaymentForm &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "sendPaymentForm");
  jo << ctie("chat_id", ToJson(object.chat_id_));
  jo << ctie("message_id", ToJson(object.message_id_));
  jo << ctie("order_info_id", ToJson(object.order_info_id_));
  jo << ctie("shipping_option_id", ToJson(object.shipping_option_id_));
  if (object.credentials_) {
    jo << ctie("credentials", ToJson(object.credentials_));
  }
}
void to_json(JsonValueScope &jv, const td_api::sendPhoneNumberConfirmationCode &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "sendPhoneNumberConfirmationCode");
  jo << ctie("hash", ToJson(object.hash_));
  jo << ctie("phone_number", ToJson(object.phone_number_));
  jo << ctie("allow_flash_call", ToJson(object.allow_flash_call_));
  jo << ctie("is_current_phone_number", ToJson(object.is_current_phone_number_));
}
void to_json(JsonValueScope &jv, const td_api::sendPhoneNumberVerificationCode &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "sendPhoneNumberVerificationCode");
  jo << ctie("phone_number", ToJson(object.phone_number_));
  jo << ctie("allow_flash_call", ToJson(object.allow_flash_call_));
  jo << ctie("is_current_phone_number", ToJson(object.is_current_phone_number_));
}
void to_json(JsonValueScope &jv, const td_api::setAccountTtl &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "setAccountTtl");
  if (object.ttl_) {
    jo << ctie("ttl", ToJson(object.ttl_));
  }
}
void to_json(JsonValueScope &jv, const td_api::setAlarm &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "setAlarm");
  jo << ctie("seconds", ToJson(object.seconds_));
}
void to_json(JsonValueScope &jv, const td_api::setAuthenticationPhoneNumber &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "setAuthenticationPhoneNumber");
  jo << ctie("phone_number", ToJson(object.phone_number_));
  jo << ctie("allow_flash_call", ToJson(object.allow_flash_call_));
  jo << ctie("is_current_phone_number", ToJson(object.is_current_phone_number_));
}
void to_json(JsonValueScope &jv, const td_api::setBio &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "setBio");
  jo << ctie("bio", ToJson(object.bio_));
}
void to_json(JsonValueScope &jv, const td_api::setBotUpdatesStatus &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "setBotUpdatesStatus");
  jo << ctie("pending_update_count", ToJson(object.pending_update_count_));
  jo << ctie("error_message", ToJson(object.error_message_));
}
void to_json(JsonValueScope &jv, const td_api::setChatClientData &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "setChatClientData");
  jo << ctie("chat_id", ToJson(object.chat_id_));
  jo << ctie("client_data", ToJson(object.client_data_));
}
void to_json(JsonValueScope &jv, const td_api::setChatDraftMessage &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "setChatDraftMessage");
  jo << ctie("chat_id", ToJson(object.chat_id_));
  if (object.draft_message_) {
    jo << ctie("draft_message", ToJson(object.draft_message_));
  }
}
void to_json(JsonValueScope &jv, const td_api::setChatMemberStatus &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "setChatMemberStatus");
  jo << ctie("chat_id", ToJson(object.chat_id_));
  jo << ctie("user_id", ToJson(object.user_id_));
  if (object.status_) {
    jo << ctie("status", ToJson(object.status_));
  }
}
void to_json(JsonValueScope &jv, const td_api::setChatNotificationSettings &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "setChatNotificationSettings");
  jo << ctie("chat_id", ToJson(object.chat_id_));
  if (object.notification_settings_) {
    jo << ctie("notification_settings", ToJson(object.notification_settings_));
  }
}
void to_json(JsonValueScope &jv, const td_api::setChatPhoto &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "setChatPhoto");
  jo << ctie("chat_id", ToJson(object.chat_id_));
  if (object.photo_) {
    jo << ctie("photo", ToJson(object.photo_));
  }
}
void to_json(JsonValueScope &jv, const td_api::setChatTitle &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "setChatTitle");
  jo << ctie("chat_id", ToJson(object.chat_id_));
  jo << ctie("title", ToJson(object.title_));
}
void to_json(JsonValueScope &jv, const td_api::setCustomLanguagePack &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "setCustomLanguagePack");
  if (object.info_) {
    jo << ctie("info", ToJson(object.info_));
  }
  jo << ctie("strings", ToJson(object.strings_));
}
void to_json(JsonValueScope &jv, const td_api::setCustomLanguagePackString &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "setCustomLanguagePackString");
  jo << ctie("language_pack_id", ToJson(object.language_pack_id_));
  if (object.new_string_) {
    jo << ctie("new_string", ToJson(object.new_string_));
  }
}
void to_json(JsonValueScope &jv, const td_api::setDatabaseEncryptionKey &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "setDatabaseEncryptionKey");
  jo << ctie("new_encryption_key", ToJson(base64_encode(object.new_encryption_key_)));
}
void to_json(JsonValueScope &jv, const td_api::setFileGenerationProgress &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "setFileGenerationProgress");
  jo << ctie("generation_id", ToJson(JsonInt64{object.generation_id_}));
  jo << ctie("expected_size", ToJson(object.expected_size_));
  jo << ctie("local_prefix_size", ToJson(object.local_prefix_size_));
}
void to_json(JsonValueScope &jv, const td_api::setGameScore &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "setGameScore");
  jo << ctie("chat_id", ToJson(object.chat_id_));
  jo << ctie("message_id", ToJson(object.message_id_));
  jo << ctie("edit_message", ToJson(object.edit_message_));
  jo << ctie("user_id", ToJson(object.user_id_));
  jo << ctie("score", ToJson(object.score_));
  jo << ctie("force", ToJson(object.force_));
}
void to_json(JsonValueScope &jv, const td_api::setInlineGameScore &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "setInlineGameScore");
  jo << ctie("inline_message_id", ToJson(object.inline_message_id_));
  jo << ctie("edit_message", ToJson(object.edit_message_));
  jo << ctie("user_id", ToJson(object.user_id_));
  jo << ctie("score", ToJson(object.score_));
  jo << ctie("force", ToJson(object.force_));
}
void to_json(JsonValueScope &jv, const td_api::setName &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "setName");
  jo << ctie("first_name", ToJson(object.first_name_));
  jo << ctie("last_name", ToJson(object.last_name_));
}
void to_json(JsonValueScope &jv, const td_api::setNetworkType &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "setNetworkType");
  if (object.type_) {
    jo << ctie("type", ToJson(object.type_));
  }
}
void to_json(JsonValueScope &jv, const td_api::setOption &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "setOption");
  jo << ctie("name", ToJson(object.name_));
  if (object.value_) {
    jo << ctie("value", ToJson(object.value_));
  }
}
void to_json(JsonValueScope &jv, const td_api::setPassportElement &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "setPassportElement");
  if (object.element_) {
    jo << ctie("element", ToJson(object.element_));
  }
  jo << ctie("password", ToJson(object.password_));
}
void to_json(JsonValueScope &jv, const td_api::setPassportElementErrors &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "setPassportElementErrors");
  jo << ctie("user_id", ToJson(object.user_id_));
  jo << ctie("errors", ToJson(object.errors_));
}
void to_json(JsonValueScope &jv, const td_api::setPassword &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "setPassword");
  jo << ctie("old_password", ToJson(object.old_password_));
  jo << ctie("new_password", ToJson(object.new_password_));
  jo << ctie("new_hint", ToJson(object.new_hint_));
  jo << ctie("set_recovery_email_address", ToJson(object.set_recovery_email_address_));
  jo << ctie("new_recovery_email_address", ToJson(object.new_recovery_email_address_));
}
void to_json(JsonValueScope &jv, const td_api::setPinnedChats &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "setPinnedChats");
  jo << ctie("chat_ids", ToJson(object.chat_ids_));
}
void to_json(JsonValueScope &jv, const td_api::setProfilePhoto &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "setProfilePhoto");
  if (object.photo_) {
    jo << ctie("photo", ToJson(object.photo_));
  }
}
void to_json(JsonValueScope &jv, const td_api::setRecoveryEmailAddress &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "setRecoveryEmailAddress");
  jo << ctie("password", ToJson(object.password_));
  jo << ctie("new_recovery_email_address", ToJson(object.new_recovery_email_address_));
}
void to_json(JsonValueScope &jv, const td_api::setScopeNotificationSettings &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "setScopeNotificationSettings");
  if (object.scope_) {
    jo << ctie("scope", ToJson(object.scope_));
  }
  if (object.notification_settings_) {
    jo << ctie("notification_settings", ToJson(object.notification_settings_));
  }
}
void to_json(JsonValueScope &jv, const td_api::setStickerPositionInSet &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "setStickerPositionInSet");
  if (object.sticker_) {
    jo << ctie("sticker", ToJson(object.sticker_));
  }
  jo << ctie("position", ToJson(object.position_));
}
void to_json(JsonValueScope &jv, const td_api::setSupergroupDescription &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "setSupergroupDescription");
  jo << ctie("supergroup_id", ToJson(object.supergroup_id_));
  jo << ctie("description", ToJson(object.description_));
}
void to_json(JsonValueScope &jv, const td_api::setSupergroupStickerSet &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "setSupergroupStickerSet");
  jo << ctie("supergroup_id", ToJson(object.supergroup_id_));
  jo << ctie("sticker_set_id", ToJson(JsonInt64{object.sticker_set_id_}));
}
void to_json(JsonValueScope &jv, const td_api::setSupergroupUsername &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "setSupergroupUsername");
  jo << ctie("supergroup_id", ToJson(object.supergroup_id_));
  jo << ctie("username", ToJson(object.username_));
}
void to_json(JsonValueScope &jv, const td_api::setTdlibParameters &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "setTdlibParameters");
  if (object.parameters_) {
    jo << ctie("parameters", ToJson(object.parameters_));
  }
}
void to_json(JsonValueScope &jv, const td_api::setUserPrivacySettingRules &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "setUserPrivacySettingRules");
  if (object.setting_) {
    jo << ctie("setting", ToJson(object.setting_));
  }
  if (object.rules_) {
    jo << ctie("rules", ToJson(object.rules_));
  }
}
void to_json(JsonValueScope &jv, const td_api::setUsername &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "setUsername");
  jo << ctie("username", ToJson(object.username_));
}
void to_json(JsonValueScope &jv, const td_api::terminateAllOtherSessions &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "terminateAllOtherSessions");
}
void to_json(JsonValueScope &jv, const td_api::terminateSession &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "terminateSession");
  jo << ctie("session_id", ToJson(JsonInt64{object.session_id_}));
}
void to_json(JsonValueScope &jv, const td_api::testCallBytes &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "testCallBytes");
  jo << ctie("x", ToJson(base64_encode(object.x_)));
}
void to_json(JsonValueScope &jv, const td_api::testCallEmpty &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "testCallEmpty");
}
void to_json(JsonValueScope &jv, const td_api::testCallString &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "testCallString");
  jo << ctie("x", ToJson(object.x_));
}
void to_json(JsonValueScope &jv, const td_api::testCallVectorInt &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "testCallVectorInt");
  jo << ctie("x", ToJson(object.x_));
}
void to_json(JsonValueScope &jv, const td_api::testCallVectorIntObject &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "testCallVectorIntObject");
  jo << ctie("x", ToJson(object.x_));
}
void to_json(JsonValueScope &jv, const td_api::testCallVectorString &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "testCallVectorString");
  jo << ctie("x", ToJson(object.x_));
}
void to_json(JsonValueScope &jv, const td_api::testCallVectorStringObject &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "testCallVectorStringObject");
  jo << ctie("x", ToJson(object.x_));
}
void to_json(JsonValueScope &jv, const td_api::testGetDifference &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "testGetDifference");
}
void to_json(JsonValueScope &jv, const td_api::testNetwork &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "testNetwork");
}
void to_json(JsonValueScope &jv, const td_api::testSquareInt &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "testSquareInt");
  jo << ctie("x", ToJson(object.x_));
}
void to_json(JsonValueScope &jv, const td_api::testUseError &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "testUseError");
}
void to_json(JsonValueScope &jv, const td_api::testUseUpdate &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "testUseUpdate");
}
void to_json(JsonValueScope &jv, const td_api::toggleBasicGroupAdministrators &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "toggleBasicGroupAdministrators");
  jo << ctie("basic_group_id", ToJson(object.basic_group_id_));
  jo << ctie("everyone_is_administrator", ToJson(object.everyone_is_administrator_));
}
void to_json(JsonValueScope &jv, const td_api::toggleChatDefaultDisableNotification &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "toggleChatDefaultDisableNotification");
  jo << ctie("chat_id", ToJson(object.chat_id_));
  jo << ctie("default_disable_notification", ToJson(object.default_disable_notification_));
}
void to_json(JsonValueScope &jv, const td_api::toggleChatIsMarkedAsUnread &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "toggleChatIsMarkedAsUnread");
  jo << ctie("chat_id", ToJson(object.chat_id_));
  jo << ctie("is_marked_as_unread", ToJson(object.is_marked_as_unread_));
}
void to_json(JsonValueScope &jv, const td_api::toggleChatIsPinned &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "toggleChatIsPinned");
  jo << ctie("chat_id", ToJson(object.chat_id_));
  jo << ctie("is_pinned", ToJson(object.is_pinned_));
}
void to_json(JsonValueScope &jv, const td_api::toggleSupergroupInvites &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "toggleSupergroupInvites");
  jo << ctie("supergroup_id", ToJson(object.supergroup_id_));
  jo << ctie("anyone_can_invite", ToJson(object.anyone_can_invite_));
}
void to_json(JsonValueScope &jv, const td_api::toggleSupergroupIsAllHistoryAvailable &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "toggleSupergroupIsAllHistoryAvailable");
  jo << ctie("supergroup_id", ToJson(object.supergroup_id_));
  jo << ctie("is_all_history_available", ToJson(object.is_all_history_available_));
}
void to_json(JsonValueScope &jv, const td_api::toggleSupergroupSignMessages &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "toggleSupergroupSignMessages");
  jo << ctie("supergroup_id", ToJson(object.supergroup_id_));
  jo << ctie("sign_messages", ToJson(object.sign_messages_));
}
void to_json(JsonValueScope &jv, const td_api::unblockUser &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "unblockUser");
  jo << ctie("user_id", ToJson(object.user_id_));
}
void to_json(JsonValueScope &jv, const td_api::unpinSupergroupMessage &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "unpinSupergroupMessage");
  jo << ctie("supergroup_id", ToJson(object.supergroup_id_));
}
void to_json(JsonValueScope &jv, const td_api::upgradeBasicGroupChatToSupergroupChat &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "upgradeBasicGroupChatToSupergroupChat");
  jo << ctie("chat_id", ToJson(object.chat_id_));
}
void to_json(JsonValueScope &jv, const td_api::uploadFile &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "uploadFile");
  if (object.file_) {
    jo << ctie("file", ToJson(object.file_));
  }
  if (object.file_type_) {
    jo << ctie("file_type", ToJson(object.file_type_));
  }
  jo << ctie("priority", ToJson(object.priority_));
}
void to_json(JsonValueScope &jv, const td_api::uploadStickerFile &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "uploadStickerFile");
  jo << ctie("user_id", ToJson(object.user_id_));
  if (object.png_sticker_) {
    jo << ctie("png_sticker", ToJson(object.png_sticker_));
  }
}
void to_json(JsonValueScope &jv, const td_api::validateOrderInfo &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "validateOrderInfo");
  jo << ctie("chat_id", ToJson(object.chat_id_));
  jo << ctie("message_id", ToJson(object.message_id_));
  if (object.order_info_) {
    jo << ctie("order_info", ToJson(object.order_info_));
  }
  jo << ctie("allow_save", ToJson(object.allow_save_));
}
void to_json(JsonValueScope &jv, const td_api::viewMessages &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "viewMessages");
  jo << ctie("chat_id", ToJson(object.chat_id_));
  jo << ctie("message_ids", ToJson(object.message_ids_));
  jo << ctie("force_read", ToJson(object.force_read_));
}
void to_json(JsonValueScope &jv, const td_api::viewTrendingStickerSets &object) {
  auto jo = jv.enter_object();
  jo << ctie("@type", "viewTrendingStickerSets");
  jo << ctie("sticker_set_ids", ToJson(JsonVectorInt64{object.sticker_set_ids_}));
}
}  // namespace td_api
}  // namespace td
