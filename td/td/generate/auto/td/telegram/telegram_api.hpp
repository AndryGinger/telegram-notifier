#pragma once

/**
 * \file
 * Contains downcast_call methods for calling a function object on downcasted to
 * the most derived class TDLib API object.
 */
#include "telegram_api.h"

namespace td {
namespace telegram_api {

/**
 * Calls the specified function object with the given object downcasted to its most derived type.
 * \param[in] obj Object to pass as an argument to the function object.
 * \param[in] func Function object to which the object will be passed.
 * \returns Whether function object call has happened. Should always return true for correct parameters.
 */
template <class T>
bool downcast_call(Object &obj, const T &func) {
  switch (obj.get_id()) {
    case accessPointRule::ID:
      func(static_cast<accessPointRule &>(obj));
      return true;
    case accountDaysTTL::ID:
      func(static_cast<accountDaysTTL &>(obj));
      return true;
    case authorization::ID:
      func(static_cast<authorization &>(obj));
      return true;
    case botCommand::ID:
      func(static_cast<botCommand &>(obj));
      return true;
    case botInfo::ID:
      func(static_cast<botInfo &>(obj));
      return true;
    case botInlineMessageMediaAuto::ID:
      func(static_cast<botInlineMessageMediaAuto &>(obj));
      return true;
    case botInlineMessageText::ID:
      func(static_cast<botInlineMessageText &>(obj));
      return true;
    case botInlineMessageMediaGeo::ID:
      func(static_cast<botInlineMessageMediaGeo &>(obj));
      return true;
    case botInlineMessageMediaVenue::ID:
      func(static_cast<botInlineMessageMediaVenue &>(obj));
      return true;
    case botInlineMessageMediaContact::ID:
      func(static_cast<botInlineMessageMediaContact &>(obj));
      return true;
    case botInlineResult::ID:
      func(static_cast<botInlineResult &>(obj));
      return true;
    case botInlineMediaResult::ID:
      func(static_cast<botInlineMediaResult &>(obj));
      return true;
    case cdnConfig::ID:
      func(static_cast<cdnConfig &>(obj));
      return true;
    case cdnPublicKey::ID:
      func(static_cast<cdnPublicKey &>(obj));
      return true;
    case channelAdminLogEvent::ID:
      func(static_cast<channelAdminLogEvent &>(obj));
      return true;
    case channelAdminLogEventActionChangeTitle::ID:
      func(static_cast<channelAdminLogEventActionChangeTitle &>(obj));
      return true;
    case channelAdminLogEventActionChangeAbout::ID:
      func(static_cast<channelAdminLogEventActionChangeAbout &>(obj));
      return true;
    case channelAdminLogEventActionChangeUsername::ID:
      func(static_cast<channelAdminLogEventActionChangeUsername &>(obj));
      return true;
    case channelAdminLogEventActionChangePhoto::ID:
      func(static_cast<channelAdminLogEventActionChangePhoto &>(obj));
      return true;
    case channelAdminLogEventActionToggleInvites::ID:
      func(static_cast<channelAdminLogEventActionToggleInvites &>(obj));
      return true;
    case channelAdminLogEventActionToggleSignatures::ID:
      func(static_cast<channelAdminLogEventActionToggleSignatures &>(obj));
      return true;
    case channelAdminLogEventActionUpdatePinned::ID:
      func(static_cast<channelAdminLogEventActionUpdatePinned &>(obj));
      return true;
    case channelAdminLogEventActionEditMessage::ID:
      func(static_cast<channelAdminLogEventActionEditMessage &>(obj));
      return true;
    case channelAdminLogEventActionDeleteMessage::ID:
      func(static_cast<channelAdminLogEventActionDeleteMessage &>(obj));
      return true;
    case channelAdminLogEventActionParticipantJoin::ID:
      func(static_cast<channelAdminLogEventActionParticipantJoin &>(obj));
      return true;
    case channelAdminLogEventActionParticipantLeave::ID:
      func(static_cast<channelAdminLogEventActionParticipantLeave &>(obj));
      return true;
    case channelAdminLogEventActionParticipantInvite::ID:
      func(static_cast<channelAdminLogEventActionParticipantInvite &>(obj));
      return true;
    case channelAdminLogEventActionParticipantToggleBan::ID:
      func(static_cast<channelAdminLogEventActionParticipantToggleBan &>(obj));
      return true;
    case channelAdminLogEventActionParticipantToggleAdmin::ID:
      func(static_cast<channelAdminLogEventActionParticipantToggleAdmin &>(obj));
      return true;
    case channelAdminLogEventActionChangeStickerSet::ID:
      func(static_cast<channelAdminLogEventActionChangeStickerSet &>(obj));
      return true;
    case channelAdminLogEventActionTogglePreHistoryHidden::ID:
      func(static_cast<channelAdminLogEventActionTogglePreHistoryHidden &>(obj));
      return true;
    case channelAdminLogEventsFilter::ID:
      func(static_cast<channelAdminLogEventsFilter &>(obj));
      return true;
    case channelAdminRights::ID:
      func(static_cast<channelAdminRights &>(obj));
      return true;
    case channelBannedRights::ID:
      func(static_cast<channelBannedRights &>(obj));
      return true;
    case channelMessagesFilterEmpty::ID:
      func(static_cast<channelMessagesFilterEmpty &>(obj));
      return true;
    case channelMessagesFilter::ID:
      func(static_cast<channelMessagesFilter &>(obj));
      return true;
    case channelParticipant::ID:
      func(static_cast<channelParticipant &>(obj));
      return true;
    case channelParticipantSelf::ID:
      func(static_cast<channelParticipantSelf &>(obj));
      return true;
    case channelParticipantCreator::ID:
      func(static_cast<channelParticipantCreator &>(obj));
      return true;
    case channelParticipantAdmin::ID:
      func(static_cast<channelParticipantAdmin &>(obj));
      return true;
    case channelParticipantBanned::ID:
      func(static_cast<channelParticipantBanned &>(obj));
      return true;
    case channelParticipantsRecent::ID:
      func(static_cast<channelParticipantsRecent &>(obj));
      return true;
    case channelParticipantsAdmins::ID:
      func(static_cast<channelParticipantsAdmins &>(obj));
      return true;
    case channelParticipantsKicked::ID:
      func(static_cast<channelParticipantsKicked &>(obj));
      return true;
    case channelParticipantsBots::ID:
      func(static_cast<channelParticipantsBots &>(obj));
      return true;
    case channelParticipantsBanned::ID:
      func(static_cast<channelParticipantsBanned &>(obj));
      return true;
    case channelParticipantsSearch::ID:
      func(static_cast<channelParticipantsSearch &>(obj));
      return true;
    case chatEmpty::ID:
      func(static_cast<chatEmpty &>(obj));
      return true;
    case chat::ID:
      func(static_cast<chat &>(obj));
      return true;
    case chatForbidden::ID:
      func(static_cast<chatForbidden &>(obj));
      return true;
    case channel::ID:
      func(static_cast<channel &>(obj));
      return true;
    case channelForbidden::ID:
      func(static_cast<channelForbidden &>(obj));
      return true;
    case chatFull::ID:
      func(static_cast<chatFull &>(obj));
      return true;
    case channelFull::ID:
      func(static_cast<channelFull &>(obj));
      return true;
    case chatInviteAlready::ID:
      func(static_cast<chatInviteAlready &>(obj));
      return true;
    case chatInvite::ID:
      func(static_cast<chatInvite &>(obj));
      return true;
    case chatParticipant::ID:
      func(static_cast<chatParticipant &>(obj));
      return true;
    case chatParticipantCreator::ID:
      func(static_cast<chatParticipantCreator &>(obj));
      return true;
    case chatParticipantAdmin::ID:
      func(static_cast<chatParticipantAdmin &>(obj));
      return true;
    case chatParticipantsForbidden::ID:
      func(static_cast<chatParticipantsForbidden &>(obj));
      return true;
    case chatParticipants::ID:
      func(static_cast<chatParticipants &>(obj));
      return true;
    case chatPhotoEmpty::ID:
      func(static_cast<chatPhotoEmpty &>(obj));
      return true;
    case chatPhoto::ID:
      func(static_cast<chatPhoto &>(obj));
      return true;
    case config::ID:
      func(static_cast<config &>(obj));
      return true;
    case contact::ID:
      func(static_cast<contact &>(obj));
      return true;
    case contactBlocked::ID:
      func(static_cast<contactBlocked &>(obj));
      return true;
    case contactLinkUnknown::ID:
      func(static_cast<contactLinkUnknown &>(obj));
      return true;
    case contactLinkNone::ID:
      func(static_cast<contactLinkNone &>(obj));
      return true;
    case contactLinkHasPhone::ID:
      func(static_cast<contactLinkHasPhone &>(obj));
      return true;
    case contactLinkContact::ID:
      func(static_cast<contactLinkContact &>(obj));
      return true;
    case contactStatus::ID:
      func(static_cast<contactStatus &>(obj));
      return true;
    case dataJSON::ID:
      func(static_cast<dataJSON &>(obj));
      return true;
    case dcOption::ID:
      func(static_cast<dcOption &>(obj));
      return true;
    case dialog::ID:
      func(static_cast<dialog &>(obj));
      return true;
    case dialogPeer::ID:
      func(static_cast<dialogPeer &>(obj));
      return true;
    case documentEmpty::ID:
      func(static_cast<documentEmpty &>(obj));
      return true;
    case document::ID:
      func(static_cast<document &>(obj));
      return true;
    case documentAttributeImageSize::ID:
      func(static_cast<documentAttributeImageSize &>(obj));
      return true;
    case documentAttributeAnimated::ID:
      func(static_cast<documentAttributeAnimated &>(obj));
      return true;
    case documentAttributeSticker::ID:
      func(static_cast<documentAttributeSticker &>(obj));
      return true;
    case documentAttributeVideo::ID:
      func(static_cast<documentAttributeVideo &>(obj));
      return true;
    case documentAttributeAudio::ID:
      func(static_cast<documentAttributeAudio &>(obj));
      return true;
    case documentAttributeFilename::ID:
      func(static_cast<documentAttributeFilename &>(obj));
      return true;
    case documentAttributeHasStickers::ID:
      func(static_cast<documentAttributeHasStickers &>(obj));
      return true;
    case draftMessageEmpty::ID:
      func(static_cast<draftMessageEmpty &>(obj));
      return true;
    case draftMessage::ID:
      func(static_cast<draftMessage &>(obj));
      return true;
    case encryptedChatEmpty::ID:
      func(static_cast<encryptedChatEmpty &>(obj));
      return true;
    case encryptedChatWaiting::ID:
      func(static_cast<encryptedChatWaiting &>(obj));
      return true;
    case encryptedChatRequested::ID:
      func(static_cast<encryptedChatRequested &>(obj));
      return true;
    case encryptedChat::ID:
      func(static_cast<encryptedChat &>(obj));
      return true;
    case encryptedChatDiscarded::ID:
      func(static_cast<encryptedChatDiscarded &>(obj));
      return true;
    case encryptedFileEmpty::ID:
      func(static_cast<encryptedFileEmpty &>(obj));
      return true;
    case encryptedFile::ID:
      func(static_cast<encryptedFile &>(obj));
      return true;
    case encryptedMessage::ID:
      func(static_cast<encryptedMessage &>(obj));
      return true;
    case encryptedMessageService::ID:
      func(static_cast<encryptedMessageService &>(obj));
      return true;
    case error::ID:
      func(static_cast<error &>(obj));
      return true;
    case chatInviteEmpty::ID:
      func(static_cast<chatInviteEmpty &>(obj));
      return true;
    case chatInviteExported::ID:
      func(static_cast<chatInviteExported &>(obj));
      return true;
    case exportedMessageLink::ID:
      func(static_cast<exportedMessageLink &>(obj));
      return true;
    case fileHash::ID:
      func(static_cast<fileHash &>(obj));
      return true;
    case fileLocationUnavailable::ID:
      func(static_cast<fileLocationUnavailable &>(obj));
      return true;
    case fileLocation::ID:
      func(static_cast<fileLocation &>(obj));
      return true;
    case foundGif::ID:
      func(static_cast<foundGif &>(obj));
      return true;
    case foundGifCached::ID:
      func(static_cast<foundGifCached &>(obj));
      return true;
    case game::ID:
      func(static_cast<game &>(obj));
      return true;
    case geoPointEmpty::ID:
      func(static_cast<geoPointEmpty &>(obj));
      return true;
    case geoPoint::ID:
      func(static_cast<geoPoint &>(obj));
      return true;
    case highScore::ID:
      func(static_cast<highScore &>(obj));
      return true;
    case importedContact::ID:
      func(static_cast<importedContact &>(obj));
      return true;
    case inlineBotSwitchPM::ID:
      func(static_cast<inlineBotSwitchPM &>(obj));
      return true;
    case inputAppEvent::ID:
      func(static_cast<inputAppEvent &>(obj));
      return true;
    case inputBotInlineMessageMediaAuto::ID:
      func(static_cast<inputBotInlineMessageMediaAuto &>(obj));
      return true;
    case inputBotInlineMessageText::ID:
      func(static_cast<inputBotInlineMessageText &>(obj));
      return true;
    case inputBotInlineMessageMediaGeo::ID:
      func(static_cast<inputBotInlineMessageMediaGeo &>(obj));
      return true;
    case inputBotInlineMessageMediaVenue::ID:
      func(static_cast<inputBotInlineMessageMediaVenue &>(obj));
      return true;
    case inputBotInlineMessageMediaContact::ID:
      func(static_cast<inputBotInlineMessageMediaContact &>(obj));
      return true;
    case inputBotInlineMessageGame::ID:
      func(static_cast<inputBotInlineMessageGame &>(obj));
      return true;
    case inputBotInlineMessageID::ID:
      func(static_cast<inputBotInlineMessageID &>(obj));
      return true;
    case inputBotInlineResult::ID:
      func(static_cast<inputBotInlineResult &>(obj));
      return true;
    case inputBotInlineResultPhoto::ID:
      func(static_cast<inputBotInlineResultPhoto &>(obj));
      return true;
    case inputBotInlineResultDocument::ID:
      func(static_cast<inputBotInlineResultDocument &>(obj));
      return true;
    case inputBotInlineResultGame::ID:
      func(static_cast<inputBotInlineResultGame &>(obj));
      return true;
    case inputChannelEmpty::ID:
      func(static_cast<inputChannelEmpty &>(obj));
      return true;
    case inputChannel::ID:
      func(static_cast<inputChannel &>(obj));
      return true;
    case inputChatPhotoEmpty::ID:
      func(static_cast<inputChatPhotoEmpty &>(obj));
      return true;
    case inputChatUploadedPhoto::ID:
      func(static_cast<inputChatUploadedPhoto &>(obj));
      return true;
    case inputChatPhoto::ID:
      func(static_cast<inputChatPhoto &>(obj));
      return true;
    case inputCheckPasswordEmpty::ID:
      func(static_cast<inputCheckPasswordEmpty &>(obj));
      return true;
    case inputCheckPasswordSRP::ID:
      func(static_cast<inputCheckPasswordSRP &>(obj));
      return true;
    case inputClientProxy::ID:
      func(static_cast<inputClientProxy &>(obj));
      return true;
    case inputPhoneContact::ID:
      func(static_cast<inputPhoneContact &>(obj));
      return true;
    case inputDialogPeer::ID:
      func(static_cast<inputDialogPeer &>(obj));
      return true;
    case inputDocumentEmpty::ID:
      func(static_cast<inputDocumentEmpty &>(obj));
      return true;
    case inputDocument::ID:
      func(static_cast<inputDocument &>(obj));
      return true;
    case inputEncryptedChat::ID:
      func(static_cast<inputEncryptedChat &>(obj));
      return true;
    case inputEncryptedFileEmpty::ID:
      func(static_cast<inputEncryptedFileEmpty &>(obj));
      return true;
    case inputEncryptedFileUploaded::ID:
      func(static_cast<inputEncryptedFileUploaded &>(obj));
      return true;
    case inputEncryptedFile::ID:
      func(static_cast<inputEncryptedFile &>(obj));
      return true;
    case inputEncryptedFileBigUploaded::ID:
      func(static_cast<inputEncryptedFileBigUploaded &>(obj));
      return true;
    case inputFile::ID:
      func(static_cast<inputFile &>(obj));
      return true;
    case inputFileBig::ID:
      func(static_cast<inputFileBig &>(obj));
      return true;
    case inputFileLocation::ID:
      func(static_cast<inputFileLocation &>(obj));
      return true;
    case inputEncryptedFileLocation::ID:
      func(static_cast<inputEncryptedFileLocation &>(obj));
      return true;
    case inputDocumentFileLocation::ID:
      func(static_cast<inputDocumentFileLocation &>(obj));
      return true;
    case inputSecureFileLocation::ID:
      func(static_cast<inputSecureFileLocation &>(obj));
      return true;
    case inputTakeoutFileLocation::ID:
      func(static_cast<inputTakeoutFileLocation &>(obj));
      return true;
    case inputGameID::ID:
      func(static_cast<inputGameID &>(obj));
      return true;
    case inputGameShortName::ID:
      func(static_cast<inputGameShortName &>(obj));
      return true;
    case inputGeoPointEmpty::ID:
      func(static_cast<inputGeoPointEmpty &>(obj));
      return true;
    case inputGeoPoint::ID:
      func(static_cast<inputGeoPoint &>(obj));
      return true;
    case inputMediaEmpty::ID:
      func(static_cast<inputMediaEmpty &>(obj));
      return true;
    case inputMediaUploadedPhoto::ID:
      func(static_cast<inputMediaUploadedPhoto &>(obj));
      return true;
    case inputMediaPhoto::ID:
      func(static_cast<inputMediaPhoto &>(obj));
      return true;
    case inputMediaGeoPoint::ID:
      func(static_cast<inputMediaGeoPoint &>(obj));
      return true;
    case inputMediaContact::ID:
      func(static_cast<inputMediaContact &>(obj));
      return true;
    case inputMediaUploadedDocument::ID:
      func(static_cast<inputMediaUploadedDocument &>(obj));
      return true;
    case inputMediaDocument::ID:
      func(static_cast<inputMediaDocument &>(obj));
      return true;
    case inputMediaVenue::ID:
      func(static_cast<inputMediaVenue &>(obj));
      return true;
    case inputMediaGifExternal::ID:
      func(static_cast<inputMediaGifExternal &>(obj));
      return true;
    case inputMediaPhotoExternal::ID:
      func(static_cast<inputMediaPhotoExternal &>(obj));
      return true;
    case inputMediaDocumentExternal::ID:
      func(static_cast<inputMediaDocumentExternal &>(obj));
      return true;
    case inputMediaGame::ID:
      func(static_cast<inputMediaGame &>(obj));
      return true;
    case inputMediaInvoice::ID:
      func(static_cast<inputMediaInvoice &>(obj));
      return true;
    case inputMediaGeoLive::ID:
      func(static_cast<inputMediaGeoLive &>(obj));
      return true;
    case inputMessageID::ID:
      func(static_cast<inputMessageID &>(obj));
      return true;
    case inputMessageReplyTo::ID:
      func(static_cast<inputMessageReplyTo &>(obj));
      return true;
    case inputMessagePinned::ID:
      func(static_cast<inputMessagePinned &>(obj));
      return true;
    case inputNotifyPeer::ID:
      func(static_cast<inputNotifyPeer &>(obj));
      return true;
    case inputNotifyUsers::ID:
      func(static_cast<inputNotifyUsers &>(obj));
      return true;
    case inputNotifyChats::ID:
      func(static_cast<inputNotifyChats &>(obj));
      return true;
    case inputPaymentCredentialsSaved::ID:
      func(static_cast<inputPaymentCredentialsSaved &>(obj));
      return true;
    case inputPaymentCredentials::ID:
      func(static_cast<inputPaymentCredentials &>(obj));
      return true;
    case inputPaymentCredentialsApplePay::ID:
      func(static_cast<inputPaymentCredentialsApplePay &>(obj));
      return true;
    case inputPaymentCredentialsAndroidPay::ID:
      func(static_cast<inputPaymentCredentialsAndroidPay &>(obj));
      return true;
    case inputPeerEmpty::ID:
      func(static_cast<inputPeerEmpty &>(obj));
      return true;
    case inputPeerSelf::ID:
      func(static_cast<inputPeerSelf &>(obj));
      return true;
    case inputPeerChat::ID:
      func(static_cast<inputPeerChat &>(obj));
      return true;
    case inputPeerUser::ID:
      func(static_cast<inputPeerUser &>(obj));
      return true;
    case inputPeerChannel::ID:
      func(static_cast<inputPeerChannel &>(obj));
      return true;
    case inputPeerNotifySettings::ID:
      func(static_cast<inputPeerNotifySettings &>(obj));
      return true;
    case inputPhoneCall::ID:
      func(static_cast<inputPhoneCall &>(obj));
      return true;
    case inputPhotoEmpty::ID:
      func(static_cast<inputPhotoEmpty &>(obj));
      return true;
    case inputPhoto::ID:
      func(static_cast<inputPhoto &>(obj));
      return true;
    case inputPrivacyKeyStatusTimestamp::ID:
      func(static_cast<inputPrivacyKeyStatusTimestamp &>(obj));
      return true;
    case inputPrivacyKeyChatInvite::ID:
      func(static_cast<inputPrivacyKeyChatInvite &>(obj));
      return true;
    case inputPrivacyKeyPhoneCall::ID:
      func(static_cast<inputPrivacyKeyPhoneCall &>(obj));
      return true;
    case inputPrivacyValueAllowContacts::ID:
      func(static_cast<inputPrivacyValueAllowContacts &>(obj));
      return true;
    case inputPrivacyValueAllowAll::ID:
      func(static_cast<inputPrivacyValueAllowAll &>(obj));
      return true;
    case inputPrivacyValueAllowUsers::ID:
      func(static_cast<inputPrivacyValueAllowUsers &>(obj));
      return true;
    case inputPrivacyValueDisallowContacts::ID:
      func(static_cast<inputPrivacyValueDisallowContacts &>(obj));
      return true;
    case inputPrivacyValueDisallowAll::ID:
      func(static_cast<inputPrivacyValueDisallowAll &>(obj));
      return true;
    case inputPrivacyValueDisallowUsers::ID:
      func(static_cast<inputPrivacyValueDisallowUsers &>(obj));
      return true;
    case inputSecureFileUploaded::ID:
      func(static_cast<inputSecureFileUploaded &>(obj));
      return true;
    case inputSecureFile::ID:
      func(static_cast<inputSecureFile &>(obj));
      return true;
    case inputSecureValue::ID:
      func(static_cast<inputSecureValue &>(obj));
      return true;
    case inputSingleMedia::ID:
      func(static_cast<inputSingleMedia &>(obj));
      return true;
    case inputStickerSetEmpty::ID:
      func(static_cast<inputStickerSetEmpty &>(obj));
      return true;
    case inputStickerSetID::ID:
      func(static_cast<inputStickerSetID &>(obj));
      return true;
    case inputStickerSetShortName::ID:
      func(static_cast<inputStickerSetShortName &>(obj));
      return true;
    case inputStickerSetItem::ID:
      func(static_cast<inputStickerSetItem &>(obj));
      return true;
    case inputStickeredMediaPhoto::ID:
      func(static_cast<inputStickeredMediaPhoto &>(obj));
      return true;
    case inputStickeredMediaDocument::ID:
      func(static_cast<inputStickeredMediaDocument &>(obj));
      return true;
    case inputUserEmpty::ID:
      func(static_cast<inputUserEmpty &>(obj));
      return true;
    case inputUserSelf::ID:
      func(static_cast<inputUserSelf &>(obj));
      return true;
    case inputUser::ID:
      func(static_cast<inputUser &>(obj));
      return true;
    case inputWebDocument::ID:
      func(static_cast<inputWebDocument &>(obj));
      return true;
    case inputWebFileLocation::ID:
      func(static_cast<inputWebFileLocation &>(obj));
      return true;
    case inputWebFileGeoPointLocation::ID:
      func(static_cast<inputWebFileGeoPointLocation &>(obj));
      return true;
    case invoice::ID:
      func(static_cast<invoice &>(obj));
      return true;
    case ipPort::ID:
      func(static_cast<ipPort &>(obj));
      return true;
    case ipPortSecret::ID:
      func(static_cast<ipPortSecret &>(obj));
      return true;
    case keyboardButton::ID:
      func(static_cast<keyboardButton &>(obj));
      return true;
    case keyboardButtonUrl::ID:
      func(static_cast<keyboardButtonUrl &>(obj));
      return true;
    case keyboardButtonCallback::ID:
      func(static_cast<keyboardButtonCallback &>(obj));
      return true;
    case keyboardButtonRequestPhone::ID:
      func(static_cast<keyboardButtonRequestPhone &>(obj));
      return true;
    case keyboardButtonRequestGeoLocation::ID:
      func(static_cast<keyboardButtonRequestGeoLocation &>(obj));
      return true;
    case keyboardButtonSwitchInline::ID:
      func(static_cast<keyboardButtonSwitchInline &>(obj));
      return true;
    case keyboardButtonGame::ID:
      func(static_cast<keyboardButtonGame &>(obj));
      return true;
    case keyboardButtonBuy::ID:
      func(static_cast<keyboardButtonBuy &>(obj));
      return true;
    case keyboardButtonRow::ID:
      func(static_cast<keyboardButtonRow &>(obj));
      return true;
    case labeledPrice::ID:
      func(static_cast<labeledPrice &>(obj));
      return true;
    case langPackDifference::ID:
      func(static_cast<langPackDifference &>(obj));
      return true;
    case langPackLanguage::ID:
      func(static_cast<langPackLanguage &>(obj));
      return true;
    case langPackString::ID:
      func(static_cast<langPackString &>(obj));
      return true;
    case langPackStringPluralized::ID:
      func(static_cast<langPackStringPluralized &>(obj));
      return true;
    case langPackStringDeleted::ID:
      func(static_cast<langPackStringDeleted &>(obj));
      return true;
    case maskCoords::ID:
      func(static_cast<maskCoords &>(obj));
      return true;
    case messageEmpty::ID:
      func(static_cast<messageEmpty &>(obj));
      return true;
    case message::ID:
      func(static_cast<message &>(obj));
      return true;
    case messageService::ID:
      func(static_cast<messageService &>(obj));
      return true;
    case messageActionEmpty::ID:
      func(static_cast<messageActionEmpty &>(obj));
      return true;
    case messageActionChatCreate::ID:
      func(static_cast<messageActionChatCreate &>(obj));
      return true;
    case messageActionChatEditTitle::ID:
      func(static_cast<messageActionChatEditTitle &>(obj));
      return true;
    case messageActionChatEditPhoto::ID:
      func(static_cast<messageActionChatEditPhoto &>(obj));
      return true;
    case messageActionChatDeletePhoto::ID:
      func(static_cast<messageActionChatDeletePhoto &>(obj));
      return true;
    case messageActionChatAddUser::ID:
      func(static_cast<messageActionChatAddUser &>(obj));
      return true;
    case messageActionChatDeleteUser::ID:
      func(static_cast<messageActionChatDeleteUser &>(obj));
      return true;
    case messageActionChatJoinedByLink::ID:
      func(static_cast<messageActionChatJoinedByLink &>(obj));
      return true;
    case messageActionChannelCreate::ID:
      func(static_cast<messageActionChannelCreate &>(obj));
      return true;
    case messageActionChatMigrateTo::ID:
      func(static_cast<messageActionChatMigrateTo &>(obj));
      return true;
    case messageActionChannelMigrateFrom::ID:
      func(static_cast<messageActionChannelMigrateFrom &>(obj));
      return true;
    case messageActionPinMessage::ID:
      func(static_cast<messageActionPinMessage &>(obj));
      return true;
    case messageActionHistoryClear::ID:
      func(static_cast<messageActionHistoryClear &>(obj));
      return true;
    case messageActionGameScore::ID:
      func(static_cast<messageActionGameScore &>(obj));
      return true;
    case messageActionPaymentSentMe::ID:
      func(static_cast<messageActionPaymentSentMe &>(obj));
      return true;
    case messageActionPaymentSent::ID:
      func(static_cast<messageActionPaymentSent &>(obj));
      return true;
    case messageActionPhoneCall::ID:
      func(static_cast<messageActionPhoneCall &>(obj));
      return true;
    case messageActionScreenshotTaken::ID:
      func(static_cast<messageActionScreenshotTaken &>(obj));
      return true;
    case messageActionCustomAction::ID:
      func(static_cast<messageActionCustomAction &>(obj));
      return true;
    case messageActionBotAllowed::ID:
      func(static_cast<messageActionBotAllowed &>(obj));
      return true;
    case messageActionSecureValuesSentMe::ID:
      func(static_cast<messageActionSecureValuesSentMe &>(obj));
      return true;
    case messageActionSecureValuesSent::ID:
      func(static_cast<messageActionSecureValuesSent &>(obj));
      return true;
    case messageEntityUnknown::ID:
      func(static_cast<messageEntityUnknown &>(obj));
      return true;
    case messageEntityMention::ID:
      func(static_cast<messageEntityMention &>(obj));
      return true;
    case messageEntityHashtag::ID:
      func(static_cast<messageEntityHashtag &>(obj));
      return true;
    case messageEntityBotCommand::ID:
      func(static_cast<messageEntityBotCommand &>(obj));
      return true;
    case messageEntityUrl::ID:
      func(static_cast<messageEntityUrl &>(obj));
      return true;
    case messageEntityEmail::ID:
      func(static_cast<messageEntityEmail &>(obj));
      return true;
    case messageEntityBold::ID:
      func(static_cast<messageEntityBold &>(obj));
      return true;
    case messageEntityItalic::ID:
      func(static_cast<messageEntityItalic &>(obj));
      return true;
    case messageEntityCode::ID:
      func(static_cast<messageEntityCode &>(obj));
      return true;
    case messageEntityPre::ID:
      func(static_cast<messageEntityPre &>(obj));
      return true;
    case messageEntityTextUrl::ID:
      func(static_cast<messageEntityTextUrl &>(obj));
      return true;
    case messageEntityMentionName::ID:
      func(static_cast<messageEntityMentionName &>(obj));
      return true;
    case inputMessageEntityMentionName::ID:
      func(static_cast<inputMessageEntityMentionName &>(obj));
      return true;
    case messageEntityPhone::ID:
      func(static_cast<messageEntityPhone &>(obj));
      return true;
    case messageEntityCashtag::ID:
      func(static_cast<messageEntityCashtag &>(obj));
      return true;
    case messageFwdHeader::ID:
      func(static_cast<messageFwdHeader &>(obj));
      return true;
    case messageMediaEmpty::ID:
      func(static_cast<messageMediaEmpty &>(obj));
      return true;
    case messageMediaPhoto::ID:
      func(static_cast<messageMediaPhoto &>(obj));
      return true;
    case messageMediaGeo::ID:
      func(static_cast<messageMediaGeo &>(obj));
      return true;
    case messageMediaContact::ID:
      func(static_cast<messageMediaContact &>(obj));
      return true;
    case messageMediaUnsupported::ID:
      func(static_cast<messageMediaUnsupported &>(obj));
      return true;
    case messageMediaDocument::ID:
      func(static_cast<messageMediaDocument &>(obj));
      return true;
    case messageMediaWebPage::ID:
      func(static_cast<messageMediaWebPage &>(obj));
      return true;
    case messageMediaVenue::ID:
      func(static_cast<messageMediaVenue &>(obj));
      return true;
    case messageMediaGame::ID:
      func(static_cast<messageMediaGame &>(obj));
      return true;
    case messageMediaInvoice::ID:
      func(static_cast<messageMediaInvoice &>(obj));
      return true;
    case messageMediaGeoLive::ID:
      func(static_cast<messageMediaGeoLive &>(obj));
      return true;
    case messageRange::ID:
      func(static_cast<messageRange &>(obj));
      return true;
    case inputMessagesFilterEmpty::ID:
      func(static_cast<inputMessagesFilterEmpty &>(obj));
      return true;
    case inputMessagesFilterPhotos::ID:
      func(static_cast<inputMessagesFilterPhotos &>(obj));
      return true;
    case inputMessagesFilterVideo::ID:
      func(static_cast<inputMessagesFilterVideo &>(obj));
      return true;
    case inputMessagesFilterPhotoVideo::ID:
      func(static_cast<inputMessagesFilterPhotoVideo &>(obj));
      return true;
    case inputMessagesFilterDocument::ID:
      func(static_cast<inputMessagesFilterDocument &>(obj));
      return true;
    case inputMessagesFilterUrl::ID:
      func(static_cast<inputMessagesFilterUrl &>(obj));
      return true;
    case inputMessagesFilterGif::ID:
      func(static_cast<inputMessagesFilterGif &>(obj));
      return true;
    case inputMessagesFilterVoice::ID:
      func(static_cast<inputMessagesFilterVoice &>(obj));
      return true;
    case inputMessagesFilterMusic::ID:
      func(static_cast<inputMessagesFilterMusic &>(obj));
      return true;
    case inputMessagesFilterChatPhotos::ID:
      func(static_cast<inputMessagesFilterChatPhotos &>(obj));
      return true;
    case inputMessagesFilterPhoneCalls::ID:
      func(static_cast<inputMessagesFilterPhoneCalls &>(obj));
      return true;
    case inputMessagesFilterRoundVoice::ID:
      func(static_cast<inputMessagesFilterRoundVoice &>(obj));
      return true;
    case inputMessagesFilterRoundVideo::ID:
      func(static_cast<inputMessagesFilterRoundVideo &>(obj));
      return true;
    case inputMessagesFilterMyMentions::ID:
      func(static_cast<inputMessagesFilterMyMentions &>(obj));
      return true;
    case inputMessagesFilterGeo::ID:
      func(static_cast<inputMessagesFilterGeo &>(obj));
      return true;
    case inputMessagesFilterContacts::ID:
      func(static_cast<inputMessagesFilterContacts &>(obj));
      return true;
    case nearestDc::ID:
      func(static_cast<nearestDc &>(obj));
      return true;
    case notifyPeer::ID:
      func(static_cast<notifyPeer &>(obj));
      return true;
    case notifyUsers::ID:
      func(static_cast<notifyUsers &>(obj));
      return true;
    case notifyChats::ID:
      func(static_cast<notifyChats &>(obj));
      return true;
    case pagePart::ID:
      func(static_cast<pagePart &>(obj));
      return true;
    case pageFull::ID:
      func(static_cast<pageFull &>(obj));
      return true;
    case pageBlockUnsupported::ID:
      func(static_cast<pageBlockUnsupported &>(obj));
      return true;
    case pageBlockTitle::ID:
      func(static_cast<pageBlockTitle &>(obj));
      return true;
    case pageBlockSubtitle::ID:
      func(static_cast<pageBlockSubtitle &>(obj));
      return true;
    case pageBlockAuthorDate::ID:
      func(static_cast<pageBlockAuthorDate &>(obj));
      return true;
    case pageBlockHeader::ID:
      func(static_cast<pageBlockHeader &>(obj));
      return true;
    case pageBlockSubheader::ID:
      func(static_cast<pageBlockSubheader &>(obj));
      return true;
    case pageBlockParagraph::ID:
      func(static_cast<pageBlockParagraph &>(obj));
      return true;
    case pageBlockPreformatted::ID:
      func(static_cast<pageBlockPreformatted &>(obj));
      return true;
    case pageBlockFooter::ID:
      func(static_cast<pageBlockFooter &>(obj));
      return true;
    case pageBlockDivider::ID:
      func(static_cast<pageBlockDivider &>(obj));
      return true;
    case pageBlockAnchor::ID:
      func(static_cast<pageBlockAnchor &>(obj));
      return true;
    case pageBlockList::ID:
      func(static_cast<pageBlockList &>(obj));
      return true;
    case pageBlockBlockquote::ID:
      func(static_cast<pageBlockBlockquote &>(obj));
      return true;
    case pageBlockPullquote::ID:
      func(static_cast<pageBlockPullquote &>(obj));
      return true;
    case pageBlockPhoto::ID:
      func(static_cast<pageBlockPhoto &>(obj));
      return true;
    case pageBlockVideo::ID:
      func(static_cast<pageBlockVideo &>(obj));
      return true;
    case pageBlockCover::ID:
      func(static_cast<pageBlockCover &>(obj));
      return true;
    case pageBlockEmbed::ID:
      func(static_cast<pageBlockEmbed &>(obj));
      return true;
    case pageBlockEmbedPost::ID:
      func(static_cast<pageBlockEmbedPost &>(obj));
      return true;
    case pageBlockCollage::ID:
      func(static_cast<pageBlockCollage &>(obj));
      return true;
    case pageBlockSlideshow::ID:
      func(static_cast<pageBlockSlideshow &>(obj));
      return true;
    case pageBlockChannel::ID:
      func(static_cast<pageBlockChannel &>(obj));
      return true;
    case pageBlockAudio::ID:
      func(static_cast<pageBlockAudio &>(obj));
      return true;
    case passwordKdfAlgoUnknown::ID:
      func(static_cast<passwordKdfAlgoUnknown &>(obj));
      return true;
    case passwordKdfAlgoSHA256SHA256PBKDF2HMACSHA512iter100000SHA256ModPow::ID:
      func(static_cast<passwordKdfAlgoSHA256SHA256PBKDF2HMACSHA512iter100000SHA256ModPow &>(obj));
      return true;
    case paymentCharge::ID:
      func(static_cast<paymentCharge &>(obj));
      return true;
    case paymentRequestedInfo::ID:
      func(static_cast<paymentRequestedInfo &>(obj));
      return true;
    case paymentSavedCredentialsCard::ID:
      func(static_cast<paymentSavedCredentialsCard &>(obj));
      return true;
    case peerUser::ID:
      func(static_cast<peerUser &>(obj));
      return true;
    case peerChat::ID:
      func(static_cast<peerChat &>(obj));
      return true;
    case peerChannel::ID:
      func(static_cast<peerChannel &>(obj));
      return true;
    case peerNotifySettings::ID:
      func(static_cast<peerNotifySettings &>(obj));
      return true;
    case peerSettings::ID:
      func(static_cast<peerSettings &>(obj));
      return true;
    case phoneCallEmpty::ID:
      func(static_cast<phoneCallEmpty &>(obj));
      return true;
    case phoneCallWaiting::ID:
      func(static_cast<phoneCallWaiting &>(obj));
      return true;
    case phoneCallRequested::ID:
      func(static_cast<phoneCallRequested &>(obj));
      return true;
    case phoneCallAccepted::ID:
      func(static_cast<phoneCallAccepted &>(obj));
      return true;
    case phoneCall::ID:
      func(static_cast<phoneCall &>(obj));
      return true;
    case phoneCallDiscarded::ID:
      func(static_cast<phoneCallDiscarded &>(obj));
      return true;
    case phoneCallDiscardReasonMissed::ID:
      func(static_cast<phoneCallDiscardReasonMissed &>(obj));
      return true;
    case phoneCallDiscardReasonDisconnect::ID:
      func(static_cast<phoneCallDiscardReasonDisconnect &>(obj));
      return true;
    case phoneCallDiscardReasonHangup::ID:
      func(static_cast<phoneCallDiscardReasonHangup &>(obj));
      return true;
    case phoneCallDiscardReasonBusy::ID:
      func(static_cast<phoneCallDiscardReasonBusy &>(obj));
      return true;
    case phoneCallProtocol::ID:
      func(static_cast<phoneCallProtocol &>(obj));
      return true;
    case phoneConnection::ID:
      func(static_cast<phoneConnection &>(obj));
      return true;
    case photoEmpty::ID:
      func(static_cast<photoEmpty &>(obj));
      return true;
    case photo::ID:
      func(static_cast<photo &>(obj));
      return true;
    case photoSizeEmpty::ID:
      func(static_cast<photoSizeEmpty &>(obj));
      return true;
    case photoSize::ID:
      func(static_cast<photoSize &>(obj));
      return true;
    case photoCachedSize::ID:
      func(static_cast<photoCachedSize &>(obj));
      return true;
    case popularContact::ID:
      func(static_cast<popularContact &>(obj));
      return true;
    case postAddress::ID:
      func(static_cast<postAddress &>(obj));
      return true;
    case privacyKeyStatusTimestamp::ID:
      func(static_cast<privacyKeyStatusTimestamp &>(obj));
      return true;
    case privacyKeyChatInvite::ID:
      func(static_cast<privacyKeyChatInvite &>(obj));
      return true;
    case privacyKeyPhoneCall::ID:
      func(static_cast<privacyKeyPhoneCall &>(obj));
      return true;
    case privacyValueAllowContacts::ID:
      func(static_cast<privacyValueAllowContacts &>(obj));
      return true;
    case privacyValueAllowAll::ID:
      func(static_cast<privacyValueAllowAll &>(obj));
      return true;
    case privacyValueAllowUsers::ID:
      func(static_cast<privacyValueAllowUsers &>(obj));
      return true;
    case privacyValueDisallowContacts::ID:
      func(static_cast<privacyValueDisallowContacts &>(obj));
      return true;
    case privacyValueDisallowAll::ID:
      func(static_cast<privacyValueDisallowAll &>(obj));
      return true;
    case privacyValueDisallowUsers::ID:
      func(static_cast<privacyValueDisallowUsers &>(obj));
      return true;
    case receivedNotifyMessage::ID:
      func(static_cast<receivedNotifyMessage &>(obj));
      return true;
    case recentMeUrlUnknown::ID:
      func(static_cast<recentMeUrlUnknown &>(obj));
      return true;
    case recentMeUrlUser::ID:
      func(static_cast<recentMeUrlUser &>(obj));
      return true;
    case recentMeUrlChat::ID:
      func(static_cast<recentMeUrlChat &>(obj));
      return true;
    case recentMeUrlChatInvite::ID:
      func(static_cast<recentMeUrlChatInvite &>(obj));
      return true;
    case recentMeUrlStickerSet::ID:
      func(static_cast<recentMeUrlStickerSet &>(obj));
      return true;
    case replyKeyboardHide::ID:
      func(static_cast<replyKeyboardHide &>(obj));
      return true;
    case replyKeyboardForceReply::ID:
      func(static_cast<replyKeyboardForceReply &>(obj));
      return true;
    case replyKeyboardMarkup::ID:
      func(static_cast<replyKeyboardMarkup &>(obj));
      return true;
    case replyInlineMarkup::ID:
      func(static_cast<replyInlineMarkup &>(obj));
      return true;
    case inputReportReasonSpam::ID:
      func(static_cast<inputReportReasonSpam &>(obj));
      return true;
    case inputReportReasonViolence::ID:
      func(static_cast<inputReportReasonViolence &>(obj));
      return true;
    case inputReportReasonPornography::ID:
      func(static_cast<inputReportReasonPornography &>(obj));
      return true;
    case inputReportReasonOther::ID:
      func(static_cast<inputReportReasonOther &>(obj));
      return true;
    case inputReportReasonCopyright::ID:
      func(static_cast<inputReportReasonCopyright &>(obj));
      return true;
    case textEmpty::ID:
      func(static_cast<textEmpty &>(obj));
      return true;
    case textPlain::ID:
      func(static_cast<textPlain &>(obj));
      return true;
    case textBold::ID:
      func(static_cast<textBold &>(obj));
      return true;
    case textItalic::ID:
      func(static_cast<textItalic &>(obj));
      return true;
    case textUnderline::ID:
      func(static_cast<textUnderline &>(obj));
      return true;
    case textStrike::ID:
      func(static_cast<textStrike &>(obj));
      return true;
    case textFixed::ID:
      func(static_cast<textFixed &>(obj));
      return true;
    case textUrl::ID:
      func(static_cast<textUrl &>(obj));
      return true;
    case textEmail::ID:
      func(static_cast<textEmail &>(obj));
      return true;
    case textConcat::ID:
      func(static_cast<textConcat &>(obj));
      return true;
    case savedPhoneContact::ID:
      func(static_cast<savedPhoneContact &>(obj));
      return true;
    case secureCredentialsEncrypted::ID:
      func(static_cast<secureCredentialsEncrypted &>(obj));
      return true;
    case secureData::ID:
      func(static_cast<secureData &>(obj));
      return true;
    case secureFileEmpty::ID:
      func(static_cast<secureFileEmpty &>(obj));
      return true;
    case secureFile::ID:
      func(static_cast<secureFile &>(obj));
      return true;
    case securePasswordKdfAlgoUnknown::ID:
      func(static_cast<securePasswordKdfAlgoUnknown &>(obj));
      return true;
    case securePasswordKdfAlgoPBKDF2HMACSHA512iter100000::ID:
      func(static_cast<securePasswordKdfAlgoPBKDF2HMACSHA512iter100000 &>(obj));
      return true;
    case securePasswordKdfAlgoSHA512::ID:
      func(static_cast<securePasswordKdfAlgoSHA512 &>(obj));
      return true;
    case securePlainPhone::ID:
      func(static_cast<securePlainPhone &>(obj));
      return true;
    case securePlainEmail::ID:
      func(static_cast<securePlainEmail &>(obj));
      return true;
    case secureRequiredType::ID:
      func(static_cast<secureRequiredType &>(obj));
      return true;
    case secureRequiredTypeOneOf::ID:
      func(static_cast<secureRequiredTypeOneOf &>(obj));
      return true;
    case secureSecretSettings::ID:
      func(static_cast<secureSecretSettings &>(obj));
      return true;
    case secureValue::ID:
      func(static_cast<secureValue &>(obj));
      return true;
    case secureValueErrorData::ID:
      func(static_cast<secureValueErrorData &>(obj));
      return true;
    case secureValueErrorFrontSide::ID:
      func(static_cast<secureValueErrorFrontSide &>(obj));
      return true;
    case secureValueErrorReverseSide::ID:
      func(static_cast<secureValueErrorReverseSide &>(obj));
      return true;
    case secureValueErrorSelfie::ID:
      func(static_cast<secureValueErrorSelfie &>(obj));
      return true;
    case secureValueErrorFile::ID:
      func(static_cast<secureValueErrorFile &>(obj));
      return true;
    case secureValueErrorFiles::ID:
      func(static_cast<secureValueErrorFiles &>(obj));
      return true;
    case secureValueError::ID:
      func(static_cast<secureValueError &>(obj));
      return true;
    case secureValueErrorTranslationFile::ID:
      func(static_cast<secureValueErrorTranslationFile &>(obj));
      return true;
    case secureValueErrorTranslationFiles::ID:
      func(static_cast<secureValueErrorTranslationFiles &>(obj));
      return true;
    case secureValueHash::ID:
      func(static_cast<secureValueHash &>(obj));
      return true;
    case secureValueTypePersonalDetails::ID:
      func(static_cast<secureValueTypePersonalDetails &>(obj));
      return true;
    case secureValueTypePassport::ID:
      func(static_cast<secureValueTypePassport &>(obj));
      return true;
    case secureValueTypeDriverLicense::ID:
      func(static_cast<secureValueTypeDriverLicense &>(obj));
      return true;
    case secureValueTypeIdentityCard::ID:
      func(static_cast<secureValueTypeIdentityCard &>(obj));
      return true;
    case secureValueTypeInternalPassport::ID:
      func(static_cast<secureValueTypeInternalPassport &>(obj));
      return true;
    case secureValueTypeAddress::ID:
      func(static_cast<secureValueTypeAddress &>(obj));
      return true;
    case secureValueTypeUtilityBill::ID:
      func(static_cast<secureValueTypeUtilityBill &>(obj));
      return true;
    case secureValueTypeBankStatement::ID:
      func(static_cast<secureValueTypeBankStatement &>(obj));
      return true;
    case secureValueTypeRentalAgreement::ID:
      func(static_cast<secureValueTypeRentalAgreement &>(obj));
      return true;
    case secureValueTypePassportRegistration::ID:
      func(static_cast<secureValueTypePassportRegistration &>(obj));
      return true;
    case secureValueTypeTemporaryRegistration::ID:
      func(static_cast<secureValueTypeTemporaryRegistration &>(obj));
      return true;
    case secureValueTypePhone::ID:
      func(static_cast<secureValueTypePhone &>(obj));
      return true;
    case secureValueTypeEmail::ID:
      func(static_cast<secureValueTypeEmail &>(obj));
      return true;
    case sendMessageTypingAction::ID:
      func(static_cast<sendMessageTypingAction &>(obj));
      return true;
    case sendMessageCancelAction::ID:
      func(static_cast<sendMessageCancelAction &>(obj));
      return true;
    case sendMessageRecordVideoAction::ID:
      func(static_cast<sendMessageRecordVideoAction &>(obj));
      return true;
    case sendMessageUploadVideoAction::ID:
      func(static_cast<sendMessageUploadVideoAction &>(obj));
      return true;
    case sendMessageRecordAudioAction::ID:
      func(static_cast<sendMessageRecordAudioAction &>(obj));
      return true;
    case sendMessageUploadAudioAction::ID:
      func(static_cast<sendMessageUploadAudioAction &>(obj));
      return true;
    case sendMessageUploadPhotoAction::ID:
      func(static_cast<sendMessageUploadPhotoAction &>(obj));
      return true;
    case sendMessageUploadDocumentAction::ID:
      func(static_cast<sendMessageUploadDocumentAction &>(obj));
      return true;
    case sendMessageGeoLocationAction::ID:
      func(static_cast<sendMessageGeoLocationAction &>(obj));
      return true;
    case sendMessageChooseContactAction::ID:
      func(static_cast<sendMessageChooseContactAction &>(obj));
      return true;
    case sendMessageGamePlayAction::ID:
      func(static_cast<sendMessageGamePlayAction &>(obj));
      return true;
    case sendMessageRecordRoundAction::ID:
      func(static_cast<sendMessageRecordRoundAction &>(obj));
      return true;
    case sendMessageUploadRoundAction::ID:
      func(static_cast<sendMessageUploadRoundAction &>(obj));
      return true;
    case shippingOption::ID:
      func(static_cast<shippingOption &>(obj));
      return true;
    case stickerPack::ID:
      func(static_cast<stickerPack &>(obj));
      return true;
    case stickerSet::ID:
      func(static_cast<stickerSet &>(obj));
      return true;
    case stickerSetCovered::ID:
      func(static_cast<stickerSetCovered &>(obj));
      return true;
    case stickerSetMultiCovered::ID:
      func(static_cast<stickerSetMultiCovered &>(obj));
      return true;
    case topPeer::ID:
      func(static_cast<topPeer &>(obj));
      return true;
    case topPeerCategoryBotsPM::ID:
      func(static_cast<topPeerCategoryBotsPM &>(obj));
      return true;
    case topPeerCategoryBotsInline::ID:
      func(static_cast<topPeerCategoryBotsInline &>(obj));
      return true;
    case topPeerCategoryCorrespondents::ID:
      func(static_cast<topPeerCategoryCorrespondents &>(obj));
      return true;
    case topPeerCategoryGroups::ID:
      func(static_cast<topPeerCategoryGroups &>(obj));
      return true;
    case topPeerCategoryChannels::ID:
      func(static_cast<topPeerCategoryChannels &>(obj));
      return true;
    case topPeerCategoryPhoneCalls::ID:
      func(static_cast<topPeerCategoryPhoneCalls &>(obj));
      return true;
    case topPeerCategoryPeers::ID:
      func(static_cast<topPeerCategoryPeers &>(obj));
      return true;
    case updateNewMessage::ID:
      func(static_cast<updateNewMessage &>(obj));
      return true;
    case updateMessageID::ID:
      func(static_cast<updateMessageID &>(obj));
      return true;
    case updateDeleteMessages::ID:
      func(static_cast<updateDeleteMessages &>(obj));
      return true;
    case updateUserTyping::ID:
      func(static_cast<updateUserTyping &>(obj));
      return true;
    case updateChatUserTyping::ID:
      func(static_cast<updateChatUserTyping &>(obj));
      return true;
    case updateChatParticipants::ID:
      func(static_cast<updateChatParticipants &>(obj));
      return true;
    case updateUserStatus::ID:
      func(static_cast<updateUserStatus &>(obj));
      return true;
    case updateUserName::ID:
      func(static_cast<updateUserName &>(obj));
      return true;
    case updateUserPhoto::ID:
      func(static_cast<updateUserPhoto &>(obj));
      return true;
    case updateContactRegistered::ID:
      func(static_cast<updateContactRegistered &>(obj));
      return true;
    case updateContactLink::ID:
      func(static_cast<updateContactLink &>(obj));
      return true;
    case updateNewEncryptedMessage::ID:
      func(static_cast<updateNewEncryptedMessage &>(obj));
      return true;
    case updateEncryptedChatTyping::ID:
      func(static_cast<updateEncryptedChatTyping &>(obj));
      return true;
    case updateEncryption::ID:
      func(static_cast<updateEncryption &>(obj));
      return true;
    case updateEncryptedMessagesRead::ID:
      func(static_cast<updateEncryptedMessagesRead &>(obj));
      return true;
    case updateChatParticipantAdd::ID:
      func(static_cast<updateChatParticipantAdd &>(obj));
      return true;
    case updateChatParticipantDelete::ID:
      func(static_cast<updateChatParticipantDelete &>(obj));
      return true;
    case updateDcOptions::ID:
      func(static_cast<updateDcOptions &>(obj));
      return true;
    case updateUserBlocked::ID:
      func(static_cast<updateUserBlocked &>(obj));
      return true;
    case updateNotifySettings::ID:
      func(static_cast<updateNotifySettings &>(obj));
      return true;
    case updateServiceNotification::ID:
      func(static_cast<updateServiceNotification &>(obj));
      return true;
    case updatePrivacy::ID:
      func(static_cast<updatePrivacy &>(obj));
      return true;
    case updateUserPhone::ID:
      func(static_cast<updateUserPhone &>(obj));
      return true;
    case updateReadHistoryInbox::ID:
      func(static_cast<updateReadHistoryInbox &>(obj));
      return true;
    case updateReadHistoryOutbox::ID:
      func(static_cast<updateReadHistoryOutbox &>(obj));
      return true;
    case updateWebPage::ID:
      func(static_cast<updateWebPage &>(obj));
      return true;
    case updateReadMessagesContents::ID:
      func(static_cast<updateReadMessagesContents &>(obj));
      return true;
    case updateChannelTooLong::ID:
      func(static_cast<updateChannelTooLong &>(obj));
      return true;
    case updateChannel::ID:
      func(static_cast<updateChannel &>(obj));
      return true;
    case updateNewChannelMessage::ID:
      func(static_cast<updateNewChannelMessage &>(obj));
      return true;
    case updateReadChannelInbox::ID:
      func(static_cast<updateReadChannelInbox &>(obj));
      return true;
    case updateDeleteChannelMessages::ID:
      func(static_cast<updateDeleteChannelMessages &>(obj));
      return true;
    case updateChannelMessageViews::ID:
      func(static_cast<updateChannelMessageViews &>(obj));
      return true;
    case updateChatAdmins::ID:
      func(static_cast<updateChatAdmins &>(obj));
      return true;
    case updateChatParticipantAdmin::ID:
      func(static_cast<updateChatParticipantAdmin &>(obj));
      return true;
    case updateNewStickerSet::ID:
      func(static_cast<updateNewStickerSet &>(obj));
      return true;
    case updateStickerSetsOrder::ID:
      func(static_cast<updateStickerSetsOrder &>(obj));
      return true;
    case updateStickerSets::ID:
      func(static_cast<updateStickerSets &>(obj));
      return true;
    case updateSavedGifs::ID:
      func(static_cast<updateSavedGifs &>(obj));
      return true;
    case updateBotInlineQuery::ID:
      func(static_cast<updateBotInlineQuery &>(obj));
      return true;
    case updateBotInlineSend::ID:
      func(static_cast<updateBotInlineSend &>(obj));
      return true;
    case updateEditChannelMessage::ID:
      func(static_cast<updateEditChannelMessage &>(obj));
      return true;
    case updateChannelPinnedMessage::ID:
      func(static_cast<updateChannelPinnedMessage &>(obj));
      return true;
    case updateBotCallbackQuery::ID:
      func(static_cast<updateBotCallbackQuery &>(obj));
      return true;
    case updateEditMessage::ID:
      func(static_cast<updateEditMessage &>(obj));
      return true;
    case updateInlineBotCallbackQuery::ID:
      func(static_cast<updateInlineBotCallbackQuery &>(obj));
      return true;
    case updateReadChannelOutbox::ID:
      func(static_cast<updateReadChannelOutbox &>(obj));
      return true;
    case updateDraftMessage::ID:
      func(static_cast<updateDraftMessage &>(obj));
      return true;
    case updateReadFeaturedStickers::ID:
      func(static_cast<updateReadFeaturedStickers &>(obj));
      return true;
    case updateRecentStickers::ID:
      func(static_cast<updateRecentStickers &>(obj));
      return true;
    case updateConfig::ID:
      func(static_cast<updateConfig &>(obj));
      return true;
    case updatePtsChanged::ID:
      func(static_cast<updatePtsChanged &>(obj));
      return true;
    case updateChannelWebPage::ID:
      func(static_cast<updateChannelWebPage &>(obj));
      return true;
    case updateDialogPinned::ID:
      func(static_cast<updateDialogPinned &>(obj));
      return true;
    case updatePinnedDialogs::ID:
      func(static_cast<updatePinnedDialogs &>(obj));
      return true;
    case updateBotWebhookJSON::ID:
      func(static_cast<updateBotWebhookJSON &>(obj));
      return true;
    case updateBotWebhookJSONQuery::ID:
      func(static_cast<updateBotWebhookJSONQuery &>(obj));
      return true;
    case updateBotShippingQuery::ID:
      func(static_cast<updateBotShippingQuery &>(obj));
      return true;
    case updateBotPrecheckoutQuery::ID:
      func(static_cast<updateBotPrecheckoutQuery &>(obj));
      return true;
    case updatePhoneCall::ID:
      func(static_cast<updatePhoneCall &>(obj));
      return true;
    case updateLangPackTooLong::ID:
      func(static_cast<updateLangPackTooLong &>(obj));
      return true;
    case updateLangPack::ID:
      func(static_cast<updateLangPack &>(obj));
      return true;
    case updateFavedStickers::ID:
      func(static_cast<updateFavedStickers &>(obj));
      return true;
    case updateChannelReadMessagesContents::ID:
      func(static_cast<updateChannelReadMessagesContents &>(obj));
      return true;
    case updateContactsReset::ID:
      func(static_cast<updateContactsReset &>(obj));
      return true;
    case updateChannelAvailableMessages::ID:
      func(static_cast<updateChannelAvailableMessages &>(obj));
      return true;
    case updateDialogUnreadMark::ID:
      func(static_cast<updateDialogUnreadMark &>(obj));
      return true;
    case updatesTooLong::ID:
      func(static_cast<updatesTooLong &>(obj));
      return true;
    case updateShortMessage::ID:
      func(static_cast<updateShortMessage &>(obj));
      return true;
    case updateShortChatMessage::ID:
      func(static_cast<updateShortChatMessage &>(obj));
      return true;
    case updateShort::ID:
      func(static_cast<updateShort &>(obj));
      return true;
    case updatesCombined::ID:
      func(static_cast<updatesCombined &>(obj));
      return true;
    case updates::ID:
      func(static_cast<updates &>(obj));
      return true;
    case updateShortSentMessage::ID:
      func(static_cast<updateShortSentMessage &>(obj));
      return true;
    case userEmpty::ID:
      func(static_cast<userEmpty &>(obj));
      return true;
    case user::ID:
      func(static_cast<user &>(obj));
      return true;
    case userFull::ID:
      func(static_cast<userFull &>(obj));
      return true;
    case userProfilePhotoEmpty::ID:
      func(static_cast<userProfilePhotoEmpty &>(obj));
      return true;
    case userProfilePhoto::ID:
      func(static_cast<userProfilePhoto &>(obj));
      return true;
    case userStatusEmpty::ID:
      func(static_cast<userStatusEmpty &>(obj));
      return true;
    case userStatusOnline::ID:
      func(static_cast<userStatusOnline &>(obj));
      return true;
    case userStatusOffline::ID:
      func(static_cast<userStatusOffline &>(obj));
      return true;
    case userStatusRecently::ID:
      func(static_cast<userStatusRecently &>(obj));
      return true;
    case userStatusLastWeek::ID:
      func(static_cast<userStatusLastWeek &>(obj));
      return true;
    case userStatusLastMonth::ID:
      func(static_cast<userStatusLastMonth &>(obj));
      return true;
    case wallPaper::ID:
      func(static_cast<wallPaper &>(obj));
      return true;
    case wallPaperSolid::ID:
      func(static_cast<wallPaperSolid &>(obj));
      return true;
    case webAuthorization::ID:
      func(static_cast<webAuthorization &>(obj));
      return true;
    case webDocument::ID:
      func(static_cast<webDocument &>(obj));
      return true;
    case webDocumentNoProxy::ID:
      func(static_cast<webDocumentNoProxy &>(obj));
      return true;
    case webPageEmpty::ID:
      func(static_cast<webPageEmpty &>(obj));
      return true;
    case webPagePending::ID:
      func(static_cast<webPagePending &>(obj));
      return true;
    case webPage::ID:
      func(static_cast<webPage &>(obj));
      return true;
    case webPageNotModified::ID:
      func(static_cast<webPageNotModified &>(obj));
      return true;
    case account_authorizationForm::ID:
      func(static_cast<account_authorizationForm &>(obj));
      return true;
    case account_authorizations::ID:
      func(static_cast<account_authorizations &>(obj));
      return true;
    case account_password::ID:
      func(static_cast<account_password &>(obj));
      return true;
    case account_passwordInputSettings::ID:
      func(static_cast<account_passwordInputSettings &>(obj));
      return true;
    case account_passwordSettings::ID:
      func(static_cast<account_passwordSettings &>(obj));
      return true;
    case account_privacyRules::ID:
      func(static_cast<account_privacyRules &>(obj));
      return true;
    case account_sentEmailCode::ID:
      func(static_cast<account_sentEmailCode &>(obj));
      return true;
    case account_takeout::ID:
      func(static_cast<account_takeout &>(obj));
      return true;
    case account_tmpPassword::ID:
      func(static_cast<account_tmpPassword &>(obj));
      return true;
    case account_webAuthorizations::ID:
      func(static_cast<account_webAuthorizations &>(obj));
      return true;
    case auth_authorization::ID:
      func(static_cast<auth_authorization &>(obj));
      return true;
    case auth_checkedPhone::ID:
      func(static_cast<auth_checkedPhone &>(obj));
      return true;
    case auth_codeTypeSms::ID:
      func(static_cast<auth_codeTypeSms &>(obj));
      return true;
    case auth_codeTypeCall::ID:
      func(static_cast<auth_codeTypeCall &>(obj));
      return true;
    case auth_codeTypeFlashCall::ID:
      func(static_cast<auth_codeTypeFlashCall &>(obj));
      return true;
    case auth_exportedAuthorization::ID:
      func(static_cast<auth_exportedAuthorization &>(obj));
      return true;
    case auth_passwordRecovery::ID:
      func(static_cast<auth_passwordRecovery &>(obj));
      return true;
    case auth_sentCode::ID:
      func(static_cast<auth_sentCode &>(obj));
      return true;
    case auth_sentCodeTypeApp::ID:
      func(static_cast<auth_sentCodeTypeApp &>(obj));
      return true;
    case auth_sentCodeTypeSms::ID:
      func(static_cast<auth_sentCodeTypeSms &>(obj));
      return true;
    case auth_sentCodeTypeCall::ID:
      func(static_cast<auth_sentCodeTypeCall &>(obj));
      return true;
    case auth_sentCodeTypeFlashCall::ID:
      func(static_cast<auth_sentCodeTypeFlashCall &>(obj));
      return true;
    case channels_adminLogResults::ID:
      func(static_cast<channels_adminLogResults &>(obj));
      return true;
    case channels_channelParticipant::ID:
      func(static_cast<channels_channelParticipant &>(obj));
      return true;
    case channels_channelParticipants::ID:
      func(static_cast<channels_channelParticipants &>(obj));
      return true;
    case channels_channelParticipantsNotModified::ID:
      func(static_cast<channels_channelParticipantsNotModified &>(obj));
      return true;
    case contacts_blocked::ID:
      func(static_cast<contacts_blocked &>(obj));
      return true;
    case contacts_blockedSlice::ID:
      func(static_cast<contacts_blockedSlice &>(obj));
      return true;
    case contacts_contactsNotModified::ID:
      func(static_cast<contacts_contactsNotModified &>(obj));
      return true;
    case contacts_contacts::ID:
      func(static_cast<contacts_contacts &>(obj));
      return true;
    case contacts_found::ID:
      func(static_cast<contacts_found &>(obj));
      return true;
    case contacts_importedContacts::ID:
      func(static_cast<contacts_importedContacts &>(obj));
      return true;
    case contacts_link::ID:
      func(static_cast<contacts_link &>(obj));
      return true;
    case contacts_resolvedPeer::ID:
      func(static_cast<contacts_resolvedPeer &>(obj));
      return true;
    case contacts_topPeersNotModified::ID:
      func(static_cast<contacts_topPeersNotModified &>(obj));
      return true;
    case contacts_topPeers::ID:
      func(static_cast<contacts_topPeers &>(obj));
      return true;
    case contacts_topPeersDisabled::ID:
      func(static_cast<contacts_topPeersDisabled &>(obj));
      return true;
    case help_appUpdate::ID:
      func(static_cast<help_appUpdate &>(obj));
      return true;
    case help_noAppUpdate::ID:
      func(static_cast<help_noAppUpdate &>(obj));
      return true;
    case help_configSimple::ID:
      func(static_cast<help_configSimple &>(obj));
      return true;
    case help_deepLinkInfoEmpty::ID:
      func(static_cast<help_deepLinkInfoEmpty &>(obj));
      return true;
    case help_deepLinkInfo::ID:
      func(static_cast<help_deepLinkInfo &>(obj));
      return true;
    case help_inviteText::ID:
      func(static_cast<help_inviteText &>(obj));
      return true;
    case help_passportConfigNotModified::ID:
      func(static_cast<help_passportConfigNotModified &>(obj));
      return true;
    case help_passportConfig::ID:
      func(static_cast<help_passportConfig &>(obj));
      return true;
    case help_proxyDataEmpty::ID:
      func(static_cast<help_proxyDataEmpty &>(obj));
      return true;
    case help_proxyDataPromo::ID:
      func(static_cast<help_proxyDataPromo &>(obj));
      return true;
    case help_recentMeUrls::ID:
      func(static_cast<help_recentMeUrls &>(obj));
      return true;
    case help_support::ID:
      func(static_cast<help_support &>(obj));
      return true;
    case help_termsOfService::ID:
      func(static_cast<help_termsOfService &>(obj));
      return true;
    case help_termsOfServiceUpdateEmpty::ID:
      func(static_cast<help_termsOfServiceUpdateEmpty &>(obj));
      return true;
    case help_termsOfServiceUpdate::ID:
      func(static_cast<help_termsOfServiceUpdate &>(obj));
      return true;
    case messages_affectedHistory::ID:
      func(static_cast<messages_affectedHistory &>(obj));
      return true;
    case messages_affectedMessages::ID:
      func(static_cast<messages_affectedMessages &>(obj));
      return true;
    case messages_allStickersNotModified::ID:
      func(static_cast<messages_allStickersNotModified &>(obj));
      return true;
    case messages_allStickers::ID:
      func(static_cast<messages_allStickers &>(obj));
      return true;
    case messages_archivedStickers::ID:
      func(static_cast<messages_archivedStickers &>(obj));
      return true;
    case messages_botCallbackAnswer::ID:
      func(static_cast<messages_botCallbackAnswer &>(obj));
      return true;
    case messages_botResults::ID:
      func(static_cast<messages_botResults &>(obj));
      return true;
    case messages_chatFull::ID:
      func(static_cast<messages_chatFull &>(obj));
      return true;
    case messages_chats::ID:
      func(static_cast<messages_chats &>(obj));
      return true;
    case messages_chatsSlice::ID:
      func(static_cast<messages_chatsSlice &>(obj));
      return true;
    case messages_dhConfigNotModified::ID:
      func(static_cast<messages_dhConfigNotModified &>(obj));
      return true;
    case messages_dhConfig::ID:
      func(static_cast<messages_dhConfig &>(obj));
      return true;
    case messages_dialogs::ID:
      func(static_cast<messages_dialogs &>(obj));
      return true;
    case messages_dialogsSlice::ID:
      func(static_cast<messages_dialogsSlice &>(obj));
      return true;
    case messages_dialogsNotModified::ID:
      func(static_cast<messages_dialogsNotModified &>(obj));
      return true;
    case messages_favedStickersNotModified::ID:
      func(static_cast<messages_favedStickersNotModified &>(obj));
      return true;
    case messages_favedStickers::ID:
      func(static_cast<messages_favedStickers &>(obj));
      return true;
    case messages_featuredStickersNotModified::ID:
      func(static_cast<messages_featuredStickersNotModified &>(obj));
      return true;
    case messages_featuredStickers::ID:
      func(static_cast<messages_featuredStickers &>(obj));
      return true;
    case messages_foundGifs::ID:
      func(static_cast<messages_foundGifs &>(obj));
      return true;
    case messages_foundStickerSetsNotModified::ID:
      func(static_cast<messages_foundStickerSetsNotModified &>(obj));
      return true;
    case messages_foundStickerSets::ID:
      func(static_cast<messages_foundStickerSets &>(obj));
      return true;
    case messages_highScores::ID:
      func(static_cast<messages_highScores &>(obj));
      return true;
    case messages_messageEditData::ID:
      func(static_cast<messages_messageEditData &>(obj));
      return true;
    case messages_messages::ID:
      func(static_cast<messages_messages &>(obj));
      return true;
    case messages_messagesSlice::ID:
      func(static_cast<messages_messagesSlice &>(obj));
      return true;
    case messages_channelMessages::ID:
      func(static_cast<messages_channelMessages &>(obj));
      return true;
    case messages_messagesNotModified::ID:
      func(static_cast<messages_messagesNotModified &>(obj));
      return true;
    case messages_peerDialogs::ID:
      func(static_cast<messages_peerDialogs &>(obj));
      return true;
    case messages_recentStickersNotModified::ID:
      func(static_cast<messages_recentStickersNotModified &>(obj));
      return true;
    case messages_recentStickers::ID:
      func(static_cast<messages_recentStickers &>(obj));
      return true;
    case messages_savedGifsNotModified::ID:
      func(static_cast<messages_savedGifsNotModified &>(obj));
      return true;
    case messages_savedGifs::ID:
      func(static_cast<messages_savedGifs &>(obj));
      return true;
    case messages_sentEncryptedMessage::ID:
      func(static_cast<messages_sentEncryptedMessage &>(obj));
      return true;
    case messages_sentEncryptedFile::ID:
      func(static_cast<messages_sentEncryptedFile &>(obj));
      return true;
    case messages_stickerSet::ID:
      func(static_cast<messages_stickerSet &>(obj));
      return true;
    case messages_stickerSetInstallResultSuccess::ID:
      func(static_cast<messages_stickerSetInstallResultSuccess &>(obj));
      return true;
    case messages_stickerSetInstallResultArchive::ID:
      func(static_cast<messages_stickerSetInstallResultArchive &>(obj));
      return true;
    case messages_stickersNotModified::ID:
      func(static_cast<messages_stickersNotModified &>(obj));
      return true;
    case messages_stickers::ID:
      func(static_cast<messages_stickers &>(obj));
      return true;
    case payments_paymentForm::ID:
      func(static_cast<payments_paymentForm &>(obj));
      return true;
    case payments_paymentReceipt::ID:
      func(static_cast<payments_paymentReceipt &>(obj));
      return true;
    case payments_paymentResult::ID:
      func(static_cast<payments_paymentResult &>(obj));
      return true;
    case payments_paymentVerficationNeeded::ID:
      func(static_cast<payments_paymentVerficationNeeded &>(obj));
      return true;
    case payments_savedInfo::ID:
      func(static_cast<payments_savedInfo &>(obj));
      return true;
    case payments_validatedRequestedInfo::ID:
      func(static_cast<payments_validatedRequestedInfo &>(obj));
      return true;
    case phone_phoneCall::ID:
      func(static_cast<phone_phoneCall &>(obj));
      return true;
    case photos_photo::ID:
      func(static_cast<photos_photo &>(obj));
      return true;
    case photos_photos::ID:
      func(static_cast<photos_photos &>(obj));
      return true;
    case photos_photosSlice::ID:
      func(static_cast<photos_photosSlice &>(obj));
      return true;
    case storage_fileUnknown::ID:
      func(static_cast<storage_fileUnknown &>(obj));
      return true;
    case storage_filePartial::ID:
      func(static_cast<storage_filePartial &>(obj));
      return true;
    case storage_fileJpeg::ID:
      func(static_cast<storage_fileJpeg &>(obj));
      return true;
    case storage_fileGif::ID:
      func(static_cast<storage_fileGif &>(obj));
      return true;
    case storage_filePng::ID:
      func(static_cast<storage_filePng &>(obj));
      return true;
    case storage_filePdf::ID:
      func(static_cast<storage_filePdf &>(obj));
      return true;
    case storage_fileMp3::ID:
      func(static_cast<storage_fileMp3 &>(obj));
      return true;
    case storage_fileMov::ID:
      func(static_cast<storage_fileMov &>(obj));
      return true;
    case storage_fileMp4::ID:
      func(static_cast<storage_fileMp4 &>(obj));
      return true;
    case storage_fileWebp::ID:
      func(static_cast<storage_fileWebp &>(obj));
      return true;
    case updates_channelDifferenceEmpty::ID:
      func(static_cast<updates_channelDifferenceEmpty &>(obj));
      return true;
    case updates_channelDifferenceTooLong::ID:
      func(static_cast<updates_channelDifferenceTooLong &>(obj));
      return true;
    case updates_channelDifference::ID:
      func(static_cast<updates_channelDifference &>(obj));
      return true;
    case updates_differenceEmpty::ID:
      func(static_cast<updates_differenceEmpty &>(obj));
      return true;
    case updates_difference::ID:
      func(static_cast<updates_difference &>(obj));
      return true;
    case updates_differenceSlice::ID:
      func(static_cast<updates_differenceSlice &>(obj));
      return true;
    case updates_differenceTooLong::ID:
      func(static_cast<updates_differenceTooLong &>(obj));
      return true;
    case updates_state::ID:
      func(static_cast<updates_state &>(obj));
      return true;
    case upload_cdnFileReuploadNeeded::ID:
      func(static_cast<upload_cdnFileReuploadNeeded &>(obj));
      return true;
    case upload_cdnFile::ID:
      func(static_cast<upload_cdnFile &>(obj));
      return true;
    case upload_file::ID:
      func(static_cast<upload_file &>(obj));
      return true;
    case upload_fileCdnRedirect::ID:
      func(static_cast<upload_fileCdnRedirect &>(obj));
      return true;
    case upload_webFile::ID:
      func(static_cast<upload_webFile &>(obj));
      return true;
    default:
      return false;
  }
}

/**
 * Calls the specified function object with the given object downcasted to its most derived type.
 * \param[in] obj Object to pass as an argument to the function object.
 * \param[in] func Function object to which the object will be passed.
 * \returns Whether function object call has happened. Should always return true for correct parameters.
 */
template <class T>
bool downcast_call(Function &obj, const T &func) {
  switch (obj.get_id()) {
    case account_acceptAuthorization::ID:
      func(static_cast<account_acceptAuthorization &>(obj));
      return true;
    case account_changePhone::ID:
      func(static_cast<account_changePhone &>(obj));
      return true;
    case account_checkUsername::ID:
      func(static_cast<account_checkUsername &>(obj));
      return true;
    case account_confirmPhone::ID:
      func(static_cast<account_confirmPhone &>(obj));
      return true;
    case account_deleteAccount::ID:
      func(static_cast<account_deleteAccount &>(obj));
      return true;
    case account_deleteSecureValue::ID:
      func(static_cast<account_deleteSecureValue &>(obj));
      return true;
    case account_finishTakeoutSession::ID:
      func(static_cast<account_finishTakeoutSession &>(obj));
      return true;
    case account_getAccountTTL::ID:
      func(static_cast<account_getAccountTTL &>(obj));
      return true;
    case account_getAllSecureValues::ID:
      func(static_cast<account_getAllSecureValues &>(obj));
      return true;
    case account_getAuthorizationForm::ID:
      func(static_cast<account_getAuthorizationForm &>(obj));
      return true;
    case account_getAuthorizations::ID:
      func(static_cast<account_getAuthorizations &>(obj));
      return true;
    case account_getNotifySettings::ID:
      func(static_cast<account_getNotifySettings &>(obj));
      return true;
    case account_getPassword::ID:
      func(static_cast<account_getPassword &>(obj));
      return true;
    case account_getPasswordSettings::ID:
      func(static_cast<account_getPasswordSettings &>(obj));
      return true;
    case account_getPrivacy::ID:
      func(static_cast<account_getPrivacy &>(obj));
      return true;
    case account_getSecureValue::ID:
      func(static_cast<account_getSecureValue &>(obj));
      return true;
    case account_getTmpPassword::ID:
      func(static_cast<account_getTmpPassword &>(obj));
      return true;
    case account_getWallPapers::ID:
      func(static_cast<account_getWallPapers &>(obj));
      return true;
    case account_getWebAuthorizations::ID:
      func(static_cast<account_getWebAuthorizations &>(obj));
      return true;
    case account_initTakeoutSession::ID:
      func(static_cast<account_initTakeoutSession &>(obj));
      return true;
    case account_registerDevice::ID:
      func(static_cast<account_registerDevice &>(obj));
      return true;
    case account_reportPeer::ID:
      func(static_cast<account_reportPeer &>(obj));
      return true;
    case account_resetAuthorization::ID:
      func(static_cast<account_resetAuthorization &>(obj));
      return true;
    case account_resetNotifySettings::ID:
      func(static_cast<account_resetNotifySettings &>(obj));
      return true;
    case account_resetWebAuthorization::ID:
      func(static_cast<account_resetWebAuthorization &>(obj));
      return true;
    case account_resetWebAuthorizations::ID:
      func(static_cast<account_resetWebAuthorizations &>(obj));
      return true;
    case account_saveSecureValue::ID:
      func(static_cast<account_saveSecureValue &>(obj));
      return true;
    case account_sendChangePhoneCode::ID:
      func(static_cast<account_sendChangePhoneCode &>(obj));
      return true;
    case account_sendConfirmPhoneCode::ID:
      func(static_cast<account_sendConfirmPhoneCode &>(obj));
      return true;
    case account_sendVerifyEmailCode::ID:
      func(static_cast<account_sendVerifyEmailCode &>(obj));
      return true;
    case account_sendVerifyPhoneCode::ID:
      func(static_cast<account_sendVerifyPhoneCode &>(obj));
      return true;
    case account_setAccountTTL::ID:
      func(static_cast<account_setAccountTTL &>(obj));
      return true;
    case account_setPrivacy::ID:
      func(static_cast<account_setPrivacy &>(obj));
      return true;
    case account_unregisterDevice::ID:
      func(static_cast<account_unregisterDevice &>(obj));
      return true;
    case account_updateDeviceLocked::ID:
      func(static_cast<account_updateDeviceLocked &>(obj));
      return true;
    case account_updateNotifySettings::ID:
      func(static_cast<account_updateNotifySettings &>(obj));
      return true;
    case account_updatePasswordSettings::ID:
      func(static_cast<account_updatePasswordSettings &>(obj));
      return true;
    case account_updateProfile::ID:
      func(static_cast<account_updateProfile &>(obj));
      return true;
    case account_updateStatus::ID:
      func(static_cast<account_updateStatus &>(obj));
      return true;
    case account_updateUsername::ID:
      func(static_cast<account_updateUsername &>(obj));
      return true;
    case account_verifyEmail::ID:
      func(static_cast<account_verifyEmail &>(obj));
      return true;
    case account_verifyPhone::ID:
      func(static_cast<account_verifyPhone &>(obj));
      return true;
    case auth_bindTempAuthKey::ID:
      func(static_cast<auth_bindTempAuthKey &>(obj));
      return true;
    case auth_cancelCode::ID:
      func(static_cast<auth_cancelCode &>(obj));
      return true;
    case auth_checkPassword::ID:
      func(static_cast<auth_checkPassword &>(obj));
      return true;
    case auth_dropTempAuthKeys::ID:
      func(static_cast<auth_dropTempAuthKeys &>(obj));
      return true;
    case auth_exportAuthorization::ID:
      func(static_cast<auth_exportAuthorization &>(obj));
      return true;
    case auth_importAuthorization::ID:
      func(static_cast<auth_importAuthorization &>(obj));
      return true;
    case auth_importBotAuthorization::ID:
      func(static_cast<auth_importBotAuthorization &>(obj));
      return true;
    case auth_logOut::ID:
      func(static_cast<auth_logOut &>(obj));
      return true;
    case auth_recoverPassword::ID:
      func(static_cast<auth_recoverPassword &>(obj));
      return true;
    case auth_requestPasswordRecovery::ID:
      func(static_cast<auth_requestPasswordRecovery &>(obj));
      return true;
    case auth_resendCode::ID:
      func(static_cast<auth_resendCode &>(obj));
      return true;
    case auth_resetAuthorizations::ID:
      func(static_cast<auth_resetAuthorizations &>(obj));
      return true;
    case auth_sendCode::ID:
      func(static_cast<auth_sendCode &>(obj));
      return true;
    case auth_signIn::ID:
      func(static_cast<auth_signIn &>(obj));
      return true;
    case auth_signUp::ID:
      func(static_cast<auth_signUp &>(obj));
      return true;
    case bots_answerWebhookJSONQuery::ID:
      func(static_cast<bots_answerWebhookJSONQuery &>(obj));
      return true;
    case bots_sendCustomRequest::ID:
      func(static_cast<bots_sendCustomRequest &>(obj));
      return true;
    case channels_checkUsername::ID:
      func(static_cast<channels_checkUsername &>(obj));
      return true;
    case channels_createChannel::ID:
      func(static_cast<channels_createChannel &>(obj));
      return true;
    case channels_deleteChannel::ID:
      func(static_cast<channels_deleteChannel &>(obj));
      return true;
    case channels_deleteHistory::ID:
      func(static_cast<channels_deleteHistory &>(obj));
      return true;
    case channels_deleteMessages::ID:
      func(static_cast<channels_deleteMessages &>(obj));
      return true;
    case channels_deleteUserHistory::ID:
      func(static_cast<channels_deleteUserHistory &>(obj));
      return true;
    case channels_editAbout::ID:
      func(static_cast<channels_editAbout &>(obj));
      return true;
    case channels_editAdmin::ID:
      func(static_cast<channels_editAdmin &>(obj));
      return true;
    case channels_editBanned::ID:
      func(static_cast<channels_editBanned &>(obj));
      return true;
    case channels_editPhoto::ID:
      func(static_cast<channels_editPhoto &>(obj));
      return true;
    case channels_editTitle::ID:
      func(static_cast<channels_editTitle &>(obj));
      return true;
    case channels_exportInvite::ID:
      func(static_cast<channels_exportInvite &>(obj));
      return true;
    case channels_exportMessageLink::ID:
      func(static_cast<channels_exportMessageLink &>(obj));
      return true;
    case channels_getAdminLog::ID:
      func(static_cast<channels_getAdminLog &>(obj));
      return true;
    case channels_getAdminedPublicChannels::ID:
      func(static_cast<channels_getAdminedPublicChannels &>(obj));
      return true;
    case channels_getChannels::ID:
      func(static_cast<channels_getChannels &>(obj));
      return true;
    case channels_getFullChannel::ID:
      func(static_cast<channels_getFullChannel &>(obj));
      return true;
    case channels_getLeftChannels::ID:
      func(static_cast<channels_getLeftChannels &>(obj));
      return true;
    case channels_getMessages::ID:
      func(static_cast<channels_getMessages &>(obj));
      return true;
    case channels_getParticipant::ID:
      func(static_cast<channels_getParticipant &>(obj));
      return true;
    case channels_getParticipants::ID:
      func(static_cast<channels_getParticipants &>(obj));
      return true;
    case channels_inviteToChannel::ID:
      func(static_cast<channels_inviteToChannel &>(obj));
      return true;
    case channels_joinChannel::ID:
      func(static_cast<channels_joinChannel &>(obj));
      return true;
    case channels_leaveChannel::ID:
      func(static_cast<channels_leaveChannel &>(obj));
      return true;
    case channels_readHistory::ID:
      func(static_cast<channels_readHistory &>(obj));
      return true;
    case channels_readMessageContents::ID:
      func(static_cast<channels_readMessageContents &>(obj));
      return true;
    case channels_reportSpam::ID:
      func(static_cast<channels_reportSpam &>(obj));
      return true;
    case channels_setStickers::ID:
      func(static_cast<channels_setStickers &>(obj));
      return true;
    case channels_toggleInvites::ID:
      func(static_cast<channels_toggleInvites &>(obj));
      return true;
    case channels_togglePreHistoryHidden::ID:
      func(static_cast<channels_togglePreHistoryHidden &>(obj));
      return true;
    case channels_toggleSignatures::ID:
      func(static_cast<channels_toggleSignatures &>(obj));
      return true;
    case channels_updatePinnedMessage::ID:
      func(static_cast<channels_updatePinnedMessage &>(obj));
      return true;
    case channels_updateUsername::ID:
      func(static_cast<channels_updateUsername &>(obj));
      return true;
    case contacts_block::ID:
      func(static_cast<contacts_block &>(obj));
      return true;
    case contacts_deleteContact::ID:
      func(static_cast<contacts_deleteContact &>(obj));
      return true;
    case contacts_deleteContacts::ID:
      func(static_cast<contacts_deleteContacts &>(obj));
      return true;
    case contacts_exportCard::ID:
      func(static_cast<contacts_exportCard &>(obj));
      return true;
    case contacts_getBlocked::ID:
      func(static_cast<contacts_getBlocked &>(obj));
      return true;
    case contacts_getContacts::ID:
      func(static_cast<contacts_getContacts &>(obj));
      return true;
    case contacts_getSaved::ID:
      func(static_cast<contacts_getSaved &>(obj));
      return true;
    case contacts_getStatuses::ID:
      func(static_cast<contacts_getStatuses &>(obj));
      return true;
    case contacts_getTopPeers::ID:
      func(static_cast<contacts_getTopPeers &>(obj));
      return true;
    case contacts_importCard::ID:
      func(static_cast<contacts_importCard &>(obj));
      return true;
    case contacts_importContacts::ID:
      func(static_cast<contacts_importContacts &>(obj));
      return true;
    case contacts_resetSaved::ID:
      func(static_cast<contacts_resetSaved &>(obj));
      return true;
    case contacts_resetTopPeerRating::ID:
      func(static_cast<contacts_resetTopPeerRating &>(obj));
      return true;
    case contacts_resolveUsername::ID:
      func(static_cast<contacts_resolveUsername &>(obj));
      return true;
    case contacts_search::ID:
      func(static_cast<contacts_search &>(obj));
      return true;
    case contacts_toggleTopPeers::ID:
      func(static_cast<contacts_toggleTopPeers &>(obj));
      return true;
    case contacts_unblock::ID:
      func(static_cast<contacts_unblock &>(obj));
      return true;
    case help_acceptTermsOfService::ID:
      func(static_cast<help_acceptTermsOfService &>(obj));
      return true;
    case help_getAppChangelog::ID:
      func(static_cast<help_getAppChangelog &>(obj));
      return true;
    case help_getAppUpdate::ID:
      func(static_cast<help_getAppUpdate &>(obj));
      return true;
    case help_getCdnConfig::ID:
      func(static_cast<help_getCdnConfig &>(obj));
      return true;
    case help_getConfig::ID:
      func(static_cast<help_getConfig &>(obj));
      return true;
    case help_getDeepLinkInfo::ID:
      func(static_cast<help_getDeepLinkInfo &>(obj));
      return true;
    case help_getInviteText::ID:
      func(static_cast<help_getInviteText &>(obj));
      return true;
    case help_getNearestDc::ID:
      func(static_cast<help_getNearestDc &>(obj));
      return true;
    case help_getPassportConfig::ID:
      func(static_cast<help_getPassportConfig &>(obj));
      return true;
    case help_getProxyData::ID:
      func(static_cast<help_getProxyData &>(obj));
      return true;
    case help_getRecentMeUrls::ID:
      func(static_cast<help_getRecentMeUrls &>(obj));
      return true;
    case help_getSupport::ID:
      func(static_cast<help_getSupport &>(obj));
      return true;
    case help_getTermsOfServiceUpdate::ID:
      func(static_cast<help_getTermsOfServiceUpdate &>(obj));
      return true;
    case help_saveAppLog::ID:
      func(static_cast<help_saveAppLog &>(obj));
      return true;
    case help_setBotUpdatesStatus::ID:
      func(static_cast<help_setBotUpdatesStatus &>(obj));
      return true;
    case langpack_getDifference::ID:
      func(static_cast<langpack_getDifference &>(obj));
      return true;
    case langpack_getLangPack::ID:
      func(static_cast<langpack_getLangPack &>(obj));
      return true;
    case langpack_getLanguages::ID:
      func(static_cast<langpack_getLanguages &>(obj));
      return true;
    case langpack_getStrings::ID:
      func(static_cast<langpack_getStrings &>(obj));
      return true;
    case messages_acceptEncryption::ID:
      func(static_cast<messages_acceptEncryption &>(obj));
      return true;
    case messages_addChatUser::ID:
      func(static_cast<messages_addChatUser &>(obj));
      return true;
    case messages_checkChatInvite::ID:
      func(static_cast<messages_checkChatInvite &>(obj));
      return true;
    case messages_clearAllDrafts::ID:
      func(static_cast<messages_clearAllDrafts &>(obj));
      return true;
    case messages_clearRecentStickers::ID:
      func(static_cast<messages_clearRecentStickers &>(obj));
      return true;
    case messages_createChat::ID:
      func(static_cast<messages_createChat &>(obj));
      return true;
    case messages_deleteChatUser::ID:
      func(static_cast<messages_deleteChatUser &>(obj));
      return true;
    case messages_deleteHistory::ID:
      func(static_cast<messages_deleteHistory &>(obj));
      return true;
    case messages_deleteMessages::ID:
      func(static_cast<messages_deleteMessages &>(obj));
      return true;
    case messages_discardEncryption::ID:
      func(static_cast<messages_discardEncryption &>(obj));
      return true;
    case messages_editChatAdmin::ID:
      func(static_cast<messages_editChatAdmin &>(obj));
      return true;
    case messages_editChatPhoto::ID:
      func(static_cast<messages_editChatPhoto &>(obj));
      return true;
    case messages_editChatTitle::ID:
      func(static_cast<messages_editChatTitle &>(obj));
      return true;
    case messages_editInlineBotMessage::ID:
      func(static_cast<messages_editInlineBotMessage &>(obj));
      return true;
    case messages_editMessage::ID:
      func(static_cast<messages_editMessage &>(obj));
      return true;
    case messages_exportChatInvite::ID:
      func(static_cast<messages_exportChatInvite &>(obj));
      return true;
    case messages_faveSticker::ID:
      func(static_cast<messages_faveSticker &>(obj));
      return true;
    case messages_forwardMessages::ID:
      func(static_cast<messages_forwardMessages &>(obj));
      return true;
    case messages_getAllChats::ID:
      func(static_cast<messages_getAllChats &>(obj));
      return true;
    case messages_getAllDrafts::ID:
      func(static_cast<messages_getAllDrafts &>(obj));
      return true;
    case messages_getAllStickers::ID:
      func(static_cast<messages_getAllStickers &>(obj));
      return true;
    case messages_getArchivedStickers::ID:
      func(static_cast<messages_getArchivedStickers &>(obj));
      return true;
    case messages_getAttachedStickers::ID:
      func(static_cast<messages_getAttachedStickers &>(obj));
      return true;
    case messages_getBotCallbackAnswer::ID:
      func(static_cast<messages_getBotCallbackAnswer &>(obj));
      return true;
    case messages_getChats::ID:
      func(static_cast<messages_getChats &>(obj));
      return true;
    case messages_getCommonChats::ID:
      func(static_cast<messages_getCommonChats &>(obj));
      return true;
    case messages_getDhConfig::ID:
      func(static_cast<messages_getDhConfig &>(obj));
      return true;
    case messages_getDialogUnreadMarks::ID:
      func(static_cast<messages_getDialogUnreadMarks &>(obj));
      return true;
    case messages_getDialogs::ID:
      func(static_cast<messages_getDialogs &>(obj));
      return true;
    case messages_getDocumentByHash::ID:
      func(static_cast<messages_getDocumentByHash &>(obj));
      return true;
    case messages_getFavedStickers::ID:
      func(static_cast<messages_getFavedStickers &>(obj));
      return true;
    case messages_getFeaturedStickers::ID:
      func(static_cast<messages_getFeaturedStickers &>(obj));
      return true;
    case messages_getFullChat::ID:
      func(static_cast<messages_getFullChat &>(obj));
      return true;
    case messages_getGameHighScores::ID:
      func(static_cast<messages_getGameHighScores &>(obj));
      return true;
    case messages_getHistory::ID:
      func(static_cast<messages_getHistory &>(obj));
      return true;
    case messages_getInlineBotResults::ID:
      func(static_cast<messages_getInlineBotResults &>(obj));
      return true;
    case messages_getInlineGameHighScores::ID:
      func(static_cast<messages_getInlineGameHighScores &>(obj));
      return true;
    case messages_getMaskStickers::ID:
      func(static_cast<messages_getMaskStickers &>(obj));
      return true;
    case messages_getMessageEditData::ID:
      func(static_cast<messages_getMessageEditData &>(obj));
      return true;
    case messages_getMessages::ID:
      func(static_cast<messages_getMessages &>(obj));
      return true;
    case messages_getMessagesViews::ID:
      func(static_cast<messages_getMessagesViews &>(obj));
      return true;
    case messages_getPeerDialogs::ID:
      func(static_cast<messages_getPeerDialogs &>(obj));
      return true;
    case messages_getPeerSettings::ID:
      func(static_cast<messages_getPeerSettings &>(obj));
      return true;
    case messages_getPinnedDialogs::ID:
      func(static_cast<messages_getPinnedDialogs &>(obj));
      return true;
    case messages_getRecentLocations::ID:
      func(static_cast<messages_getRecentLocations &>(obj));
      return true;
    case messages_getRecentStickers::ID:
      func(static_cast<messages_getRecentStickers &>(obj));
      return true;
    case messages_getSavedGifs::ID:
      func(static_cast<messages_getSavedGifs &>(obj));
      return true;
    case messages_getSplitRanges::ID:
      func(static_cast<messages_getSplitRanges &>(obj));
      return true;
    case messages_getStickerSet::ID:
      func(static_cast<messages_getStickerSet &>(obj));
      return true;
    case messages_getStickers::ID:
      func(static_cast<messages_getStickers &>(obj));
      return true;
    case messages_getUnreadMentions::ID:
      func(static_cast<messages_getUnreadMentions &>(obj));
      return true;
    case messages_getWebPage::ID:
      func(static_cast<messages_getWebPage &>(obj));
      return true;
    case messages_getWebPagePreview::ID:
      func(static_cast<messages_getWebPagePreview &>(obj));
      return true;
    case messages_hideReportSpam::ID:
      func(static_cast<messages_hideReportSpam &>(obj));
      return true;
    case messages_importChatInvite::ID:
      func(static_cast<messages_importChatInvite &>(obj));
      return true;
    case messages_installStickerSet::ID:
      func(static_cast<messages_installStickerSet &>(obj));
      return true;
    case messages_markDialogUnread::ID:
      func(static_cast<messages_markDialogUnread &>(obj));
      return true;
    case messages_migrateChat::ID:
      func(static_cast<messages_migrateChat &>(obj));
      return true;
    case messages_readEncryptedHistory::ID:
      func(static_cast<messages_readEncryptedHistory &>(obj));
      return true;
    case messages_readFeaturedStickers::ID:
      func(static_cast<messages_readFeaturedStickers &>(obj));
      return true;
    case messages_readHistory::ID:
      func(static_cast<messages_readHistory &>(obj));
      return true;
    case messages_readMentions::ID:
      func(static_cast<messages_readMentions &>(obj));
      return true;
    case messages_readMessageContents::ID:
      func(static_cast<messages_readMessageContents &>(obj));
      return true;
    case messages_receivedMessages::ID:
      func(static_cast<messages_receivedMessages &>(obj));
      return true;
    case messages_receivedQueue::ID:
      func(static_cast<messages_receivedQueue &>(obj));
      return true;
    case messages_reorderPinnedDialogs::ID:
      func(static_cast<messages_reorderPinnedDialogs &>(obj));
      return true;
    case messages_reorderStickerSets::ID:
      func(static_cast<messages_reorderStickerSets &>(obj));
      return true;
    case messages_report::ID:
      func(static_cast<messages_report &>(obj));
      return true;
    case messages_reportEncryptedSpam::ID:
      func(static_cast<messages_reportEncryptedSpam &>(obj));
      return true;
    case messages_reportSpam::ID:
      func(static_cast<messages_reportSpam &>(obj));
      return true;
    case messages_requestEncryption::ID:
      func(static_cast<messages_requestEncryption &>(obj));
      return true;
    case messages_saveDraft::ID:
      func(static_cast<messages_saveDraft &>(obj));
      return true;
    case messages_saveGif::ID:
      func(static_cast<messages_saveGif &>(obj));
      return true;
    case messages_saveRecentSticker::ID:
      func(static_cast<messages_saveRecentSticker &>(obj));
      return true;
    case messages_search::ID:
      func(static_cast<messages_search &>(obj));
      return true;
    case messages_searchGifs::ID:
      func(static_cast<messages_searchGifs &>(obj));
      return true;
    case messages_searchGlobal::ID:
      func(static_cast<messages_searchGlobal &>(obj));
      return true;
    case messages_searchStickerSets::ID:
      func(static_cast<messages_searchStickerSets &>(obj));
      return true;
    case messages_sendEncrypted::ID:
      func(static_cast<messages_sendEncrypted &>(obj));
      return true;
    case messages_sendEncryptedFile::ID:
      func(static_cast<messages_sendEncryptedFile &>(obj));
      return true;
    case messages_sendEncryptedService::ID:
      func(static_cast<messages_sendEncryptedService &>(obj));
      return true;
    case messages_sendInlineBotResult::ID:
      func(static_cast<messages_sendInlineBotResult &>(obj));
      return true;
    case messages_sendMedia::ID:
      func(static_cast<messages_sendMedia &>(obj));
      return true;
    case messages_sendMessage::ID:
      func(static_cast<messages_sendMessage &>(obj));
      return true;
    case messages_sendMultiMedia::ID:
      func(static_cast<messages_sendMultiMedia &>(obj));
      return true;
    case messages_sendScreenshotNotification::ID:
      func(static_cast<messages_sendScreenshotNotification &>(obj));
      return true;
    case messages_setBotCallbackAnswer::ID:
      func(static_cast<messages_setBotCallbackAnswer &>(obj));
      return true;
    case messages_setBotPrecheckoutResults::ID:
      func(static_cast<messages_setBotPrecheckoutResults &>(obj));
      return true;
    case messages_setBotShippingResults::ID:
      func(static_cast<messages_setBotShippingResults &>(obj));
      return true;
    case messages_setEncryptedTyping::ID:
      func(static_cast<messages_setEncryptedTyping &>(obj));
      return true;
    case messages_setGameScore::ID:
      func(static_cast<messages_setGameScore &>(obj));
      return true;
    case messages_setInlineBotResults::ID:
      func(static_cast<messages_setInlineBotResults &>(obj));
      return true;
    case messages_setInlineGameScore::ID:
      func(static_cast<messages_setInlineGameScore &>(obj));
      return true;
    case messages_setTyping::ID:
      func(static_cast<messages_setTyping &>(obj));
      return true;
    case messages_startBot::ID:
      func(static_cast<messages_startBot &>(obj));
      return true;
    case messages_toggleChatAdmins::ID:
      func(static_cast<messages_toggleChatAdmins &>(obj));
      return true;
    case messages_toggleDialogPin::ID:
      func(static_cast<messages_toggleDialogPin &>(obj));
      return true;
    case messages_uninstallStickerSet::ID:
      func(static_cast<messages_uninstallStickerSet &>(obj));
      return true;
    case messages_uploadEncryptedFile::ID:
      func(static_cast<messages_uploadEncryptedFile &>(obj));
      return true;
    case messages_uploadMedia::ID:
      func(static_cast<messages_uploadMedia &>(obj));
      return true;
    case payments_clearSavedInfo::ID:
      func(static_cast<payments_clearSavedInfo &>(obj));
      return true;
    case payments_getPaymentForm::ID:
      func(static_cast<payments_getPaymentForm &>(obj));
      return true;
    case payments_getPaymentReceipt::ID:
      func(static_cast<payments_getPaymentReceipt &>(obj));
      return true;
    case payments_getSavedInfo::ID:
      func(static_cast<payments_getSavedInfo &>(obj));
      return true;
    case payments_sendPaymentForm::ID:
      func(static_cast<payments_sendPaymentForm &>(obj));
      return true;
    case payments_validateRequestedInfo::ID:
      func(static_cast<payments_validateRequestedInfo &>(obj));
      return true;
    case phone_acceptCall::ID:
      func(static_cast<phone_acceptCall &>(obj));
      return true;
    case phone_confirmCall::ID:
      func(static_cast<phone_confirmCall &>(obj));
      return true;
    case phone_discardCall::ID:
      func(static_cast<phone_discardCall &>(obj));
      return true;
    case phone_getCallConfig::ID:
      func(static_cast<phone_getCallConfig &>(obj));
      return true;
    case phone_receivedCall::ID:
      func(static_cast<phone_receivedCall &>(obj));
      return true;
    case phone_requestCall::ID:
      func(static_cast<phone_requestCall &>(obj));
      return true;
    case phone_saveCallDebug::ID:
      func(static_cast<phone_saveCallDebug &>(obj));
      return true;
    case phone_setCallRating::ID:
      func(static_cast<phone_setCallRating &>(obj));
      return true;
    case photos_deletePhotos::ID:
      func(static_cast<photos_deletePhotos &>(obj));
      return true;
    case photos_getUserPhotos::ID:
      func(static_cast<photos_getUserPhotos &>(obj));
      return true;
    case photos_updateProfilePhoto::ID:
      func(static_cast<photos_updateProfilePhoto &>(obj));
      return true;
    case photos_uploadProfilePhoto::ID:
      func(static_cast<photos_uploadProfilePhoto &>(obj));
      return true;
    case stickers_addStickerToSet::ID:
      func(static_cast<stickers_addStickerToSet &>(obj));
      return true;
    case stickers_changeStickerPosition::ID:
      func(static_cast<stickers_changeStickerPosition &>(obj));
      return true;
    case stickers_createStickerSet::ID:
      func(static_cast<stickers_createStickerSet &>(obj));
      return true;
    case stickers_removeStickerFromSet::ID:
      func(static_cast<stickers_removeStickerFromSet &>(obj));
      return true;
    case test_useConfigSimple::ID:
      func(static_cast<test_useConfigSimple &>(obj));
      return true;
    case test_useError::ID:
      func(static_cast<test_useError &>(obj));
      return true;
    case updates_getChannelDifference::ID:
      func(static_cast<updates_getChannelDifference &>(obj));
      return true;
    case updates_getDifference::ID:
      func(static_cast<updates_getDifference &>(obj));
      return true;
    case updates_getState::ID:
      func(static_cast<updates_getState &>(obj));
      return true;
    case upload_getCdnFile::ID:
      func(static_cast<upload_getCdnFile &>(obj));
      return true;
    case upload_getCdnFileHashes::ID:
      func(static_cast<upload_getCdnFileHashes &>(obj));
      return true;
    case upload_getFile::ID:
      func(static_cast<upload_getFile &>(obj));
      return true;
    case upload_getFileHashes::ID:
      func(static_cast<upload_getFileHashes &>(obj));
      return true;
    case upload_getWebFile::ID:
      func(static_cast<upload_getWebFile &>(obj));
      return true;
    case upload_reuploadCdnFile::ID:
      func(static_cast<upload_reuploadCdnFile &>(obj));
      return true;
    case upload_saveBigFilePart::ID:
      func(static_cast<upload_saveBigFilePart &>(obj));
      return true;
    case upload_saveFilePart::ID:
      func(static_cast<upload_saveFilePart &>(obj));
      return true;
    case users_getFullUser::ID:
      func(static_cast<users_getFullUser &>(obj));
      return true;
    case users_getUsers::ID:
      func(static_cast<users_getUsers &>(obj));
      return true;
    case users_setSecureValueErrors::ID:
      func(static_cast<users_setSecureValueErrors &>(obj));
      return true;
    default:
      return false;
  }
}

/**
 * Calls the specified function object with the given object downcasted to its most derived type.
 * \param[in] obj Object to pass as an argument to the function object.
 * \param[in] func Function object to which the object will be passed.
 * \returns Whether function object call has happened. Should always return true for correct parameters.
 */
template <class T>
bool downcast_call(BotInlineMessage &obj, const T &func) {
  switch (obj.get_id()) {
    case botInlineMessageMediaAuto::ID:
      func(static_cast<botInlineMessageMediaAuto &>(obj));
      return true;
    case botInlineMessageText::ID:
      func(static_cast<botInlineMessageText &>(obj));
      return true;
    case botInlineMessageMediaGeo::ID:
      func(static_cast<botInlineMessageMediaGeo &>(obj));
      return true;
    case botInlineMessageMediaVenue::ID:
      func(static_cast<botInlineMessageMediaVenue &>(obj));
      return true;
    case botInlineMessageMediaContact::ID:
      func(static_cast<botInlineMessageMediaContact &>(obj));
      return true;
    default:
      return false;
  }
}

/**
 * Calls the specified function object with the given object downcasted to its most derived type.
 * \param[in] obj Object to pass as an argument to the function object.
 * \param[in] func Function object to which the object will be passed.
 * \returns Whether function object call has happened. Should always return true for correct parameters.
 */
template <class T>
bool downcast_call(BotInlineResult &obj, const T &func) {
  switch (obj.get_id()) {
    case botInlineResult::ID:
      func(static_cast<botInlineResult &>(obj));
      return true;
    case botInlineMediaResult::ID:
      func(static_cast<botInlineMediaResult &>(obj));
      return true;
    default:
      return false;
  }
}

/**
 * Calls the specified function object with the given object downcasted to its most derived type.
 * \param[in] obj Object to pass as an argument to the function object.
 * \param[in] func Function object to which the object will be passed.
 * \returns Whether function object call has happened. Should always return true for correct parameters.
 */
template <class T>
bool downcast_call(ChannelAdminLogEventAction &obj, const T &func) {
  switch (obj.get_id()) {
    case channelAdminLogEventActionChangeTitle::ID:
      func(static_cast<channelAdminLogEventActionChangeTitle &>(obj));
      return true;
    case channelAdminLogEventActionChangeAbout::ID:
      func(static_cast<channelAdminLogEventActionChangeAbout &>(obj));
      return true;
    case channelAdminLogEventActionChangeUsername::ID:
      func(static_cast<channelAdminLogEventActionChangeUsername &>(obj));
      return true;
    case channelAdminLogEventActionChangePhoto::ID:
      func(static_cast<channelAdminLogEventActionChangePhoto &>(obj));
      return true;
    case channelAdminLogEventActionToggleInvites::ID:
      func(static_cast<channelAdminLogEventActionToggleInvites &>(obj));
      return true;
    case channelAdminLogEventActionToggleSignatures::ID:
      func(static_cast<channelAdminLogEventActionToggleSignatures &>(obj));
      return true;
    case channelAdminLogEventActionUpdatePinned::ID:
      func(static_cast<channelAdminLogEventActionUpdatePinned &>(obj));
      return true;
    case channelAdminLogEventActionEditMessage::ID:
      func(static_cast<channelAdminLogEventActionEditMessage &>(obj));
      return true;
    case channelAdminLogEventActionDeleteMessage::ID:
      func(static_cast<channelAdminLogEventActionDeleteMessage &>(obj));
      return true;
    case channelAdminLogEventActionParticipantJoin::ID:
      func(static_cast<channelAdminLogEventActionParticipantJoin &>(obj));
      return true;
    case channelAdminLogEventActionParticipantLeave::ID:
      func(static_cast<channelAdminLogEventActionParticipantLeave &>(obj));
      return true;
    case channelAdminLogEventActionParticipantInvite::ID:
      func(static_cast<channelAdminLogEventActionParticipantInvite &>(obj));
      return true;
    case channelAdminLogEventActionParticipantToggleBan::ID:
      func(static_cast<channelAdminLogEventActionParticipantToggleBan &>(obj));
      return true;
    case channelAdminLogEventActionParticipantToggleAdmin::ID:
      func(static_cast<channelAdminLogEventActionParticipantToggleAdmin &>(obj));
      return true;
    case channelAdminLogEventActionChangeStickerSet::ID:
      func(static_cast<channelAdminLogEventActionChangeStickerSet &>(obj));
      return true;
    case channelAdminLogEventActionTogglePreHistoryHidden::ID:
      func(static_cast<channelAdminLogEventActionTogglePreHistoryHidden &>(obj));
      return true;
    default:
      return false;
  }
}

/**
 * Calls the specified function object with the given object downcasted to its most derived type.
 * \param[in] obj Object to pass as an argument to the function object.
 * \param[in] func Function object to which the object will be passed.
 * \returns Whether function object call has happened. Should always return true for correct parameters.
 */
template <class T>
bool downcast_call(ChannelMessagesFilter &obj, const T &func) {
  switch (obj.get_id()) {
    case channelMessagesFilterEmpty::ID:
      func(static_cast<channelMessagesFilterEmpty &>(obj));
      return true;
    case channelMessagesFilter::ID:
      func(static_cast<channelMessagesFilter &>(obj));
      return true;
    default:
      return false;
  }
}

/**
 * Calls the specified function object with the given object downcasted to its most derived type.
 * \param[in] obj Object to pass as an argument to the function object.
 * \param[in] func Function object to which the object will be passed.
 * \returns Whether function object call has happened. Should always return true for correct parameters.
 */
template <class T>
bool downcast_call(ChannelParticipant &obj, const T &func) {
  switch (obj.get_id()) {
    case channelParticipant::ID:
      func(static_cast<channelParticipant &>(obj));
      return true;
    case channelParticipantSelf::ID:
      func(static_cast<channelParticipantSelf &>(obj));
      return true;
    case channelParticipantCreator::ID:
      func(static_cast<channelParticipantCreator &>(obj));
      return true;
    case channelParticipantAdmin::ID:
      func(static_cast<channelParticipantAdmin &>(obj));
      return true;
    case channelParticipantBanned::ID:
      func(static_cast<channelParticipantBanned &>(obj));
      return true;
    default:
      return false;
  }
}

/**
 * Calls the specified function object with the given object downcasted to its most derived type.
 * \param[in] obj Object to pass as an argument to the function object.
 * \param[in] func Function object to which the object will be passed.
 * \returns Whether function object call has happened. Should always return true for correct parameters.
 */
template <class T>
bool downcast_call(ChannelParticipantsFilter &obj, const T &func) {
  switch (obj.get_id()) {
    case channelParticipantsRecent::ID:
      func(static_cast<channelParticipantsRecent &>(obj));
      return true;
    case channelParticipantsAdmins::ID:
      func(static_cast<channelParticipantsAdmins &>(obj));
      return true;
    case channelParticipantsKicked::ID:
      func(static_cast<channelParticipantsKicked &>(obj));
      return true;
    case channelParticipantsBots::ID:
      func(static_cast<channelParticipantsBots &>(obj));
      return true;
    case channelParticipantsBanned::ID:
      func(static_cast<channelParticipantsBanned &>(obj));
      return true;
    case channelParticipantsSearch::ID:
      func(static_cast<channelParticipantsSearch &>(obj));
      return true;
    default:
      return false;
  }
}

/**
 * Calls the specified function object with the given object downcasted to its most derived type.
 * \param[in] obj Object to pass as an argument to the function object.
 * \param[in] func Function object to which the object will be passed.
 * \returns Whether function object call has happened. Should always return true for correct parameters.
 */
template <class T>
bool downcast_call(Chat &obj, const T &func) {
  switch (obj.get_id()) {
    case chatEmpty::ID:
      func(static_cast<chatEmpty &>(obj));
      return true;
    case chat::ID:
      func(static_cast<chat &>(obj));
      return true;
    case chatForbidden::ID:
      func(static_cast<chatForbidden &>(obj));
      return true;
    case channel::ID:
      func(static_cast<channel &>(obj));
      return true;
    case channelForbidden::ID:
      func(static_cast<channelForbidden &>(obj));
      return true;
    default:
      return false;
  }
}

/**
 * Calls the specified function object with the given object downcasted to its most derived type.
 * \param[in] obj Object to pass as an argument to the function object.
 * \param[in] func Function object to which the object will be passed.
 * \returns Whether function object call has happened. Should always return true for correct parameters.
 */
template <class T>
bool downcast_call(ChatFull &obj, const T &func) {
  switch (obj.get_id()) {
    case chatFull::ID:
      func(static_cast<chatFull &>(obj));
      return true;
    case channelFull::ID:
      func(static_cast<channelFull &>(obj));
      return true;
    default:
      return false;
  }
}

/**
 * Calls the specified function object with the given object downcasted to its most derived type.
 * \param[in] obj Object to pass as an argument to the function object.
 * \param[in] func Function object to which the object will be passed.
 * \returns Whether function object call has happened. Should always return true for correct parameters.
 */
template <class T>
bool downcast_call(ChatInvite &obj, const T &func) {
  switch (obj.get_id()) {
    case chatInviteAlready::ID:
      func(static_cast<chatInviteAlready &>(obj));
      return true;
    case chatInvite::ID:
      func(static_cast<chatInvite &>(obj));
      return true;
    default:
      return false;
  }
}

/**
 * Calls the specified function object with the given object downcasted to its most derived type.
 * \param[in] obj Object to pass as an argument to the function object.
 * \param[in] func Function object to which the object will be passed.
 * \returns Whether function object call has happened. Should always return true for correct parameters.
 */
template <class T>
bool downcast_call(ChatParticipant &obj, const T &func) {
  switch (obj.get_id()) {
    case chatParticipant::ID:
      func(static_cast<chatParticipant &>(obj));
      return true;
    case chatParticipantCreator::ID:
      func(static_cast<chatParticipantCreator &>(obj));
      return true;
    case chatParticipantAdmin::ID:
      func(static_cast<chatParticipantAdmin &>(obj));
      return true;
    default:
      return false;
  }
}

/**
 * Calls the specified function object with the given object downcasted to its most derived type.
 * \param[in] obj Object to pass as an argument to the function object.
 * \param[in] func Function object to which the object will be passed.
 * \returns Whether function object call has happened. Should always return true for correct parameters.
 */
template <class T>
bool downcast_call(ChatParticipants &obj, const T &func) {
  switch (obj.get_id()) {
    case chatParticipantsForbidden::ID:
      func(static_cast<chatParticipantsForbidden &>(obj));
      return true;
    case chatParticipants::ID:
      func(static_cast<chatParticipants &>(obj));
      return true;
    default:
      return false;
  }
}

/**
 * Calls the specified function object with the given object downcasted to its most derived type.
 * \param[in] obj Object to pass as an argument to the function object.
 * \param[in] func Function object to which the object will be passed.
 * \returns Whether function object call has happened. Should always return true for correct parameters.
 */
template <class T>
bool downcast_call(ChatPhoto &obj, const T &func) {
  switch (obj.get_id()) {
    case chatPhotoEmpty::ID:
      func(static_cast<chatPhotoEmpty &>(obj));
      return true;
    case chatPhoto::ID:
      func(static_cast<chatPhoto &>(obj));
      return true;
    default:
      return false;
  }
}

/**
 * Calls the specified function object with the given object downcasted to its most derived type.
 * \param[in] obj Object to pass as an argument to the function object.
 * \param[in] func Function object to which the object will be passed.
 * \returns Whether function object call has happened. Should always return true for correct parameters.
 */
template <class T>
bool downcast_call(ContactLink &obj, const T &func) {
  switch (obj.get_id()) {
    case contactLinkUnknown::ID:
      func(static_cast<contactLinkUnknown &>(obj));
      return true;
    case contactLinkNone::ID:
      func(static_cast<contactLinkNone &>(obj));
      return true;
    case contactLinkHasPhone::ID:
      func(static_cast<contactLinkHasPhone &>(obj));
      return true;
    case contactLinkContact::ID:
      func(static_cast<contactLinkContact &>(obj));
      return true;
    default:
      return false;
  }
}

/**
 * Calls the specified function object with the given object downcasted to its most derived type.
 * \param[in] obj Object to pass as an argument to the function object.
 * \param[in] func Function object to which the object will be passed.
 * \returns Whether function object call has happened. Should always return true for correct parameters.
 */
template <class T>
bool downcast_call(Document &obj, const T &func) {
  switch (obj.get_id()) {
    case documentEmpty::ID:
      func(static_cast<documentEmpty &>(obj));
      return true;
    case document::ID:
      func(static_cast<document &>(obj));
      return true;
    default:
      return false;
  }
}

/**
 * Calls the specified function object with the given object downcasted to its most derived type.
 * \param[in] obj Object to pass as an argument to the function object.
 * \param[in] func Function object to which the object will be passed.
 * \returns Whether function object call has happened. Should always return true for correct parameters.
 */
template <class T>
bool downcast_call(DocumentAttribute &obj, const T &func) {
  switch (obj.get_id()) {
    case documentAttributeImageSize::ID:
      func(static_cast<documentAttributeImageSize &>(obj));
      return true;
    case documentAttributeAnimated::ID:
      func(static_cast<documentAttributeAnimated &>(obj));
      return true;
    case documentAttributeSticker::ID:
      func(static_cast<documentAttributeSticker &>(obj));
      return true;
    case documentAttributeVideo::ID:
      func(static_cast<documentAttributeVideo &>(obj));
      return true;
    case documentAttributeAudio::ID:
      func(static_cast<documentAttributeAudio &>(obj));
      return true;
    case documentAttributeFilename::ID:
      func(static_cast<documentAttributeFilename &>(obj));
      return true;
    case documentAttributeHasStickers::ID:
      func(static_cast<documentAttributeHasStickers &>(obj));
      return true;
    default:
      return false;
  }
}

/**
 * Calls the specified function object with the given object downcasted to its most derived type.
 * \param[in] obj Object to pass as an argument to the function object.
 * \param[in] func Function object to which the object will be passed.
 * \returns Whether function object call has happened. Should always return true for correct parameters.
 */
template <class T>
bool downcast_call(DraftMessage &obj, const T &func) {
  switch (obj.get_id()) {
    case draftMessageEmpty::ID:
      func(static_cast<draftMessageEmpty &>(obj));
      return true;
    case draftMessage::ID:
      func(static_cast<draftMessage &>(obj));
      return true;
    default:
      return false;
  }
}

/**
 * Calls the specified function object with the given object downcasted to its most derived type.
 * \param[in] obj Object to pass as an argument to the function object.
 * \param[in] func Function object to which the object will be passed.
 * \returns Whether function object call has happened. Should always return true for correct parameters.
 */
template <class T>
bool downcast_call(EncryptedChat &obj, const T &func) {
  switch (obj.get_id()) {
    case encryptedChatEmpty::ID:
      func(static_cast<encryptedChatEmpty &>(obj));
      return true;
    case encryptedChatWaiting::ID:
      func(static_cast<encryptedChatWaiting &>(obj));
      return true;
    case encryptedChatRequested::ID:
      func(static_cast<encryptedChatRequested &>(obj));
      return true;
    case encryptedChat::ID:
      func(static_cast<encryptedChat &>(obj));
      return true;
    case encryptedChatDiscarded::ID:
      func(static_cast<encryptedChatDiscarded &>(obj));
      return true;
    default:
      return false;
  }
}

/**
 * Calls the specified function object with the given object downcasted to its most derived type.
 * \param[in] obj Object to pass as an argument to the function object.
 * \param[in] func Function object to which the object will be passed.
 * \returns Whether function object call has happened. Should always return true for correct parameters.
 */
template <class T>
bool downcast_call(EncryptedFile &obj, const T &func) {
  switch (obj.get_id()) {
    case encryptedFileEmpty::ID:
      func(static_cast<encryptedFileEmpty &>(obj));
      return true;
    case encryptedFile::ID:
      func(static_cast<encryptedFile &>(obj));
      return true;
    default:
      return false;
  }
}

/**
 * Calls the specified function object with the given object downcasted to its most derived type.
 * \param[in] obj Object to pass as an argument to the function object.
 * \param[in] func Function object to which the object will be passed.
 * \returns Whether function object call has happened. Should always return true for correct parameters.
 */
template <class T>
bool downcast_call(EncryptedMessage &obj, const T &func) {
  switch (obj.get_id()) {
    case encryptedMessage::ID:
      func(static_cast<encryptedMessage &>(obj));
      return true;
    case encryptedMessageService::ID:
      func(static_cast<encryptedMessageService &>(obj));
      return true;
    default:
      return false;
  }
}

/**
 * Calls the specified function object with the given object downcasted to its most derived type.
 * \param[in] obj Object to pass as an argument to the function object.
 * \param[in] func Function object to which the object will be passed.
 * \returns Whether function object call has happened. Should always return true for correct parameters.
 */
template <class T>
bool downcast_call(ExportedChatInvite &obj, const T &func) {
  switch (obj.get_id()) {
    case chatInviteEmpty::ID:
      func(static_cast<chatInviteEmpty &>(obj));
      return true;
    case chatInviteExported::ID:
      func(static_cast<chatInviteExported &>(obj));
      return true;
    default:
      return false;
  }
}

/**
 * Calls the specified function object with the given object downcasted to its most derived type.
 * \param[in] obj Object to pass as an argument to the function object.
 * \param[in] func Function object to which the object will be passed.
 * \returns Whether function object call has happened. Should always return true for correct parameters.
 */
template <class T>
bool downcast_call(FileLocation &obj, const T &func) {
  switch (obj.get_id()) {
    case fileLocationUnavailable::ID:
      func(static_cast<fileLocationUnavailable &>(obj));
      return true;
    case fileLocation::ID:
      func(static_cast<fileLocation &>(obj));
      return true;
    default:
      return false;
  }
}

/**
 * Calls the specified function object with the given object downcasted to its most derived type.
 * \param[in] obj Object to pass as an argument to the function object.
 * \param[in] func Function object to which the object will be passed.
 * \returns Whether function object call has happened. Should always return true for correct parameters.
 */
template <class T>
bool downcast_call(FoundGif &obj, const T &func) {
  switch (obj.get_id()) {
    case foundGif::ID:
      func(static_cast<foundGif &>(obj));
      return true;
    case foundGifCached::ID:
      func(static_cast<foundGifCached &>(obj));
      return true;
    default:
      return false;
  }
}

/**
 * Calls the specified function object with the given object downcasted to its most derived type.
 * \param[in] obj Object to pass as an argument to the function object.
 * \param[in] func Function object to which the object will be passed.
 * \returns Whether function object call has happened. Should always return true for correct parameters.
 */
template <class T>
bool downcast_call(GeoPoint &obj, const T &func) {
  switch (obj.get_id()) {
    case geoPointEmpty::ID:
      func(static_cast<geoPointEmpty &>(obj));
      return true;
    case geoPoint::ID:
      func(static_cast<geoPoint &>(obj));
      return true;
    default:
      return false;
  }
}

/**
 * Calls the specified function object with the given object downcasted to its most derived type.
 * \param[in] obj Object to pass as an argument to the function object.
 * \param[in] func Function object to which the object will be passed.
 * \returns Whether function object call has happened. Should always return true for correct parameters.
 */
template <class T>
bool downcast_call(InputBotInlineMessage &obj, const T &func) {
  switch (obj.get_id()) {
    case inputBotInlineMessageMediaAuto::ID:
      func(static_cast<inputBotInlineMessageMediaAuto &>(obj));
      return true;
    case inputBotInlineMessageText::ID:
      func(static_cast<inputBotInlineMessageText &>(obj));
      return true;
    case inputBotInlineMessageMediaGeo::ID:
      func(static_cast<inputBotInlineMessageMediaGeo &>(obj));
      return true;
    case inputBotInlineMessageMediaVenue::ID:
      func(static_cast<inputBotInlineMessageMediaVenue &>(obj));
      return true;
    case inputBotInlineMessageMediaContact::ID:
      func(static_cast<inputBotInlineMessageMediaContact &>(obj));
      return true;
    case inputBotInlineMessageGame::ID:
      func(static_cast<inputBotInlineMessageGame &>(obj));
      return true;
    default:
      return false;
  }
}

/**
 * Calls the specified function object with the given object downcasted to its most derived type.
 * \param[in] obj Object to pass as an argument to the function object.
 * \param[in] func Function object to which the object will be passed.
 * \returns Whether function object call has happened. Should always return true for correct parameters.
 */
template <class T>
bool downcast_call(InputBotInlineResult &obj, const T &func) {
  switch (obj.get_id()) {
    case inputBotInlineResult::ID:
      func(static_cast<inputBotInlineResult &>(obj));
      return true;
    case inputBotInlineResultPhoto::ID:
      func(static_cast<inputBotInlineResultPhoto &>(obj));
      return true;
    case inputBotInlineResultDocument::ID:
      func(static_cast<inputBotInlineResultDocument &>(obj));
      return true;
    case inputBotInlineResultGame::ID:
      func(static_cast<inputBotInlineResultGame &>(obj));
      return true;
    default:
      return false;
  }
}

/**
 * Calls the specified function object with the given object downcasted to its most derived type.
 * \param[in] obj Object to pass as an argument to the function object.
 * \param[in] func Function object to which the object will be passed.
 * \returns Whether function object call has happened. Should always return true for correct parameters.
 */
template <class T>
bool downcast_call(InputChannel &obj, const T &func) {
  switch (obj.get_id()) {
    case inputChannelEmpty::ID:
      func(static_cast<inputChannelEmpty &>(obj));
      return true;
    case inputChannel::ID:
      func(static_cast<inputChannel &>(obj));
      return true;
    default:
      return false;
  }
}

/**
 * Calls the specified function object with the given object downcasted to its most derived type.
 * \param[in] obj Object to pass as an argument to the function object.
 * \param[in] func Function object to which the object will be passed.
 * \returns Whether function object call has happened. Should always return true for correct parameters.
 */
template <class T>
bool downcast_call(InputChatPhoto &obj, const T &func) {
  switch (obj.get_id()) {
    case inputChatPhotoEmpty::ID:
      func(static_cast<inputChatPhotoEmpty &>(obj));
      return true;
    case inputChatUploadedPhoto::ID:
      func(static_cast<inputChatUploadedPhoto &>(obj));
      return true;
    case inputChatPhoto::ID:
      func(static_cast<inputChatPhoto &>(obj));
      return true;
    default:
      return false;
  }
}

/**
 * Calls the specified function object with the given object downcasted to its most derived type.
 * \param[in] obj Object to pass as an argument to the function object.
 * \param[in] func Function object to which the object will be passed.
 * \returns Whether function object call has happened. Should always return true for correct parameters.
 */
template <class T>
bool downcast_call(InputCheckPasswordSRP &obj, const T &func) {
  switch (obj.get_id()) {
    case inputCheckPasswordEmpty::ID:
      func(static_cast<inputCheckPasswordEmpty &>(obj));
      return true;
    case inputCheckPasswordSRP::ID:
      func(static_cast<inputCheckPasswordSRP &>(obj));
      return true;
    default:
      return false;
  }
}

/**
 * Calls the specified function object with the given object downcasted to its most derived type.
 * \param[in] obj Object to pass as an argument to the function object.
 * \param[in] func Function object to which the object will be passed.
 * \returns Whether function object call has happened. Should always return true for correct parameters.
 */
template <class T>
bool downcast_call(InputDocument &obj, const T &func) {
  switch (obj.get_id()) {
    case inputDocumentEmpty::ID:
      func(static_cast<inputDocumentEmpty &>(obj));
      return true;
    case inputDocument::ID:
      func(static_cast<inputDocument &>(obj));
      return true;
    default:
      return false;
  }
}

/**
 * Calls the specified function object with the given object downcasted to its most derived type.
 * \param[in] obj Object to pass as an argument to the function object.
 * \param[in] func Function object to which the object will be passed.
 * \returns Whether function object call has happened. Should always return true for correct parameters.
 */
template <class T>
bool downcast_call(InputEncryptedFile &obj, const T &func) {
  switch (obj.get_id()) {
    case inputEncryptedFileEmpty::ID:
      func(static_cast<inputEncryptedFileEmpty &>(obj));
      return true;
    case inputEncryptedFileUploaded::ID:
      func(static_cast<inputEncryptedFileUploaded &>(obj));
      return true;
    case inputEncryptedFile::ID:
      func(static_cast<inputEncryptedFile &>(obj));
      return true;
    case inputEncryptedFileBigUploaded::ID:
      func(static_cast<inputEncryptedFileBigUploaded &>(obj));
      return true;
    default:
      return false;
  }
}

/**
 * Calls the specified function object with the given object downcasted to its most derived type.
 * \param[in] obj Object to pass as an argument to the function object.
 * \param[in] func Function object to which the object will be passed.
 * \returns Whether function object call has happened. Should always return true for correct parameters.
 */
template <class T>
bool downcast_call(InputFile &obj, const T &func) {
  switch (obj.get_id()) {
    case inputFile::ID:
      func(static_cast<inputFile &>(obj));
      return true;
    case inputFileBig::ID:
      func(static_cast<inputFileBig &>(obj));
      return true;
    default:
      return false;
  }
}

/**
 * Calls the specified function object with the given object downcasted to its most derived type.
 * \param[in] obj Object to pass as an argument to the function object.
 * \param[in] func Function object to which the object will be passed.
 * \returns Whether function object call has happened. Should always return true for correct parameters.
 */
template <class T>
bool downcast_call(InputFileLocation &obj, const T &func) {
  switch (obj.get_id()) {
    case inputFileLocation::ID:
      func(static_cast<inputFileLocation &>(obj));
      return true;
    case inputEncryptedFileLocation::ID:
      func(static_cast<inputEncryptedFileLocation &>(obj));
      return true;
    case inputDocumentFileLocation::ID:
      func(static_cast<inputDocumentFileLocation &>(obj));
      return true;
    case inputSecureFileLocation::ID:
      func(static_cast<inputSecureFileLocation &>(obj));
      return true;
    case inputTakeoutFileLocation::ID:
      func(static_cast<inputTakeoutFileLocation &>(obj));
      return true;
    default:
      return false;
  }
}

/**
 * Calls the specified function object with the given object downcasted to its most derived type.
 * \param[in] obj Object to pass as an argument to the function object.
 * \param[in] func Function object to which the object will be passed.
 * \returns Whether function object call has happened. Should always return true for correct parameters.
 */
template <class T>
bool downcast_call(InputGame &obj, const T &func) {
  switch (obj.get_id()) {
    case inputGameID::ID:
      func(static_cast<inputGameID &>(obj));
      return true;
    case inputGameShortName::ID:
      func(static_cast<inputGameShortName &>(obj));
      return true;
    default:
      return false;
  }
}

/**
 * Calls the specified function object with the given object downcasted to its most derived type.
 * \param[in] obj Object to pass as an argument to the function object.
 * \param[in] func Function object to which the object will be passed.
 * \returns Whether function object call has happened. Should always return true for correct parameters.
 */
template <class T>
bool downcast_call(InputGeoPoint &obj, const T &func) {
  switch (obj.get_id()) {
    case inputGeoPointEmpty::ID:
      func(static_cast<inputGeoPointEmpty &>(obj));
      return true;
    case inputGeoPoint::ID:
      func(static_cast<inputGeoPoint &>(obj));
      return true;
    default:
      return false;
  }
}

/**
 * Calls the specified function object with the given object downcasted to its most derived type.
 * \param[in] obj Object to pass as an argument to the function object.
 * \param[in] func Function object to which the object will be passed.
 * \returns Whether function object call has happened. Should always return true for correct parameters.
 */
template <class T>
bool downcast_call(InputMedia &obj, const T &func) {
  switch (obj.get_id()) {
    case inputMediaEmpty::ID:
      func(static_cast<inputMediaEmpty &>(obj));
      return true;
    case inputMediaUploadedPhoto::ID:
      func(static_cast<inputMediaUploadedPhoto &>(obj));
      return true;
    case inputMediaPhoto::ID:
      func(static_cast<inputMediaPhoto &>(obj));
      return true;
    case inputMediaGeoPoint::ID:
      func(static_cast<inputMediaGeoPoint &>(obj));
      return true;
    case inputMediaContact::ID:
      func(static_cast<inputMediaContact &>(obj));
      return true;
    case inputMediaUploadedDocument::ID:
      func(static_cast<inputMediaUploadedDocument &>(obj));
      return true;
    case inputMediaDocument::ID:
      func(static_cast<inputMediaDocument &>(obj));
      return true;
    case inputMediaVenue::ID:
      func(static_cast<inputMediaVenue &>(obj));
      return true;
    case inputMediaGifExternal::ID:
      func(static_cast<inputMediaGifExternal &>(obj));
      return true;
    case inputMediaPhotoExternal::ID:
      func(static_cast<inputMediaPhotoExternal &>(obj));
      return true;
    case inputMediaDocumentExternal::ID:
      func(static_cast<inputMediaDocumentExternal &>(obj));
      return true;
    case inputMediaGame::ID:
      func(static_cast<inputMediaGame &>(obj));
      return true;
    case inputMediaInvoice::ID:
      func(static_cast<inputMediaInvoice &>(obj));
      return true;
    case inputMediaGeoLive::ID:
      func(static_cast<inputMediaGeoLive &>(obj));
      return true;
    default:
      return false;
  }
}

/**
 * Calls the specified function object with the given object downcasted to its most derived type.
 * \param[in] obj Object to pass as an argument to the function object.
 * \param[in] func Function object to which the object will be passed.
 * \returns Whether function object call has happened. Should always return true for correct parameters.
 */
template <class T>
bool downcast_call(InputMessage &obj, const T &func) {
  switch (obj.get_id()) {
    case inputMessageID::ID:
      func(static_cast<inputMessageID &>(obj));
      return true;
    case inputMessageReplyTo::ID:
      func(static_cast<inputMessageReplyTo &>(obj));
      return true;
    case inputMessagePinned::ID:
      func(static_cast<inputMessagePinned &>(obj));
      return true;
    default:
      return false;
  }
}

/**
 * Calls the specified function object with the given object downcasted to its most derived type.
 * \param[in] obj Object to pass as an argument to the function object.
 * \param[in] func Function object to which the object will be passed.
 * \returns Whether function object call has happened. Should always return true for correct parameters.
 */
template <class T>
bool downcast_call(InputNotifyPeer &obj, const T &func) {
  switch (obj.get_id()) {
    case inputNotifyPeer::ID:
      func(static_cast<inputNotifyPeer &>(obj));
      return true;
    case inputNotifyUsers::ID:
      func(static_cast<inputNotifyUsers &>(obj));
      return true;
    case inputNotifyChats::ID:
      func(static_cast<inputNotifyChats &>(obj));
      return true;
    default:
      return false;
  }
}

/**
 * Calls the specified function object with the given object downcasted to its most derived type.
 * \param[in] obj Object to pass as an argument to the function object.
 * \param[in] func Function object to which the object will be passed.
 * \returns Whether function object call has happened. Should always return true for correct parameters.
 */
template <class T>
bool downcast_call(InputPaymentCredentials &obj, const T &func) {
  switch (obj.get_id()) {
    case inputPaymentCredentialsSaved::ID:
      func(static_cast<inputPaymentCredentialsSaved &>(obj));
      return true;
    case inputPaymentCredentials::ID:
      func(static_cast<inputPaymentCredentials &>(obj));
      return true;
    case inputPaymentCredentialsApplePay::ID:
      func(static_cast<inputPaymentCredentialsApplePay &>(obj));
      return true;
    case inputPaymentCredentialsAndroidPay::ID:
      func(static_cast<inputPaymentCredentialsAndroidPay &>(obj));
      return true;
    default:
      return false;
  }
}

/**
 * Calls the specified function object with the given object downcasted to its most derived type.
 * \param[in] obj Object to pass as an argument to the function object.
 * \param[in] func Function object to which the object will be passed.
 * \returns Whether function object call has happened. Should always return true for correct parameters.
 */
template <class T>
bool downcast_call(InputPeer &obj, const T &func) {
  switch (obj.get_id()) {
    case inputPeerEmpty::ID:
      func(static_cast<inputPeerEmpty &>(obj));
      return true;
    case inputPeerSelf::ID:
      func(static_cast<inputPeerSelf &>(obj));
      return true;
    case inputPeerChat::ID:
      func(static_cast<inputPeerChat &>(obj));
      return true;
    case inputPeerUser::ID:
      func(static_cast<inputPeerUser &>(obj));
      return true;
    case inputPeerChannel::ID:
      func(static_cast<inputPeerChannel &>(obj));
      return true;
    default:
      return false;
  }
}

/**
 * Calls the specified function object with the given object downcasted to its most derived type.
 * \param[in] obj Object to pass as an argument to the function object.
 * \param[in] func Function object to which the object will be passed.
 * \returns Whether function object call has happened. Should always return true for correct parameters.
 */
template <class T>
bool downcast_call(InputPhoto &obj, const T &func) {
  switch (obj.get_id()) {
    case inputPhotoEmpty::ID:
      func(static_cast<inputPhotoEmpty &>(obj));
      return true;
    case inputPhoto::ID:
      func(static_cast<inputPhoto &>(obj));
      return true;
    default:
      return false;
  }
}

/**
 * Calls the specified function object with the given object downcasted to its most derived type.
 * \param[in] obj Object to pass as an argument to the function object.
 * \param[in] func Function object to which the object will be passed.
 * \returns Whether function object call has happened. Should always return true for correct parameters.
 */
template <class T>
bool downcast_call(InputPrivacyKey &obj, const T &func) {
  switch (obj.get_id()) {
    case inputPrivacyKeyStatusTimestamp::ID:
      func(static_cast<inputPrivacyKeyStatusTimestamp &>(obj));
      return true;
    case inputPrivacyKeyChatInvite::ID:
      func(static_cast<inputPrivacyKeyChatInvite &>(obj));
      return true;
    case inputPrivacyKeyPhoneCall::ID:
      func(static_cast<inputPrivacyKeyPhoneCall &>(obj));
      return true;
    default:
      return false;
  }
}

/**
 * Calls the specified function object with the given object downcasted to its most derived type.
 * \param[in] obj Object to pass as an argument to the function object.
 * \param[in] func Function object to which the object will be passed.
 * \returns Whether function object call has happened. Should always return true for correct parameters.
 */
template <class T>
bool downcast_call(InputPrivacyRule &obj, const T &func) {
  switch (obj.get_id()) {
    case inputPrivacyValueAllowContacts::ID:
      func(static_cast<inputPrivacyValueAllowContacts &>(obj));
      return true;
    case inputPrivacyValueAllowAll::ID:
      func(static_cast<inputPrivacyValueAllowAll &>(obj));
      return true;
    case inputPrivacyValueAllowUsers::ID:
      func(static_cast<inputPrivacyValueAllowUsers &>(obj));
      return true;
    case inputPrivacyValueDisallowContacts::ID:
      func(static_cast<inputPrivacyValueDisallowContacts &>(obj));
      return true;
    case inputPrivacyValueDisallowAll::ID:
      func(static_cast<inputPrivacyValueDisallowAll &>(obj));
      return true;
    case inputPrivacyValueDisallowUsers::ID:
      func(static_cast<inputPrivacyValueDisallowUsers &>(obj));
      return true;
    default:
      return false;
  }
}

/**
 * Calls the specified function object with the given object downcasted to its most derived type.
 * \param[in] obj Object to pass as an argument to the function object.
 * \param[in] func Function object to which the object will be passed.
 * \returns Whether function object call has happened. Should always return true for correct parameters.
 */
template <class T>
bool downcast_call(InputSecureFile &obj, const T &func) {
  switch (obj.get_id()) {
    case inputSecureFileUploaded::ID:
      func(static_cast<inputSecureFileUploaded &>(obj));
      return true;
    case inputSecureFile::ID:
      func(static_cast<inputSecureFile &>(obj));
      return true;
    default:
      return false;
  }
}

/**
 * Calls the specified function object with the given object downcasted to its most derived type.
 * \param[in] obj Object to pass as an argument to the function object.
 * \param[in] func Function object to which the object will be passed.
 * \returns Whether function object call has happened. Should always return true for correct parameters.
 */
template <class T>
bool downcast_call(InputStickerSet &obj, const T &func) {
  switch (obj.get_id()) {
    case inputStickerSetEmpty::ID:
      func(static_cast<inputStickerSetEmpty &>(obj));
      return true;
    case inputStickerSetID::ID:
      func(static_cast<inputStickerSetID &>(obj));
      return true;
    case inputStickerSetShortName::ID:
      func(static_cast<inputStickerSetShortName &>(obj));
      return true;
    default:
      return false;
  }
}

/**
 * Calls the specified function object with the given object downcasted to its most derived type.
 * \param[in] obj Object to pass as an argument to the function object.
 * \param[in] func Function object to which the object will be passed.
 * \returns Whether function object call has happened. Should always return true for correct parameters.
 */
template <class T>
bool downcast_call(InputStickeredMedia &obj, const T &func) {
  switch (obj.get_id()) {
    case inputStickeredMediaPhoto::ID:
      func(static_cast<inputStickeredMediaPhoto &>(obj));
      return true;
    case inputStickeredMediaDocument::ID:
      func(static_cast<inputStickeredMediaDocument &>(obj));
      return true;
    default:
      return false;
  }
}

/**
 * Calls the specified function object with the given object downcasted to its most derived type.
 * \param[in] obj Object to pass as an argument to the function object.
 * \param[in] func Function object to which the object will be passed.
 * \returns Whether function object call has happened. Should always return true for correct parameters.
 */
template <class T>
bool downcast_call(InputUser &obj, const T &func) {
  switch (obj.get_id()) {
    case inputUserEmpty::ID:
      func(static_cast<inputUserEmpty &>(obj));
      return true;
    case inputUserSelf::ID:
      func(static_cast<inputUserSelf &>(obj));
      return true;
    case inputUser::ID:
      func(static_cast<inputUser &>(obj));
      return true;
    default:
      return false;
  }
}

/**
 * Calls the specified function object with the given object downcasted to its most derived type.
 * \param[in] obj Object to pass as an argument to the function object.
 * \param[in] func Function object to which the object will be passed.
 * \returns Whether function object call has happened. Should always return true for correct parameters.
 */
template <class T>
bool downcast_call(InputWebFileLocation &obj, const T &func) {
  switch (obj.get_id()) {
    case inputWebFileLocation::ID:
      func(static_cast<inputWebFileLocation &>(obj));
      return true;
    case inputWebFileGeoPointLocation::ID:
      func(static_cast<inputWebFileGeoPointLocation &>(obj));
      return true;
    default:
      return false;
  }
}

/**
 * Calls the specified function object with the given object downcasted to its most derived type.
 * \param[in] obj Object to pass as an argument to the function object.
 * \param[in] func Function object to which the object will be passed.
 * \returns Whether function object call has happened. Should always return true for correct parameters.
 */
template <class T>
bool downcast_call(IpPort &obj, const T &func) {
  switch (obj.get_id()) {
    case ipPort::ID:
      func(static_cast<ipPort &>(obj));
      return true;
    case ipPortSecret::ID:
      func(static_cast<ipPortSecret &>(obj));
      return true;
    default:
      return false;
  }
}

/**
 * Calls the specified function object with the given object downcasted to its most derived type.
 * \param[in] obj Object to pass as an argument to the function object.
 * \param[in] func Function object to which the object will be passed.
 * \returns Whether function object call has happened. Should always return true for correct parameters.
 */
template <class T>
bool downcast_call(KeyboardButton &obj, const T &func) {
  switch (obj.get_id()) {
    case keyboardButton::ID:
      func(static_cast<keyboardButton &>(obj));
      return true;
    case keyboardButtonUrl::ID:
      func(static_cast<keyboardButtonUrl &>(obj));
      return true;
    case keyboardButtonCallback::ID:
      func(static_cast<keyboardButtonCallback &>(obj));
      return true;
    case keyboardButtonRequestPhone::ID:
      func(static_cast<keyboardButtonRequestPhone &>(obj));
      return true;
    case keyboardButtonRequestGeoLocation::ID:
      func(static_cast<keyboardButtonRequestGeoLocation &>(obj));
      return true;
    case keyboardButtonSwitchInline::ID:
      func(static_cast<keyboardButtonSwitchInline &>(obj));
      return true;
    case keyboardButtonGame::ID:
      func(static_cast<keyboardButtonGame &>(obj));
      return true;
    case keyboardButtonBuy::ID:
      func(static_cast<keyboardButtonBuy &>(obj));
      return true;
    default:
      return false;
  }
}

/**
 * Calls the specified function object with the given object downcasted to its most derived type.
 * \param[in] obj Object to pass as an argument to the function object.
 * \param[in] func Function object to which the object will be passed.
 * \returns Whether function object call has happened. Should always return true for correct parameters.
 */
template <class T>
bool downcast_call(LangPackString &obj, const T &func) {
  switch (obj.get_id()) {
    case langPackString::ID:
      func(static_cast<langPackString &>(obj));
      return true;
    case langPackStringPluralized::ID:
      func(static_cast<langPackStringPluralized &>(obj));
      return true;
    case langPackStringDeleted::ID:
      func(static_cast<langPackStringDeleted &>(obj));
      return true;
    default:
      return false;
  }
}

/**
 * Calls the specified function object with the given object downcasted to its most derived type.
 * \param[in] obj Object to pass as an argument to the function object.
 * \param[in] func Function object to which the object will be passed.
 * \returns Whether function object call has happened. Should always return true for correct parameters.
 */
template <class T>
bool downcast_call(Message &obj, const T &func) {
  switch (obj.get_id()) {
    case messageEmpty::ID:
      func(static_cast<messageEmpty &>(obj));
      return true;
    case message::ID:
      func(static_cast<message &>(obj));
      return true;
    case messageService::ID:
      func(static_cast<messageService &>(obj));
      return true;
    default:
      return false;
  }
}

/**
 * Calls the specified function object with the given object downcasted to its most derived type.
 * \param[in] obj Object to pass as an argument to the function object.
 * \param[in] func Function object to which the object will be passed.
 * \returns Whether function object call has happened. Should always return true for correct parameters.
 */
template <class T>
bool downcast_call(MessageAction &obj, const T &func) {
  switch (obj.get_id()) {
    case messageActionEmpty::ID:
      func(static_cast<messageActionEmpty &>(obj));
      return true;
    case messageActionChatCreate::ID:
      func(static_cast<messageActionChatCreate &>(obj));
      return true;
    case messageActionChatEditTitle::ID:
      func(static_cast<messageActionChatEditTitle &>(obj));
      return true;
    case messageActionChatEditPhoto::ID:
      func(static_cast<messageActionChatEditPhoto &>(obj));
      return true;
    case messageActionChatDeletePhoto::ID:
      func(static_cast<messageActionChatDeletePhoto &>(obj));
      return true;
    case messageActionChatAddUser::ID:
      func(static_cast<messageActionChatAddUser &>(obj));
      return true;
    case messageActionChatDeleteUser::ID:
      func(static_cast<messageActionChatDeleteUser &>(obj));
      return true;
    case messageActionChatJoinedByLink::ID:
      func(static_cast<messageActionChatJoinedByLink &>(obj));
      return true;
    case messageActionChannelCreate::ID:
      func(static_cast<messageActionChannelCreate &>(obj));
      return true;
    case messageActionChatMigrateTo::ID:
      func(static_cast<messageActionChatMigrateTo &>(obj));
      return true;
    case messageActionChannelMigrateFrom::ID:
      func(static_cast<messageActionChannelMigrateFrom &>(obj));
      return true;
    case messageActionPinMessage::ID:
      func(static_cast<messageActionPinMessage &>(obj));
      return true;
    case messageActionHistoryClear::ID:
      func(static_cast<messageActionHistoryClear &>(obj));
      return true;
    case messageActionGameScore::ID:
      func(static_cast<messageActionGameScore &>(obj));
      return true;
    case messageActionPaymentSentMe::ID:
      func(static_cast<messageActionPaymentSentMe &>(obj));
      return true;
    case messageActionPaymentSent::ID:
      func(static_cast<messageActionPaymentSent &>(obj));
      return true;
    case messageActionPhoneCall::ID:
      func(static_cast<messageActionPhoneCall &>(obj));
      return true;
    case messageActionScreenshotTaken::ID:
      func(static_cast<messageActionScreenshotTaken &>(obj));
      return true;
    case messageActionCustomAction::ID:
      func(static_cast<messageActionCustomAction &>(obj));
      return true;
    case messageActionBotAllowed::ID:
      func(static_cast<messageActionBotAllowed &>(obj));
      return true;
    case messageActionSecureValuesSentMe::ID:
      func(static_cast<messageActionSecureValuesSentMe &>(obj));
      return true;
    case messageActionSecureValuesSent::ID:
      func(static_cast<messageActionSecureValuesSent &>(obj));
      return true;
    default:
      return false;
  }
}

/**
 * Calls the specified function object with the given object downcasted to its most derived type.
 * \param[in] obj Object to pass as an argument to the function object.
 * \param[in] func Function object to which the object will be passed.
 * \returns Whether function object call has happened. Should always return true for correct parameters.
 */
template <class T>
bool downcast_call(MessageEntity &obj, const T &func) {
  switch (obj.get_id()) {
    case messageEntityUnknown::ID:
      func(static_cast<messageEntityUnknown &>(obj));
      return true;
    case messageEntityMention::ID:
      func(static_cast<messageEntityMention &>(obj));
      return true;
    case messageEntityHashtag::ID:
      func(static_cast<messageEntityHashtag &>(obj));
      return true;
    case messageEntityBotCommand::ID:
      func(static_cast<messageEntityBotCommand &>(obj));
      return true;
    case messageEntityUrl::ID:
      func(static_cast<messageEntityUrl &>(obj));
      return true;
    case messageEntityEmail::ID:
      func(static_cast<messageEntityEmail &>(obj));
      return true;
    case messageEntityBold::ID:
      func(static_cast<messageEntityBold &>(obj));
      return true;
    case messageEntityItalic::ID:
      func(static_cast<messageEntityItalic &>(obj));
      return true;
    case messageEntityCode::ID:
      func(static_cast<messageEntityCode &>(obj));
      return true;
    case messageEntityPre::ID:
      func(static_cast<messageEntityPre &>(obj));
      return true;
    case messageEntityTextUrl::ID:
      func(static_cast<messageEntityTextUrl &>(obj));
      return true;
    case messageEntityMentionName::ID:
      func(static_cast<messageEntityMentionName &>(obj));
      return true;
    case inputMessageEntityMentionName::ID:
      func(static_cast<inputMessageEntityMentionName &>(obj));
      return true;
    case messageEntityPhone::ID:
      func(static_cast<messageEntityPhone &>(obj));
      return true;
    case messageEntityCashtag::ID:
      func(static_cast<messageEntityCashtag &>(obj));
      return true;
    default:
      return false;
  }
}

/**
 * Calls the specified function object with the given object downcasted to its most derived type.
 * \param[in] obj Object to pass as an argument to the function object.
 * \param[in] func Function object to which the object will be passed.
 * \returns Whether function object call has happened. Should always return true for correct parameters.
 */
template <class T>
bool downcast_call(MessageMedia &obj, const T &func) {
  switch (obj.get_id()) {
    case messageMediaEmpty::ID:
      func(static_cast<messageMediaEmpty &>(obj));
      return true;
    case messageMediaPhoto::ID:
      func(static_cast<messageMediaPhoto &>(obj));
      return true;
    case messageMediaGeo::ID:
      func(static_cast<messageMediaGeo &>(obj));
      return true;
    case messageMediaContact::ID:
      func(static_cast<messageMediaContact &>(obj));
      return true;
    case messageMediaUnsupported::ID:
      func(static_cast<messageMediaUnsupported &>(obj));
      return true;
    case messageMediaDocument::ID:
      func(static_cast<messageMediaDocument &>(obj));
      return true;
    case messageMediaWebPage::ID:
      func(static_cast<messageMediaWebPage &>(obj));
      return true;
    case messageMediaVenue::ID:
      func(static_cast<messageMediaVenue &>(obj));
      return true;
    case messageMediaGame::ID:
      func(static_cast<messageMediaGame &>(obj));
      return true;
    case messageMediaInvoice::ID:
      func(static_cast<messageMediaInvoice &>(obj));
      return true;
    case messageMediaGeoLive::ID:
      func(static_cast<messageMediaGeoLive &>(obj));
      return true;
    default:
      return false;
  }
}

/**
 * Calls the specified function object with the given object downcasted to its most derived type.
 * \param[in] obj Object to pass as an argument to the function object.
 * \param[in] func Function object to which the object will be passed.
 * \returns Whether function object call has happened. Should always return true for correct parameters.
 */
template <class T>
bool downcast_call(MessagesFilter &obj, const T &func) {
  switch (obj.get_id()) {
    case inputMessagesFilterEmpty::ID:
      func(static_cast<inputMessagesFilterEmpty &>(obj));
      return true;
    case inputMessagesFilterPhotos::ID:
      func(static_cast<inputMessagesFilterPhotos &>(obj));
      return true;
    case inputMessagesFilterVideo::ID:
      func(static_cast<inputMessagesFilterVideo &>(obj));
      return true;
    case inputMessagesFilterPhotoVideo::ID:
      func(static_cast<inputMessagesFilterPhotoVideo &>(obj));
      return true;
    case inputMessagesFilterDocument::ID:
      func(static_cast<inputMessagesFilterDocument &>(obj));
      return true;
    case inputMessagesFilterUrl::ID:
      func(static_cast<inputMessagesFilterUrl &>(obj));
      return true;
    case inputMessagesFilterGif::ID:
      func(static_cast<inputMessagesFilterGif &>(obj));
      return true;
    case inputMessagesFilterVoice::ID:
      func(static_cast<inputMessagesFilterVoice &>(obj));
      return true;
    case inputMessagesFilterMusic::ID:
      func(static_cast<inputMessagesFilterMusic &>(obj));
      return true;
    case inputMessagesFilterChatPhotos::ID:
      func(static_cast<inputMessagesFilterChatPhotos &>(obj));
      return true;
    case inputMessagesFilterPhoneCalls::ID:
      func(static_cast<inputMessagesFilterPhoneCalls &>(obj));
      return true;
    case inputMessagesFilterRoundVoice::ID:
      func(static_cast<inputMessagesFilterRoundVoice &>(obj));
      return true;
    case inputMessagesFilterRoundVideo::ID:
      func(static_cast<inputMessagesFilterRoundVideo &>(obj));
      return true;
    case inputMessagesFilterMyMentions::ID:
      func(static_cast<inputMessagesFilterMyMentions &>(obj));
      return true;
    case inputMessagesFilterGeo::ID:
      func(static_cast<inputMessagesFilterGeo &>(obj));
      return true;
    case inputMessagesFilterContacts::ID:
      func(static_cast<inputMessagesFilterContacts &>(obj));
      return true;
    default:
      return false;
  }
}

/**
 * Calls the specified function object with the given object downcasted to its most derived type.
 * \param[in] obj Object to pass as an argument to the function object.
 * \param[in] func Function object to which the object will be passed.
 * \returns Whether function object call has happened. Should always return true for correct parameters.
 */
template <class T>
bool downcast_call(NotifyPeer &obj, const T &func) {
  switch (obj.get_id()) {
    case notifyPeer::ID:
      func(static_cast<notifyPeer &>(obj));
      return true;
    case notifyUsers::ID:
      func(static_cast<notifyUsers &>(obj));
      return true;
    case notifyChats::ID:
      func(static_cast<notifyChats &>(obj));
      return true;
    default:
      return false;
  }
}

/**
 * Calls the specified function object with the given object downcasted to its most derived type.
 * \param[in] obj Object to pass as an argument to the function object.
 * \param[in] func Function object to which the object will be passed.
 * \returns Whether function object call has happened. Should always return true for correct parameters.
 */
template <class T>
bool downcast_call(Page &obj, const T &func) {
  switch (obj.get_id()) {
    case pagePart::ID:
      func(static_cast<pagePart &>(obj));
      return true;
    case pageFull::ID:
      func(static_cast<pageFull &>(obj));
      return true;
    default:
      return false;
  }
}

/**
 * Calls the specified function object with the given object downcasted to its most derived type.
 * \param[in] obj Object to pass as an argument to the function object.
 * \param[in] func Function object to which the object will be passed.
 * \returns Whether function object call has happened. Should always return true for correct parameters.
 */
template <class T>
bool downcast_call(PageBlock &obj, const T &func) {
  switch (obj.get_id()) {
    case pageBlockUnsupported::ID:
      func(static_cast<pageBlockUnsupported &>(obj));
      return true;
    case pageBlockTitle::ID:
      func(static_cast<pageBlockTitle &>(obj));
      return true;
    case pageBlockSubtitle::ID:
      func(static_cast<pageBlockSubtitle &>(obj));
      return true;
    case pageBlockAuthorDate::ID:
      func(static_cast<pageBlockAuthorDate &>(obj));
      return true;
    case pageBlockHeader::ID:
      func(static_cast<pageBlockHeader &>(obj));
      return true;
    case pageBlockSubheader::ID:
      func(static_cast<pageBlockSubheader &>(obj));
      return true;
    case pageBlockParagraph::ID:
      func(static_cast<pageBlockParagraph &>(obj));
      return true;
    case pageBlockPreformatted::ID:
      func(static_cast<pageBlockPreformatted &>(obj));
      return true;
    case pageBlockFooter::ID:
      func(static_cast<pageBlockFooter &>(obj));
      return true;
    case pageBlockDivider::ID:
      func(static_cast<pageBlockDivider &>(obj));
      return true;
    case pageBlockAnchor::ID:
      func(static_cast<pageBlockAnchor &>(obj));
      return true;
    case pageBlockList::ID:
      func(static_cast<pageBlockList &>(obj));
      return true;
    case pageBlockBlockquote::ID:
      func(static_cast<pageBlockBlockquote &>(obj));
      return true;
    case pageBlockPullquote::ID:
      func(static_cast<pageBlockPullquote &>(obj));
      return true;
    case pageBlockPhoto::ID:
      func(static_cast<pageBlockPhoto &>(obj));
      return true;
    case pageBlockVideo::ID:
      func(static_cast<pageBlockVideo &>(obj));
      return true;
    case pageBlockCover::ID:
      func(static_cast<pageBlockCover &>(obj));
      return true;
    case pageBlockEmbed::ID:
      func(static_cast<pageBlockEmbed &>(obj));
      return true;
    case pageBlockEmbedPost::ID:
      func(static_cast<pageBlockEmbedPost &>(obj));
      return true;
    case pageBlockCollage::ID:
      func(static_cast<pageBlockCollage &>(obj));
      return true;
    case pageBlockSlideshow::ID:
      func(static_cast<pageBlockSlideshow &>(obj));
      return true;
    case pageBlockChannel::ID:
      func(static_cast<pageBlockChannel &>(obj));
      return true;
    case pageBlockAudio::ID:
      func(static_cast<pageBlockAudio &>(obj));
      return true;
    default:
      return false;
  }
}

/**
 * Calls the specified function object with the given object downcasted to its most derived type.
 * \param[in] obj Object to pass as an argument to the function object.
 * \param[in] func Function object to which the object will be passed.
 * \returns Whether function object call has happened. Should always return true for correct parameters.
 */
template <class T>
bool downcast_call(PasswordKdfAlgo &obj, const T &func) {
  switch (obj.get_id()) {
    case passwordKdfAlgoUnknown::ID:
      func(static_cast<passwordKdfAlgoUnknown &>(obj));
      return true;
    case passwordKdfAlgoSHA256SHA256PBKDF2HMACSHA512iter100000SHA256ModPow::ID:
      func(static_cast<passwordKdfAlgoSHA256SHA256PBKDF2HMACSHA512iter100000SHA256ModPow &>(obj));
      return true;
    default:
      return false;
  }
}

/**
 * Calls the specified function object with the given object downcasted to its most derived type.
 * \param[in] obj Object to pass as an argument to the function object.
 * \param[in] func Function object to which the object will be passed.
 * \returns Whether function object call has happened. Should always return true for correct parameters.
 */
template <class T>
bool downcast_call(Peer &obj, const T &func) {
  switch (obj.get_id()) {
    case peerUser::ID:
      func(static_cast<peerUser &>(obj));
      return true;
    case peerChat::ID:
      func(static_cast<peerChat &>(obj));
      return true;
    case peerChannel::ID:
      func(static_cast<peerChannel &>(obj));
      return true;
    default:
      return false;
  }
}

/**
 * Calls the specified function object with the given object downcasted to its most derived type.
 * \param[in] obj Object to pass as an argument to the function object.
 * \param[in] func Function object to which the object will be passed.
 * \returns Whether function object call has happened. Should always return true for correct parameters.
 */
template <class T>
bool downcast_call(PhoneCall &obj, const T &func) {
  switch (obj.get_id()) {
    case phoneCallEmpty::ID:
      func(static_cast<phoneCallEmpty &>(obj));
      return true;
    case phoneCallWaiting::ID:
      func(static_cast<phoneCallWaiting &>(obj));
      return true;
    case phoneCallRequested::ID:
      func(static_cast<phoneCallRequested &>(obj));
      return true;
    case phoneCallAccepted::ID:
      func(static_cast<phoneCallAccepted &>(obj));
      return true;
    case phoneCall::ID:
      func(static_cast<phoneCall &>(obj));
      return true;
    case phoneCallDiscarded::ID:
      func(static_cast<phoneCallDiscarded &>(obj));
      return true;
    default:
      return false;
  }
}

/**
 * Calls the specified function object with the given object downcasted to its most derived type.
 * \param[in] obj Object to pass as an argument to the function object.
 * \param[in] func Function object to which the object will be passed.
 * \returns Whether function object call has happened. Should always return true for correct parameters.
 */
template <class T>
bool downcast_call(PhoneCallDiscardReason &obj, const T &func) {
  switch (obj.get_id()) {
    case phoneCallDiscardReasonMissed::ID:
      func(static_cast<phoneCallDiscardReasonMissed &>(obj));
      return true;
    case phoneCallDiscardReasonDisconnect::ID:
      func(static_cast<phoneCallDiscardReasonDisconnect &>(obj));
      return true;
    case phoneCallDiscardReasonHangup::ID:
      func(static_cast<phoneCallDiscardReasonHangup &>(obj));
      return true;
    case phoneCallDiscardReasonBusy::ID:
      func(static_cast<phoneCallDiscardReasonBusy &>(obj));
      return true;
    default:
      return false;
  }
}

/**
 * Calls the specified function object with the given object downcasted to its most derived type.
 * \param[in] obj Object to pass as an argument to the function object.
 * \param[in] func Function object to which the object will be passed.
 * \returns Whether function object call has happened. Should always return true for correct parameters.
 */
template <class T>
bool downcast_call(Photo &obj, const T &func) {
  switch (obj.get_id()) {
    case photoEmpty::ID:
      func(static_cast<photoEmpty &>(obj));
      return true;
    case photo::ID:
      func(static_cast<photo &>(obj));
      return true;
    default:
      return false;
  }
}

/**
 * Calls the specified function object with the given object downcasted to its most derived type.
 * \param[in] obj Object to pass as an argument to the function object.
 * \param[in] func Function object to which the object will be passed.
 * \returns Whether function object call has happened. Should always return true for correct parameters.
 */
template <class T>
bool downcast_call(PhotoSize &obj, const T &func) {
  switch (obj.get_id()) {
    case photoSizeEmpty::ID:
      func(static_cast<photoSizeEmpty &>(obj));
      return true;
    case photoSize::ID:
      func(static_cast<photoSize &>(obj));
      return true;
    case photoCachedSize::ID:
      func(static_cast<photoCachedSize &>(obj));
      return true;
    default:
      return false;
  }
}

/**
 * Calls the specified function object with the given object downcasted to its most derived type.
 * \param[in] obj Object to pass as an argument to the function object.
 * \param[in] func Function object to which the object will be passed.
 * \returns Whether function object call has happened. Should always return true for correct parameters.
 */
template <class T>
bool downcast_call(PrivacyKey &obj, const T &func) {
  switch (obj.get_id()) {
    case privacyKeyStatusTimestamp::ID:
      func(static_cast<privacyKeyStatusTimestamp &>(obj));
      return true;
    case privacyKeyChatInvite::ID:
      func(static_cast<privacyKeyChatInvite &>(obj));
      return true;
    case privacyKeyPhoneCall::ID:
      func(static_cast<privacyKeyPhoneCall &>(obj));
      return true;
    default:
      return false;
  }
}

/**
 * Calls the specified function object with the given object downcasted to its most derived type.
 * \param[in] obj Object to pass as an argument to the function object.
 * \param[in] func Function object to which the object will be passed.
 * \returns Whether function object call has happened. Should always return true for correct parameters.
 */
template <class T>
bool downcast_call(PrivacyRule &obj, const T &func) {
  switch (obj.get_id()) {
    case privacyValueAllowContacts::ID:
      func(static_cast<privacyValueAllowContacts &>(obj));
      return true;
    case privacyValueAllowAll::ID:
      func(static_cast<privacyValueAllowAll &>(obj));
      return true;
    case privacyValueAllowUsers::ID:
      func(static_cast<privacyValueAllowUsers &>(obj));
      return true;
    case privacyValueDisallowContacts::ID:
      func(static_cast<privacyValueDisallowContacts &>(obj));
      return true;
    case privacyValueDisallowAll::ID:
      func(static_cast<privacyValueDisallowAll &>(obj));
      return true;
    case privacyValueDisallowUsers::ID:
      func(static_cast<privacyValueDisallowUsers &>(obj));
      return true;
    default:
      return false;
  }
}

/**
 * Calls the specified function object with the given object downcasted to its most derived type.
 * \param[in] obj Object to pass as an argument to the function object.
 * \param[in] func Function object to which the object will be passed.
 * \returns Whether function object call has happened. Should always return true for correct parameters.
 */
template <class T>
bool downcast_call(RecentMeUrl &obj, const T &func) {
  switch (obj.get_id()) {
    case recentMeUrlUnknown::ID:
      func(static_cast<recentMeUrlUnknown &>(obj));
      return true;
    case recentMeUrlUser::ID:
      func(static_cast<recentMeUrlUser &>(obj));
      return true;
    case recentMeUrlChat::ID:
      func(static_cast<recentMeUrlChat &>(obj));
      return true;
    case recentMeUrlChatInvite::ID:
      func(static_cast<recentMeUrlChatInvite &>(obj));
      return true;
    case recentMeUrlStickerSet::ID:
      func(static_cast<recentMeUrlStickerSet &>(obj));
      return true;
    default:
      return false;
  }
}

/**
 * Calls the specified function object with the given object downcasted to its most derived type.
 * \param[in] obj Object to pass as an argument to the function object.
 * \param[in] func Function object to which the object will be passed.
 * \returns Whether function object call has happened. Should always return true for correct parameters.
 */
template <class T>
bool downcast_call(ReplyMarkup &obj, const T &func) {
  switch (obj.get_id()) {
    case replyKeyboardHide::ID:
      func(static_cast<replyKeyboardHide &>(obj));
      return true;
    case replyKeyboardForceReply::ID:
      func(static_cast<replyKeyboardForceReply &>(obj));
      return true;
    case replyKeyboardMarkup::ID:
      func(static_cast<replyKeyboardMarkup &>(obj));
      return true;
    case replyInlineMarkup::ID:
      func(static_cast<replyInlineMarkup &>(obj));
      return true;
    default:
      return false;
  }
}

/**
 * Calls the specified function object with the given object downcasted to its most derived type.
 * \param[in] obj Object to pass as an argument to the function object.
 * \param[in] func Function object to which the object will be passed.
 * \returns Whether function object call has happened. Should always return true for correct parameters.
 */
template <class T>
bool downcast_call(ReportReason &obj, const T &func) {
  switch (obj.get_id()) {
    case inputReportReasonSpam::ID:
      func(static_cast<inputReportReasonSpam &>(obj));
      return true;
    case inputReportReasonViolence::ID:
      func(static_cast<inputReportReasonViolence &>(obj));
      return true;
    case inputReportReasonPornography::ID:
      func(static_cast<inputReportReasonPornography &>(obj));
      return true;
    case inputReportReasonOther::ID:
      func(static_cast<inputReportReasonOther &>(obj));
      return true;
    case inputReportReasonCopyright::ID:
      func(static_cast<inputReportReasonCopyright &>(obj));
      return true;
    default:
      return false;
  }
}

/**
 * Calls the specified function object with the given object downcasted to its most derived type.
 * \param[in] obj Object to pass as an argument to the function object.
 * \param[in] func Function object to which the object will be passed.
 * \returns Whether function object call has happened. Should always return true for correct parameters.
 */
template <class T>
bool downcast_call(RichText &obj, const T &func) {
  switch (obj.get_id()) {
    case textEmpty::ID:
      func(static_cast<textEmpty &>(obj));
      return true;
    case textPlain::ID:
      func(static_cast<textPlain &>(obj));
      return true;
    case textBold::ID:
      func(static_cast<textBold &>(obj));
      return true;
    case textItalic::ID:
      func(static_cast<textItalic &>(obj));
      return true;
    case textUnderline::ID:
      func(static_cast<textUnderline &>(obj));
      return true;
    case textStrike::ID:
      func(static_cast<textStrike &>(obj));
      return true;
    case textFixed::ID:
      func(static_cast<textFixed &>(obj));
      return true;
    case textUrl::ID:
      func(static_cast<textUrl &>(obj));
      return true;
    case textEmail::ID:
      func(static_cast<textEmail &>(obj));
      return true;
    case textConcat::ID:
      func(static_cast<textConcat &>(obj));
      return true;
    default:
      return false;
  }
}

/**
 * Calls the specified function object with the given object downcasted to its most derived type.
 * \param[in] obj Object to pass as an argument to the function object.
 * \param[in] func Function object to which the object will be passed.
 * \returns Whether function object call has happened. Should always return true for correct parameters.
 */
template <class T>
bool downcast_call(SecureFile &obj, const T &func) {
  switch (obj.get_id()) {
    case secureFileEmpty::ID:
      func(static_cast<secureFileEmpty &>(obj));
      return true;
    case secureFile::ID:
      func(static_cast<secureFile &>(obj));
      return true;
    default:
      return false;
  }
}

/**
 * Calls the specified function object with the given object downcasted to its most derived type.
 * \param[in] obj Object to pass as an argument to the function object.
 * \param[in] func Function object to which the object will be passed.
 * \returns Whether function object call has happened. Should always return true for correct parameters.
 */
template <class T>
bool downcast_call(SecurePasswordKdfAlgo &obj, const T &func) {
  switch (obj.get_id()) {
    case securePasswordKdfAlgoUnknown::ID:
      func(static_cast<securePasswordKdfAlgoUnknown &>(obj));
      return true;
    case securePasswordKdfAlgoPBKDF2HMACSHA512iter100000::ID:
      func(static_cast<securePasswordKdfAlgoPBKDF2HMACSHA512iter100000 &>(obj));
      return true;
    case securePasswordKdfAlgoSHA512::ID:
      func(static_cast<securePasswordKdfAlgoSHA512 &>(obj));
      return true;
    default:
      return false;
  }
}

/**
 * Calls the specified function object with the given object downcasted to its most derived type.
 * \param[in] obj Object to pass as an argument to the function object.
 * \param[in] func Function object to which the object will be passed.
 * \returns Whether function object call has happened. Should always return true for correct parameters.
 */
template <class T>
bool downcast_call(SecurePlainData &obj, const T &func) {
  switch (obj.get_id()) {
    case securePlainPhone::ID:
      func(static_cast<securePlainPhone &>(obj));
      return true;
    case securePlainEmail::ID:
      func(static_cast<securePlainEmail &>(obj));
      return true;
    default:
      return false;
  }
}

/**
 * Calls the specified function object with the given object downcasted to its most derived type.
 * \param[in] obj Object to pass as an argument to the function object.
 * \param[in] func Function object to which the object will be passed.
 * \returns Whether function object call has happened. Should always return true for correct parameters.
 */
template <class T>
bool downcast_call(SecureRequiredType &obj, const T &func) {
  switch (obj.get_id()) {
    case secureRequiredType::ID:
      func(static_cast<secureRequiredType &>(obj));
      return true;
    case secureRequiredTypeOneOf::ID:
      func(static_cast<secureRequiredTypeOneOf &>(obj));
      return true;
    default:
      return false;
  }
}

/**
 * Calls the specified function object with the given object downcasted to its most derived type.
 * \param[in] obj Object to pass as an argument to the function object.
 * \param[in] func Function object to which the object will be passed.
 * \returns Whether function object call has happened. Should always return true for correct parameters.
 */
template <class T>
bool downcast_call(SecureValueError &obj, const T &func) {
  switch (obj.get_id()) {
    case secureValueErrorData::ID:
      func(static_cast<secureValueErrorData &>(obj));
      return true;
    case secureValueErrorFrontSide::ID:
      func(static_cast<secureValueErrorFrontSide &>(obj));
      return true;
    case secureValueErrorReverseSide::ID:
      func(static_cast<secureValueErrorReverseSide &>(obj));
      return true;
    case secureValueErrorSelfie::ID:
      func(static_cast<secureValueErrorSelfie &>(obj));
      return true;
    case secureValueErrorFile::ID:
      func(static_cast<secureValueErrorFile &>(obj));
      return true;
    case secureValueErrorFiles::ID:
      func(static_cast<secureValueErrorFiles &>(obj));
      return true;
    case secureValueError::ID:
      func(static_cast<secureValueError &>(obj));
      return true;
    case secureValueErrorTranslationFile::ID:
      func(static_cast<secureValueErrorTranslationFile &>(obj));
      return true;
    case secureValueErrorTranslationFiles::ID:
      func(static_cast<secureValueErrorTranslationFiles &>(obj));
      return true;
    default:
      return false;
  }
}

/**
 * Calls the specified function object with the given object downcasted to its most derived type.
 * \param[in] obj Object to pass as an argument to the function object.
 * \param[in] func Function object to which the object will be passed.
 * \returns Whether function object call has happened. Should always return true for correct parameters.
 */
template <class T>
bool downcast_call(SecureValueType &obj, const T &func) {
  switch (obj.get_id()) {
    case secureValueTypePersonalDetails::ID:
      func(static_cast<secureValueTypePersonalDetails &>(obj));
      return true;
    case secureValueTypePassport::ID:
      func(static_cast<secureValueTypePassport &>(obj));
      return true;
    case secureValueTypeDriverLicense::ID:
      func(static_cast<secureValueTypeDriverLicense &>(obj));
      return true;
    case secureValueTypeIdentityCard::ID:
      func(static_cast<secureValueTypeIdentityCard &>(obj));
      return true;
    case secureValueTypeInternalPassport::ID:
      func(static_cast<secureValueTypeInternalPassport &>(obj));
      return true;
    case secureValueTypeAddress::ID:
      func(static_cast<secureValueTypeAddress &>(obj));
      return true;
    case secureValueTypeUtilityBill::ID:
      func(static_cast<secureValueTypeUtilityBill &>(obj));
      return true;
    case secureValueTypeBankStatement::ID:
      func(static_cast<secureValueTypeBankStatement &>(obj));
      return true;
    case secureValueTypeRentalAgreement::ID:
      func(static_cast<secureValueTypeRentalAgreement &>(obj));
      return true;
    case secureValueTypePassportRegistration::ID:
      func(static_cast<secureValueTypePassportRegistration &>(obj));
      return true;
    case secureValueTypeTemporaryRegistration::ID:
      func(static_cast<secureValueTypeTemporaryRegistration &>(obj));
      return true;
    case secureValueTypePhone::ID:
      func(static_cast<secureValueTypePhone &>(obj));
      return true;
    case secureValueTypeEmail::ID:
      func(static_cast<secureValueTypeEmail &>(obj));
      return true;
    default:
      return false;
  }
}

/**
 * Calls the specified function object with the given object downcasted to its most derived type.
 * \param[in] obj Object to pass as an argument to the function object.
 * \param[in] func Function object to which the object will be passed.
 * \returns Whether function object call has happened. Should always return true for correct parameters.
 */
template <class T>
bool downcast_call(SendMessageAction &obj, const T &func) {
  switch (obj.get_id()) {
    case sendMessageTypingAction::ID:
      func(static_cast<sendMessageTypingAction &>(obj));
      return true;
    case sendMessageCancelAction::ID:
      func(static_cast<sendMessageCancelAction &>(obj));
      return true;
    case sendMessageRecordVideoAction::ID:
      func(static_cast<sendMessageRecordVideoAction &>(obj));
      return true;
    case sendMessageUploadVideoAction::ID:
      func(static_cast<sendMessageUploadVideoAction &>(obj));
      return true;
    case sendMessageRecordAudioAction::ID:
      func(static_cast<sendMessageRecordAudioAction &>(obj));
      return true;
    case sendMessageUploadAudioAction::ID:
      func(static_cast<sendMessageUploadAudioAction &>(obj));
      return true;
    case sendMessageUploadPhotoAction::ID:
      func(static_cast<sendMessageUploadPhotoAction &>(obj));
      return true;
    case sendMessageUploadDocumentAction::ID:
      func(static_cast<sendMessageUploadDocumentAction &>(obj));
      return true;
    case sendMessageGeoLocationAction::ID:
      func(static_cast<sendMessageGeoLocationAction &>(obj));
      return true;
    case sendMessageChooseContactAction::ID:
      func(static_cast<sendMessageChooseContactAction &>(obj));
      return true;
    case sendMessageGamePlayAction::ID:
      func(static_cast<sendMessageGamePlayAction &>(obj));
      return true;
    case sendMessageRecordRoundAction::ID:
      func(static_cast<sendMessageRecordRoundAction &>(obj));
      return true;
    case sendMessageUploadRoundAction::ID:
      func(static_cast<sendMessageUploadRoundAction &>(obj));
      return true;
    default:
      return false;
  }
}

/**
 * Calls the specified function object with the given object downcasted to its most derived type.
 * \param[in] obj Object to pass as an argument to the function object.
 * \param[in] func Function object to which the object will be passed.
 * \returns Whether function object call has happened. Should always return true for correct parameters.
 */
template <class T>
bool downcast_call(StickerSetCovered &obj, const T &func) {
  switch (obj.get_id()) {
    case stickerSetCovered::ID:
      func(static_cast<stickerSetCovered &>(obj));
      return true;
    case stickerSetMultiCovered::ID:
      func(static_cast<stickerSetMultiCovered &>(obj));
      return true;
    default:
      return false;
  }
}

/**
 * Calls the specified function object with the given object downcasted to its most derived type.
 * \param[in] obj Object to pass as an argument to the function object.
 * \param[in] func Function object to which the object will be passed.
 * \returns Whether function object call has happened. Should always return true for correct parameters.
 */
template <class T>
bool downcast_call(TopPeerCategory &obj, const T &func) {
  switch (obj.get_id()) {
    case topPeerCategoryBotsPM::ID:
      func(static_cast<topPeerCategoryBotsPM &>(obj));
      return true;
    case topPeerCategoryBotsInline::ID:
      func(static_cast<topPeerCategoryBotsInline &>(obj));
      return true;
    case topPeerCategoryCorrespondents::ID:
      func(static_cast<topPeerCategoryCorrespondents &>(obj));
      return true;
    case topPeerCategoryGroups::ID:
      func(static_cast<topPeerCategoryGroups &>(obj));
      return true;
    case topPeerCategoryChannels::ID:
      func(static_cast<topPeerCategoryChannels &>(obj));
      return true;
    case topPeerCategoryPhoneCalls::ID:
      func(static_cast<topPeerCategoryPhoneCalls &>(obj));
      return true;
    default:
      return false;
  }
}

/**
 * Calls the specified function object with the given object downcasted to its most derived type.
 * \param[in] obj Object to pass as an argument to the function object.
 * \param[in] func Function object to which the object will be passed.
 * \returns Whether function object call has happened. Should always return true for correct parameters.
 */
template <class T>
bool downcast_call(Update &obj, const T &func) {
  switch (obj.get_id()) {
    case updateNewMessage::ID:
      func(static_cast<updateNewMessage &>(obj));
      return true;
    case updateMessageID::ID:
      func(static_cast<updateMessageID &>(obj));
      return true;
    case updateDeleteMessages::ID:
      func(static_cast<updateDeleteMessages &>(obj));
      return true;
    case updateUserTyping::ID:
      func(static_cast<updateUserTyping &>(obj));
      return true;
    case updateChatUserTyping::ID:
      func(static_cast<updateChatUserTyping &>(obj));
      return true;
    case updateChatParticipants::ID:
      func(static_cast<updateChatParticipants &>(obj));
      return true;
    case updateUserStatus::ID:
      func(static_cast<updateUserStatus &>(obj));
      return true;
    case updateUserName::ID:
      func(static_cast<updateUserName &>(obj));
      return true;
    case updateUserPhoto::ID:
      func(static_cast<updateUserPhoto &>(obj));
      return true;
    case updateContactRegistered::ID:
      func(static_cast<updateContactRegistered &>(obj));
      return true;
    case updateContactLink::ID:
      func(static_cast<updateContactLink &>(obj));
      return true;
    case updateNewEncryptedMessage::ID:
      func(static_cast<updateNewEncryptedMessage &>(obj));
      return true;
    case updateEncryptedChatTyping::ID:
      func(static_cast<updateEncryptedChatTyping &>(obj));
      return true;
    case updateEncryption::ID:
      func(static_cast<updateEncryption &>(obj));
      return true;
    case updateEncryptedMessagesRead::ID:
      func(static_cast<updateEncryptedMessagesRead &>(obj));
      return true;
    case updateChatParticipantAdd::ID:
      func(static_cast<updateChatParticipantAdd &>(obj));
      return true;
    case updateChatParticipantDelete::ID:
      func(static_cast<updateChatParticipantDelete &>(obj));
      return true;
    case updateDcOptions::ID:
      func(static_cast<updateDcOptions &>(obj));
      return true;
    case updateUserBlocked::ID:
      func(static_cast<updateUserBlocked &>(obj));
      return true;
    case updateNotifySettings::ID:
      func(static_cast<updateNotifySettings &>(obj));
      return true;
    case updateServiceNotification::ID:
      func(static_cast<updateServiceNotification &>(obj));
      return true;
    case updatePrivacy::ID:
      func(static_cast<updatePrivacy &>(obj));
      return true;
    case updateUserPhone::ID:
      func(static_cast<updateUserPhone &>(obj));
      return true;
    case updateReadHistoryInbox::ID:
      func(static_cast<updateReadHistoryInbox &>(obj));
      return true;
    case updateReadHistoryOutbox::ID:
      func(static_cast<updateReadHistoryOutbox &>(obj));
      return true;
    case updateWebPage::ID:
      func(static_cast<updateWebPage &>(obj));
      return true;
    case updateReadMessagesContents::ID:
      func(static_cast<updateReadMessagesContents &>(obj));
      return true;
    case updateChannelTooLong::ID:
      func(static_cast<updateChannelTooLong &>(obj));
      return true;
    case updateChannel::ID:
      func(static_cast<updateChannel &>(obj));
      return true;
    case updateNewChannelMessage::ID:
      func(static_cast<updateNewChannelMessage &>(obj));
      return true;
    case updateReadChannelInbox::ID:
      func(static_cast<updateReadChannelInbox &>(obj));
      return true;
    case updateDeleteChannelMessages::ID:
      func(static_cast<updateDeleteChannelMessages &>(obj));
      return true;
    case updateChannelMessageViews::ID:
      func(static_cast<updateChannelMessageViews &>(obj));
      return true;
    case updateChatAdmins::ID:
      func(static_cast<updateChatAdmins &>(obj));
      return true;
    case updateChatParticipantAdmin::ID:
      func(static_cast<updateChatParticipantAdmin &>(obj));
      return true;
    case updateNewStickerSet::ID:
      func(static_cast<updateNewStickerSet &>(obj));
      return true;
    case updateStickerSetsOrder::ID:
      func(static_cast<updateStickerSetsOrder &>(obj));
      return true;
    case updateStickerSets::ID:
      func(static_cast<updateStickerSets &>(obj));
      return true;
    case updateSavedGifs::ID:
      func(static_cast<updateSavedGifs &>(obj));
      return true;
    case updateBotInlineQuery::ID:
      func(static_cast<updateBotInlineQuery &>(obj));
      return true;
    case updateBotInlineSend::ID:
      func(static_cast<updateBotInlineSend &>(obj));
      return true;
    case updateEditChannelMessage::ID:
      func(static_cast<updateEditChannelMessage &>(obj));
      return true;
    case updateChannelPinnedMessage::ID:
      func(static_cast<updateChannelPinnedMessage &>(obj));
      return true;
    case updateBotCallbackQuery::ID:
      func(static_cast<updateBotCallbackQuery &>(obj));
      return true;
    case updateEditMessage::ID:
      func(static_cast<updateEditMessage &>(obj));
      return true;
    case updateInlineBotCallbackQuery::ID:
      func(static_cast<updateInlineBotCallbackQuery &>(obj));
      return true;
    case updateReadChannelOutbox::ID:
      func(static_cast<updateReadChannelOutbox &>(obj));
      return true;
    case updateDraftMessage::ID:
      func(static_cast<updateDraftMessage &>(obj));
      return true;
    case updateReadFeaturedStickers::ID:
      func(static_cast<updateReadFeaturedStickers &>(obj));
      return true;
    case updateRecentStickers::ID:
      func(static_cast<updateRecentStickers &>(obj));
      return true;
    case updateConfig::ID:
      func(static_cast<updateConfig &>(obj));
      return true;
    case updatePtsChanged::ID:
      func(static_cast<updatePtsChanged &>(obj));
      return true;
    case updateChannelWebPage::ID:
      func(static_cast<updateChannelWebPage &>(obj));
      return true;
    case updateDialogPinned::ID:
      func(static_cast<updateDialogPinned &>(obj));
      return true;
    case updatePinnedDialogs::ID:
      func(static_cast<updatePinnedDialogs &>(obj));
      return true;
    case updateBotWebhookJSON::ID:
      func(static_cast<updateBotWebhookJSON &>(obj));
      return true;
    case updateBotWebhookJSONQuery::ID:
      func(static_cast<updateBotWebhookJSONQuery &>(obj));
      return true;
    case updateBotShippingQuery::ID:
      func(static_cast<updateBotShippingQuery &>(obj));
      return true;
    case updateBotPrecheckoutQuery::ID:
      func(static_cast<updateBotPrecheckoutQuery &>(obj));
      return true;
    case updatePhoneCall::ID:
      func(static_cast<updatePhoneCall &>(obj));
      return true;
    case updateLangPackTooLong::ID:
      func(static_cast<updateLangPackTooLong &>(obj));
      return true;
    case updateLangPack::ID:
      func(static_cast<updateLangPack &>(obj));
      return true;
    case updateFavedStickers::ID:
      func(static_cast<updateFavedStickers &>(obj));
      return true;
    case updateChannelReadMessagesContents::ID:
      func(static_cast<updateChannelReadMessagesContents &>(obj));
      return true;
    case updateContactsReset::ID:
      func(static_cast<updateContactsReset &>(obj));
      return true;
    case updateChannelAvailableMessages::ID:
      func(static_cast<updateChannelAvailableMessages &>(obj));
      return true;
    case updateDialogUnreadMark::ID:
      func(static_cast<updateDialogUnreadMark &>(obj));
      return true;
    default:
      return false;
  }
}

/**
 * Calls the specified function object with the given object downcasted to its most derived type.
 * \param[in] obj Object to pass as an argument to the function object.
 * \param[in] func Function object to which the object will be passed.
 * \returns Whether function object call has happened. Should always return true for correct parameters.
 */
template <class T>
bool downcast_call(Updates &obj, const T &func) {
  switch (obj.get_id()) {
    case updatesTooLong::ID:
      func(static_cast<updatesTooLong &>(obj));
      return true;
    case updateShortMessage::ID:
      func(static_cast<updateShortMessage &>(obj));
      return true;
    case updateShortChatMessage::ID:
      func(static_cast<updateShortChatMessage &>(obj));
      return true;
    case updateShort::ID:
      func(static_cast<updateShort &>(obj));
      return true;
    case updatesCombined::ID:
      func(static_cast<updatesCombined &>(obj));
      return true;
    case updates::ID:
      func(static_cast<updates &>(obj));
      return true;
    case updateShortSentMessage::ID:
      func(static_cast<updateShortSentMessage &>(obj));
      return true;
    default:
      return false;
  }
}

/**
 * Calls the specified function object with the given object downcasted to its most derived type.
 * \param[in] obj Object to pass as an argument to the function object.
 * \param[in] func Function object to which the object will be passed.
 * \returns Whether function object call has happened. Should always return true for correct parameters.
 */
template <class T>
bool downcast_call(User &obj, const T &func) {
  switch (obj.get_id()) {
    case userEmpty::ID:
      func(static_cast<userEmpty &>(obj));
      return true;
    case user::ID:
      func(static_cast<user &>(obj));
      return true;
    default:
      return false;
  }
}

/**
 * Calls the specified function object with the given object downcasted to its most derived type.
 * \param[in] obj Object to pass as an argument to the function object.
 * \param[in] func Function object to which the object will be passed.
 * \returns Whether function object call has happened. Should always return true for correct parameters.
 */
template <class T>
bool downcast_call(UserProfilePhoto &obj, const T &func) {
  switch (obj.get_id()) {
    case userProfilePhotoEmpty::ID:
      func(static_cast<userProfilePhotoEmpty &>(obj));
      return true;
    case userProfilePhoto::ID:
      func(static_cast<userProfilePhoto &>(obj));
      return true;
    default:
      return false;
  }
}

/**
 * Calls the specified function object with the given object downcasted to its most derived type.
 * \param[in] obj Object to pass as an argument to the function object.
 * \param[in] func Function object to which the object will be passed.
 * \returns Whether function object call has happened. Should always return true for correct parameters.
 */
template <class T>
bool downcast_call(UserStatus &obj, const T &func) {
  switch (obj.get_id()) {
    case userStatusEmpty::ID:
      func(static_cast<userStatusEmpty &>(obj));
      return true;
    case userStatusOnline::ID:
      func(static_cast<userStatusOnline &>(obj));
      return true;
    case userStatusOffline::ID:
      func(static_cast<userStatusOffline &>(obj));
      return true;
    case userStatusRecently::ID:
      func(static_cast<userStatusRecently &>(obj));
      return true;
    case userStatusLastWeek::ID:
      func(static_cast<userStatusLastWeek &>(obj));
      return true;
    case userStatusLastMonth::ID:
      func(static_cast<userStatusLastMonth &>(obj));
      return true;
    default:
      return false;
  }
}

/**
 * Calls the specified function object with the given object downcasted to its most derived type.
 * \param[in] obj Object to pass as an argument to the function object.
 * \param[in] func Function object to which the object will be passed.
 * \returns Whether function object call has happened. Should always return true for correct parameters.
 */
template <class T>
bool downcast_call(WallPaper &obj, const T &func) {
  switch (obj.get_id()) {
    case wallPaper::ID:
      func(static_cast<wallPaper &>(obj));
      return true;
    case wallPaperSolid::ID:
      func(static_cast<wallPaperSolid &>(obj));
      return true;
    default:
      return false;
  }
}

/**
 * Calls the specified function object with the given object downcasted to its most derived type.
 * \param[in] obj Object to pass as an argument to the function object.
 * \param[in] func Function object to which the object will be passed.
 * \returns Whether function object call has happened. Should always return true for correct parameters.
 */
template <class T>
bool downcast_call(WebDocument &obj, const T &func) {
  switch (obj.get_id()) {
    case webDocument::ID:
      func(static_cast<webDocument &>(obj));
      return true;
    case webDocumentNoProxy::ID:
      func(static_cast<webDocumentNoProxy &>(obj));
      return true;
    default:
      return false;
  }
}

/**
 * Calls the specified function object with the given object downcasted to its most derived type.
 * \param[in] obj Object to pass as an argument to the function object.
 * \param[in] func Function object to which the object will be passed.
 * \returns Whether function object call has happened. Should always return true for correct parameters.
 */
template <class T>
bool downcast_call(WebPage &obj, const T &func) {
  switch (obj.get_id()) {
    case webPageEmpty::ID:
      func(static_cast<webPageEmpty &>(obj));
      return true;
    case webPagePending::ID:
      func(static_cast<webPagePending &>(obj));
      return true;
    case webPage::ID:
      func(static_cast<webPage &>(obj));
      return true;
    case webPageNotModified::ID:
      func(static_cast<webPageNotModified &>(obj));
      return true;
    default:
      return false;
  }
}

/**
 * Calls the specified function object with the given object downcasted to its most derived type.
 * \param[in] obj Object to pass as an argument to the function object.
 * \param[in] func Function object to which the object will be passed.
 * \returns Whether function object call has happened. Should always return true for correct parameters.
 */
template <class T>
bool downcast_call(auth_CodeType &obj, const T &func) {
  switch (obj.get_id()) {
    case auth_codeTypeSms::ID:
      func(static_cast<auth_codeTypeSms &>(obj));
      return true;
    case auth_codeTypeCall::ID:
      func(static_cast<auth_codeTypeCall &>(obj));
      return true;
    case auth_codeTypeFlashCall::ID:
      func(static_cast<auth_codeTypeFlashCall &>(obj));
      return true;
    default:
      return false;
  }
}

/**
 * Calls the specified function object with the given object downcasted to its most derived type.
 * \param[in] obj Object to pass as an argument to the function object.
 * \param[in] func Function object to which the object will be passed.
 * \returns Whether function object call has happened. Should always return true for correct parameters.
 */
template <class T>
bool downcast_call(auth_SentCodeType &obj, const T &func) {
  switch (obj.get_id()) {
    case auth_sentCodeTypeApp::ID:
      func(static_cast<auth_sentCodeTypeApp &>(obj));
      return true;
    case auth_sentCodeTypeSms::ID:
      func(static_cast<auth_sentCodeTypeSms &>(obj));
      return true;
    case auth_sentCodeTypeCall::ID:
      func(static_cast<auth_sentCodeTypeCall &>(obj));
      return true;
    case auth_sentCodeTypeFlashCall::ID:
      func(static_cast<auth_sentCodeTypeFlashCall &>(obj));
      return true;
    default:
      return false;
  }
}

/**
 * Calls the specified function object with the given object downcasted to its most derived type.
 * \param[in] obj Object to pass as an argument to the function object.
 * \param[in] func Function object to which the object will be passed.
 * \returns Whether function object call has happened. Should always return true for correct parameters.
 */
template <class T>
bool downcast_call(channels_ChannelParticipants &obj, const T &func) {
  switch (obj.get_id()) {
    case channels_channelParticipants::ID:
      func(static_cast<channels_channelParticipants &>(obj));
      return true;
    case channels_channelParticipantsNotModified::ID:
      func(static_cast<channels_channelParticipantsNotModified &>(obj));
      return true;
    default:
      return false;
  }
}

/**
 * Calls the specified function object with the given object downcasted to its most derived type.
 * \param[in] obj Object to pass as an argument to the function object.
 * \param[in] func Function object to which the object will be passed.
 * \returns Whether function object call has happened. Should always return true for correct parameters.
 */
template <class T>
bool downcast_call(contacts_Blocked &obj, const T &func) {
  switch (obj.get_id()) {
    case contacts_blocked::ID:
      func(static_cast<contacts_blocked &>(obj));
      return true;
    case contacts_blockedSlice::ID:
      func(static_cast<contacts_blockedSlice &>(obj));
      return true;
    default:
      return false;
  }
}

/**
 * Calls the specified function object with the given object downcasted to its most derived type.
 * \param[in] obj Object to pass as an argument to the function object.
 * \param[in] func Function object to which the object will be passed.
 * \returns Whether function object call has happened. Should always return true for correct parameters.
 */
template <class T>
bool downcast_call(contacts_Contacts &obj, const T &func) {
  switch (obj.get_id()) {
    case contacts_contactsNotModified::ID:
      func(static_cast<contacts_contactsNotModified &>(obj));
      return true;
    case contacts_contacts::ID:
      func(static_cast<contacts_contacts &>(obj));
      return true;
    default:
      return false;
  }
}

/**
 * Calls the specified function object with the given object downcasted to its most derived type.
 * \param[in] obj Object to pass as an argument to the function object.
 * \param[in] func Function object to which the object will be passed.
 * \returns Whether function object call has happened. Should always return true for correct parameters.
 */
template <class T>
bool downcast_call(contacts_TopPeers &obj, const T &func) {
  switch (obj.get_id()) {
    case contacts_topPeersNotModified::ID:
      func(static_cast<contacts_topPeersNotModified &>(obj));
      return true;
    case contacts_topPeers::ID:
      func(static_cast<contacts_topPeers &>(obj));
      return true;
    case contacts_topPeersDisabled::ID:
      func(static_cast<contacts_topPeersDisabled &>(obj));
      return true;
    default:
      return false;
  }
}

/**
 * Calls the specified function object with the given object downcasted to its most derived type.
 * \param[in] obj Object to pass as an argument to the function object.
 * \param[in] func Function object to which the object will be passed.
 * \returns Whether function object call has happened. Should always return true for correct parameters.
 */
template <class T>
bool downcast_call(help_AppUpdate &obj, const T &func) {
  switch (obj.get_id()) {
    case help_appUpdate::ID:
      func(static_cast<help_appUpdate &>(obj));
      return true;
    case help_noAppUpdate::ID:
      func(static_cast<help_noAppUpdate &>(obj));
      return true;
    default:
      return false;
  }
}

/**
 * Calls the specified function object with the given object downcasted to its most derived type.
 * \param[in] obj Object to pass as an argument to the function object.
 * \param[in] func Function object to which the object will be passed.
 * \returns Whether function object call has happened. Should always return true for correct parameters.
 */
template <class T>
bool downcast_call(help_DeepLinkInfo &obj, const T &func) {
  switch (obj.get_id()) {
    case help_deepLinkInfoEmpty::ID:
      func(static_cast<help_deepLinkInfoEmpty &>(obj));
      return true;
    case help_deepLinkInfo::ID:
      func(static_cast<help_deepLinkInfo &>(obj));
      return true;
    default:
      return false;
  }
}

/**
 * Calls the specified function object with the given object downcasted to its most derived type.
 * \param[in] obj Object to pass as an argument to the function object.
 * \param[in] func Function object to which the object will be passed.
 * \returns Whether function object call has happened. Should always return true for correct parameters.
 */
template <class T>
bool downcast_call(help_PassportConfig &obj, const T &func) {
  switch (obj.get_id()) {
    case help_passportConfigNotModified::ID:
      func(static_cast<help_passportConfigNotModified &>(obj));
      return true;
    case help_passportConfig::ID:
      func(static_cast<help_passportConfig &>(obj));
      return true;
    default:
      return false;
  }
}

/**
 * Calls the specified function object with the given object downcasted to its most derived type.
 * \param[in] obj Object to pass as an argument to the function object.
 * \param[in] func Function object to which the object will be passed.
 * \returns Whether function object call has happened. Should always return true for correct parameters.
 */
template <class T>
bool downcast_call(help_ProxyData &obj, const T &func) {
  switch (obj.get_id()) {
    case help_proxyDataEmpty::ID:
      func(static_cast<help_proxyDataEmpty &>(obj));
      return true;
    case help_proxyDataPromo::ID:
      func(static_cast<help_proxyDataPromo &>(obj));
      return true;
    default:
      return false;
  }
}

/**
 * Calls the specified function object with the given object downcasted to its most derived type.
 * \param[in] obj Object to pass as an argument to the function object.
 * \param[in] func Function object to which the object will be passed.
 * \returns Whether function object call has happened. Should always return true for correct parameters.
 */
template <class T>
bool downcast_call(help_TermsOfServiceUpdate &obj, const T &func) {
  switch (obj.get_id()) {
    case help_termsOfServiceUpdateEmpty::ID:
      func(static_cast<help_termsOfServiceUpdateEmpty &>(obj));
      return true;
    case help_termsOfServiceUpdate::ID:
      func(static_cast<help_termsOfServiceUpdate &>(obj));
      return true;
    default:
      return false;
  }
}

/**
 * Calls the specified function object with the given object downcasted to its most derived type.
 * \param[in] obj Object to pass as an argument to the function object.
 * \param[in] func Function object to which the object will be passed.
 * \returns Whether function object call has happened. Should always return true for correct parameters.
 */
template <class T>
bool downcast_call(messages_AllStickers &obj, const T &func) {
  switch (obj.get_id()) {
    case messages_allStickersNotModified::ID:
      func(static_cast<messages_allStickersNotModified &>(obj));
      return true;
    case messages_allStickers::ID:
      func(static_cast<messages_allStickers &>(obj));
      return true;
    default:
      return false;
  }
}

/**
 * Calls the specified function object with the given object downcasted to its most derived type.
 * \param[in] obj Object to pass as an argument to the function object.
 * \param[in] func Function object to which the object will be passed.
 * \returns Whether function object call has happened. Should always return true for correct parameters.
 */
template <class T>
bool downcast_call(messages_Chats &obj, const T &func) {
  switch (obj.get_id()) {
    case messages_chats::ID:
      func(static_cast<messages_chats &>(obj));
      return true;
    case messages_chatsSlice::ID:
      func(static_cast<messages_chatsSlice &>(obj));
      return true;
    default:
      return false;
  }
}

/**
 * Calls the specified function object with the given object downcasted to its most derived type.
 * \param[in] obj Object to pass as an argument to the function object.
 * \param[in] func Function object to which the object will be passed.
 * \returns Whether function object call has happened. Should always return true for correct parameters.
 */
template <class T>
bool downcast_call(messages_DhConfig &obj, const T &func) {
  switch (obj.get_id()) {
    case messages_dhConfigNotModified::ID:
      func(static_cast<messages_dhConfigNotModified &>(obj));
      return true;
    case messages_dhConfig::ID:
      func(static_cast<messages_dhConfig &>(obj));
      return true;
    default:
      return false;
  }
}

/**
 * Calls the specified function object with the given object downcasted to its most derived type.
 * \param[in] obj Object to pass as an argument to the function object.
 * \param[in] func Function object to which the object will be passed.
 * \returns Whether function object call has happened. Should always return true for correct parameters.
 */
template <class T>
bool downcast_call(messages_Dialogs &obj, const T &func) {
  switch (obj.get_id()) {
    case messages_dialogs::ID:
      func(static_cast<messages_dialogs &>(obj));
      return true;
    case messages_dialogsSlice::ID:
      func(static_cast<messages_dialogsSlice &>(obj));
      return true;
    case messages_dialogsNotModified::ID:
      func(static_cast<messages_dialogsNotModified &>(obj));
      return true;
    default:
      return false;
  }
}

/**
 * Calls the specified function object with the given object downcasted to its most derived type.
 * \param[in] obj Object to pass as an argument to the function object.
 * \param[in] func Function object to which the object will be passed.
 * \returns Whether function object call has happened. Should always return true for correct parameters.
 */
template <class T>
bool downcast_call(messages_FavedStickers &obj, const T &func) {
  switch (obj.get_id()) {
    case messages_favedStickersNotModified::ID:
      func(static_cast<messages_favedStickersNotModified &>(obj));
      return true;
    case messages_favedStickers::ID:
      func(static_cast<messages_favedStickers &>(obj));
      return true;
    default:
      return false;
  }
}

/**
 * Calls the specified function object with the given object downcasted to its most derived type.
 * \param[in] obj Object to pass as an argument to the function object.
 * \param[in] func Function object to which the object will be passed.
 * \returns Whether function object call has happened. Should always return true for correct parameters.
 */
template <class T>
bool downcast_call(messages_FeaturedStickers &obj, const T &func) {
  switch (obj.get_id()) {
    case messages_featuredStickersNotModified::ID:
      func(static_cast<messages_featuredStickersNotModified &>(obj));
      return true;
    case messages_featuredStickers::ID:
      func(static_cast<messages_featuredStickers &>(obj));
      return true;
    default:
      return false;
  }
}

/**
 * Calls the specified function object with the given object downcasted to its most derived type.
 * \param[in] obj Object to pass as an argument to the function object.
 * \param[in] func Function object to which the object will be passed.
 * \returns Whether function object call has happened. Should always return true for correct parameters.
 */
template <class T>
bool downcast_call(messages_FoundStickerSets &obj, const T &func) {
  switch (obj.get_id()) {
    case messages_foundStickerSetsNotModified::ID:
      func(static_cast<messages_foundStickerSetsNotModified &>(obj));
      return true;
    case messages_foundStickerSets::ID:
      func(static_cast<messages_foundStickerSets &>(obj));
      return true;
    default:
      return false;
  }
}

/**
 * Calls the specified function object with the given object downcasted to its most derived type.
 * \param[in] obj Object to pass as an argument to the function object.
 * \param[in] func Function object to which the object will be passed.
 * \returns Whether function object call has happened. Should always return true for correct parameters.
 */
template <class T>
bool downcast_call(messages_Messages &obj, const T &func) {
  switch (obj.get_id()) {
    case messages_messages::ID:
      func(static_cast<messages_messages &>(obj));
      return true;
    case messages_messagesSlice::ID:
      func(static_cast<messages_messagesSlice &>(obj));
      return true;
    case messages_channelMessages::ID:
      func(static_cast<messages_channelMessages &>(obj));
      return true;
    case messages_messagesNotModified::ID:
      func(static_cast<messages_messagesNotModified &>(obj));
      return true;
    default:
      return false;
  }
}

/**
 * Calls the specified function object with the given object downcasted to its most derived type.
 * \param[in] obj Object to pass as an argument to the function object.
 * \param[in] func Function object to which the object will be passed.
 * \returns Whether function object call has happened. Should always return true for correct parameters.
 */
template <class T>
bool downcast_call(messages_RecentStickers &obj, const T &func) {
  switch (obj.get_id()) {
    case messages_recentStickersNotModified::ID:
      func(static_cast<messages_recentStickersNotModified &>(obj));
      return true;
    case messages_recentStickers::ID:
      func(static_cast<messages_recentStickers &>(obj));
      return true;
    default:
      return false;
  }
}

/**
 * Calls the specified function object with the given object downcasted to its most derived type.
 * \param[in] obj Object to pass as an argument to the function object.
 * \param[in] func Function object to which the object will be passed.
 * \returns Whether function object call has happened. Should always return true for correct parameters.
 */
template <class T>
bool downcast_call(messages_SavedGifs &obj, const T &func) {
  switch (obj.get_id()) {
    case messages_savedGifsNotModified::ID:
      func(static_cast<messages_savedGifsNotModified &>(obj));
      return true;
    case messages_savedGifs::ID:
      func(static_cast<messages_savedGifs &>(obj));
      return true;
    default:
      return false;
  }
}

/**
 * Calls the specified function object with the given object downcasted to its most derived type.
 * \param[in] obj Object to pass as an argument to the function object.
 * \param[in] func Function object to which the object will be passed.
 * \returns Whether function object call has happened. Should always return true for correct parameters.
 */
template <class T>
bool downcast_call(messages_SentEncryptedMessage &obj, const T &func) {
  switch (obj.get_id()) {
    case messages_sentEncryptedMessage::ID:
      func(static_cast<messages_sentEncryptedMessage &>(obj));
      return true;
    case messages_sentEncryptedFile::ID:
      func(static_cast<messages_sentEncryptedFile &>(obj));
      return true;
    default:
      return false;
  }
}

/**
 * Calls the specified function object with the given object downcasted to its most derived type.
 * \param[in] obj Object to pass as an argument to the function object.
 * \param[in] func Function object to which the object will be passed.
 * \returns Whether function object call has happened. Should always return true for correct parameters.
 */
template <class T>
bool downcast_call(messages_StickerSetInstallResult &obj, const T &func) {
  switch (obj.get_id()) {
    case messages_stickerSetInstallResultSuccess::ID:
      func(static_cast<messages_stickerSetInstallResultSuccess &>(obj));
      return true;
    case messages_stickerSetInstallResultArchive::ID:
      func(static_cast<messages_stickerSetInstallResultArchive &>(obj));
      return true;
    default:
      return false;
  }
}

/**
 * Calls the specified function object with the given object downcasted to its most derived type.
 * \param[in] obj Object to pass as an argument to the function object.
 * \param[in] func Function object to which the object will be passed.
 * \returns Whether function object call has happened. Should always return true for correct parameters.
 */
template <class T>
bool downcast_call(messages_Stickers &obj, const T &func) {
  switch (obj.get_id()) {
    case messages_stickersNotModified::ID:
      func(static_cast<messages_stickersNotModified &>(obj));
      return true;
    case messages_stickers::ID:
      func(static_cast<messages_stickers &>(obj));
      return true;
    default:
      return false;
  }
}

/**
 * Calls the specified function object with the given object downcasted to its most derived type.
 * \param[in] obj Object to pass as an argument to the function object.
 * \param[in] func Function object to which the object will be passed.
 * \returns Whether function object call has happened. Should always return true for correct parameters.
 */
template <class T>
bool downcast_call(payments_PaymentResult &obj, const T &func) {
  switch (obj.get_id()) {
    case payments_paymentResult::ID:
      func(static_cast<payments_paymentResult &>(obj));
      return true;
    case payments_paymentVerficationNeeded::ID:
      func(static_cast<payments_paymentVerficationNeeded &>(obj));
      return true;
    default:
      return false;
  }
}

/**
 * Calls the specified function object with the given object downcasted to its most derived type.
 * \param[in] obj Object to pass as an argument to the function object.
 * \param[in] func Function object to which the object will be passed.
 * \returns Whether function object call has happened. Should always return true for correct parameters.
 */
template <class T>
bool downcast_call(photos_Photos &obj, const T &func) {
  switch (obj.get_id()) {
    case photos_photos::ID:
      func(static_cast<photos_photos &>(obj));
      return true;
    case photos_photosSlice::ID:
      func(static_cast<photos_photosSlice &>(obj));
      return true;
    default:
      return false;
  }
}

/**
 * Calls the specified function object with the given object downcasted to its most derived type.
 * \param[in] obj Object to pass as an argument to the function object.
 * \param[in] func Function object to which the object will be passed.
 * \returns Whether function object call has happened. Should always return true for correct parameters.
 */
template <class T>
bool downcast_call(storage_FileType &obj, const T &func) {
  switch (obj.get_id()) {
    case storage_fileUnknown::ID:
      func(static_cast<storage_fileUnknown &>(obj));
      return true;
    case storage_filePartial::ID:
      func(static_cast<storage_filePartial &>(obj));
      return true;
    case storage_fileJpeg::ID:
      func(static_cast<storage_fileJpeg &>(obj));
      return true;
    case storage_fileGif::ID:
      func(static_cast<storage_fileGif &>(obj));
      return true;
    case storage_filePng::ID:
      func(static_cast<storage_filePng &>(obj));
      return true;
    case storage_filePdf::ID:
      func(static_cast<storage_filePdf &>(obj));
      return true;
    case storage_fileMp3::ID:
      func(static_cast<storage_fileMp3 &>(obj));
      return true;
    case storage_fileMov::ID:
      func(static_cast<storage_fileMov &>(obj));
      return true;
    case storage_fileMp4::ID:
      func(static_cast<storage_fileMp4 &>(obj));
      return true;
    case storage_fileWebp::ID:
      func(static_cast<storage_fileWebp &>(obj));
      return true;
    default:
      return false;
  }
}

/**
 * Calls the specified function object with the given object downcasted to its most derived type.
 * \param[in] obj Object to pass as an argument to the function object.
 * \param[in] func Function object to which the object will be passed.
 * \returns Whether function object call has happened. Should always return true for correct parameters.
 */
template <class T>
bool downcast_call(updates_ChannelDifference &obj, const T &func) {
  switch (obj.get_id()) {
    case updates_channelDifferenceEmpty::ID:
      func(static_cast<updates_channelDifferenceEmpty &>(obj));
      return true;
    case updates_channelDifferenceTooLong::ID:
      func(static_cast<updates_channelDifferenceTooLong &>(obj));
      return true;
    case updates_channelDifference::ID:
      func(static_cast<updates_channelDifference &>(obj));
      return true;
    default:
      return false;
  }
}

/**
 * Calls the specified function object with the given object downcasted to its most derived type.
 * \param[in] obj Object to pass as an argument to the function object.
 * \param[in] func Function object to which the object will be passed.
 * \returns Whether function object call has happened. Should always return true for correct parameters.
 */
template <class T>
bool downcast_call(updates_Difference &obj, const T &func) {
  switch (obj.get_id()) {
    case updates_differenceEmpty::ID:
      func(static_cast<updates_differenceEmpty &>(obj));
      return true;
    case updates_difference::ID:
      func(static_cast<updates_difference &>(obj));
      return true;
    case updates_differenceSlice::ID:
      func(static_cast<updates_differenceSlice &>(obj));
      return true;
    case updates_differenceTooLong::ID:
      func(static_cast<updates_differenceTooLong &>(obj));
      return true;
    default:
      return false;
  }
}

/**
 * Calls the specified function object with the given object downcasted to its most derived type.
 * \param[in] obj Object to pass as an argument to the function object.
 * \param[in] func Function object to which the object will be passed.
 * \returns Whether function object call has happened. Should always return true for correct parameters.
 */
template <class T>
bool downcast_call(upload_CdnFile &obj, const T &func) {
  switch (obj.get_id()) {
    case upload_cdnFileReuploadNeeded::ID:
      func(static_cast<upload_cdnFileReuploadNeeded &>(obj));
      return true;
    case upload_cdnFile::ID:
      func(static_cast<upload_cdnFile &>(obj));
      return true;
    default:
      return false;
  }
}

/**
 * Calls the specified function object with the given object downcasted to its most derived type.
 * \param[in] obj Object to pass as an argument to the function object.
 * \param[in] func Function object to which the object will be passed.
 * \returns Whether function object call has happened. Should always return true for correct parameters.
 */
template <class T>
bool downcast_call(upload_File &obj, const T &func) {
  switch (obj.get_id()) {
    case upload_file::ID:
      func(static_cast<upload_file &>(obj));
      return true;
    case upload_fileCdnRedirect::ID:
      func(static_cast<upload_fileCdnRedirect &>(obj));
      return true;
    default:
      return false;
  }
}

}  // namespace telegram_api
}  // namespace td
