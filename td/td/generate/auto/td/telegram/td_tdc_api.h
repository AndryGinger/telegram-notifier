#pragma once
#ifdef __cplusplus
extern "C" {
#endif
struct TdBytes {
  unsigned char *data;
  int len;
};
#define TDC_VECTOR(tdc_type_name,tdc_type) \
   struct TdVector ## tdc_type_name { \
     int len;\
     tdc_type *data;\
   };\

TDC_VECTOR(Int,int)
TDC_VECTOR(Long,long long)
TDC_VECTOR(String,char *)
TDC_VECTOR(Bytes,TdBytes)
struct TdStackStorerMethods {
  void (*pack_string)(const char *s);
  void (*pack_bytes)(const unsigned char *s, int len);
  void (*pack_long)(long long x);
  void (*pack_double)(double x);
  void (*pack_bool)(int x);
  void (*new_table)(void);
  void (*new_array)(void);
  void (*new_field)(const char *name);
  void (*new_arr_field)(int idx);
};
struct TdStackFetcherMethods {
  char *(*get_string)(void);
  unsigned char *(*get_bytes)(int *len);
  long long (*get_long)(void);
  double (*get_double)(void);
  void (*pop)(void);
  void (*get_field)(const char *name);
  void (*get_arr_field)(int idx);
  int (*get_arr_size)(void);
  int (*is_nil)(void);
};
struct TdAccountTtl;
TDC_VECTOR(AccountTtl, struct TdAccountTtl *);
TDC_VECTOR(VectorAccountTtl, struct TdVectorAccountTtl *);
struct TdAddress;
TDC_VECTOR(Address, struct TdAddress *);
TDC_VECTOR(VectorAddress, struct TdVectorAddress *);
struct TdAnimation;
TDC_VECTOR(Animation, struct TdAnimation *);
TDC_VECTOR(VectorAnimation, struct TdVectorAnimation *);
struct TdAnimations;
TDC_VECTOR(Animations, struct TdAnimations *);
TDC_VECTOR(VectorAnimations, struct TdVectorAnimations *);
struct TdAudio;
TDC_VECTOR(Audio, struct TdAudio *);
TDC_VECTOR(VectorAudio, struct TdVectorAudio *);
struct TdAuthenticationCodeInfo;
TDC_VECTOR(AuthenticationCodeInfo, struct TdAuthenticationCodeInfo *);
TDC_VECTOR(VectorAuthenticationCodeInfo, struct TdVectorAuthenticationCodeInfo *);
struct TdAuthenticationCodeType;
TDC_VECTOR(AuthenticationCodeType, struct TdAuthenticationCodeType *);
TDC_VECTOR(VectorAuthenticationCodeType, struct TdVectorAuthenticationCodeType *);
struct TdAuthorizationState;
TDC_VECTOR(AuthorizationState, struct TdAuthorizationState *);
TDC_VECTOR(VectorAuthorizationState, struct TdVectorAuthorizationState *);
struct TdBasicGroup;
TDC_VECTOR(BasicGroup, struct TdBasicGroup *);
TDC_VECTOR(VectorBasicGroup, struct TdVectorBasicGroup *);
struct TdBasicGroupFullInfo;
TDC_VECTOR(BasicGroupFullInfo, struct TdBasicGroupFullInfo *);
TDC_VECTOR(VectorBasicGroupFullInfo, struct TdVectorBasicGroupFullInfo *);
struct TdBotCommand;
TDC_VECTOR(BotCommand, struct TdBotCommand *);
TDC_VECTOR(VectorBotCommand, struct TdVectorBotCommand *);
struct TdBotInfo;
TDC_VECTOR(BotInfo, struct TdBotInfo *);
TDC_VECTOR(VectorBotInfo, struct TdVectorBotInfo *);
struct TdCall;
TDC_VECTOR(Call, struct TdCall *);
TDC_VECTOR(VectorCall, struct TdVectorCall *);
struct TdCallConnection;
TDC_VECTOR(CallConnection, struct TdCallConnection *);
TDC_VECTOR(VectorCallConnection, struct TdVectorCallConnection *);
struct TdCallDiscardReason;
TDC_VECTOR(CallDiscardReason, struct TdCallDiscardReason *);
TDC_VECTOR(VectorCallDiscardReason, struct TdVectorCallDiscardReason *);
struct TdCallId;
TDC_VECTOR(CallId, struct TdCallId *);
TDC_VECTOR(VectorCallId, struct TdVectorCallId *);
struct TdCallProtocol;
TDC_VECTOR(CallProtocol, struct TdCallProtocol *);
TDC_VECTOR(VectorCallProtocol, struct TdVectorCallProtocol *);
struct TdCallState;
TDC_VECTOR(CallState, struct TdCallState *);
TDC_VECTOR(VectorCallState, struct TdVectorCallState *);
struct TdCallbackQueryAnswer;
TDC_VECTOR(CallbackQueryAnswer, struct TdCallbackQueryAnswer *);
TDC_VECTOR(VectorCallbackQueryAnswer, struct TdVectorCallbackQueryAnswer *);
struct TdCallbackQueryPayload;
TDC_VECTOR(CallbackQueryPayload, struct TdCallbackQueryPayload *);
TDC_VECTOR(VectorCallbackQueryPayload, struct TdVectorCallbackQueryPayload *);
struct TdChat;
TDC_VECTOR(Chat, struct TdChat *);
TDC_VECTOR(VectorChat, struct TdVectorChat *);
struct TdChatAction;
TDC_VECTOR(ChatAction, struct TdChatAction *);
TDC_VECTOR(VectorChatAction, struct TdVectorChatAction *);
struct TdChatEvent;
TDC_VECTOR(ChatEvent, struct TdChatEvent *);
TDC_VECTOR(VectorChatEvent, struct TdVectorChatEvent *);
struct TdChatEventAction;
TDC_VECTOR(ChatEventAction, struct TdChatEventAction *);
TDC_VECTOR(VectorChatEventAction, struct TdVectorChatEventAction *);
struct TdChatEventLogFilters;
TDC_VECTOR(ChatEventLogFilters, struct TdChatEventLogFilters *);
TDC_VECTOR(VectorChatEventLogFilters, struct TdVectorChatEventLogFilters *);
struct TdChatEvents;
TDC_VECTOR(ChatEvents, struct TdChatEvents *);
TDC_VECTOR(VectorChatEvents, struct TdVectorChatEvents *);
struct TdChatInviteLink;
TDC_VECTOR(ChatInviteLink, struct TdChatInviteLink *);
TDC_VECTOR(VectorChatInviteLink, struct TdVectorChatInviteLink *);
struct TdChatInviteLinkInfo;
TDC_VECTOR(ChatInviteLinkInfo, struct TdChatInviteLinkInfo *);
TDC_VECTOR(VectorChatInviteLinkInfo, struct TdVectorChatInviteLinkInfo *);
struct TdChatMember;
TDC_VECTOR(ChatMember, struct TdChatMember *);
TDC_VECTOR(VectorChatMember, struct TdVectorChatMember *);
struct TdChatMemberStatus;
TDC_VECTOR(ChatMemberStatus, struct TdChatMemberStatus *);
TDC_VECTOR(VectorChatMemberStatus, struct TdVectorChatMemberStatus *);
struct TdChatMembers;
TDC_VECTOR(ChatMembers, struct TdChatMembers *);
TDC_VECTOR(VectorChatMembers, struct TdVectorChatMembers *);
struct TdChatMembersFilter;
TDC_VECTOR(ChatMembersFilter, struct TdChatMembersFilter *);
TDC_VECTOR(VectorChatMembersFilter, struct TdVectorChatMembersFilter *);
struct TdChatNotificationSettings;
TDC_VECTOR(ChatNotificationSettings, struct TdChatNotificationSettings *);
TDC_VECTOR(VectorChatNotificationSettings, struct TdVectorChatNotificationSettings *);
struct TdChatPhoto;
TDC_VECTOR(ChatPhoto, struct TdChatPhoto *);
TDC_VECTOR(VectorChatPhoto, struct TdVectorChatPhoto *);
struct TdChatReportReason;
TDC_VECTOR(ChatReportReason, struct TdChatReportReason *);
TDC_VECTOR(VectorChatReportReason, struct TdVectorChatReportReason *);
struct TdChatReportSpamState;
TDC_VECTOR(ChatReportSpamState, struct TdChatReportSpamState *);
TDC_VECTOR(VectorChatReportSpamState, struct TdVectorChatReportSpamState *);
struct TdChatType;
TDC_VECTOR(ChatType, struct TdChatType *);
TDC_VECTOR(VectorChatType, struct TdVectorChatType *);
struct TdChats;
TDC_VECTOR(Chats, struct TdChats *);
TDC_VECTOR(VectorChats, struct TdVectorChats *);
struct TdCheckChatUsernameResult;
TDC_VECTOR(CheckChatUsernameResult, struct TdCheckChatUsernameResult *);
TDC_VECTOR(VectorCheckChatUsernameResult, struct TdVectorCheckChatUsernameResult *);
struct TdConnectedWebsite;
TDC_VECTOR(ConnectedWebsite, struct TdConnectedWebsite *);
TDC_VECTOR(VectorConnectedWebsite, struct TdVectorConnectedWebsite *);
struct TdConnectedWebsites;
TDC_VECTOR(ConnectedWebsites, struct TdConnectedWebsites *);
TDC_VECTOR(VectorConnectedWebsites, struct TdVectorConnectedWebsites *);
struct TdConnectionState;
TDC_VECTOR(ConnectionState, struct TdConnectionState *);
TDC_VECTOR(VectorConnectionState, struct TdVectorConnectionState *);
struct TdContact;
TDC_VECTOR(Contact, struct TdContact *);
TDC_VECTOR(VectorContact, struct TdVectorContact *);
struct TdCount;
TDC_VECTOR(Count, struct TdCount *);
TDC_VECTOR(VectorCount, struct TdVectorCount *);
struct TdCustomRequestResult;
TDC_VECTOR(CustomRequestResult, struct TdCustomRequestResult *);
TDC_VECTOR(VectorCustomRequestResult, struct TdVectorCustomRequestResult *);
struct TdDate;
TDC_VECTOR(Date, struct TdDate *);
TDC_VECTOR(VectorDate, struct TdVectorDate *);
struct TdDatedFile;
TDC_VECTOR(DatedFile, struct TdDatedFile *);
TDC_VECTOR(VectorDatedFile, struct TdVectorDatedFile *);
struct TdDeepLinkInfo;
TDC_VECTOR(DeepLinkInfo, struct TdDeepLinkInfo *);
TDC_VECTOR(VectorDeepLinkInfo, struct TdVectorDeepLinkInfo *);
struct TdDeviceToken;
TDC_VECTOR(DeviceToken, struct TdDeviceToken *);
TDC_VECTOR(VectorDeviceToken, struct TdVectorDeviceToken *);
struct TdDocument;
TDC_VECTOR(Document, struct TdDocument *);
TDC_VECTOR(VectorDocument, struct TdVectorDocument *);
struct TdDraftMessage;
TDC_VECTOR(DraftMessage, struct TdDraftMessage *);
TDC_VECTOR(VectorDraftMessage, struct TdVectorDraftMessage *);
struct TdEmailAddressAuthenticationCodeInfo;
TDC_VECTOR(EmailAddressAuthenticationCodeInfo, struct TdEmailAddressAuthenticationCodeInfo *);
TDC_VECTOR(VectorEmailAddressAuthenticationCodeInfo, struct TdVectorEmailAddressAuthenticationCodeInfo *);
struct TdEncryptedCredentials;
TDC_VECTOR(EncryptedCredentials, struct TdEncryptedCredentials *);
TDC_VECTOR(VectorEncryptedCredentials, struct TdVectorEncryptedCredentials *);
struct TdEncryptedPassportElement;
TDC_VECTOR(EncryptedPassportElement, struct TdEncryptedPassportElement *);
TDC_VECTOR(VectorEncryptedPassportElement, struct TdVectorEncryptedPassportElement *);
struct TdError;
TDC_VECTOR(Error, struct TdError *);
TDC_VECTOR(VectorError, struct TdVectorError *);
struct TdFile;
TDC_VECTOR(File, struct TdFile *);
TDC_VECTOR(VectorFile, struct TdVectorFile *);
struct TdFileType;
TDC_VECTOR(FileType, struct TdFileType *);
TDC_VECTOR(VectorFileType, struct TdVectorFileType *);
struct TdFormattedText;
TDC_VECTOR(FormattedText, struct TdFormattedText *);
TDC_VECTOR(VectorFormattedText, struct TdVectorFormattedText *);
struct TdFoundMessages;
TDC_VECTOR(FoundMessages, struct TdFoundMessages *);
TDC_VECTOR(VectorFoundMessages, struct TdVectorFoundMessages *);
struct TdGame;
TDC_VECTOR(Game, struct TdGame *);
TDC_VECTOR(VectorGame, struct TdVectorGame *);
struct TdGameHighScore;
TDC_VECTOR(GameHighScore, struct TdGameHighScore *);
TDC_VECTOR(VectorGameHighScore, struct TdVectorGameHighScore *);
struct TdGameHighScores;
TDC_VECTOR(GameHighScores, struct TdGameHighScores *);
TDC_VECTOR(VectorGameHighScores, struct TdVectorGameHighScores *);
struct TdHashtags;
TDC_VECTOR(Hashtags, struct TdHashtags *);
TDC_VECTOR(VectorHashtags, struct TdVectorHashtags *);
struct TdIdentityDocument;
TDC_VECTOR(IdentityDocument, struct TdIdentityDocument *);
TDC_VECTOR(VectorIdentityDocument, struct TdVectorIdentityDocument *);
struct TdImportedContacts;
TDC_VECTOR(ImportedContacts, struct TdImportedContacts *);
TDC_VECTOR(VectorImportedContacts, struct TdVectorImportedContacts *);
struct TdInlineKeyboardButton;
TDC_VECTOR(InlineKeyboardButton, struct TdInlineKeyboardButton *);
TDC_VECTOR(VectorInlineKeyboardButton, struct TdVectorInlineKeyboardButton *);
struct TdInlineKeyboardButtonType;
TDC_VECTOR(InlineKeyboardButtonType, struct TdInlineKeyboardButtonType *);
TDC_VECTOR(VectorInlineKeyboardButtonType, struct TdVectorInlineKeyboardButtonType *);
struct TdInlineQueryResult;
TDC_VECTOR(InlineQueryResult, struct TdInlineQueryResult *);
TDC_VECTOR(VectorInlineQueryResult, struct TdVectorInlineQueryResult *);
struct TdInlineQueryResults;
TDC_VECTOR(InlineQueryResults, struct TdInlineQueryResults *);
TDC_VECTOR(VectorInlineQueryResults, struct TdVectorInlineQueryResults *);
struct TdInputCredentials;
TDC_VECTOR(InputCredentials, struct TdInputCredentials *);
TDC_VECTOR(VectorInputCredentials, struct TdVectorInputCredentials *);
struct TdInputFile;
TDC_VECTOR(InputFile, struct TdInputFile *);
TDC_VECTOR(VectorInputFile, struct TdVectorInputFile *);
struct TdInputIdentityDocument;
TDC_VECTOR(InputIdentityDocument, struct TdInputIdentityDocument *);
TDC_VECTOR(VectorInputIdentityDocument, struct TdVectorInputIdentityDocument *);
struct TdInputInlineQueryResult;
TDC_VECTOR(InputInlineQueryResult, struct TdInputInlineQueryResult *);
TDC_VECTOR(VectorInputInlineQueryResult, struct TdVectorInputInlineQueryResult *);
struct TdInputMessageContent;
TDC_VECTOR(InputMessageContent, struct TdInputMessageContent *);
TDC_VECTOR(VectorInputMessageContent, struct TdVectorInputMessageContent *);
struct TdInputPassportElement;
TDC_VECTOR(InputPassportElement, struct TdInputPassportElement *);
TDC_VECTOR(VectorInputPassportElement, struct TdVectorInputPassportElement *);
struct TdInputPassportElementError;
TDC_VECTOR(InputPassportElementError, struct TdInputPassportElementError *);
TDC_VECTOR(VectorInputPassportElementError, struct TdVectorInputPassportElementError *);
struct TdInputPassportElementErrorSource;
TDC_VECTOR(InputPassportElementErrorSource, struct TdInputPassportElementErrorSource *);
TDC_VECTOR(VectorInputPassportElementErrorSource, struct TdVectorInputPassportElementErrorSource *);
struct TdInputPersonalDocument;
TDC_VECTOR(InputPersonalDocument, struct TdInputPersonalDocument *);
TDC_VECTOR(VectorInputPersonalDocument, struct TdVectorInputPersonalDocument *);
struct TdInputSticker;
TDC_VECTOR(InputSticker, struct TdInputSticker *);
TDC_VECTOR(VectorInputSticker, struct TdVectorInputSticker *);
struct TdInputThumbnail;
TDC_VECTOR(InputThumbnail, struct TdInputThumbnail *);
TDC_VECTOR(VectorInputThumbnail, struct TdVectorInputThumbnail *);
struct TdInvoice;
TDC_VECTOR(Invoice, struct TdInvoice *);
TDC_VECTOR(VectorInvoice, struct TdVectorInvoice *);
struct TdKeyboardButton;
TDC_VECTOR(KeyboardButton, struct TdKeyboardButton *);
TDC_VECTOR(VectorKeyboardButton, struct TdVectorKeyboardButton *);
struct TdKeyboardButtonType;
TDC_VECTOR(KeyboardButtonType, struct TdKeyboardButtonType *);
TDC_VECTOR(VectorKeyboardButtonType, struct TdVectorKeyboardButtonType *);
struct TdLabeledPricePart;
TDC_VECTOR(LabeledPricePart, struct TdLabeledPricePart *);
TDC_VECTOR(VectorLabeledPricePart, struct TdVectorLabeledPricePart *);
struct TdLanguagePackInfo;
TDC_VECTOR(LanguagePackInfo, struct TdLanguagePackInfo *);
TDC_VECTOR(VectorLanguagePackInfo, struct TdVectorLanguagePackInfo *);
struct TdLanguagePackString;
TDC_VECTOR(LanguagePackString, struct TdLanguagePackString *);
TDC_VECTOR(VectorLanguagePackString, struct TdVectorLanguagePackString *);
struct TdLanguagePackStringValue;
TDC_VECTOR(LanguagePackStringValue, struct TdLanguagePackStringValue *);
TDC_VECTOR(VectorLanguagePackStringValue, struct TdVectorLanguagePackStringValue *);
struct TdLanguagePackStrings;
TDC_VECTOR(LanguagePackStrings, struct TdLanguagePackStrings *);
TDC_VECTOR(VectorLanguagePackStrings, struct TdVectorLanguagePackStrings *);
struct TdLinkState;
TDC_VECTOR(LinkState, struct TdLinkState *);
TDC_VECTOR(VectorLinkState, struct TdVectorLinkState *);
struct TdLocalFile;
TDC_VECTOR(LocalFile, struct TdLocalFile *);
TDC_VECTOR(VectorLocalFile, struct TdVectorLocalFile *);
struct TdLocalizationTargetInfo;
TDC_VECTOR(LocalizationTargetInfo, struct TdLocalizationTargetInfo *);
TDC_VECTOR(VectorLocalizationTargetInfo, struct TdVectorLocalizationTargetInfo *);
struct TdLocation;
TDC_VECTOR(Location, struct TdLocation *);
TDC_VECTOR(VectorLocation, struct TdVectorLocation *);
struct TdMaskPoint;
TDC_VECTOR(MaskPoint, struct TdMaskPoint *);
TDC_VECTOR(VectorMaskPoint, struct TdVectorMaskPoint *);
struct TdMaskPosition;
TDC_VECTOR(MaskPosition, struct TdMaskPosition *);
TDC_VECTOR(VectorMaskPosition, struct TdVectorMaskPosition *);
struct TdMessage;
TDC_VECTOR(Message, struct TdMessage *);
TDC_VECTOR(VectorMessage, struct TdVectorMessage *);
struct TdMessageContent;
TDC_VECTOR(MessageContent, struct TdMessageContent *);
TDC_VECTOR(VectorMessageContent, struct TdVectorMessageContent *);
struct TdMessageForwardInfo;
TDC_VECTOR(MessageForwardInfo, struct TdMessageForwardInfo *);
TDC_VECTOR(VectorMessageForwardInfo, struct TdVectorMessageForwardInfo *);
struct TdMessageSendingState;
TDC_VECTOR(MessageSendingState, struct TdMessageSendingState *);
TDC_VECTOR(VectorMessageSendingState, struct TdVectorMessageSendingState *);
struct TdMessages;
TDC_VECTOR(Messages, struct TdMessages *);
TDC_VECTOR(VectorMessages, struct TdVectorMessages *);
struct TdNetworkStatistics;
TDC_VECTOR(NetworkStatistics, struct TdNetworkStatistics *);
TDC_VECTOR(VectorNetworkStatistics, struct TdVectorNetworkStatistics *);
struct TdNetworkStatisticsEntry;
TDC_VECTOR(NetworkStatisticsEntry, struct TdNetworkStatisticsEntry *);
TDC_VECTOR(VectorNetworkStatisticsEntry, struct TdVectorNetworkStatisticsEntry *);
struct TdNetworkType;
TDC_VECTOR(NetworkType, struct TdNetworkType *);
TDC_VECTOR(VectorNetworkType, struct TdVectorNetworkType *);
struct TdNotificationSettingsScope;
TDC_VECTOR(NotificationSettingsScope, struct TdNotificationSettingsScope *);
TDC_VECTOR(VectorNotificationSettingsScope, struct TdVectorNotificationSettingsScope *);
struct TdOk;
TDC_VECTOR(Ok, struct TdOk *);
TDC_VECTOR(VectorOk, struct TdVectorOk *);
struct TdOptionValue;
TDC_VECTOR(OptionValue, struct TdOptionValue *);
TDC_VECTOR(VectorOptionValue, struct TdVectorOptionValue *);
struct TdOrderInfo;
TDC_VECTOR(OrderInfo, struct TdOrderInfo *);
TDC_VECTOR(VectorOrderInfo, struct TdVectorOrderInfo *);
struct TdPageBlock;
TDC_VECTOR(PageBlock, struct TdPageBlock *);
TDC_VECTOR(VectorPageBlock, struct TdVectorPageBlock *);
struct TdPassportAuthorizationForm;
TDC_VECTOR(PassportAuthorizationForm, struct TdPassportAuthorizationForm *);
TDC_VECTOR(VectorPassportAuthorizationForm, struct TdVectorPassportAuthorizationForm *);
struct TdPassportElement;
TDC_VECTOR(PassportElement, struct TdPassportElement *);
TDC_VECTOR(VectorPassportElement, struct TdVectorPassportElement *);
struct TdPassportElementError;
TDC_VECTOR(PassportElementError, struct TdPassportElementError *);
TDC_VECTOR(VectorPassportElementError, struct TdVectorPassportElementError *);
struct TdPassportElementErrorSource;
TDC_VECTOR(PassportElementErrorSource, struct TdPassportElementErrorSource *);
TDC_VECTOR(VectorPassportElementErrorSource, struct TdVectorPassportElementErrorSource *);
struct TdPassportElementType;
TDC_VECTOR(PassportElementType, struct TdPassportElementType *);
TDC_VECTOR(VectorPassportElementType, struct TdVectorPassportElementType *);
struct TdPassportElements;
TDC_VECTOR(PassportElements, struct TdPassportElements *);
TDC_VECTOR(VectorPassportElements, struct TdVectorPassportElements *);
struct TdPassportRequiredElement;
TDC_VECTOR(PassportRequiredElement, struct TdPassportRequiredElement *);
TDC_VECTOR(VectorPassportRequiredElement, struct TdVectorPassportRequiredElement *);
struct TdPassportSuitableElement;
TDC_VECTOR(PassportSuitableElement, struct TdPassportSuitableElement *);
TDC_VECTOR(VectorPassportSuitableElement, struct TdVectorPassportSuitableElement *);
struct TdPasswordState;
TDC_VECTOR(PasswordState, struct TdPasswordState *);
TDC_VECTOR(VectorPasswordState, struct TdVectorPasswordState *);
struct TdPaymentForm;
TDC_VECTOR(PaymentForm, struct TdPaymentForm *);
TDC_VECTOR(VectorPaymentForm, struct TdVectorPaymentForm *);
struct TdPaymentReceipt;
TDC_VECTOR(PaymentReceipt, struct TdPaymentReceipt *);
TDC_VECTOR(VectorPaymentReceipt, struct TdVectorPaymentReceipt *);
struct TdPaymentResult;
TDC_VECTOR(PaymentResult, struct TdPaymentResult *);
TDC_VECTOR(VectorPaymentResult, struct TdVectorPaymentResult *);
struct TdPaymentsProviderStripe;
TDC_VECTOR(PaymentsProviderStripe, struct TdPaymentsProviderStripe *);
TDC_VECTOR(VectorPaymentsProviderStripe, struct TdVectorPaymentsProviderStripe *);
struct TdPersonalDetails;
TDC_VECTOR(PersonalDetails, struct TdPersonalDetails *);
TDC_VECTOR(VectorPersonalDetails, struct TdVectorPersonalDetails *);
struct TdPersonalDocument;
TDC_VECTOR(PersonalDocument, struct TdPersonalDocument *);
TDC_VECTOR(VectorPersonalDocument, struct TdVectorPersonalDocument *);
struct TdPhoto;
TDC_VECTOR(Photo, struct TdPhoto *);
TDC_VECTOR(VectorPhoto, struct TdVectorPhoto *);
struct TdPhotoSize;
TDC_VECTOR(PhotoSize, struct TdPhotoSize *);
TDC_VECTOR(VectorPhotoSize, struct TdVectorPhotoSize *);
struct TdProfilePhoto;
TDC_VECTOR(ProfilePhoto, struct TdProfilePhoto *);
TDC_VECTOR(VectorProfilePhoto, struct TdVectorProfilePhoto *);
struct TdProxies;
TDC_VECTOR(Proxies, struct TdProxies *);
TDC_VECTOR(VectorProxies, struct TdVectorProxies *);
struct TdProxy;
TDC_VECTOR(Proxy, struct TdProxy *);
TDC_VECTOR(VectorProxy, struct TdVectorProxy *);
struct TdProxyType;
TDC_VECTOR(ProxyType, struct TdProxyType *);
TDC_VECTOR(VectorProxyType, struct TdVectorProxyType *);
struct TdPublicMessageLink;
TDC_VECTOR(PublicMessageLink, struct TdPublicMessageLink *);
TDC_VECTOR(VectorPublicMessageLink, struct TdVectorPublicMessageLink *);
struct TdRecoveryEmailAddress;
TDC_VECTOR(RecoveryEmailAddress, struct TdRecoveryEmailAddress *);
TDC_VECTOR(VectorRecoveryEmailAddress, struct TdVectorRecoveryEmailAddress *);
struct TdRemoteFile;
TDC_VECTOR(RemoteFile, struct TdRemoteFile *);
TDC_VECTOR(VectorRemoteFile, struct TdVectorRemoteFile *);
struct TdReplyMarkup;
TDC_VECTOR(ReplyMarkup, struct TdReplyMarkup *);
TDC_VECTOR(VectorReplyMarkup, struct TdVectorReplyMarkup *);
struct TdRichText;
TDC_VECTOR(RichText, struct TdRichText *);
TDC_VECTOR(VectorRichText, struct TdVectorRichText *);
struct TdSavedCredentials;
TDC_VECTOR(SavedCredentials, struct TdSavedCredentials *);
TDC_VECTOR(VectorSavedCredentials, struct TdVectorSavedCredentials *);
struct TdScopeNotificationSettings;
TDC_VECTOR(ScopeNotificationSettings, struct TdScopeNotificationSettings *);
TDC_VECTOR(VectorScopeNotificationSettings, struct TdVectorScopeNotificationSettings *);
struct TdSearchMessagesFilter;
TDC_VECTOR(SearchMessagesFilter, struct TdSearchMessagesFilter *);
TDC_VECTOR(VectorSearchMessagesFilter, struct TdVectorSearchMessagesFilter *);
struct TdSeconds;
TDC_VECTOR(Seconds, struct TdSeconds *);
TDC_VECTOR(VectorSeconds, struct TdVectorSeconds *);
struct TdSecretChat;
TDC_VECTOR(SecretChat, struct TdSecretChat *);
TDC_VECTOR(VectorSecretChat, struct TdVectorSecretChat *);
struct TdSecretChatState;
TDC_VECTOR(SecretChatState, struct TdSecretChatState *);
TDC_VECTOR(VectorSecretChatState, struct TdVectorSecretChatState *);
struct TdSession;
TDC_VECTOR(Session, struct TdSession *);
TDC_VECTOR(VectorSession, struct TdVectorSession *);
struct TdSessions;
TDC_VECTOR(Sessions, struct TdSessions *);
TDC_VECTOR(VectorSessions, struct TdVectorSessions *);
struct TdShippingOption;
TDC_VECTOR(ShippingOption, struct TdShippingOption *);
TDC_VECTOR(VectorShippingOption, struct TdVectorShippingOption *);
struct TdSticker;
TDC_VECTOR(Sticker, struct TdSticker *);
TDC_VECTOR(VectorSticker, struct TdVectorSticker *);
struct TdStickerEmojis;
TDC_VECTOR(StickerEmojis, struct TdStickerEmojis *);
TDC_VECTOR(VectorStickerEmojis, struct TdVectorStickerEmojis *);
struct TdStickerSet;
TDC_VECTOR(StickerSet, struct TdStickerSet *);
TDC_VECTOR(VectorStickerSet, struct TdVectorStickerSet *);
struct TdStickerSetInfo;
TDC_VECTOR(StickerSetInfo, struct TdStickerSetInfo *);
TDC_VECTOR(VectorStickerSetInfo, struct TdVectorStickerSetInfo *);
struct TdStickerSets;
TDC_VECTOR(StickerSets, struct TdStickerSets *);
TDC_VECTOR(VectorStickerSets, struct TdVectorStickerSets *);
struct TdStickers;
TDC_VECTOR(Stickers, struct TdStickers *);
TDC_VECTOR(VectorStickers, struct TdVectorStickers *);
struct TdStorageStatistics;
TDC_VECTOR(StorageStatistics, struct TdStorageStatistics *);
TDC_VECTOR(VectorStorageStatistics, struct TdVectorStorageStatistics *);
struct TdStorageStatisticsByChat;
TDC_VECTOR(StorageStatisticsByChat, struct TdStorageStatisticsByChat *);
TDC_VECTOR(VectorStorageStatisticsByChat, struct TdVectorStorageStatisticsByChat *);
struct TdStorageStatisticsByFileType;
TDC_VECTOR(StorageStatisticsByFileType, struct TdStorageStatisticsByFileType *);
TDC_VECTOR(VectorStorageStatisticsByFileType, struct TdVectorStorageStatisticsByFileType *);
struct TdStorageStatisticsFast;
TDC_VECTOR(StorageStatisticsFast, struct TdStorageStatisticsFast *);
TDC_VECTOR(VectorStorageStatisticsFast, struct TdVectorStorageStatisticsFast *);
struct TdSupergroup;
TDC_VECTOR(Supergroup, struct TdSupergroup *);
TDC_VECTOR(VectorSupergroup, struct TdVectorSupergroup *);
struct TdSupergroupFullInfo;
TDC_VECTOR(SupergroupFullInfo, struct TdSupergroupFullInfo *);
TDC_VECTOR(VectorSupergroupFullInfo, struct TdVectorSupergroupFullInfo *);
struct TdSupergroupMembersFilter;
TDC_VECTOR(SupergroupMembersFilter, struct TdSupergroupMembersFilter *);
TDC_VECTOR(VectorSupergroupMembersFilter, struct TdVectorSupergroupMembersFilter *);
struct TdTMeUrl;
TDC_VECTOR(TMeUrl, struct TdTMeUrl *);
TDC_VECTOR(VectorTMeUrl, struct TdVectorTMeUrl *);
struct TdTMeUrlType;
TDC_VECTOR(TMeUrlType, struct TdTMeUrlType *);
TDC_VECTOR(VectorTMeUrlType, struct TdVectorTMeUrlType *);
struct TdTMeUrls;
TDC_VECTOR(TMeUrls, struct TdTMeUrls *);
TDC_VECTOR(VectorTMeUrls, struct TdVectorTMeUrls *);
struct TdTdlibParameters;
TDC_VECTOR(TdlibParameters, struct TdTdlibParameters *);
TDC_VECTOR(VectorTdlibParameters, struct TdVectorTdlibParameters *);
struct TdTemporaryPasswordState;
TDC_VECTOR(TemporaryPasswordState, struct TdTemporaryPasswordState *);
TDC_VECTOR(VectorTemporaryPasswordState, struct TdVectorTemporaryPasswordState *);
struct TdTermsOfService;
TDC_VECTOR(TermsOfService, struct TdTermsOfService *);
TDC_VECTOR(VectorTermsOfService, struct TdVectorTermsOfService *);
struct TdTestBytes;
TDC_VECTOR(TestBytes, struct TdTestBytes *);
TDC_VECTOR(VectorTestBytes, struct TdVectorTestBytes *);
struct TdTestInt;
TDC_VECTOR(TestInt, struct TdTestInt *);
TDC_VECTOR(VectorTestInt, struct TdVectorTestInt *);
struct TdTestString;
TDC_VECTOR(TestString, struct TdTestString *);
TDC_VECTOR(VectorTestString, struct TdVectorTestString *);
struct TdTestVectorInt;
TDC_VECTOR(TestVectorInt, struct TdTestVectorInt *);
TDC_VECTOR(VectorTestVectorInt, struct TdVectorTestVectorInt *);
struct TdTestVectorIntObject;
TDC_VECTOR(TestVectorIntObject, struct TdTestVectorIntObject *);
TDC_VECTOR(VectorTestVectorIntObject, struct TdVectorTestVectorIntObject *);
struct TdTestVectorString;
TDC_VECTOR(TestVectorString, struct TdTestVectorString *);
TDC_VECTOR(VectorTestVectorString, struct TdVectorTestVectorString *);
struct TdTestVectorStringObject;
TDC_VECTOR(TestVectorStringObject, struct TdTestVectorStringObject *);
TDC_VECTOR(VectorTestVectorStringObject, struct TdVectorTestVectorStringObject *);
struct TdText;
TDC_VECTOR(Text, struct TdText *);
TDC_VECTOR(VectorText, struct TdVectorText *);
struct TdTextEntities;
TDC_VECTOR(TextEntities, struct TdTextEntities *);
TDC_VECTOR(VectorTextEntities, struct TdVectorTextEntities *);
struct TdTextEntity;
TDC_VECTOR(TextEntity, struct TdTextEntity *);
TDC_VECTOR(VectorTextEntity, struct TdVectorTextEntity *);
struct TdTextEntityType;
TDC_VECTOR(TextEntityType, struct TdTextEntityType *);
TDC_VECTOR(VectorTextEntityType, struct TdVectorTextEntityType *);
struct TdTextParseMode;
TDC_VECTOR(TextParseMode, struct TdTextParseMode *);
TDC_VECTOR(VectorTextParseMode, struct TdVectorTextParseMode *);
struct TdTopChatCategory;
TDC_VECTOR(TopChatCategory, struct TdTopChatCategory *);
TDC_VECTOR(VectorTopChatCategory, struct TdVectorTopChatCategory *);
struct TdUpdate;
TDC_VECTOR(Update, struct TdUpdate *);
TDC_VECTOR(VectorUpdate, struct TdVectorUpdate *);
struct TdUser;
TDC_VECTOR(User, struct TdUser *);
TDC_VECTOR(VectorUser, struct TdVectorUser *);
struct TdUserFullInfo;
TDC_VECTOR(UserFullInfo, struct TdUserFullInfo *);
TDC_VECTOR(VectorUserFullInfo, struct TdVectorUserFullInfo *);
struct TdUserPrivacySetting;
TDC_VECTOR(UserPrivacySetting, struct TdUserPrivacySetting *);
TDC_VECTOR(VectorUserPrivacySetting, struct TdVectorUserPrivacySetting *);
struct TdUserPrivacySettingRule;
TDC_VECTOR(UserPrivacySettingRule, struct TdUserPrivacySettingRule *);
TDC_VECTOR(VectorUserPrivacySettingRule, struct TdVectorUserPrivacySettingRule *);
struct TdUserPrivacySettingRules;
TDC_VECTOR(UserPrivacySettingRules, struct TdUserPrivacySettingRules *);
TDC_VECTOR(VectorUserPrivacySettingRules, struct TdVectorUserPrivacySettingRules *);
struct TdUserProfilePhotos;
TDC_VECTOR(UserProfilePhotos, struct TdUserProfilePhotos *);
TDC_VECTOR(VectorUserProfilePhotos, struct TdVectorUserProfilePhotos *);
struct TdUserStatus;
TDC_VECTOR(UserStatus, struct TdUserStatus *);
TDC_VECTOR(VectorUserStatus, struct TdVectorUserStatus *);
struct TdUserType;
TDC_VECTOR(UserType, struct TdUserType *);
TDC_VECTOR(VectorUserType, struct TdVectorUserType *);
struct TdUsers;
TDC_VECTOR(Users, struct TdUsers *);
TDC_VECTOR(VectorUsers, struct TdVectorUsers *);
struct TdValidatedOrderInfo;
TDC_VECTOR(ValidatedOrderInfo, struct TdValidatedOrderInfo *);
TDC_VECTOR(VectorValidatedOrderInfo, struct TdVectorValidatedOrderInfo *);
struct TdVenue;
TDC_VECTOR(Venue, struct TdVenue *);
TDC_VECTOR(VectorVenue, struct TdVectorVenue *);
struct TdVideo;
TDC_VECTOR(Video, struct TdVideo *);
TDC_VECTOR(VectorVideo, struct TdVectorVideo *);
struct TdVideoNote;
TDC_VECTOR(VideoNote, struct TdVideoNote *);
TDC_VECTOR(VectorVideoNote, struct TdVectorVideoNote *);
struct TdVoiceNote;
TDC_VECTOR(VoiceNote, struct TdVoiceNote *);
TDC_VECTOR(VectorVoiceNote, struct TdVectorVoiceNote *);
struct TdWallpaper;
TDC_VECTOR(Wallpaper, struct TdWallpaper *);
TDC_VECTOR(VectorWallpaper, struct TdVectorWallpaper *);
struct TdWallpapers;
TDC_VECTOR(Wallpapers, struct TdWallpapers *);
TDC_VECTOR(VectorWallpapers, struct TdVectorWallpapers *);
struct TdWebPage;
TDC_VECTOR(WebPage, struct TdWebPage *);
TDC_VECTOR(VectorWebPage, struct TdVectorWebPage *);
struct TdWebPageInstantView;
TDC_VECTOR(WebPageInstantView, struct TdWebPageInstantView *);
TDC_VECTOR(VectorWebPageInstantView, struct TdVectorWebPageInstantView *);
struct TdObject;
TDC_VECTOR(Object, struct TdObject *);
TDC_VECTOR(VectorObject, struct TdVectorObject *);
struct TdObject {
  int ID;
  int refcnt;
};
char *TdSerializeObject (struct TdObject *var);
void TdDestroyObjectObject (struct TdObject *var);
void TdStackStorerObject (struct TdObject *var, struct TdStackStorerMethods *M);
struct TdObject *TdStackFetcherObject (struct TdStackFetcherMethods *M);
enum List_Object {
  CODE_AccountTtl = 1324495492,
  CODE_Address = -2043654342,
  CODE_Animation = -1723168340,
  CODE_Animations = 344216945,
  CODE_Audio = 383148432,
  CODE_AuthenticationCodeInfo = -860345416,
  CODE_Copy_AuthenticationCodeTypeTelegramMessage = 2079628074,
  CODE_Copy_AuthenticationCodeTypeSms = 962650760,
  CODE_Copy_AuthenticationCodeTypeCall = 1636265063,
  CODE_Copy_AuthenticationCodeTypeFlashCall = 1395882402,
  CODE_Copy_AuthorizationStateWaitTdlibParameters = 904720988,
  CODE_Copy_AuthorizationStateWaitEncryptionKey = 612103496,
  CODE_Copy_AuthorizationStateWaitPhoneNumber = 306402531,
  CODE_Copy_AuthorizationStateWaitCode = -122899120,
  CODE_Copy_AuthorizationStateWaitPassword = 187548796,
  CODE_Copy_AuthorizationStateReady = -1834871737,
  CODE_Copy_AuthorizationStateLoggingOut = 154449270,
  CODE_Copy_AuthorizationStateClosing = 445855311,
  CODE_Copy_AuthorizationStateClosed = 1526047584,
  CODE_BasicGroup = 1572712718,
  CODE_BasicGroupFullInfo = 952266076,
  CODE_BotCommand = -1032140601,
  CODE_BotInfo = 1296528907,
  CODE_Call = -1837599107,
  CODE_CallConnection = 1318542714,
  CODE_Copy_CallDiscardReasonEmpty = -1258917949,
  CODE_Copy_CallDiscardReasonMissed = 1680358012,
  CODE_Copy_CallDiscardReasonDeclined = -1729926094,
  CODE_Copy_CallDiscardReasonDisconnected = -1342872670,
  CODE_Copy_CallDiscardReasonHungUp = 438216166,
  CODE_CallId = 65717769,
  CODE_CallProtocol = -1042830667,
  CODE_Copy_CallStatePending = 1073048620,
  CODE_Copy_CallStateExchangingKeys = -1848149403,
  CODE_Copy_CallStateReady = 1518705438,
  CODE_Copy_CallStateHangingUp = -2133790038,
  CODE_Copy_CallStateDiscarded = -190853167,
  CODE_Copy_CallStateError = -975215467,
  CODE_CallbackQueryAnswer = 360867933,
  CODE_Copy_CallbackQueryPayloadData = -1977729946,
  CODE_Copy_CallbackQueryPayloadGame = 1303571512,
  CODE_Chat = -4728182,
  CODE_Copy_ChatActionTyping = 380122167,
  CODE_Copy_ChatActionRecordingVideo = 216553362,
  CODE_Copy_ChatActionUploadingVideo = 1234185270,
  CODE_Copy_ChatActionRecordingVoiceNote = -808850058,
  CODE_Copy_ChatActionUploadingVoiceNote = -613643666,
  CODE_Copy_ChatActionUploadingPhoto = 654240583,
  CODE_Copy_ChatActionUploadingDocument = 167884362,
  CODE_Copy_ChatActionChoosingLocation = -2017893596,
  CODE_Copy_ChatActionChoosingContact = -1222507496,
  CODE_Copy_ChatActionStartPlayingGame = -865884164,
  CODE_Copy_ChatActionRecordingVideoNote = 16523393,
  CODE_Copy_ChatActionUploadingVideoNote = 1172364918,
  CODE_Copy_ChatActionCancel = 1160523958,
  CODE_ChatEvent = -609912404,
  CODE_Copy_ChatEventMessageEdited = -430967304,
  CODE_Copy_ChatEventMessageDeleted = -892974601,
  CODE_Copy_ChatEventMessagePinned = 438742298,
  CODE_Copy_ChatEventMessageUnpinned = 2002594849,
  CODE_Copy_ChatEventMemberJoined = -235468508,
  CODE_Copy_ChatEventMemberLeft = -948420593,
  CODE_Copy_ChatEventMemberInvited = -2093688706,
  CODE_Copy_ChatEventMemberPromoted = 1887176186,
  CODE_Copy_ChatEventMemberRestricted = 584946294,
  CODE_Copy_ChatEventTitleChanged = 1134103250,
  CODE_Copy_ChatEventDescriptionChanged = 39112478,
  CODE_Copy_ChatEventUsernameChanged = 1728558443,
  CODE_Copy_ChatEventPhotoChanged = -811572541,
  CODE_Copy_ChatEventInvitesToggled = 568706937,
  CODE_Copy_ChatEventSignMessagesToggled = -1313265634,
  CODE_Copy_ChatEventStickerSetChanged = -1243130481,
  CODE_Copy_ChatEventIsAllHistoryAvailableToggled = -1599063019,
  CODE_ChatEventLogFilters = 941939684,
  CODE_ChatEvents = -585329664,
  CODE_ChatInviteLink = -882072492,
  CODE_ChatInviteLinkInfo = -323394424,
  CODE_ChatMember = -806137076,
  CODE_Copy_ChatMemberStatusCreator = 1756320508,
  CODE_Copy_ChatMemberStatusAdministrator = 45106688,
  CODE_Copy_ChatMemberStatusMember = 844723285,
  CODE_Copy_ChatMemberStatusRestricted = 2068116214,
  CODE_Copy_ChatMemberStatusLeft = -5815259,
  CODE_Copy_ChatMemberStatusBanned = -1653518666,
  CODE_ChatMembers = -497558622,
  CODE_Copy_ChatMembersFilterAdministrators = -1266893796,
  CODE_Copy_ChatMembersFilterMembers = 670504342,
  CODE_Copy_ChatMembersFilterRestricted = 1256282813,
  CODE_Copy_ChatMembersFilterBanned = -1863102648,
  CODE_Copy_ChatMembersFilterBots = -1422567288,
  CODE_ChatNotificationSettings = 1949924445,
  CODE_ChatPhoto = -217062456,
  CODE_Copy_ChatReportReasonSpam = -510848863,
  CODE_Copy_ChatReportReasonViolence = -1330235395,
  CODE_Copy_ChatReportReasonPornography = 722614385,
  CODE_Copy_ChatReportReasonCopyright = 986898080,
  CODE_Copy_ChatReportReasonCustom = 544575454,
  CODE_ChatReportSpamState = -1919240972,
  CODE_Copy_ChatTypePrivate = 1700720838,
  CODE_Copy_ChatTypeBasicGroup = 21815278,
  CODE_Copy_ChatTypeSupergroup = 955152366,
  CODE_Copy_ChatTypeSecret = 136722563,
  CODE_Chats = -1687756019,
  CODE_Copy_CheckChatUsernameResultOk = -1498956964,
  CODE_Copy_CheckChatUsernameResultUsernameInvalid = -636979370,
  CODE_Copy_CheckChatUsernameResultUsernameOccupied = 1320892201,
  CODE_Copy_CheckChatUsernameResultPublicChatsTooMuch = 858247741,
  CODE_Copy_CheckChatUsernameResultPublicGroupsUnavailable = -51833641,
  CODE_ConnectedWebsite = -1538986855,
  CODE_ConnectedWebsites = -1727949694,
  CODE_Copy_ConnectionStateWaitingForNetwork = 1695405912,
  CODE_Copy_ConnectionStateConnectingToProxy = -93187239,
  CODE_Copy_ConnectionStateConnecting = -1298400670,
  CODE_Copy_ConnectionStateUpdating = -188104009,
  CODE_Copy_ConnectionStateReady = 48608492,
  CODE_Contact = -1483002540,
  CODE_Count = 1295577348,
  CODE_CustomRequestResult = -2009960452,
  CODE_Date = -277956960,
  CODE_DatedFile = -1840795491,
  CODE_DeepLinkInfo = 1864081662,
  CODE_Copy_DeviceTokenGoogleCloudMessaging = 1092220225,
  CODE_Copy_DeviceTokenApplePush = 387541955,
  CODE_Copy_DeviceTokenApplePushVoIP = -327676505,
  CODE_Copy_DeviceTokenWindowsPush = -1410514289,
  CODE_Copy_DeviceTokenMicrosoftPush = 1224269900,
  CODE_Copy_DeviceTokenMicrosoftPushVoIP = -785603759,
  CODE_Copy_DeviceTokenWebPush = -1694507273,
  CODE_Copy_DeviceTokenSimplePush = 49584736,
  CODE_Copy_DeviceTokenUbuntuPush = 1782320422,
  CODE_Copy_DeviceTokenBlackBerryPush = 1559167234,
  CODE_Copy_DeviceTokenTizenPush = -1359947213,
  CODE_Document = -736037786,
  CODE_DraftMessage = 1902914742,
  CODE_EmailAddressAuthenticationCodeInfo = 1151066659,
  CODE_EncryptedCredentials = 1331106766,
  CODE_EncryptedPassportElement = 2002386193,
  CODE_Error = -1679978726,
  CODE_File = 766337656,
  CODE_Copy_FileTypeNone = 2003009189,
  CODE_Copy_FileTypeAnimation = -290816582,
  CODE_Copy_FileTypeAudio = -709112160,
  CODE_Copy_FileTypeDocument = -564722929,
  CODE_Copy_FileTypePhoto = -1718914651,
  CODE_Copy_FileTypeProfilePhoto = 1795089315,
  CODE_Copy_FileTypeSecret = -1871899401,
  CODE_Copy_FileTypeSecretThumbnail = -1401326026,
  CODE_Copy_FileTypeSecure = -1419133146,
  CODE_Copy_FileTypeSticker = 475233385,
  CODE_Copy_FileTypeThumbnail = -12443298,
  CODE_Copy_FileTypeUnknown = -2011566768,
  CODE_Copy_FileTypeVideo = 1430816539,
  CODE_Copy_FileTypeVideoNote = -518412385,
  CODE_Copy_FileTypeVoiceNote = -588681661,
  CODE_Copy_FileTypeWallpaper = 1854930076,
  CODE_FormattedText = -252624564,
  CODE_FoundMessages = 2135623881,
  CODE_Game = -1565597752,
  CODE_GameHighScore = -30778358,
  CODE_GameHighScores = -725770727,
  CODE_Hashtags = 676798885,
  CODE_IdentityDocument = 445952972,
  CODE_ImportedContacts = -741685354,
  CODE_InlineKeyboardButton = -372105704,
  CODE_Copy_InlineKeyboardButtonTypeUrl = 1130741420,
  CODE_Copy_InlineKeyboardButtonTypeCallback = -1127515139,
  CODE_Copy_InlineKeyboardButtonTypeCallbackGame = -383429528,
  CODE_Copy_InlineKeyboardButtonTypeSwitchInline = -2035563307,
  CODE_Copy_InlineKeyboardButtonTypeBuy = 1360739440,
  CODE_Copy_InlineQueryResultArticle = -518366710,
  CODE_Copy_InlineQueryResultContact = 410081985,
  CODE_Copy_InlineQueryResultLocation = -158305341,
  CODE_Copy_InlineQueryResultVenue = -1592932211,
  CODE_Copy_InlineQueryResultGame = 1706916987,
  CODE_Copy_InlineQueryResultAnimation = 2009984267,
  CODE_Copy_InlineQueryResultAudio = 842650360,
  CODE_Copy_InlineQueryResultDocument = -1491268539,
  CODE_Copy_InlineQueryResultPhoto = 1848319440,
  CODE_Copy_InlineQueryResultSticker = -1848224245,
  CODE_Copy_InlineQueryResultVideo = -1373158683,
  CODE_Copy_InlineQueryResultVoiceNote = -1897393105,
  CODE_InlineQueryResults = 1000709656,
  CODE_Copy_InputCredentialsSaved = -2034385364,
  CODE_Copy_InputCredentialsNew = -829689558,
  CODE_Copy_InputCredentialsAndroidPay = 1979566832,
  CODE_Copy_InputCredentialsApplePay = -1246570799,
  CODE_Copy_InputFileId = 1788906253,
  CODE_Copy_InputFileRemote = -107574466,
  CODE_Copy_InputFileLocal = 2056030919,
  CODE_Copy_InputFileGenerated = -1781351885,
  CODE_InputIdentityDocument = -381776063,
  CODE_Copy_InputInlineQueryResultAnimatedGif = -891474894,
  CODE_Copy_InputInlineQueryResultAnimatedMpeg4 = -1629529888,
  CODE_Copy_InputInlineQueryResultArticle = 1973670156,
  CODE_Copy_InputInlineQueryResultAudio = 1260139988,
  CODE_Copy_InputInlineQueryResultContact = 1846064594,
  CODE_Copy_InputInlineQueryResultDocument = 578801869,
  CODE_Copy_InputInlineQueryResultGame = 966074327,
  CODE_Copy_InputInlineQueryResultLocation = -1887650218,
  CODE_Copy_InputInlineQueryResultPhoto = -1123338721,
  CODE_Copy_InputInlineQueryResultSticker = 274007129,
  CODE_Copy_InputInlineQueryResultVenue = 541704509,
  CODE_Copy_InputInlineQueryResultVideo = 1724073191,
  CODE_Copy_InputInlineQueryResultVoiceNote = -1790072503,
  CODE_Copy_InputMessageText = 247050392,
  CODE_Copy_InputMessageAnimation = 926542724,
  CODE_Copy_InputMessageAudio = -626786126,
  CODE_Copy_InputMessageDocument = 937970604,
  CODE_Copy_InputMessagePhoto = 1648801584,
  CODE_Copy_InputMessageSticker = 740776325,
  CODE_Copy_InputMessageVideo = -2108486755,
  CODE_Copy_InputMessageVideoNote = 279108859,
  CODE_Copy_InputMessageVoiceNote = 2136519657,
  CODE_Copy_InputMessageLocation = -1624179655,
  CODE_Copy_InputMessageVenue = 1447926269,
  CODE_Copy_InputMessageContact = -982446849,
  CODE_Copy_InputMessageGame = -1728000914,
  CODE_Copy_InputMessageInvoice = 1038812175,
  CODE_Copy_InputMessageForwarded = 1561363198,
  CODE_Copy_InputPassportElementPersonalDetails = 164791359,
  CODE_Copy_InputPassportElementPassport = -497011356,
  CODE_Copy_InputPassportElementDriverLicense = 304813264,
  CODE_Copy_InputPassportElementIdentityCard = -9963390,
  CODE_Copy_InputPassportElementInternalPassport = 715360043,
  CODE_Copy_InputPassportElementAddress = 461630480,
  CODE_Copy_InputPassportElementUtilityBill = 1389203841,
  CODE_Copy_InputPassportElementBankStatement = -26585208,
  CODE_Copy_InputPassportElementRentalAgreement = 1736154155,
  CODE_Copy_InputPassportElementPassportRegistration = 1314562128,
  CODE_Copy_InputPassportElementTemporaryRegistration = -1913238047,
  CODE_Copy_InputPassportElementPhoneNumber = 1319357497,
  CODE_Copy_InputPassportElementEmailAddress = -248605659,
  CODE_InputPassportElementError = 285756898,
  CODE_Copy_InputPassportElementErrorSourceUnspecified = 267230319,
  CODE_Copy_InputPassportElementErrorSourceDataField = -426795002,
  CODE_Copy_InputPassportElementErrorSourceFrontSide = 588023741,
  CODE_Copy_InputPassportElementErrorSourceReverseSide = 413072891,
  CODE_Copy_InputPassportElementErrorSourceSelfie = -773575528,
  CODE_Copy_InputPassportElementErrorSourceTranslationFile = 505842299,
  CODE_Copy_InputPassportElementErrorSourceTranslationFiles = -527254048,
  CODE_Copy_InputPassportElementErrorSourceFile = -298492469,
  CODE_Copy_InputPassportElementErrorSourceFiles = -2008541640,
  CODE_InputPersonalDocument = 1676966826,
  CODE_InputSticker = -1998602205,
  CODE_InputThumbnail = 1582387236,
  CODE_Invoice = -368451690,
  CODE_KeyboardButton = -2069836172,
  CODE_Copy_KeyboardButtonTypeText = -1773037256,
  CODE_Copy_KeyboardButtonTypeRequestPhoneNumber = -1529235527,
  CODE_Copy_KeyboardButtonTypeRequestLocation = -125661955,
  CODE_LabeledPricePart = 552789798,
  CODE_LanguagePackInfo = 1716484242,
  CODE_LanguagePackString = 1307632736,
  CODE_Copy_LanguagePackStringValueOrdinary = -249256352,
  CODE_Copy_LanguagePackStringValuePluralized = 1906840261,
  CODE_Copy_LanguagePackStringValueDeleted = 1834792698,
  CODE_LanguagePackStrings = 1172082922,
  CODE_Copy_LinkStateNone = 951430287,
  CODE_Copy_LinkStateKnowsPhoneNumber = 380898199,
  CODE_Copy_LinkStateIsContact = -1000499465,
  CODE_LocalFile = 847939462,
  CODE_LocalizationTargetInfo = -2048670809,
  CODE_Location = 749028016,
  CODE_Copy_MaskPointForehead = 1027512005,
  CODE_Copy_MaskPointEyes = 1748310861,
  CODE_Copy_MaskPointMouth = 411773406,
  CODE_Copy_MaskPointChin = 534995335,
  CODE_MaskPosition = -2097433026,
  CODE_Message = -675737627,
  CODE_Copy_MessageText = 1989037971,
  CODE_Copy_MessageAnimation = 1306939396,
  CODE_Copy_MessageAudio = 276722716,
  CODE_Copy_MessageDocument = 596945783,
  CODE_Copy_MessagePhoto = -1851395174,
  CODE_Copy_MessageExpiredPhoto = -1404641801,
  CODE_Copy_MessageSticker = 1779022878,
  CODE_Copy_MessageVideo = 2021281344,
  CODE_Copy_MessageExpiredVideo = -1212209981,
  CODE_Copy_MessageVideoNote = 963323014,
  CODE_Copy_MessageVoiceNote = 527777781,
  CODE_Copy_MessageLocation = -1301887786,
  CODE_Copy_MessageVenue = -2146492043,
  CODE_Copy_MessageContact = -512684966,
  CODE_Copy_MessageGame = -69441162,
  CODE_Copy_MessageInvoice = -1916671476,
  CODE_Copy_MessageCall = 366512596,
  CODE_Copy_MessageBasicGroupChatCreate = 1575377646,
  CODE_Copy_MessageSupergroupChatCreate = -434325733,
  CODE_Copy_MessageChatChangeTitle = 748272449,
  CODE_Copy_MessageChatChangePhoto = 319630249,
  CODE_Copy_MessageChatDeletePhoto = -184374809,
  CODE_Copy_MessageChatAddMembers = 401228326,
  CODE_Copy_MessageChatJoinByLink = 1846493311,
  CODE_Copy_MessageChatDeleteMember = 1164414043,
  CODE_Copy_MessageChatUpgradeTo = 1957816681,
  CODE_Copy_MessageChatUpgradeFrom = 1642272558,
  CODE_Copy_MessagePinMessage = 953503801,
  CODE_Copy_MessageScreenshotTaken = -1564971605,
  CODE_Copy_MessageChatSetTtl = 1810060209,
  CODE_Copy_MessageCustomServiceAction = 1435879282,
  CODE_Copy_MessageGameScore = 1344904575,
  CODE_Copy_MessagePaymentSuccessful = -595962993,
  CODE_Copy_MessagePaymentSuccessfulBot = -412310696,
  CODE_Copy_MessageContactRegistered = -1502020353,
  CODE_Copy_MessageWebsiteConnected = -1074551800,
  CODE_Copy_MessagePassportDataSent = 1017405171,
  CODE_Copy_MessagePassportDataReceived = -1367863624,
  CODE_Copy_MessageUnsupported = -1816726139,
  CODE_Copy_MessageForwardedFromUser = 1004332765,
  CODE_Copy_MessageForwardedPost = -244050875,
  CODE_Copy_MessageSendingStatePending = -1381803582,
  CODE_Copy_MessageSendingStateFailed = -546610323,
  CODE_Messages = -16498159,
  CODE_NetworkStatistics = 1615554212,
  CODE_Copy_NetworkStatisticsEntryFile = 188452706,
  CODE_Copy_NetworkStatisticsEntryCall = 737000365,
  CODE_Copy_NetworkTypeNone = -1971691759,
  CODE_Copy_NetworkTypeMobile = 819228239,
  CODE_Copy_NetworkTypeMobileRoaming = -1435199760,
  CODE_Copy_NetworkTypeWiFi = -633872070,
  CODE_Copy_NetworkTypeOther = 1942128539,
  CODE_Copy_NotificationSettingsScopePrivateChats = 937446759,
  CODE_Copy_NotificationSettingsScopeGroupChats = 1212142067,
  CODE_Ok = -722616727,
  CODE_Copy_OptionValueBoolean = 63135518,
  CODE_Copy_OptionValueEmpty = 918955155,
  CODE_Copy_OptionValueInteger = -1400911104,
  CODE_Copy_OptionValueString = 756248212,
  CODE_OrderInfo = 783997294,
  CODE_Copy_PageBlockTitle = 1629664784,
  CODE_Copy_PageBlockSubtitle = 264524263,
  CODE_Copy_PageBlockAuthorDate = 1300231184,
  CODE_Copy_PageBlockHeader = 1402854811,
  CODE_Copy_PageBlockSubheader = 1263956774,
  CODE_Copy_PageBlockParagraph = 1182402406,
  CODE_Copy_PageBlockPreformatted = -1066346178,
  CODE_Copy_PageBlockFooter = 886429480,
  CODE_Copy_PageBlockDivider = -618614392,
  CODE_Copy_PageBlockAnchor = -837994576,
  CODE_Copy_PageBlockList = -1752631674,
  CODE_Copy_PageBlockBlockQuote = -37421406,
  CODE_Copy_PageBlockPullQuote = -1799498665,
  CODE_Copy_PageBlockAnimation = 1639478661,
  CODE_Copy_PageBlockAudio = 1898245855,
  CODE_Copy_PageBlockPhoto = -637181825,
  CODE_Copy_PageBlockVideo = 1610373002,
  CODE_Copy_PageBlockCover = 972174080,
  CODE_Copy_PageBlockEmbedded = -211257334,
  CODE_Copy_PageBlockEmbeddedPost = 1049948772,
  CODE_Copy_PageBlockCollage = 911142202,
  CODE_Copy_PageBlockSlideshow = 178557514,
  CODE_Copy_PageBlockChatLink = 214606645,
  CODE_PassportAuthorizationForm = -1780995944,
  CODE_Copy_PassportElementPersonalDetails = 1217724035,
  CODE_Copy_PassportElementPassport = -263985373,
  CODE_Copy_PassportElementDriverLicense = 1643580589,
  CODE_Copy_PassportElementIdentityCard = 2083775797,
  CODE_Copy_PassportElementInternalPassport = 36220295,
  CODE_Copy_PassportElementAddress = -782625232,
  CODE_Copy_PassportElementUtilityBill = -234611246,
  CODE_Copy_PassportElementBankStatement = -366464408,
  CODE_Copy_PassportElementRentalAgreement = -290141400,
  CODE_Copy_PassportElementPassportRegistration = 618323071,
  CODE_Copy_PassportElementTemporaryRegistration = 1237626864,
  CODE_Copy_PassportElementPhoneNumber = -1320118375,
  CODE_Copy_PassportElementEmailAddress = -1528129531,
  CODE_PassportElementError = -1861902395,
  CODE_Copy_PassportElementErrorSourceUnspecified = -378320830,
  CODE_Copy_PassportElementErrorSourceDataField = -308650776,
  CODE_Copy_PassportElementErrorSourceFrontSide = 1895658292,
  CODE_Copy_PassportElementErrorSourceReverseSide = 1918630391,
  CODE_Copy_PassportElementErrorSourceSelfie = -797043672,
  CODE_Copy_PassportElementErrorSourceTranslationFile = -643919323,
  CODE_Copy_PassportElementErrorSourceTranslationFiles = 581280796,
  CODE_Copy_PassportElementErrorSourceFile = -226596202,
  CODE_Copy_PassportElementErrorSourceFiles = 1894164178,
  CODE_Copy_PassportElementTypePersonalDetails = -1032136365,
  CODE_Copy_PassportElementTypePassport = -436360376,
  CODE_Copy_PassportElementTypeDriverLicense = 1827298379,
  CODE_Copy_PassportElementTypeIdentityCard = -502356132,
  CODE_Copy_PassportElementTypeInternalPassport = -793781959,
  CODE_Copy_PassportElementTypeAddress = 496327874,
  CODE_Copy_PassportElementTypeUtilityBill = 627084906,
  CODE_Copy_PassportElementTypeBankStatement = 574095667,
  CODE_Copy_PassportElementTypeRentalAgreement = -2060583280,
  CODE_Copy_PassportElementTypePassportRegistration = -159478209,
  CODE_Copy_PassportElementTypeTemporaryRegistration = 1092498527,
  CODE_Copy_PassportElementTypePhoneNumber = -995361172,
  CODE_Copy_PassportElementTypeEmailAddress = -79321405,
  CODE_PassportElements = 1264617556,
  CODE_PassportRequiredElement = -1983641651,
  CODE_PassportSuitableElement = -789019876,
  CODE_PasswordState = -1209872059,
  CODE_PaymentForm = -200418230,
  CODE_PaymentReceipt = -1171223545,
  CODE_PaymentResult = -804263843,
  CODE_PaymentsProviderStripe = 1090791032,
  CODE_PersonalDetails = -1061656137,
  CODE_PersonalDocument = -1011634661,
  CODE_Photo = -1949521787,
  CODE_PhotoSize = 421980227,
  CODE_ProfilePhoto = 978085937,
  CODE_Proxies = 1200447205,
  CODE_Proxy = 196049779,
  CODE_Copy_ProxyTypeSocks5 = -890027341,
  CODE_Copy_ProxyTypeHttp = -1547188361,
  CODE_Copy_ProxyTypeMtproto = -1964826627,
  CODE_PublicMessageLink = -679603433,
  CODE_RecoveryEmailAddress = 1290526187,
  CODE_RemoteFile = 1761289748,
  CODE_Copy_ReplyMarkupRemoveKeyboard = -691252879,
  CODE_Copy_ReplyMarkupForceReply = 1039104593,
  CODE_Copy_ReplyMarkupShowKeyboard = -992627133,
  CODE_Copy_ReplyMarkupInlineKeyboard = -619317658,
  CODE_Copy_RichTextPlain = 482617702,
  CODE_Copy_RichTextBold = 1670844268,
  CODE_Copy_RichTextItalic = 1853354047,
  CODE_Copy_RichTextUnderline = -536019572,
  CODE_Copy_RichTextStrikethrough = 723413585,
  CODE_Copy_RichTextFixed = -1271496249,
  CODE_Copy_RichTextUrl = 1967248447,
  CODE_Copy_RichTextEmailAddress = 40018679,
  CODE_Copy_RichTexts = 1647457821,
  CODE_SavedCredentials = -370273060,
  CODE_ScopeNotificationSettings = 607439283,
  CODE_Copy_SearchMessagesFilterEmpty = -869395657,
  CODE_Copy_SearchMessagesFilterAnimation = -155713339,
  CODE_Copy_SearchMessagesFilterAudio = 867505275,
  CODE_Copy_SearchMessagesFilterDocument = 1526331215,
  CODE_Copy_SearchMessagesFilterPhoto = 925932293,
  CODE_Copy_SearchMessagesFilterVideo = 115538222,
  CODE_Copy_SearchMessagesFilterVoiceNote = 1841439357,
  CODE_Copy_SearchMessagesFilterPhotoAndVideo = 1352130963,
  CODE_Copy_SearchMessagesFilterUrl = -1828724341,
  CODE_Copy_SearchMessagesFilterChatPhoto = -1247751329,
  CODE_Copy_SearchMessagesFilterCall = 1305231012,
  CODE_Copy_SearchMessagesFilterMissedCall = 970663098,
  CODE_Copy_SearchMessagesFilterVideoNote = 564323321,
  CODE_Copy_SearchMessagesFilterVoiceAndVideoNote = 664174819,
  CODE_Copy_SearchMessagesFilterMention = 2001258652,
  CODE_Copy_SearchMessagesFilterUnreadMention = -95769149,
  CODE_Seconds = 959899022,
  CODE_SecretChat = 1279231629,
  CODE_Copy_SecretChatStatePending = -1637050756,
  CODE_Copy_SecretChatStateReady = -1611352087,
  CODE_Copy_SecretChatStateClosed = -1945106707,
  CODE_Session = 1715359000,
  CODE_Sessions = -463118121,
  CODE_ShippingOption = 1425690001,
  CODE_Sticker = -876442962,
  CODE_StickerEmojis = -1781588570,
  CODE_StickerSet = 72047469,
  CODE_StickerSetInfo = 1469837113,
  CODE_StickerSets = -1883828812,
  CODE_Stickers = 1974859260,
  CODE_StorageStatistics = 217237013,
  CODE_StorageStatisticsByChat = 635434531,
  CODE_StorageStatisticsByFileType = 714012840,
  CODE_StorageStatisticsFast = -2005401007,
  CODE_Supergroup = -1737513476,
  CODE_SupergroupFullInfo = -1482349223,
  CODE_Copy_SupergroupMembersFilterRecent = 1178199509,
  CODE_Copy_SupergroupMembersFilterAdministrators = -2097380265,
  CODE_Copy_SupergroupMembersFilterSearch = -1696358469,
  CODE_Copy_SupergroupMembersFilterRestricted = -1107800034,
  CODE_Copy_SupergroupMembersFilterBanned = -1210621683,
  CODE_Copy_SupergroupMembersFilterBots = 492138918,
  CODE_TMeUrl = -1140786622,
  CODE_Copy_TMeUrlTypeUser = -1198700130,
  CODE_Copy_TMeUrlTypeSupergroup = -1353369944,
  CODE_Copy_TMeUrlTypeChatInvite = 313907785,
  CODE_Copy_TMeUrlTypeStickerSet = 1602473196,
  CODE_TMeUrls = -1130595098,
  CODE_TdlibParameters = -761520773,
  CODE_TemporaryPasswordState = 939837410,
  CODE_TermsOfService = 739422597,
  CODE_TestBytes = -1541225250,
  CODE_TestInt = -574804983,
  CODE_TestString = -27891572,
  CODE_TestVectorInt = 593682027,
  CODE_TestVectorIntObject = 125891546,
  CODE_TestVectorString = 79339995,
  CODE_TestVectorStringObject = 80780537,
  CODE_Text = 578181272,
  CODE_TextEntities = -933199172,
  CODE_TextEntity = -1951688280,
  CODE_Copy_TextEntityTypeMention = 934535013,
  CODE_Copy_TextEntityTypeHashtag = -1023958307,
  CODE_Copy_TextEntityTypeCashtag = 1222915915,
  CODE_Copy_TextEntityTypeBotCommand = -1150997581,
  CODE_Copy_TextEntityTypeUrl = -1312762756,
  CODE_Copy_TextEntityTypeEmailAddress = 1425545249,
  CODE_Copy_TextEntityTypeBold = -1128210000,
  CODE_Copy_TextEntityTypeItalic = -118253987,
  CODE_Copy_TextEntityTypeCode = -974534326,
  CODE_Copy_TextEntityTypePre = 1648958606,
  CODE_Copy_TextEntityTypePreCode = -945325397,
  CODE_Copy_TextEntityTypeTextUrl = 445719651,
  CODE_Copy_TextEntityTypeMentionName = -791517091,
  CODE_Copy_TextEntityTypePhoneNumber = -1160140246,
  CODE_Copy_TextParseModeMarkdown = 969225580,
  CODE_Copy_TextParseModeHTML = 1660208627,
  CODE_Copy_TopChatCategoryUsers = 1026706816,
  CODE_Copy_TopChatCategoryBots = -1577129195,
  CODE_Copy_TopChatCategoryGroups = 1530056846,
  CODE_Copy_TopChatCategoryChannels = -500825885,
  CODE_Copy_TopChatCategoryInlineBots = 377023356,
  CODE_Copy_TopChatCategoryCalls = 356208861,
  CODE_Copy_UpdateAuthorizationState = 1622347490,
  CODE_Copy_UpdateNewMessage = 238944219,
  CODE_Copy_UpdateMessageSendAcknowledged = 1302843961,
  CODE_Copy_UpdateMessageSendSucceeded = 1815715197,
  CODE_Copy_UpdateMessageSendFailed = -1032335779,
  CODE_Copy_UpdateMessageContent = 506903332,
  CODE_Copy_UpdateMessageEdited = -559545626,
  CODE_Copy_UpdateMessageViews = -1854131125,
  CODE_Copy_UpdateMessageContentOpened = -1520523131,
  CODE_Copy_UpdateMessageMentionRead = -252228282,
  CODE_Copy_UpdateNewChat = 2075757773,
  CODE_Copy_UpdateChatTitle = -175405660,
  CODE_Copy_UpdateChatPhoto = -209353966,
  CODE_Copy_UpdateChatLastMessage = 580348828,
  CODE_Copy_UpdateChatOrder = -1601888026,
  CODE_Copy_UpdateChatIsPinned = 488876260,
  CODE_Copy_UpdateChatIsMarkedAsUnread = 1468347188,
  CODE_Copy_UpdateChatIsSponsored = -1196180070,
  CODE_Copy_UpdateChatDefaultDisableNotification = 464087707,
  CODE_Copy_UpdateChatReadInbox = -797952281,
  CODE_Copy_UpdateChatReadOutbox = 708334213,
  CODE_Copy_UpdateChatUnreadMentionCount = -2131461348,
  CODE_Copy_UpdateChatNotificationSettings = -803163050,
  CODE_Copy_UpdateScopeNotificationSettings = -1203975309,
  CODE_Copy_UpdateChatReplyMarkup = 1309386144,
  CODE_Copy_UpdateChatDraftMessage = -1436617498,
  CODE_Copy_UpdateDeleteMessages = 1669252686,
  CODE_Copy_UpdateUserChatAction = 1444133514,
  CODE_Copy_UpdateUserStatus = -1443545195,
  CODE_Copy_UpdateUser = 1183394041,
  CODE_Copy_UpdateBasicGroup = -1003239581,
  CODE_Copy_UpdateSupergroup = -76782300,
  CODE_Copy_UpdateSecretChat = -1666903253,
  CODE_Copy_UpdateUserFullInfo = 222103874,
  CODE_Copy_UpdateBasicGroupFullInfo = 924030531,
  CODE_Copy_UpdateSupergroupFullInfo = 1288828758,
  CODE_Copy_UpdateServiceNotification = 1318622637,
  CODE_Copy_UpdateFile = 114132831,
  CODE_Copy_UpdateFileGenerationStart = 216817388,
  CODE_Copy_UpdateFileGenerationStop = -1894449685,
  CODE_Copy_UpdateCall = 1337184477,
  CODE_Copy_UpdateUserPrivacySettingRules = -912960778,
  CODE_Copy_UpdateUnreadMessageCount = -824420376,
  CODE_Copy_UpdateUnreadChatCount = 891150304,
  CODE_Copy_UpdateOption = 900822020,
  CODE_Copy_UpdateInstalledStickerSets = 1125575977,
  CODE_Copy_UpdateTrendingStickerSets = 450714593,
  CODE_Copy_UpdateRecentStickers = 1906403540,
  CODE_Copy_UpdateFavoriteStickers = 1662240999,
  CODE_Copy_UpdateSavedAnimations = 65563814,
  CODE_Copy_UpdateLanguagePackStrings = -1056319886,
  CODE_Copy_UpdateConnectionState = 1469292078,
  CODE_Copy_UpdateTermsOfService = -1304640162,
  CODE_Copy_UpdateNewInlineQuery = 2064730634,
  CODE_Copy_UpdateNewChosenInlineResult = 527526965,
  CODE_Copy_UpdateNewCallbackQuery = -2044226370,
  CODE_Copy_UpdateNewInlineCallbackQuery = -1879154829,
  CODE_Copy_UpdateNewShippingQuery = -817474682,
  CODE_Copy_UpdateNewPreCheckoutQuery = 87964006,
  CODE_Copy_UpdateNewCustomEvent = 1994222092,
  CODE_Copy_UpdateNewCustomQuery = -687670874,
  CODE_User = -732086407,
  CODE_UserFullInfo = 1076948004,
  CODE_Copy_UserPrivacySettingShowStatus = 1862829310,
  CODE_Copy_UserPrivacySettingAllowChatInvites = 1271668007,
  CODE_Copy_UserPrivacySettingAllowCalls = -906967291,
  CODE_Copy_UserPrivacySettingRuleAllowAll = -1967186881,
  CODE_Copy_UserPrivacySettingRuleAllowContacts = -1892733680,
  CODE_Copy_UserPrivacySettingRuleAllowUsers = 427601278,
  CODE_Copy_UserPrivacySettingRuleRestrictAll = -1406495408,
  CODE_Copy_UserPrivacySettingRuleRestrictContacts = 1008389378,
  CODE_Copy_UserPrivacySettingRuleRestrictUsers = 2119951802,
  CODE_UserPrivacySettingRules = 322477541,
  CODE_UserProfilePhotos = 1388892074,
  CODE_Copy_UserStatusEmpty = 164646985,
  CODE_Copy_UserStatusOnline = -1529460876,
  CODE_Copy_UserStatusOffline = -759984891,
  CODE_Copy_UserStatusRecently = -496024847,
  CODE_Copy_UserStatusLastWeek = 129960444,
  CODE_Copy_UserStatusLastMonth = 2011940674,
  CODE_Copy_UserTypeRegular = -598644325,
  CODE_Copy_UserTypeDeleted = -1807729372,
  CODE_Copy_UserTypeBot = 1262387765,
  CODE_Copy_UserTypeUnknown = -724541123,
  CODE_Users = 273760088,
  CODE_ValidatedOrderInfo = 1511451484,
  CODE_Venue = 1070406393,
  CODE_Video = -437410347,
  CODE_VideoNote = -1177396120,
  CODE_VoiceNote = -2066012058,
  CODE_Wallpaper = 282771691,
  CODE_Wallpapers = 877926640,
  CODE_WebPage = 1465949075,
  CODE_WebPageInstantView = 1804324850,
};
struct TdFunction {
  int ID;
  int refcnt;
};
char *TdSerializeFunction (struct TdFunction *var);
void TdDestroyObjectFunction (struct TdFunction *var);
void TdStackStorerFunction (struct TdFunction *var, struct TdStackStorerMethods *M);
struct TdFunction *TdStackFetcherFunction (struct TdStackFetcherMethods *M);
enum List_Function {
  CODE_AcceptCall = -646618416,
  CODE_AcceptTermsOfService = 2130576356,
  CODE_AddChatMember = 1182817962,
  CODE_AddChatMembers = 1234094617,
  CODE_AddFavoriteSticker = 324504799,
  CODE_AddLocalMessage = -348943149,
  CODE_AddNetworkStatistics = 1264825305,
  CODE_AddProxy = 331529432,
  CODE_AddRecentSticker = -1478109026,
  CODE_AddRecentlyFoundChat = -1746396787,
  CODE_AddSavedAnimation = -1538525088,
  CODE_AddStickerToSet = 1422402800,
  CODE_AnswerCallbackQuery = -1153028490,
  CODE_AnswerCustomQuery = -1293603521,
  CODE_AnswerInlineQuery = 485879477,
  CODE_AnswerPreCheckoutQuery = -1486789653,
  CODE_AnswerShippingQuery = -434601324,
  CODE_BlockUser = -1239315139,
  CODE_CancelDownloadFile = -1954524450,
  CODE_CancelUploadFile = 1623539600,
  CODE_ChangeChatReportSpamState = 1768597097,
  CODE_ChangeImportedContacts = 1968207955,
  CODE_ChangePhoneNumber = -1510625218,
  CODE_ChangeStickerSet = 449357293,
  CODE_CheckAuthenticationBotToken = 639321206,
  CODE_CheckAuthenticationCode = -707293555,
  CODE_CheckAuthenticationPassword = -2025698400,
  CODE_CheckChangePhoneNumberCode = -1720278429,
  CODE_CheckChatInviteLink = -496940997,
  CODE_CheckChatUsername = -2003506154,
  CODE_CheckDatabaseEncryptionKey = 1018769307,
  CODE_CheckEmailAddressVerificationCode = -426386685,
  CODE_CheckPhoneNumberConfirmationCode = -1348060966,
  CODE_CheckPhoneNumberVerificationCode = 1497462718,
  CODE_CleanFileName = 967964667,
  CODE_ClearAllDraftMessages = -46369573,
  CODE_ClearImportedContacts = 869503298,
  CODE_ClearRecentStickers = -321242684,
  CODE_ClearRecentlyFoundChats = -285582542,
  CODE_Close = -1187782273,
  CODE_CloseChat = 39749353,
  CODE_CloseSecretChat = -471006133,
  CODE_CreateBasicGroupChat = 642492777,
  CODE_CreateCall = -1742408159,
  CODE_CreateNewBasicGroupChat = 1874532069,
  CODE_CreateNewSecretChat = 1689344881,
  CODE_CreateNewStickerSet = 205093058,
  CODE_CreateNewSupergroupChat = 1284982268,
  CODE_CreatePrivateChat = -1807530364,
  CODE_CreateSecretChat = 1930285615,
  CODE_CreateSupergroupChat = 352742758,
  CODE_CreateTemporaryPassword = -1626509434,
  CODE_DeleteAccount = -1203056508,
  CODE_DeleteChatHistory = -1384632722,
  CODE_DeleteChatMessagesFromUser = -1599689199,
  CODE_DeleteChatReplyMarkup = 100637531,
  CODE_DeleteFile = 1807653676,
  CODE_DeleteLanguagePack = -2108761026,
  CODE_DeleteMessages = 1130090173,
  CODE_DeletePassportElement = -1719555468,
  CODE_DeleteProfilePhoto = 1319794625,
  CODE_DeleteSavedCredentials = 826300114,
  CODE_DeleteSavedOrderInfo = 1629058164,
  CODE_DeleteSupergroup = -1999855965,
  CODE_Destroy = 685331274,
  CODE_DisableProxy = -2100095102,
  CODE_DiscardCall = -923187372,
  CODE_DisconnectAllWebsites = -1082985981,
  CODE_DisconnectWebsite = -778767395,
  CODE_DownloadFile = 1531851978,
  CODE_EditCustomLanguagePackInfo = 1320751257,
  CODE_EditInlineMessageCaption = -760985929,
  CODE_EditInlineMessageLiveLocation = 655046316,
  CODE_EditInlineMessageMedia = 23553921,
  CODE_EditInlineMessageReplyMarkup = -67565858,
  CODE_EditInlineMessageText = -855457307,
  CODE_EditMessageCaption = 1154677038,
  CODE_EditMessageLiveLocation = -1146772745,
  CODE_EditMessageMedia = -1152678125,
  CODE_EditMessageReplyMarkup = 332127881,
  CODE_EditMessageText = 196272567,
  CODE_EditProxy = -1605883821,
  CODE_EnableProxy = 1494450838,
  CODE_FinishFileGeneration = -1055060835,
  CODE_ForwardMessages = -537573308,
  CODE_GenerateChatInviteLink = 1945532500,
  CODE_GetAccountTtl = -443905161,
  CODE_GetActiveLiveLocationMessages = -1425459567,
  CODE_GetActiveSessions = 1119710526,
  CODE_GetAllPassportElements = -2038945045,
  CODE_GetArchivedStickerSets = 1996943238,
  CODE_GetAttachedStickerSets = 1302172429,
  CODE_GetAuthorizationState = 1949154877,
  CODE_GetBasicGroup = 561775568,
  CODE_GetBasicGroupFullInfo = 1770517905,
  CODE_GetBlockedUsers = -742912777,
  CODE_GetCallbackQueryAnswer = 116357727,
  CODE_GetChat = 1866601536,
  CODE_GetChatAdministrators = 508231041,
  CODE_GetChatEventLog = 206900967,
  CODE_GetChatHistory = -799960451,
  CODE_GetChatMember = 677085892,
  CODE_GetChatMessageByDate = 1062564150,
  CODE_GetChatMessageCount = 205435308,
  CODE_GetChatPinnedMessage = 359865008,
  CODE_GetChatReportSpamState = -748866856,
  CODE_GetChats = -2121381601,
  CODE_GetConnectedWebsites = -170536110,
  CODE_GetContacts = -1417722768,
  CODE_GetCountryCode = 1540593906,
  CODE_GetCreatedPublicChats = 1609082914,
  CODE_GetDeepLinkInfo = 680673150,
  CODE_GetFavoriteStickers = -338964672,
  CODE_GetFile = 1553923406,
  CODE_GetFileExtension = -106055372,
  CODE_GetFileMimeType = -2073879671,
  CODE_GetGameHighScores = 1920923753,
  CODE_GetGroupsInCommon = -23238689,
  CODE_GetImportedContactCount = -656336346,
  CODE_GetInlineGameHighScores = -1833445800,
  CODE_GetInlineQueryResults = -1182511172,
  CODE_GetInstalledStickerSets = 1214523749,
  CODE_GetInviteText = 794573512,
  CODE_GetLanguagePackString = 150789747,
  CODE_GetLanguagePackStrings = 1246259088,
  CODE_GetLocalizationTargetInfo = 1849499526,
  CODE_GetMapThumbnailFile = -152660070,
  CODE_GetMe = -191516033,
  CODE_GetMessage = -1821196160,
  CODE_GetMessages = 425299338,
  CODE_GetNetworkStatistics = -986228706,
  CODE_GetOption = -1572495746,
  CODE_GetPassportAuthorizationForm = 1998294216,
  CODE_GetPassportElement = -1882398342,
  CODE_GetPasswordState = -174752904,
  CODE_GetPaymentForm = -2146950882,
  CODE_GetPaymentReceipt = 1013758294,
  CODE_GetPreferredCountryLanguage = -933049386,
  CODE_GetProxies = -95026381,
  CODE_GetProxyLink = -1285597664,
  CODE_GetPublicMessageLink = -374642839,
  CODE_GetRecentInlineBots = 1437823548,
  CODE_GetRecentStickers = -579622241,
  CODE_GetRecentlyVisitedTMeUrls = 806754961,
  CODE_GetRecoveryEmailAddress = -1594770947,
  CODE_GetRemoteFile = 2137204530,
  CODE_GetRepliedMessage = -641918531,
  CODE_GetSavedAnimations = 7051032,
  CODE_GetSavedOrderInfo = -1152016675,
  CODE_GetScopeNotificationSettings = -995613361,
  CODE_GetSecretChat = 40599169,
  CODE_GetStickerEmojis = 95352475,
  CODE_GetStickerSet = 1052318659,
  CODE_GetStickers = -1594919556,
  CODE_GetStorageStatistics = -853193929,
  CODE_GetStorageStatisticsFast = 61368066,
  CODE_GetSupergroup = -2063063706,
  CODE_GetSupergroupFullInfo = -1150331262,
  CODE_GetSupergroupMembers = 1427643098,
  CODE_GetSupportUser = -1733497700,
  CODE_GetTemporaryPasswordState = -12670830,
  CODE_GetTextEntities = -341490693,
  CODE_GetTopChats = -388410847,
  CODE_GetTrendingStickerSets = -1729129957,
  CODE_GetUser = -47586017,
  CODE_GetUserFullInfo = -655443263,
  CODE_GetUserPrivacySettingRules = -2077223311,
  CODE_GetUserProfilePhotos = -2062927433,
  CODE_GetWallpapers = 2097518555,
  CODE_GetWebPageInstantView = -1962649975,
  CODE_GetWebPagePreview = 573441580,
  CODE_ImportContacts = -215132767,
  CODE_JoinChat = 326769313,
  CODE_JoinChatByInviteLink = -1049973882,
  CODE_LeaveChat = -1825080735,
  CODE_LogOut = -1581923301,
  CODE_OpenChat = -323371509,
  CODE_OpenMessageContent = -739088005,
  CODE_OptimizeStorage = 980397489,
  CODE_ParseTextEntities = -1709194593,
  CODE_PinSupergroupMessage = 1141187557,
  CODE_PingProxy = -979681103,
  CODE_ProcessDcUpdate = -1806562997,
  CODE_ReadAllChatMentions = 1357558453,
  CODE_RecoverAuthenticationPassword = 787436412,
  CODE_RecoverPassword = 1660185903,
  CODE_RegisterDevice = -413637293,
  CODE_RemoveContacts = -615510759,
  CODE_RemoveFavoriteSticker = 1152945264,
  CODE_RemoveProxy = 1369219847,
  CODE_RemoveRecentHashtag = -1013735260,
  CODE_RemoveRecentSticker = 1246577677,
  CODE_RemoveRecentlyFoundChat = 717340444,
  CODE_RemoveSavedAnimation = -495605479,
  CODE_RemoveStickerFromSet = 1642196644,
  CODE_RemoveTopChat = -1907876267,
  CODE_ReorderInstalledStickerSets = 1114537563,
  CODE_ReportChat = -312579772,
  CODE_ReportSupergroupSpam = -2125451498,
  CODE_RequestAuthenticationPasswordRecovery = 1393896118,
  CODE_RequestPasswordRecovery = -13777582,
  CODE_ResendAuthenticationCode = -814377191,
  CODE_ResendChangePhoneNumberCode = -786772060,
  CODE_ResendEmailAddressVerificationCode = -1872416732,
  CODE_ResendPhoneNumberConfirmationCode = 2069068522,
  CODE_ResendPhoneNumberVerificationCode = 1367629820,
  CODE_ResetAllNotificationSettings = -174020359,
  CODE_ResetNetworkStatistics = 1646452102,
  CODE_SearchCallMessages = -1077230820,
  CODE_SearchChatMembers = -445823291,
  CODE_SearchChatMessages = -1528846671,
  CODE_SearchChatRecentLocationMessages = 950238950,
  CODE_SearchChats = -1879787060,
  CODE_SearchChatsOnServer = -1158402188,
  CODE_SearchContacts = -1794690715,
  CODE_SearchHashtags = 1043637617,
  CODE_SearchInstalledStickerSets = 681171344,
  CODE_SearchMessages = 1579305146,
  CODE_SearchPublicChat = 857135533,
  CODE_SearchPublicChats = 970385337,
  CODE_SearchSecretMessages = -1670627915,
  CODE_SearchStickerSet = 1157930222,
  CODE_SearchStickerSets = -1082314629,
  CODE_SearchStickers = 1555771203,
  CODE_SendBotStartMessage = 1112181339,
  CODE_SendCallDebugInformation = 2019243839,
  CODE_SendCallRating = 243075146,
  CODE_SendChatAction = -841357536,
  CODE_SendChatScreenshotTakenNotification = 448399457,
  CODE_SendChatSetTtlMessage = 1432535564,
  CODE_SendCustomRequest = 285045153,
  CODE_SendEmailAddressVerificationCode = -221621379,
  CODE_SendInlineQueryResultMessage = -643910868,
  CODE_SendMessage = 1694632114,
  CODE_SendMessageAlbum = -291823014,
  CODE_SendPassportAuthorizationForm = -602402218,
  CODE_SendPaymentForm = 591581572,
  CODE_SendPhoneNumberConfirmationCode = 1975492794,
  CODE_SendPhoneNumberVerificationCode = -280632685,
  CODE_SetAccountTtl = 701389032,
  CODE_SetAlarm = -873497067,
  CODE_SetAuthenticationPhoneNumber = -856055465,
  CODE_SetBio = -1619582124,
  CODE_SetBotUpdatesStatus = -1154926191,
  CODE_SetChatClientData = -827119811,
  CODE_SetChatDraftMessage = -588175579,
  CODE_SetChatMemberStatus = -1754439241,
  CODE_SetChatNotificationSettings = 777199614,
  CODE_SetChatPhoto = 132244217,
  CODE_SetChatTitle = 164282047,
  CODE_SetCustomLanguagePack = -296742819,
  CODE_SetCustomLanguagePackString = 1316365592,
  CODE_SetDatabaseEncryptionKey = -1204599371,
  CODE_SetFileGenerationProgress = -540459953,
  CODE_SetGameScore = -1768307069,
  CODE_SetInlineGameScore = 758435487,
  CODE_SetName = 1711693584,
  CODE_SetNetworkType = -701635234,
  CODE_SetOption = 2114670322,
  CODE_SetPassportElement = 2068173212,
  CODE_SetPassportElementErrors = 1455869875,
  CODE_SetPassword = -1193589027,
  CODE_SetPinnedChats = -1369665719,
  CODE_SetProfilePhoto = 1594734550,
  CODE_SetRecoveryEmailAddress = -1981836385,
  CODE_SetScopeNotificationSettings = -2049984966,
  CODE_SetStickerPositionInSet = 2075281185,
  CODE_SetSupergroupDescription = 227623488,
  CODE_SetSupergroupStickerSet = -295782298,
  CODE_SetSupergroupUsername = -1428333122,
  CODE_SetTdlibParameters = -1912557997,
  CODE_SetUserPrivacySettingRules = -473812741,
  CODE_SetUsername = 439901214,
  CODE_TerminateAllOtherSessions = 1874485523,
  CODE_TerminateSession = -407385812,
  CODE_TestCallBytes = -736011607,
  CODE_TestCallEmpty = -627291626,
  CODE_TestCallString = -1732818385,
  CODE_TestCallVectorInt = -2137277793,
  CODE_TestCallVectorIntObject = 1825428218,
  CODE_TestCallVectorString = -408600900,
  CODE_TestCallVectorStringObject = 1527666429,
  CODE_TestGetDifference = 1747084069,
  CODE_TestNetwork = -1343998901,
  CODE_TestSquareInt = -60135024,
  CODE_TestUseError = 528842186,
  CODE_TestUseUpdate = 717094686,
  CODE_ToggleBasicGroupAdministrators = -591395611,
  CODE_ToggleChatDefaultDisableNotification = 314794002,
  CODE_ToggleChatIsMarkedAsUnread = -986129697,
  CODE_ToggleChatIsPinned = -1166802621,
  CODE_ToggleSupergroupInvites = -797384141,
  CODE_ToggleSupergroupIsAllHistoryAvailable = 1701526555,
  CODE_ToggleSupergroupSignMessages = -558196581,
  CODE_UnblockUser = -307286367,
  CODE_UnpinSupergroupMessage = -1987029530,
  CODE_UpgradeBasicGroupChatToSupergroupChat = 300488122,
  CODE_UploadFile = -745597786,
  CODE_UploadStickerFile = 1134087551,
  CODE_ValidateOrderInfo = 9480644,
  CODE_ViewMessages = -1925784915,
  CODE_ViewTrendingStickerSets = -952416520,
};
struct TdAccountTtl {
  int ID;
  int refcnt;
  int days_;
};
struct TdAccountTtl *TdCreateObjectAccountTtl (int days_);
char *TdSerializeAccountTtl (struct TdAccountTtl *var);
void TdDestroyObjectAccountTtl (struct TdAccountTtl *var);
void TdStackStorerAccountTtl (struct TdAccountTtl *var, struct TdStackStorerMethods *M);
struct TdAccountTtl *TdStackFetcherAccountTtl (struct TdStackFetcherMethods *M);
struct TdAddress {
  int ID;
  int refcnt;
  char *country_code_;
  char *state_;
  char *city_;
  char *street_line1_;
  char *street_line2_;
  char *postal_code_;
};
struct TdAddress *TdCreateObjectAddress (char *country_code_, char *state_, char *city_, char *street_line1_, char *street_line2_, char *postal_code_);
char *TdSerializeAddress (struct TdAddress *var);
void TdDestroyObjectAddress (struct TdAddress *var);
void TdStackStorerAddress (struct TdAddress *var, struct TdStackStorerMethods *M);
struct TdAddress *TdStackFetcherAddress (struct TdStackFetcherMethods *M);
struct TdAnimation {
  int ID;
  int refcnt;
  int duration_;
  int width_;
  int height_;
  char *file_name_;
  char *mime_type_;
  struct TdPhotoSize *thumbnail_;
  struct TdFile *animation_;
};
struct TdAnimation *TdCreateObjectAnimation (int duration_, int width_, int height_, char *file_name_, char *mime_type_, struct TdPhotoSize *thumbnail_, struct TdFile *animation_);
char *TdSerializeAnimation (struct TdAnimation *var);
void TdDestroyObjectAnimation (struct TdAnimation *var);
void TdStackStorerAnimation (struct TdAnimation *var, struct TdStackStorerMethods *M);
struct TdAnimation *TdStackFetcherAnimation (struct TdStackFetcherMethods *M);
struct TdAnimations {
  int ID;
  int refcnt;
  struct TdVectorAnimation *animations_;
};
struct TdAnimations *TdCreateObjectAnimations (struct TdVectorAnimation *animations_);
char *TdSerializeAnimations (struct TdAnimations *var);
void TdDestroyObjectAnimations (struct TdAnimations *var);
void TdStackStorerAnimations (struct TdAnimations *var, struct TdStackStorerMethods *M);
struct TdAnimations *TdStackFetcherAnimations (struct TdStackFetcherMethods *M);
struct TdAudio {
  int ID;
  int refcnt;
  int duration_;
  char *title_;
  char *performer_;
  char *file_name_;
  char *mime_type_;
  struct TdPhotoSize *album_cover_thumbnail_;
  struct TdFile *audio_;
};
struct TdAudio *TdCreateObjectAudio (int duration_, char *title_, char *performer_, char *file_name_, char *mime_type_, struct TdPhotoSize *album_cover_thumbnail_, struct TdFile *audio_);
char *TdSerializeAudio (struct TdAudio *var);
void TdDestroyObjectAudio (struct TdAudio *var);
void TdStackStorerAudio (struct TdAudio *var, struct TdStackStorerMethods *M);
struct TdAudio *TdStackFetcherAudio (struct TdStackFetcherMethods *M);
struct TdAuthenticationCodeInfo {
  int ID;
  int refcnt;
  char *phone_number_;
  struct TdAuthenticationCodeType *type_;
  struct TdAuthenticationCodeType *next_type_;
  int timeout_;
};
struct TdAuthenticationCodeInfo *TdCreateObjectAuthenticationCodeInfo (char *phone_number_, struct TdAuthenticationCodeType *type_, struct TdAuthenticationCodeType *next_type_, int timeout_);
char *TdSerializeAuthenticationCodeInfo (struct TdAuthenticationCodeInfo *var);
void TdDestroyObjectAuthenticationCodeInfo (struct TdAuthenticationCodeInfo *var);
void TdStackStorerAuthenticationCodeInfo (struct TdAuthenticationCodeInfo *var, struct TdStackStorerMethods *M);
struct TdAuthenticationCodeInfo *TdStackFetcherAuthenticationCodeInfo (struct TdStackFetcherMethods *M);
struct TdAuthenticationCodeType {
  int ID;
  int refcnt;
};
char *TdSerializeAuthenticationCodeType (struct TdAuthenticationCodeType *var);
void TdDestroyObjectAuthenticationCodeType (struct TdAuthenticationCodeType *var);
void TdStackStorerAuthenticationCodeType (struct TdAuthenticationCodeType *var, struct TdStackStorerMethods *M);
struct TdAuthenticationCodeType *TdStackFetcherAuthenticationCodeType (struct TdStackFetcherMethods *M);
enum List_AuthenticationCodeType {
  CODE_AuthenticationCodeTypeTelegramMessage = 2079628074,
  CODE_AuthenticationCodeTypeSms = 962650760,
  CODE_AuthenticationCodeTypeCall = 1636265063,
  CODE_AuthenticationCodeTypeFlashCall = 1395882402,
};
struct TdAuthenticationCodeTypeTelegramMessage {
  int ID;
  int refcnt;
  int length_;
};
struct TdAuthenticationCodeTypeTelegramMessage *TdCreateObjectAuthenticationCodeTypeTelegramMessage (int length_);
char *TdSerializeAuthenticationCodeTypeTelegramMessage (struct TdAuthenticationCodeTypeTelegramMessage *var);
void TdDestroyObjectAuthenticationCodeTypeTelegramMessage (struct TdAuthenticationCodeTypeTelegramMessage *var);
void TdStackStorerAuthenticationCodeTypeTelegramMessage (struct TdAuthenticationCodeTypeTelegramMessage *var, struct TdStackStorerMethods *M);
struct TdAuthenticationCodeTypeTelegramMessage *TdStackFetcherAuthenticationCodeTypeTelegramMessage (struct TdStackFetcherMethods *M);
struct TdAuthenticationCodeTypeSms {
  int ID;
  int refcnt;
  int length_;
};
struct TdAuthenticationCodeTypeSms *TdCreateObjectAuthenticationCodeTypeSms (int length_);
char *TdSerializeAuthenticationCodeTypeSms (struct TdAuthenticationCodeTypeSms *var);
void TdDestroyObjectAuthenticationCodeTypeSms (struct TdAuthenticationCodeTypeSms *var);
void TdStackStorerAuthenticationCodeTypeSms (struct TdAuthenticationCodeTypeSms *var, struct TdStackStorerMethods *M);
struct TdAuthenticationCodeTypeSms *TdStackFetcherAuthenticationCodeTypeSms (struct TdStackFetcherMethods *M);
struct TdAuthenticationCodeTypeCall {
  int ID;
  int refcnt;
  int length_;
};
struct TdAuthenticationCodeTypeCall *TdCreateObjectAuthenticationCodeTypeCall (int length_);
char *TdSerializeAuthenticationCodeTypeCall (struct TdAuthenticationCodeTypeCall *var);
void TdDestroyObjectAuthenticationCodeTypeCall (struct TdAuthenticationCodeTypeCall *var);
void TdStackStorerAuthenticationCodeTypeCall (struct TdAuthenticationCodeTypeCall *var, struct TdStackStorerMethods *M);
struct TdAuthenticationCodeTypeCall *TdStackFetcherAuthenticationCodeTypeCall (struct TdStackFetcherMethods *M);
struct TdAuthenticationCodeTypeFlashCall {
  int ID;
  int refcnt;
  char *pattern_;
};
struct TdAuthenticationCodeTypeFlashCall *TdCreateObjectAuthenticationCodeTypeFlashCall (char *pattern_);
char *TdSerializeAuthenticationCodeTypeFlashCall (struct TdAuthenticationCodeTypeFlashCall *var);
void TdDestroyObjectAuthenticationCodeTypeFlashCall (struct TdAuthenticationCodeTypeFlashCall *var);
void TdStackStorerAuthenticationCodeTypeFlashCall (struct TdAuthenticationCodeTypeFlashCall *var, struct TdStackStorerMethods *M);
struct TdAuthenticationCodeTypeFlashCall *TdStackFetcherAuthenticationCodeTypeFlashCall (struct TdStackFetcherMethods *M);
struct TdAuthorizationState {
  int ID;
  int refcnt;
};
char *TdSerializeAuthorizationState (struct TdAuthorizationState *var);
void TdDestroyObjectAuthorizationState (struct TdAuthorizationState *var);
void TdStackStorerAuthorizationState (struct TdAuthorizationState *var, struct TdStackStorerMethods *M);
struct TdAuthorizationState *TdStackFetcherAuthorizationState (struct TdStackFetcherMethods *M);
enum List_AuthorizationState {
  CODE_AuthorizationStateWaitTdlibParameters = 904720988,
  CODE_AuthorizationStateWaitEncryptionKey = 612103496,
  CODE_AuthorizationStateWaitPhoneNumber = 306402531,
  CODE_AuthorizationStateWaitCode = -122899120,
  CODE_AuthorizationStateWaitPassword = 187548796,
  CODE_AuthorizationStateReady = -1834871737,
  CODE_AuthorizationStateLoggingOut = 154449270,
  CODE_AuthorizationStateClosing = 445855311,
  CODE_AuthorizationStateClosed = 1526047584,
};
struct TdAuthorizationStateWaitTdlibParameters {
  int ID;
  int refcnt;
};
struct TdAuthorizationStateWaitTdlibParameters *TdCreateObjectAuthorizationStateWaitTdlibParameters (void);
char *TdSerializeAuthorizationStateWaitTdlibParameters (struct TdAuthorizationStateWaitTdlibParameters *var);
void TdDestroyObjectAuthorizationStateWaitTdlibParameters (struct TdAuthorizationStateWaitTdlibParameters *var);
void TdStackStorerAuthorizationStateWaitTdlibParameters (struct TdAuthorizationStateWaitTdlibParameters *var, struct TdStackStorerMethods *M);
struct TdAuthorizationStateWaitTdlibParameters *TdStackFetcherAuthorizationStateWaitTdlibParameters (struct TdStackFetcherMethods *M);
struct TdAuthorizationStateWaitEncryptionKey {
  int ID;
  int refcnt;
  int is_encrypted_;
};
struct TdAuthorizationStateWaitEncryptionKey *TdCreateObjectAuthorizationStateWaitEncryptionKey (int is_encrypted_);
char *TdSerializeAuthorizationStateWaitEncryptionKey (struct TdAuthorizationStateWaitEncryptionKey *var);
void TdDestroyObjectAuthorizationStateWaitEncryptionKey (struct TdAuthorizationStateWaitEncryptionKey *var);
void TdStackStorerAuthorizationStateWaitEncryptionKey (struct TdAuthorizationStateWaitEncryptionKey *var, struct TdStackStorerMethods *M);
struct TdAuthorizationStateWaitEncryptionKey *TdStackFetcherAuthorizationStateWaitEncryptionKey (struct TdStackFetcherMethods *M);
struct TdAuthorizationStateWaitPhoneNumber {
  int ID;
  int refcnt;
};
struct TdAuthorizationStateWaitPhoneNumber *TdCreateObjectAuthorizationStateWaitPhoneNumber (void);
char *TdSerializeAuthorizationStateWaitPhoneNumber (struct TdAuthorizationStateWaitPhoneNumber *var);
void TdDestroyObjectAuthorizationStateWaitPhoneNumber (struct TdAuthorizationStateWaitPhoneNumber *var);
void TdStackStorerAuthorizationStateWaitPhoneNumber (struct TdAuthorizationStateWaitPhoneNumber *var, struct TdStackStorerMethods *M);
struct TdAuthorizationStateWaitPhoneNumber *TdStackFetcherAuthorizationStateWaitPhoneNumber (struct TdStackFetcherMethods *M);
struct TdAuthorizationStateWaitCode {
  int ID;
  int refcnt;
  int is_registered_;
  struct TdTermsOfService *terms_of_service_;
  struct TdAuthenticationCodeInfo *code_info_;
};
struct TdAuthorizationStateWaitCode *TdCreateObjectAuthorizationStateWaitCode (int is_registered_, struct TdTermsOfService *terms_of_service_, struct TdAuthenticationCodeInfo *code_info_);
char *TdSerializeAuthorizationStateWaitCode (struct TdAuthorizationStateWaitCode *var);
void TdDestroyObjectAuthorizationStateWaitCode (struct TdAuthorizationStateWaitCode *var);
void TdStackStorerAuthorizationStateWaitCode (struct TdAuthorizationStateWaitCode *var, struct TdStackStorerMethods *M);
struct TdAuthorizationStateWaitCode *TdStackFetcherAuthorizationStateWaitCode (struct TdStackFetcherMethods *M);
struct TdAuthorizationStateWaitPassword {
  int ID;
  int refcnt;
  char *password_hint_;
  int has_recovery_email_address_;
  char *recovery_email_address_pattern_;
};
struct TdAuthorizationStateWaitPassword *TdCreateObjectAuthorizationStateWaitPassword (char *password_hint_, int has_recovery_email_address_, char *recovery_email_address_pattern_);
char *TdSerializeAuthorizationStateWaitPassword (struct TdAuthorizationStateWaitPassword *var);
void TdDestroyObjectAuthorizationStateWaitPassword (struct TdAuthorizationStateWaitPassword *var);
void TdStackStorerAuthorizationStateWaitPassword (struct TdAuthorizationStateWaitPassword *var, struct TdStackStorerMethods *M);
struct TdAuthorizationStateWaitPassword *TdStackFetcherAuthorizationStateWaitPassword (struct TdStackFetcherMethods *M);
struct TdAuthorizationStateReady {
  int ID;
  int refcnt;
};
struct TdAuthorizationStateReady *TdCreateObjectAuthorizationStateReady (void);
char *TdSerializeAuthorizationStateReady (struct TdAuthorizationStateReady *var);
void TdDestroyObjectAuthorizationStateReady (struct TdAuthorizationStateReady *var);
void TdStackStorerAuthorizationStateReady (struct TdAuthorizationStateReady *var, struct TdStackStorerMethods *M);
struct TdAuthorizationStateReady *TdStackFetcherAuthorizationStateReady (struct TdStackFetcherMethods *M);
struct TdAuthorizationStateLoggingOut {
  int ID;
  int refcnt;
};
struct TdAuthorizationStateLoggingOut *TdCreateObjectAuthorizationStateLoggingOut (void);
char *TdSerializeAuthorizationStateLoggingOut (struct TdAuthorizationStateLoggingOut *var);
void TdDestroyObjectAuthorizationStateLoggingOut (struct TdAuthorizationStateLoggingOut *var);
void TdStackStorerAuthorizationStateLoggingOut (struct TdAuthorizationStateLoggingOut *var, struct TdStackStorerMethods *M);
struct TdAuthorizationStateLoggingOut *TdStackFetcherAuthorizationStateLoggingOut (struct TdStackFetcherMethods *M);
struct TdAuthorizationStateClosing {
  int ID;
  int refcnt;
};
struct TdAuthorizationStateClosing *TdCreateObjectAuthorizationStateClosing (void);
char *TdSerializeAuthorizationStateClosing (struct TdAuthorizationStateClosing *var);
void TdDestroyObjectAuthorizationStateClosing (struct TdAuthorizationStateClosing *var);
void TdStackStorerAuthorizationStateClosing (struct TdAuthorizationStateClosing *var, struct TdStackStorerMethods *M);
struct TdAuthorizationStateClosing *TdStackFetcherAuthorizationStateClosing (struct TdStackFetcherMethods *M);
struct TdAuthorizationStateClosed {
  int ID;
  int refcnt;
};
struct TdAuthorizationStateClosed *TdCreateObjectAuthorizationStateClosed (void);
char *TdSerializeAuthorizationStateClosed (struct TdAuthorizationStateClosed *var);
void TdDestroyObjectAuthorizationStateClosed (struct TdAuthorizationStateClosed *var);
void TdStackStorerAuthorizationStateClosed (struct TdAuthorizationStateClosed *var, struct TdStackStorerMethods *M);
struct TdAuthorizationStateClosed *TdStackFetcherAuthorizationStateClosed (struct TdStackFetcherMethods *M);
struct TdBasicGroup {
  int ID;
  int refcnt;
  int id_;
  int member_count_;
  struct TdChatMemberStatus *status_;
  int everyone_is_administrator_;
  int is_active_;
  int upgraded_to_supergroup_id_;
};
struct TdBasicGroup *TdCreateObjectBasicGroup (int id_, int member_count_, struct TdChatMemberStatus *status_, int everyone_is_administrator_, int is_active_, int upgraded_to_supergroup_id_);
char *TdSerializeBasicGroup (struct TdBasicGroup *var);
void TdDestroyObjectBasicGroup (struct TdBasicGroup *var);
void TdStackStorerBasicGroup (struct TdBasicGroup *var, struct TdStackStorerMethods *M);
struct TdBasicGroup *TdStackFetcherBasicGroup (struct TdStackFetcherMethods *M);
struct TdBasicGroupFullInfo {
  int ID;
  int refcnt;
  int creator_user_id_;
  struct TdVectorChatMember *members_;
  char *invite_link_;
};
struct TdBasicGroupFullInfo *TdCreateObjectBasicGroupFullInfo (int creator_user_id_, struct TdVectorChatMember *members_, char *invite_link_);
char *TdSerializeBasicGroupFullInfo (struct TdBasicGroupFullInfo *var);
void TdDestroyObjectBasicGroupFullInfo (struct TdBasicGroupFullInfo *var);
void TdStackStorerBasicGroupFullInfo (struct TdBasicGroupFullInfo *var, struct TdStackStorerMethods *M);
struct TdBasicGroupFullInfo *TdStackFetcherBasicGroupFullInfo (struct TdStackFetcherMethods *M);
struct TdBotCommand {
  int ID;
  int refcnt;
  char *command_;
  char *description_;
};
struct TdBotCommand *TdCreateObjectBotCommand (char *command_, char *description_);
char *TdSerializeBotCommand (struct TdBotCommand *var);
void TdDestroyObjectBotCommand (struct TdBotCommand *var);
void TdStackStorerBotCommand (struct TdBotCommand *var, struct TdStackStorerMethods *M);
struct TdBotCommand *TdStackFetcherBotCommand (struct TdStackFetcherMethods *M);
struct TdBotInfo {
  int ID;
  int refcnt;
  char *description_;
  struct TdVectorBotCommand *commands_;
};
struct TdBotInfo *TdCreateObjectBotInfo (char *description_, struct TdVectorBotCommand *commands_);
char *TdSerializeBotInfo (struct TdBotInfo *var);
void TdDestroyObjectBotInfo (struct TdBotInfo *var);
void TdStackStorerBotInfo (struct TdBotInfo *var, struct TdStackStorerMethods *M);
struct TdBotInfo *TdStackFetcherBotInfo (struct TdStackFetcherMethods *M);
struct TdCall {
  int ID;
  int refcnt;
  int id_;
  int user_id_;
  int is_outgoing_;
  struct TdCallState *state_;
};
struct TdCall *TdCreateObjectCall (int id_, int user_id_, int is_outgoing_, struct TdCallState *state_);
char *TdSerializeCall (struct TdCall *var);
void TdDestroyObjectCall (struct TdCall *var);
void TdStackStorerCall (struct TdCall *var, struct TdStackStorerMethods *M);
struct TdCall *TdStackFetcherCall (struct TdStackFetcherMethods *M);
struct TdCallConnection {
  int ID;
  int refcnt;
  long long id_;
  char *ip_;
  char *ipv6_;
  int port_;
  struct TdBytes peer_tag_;
};
struct TdCallConnection *TdCreateObjectCallConnection (long long id_, char *ip_, char *ipv6_, int port_, struct TdBytes peer_tag_);
char *TdSerializeCallConnection (struct TdCallConnection *var);
void TdDestroyObjectCallConnection (struct TdCallConnection *var);
void TdStackStorerCallConnection (struct TdCallConnection *var, struct TdStackStorerMethods *M);
struct TdCallConnection *TdStackFetcherCallConnection (struct TdStackFetcherMethods *M);
struct TdCallDiscardReason {
  int ID;
  int refcnt;
};
char *TdSerializeCallDiscardReason (struct TdCallDiscardReason *var);
void TdDestroyObjectCallDiscardReason (struct TdCallDiscardReason *var);
void TdStackStorerCallDiscardReason (struct TdCallDiscardReason *var, struct TdStackStorerMethods *M);
struct TdCallDiscardReason *TdStackFetcherCallDiscardReason (struct TdStackFetcherMethods *M);
enum List_CallDiscardReason {
  CODE_CallDiscardReasonEmpty = -1258917949,
  CODE_CallDiscardReasonMissed = 1680358012,
  CODE_CallDiscardReasonDeclined = -1729926094,
  CODE_CallDiscardReasonDisconnected = -1342872670,
  CODE_CallDiscardReasonHungUp = 438216166,
};
struct TdCallDiscardReasonEmpty {
  int ID;
  int refcnt;
};
struct TdCallDiscardReasonEmpty *TdCreateObjectCallDiscardReasonEmpty (void);
char *TdSerializeCallDiscardReasonEmpty (struct TdCallDiscardReasonEmpty *var);
void TdDestroyObjectCallDiscardReasonEmpty (struct TdCallDiscardReasonEmpty *var);
void TdStackStorerCallDiscardReasonEmpty (struct TdCallDiscardReasonEmpty *var, struct TdStackStorerMethods *M);
struct TdCallDiscardReasonEmpty *TdStackFetcherCallDiscardReasonEmpty (struct TdStackFetcherMethods *M);
struct TdCallDiscardReasonMissed {
  int ID;
  int refcnt;
};
struct TdCallDiscardReasonMissed *TdCreateObjectCallDiscardReasonMissed (void);
char *TdSerializeCallDiscardReasonMissed (struct TdCallDiscardReasonMissed *var);
void TdDestroyObjectCallDiscardReasonMissed (struct TdCallDiscardReasonMissed *var);
void TdStackStorerCallDiscardReasonMissed (struct TdCallDiscardReasonMissed *var, struct TdStackStorerMethods *M);
struct TdCallDiscardReasonMissed *TdStackFetcherCallDiscardReasonMissed (struct TdStackFetcherMethods *M);
struct TdCallDiscardReasonDeclined {
  int ID;
  int refcnt;
};
struct TdCallDiscardReasonDeclined *TdCreateObjectCallDiscardReasonDeclined (void);
char *TdSerializeCallDiscardReasonDeclined (struct TdCallDiscardReasonDeclined *var);
void TdDestroyObjectCallDiscardReasonDeclined (struct TdCallDiscardReasonDeclined *var);
void TdStackStorerCallDiscardReasonDeclined (struct TdCallDiscardReasonDeclined *var, struct TdStackStorerMethods *M);
struct TdCallDiscardReasonDeclined *TdStackFetcherCallDiscardReasonDeclined (struct TdStackFetcherMethods *M);
struct TdCallDiscardReasonDisconnected {
  int ID;
  int refcnt;
};
struct TdCallDiscardReasonDisconnected *TdCreateObjectCallDiscardReasonDisconnected (void);
char *TdSerializeCallDiscardReasonDisconnected (struct TdCallDiscardReasonDisconnected *var);
void TdDestroyObjectCallDiscardReasonDisconnected (struct TdCallDiscardReasonDisconnected *var);
void TdStackStorerCallDiscardReasonDisconnected (struct TdCallDiscardReasonDisconnected *var, struct TdStackStorerMethods *M);
struct TdCallDiscardReasonDisconnected *TdStackFetcherCallDiscardReasonDisconnected (struct TdStackFetcherMethods *M);
struct TdCallDiscardReasonHungUp {
  int ID;
  int refcnt;
};
struct TdCallDiscardReasonHungUp *TdCreateObjectCallDiscardReasonHungUp (void);
char *TdSerializeCallDiscardReasonHungUp (struct TdCallDiscardReasonHungUp *var);
void TdDestroyObjectCallDiscardReasonHungUp (struct TdCallDiscardReasonHungUp *var);
void TdStackStorerCallDiscardReasonHungUp (struct TdCallDiscardReasonHungUp *var, struct TdStackStorerMethods *M);
struct TdCallDiscardReasonHungUp *TdStackFetcherCallDiscardReasonHungUp (struct TdStackFetcherMethods *M);
struct TdCallId {
  int ID;
  int refcnt;
  int id_;
};
struct TdCallId *TdCreateObjectCallId (int id_);
char *TdSerializeCallId (struct TdCallId *var);
void TdDestroyObjectCallId (struct TdCallId *var);
void TdStackStorerCallId (struct TdCallId *var, struct TdStackStorerMethods *M);
struct TdCallId *TdStackFetcherCallId (struct TdStackFetcherMethods *M);
struct TdCallProtocol {
  int ID;
  int refcnt;
  int udp_p2p_;
  int udp_reflector_;
  int min_layer_;
  int max_layer_;
};
struct TdCallProtocol *TdCreateObjectCallProtocol (int udp_p2p_, int udp_reflector_, int min_layer_, int max_layer_);
char *TdSerializeCallProtocol (struct TdCallProtocol *var);
void TdDestroyObjectCallProtocol (struct TdCallProtocol *var);
void TdStackStorerCallProtocol (struct TdCallProtocol *var, struct TdStackStorerMethods *M);
struct TdCallProtocol *TdStackFetcherCallProtocol (struct TdStackFetcherMethods *M);
struct TdCallState {
  int ID;
  int refcnt;
};
char *TdSerializeCallState (struct TdCallState *var);
void TdDestroyObjectCallState (struct TdCallState *var);
void TdStackStorerCallState (struct TdCallState *var, struct TdStackStorerMethods *M);
struct TdCallState *TdStackFetcherCallState (struct TdStackFetcherMethods *M);
enum List_CallState {
  CODE_CallStatePending = 1073048620,
  CODE_CallStateExchangingKeys = -1848149403,
  CODE_CallStateReady = 1518705438,
  CODE_CallStateHangingUp = -2133790038,
  CODE_CallStateDiscarded = -190853167,
  CODE_CallStateError = -975215467,
};
struct TdCallStatePending {
  int ID;
  int refcnt;
  int is_created_;
  int is_received_;
};
struct TdCallStatePending *TdCreateObjectCallStatePending (int is_created_, int is_received_);
char *TdSerializeCallStatePending (struct TdCallStatePending *var);
void TdDestroyObjectCallStatePending (struct TdCallStatePending *var);
void TdStackStorerCallStatePending (struct TdCallStatePending *var, struct TdStackStorerMethods *M);
struct TdCallStatePending *TdStackFetcherCallStatePending (struct TdStackFetcherMethods *M);
struct TdCallStateExchangingKeys {
  int ID;
  int refcnt;
};
struct TdCallStateExchangingKeys *TdCreateObjectCallStateExchangingKeys (void);
char *TdSerializeCallStateExchangingKeys (struct TdCallStateExchangingKeys *var);
void TdDestroyObjectCallStateExchangingKeys (struct TdCallStateExchangingKeys *var);
void TdStackStorerCallStateExchangingKeys (struct TdCallStateExchangingKeys *var, struct TdStackStorerMethods *M);
struct TdCallStateExchangingKeys *TdStackFetcherCallStateExchangingKeys (struct TdStackFetcherMethods *M);
struct TdCallStateReady {
  int ID;
  int refcnt;
  struct TdCallProtocol *protocol_;
  struct TdVectorCallConnection *connections_;
  char *config_;
  struct TdBytes encryption_key_;
  struct TdVectorString *emojis_;
};
struct TdCallStateReady *TdCreateObjectCallStateReady (struct TdCallProtocol *protocol_, struct TdVectorCallConnection *connections_, char *config_, struct TdBytes encryption_key_, struct TdVectorString *emojis_);
char *TdSerializeCallStateReady (struct TdCallStateReady *var);
void TdDestroyObjectCallStateReady (struct TdCallStateReady *var);
void TdStackStorerCallStateReady (struct TdCallStateReady *var, struct TdStackStorerMethods *M);
struct TdCallStateReady *TdStackFetcherCallStateReady (struct TdStackFetcherMethods *M);
struct TdCallStateHangingUp {
  int ID;
  int refcnt;
};
struct TdCallStateHangingUp *TdCreateObjectCallStateHangingUp (void);
char *TdSerializeCallStateHangingUp (struct TdCallStateHangingUp *var);
void TdDestroyObjectCallStateHangingUp (struct TdCallStateHangingUp *var);
void TdStackStorerCallStateHangingUp (struct TdCallStateHangingUp *var, struct TdStackStorerMethods *M);
struct TdCallStateHangingUp *TdStackFetcherCallStateHangingUp (struct TdStackFetcherMethods *M);
struct TdCallStateDiscarded {
  int ID;
  int refcnt;
  struct TdCallDiscardReason *reason_;
  int need_rating_;
  int need_debug_information_;
};
struct TdCallStateDiscarded *TdCreateObjectCallStateDiscarded (struct TdCallDiscardReason *reason_, int need_rating_, int need_debug_information_);
char *TdSerializeCallStateDiscarded (struct TdCallStateDiscarded *var);
void TdDestroyObjectCallStateDiscarded (struct TdCallStateDiscarded *var);
void TdStackStorerCallStateDiscarded (struct TdCallStateDiscarded *var, struct TdStackStorerMethods *M);
struct TdCallStateDiscarded *TdStackFetcherCallStateDiscarded (struct TdStackFetcherMethods *M);
struct TdCallStateError {
  int ID;
  int refcnt;
  struct TdError *error_;
};
struct TdCallStateError *TdCreateObjectCallStateError (struct TdError *error_);
char *TdSerializeCallStateError (struct TdCallStateError *var);
void TdDestroyObjectCallStateError (struct TdCallStateError *var);
void TdStackStorerCallStateError (struct TdCallStateError *var, struct TdStackStorerMethods *M);
struct TdCallStateError *TdStackFetcherCallStateError (struct TdStackFetcherMethods *M);
struct TdCallbackQueryAnswer {
  int ID;
  int refcnt;
  char *text_;
  int show_alert_;
  char *url_;
};
struct TdCallbackQueryAnswer *TdCreateObjectCallbackQueryAnswer (char *text_, int show_alert_, char *url_);
char *TdSerializeCallbackQueryAnswer (struct TdCallbackQueryAnswer *var);
void TdDestroyObjectCallbackQueryAnswer (struct TdCallbackQueryAnswer *var);
void TdStackStorerCallbackQueryAnswer (struct TdCallbackQueryAnswer *var, struct TdStackStorerMethods *M);
struct TdCallbackQueryAnswer *TdStackFetcherCallbackQueryAnswer (struct TdStackFetcherMethods *M);
struct TdCallbackQueryPayload {
  int ID;
  int refcnt;
};
char *TdSerializeCallbackQueryPayload (struct TdCallbackQueryPayload *var);
void TdDestroyObjectCallbackQueryPayload (struct TdCallbackQueryPayload *var);
void TdStackStorerCallbackQueryPayload (struct TdCallbackQueryPayload *var, struct TdStackStorerMethods *M);
struct TdCallbackQueryPayload *TdStackFetcherCallbackQueryPayload (struct TdStackFetcherMethods *M);
enum List_CallbackQueryPayload {
  CODE_CallbackQueryPayloadData = -1977729946,
  CODE_CallbackQueryPayloadGame = 1303571512,
};
struct TdCallbackQueryPayloadData {
  int ID;
  int refcnt;
  struct TdBytes data_;
};
struct TdCallbackQueryPayloadData *TdCreateObjectCallbackQueryPayloadData (struct TdBytes data_);
char *TdSerializeCallbackQueryPayloadData (struct TdCallbackQueryPayloadData *var);
void TdDestroyObjectCallbackQueryPayloadData (struct TdCallbackQueryPayloadData *var);
void TdStackStorerCallbackQueryPayloadData (struct TdCallbackQueryPayloadData *var, struct TdStackStorerMethods *M);
struct TdCallbackQueryPayloadData *TdStackFetcherCallbackQueryPayloadData (struct TdStackFetcherMethods *M);
struct TdCallbackQueryPayloadGame {
  int ID;
  int refcnt;
  char *game_short_name_;
};
struct TdCallbackQueryPayloadGame *TdCreateObjectCallbackQueryPayloadGame (char *game_short_name_);
char *TdSerializeCallbackQueryPayloadGame (struct TdCallbackQueryPayloadGame *var);
void TdDestroyObjectCallbackQueryPayloadGame (struct TdCallbackQueryPayloadGame *var);
void TdStackStorerCallbackQueryPayloadGame (struct TdCallbackQueryPayloadGame *var, struct TdStackStorerMethods *M);
struct TdCallbackQueryPayloadGame *TdStackFetcherCallbackQueryPayloadGame (struct TdStackFetcherMethods *M);
struct TdChat {
  int ID;
  int refcnt;
  long long id_;
  struct TdChatType *type_;
  char *title_;
  struct TdChatPhoto *photo_;
  struct TdMessage *last_message_;
  long long order_;
  int is_pinned_;
  int is_marked_as_unread_;
  int is_sponsored_;
  int can_be_reported_;
  int default_disable_notification_;
  int unread_count_;
  long long last_read_inbox_message_id_;
  long long last_read_outbox_message_id_;
  int unread_mention_count_;
  struct TdChatNotificationSettings *notification_settings_;
  long long reply_markup_message_id_;
  struct TdDraftMessage *draft_message_;
  char *client_data_;
};
struct TdChat *TdCreateObjectChat (long long id_, struct TdChatType *type_, char *title_, struct TdChatPhoto *photo_, struct TdMessage *last_message_, long long order_, int is_pinned_, int is_marked_as_unread_, int is_sponsored_, int can_be_reported_, int default_disable_notification_, int unread_count_, long long last_read_inbox_message_id_, long long last_read_outbox_message_id_, int unread_mention_count_, struct TdChatNotificationSettings *notification_settings_, long long reply_markup_message_id_, struct TdDraftMessage *draft_message_, char *client_data_);
char *TdSerializeChat (struct TdChat *var);
void TdDestroyObjectChat (struct TdChat *var);
void TdStackStorerChat (struct TdChat *var, struct TdStackStorerMethods *M);
struct TdChat *TdStackFetcherChat (struct TdStackFetcherMethods *M);
struct TdChatAction {
  int ID;
  int refcnt;
};
char *TdSerializeChatAction (struct TdChatAction *var);
void TdDestroyObjectChatAction (struct TdChatAction *var);
void TdStackStorerChatAction (struct TdChatAction *var, struct TdStackStorerMethods *M);
struct TdChatAction *TdStackFetcherChatAction (struct TdStackFetcherMethods *M);
enum List_ChatAction {
  CODE_ChatActionTyping = 380122167,
  CODE_ChatActionRecordingVideo = 216553362,
  CODE_ChatActionUploadingVideo = 1234185270,
  CODE_ChatActionRecordingVoiceNote = -808850058,
  CODE_ChatActionUploadingVoiceNote = -613643666,
  CODE_ChatActionUploadingPhoto = 654240583,
  CODE_ChatActionUploadingDocument = 167884362,
  CODE_ChatActionChoosingLocation = -2017893596,
  CODE_ChatActionChoosingContact = -1222507496,
  CODE_ChatActionStartPlayingGame = -865884164,
  CODE_ChatActionRecordingVideoNote = 16523393,
  CODE_ChatActionUploadingVideoNote = 1172364918,
  CODE_ChatActionCancel = 1160523958,
};
struct TdChatActionTyping {
  int ID;
  int refcnt;
};
struct TdChatActionTyping *TdCreateObjectChatActionTyping (void);
char *TdSerializeChatActionTyping (struct TdChatActionTyping *var);
void TdDestroyObjectChatActionTyping (struct TdChatActionTyping *var);
void TdStackStorerChatActionTyping (struct TdChatActionTyping *var, struct TdStackStorerMethods *M);
struct TdChatActionTyping *TdStackFetcherChatActionTyping (struct TdStackFetcherMethods *M);
struct TdChatActionRecordingVideo {
  int ID;
  int refcnt;
};
struct TdChatActionRecordingVideo *TdCreateObjectChatActionRecordingVideo (void);
char *TdSerializeChatActionRecordingVideo (struct TdChatActionRecordingVideo *var);
void TdDestroyObjectChatActionRecordingVideo (struct TdChatActionRecordingVideo *var);
void TdStackStorerChatActionRecordingVideo (struct TdChatActionRecordingVideo *var, struct TdStackStorerMethods *M);
struct TdChatActionRecordingVideo *TdStackFetcherChatActionRecordingVideo (struct TdStackFetcherMethods *M);
struct TdChatActionUploadingVideo {
  int ID;
  int refcnt;
  int progress_;
};
struct TdChatActionUploadingVideo *TdCreateObjectChatActionUploadingVideo (int progress_);
char *TdSerializeChatActionUploadingVideo (struct TdChatActionUploadingVideo *var);
void TdDestroyObjectChatActionUploadingVideo (struct TdChatActionUploadingVideo *var);
void TdStackStorerChatActionUploadingVideo (struct TdChatActionUploadingVideo *var, struct TdStackStorerMethods *M);
struct TdChatActionUploadingVideo *TdStackFetcherChatActionUploadingVideo (struct TdStackFetcherMethods *M);
struct TdChatActionRecordingVoiceNote {
  int ID;
  int refcnt;
};
struct TdChatActionRecordingVoiceNote *TdCreateObjectChatActionRecordingVoiceNote (void);
char *TdSerializeChatActionRecordingVoiceNote (struct TdChatActionRecordingVoiceNote *var);
void TdDestroyObjectChatActionRecordingVoiceNote (struct TdChatActionRecordingVoiceNote *var);
void TdStackStorerChatActionRecordingVoiceNote (struct TdChatActionRecordingVoiceNote *var, struct TdStackStorerMethods *M);
struct TdChatActionRecordingVoiceNote *TdStackFetcherChatActionRecordingVoiceNote (struct TdStackFetcherMethods *M);
struct TdChatActionUploadingVoiceNote {
  int ID;
  int refcnt;
  int progress_;
};
struct TdChatActionUploadingVoiceNote *TdCreateObjectChatActionUploadingVoiceNote (int progress_);
char *TdSerializeChatActionUploadingVoiceNote (struct TdChatActionUploadingVoiceNote *var);
void TdDestroyObjectChatActionUploadingVoiceNote (struct TdChatActionUploadingVoiceNote *var);
void TdStackStorerChatActionUploadingVoiceNote (struct TdChatActionUploadingVoiceNote *var, struct TdStackStorerMethods *M);
struct TdChatActionUploadingVoiceNote *TdStackFetcherChatActionUploadingVoiceNote (struct TdStackFetcherMethods *M);
struct TdChatActionUploadingPhoto {
  int ID;
  int refcnt;
  int progress_;
};
struct TdChatActionUploadingPhoto *TdCreateObjectChatActionUploadingPhoto (int progress_);
char *TdSerializeChatActionUploadingPhoto (struct TdChatActionUploadingPhoto *var);
void TdDestroyObjectChatActionUploadingPhoto (struct TdChatActionUploadingPhoto *var);
void TdStackStorerChatActionUploadingPhoto (struct TdChatActionUploadingPhoto *var, struct TdStackStorerMethods *M);
struct TdChatActionUploadingPhoto *TdStackFetcherChatActionUploadingPhoto (struct TdStackFetcherMethods *M);
struct TdChatActionUploadingDocument {
  int ID;
  int refcnt;
  int progress_;
};
struct TdChatActionUploadingDocument *TdCreateObjectChatActionUploadingDocument (int progress_);
char *TdSerializeChatActionUploadingDocument (struct TdChatActionUploadingDocument *var);
void TdDestroyObjectChatActionUploadingDocument (struct TdChatActionUploadingDocument *var);
void TdStackStorerChatActionUploadingDocument (struct TdChatActionUploadingDocument *var, struct TdStackStorerMethods *M);
struct TdChatActionUploadingDocument *TdStackFetcherChatActionUploadingDocument (struct TdStackFetcherMethods *M);
struct TdChatActionChoosingLocation {
  int ID;
  int refcnt;
};
struct TdChatActionChoosingLocation *TdCreateObjectChatActionChoosingLocation (void);
char *TdSerializeChatActionChoosingLocation (struct TdChatActionChoosingLocation *var);
void TdDestroyObjectChatActionChoosingLocation (struct TdChatActionChoosingLocation *var);
void TdStackStorerChatActionChoosingLocation (struct TdChatActionChoosingLocation *var, struct TdStackStorerMethods *M);
struct TdChatActionChoosingLocation *TdStackFetcherChatActionChoosingLocation (struct TdStackFetcherMethods *M);
struct TdChatActionChoosingContact {
  int ID;
  int refcnt;
};
struct TdChatActionChoosingContact *TdCreateObjectChatActionChoosingContact (void);
char *TdSerializeChatActionChoosingContact (struct TdChatActionChoosingContact *var);
void TdDestroyObjectChatActionChoosingContact (struct TdChatActionChoosingContact *var);
void TdStackStorerChatActionChoosingContact (struct TdChatActionChoosingContact *var, struct TdStackStorerMethods *M);
struct TdChatActionChoosingContact *TdStackFetcherChatActionChoosingContact (struct TdStackFetcherMethods *M);
struct TdChatActionStartPlayingGame {
  int ID;
  int refcnt;
};
struct TdChatActionStartPlayingGame *TdCreateObjectChatActionStartPlayingGame (void);
char *TdSerializeChatActionStartPlayingGame (struct TdChatActionStartPlayingGame *var);
void TdDestroyObjectChatActionStartPlayingGame (struct TdChatActionStartPlayingGame *var);
void TdStackStorerChatActionStartPlayingGame (struct TdChatActionStartPlayingGame *var, struct TdStackStorerMethods *M);
struct TdChatActionStartPlayingGame *TdStackFetcherChatActionStartPlayingGame (struct TdStackFetcherMethods *M);
struct TdChatActionRecordingVideoNote {
  int ID;
  int refcnt;
};
struct TdChatActionRecordingVideoNote *TdCreateObjectChatActionRecordingVideoNote (void);
char *TdSerializeChatActionRecordingVideoNote (struct TdChatActionRecordingVideoNote *var);
void TdDestroyObjectChatActionRecordingVideoNote (struct TdChatActionRecordingVideoNote *var);
void TdStackStorerChatActionRecordingVideoNote (struct TdChatActionRecordingVideoNote *var, struct TdStackStorerMethods *M);
struct TdChatActionRecordingVideoNote *TdStackFetcherChatActionRecordingVideoNote (struct TdStackFetcherMethods *M);
struct TdChatActionUploadingVideoNote {
  int ID;
  int refcnt;
  int progress_;
};
struct TdChatActionUploadingVideoNote *TdCreateObjectChatActionUploadingVideoNote (int progress_);
char *TdSerializeChatActionUploadingVideoNote (struct TdChatActionUploadingVideoNote *var);
void TdDestroyObjectChatActionUploadingVideoNote (struct TdChatActionUploadingVideoNote *var);
void TdStackStorerChatActionUploadingVideoNote (struct TdChatActionUploadingVideoNote *var, struct TdStackStorerMethods *M);
struct TdChatActionUploadingVideoNote *TdStackFetcherChatActionUploadingVideoNote (struct TdStackFetcherMethods *M);
struct TdChatActionCancel {
  int ID;
  int refcnt;
};
struct TdChatActionCancel *TdCreateObjectChatActionCancel (void);
char *TdSerializeChatActionCancel (struct TdChatActionCancel *var);
void TdDestroyObjectChatActionCancel (struct TdChatActionCancel *var);
void TdStackStorerChatActionCancel (struct TdChatActionCancel *var, struct TdStackStorerMethods *M);
struct TdChatActionCancel *TdStackFetcherChatActionCancel (struct TdStackFetcherMethods *M);
struct TdChatEvent {
  int ID;
  int refcnt;
  long long id_;
  int date_;
  int user_id_;
  struct TdChatEventAction *action_;
};
struct TdChatEvent *TdCreateObjectChatEvent (long long id_, int date_, int user_id_, struct TdChatEventAction *action_);
char *TdSerializeChatEvent (struct TdChatEvent *var);
void TdDestroyObjectChatEvent (struct TdChatEvent *var);
void TdStackStorerChatEvent (struct TdChatEvent *var, struct TdStackStorerMethods *M);
struct TdChatEvent *TdStackFetcherChatEvent (struct TdStackFetcherMethods *M);
struct TdChatEventAction {
  int ID;
  int refcnt;
};
char *TdSerializeChatEventAction (struct TdChatEventAction *var);
void TdDestroyObjectChatEventAction (struct TdChatEventAction *var);
void TdStackStorerChatEventAction (struct TdChatEventAction *var, struct TdStackStorerMethods *M);
struct TdChatEventAction *TdStackFetcherChatEventAction (struct TdStackFetcherMethods *M);
enum List_ChatEventAction {
  CODE_ChatEventMessageEdited = -430967304,
  CODE_ChatEventMessageDeleted = -892974601,
  CODE_ChatEventMessagePinned = 438742298,
  CODE_ChatEventMessageUnpinned = 2002594849,
  CODE_ChatEventMemberJoined = -235468508,
  CODE_ChatEventMemberLeft = -948420593,
  CODE_ChatEventMemberInvited = -2093688706,
  CODE_ChatEventMemberPromoted = 1887176186,
  CODE_ChatEventMemberRestricted = 584946294,
  CODE_ChatEventTitleChanged = 1134103250,
  CODE_ChatEventDescriptionChanged = 39112478,
  CODE_ChatEventUsernameChanged = 1728558443,
  CODE_ChatEventPhotoChanged = -811572541,
  CODE_ChatEventInvitesToggled = 568706937,
  CODE_ChatEventSignMessagesToggled = -1313265634,
  CODE_ChatEventStickerSetChanged = -1243130481,
  CODE_ChatEventIsAllHistoryAvailableToggled = -1599063019,
};
struct TdChatEventMessageEdited {
  int ID;
  int refcnt;
  struct TdMessage *old_message_;
  struct TdMessage *new_message_;
};
struct TdChatEventMessageEdited *TdCreateObjectChatEventMessageEdited (struct TdMessage *old_message_, struct TdMessage *new_message_);
char *TdSerializeChatEventMessageEdited (struct TdChatEventMessageEdited *var);
void TdDestroyObjectChatEventMessageEdited (struct TdChatEventMessageEdited *var);
void TdStackStorerChatEventMessageEdited (struct TdChatEventMessageEdited *var, struct TdStackStorerMethods *M);
struct TdChatEventMessageEdited *TdStackFetcherChatEventMessageEdited (struct TdStackFetcherMethods *M);
struct TdChatEventMessageDeleted {
  int ID;
  int refcnt;
  struct TdMessage *message_;
};
struct TdChatEventMessageDeleted *TdCreateObjectChatEventMessageDeleted (struct TdMessage *message_);
char *TdSerializeChatEventMessageDeleted (struct TdChatEventMessageDeleted *var);
void TdDestroyObjectChatEventMessageDeleted (struct TdChatEventMessageDeleted *var);
void TdStackStorerChatEventMessageDeleted (struct TdChatEventMessageDeleted *var, struct TdStackStorerMethods *M);
struct TdChatEventMessageDeleted *TdStackFetcherChatEventMessageDeleted (struct TdStackFetcherMethods *M);
struct TdChatEventMessagePinned {
  int ID;
  int refcnt;
  struct TdMessage *message_;
};
struct TdChatEventMessagePinned *TdCreateObjectChatEventMessagePinned (struct TdMessage *message_);
char *TdSerializeChatEventMessagePinned (struct TdChatEventMessagePinned *var);
void TdDestroyObjectChatEventMessagePinned (struct TdChatEventMessagePinned *var);
void TdStackStorerChatEventMessagePinned (struct TdChatEventMessagePinned *var, struct TdStackStorerMethods *M);
struct TdChatEventMessagePinned *TdStackFetcherChatEventMessagePinned (struct TdStackFetcherMethods *M);
struct TdChatEventMessageUnpinned {
  int ID;
  int refcnt;
};
struct TdChatEventMessageUnpinned *TdCreateObjectChatEventMessageUnpinned (void);
char *TdSerializeChatEventMessageUnpinned (struct TdChatEventMessageUnpinned *var);
void TdDestroyObjectChatEventMessageUnpinned (struct TdChatEventMessageUnpinned *var);
void TdStackStorerChatEventMessageUnpinned (struct TdChatEventMessageUnpinned *var, struct TdStackStorerMethods *M);
struct TdChatEventMessageUnpinned *TdStackFetcherChatEventMessageUnpinned (struct TdStackFetcherMethods *M);
struct TdChatEventMemberJoined {
  int ID;
  int refcnt;
};
struct TdChatEventMemberJoined *TdCreateObjectChatEventMemberJoined (void);
char *TdSerializeChatEventMemberJoined (struct TdChatEventMemberJoined *var);
void TdDestroyObjectChatEventMemberJoined (struct TdChatEventMemberJoined *var);
void TdStackStorerChatEventMemberJoined (struct TdChatEventMemberJoined *var, struct TdStackStorerMethods *M);
struct TdChatEventMemberJoined *TdStackFetcherChatEventMemberJoined (struct TdStackFetcherMethods *M);
struct TdChatEventMemberLeft {
  int ID;
  int refcnt;
};
struct TdChatEventMemberLeft *TdCreateObjectChatEventMemberLeft (void);
char *TdSerializeChatEventMemberLeft (struct TdChatEventMemberLeft *var);
void TdDestroyObjectChatEventMemberLeft (struct TdChatEventMemberLeft *var);
void TdStackStorerChatEventMemberLeft (struct TdChatEventMemberLeft *var, struct TdStackStorerMethods *M);
struct TdChatEventMemberLeft *TdStackFetcherChatEventMemberLeft (struct TdStackFetcherMethods *M);
struct TdChatEventMemberInvited {
  int ID;
  int refcnt;
  int user_id_;
  struct TdChatMemberStatus *status_;
};
struct TdChatEventMemberInvited *TdCreateObjectChatEventMemberInvited (int user_id_, struct TdChatMemberStatus *status_);
char *TdSerializeChatEventMemberInvited (struct TdChatEventMemberInvited *var);
void TdDestroyObjectChatEventMemberInvited (struct TdChatEventMemberInvited *var);
void TdStackStorerChatEventMemberInvited (struct TdChatEventMemberInvited *var, struct TdStackStorerMethods *M);
struct TdChatEventMemberInvited *TdStackFetcherChatEventMemberInvited (struct TdStackFetcherMethods *M);
struct TdChatEventMemberPromoted {
  int ID;
  int refcnt;
  int user_id_;
  struct TdChatMemberStatus *old_status_;
  struct TdChatMemberStatus *new_status_;
};
struct TdChatEventMemberPromoted *TdCreateObjectChatEventMemberPromoted (int user_id_, struct TdChatMemberStatus *old_status_, struct TdChatMemberStatus *new_status_);
char *TdSerializeChatEventMemberPromoted (struct TdChatEventMemberPromoted *var);
void TdDestroyObjectChatEventMemberPromoted (struct TdChatEventMemberPromoted *var);
void TdStackStorerChatEventMemberPromoted (struct TdChatEventMemberPromoted *var, struct TdStackStorerMethods *M);
struct TdChatEventMemberPromoted *TdStackFetcherChatEventMemberPromoted (struct TdStackFetcherMethods *M);
struct TdChatEventMemberRestricted {
  int ID;
  int refcnt;
  int user_id_;
  struct TdChatMemberStatus *old_status_;
  struct TdChatMemberStatus *new_status_;
};
struct TdChatEventMemberRestricted *TdCreateObjectChatEventMemberRestricted (int user_id_, struct TdChatMemberStatus *old_status_, struct TdChatMemberStatus *new_status_);
char *TdSerializeChatEventMemberRestricted (struct TdChatEventMemberRestricted *var);
void TdDestroyObjectChatEventMemberRestricted (struct TdChatEventMemberRestricted *var);
void TdStackStorerChatEventMemberRestricted (struct TdChatEventMemberRestricted *var, struct TdStackStorerMethods *M);
struct TdChatEventMemberRestricted *TdStackFetcherChatEventMemberRestricted (struct TdStackFetcherMethods *M);
struct TdChatEventTitleChanged {
  int ID;
  int refcnt;
  char *old_title_;
  char *new_title_;
};
struct TdChatEventTitleChanged *TdCreateObjectChatEventTitleChanged (char *old_title_, char *new_title_);
char *TdSerializeChatEventTitleChanged (struct TdChatEventTitleChanged *var);
void TdDestroyObjectChatEventTitleChanged (struct TdChatEventTitleChanged *var);
void TdStackStorerChatEventTitleChanged (struct TdChatEventTitleChanged *var, struct TdStackStorerMethods *M);
struct TdChatEventTitleChanged *TdStackFetcherChatEventTitleChanged (struct TdStackFetcherMethods *M);
struct TdChatEventDescriptionChanged {
  int ID;
  int refcnt;
  char *old_description_;
  char *new_description_;
};
struct TdChatEventDescriptionChanged *TdCreateObjectChatEventDescriptionChanged (char *old_description_, char *new_description_);
char *TdSerializeChatEventDescriptionChanged (struct TdChatEventDescriptionChanged *var);
void TdDestroyObjectChatEventDescriptionChanged (struct TdChatEventDescriptionChanged *var);
void TdStackStorerChatEventDescriptionChanged (struct TdChatEventDescriptionChanged *var, struct TdStackStorerMethods *M);
struct TdChatEventDescriptionChanged *TdStackFetcherChatEventDescriptionChanged (struct TdStackFetcherMethods *M);
struct TdChatEventUsernameChanged {
  int ID;
  int refcnt;
  char *old_username_;
  char *new_username_;
};
struct TdChatEventUsernameChanged *TdCreateObjectChatEventUsernameChanged (char *old_username_, char *new_username_);
char *TdSerializeChatEventUsernameChanged (struct TdChatEventUsernameChanged *var);
void TdDestroyObjectChatEventUsernameChanged (struct TdChatEventUsernameChanged *var);
void TdStackStorerChatEventUsernameChanged (struct TdChatEventUsernameChanged *var, struct TdStackStorerMethods *M);
struct TdChatEventUsernameChanged *TdStackFetcherChatEventUsernameChanged (struct TdStackFetcherMethods *M);
struct TdChatEventPhotoChanged {
  int ID;
  int refcnt;
  struct TdChatPhoto *old_photo_;
  struct TdChatPhoto *new_photo_;
};
struct TdChatEventPhotoChanged *TdCreateObjectChatEventPhotoChanged (struct TdChatPhoto *old_photo_, struct TdChatPhoto *new_photo_);
char *TdSerializeChatEventPhotoChanged (struct TdChatEventPhotoChanged *var);
void TdDestroyObjectChatEventPhotoChanged (struct TdChatEventPhotoChanged *var);
void TdStackStorerChatEventPhotoChanged (struct TdChatEventPhotoChanged *var, struct TdStackStorerMethods *M);
struct TdChatEventPhotoChanged *TdStackFetcherChatEventPhotoChanged (struct TdStackFetcherMethods *M);
struct TdChatEventInvitesToggled {
  int ID;
  int refcnt;
  int anyone_can_invite_;
};
struct TdChatEventInvitesToggled *TdCreateObjectChatEventInvitesToggled (int anyone_can_invite_);
char *TdSerializeChatEventInvitesToggled (struct TdChatEventInvitesToggled *var);
void TdDestroyObjectChatEventInvitesToggled (struct TdChatEventInvitesToggled *var);
void TdStackStorerChatEventInvitesToggled (struct TdChatEventInvitesToggled *var, struct TdStackStorerMethods *M);
struct TdChatEventInvitesToggled *TdStackFetcherChatEventInvitesToggled (struct TdStackFetcherMethods *M);
struct TdChatEventSignMessagesToggled {
  int ID;
  int refcnt;
  int sign_messages_;
};
struct TdChatEventSignMessagesToggled *TdCreateObjectChatEventSignMessagesToggled (int sign_messages_);
char *TdSerializeChatEventSignMessagesToggled (struct TdChatEventSignMessagesToggled *var);
void TdDestroyObjectChatEventSignMessagesToggled (struct TdChatEventSignMessagesToggled *var);
void TdStackStorerChatEventSignMessagesToggled (struct TdChatEventSignMessagesToggled *var, struct TdStackStorerMethods *M);
struct TdChatEventSignMessagesToggled *TdStackFetcherChatEventSignMessagesToggled (struct TdStackFetcherMethods *M);
struct TdChatEventStickerSetChanged {
  int ID;
  int refcnt;
  long long old_sticker_set_id_;
  long long new_sticker_set_id_;
};
struct TdChatEventStickerSetChanged *TdCreateObjectChatEventStickerSetChanged (long long old_sticker_set_id_, long long new_sticker_set_id_);
char *TdSerializeChatEventStickerSetChanged (struct TdChatEventStickerSetChanged *var);
void TdDestroyObjectChatEventStickerSetChanged (struct TdChatEventStickerSetChanged *var);
void TdStackStorerChatEventStickerSetChanged (struct TdChatEventStickerSetChanged *var, struct TdStackStorerMethods *M);
struct TdChatEventStickerSetChanged *TdStackFetcherChatEventStickerSetChanged (struct TdStackFetcherMethods *M);
struct TdChatEventIsAllHistoryAvailableToggled {
  int ID;
  int refcnt;
  int is_all_history_available_;
};
struct TdChatEventIsAllHistoryAvailableToggled *TdCreateObjectChatEventIsAllHistoryAvailableToggled (int is_all_history_available_);
char *TdSerializeChatEventIsAllHistoryAvailableToggled (struct TdChatEventIsAllHistoryAvailableToggled *var);
void TdDestroyObjectChatEventIsAllHistoryAvailableToggled (struct TdChatEventIsAllHistoryAvailableToggled *var);
void TdStackStorerChatEventIsAllHistoryAvailableToggled (struct TdChatEventIsAllHistoryAvailableToggled *var, struct TdStackStorerMethods *M);
struct TdChatEventIsAllHistoryAvailableToggled *TdStackFetcherChatEventIsAllHistoryAvailableToggled (struct TdStackFetcherMethods *M);
struct TdChatEventLogFilters {
  int ID;
  int refcnt;
  int message_edits_;
  int message_deletions_;
  int message_pins_;
  int member_joins_;
  int member_leaves_;
  int member_invites_;
  int member_promotions_;
  int member_restrictions_;
  int info_changes_;
  int setting_changes_;
};
struct TdChatEventLogFilters *TdCreateObjectChatEventLogFilters (int message_edits_, int message_deletions_, int message_pins_, int member_joins_, int member_leaves_, int member_invites_, int member_promotions_, int member_restrictions_, int info_changes_, int setting_changes_);
char *TdSerializeChatEventLogFilters (struct TdChatEventLogFilters *var);
void TdDestroyObjectChatEventLogFilters (struct TdChatEventLogFilters *var);
void TdStackStorerChatEventLogFilters (struct TdChatEventLogFilters *var, struct TdStackStorerMethods *M);
struct TdChatEventLogFilters *TdStackFetcherChatEventLogFilters (struct TdStackFetcherMethods *M);
struct TdChatEvents {
  int ID;
  int refcnt;
  struct TdVectorChatEvent *events_;
};
struct TdChatEvents *TdCreateObjectChatEvents (struct TdVectorChatEvent *events_);
char *TdSerializeChatEvents (struct TdChatEvents *var);
void TdDestroyObjectChatEvents (struct TdChatEvents *var);
void TdStackStorerChatEvents (struct TdChatEvents *var, struct TdStackStorerMethods *M);
struct TdChatEvents *TdStackFetcherChatEvents (struct TdStackFetcherMethods *M);
struct TdChatInviteLink {
  int ID;
  int refcnt;
  char *invite_link_;
};
struct TdChatInviteLink *TdCreateObjectChatInviteLink (char *invite_link_);
char *TdSerializeChatInviteLink (struct TdChatInviteLink *var);
void TdDestroyObjectChatInviteLink (struct TdChatInviteLink *var);
void TdStackStorerChatInviteLink (struct TdChatInviteLink *var, struct TdStackStorerMethods *M);
struct TdChatInviteLink *TdStackFetcherChatInviteLink (struct TdStackFetcherMethods *M);
struct TdChatInviteLinkInfo {
  int ID;
  int refcnt;
  long long chat_id_;
  struct TdChatType *type_;
  char *title_;
  struct TdChatPhoto *photo_;
  int member_count_;
  struct TdVectorInt *member_user_ids_;
  int is_public_;
};
struct TdChatInviteLinkInfo *TdCreateObjectChatInviteLinkInfo (long long chat_id_, struct TdChatType *type_, char *title_, struct TdChatPhoto *photo_, int member_count_, struct TdVectorInt *member_user_ids_, int is_public_);
char *TdSerializeChatInviteLinkInfo (struct TdChatInviteLinkInfo *var);
void TdDestroyObjectChatInviteLinkInfo (struct TdChatInviteLinkInfo *var);
void TdStackStorerChatInviteLinkInfo (struct TdChatInviteLinkInfo *var, struct TdStackStorerMethods *M);
struct TdChatInviteLinkInfo *TdStackFetcherChatInviteLinkInfo (struct TdStackFetcherMethods *M);
struct TdChatMember {
  int ID;
  int refcnt;
  int user_id_;
  int inviter_user_id_;
  int joined_chat_date_;
  struct TdChatMemberStatus *status_;
  struct TdBotInfo *bot_info_;
};
struct TdChatMember *TdCreateObjectChatMember (int user_id_, int inviter_user_id_, int joined_chat_date_, struct TdChatMemberStatus *status_, struct TdBotInfo *bot_info_);
char *TdSerializeChatMember (struct TdChatMember *var);
void TdDestroyObjectChatMember (struct TdChatMember *var);
void TdStackStorerChatMember (struct TdChatMember *var, struct TdStackStorerMethods *M);
struct TdChatMember *TdStackFetcherChatMember (struct TdStackFetcherMethods *M);
struct TdChatMemberStatus {
  int ID;
  int refcnt;
};
char *TdSerializeChatMemberStatus (struct TdChatMemberStatus *var);
void TdDestroyObjectChatMemberStatus (struct TdChatMemberStatus *var);
void TdStackStorerChatMemberStatus (struct TdChatMemberStatus *var, struct TdStackStorerMethods *M);
struct TdChatMemberStatus *TdStackFetcherChatMemberStatus (struct TdStackFetcherMethods *M);
enum List_ChatMemberStatus {
  CODE_ChatMemberStatusCreator = 1756320508,
  CODE_ChatMemberStatusAdministrator = 45106688,
  CODE_ChatMemberStatusMember = 844723285,
  CODE_ChatMemberStatusRestricted = 2068116214,
  CODE_ChatMemberStatusLeft = -5815259,
  CODE_ChatMemberStatusBanned = -1653518666,
};
struct TdChatMemberStatusCreator {
  int ID;
  int refcnt;
  int is_member_;
};
struct TdChatMemberStatusCreator *TdCreateObjectChatMemberStatusCreator (int is_member_);
char *TdSerializeChatMemberStatusCreator (struct TdChatMemberStatusCreator *var);
void TdDestroyObjectChatMemberStatusCreator (struct TdChatMemberStatusCreator *var);
void TdStackStorerChatMemberStatusCreator (struct TdChatMemberStatusCreator *var, struct TdStackStorerMethods *M);
struct TdChatMemberStatusCreator *TdStackFetcherChatMemberStatusCreator (struct TdStackFetcherMethods *M);
struct TdChatMemberStatusAdministrator {
  int ID;
  int refcnt;
  int can_be_edited_;
  int can_change_info_;
  int can_post_messages_;
  int can_edit_messages_;
  int can_delete_messages_;
  int can_invite_users_;
  int can_restrict_members_;
  int can_pin_messages_;
  int can_promote_members_;
};
struct TdChatMemberStatusAdministrator *TdCreateObjectChatMemberStatusAdministrator (int can_be_edited_, int can_change_info_, int can_post_messages_, int can_edit_messages_, int can_delete_messages_, int can_invite_users_, int can_restrict_members_, int can_pin_messages_, int can_promote_members_);
char *TdSerializeChatMemberStatusAdministrator (struct TdChatMemberStatusAdministrator *var);
void TdDestroyObjectChatMemberStatusAdministrator (struct TdChatMemberStatusAdministrator *var);
void TdStackStorerChatMemberStatusAdministrator (struct TdChatMemberStatusAdministrator *var, struct TdStackStorerMethods *M);
struct TdChatMemberStatusAdministrator *TdStackFetcherChatMemberStatusAdministrator (struct TdStackFetcherMethods *M);
struct TdChatMemberStatusMember {
  int ID;
  int refcnt;
};
struct TdChatMemberStatusMember *TdCreateObjectChatMemberStatusMember (void);
char *TdSerializeChatMemberStatusMember (struct TdChatMemberStatusMember *var);
void TdDestroyObjectChatMemberStatusMember (struct TdChatMemberStatusMember *var);
void TdStackStorerChatMemberStatusMember (struct TdChatMemberStatusMember *var, struct TdStackStorerMethods *M);
struct TdChatMemberStatusMember *TdStackFetcherChatMemberStatusMember (struct TdStackFetcherMethods *M);
struct TdChatMemberStatusRestricted {
  int ID;
  int refcnt;
  int is_member_;
  int restricted_until_date_;
  int can_send_messages_;
  int can_send_media_messages_;
  int can_send_other_messages_;
  int can_add_web_page_previews_;
};
struct TdChatMemberStatusRestricted *TdCreateObjectChatMemberStatusRestricted (int is_member_, int restricted_until_date_, int can_send_messages_, int can_send_media_messages_, int can_send_other_messages_, int can_add_web_page_previews_);
char *TdSerializeChatMemberStatusRestricted (struct TdChatMemberStatusRestricted *var);
void TdDestroyObjectChatMemberStatusRestricted (struct TdChatMemberStatusRestricted *var);
void TdStackStorerChatMemberStatusRestricted (struct TdChatMemberStatusRestricted *var, struct TdStackStorerMethods *M);
struct TdChatMemberStatusRestricted *TdStackFetcherChatMemberStatusRestricted (struct TdStackFetcherMethods *M);
struct TdChatMemberStatusLeft {
  int ID;
  int refcnt;
};
struct TdChatMemberStatusLeft *TdCreateObjectChatMemberStatusLeft (void);
char *TdSerializeChatMemberStatusLeft (struct TdChatMemberStatusLeft *var);
void TdDestroyObjectChatMemberStatusLeft (struct TdChatMemberStatusLeft *var);
void TdStackStorerChatMemberStatusLeft (struct TdChatMemberStatusLeft *var, struct TdStackStorerMethods *M);
struct TdChatMemberStatusLeft *TdStackFetcherChatMemberStatusLeft (struct TdStackFetcherMethods *M);
struct TdChatMemberStatusBanned {
  int ID;
  int refcnt;
  int banned_until_date_;
};
struct TdChatMemberStatusBanned *TdCreateObjectChatMemberStatusBanned (int banned_until_date_);
char *TdSerializeChatMemberStatusBanned (struct TdChatMemberStatusBanned *var);
void TdDestroyObjectChatMemberStatusBanned (struct TdChatMemberStatusBanned *var);
void TdStackStorerChatMemberStatusBanned (struct TdChatMemberStatusBanned *var, struct TdStackStorerMethods *M);
struct TdChatMemberStatusBanned *TdStackFetcherChatMemberStatusBanned (struct TdStackFetcherMethods *M);
struct TdChatMembers {
  int ID;
  int refcnt;
  int total_count_;
  struct TdVectorChatMember *members_;
};
struct TdChatMembers *TdCreateObjectChatMembers (int total_count_, struct TdVectorChatMember *members_);
char *TdSerializeChatMembers (struct TdChatMembers *var);
void TdDestroyObjectChatMembers (struct TdChatMembers *var);
void TdStackStorerChatMembers (struct TdChatMembers *var, struct TdStackStorerMethods *M);
struct TdChatMembers *TdStackFetcherChatMembers (struct TdStackFetcherMethods *M);
struct TdChatMembersFilter {
  int ID;
  int refcnt;
};
char *TdSerializeChatMembersFilter (struct TdChatMembersFilter *var);
void TdDestroyObjectChatMembersFilter (struct TdChatMembersFilter *var);
void TdStackStorerChatMembersFilter (struct TdChatMembersFilter *var, struct TdStackStorerMethods *M);
struct TdChatMembersFilter *TdStackFetcherChatMembersFilter (struct TdStackFetcherMethods *M);
enum List_ChatMembersFilter {
  CODE_ChatMembersFilterAdministrators = -1266893796,
  CODE_ChatMembersFilterMembers = 670504342,
  CODE_ChatMembersFilterRestricted = 1256282813,
  CODE_ChatMembersFilterBanned = -1863102648,
  CODE_ChatMembersFilterBots = -1422567288,
};
struct TdChatMembersFilterAdministrators {
  int ID;
  int refcnt;
};
struct TdChatMembersFilterAdministrators *TdCreateObjectChatMembersFilterAdministrators (void);
char *TdSerializeChatMembersFilterAdministrators (struct TdChatMembersFilterAdministrators *var);
void TdDestroyObjectChatMembersFilterAdministrators (struct TdChatMembersFilterAdministrators *var);
void TdStackStorerChatMembersFilterAdministrators (struct TdChatMembersFilterAdministrators *var, struct TdStackStorerMethods *M);
struct TdChatMembersFilterAdministrators *TdStackFetcherChatMembersFilterAdministrators (struct TdStackFetcherMethods *M);
struct TdChatMembersFilterMembers {
  int ID;
  int refcnt;
};
struct TdChatMembersFilterMembers *TdCreateObjectChatMembersFilterMembers (void);
char *TdSerializeChatMembersFilterMembers (struct TdChatMembersFilterMembers *var);
void TdDestroyObjectChatMembersFilterMembers (struct TdChatMembersFilterMembers *var);
void TdStackStorerChatMembersFilterMembers (struct TdChatMembersFilterMembers *var, struct TdStackStorerMethods *M);
struct TdChatMembersFilterMembers *TdStackFetcherChatMembersFilterMembers (struct TdStackFetcherMethods *M);
struct TdChatMembersFilterRestricted {
  int ID;
  int refcnt;
};
struct TdChatMembersFilterRestricted *TdCreateObjectChatMembersFilterRestricted (void);
char *TdSerializeChatMembersFilterRestricted (struct TdChatMembersFilterRestricted *var);
void TdDestroyObjectChatMembersFilterRestricted (struct TdChatMembersFilterRestricted *var);
void TdStackStorerChatMembersFilterRestricted (struct TdChatMembersFilterRestricted *var, struct TdStackStorerMethods *M);
struct TdChatMembersFilterRestricted *TdStackFetcherChatMembersFilterRestricted (struct TdStackFetcherMethods *M);
struct TdChatMembersFilterBanned {
  int ID;
  int refcnt;
};
struct TdChatMembersFilterBanned *TdCreateObjectChatMembersFilterBanned (void);
char *TdSerializeChatMembersFilterBanned (struct TdChatMembersFilterBanned *var);
void TdDestroyObjectChatMembersFilterBanned (struct TdChatMembersFilterBanned *var);
void TdStackStorerChatMembersFilterBanned (struct TdChatMembersFilterBanned *var, struct TdStackStorerMethods *M);
struct TdChatMembersFilterBanned *TdStackFetcherChatMembersFilterBanned (struct TdStackFetcherMethods *M);
struct TdChatMembersFilterBots {
  int ID;
  int refcnt;
};
struct TdChatMembersFilterBots *TdCreateObjectChatMembersFilterBots (void);
char *TdSerializeChatMembersFilterBots (struct TdChatMembersFilterBots *var);
void TdDestroyObjectChatMembersFilterBots (struct TdChatMembersFilterBots *var);
void TdStackStorerChatMembersFilterBots (struct TdChatMembersFilterBots *var, struct TdStackStorerMethods *M);
struct TdChatMembersFilterBots *TdStackFetcherChatMembersFilterBots (struct TdStackFetcherMethods *M);
struct TdChatNotificationSettings {
  int ID;
  int refcnt;
  int use_default_mute_for_;
  int mute_for_;
  int use_default_sound_;
  char *sound_;
  int use_default_show_preview_;
  int show_preview_;
};
struct TdChatNotificationSettings *TdCreateObjectChatNotificationSettings (int use_default_mute_for_, int mute_for_, int use_default_sound_, char *sound_, int use_default_show_preview_, int show_preview_);
char *TdSerializeChatNotificationSettings (struct TdChatNotificationSettings *var);
void TdDestroyObjectChatNotificationSettings (struct TdChatNotificationSettings *var);
void TdStackStorerChatNotificationSettings (struct TdChatNotificationSettings *var, struct TdStackStorerMethods *M);
struct TdChatNotificationSettings *TdStackFetcherChatNotificationSettings (struct TdStackFetcherMethods *M);
struct TdChatPhoto {
  int ID;
  int refcnt;
  struct TdFile *small_;
  struct TdFile *big_;
};
struct TdChatPhoto *TdCreateObjectChatPhoto (struct TdFile *small_, struct TdFile *big_);
char *TdSerializeChatPhoto (struct TdChatPhoto *var);
void TdDestroyObjectChatPhoto (struct TdChatPhoto *var);
void TdStackStorerChatPhoto (struct TdChatPhoto *var, struct TdStackStorerMethods *M);
struct TdChatPhoto *TdStackFetcherChatPhoto (struct TdStackFetcherMethods *M);
struct TdChatReportReason {
  int ID;
  int refcnt;
};
char *TdSerializeChatReportReason (struct TdChatReportReason *var);
void TdDestroyObjectChatReportReason (struct TdChatReportReason *var);
void TdStackStorerChatReportReason (struct TdChatReportReason *var, struct TdStackStorerMethods *M);
struct TdChatReportReason *TdStackFetcherChatReportReason (struct TdStackFetcherMethods *M);
enum List_ChatReportReason {
  CODE_ChatReportReasonSpam = -510848863,
  CODE_ChatReportReasonViolence = -1330235395,
  CODE_ChatReportReasonPornography = 722614385,
  CODE_ChatReportReasonCopyright = 986898080,
  CODE_ChatReportReasonCustom = 544575454,
};
struct TdChatReportReasonSpam {
  int ID;
  int refcnt;
};
struct TdChatReportReasonSpam *TdCreateObjectChatReportReasonSpam (void);
char *TdSerializeChatReportReasonSpam (struct TdChatReportReasonSpam *var);
void TdDestroyObjectChatReportReasonSpam (struct TdChatReportReasonSpam *var);
void TdStackStorerChatReportReasonSpam (struct TdChatReportReasonSpam *var, struct TdStackStorerMethods *M);
struct TdChatReportReasonSpam *TdStackFetcherChatReportReasonSpam (struct TdStackFetcherMethods *M);
struct TdChatReportReasonViolence {
  int ID;
  int refcnt;
};
struct TdChatReportReasonViolence *TdCreateObjectChatReportReasonViolence (void);
char *TdSerializeChatReportReasonViolence (struct TdChatReportReasonViolence *var);
void TdDestroyObjectChatReportReasonViolence (struct TdChatReportReasonViolence *var);
void TdStackStorerChatReportReasonViolence (struct TdChatReportReasonViolence *var, struct TdStackStorerMethods *M);
struct TdChatReportReasonViolence *TdStackFetcherChatReportReasonViolence (struct TdStackFetcherMethods *M);
struct TdChatReportReasonPornography {
  int ID;
  int refcnt;
};
struct TdChatReportReasonPornography *TdCreateObjectChatReportReasonPornography (void);
char *TdSerializeChatReportReasonPornography (struct TdChatReportReasonPornography *var);
void TdDestroyObjectChatReportReasonPornography (struct TdChatReportReasonPornography *var);
void TdStackStorerChatReportReasonPornography (struct TdChatReportReasonPornography *var, struct TdStackStorerMethods *M);
struct TdChatReportReasonPornography *TdStackFetcherChatReportReasonPornography (struct TdStackFetcherMethods *M);
struct TdChatReportReasonCopyright {
  int ID;
  int refcnt;
};
struct TdChatReportReasonCopyright *TdCreateObjectChatReportReasonCopyright (void);
char *TdSerializeChatReportReasonCopyright (struct TdChatReportReasonCopyright *var);
void TdDestroyObjectChatReportReasonCopyright (struct TdChatReportReasonCopyright *var);
void TdStackStorerChatReportReasonCopyright (struct TdChatReportReasonCopyright *var, struct TdStackStorerMethods *M);
struct TdChatReportReasonCopyright *TdStackFetcherChatReportReasonCopyright (struct TdStackFetcherMethods *M);
struct TdChatReportReasonCustom {
  int ID;
  int refcnt;
  char *text_;
};
struct TdChatReportReasonCustom *TdCreateObjectChatReportReasonCustom (char *text_);
char *TdSerializeChatReportReasonCustom (struct TdChatReportReasonCustom *var);
void TdDestroyObjectChatReportReasonCustom (struct TdChatReportReasonCustom *var);
void TdStackStorerChatReportReasonCustom (struct TdChatReportReasonCustom *var, struct TdStackStorerMethods *M);
struct TdChatReportReasonCustom *TdStackFetcherChatReportReasonCustom (struct TdStackFetcherMethods *M);
struct TdChatReportSpamState {
  int ID;
  int refcnt;
  int can_report_spam_;
};
struct TdChatReportSpamState *TdCreateObjectChatReportSpamState (int can_report_spam_);
char *TdSerializeChatReportSpamState (struct TdChatReportSpamState *var);
void TdDestroyObjectChatReportSpamState (struct TdChatReportSpamState *var);
void TdStackStorerChatReportSpamState (struct TdChatReportSpamState *var, struct TdStackStorerMethods *M);
struct TdChatReportSpamState *TdStackFetcherChatReportSpamState (struct TdStackFetcherMethods *M);
struct TdChatType {
  int ID;
  int refcnt;
};
char *TdSerializeChatType (struct TdChatType *var);
void TdDestroyObjectChatType (struct TdChatType *var);
void TdStackStorerChatType (struct TdChatType *var, struct TdStackStorerMethods *M);
struct TdChatType *TdStackFetcherChatType (struct TdStackFetcherMethods *M);
enum List_ChatType {
  CODE_ChatTypePrivate = 1700720838,
  CODE_ChatTypeBasicGroup = 21815278,
  CODE_ChatTypeSupergroup = 955152366,
  CODE_ChatTypeSecret = 136722563,
};
struct TdChatTypePrivate {
  int ID;
  int refcnt;
  int user_id_;
};
struct TdChatTypePrivate *TdCreateObjectChatTypePrivate (int user_id_);
char *TdSerializeChatTypePrivate (struct TdChatTypePrivate *var);
void TdDestroyObjectChatTypePrivate (struct TdChatTypePrivate *var);
void TdStackStorerChatTypePrivate (struct TdChatTypePrivate *var, struct TdStackStorerMethods *M);
struct TdChatTypePrivate *TdStackFetcherChatTypePrivate (struct TdStackFetcherMethods *M);
struct TdChatTypeBasicGroup {
  int ID;
  int refcnt;
  int basic_group_id_;
};
struct TdChatTypeBasicGroup *TdCreateObjectChatTypeBasicGroup (int basic_group_id_);
char *TdSerializeChatTypeBasicGroup (struct TdChatTypeBasicGroup *var);
void TdDestroyObjectChatTypeBasicGroup (struct TdChatTypeBasicGroup *var);
void TdStackStorerChatTypeBasicGroup (struct TdChatTypeBasicGroup *var, struct TdStackStorerMethods *M);
struct TdChatTypeBasicGroup *TdStackFetcherChatTypeBasicGroup (struct TdStackFetcherMethods *M);
struct TdChatTypeSupergroup {
  int ID;
  int refcnt;
  int supergroup_id_;
  int is_channel_;
};
struct TdChatTypeSupergroup *TdCreateObjectChatTypeSupergroup (int supergroup_id_, int is_channel_);
char *TdSerializeChatTypeSupergroup (struct TdChatTypeSupergroup *var);
void TdDestroyObjectChatTypeSupergroup (struct TdChatTypeSupergroup *var);
void TdStackStorerChatTypeSupergroup (struct TdChatTypeSupergroup *var, struct TdStackStorerMethods *M);
struct TdChatTypeSupergroup *TdStackFetcherChatTypeSupergroup (struct TdStackFetcherMethods *M);
struct TdChatTypeSecret {
  int ID;
  int refcnt;
  int secret_chat_id_;
  int user_id_;
};
struct TdChatTypeSecret *TdCreateObjectChatTypeSecret (int secret_chat_id_, int user_id_);
char *TdSerializeChatTypeSecret (struct TdChatTypeSecret *var);
void TdDestroyObjectChatTypeSecret (struct TdChatTypeSecret *var);
void TdStackStorerChatTypeSecret (struct TdChatTypeSecret *var, struct TdStackStorerMethods *M);
struct TdChatTypeSecret *TdStackFetcherChatTypeSecret (struct TdStackFetcherMethods *M);
struct TdChats {
  int ID;
  int refcnt;
  struct TdVectorLong *chat_ids_;
};
struct TdChats *TdCreateObjectChats (struct TdVectorLong *chat_ids_);
char *TdSerializeChats (struct TdChats *var);
void TdDestroyObjectChats (struct TdChats *var);
void TdStackStorerChats (struct TdChats *var, struct TdStackStorerMethods *M);
struct TdChats *TdStackFetcherChats (struct TdStackFetcherMethods *M);
struct TdCheckChatUsernameResult {
  int ID;
  int refcnt;
};
char *TdSerializeCheckChatUsernameResult (struct TdCheckChatUsernameResult *var);
void TdDestroyObjectCheckChatUsernameResult (struct TdCheckChatUsernameResult *var);
void TdStackStorerCheckChatUsernameResult (struct TdCheckChatUsernameResult *var, struct TdStackStorerMethods *M);
struct TdCheckChatUsernameResult *TdStackFetcherCheckChatUsernameResult (struct TdStackFetcherMethods *M);
enum List_CheckChatUsernameResult {
  CODE_CheckChatUsernameResultOk = -1498956964,
  CODE_CheckChatUsernameResultUsernameInvalid = -636979370,
  CODE_CheckChatUsernameResultUsernameOccupied = 1320892201,
  CODE_CheckChatUsernameResultPublicChatsTooMuch = 858247741,
  CODE_CheckChatUsernameResultPublicGroupsUnavailable = -51833641,
};
struct TdCheckChatUsernameResultOk {
  int ID;
  int refcnt;
};
struct TdCheckChatUsernameResultOk *TdCreateObjectCheckChatUsernameResultOk (void);
char *TdSerializeCheckChatUsernameResultOk (struct TdCheckChatUsernameResultOk *var);
void TdDestroyObjectCheckChatUsernameResultOk (struct TdCheckChatUsernameResultOk *var);
void TdStackStorerCheckChatUsernameResultOk (struct TdCheckChatUsernameResultOk *var, struct TdStackStorerMethods *M);
struct TdCheckChatUsernameResultOk *TdStackFetcherCheckChatUsernameResultOk (struct TdStackFetcherMethods *M);
struct TdCheckChatUsernameResultUsernameInvalid {
  int ID;
  int refcnt;
};
struct TdCheckChatUsernameResultUsernameInvalid *TdCreateObjectCheckChatUsernameResultUsernameInvalid (void);
char *TdSerializeCheckChatUsernameResultUsernameInvalid (struct TdCheckChatUsernameResultUsernameInvalid *var);
void TdDestroyObjectCheckChatUsernameResultUsernameInvalid (struct TdCheckChatUsernameResultUsernameInvalid *var);
void TdStackStorerCheckChatUsernameResultUsernameInvalid (struct TdCheckChatUsernameResultUsernameInvalid *var, struct TdStackStorerMethods *M);
struct TdCheckChatUsernameResultUsernameInvalid *TdStackFetcherCheckChatUsernameResultUsernameInvalid (struct TdStackFetcherMethods *M);
struct TdCheckChatUsernameResultUsernameOccupied {
  int ID;
  int refcnt;
};
struct TdCheckChatUsernameResultUsernameOccupied *TdCreateObjectCheckChatUsernameResultUsernameOccupied (void);
char *TdSerializeCheckChatUsernameResultUsernameOccupied (struct TdCheckChatUsernameResultUsernameOccupied *var);
void TdDestroyObjectCheckChatUsernameResultUsernameOccupied (struct TdCheckChatUsernameResultUsernameOccupied *var);
void TdStackStorerCheckChatUsernameResultUsernameOccupied (struct TdCheckChatUsernameResultUsernameOccupied *var, struct TdStackStorerMethods *M);
struct TdCheckChatUsernameResultUsernameOccupied *TdStackFetcherCheckChatUsernameResultUsernameOccupied (struct TdStackFetcherMethods *M);
struct TdCheckChatUsernameResultPublicChatsTooMuch {
  int ID;
  int refcnt;
};
struct TdCheckChatUsernameResultPublicChatsTooMuch *TdCreateObjectCheckChatUsernameResultPublicChatsTooMuch (void);
char *TdSerializeCheckChatUsernameResultPublicChatsTooMuch (struct TdCheckChatUsernameResultPublicChatsTooMuch *var);
void TdDestroyObjectCheckChatUsernameResultPublicChatsTooMuch (struct TdCheckChatUsernameResultPublicChatsTooMuch *var);
void TdStackStorerCheckChatUsernameResultPublicChatsTooMuch (struct TdCheckChatUsernameResultPublicChatsTooMuch *var, struct TdStackStorerMethods *M);
struct TdCheckChatUsernameResultPublicChatsTooMuch *TdStackFetcherCheckChatUsernameResultPublicChatsTooMuch (struct TdStackFetcherMethods *M);
struct TdCheckChatUsernameResultPublicGroupsUnavailable {
  int ID;
  int refcnt;
};
struct TdCheckChatUsernameResultPublicGroupsUnavailable *TdCreateObjectCheckChatUsernameResultPublicGroupsUnavailable (void);
char *TdSerializeCheckChatUsernameResultPublicGroupsUnavailable (struct TdCheckChatUsernameResultPublicGroupsUnavailable *var);
void TdDestroyObjectCheckChatUsernameResultPublicGroupsUnavailable (struct TdCheckChatUsernameResultPublicGroupsUnavailable *var);
void TdStackStorerCheckChatUsernameResultPublicGroupsUnavailable (struct TdCheckChatUsernameResultPublicGroupsUnavailable *var, struct TdStackStorerMethods *M);
struct TdCheckChatUsernameResultPublicGroupsUnavailable *TdStackFetcherCheckChatUsernameResultPublicGroupsUnavailable (struct TdStackFetcherMethods *M);
struct TdConnectedWebsite {
  int ID;
  int refcnt;
  long long id_;
  char *domain_name_;
  int bot_user_id_;
  char *browser_;
  char *platform_;
  int log_in_date_;
  int last_active_date_;
  char *ip_;
  char *location_;
};
struct TdConnectedWebsite *TdCreateObjectConnectedWebsite (long long id_, char *domain_name_, int bot_user_id_, char *browser_, char *platform_, int log_in_date_, int last_active_date_, char *ip_, char *location_);
char *TdSerializeConnectedWebsite (struct TdConnectedWebsite *var);
void TdDestroyObjectConnectedWebsite (struct TdConnectedWebsite *var);
void TdStackStorerConnectedWebsite (struct TdConnectedWebsite *var, struct TdStackStorerMethods *M);
struct TdConnectedWebsite *TdStackFetcherConnectedWebsite (struct TdStackFetcherMethods *M);
struct TdConnectedWebsites {
  int ID;
  int refcnt;
  struct TdVectorConnectedWebsite *websites_;
};
struct TdConnectedWebsites *TdCreateObjectConnectedWebsites (struct TdVectorConnectedWebsite *websites_);
char *TdSerializeConnectedWebsites (struct TdConnectedWebsites *var);
void TdDestroyObjectConnectedWebsites (struct TdConnectedWebsites *var);
void TdStackStorerConnectedWebsites (struct TdConnectedWebsites *var, struct TdStackStorerMethods *M);
struct TdConnectedWebsites *TdStackFetcherConnectedWebsites (struct TdStackFetcherMethods *M);
struct TdConnectionState {
  int ID;
  int refcnt;
};
char *TdSerializeConnectionState (struct TdConnectionState *var);
void TdDestroyObjectConnectionState (struct TdConnectionState *var);
void TdStackStorerConnectionState (struct TdConnectionState *var, struct TdStackStorerMethods *M);
struct TdConnectionState *TdStackFetcherConnectionState (struct TdStackFetcherMethods *M);
enum List_ConnectionState {
  CODE_ConnectionStateWaitingForNetwork = 1695405912,
  CODE_ConnectionStateConnectingToProxy = -93187239,
  CODE_ConnectionStateConnecting = -1298400670,
  CODE_ConnectionStateUpdating = -188104009,
  CODE_ConnectionStateReady = 48608492,
};
struct TdConnectionStateWaitingForNetwork {
  int ID;
  int refcnt;
};
struct TdConnectionStateWaitingForNetwork *TdCreateObjectConnectionStateWaitingForNetwork (void);
char *TdSerializeConnectionStateWaitingForNetwork (struct TdConnectionStateWaitingForNetwork *var);
void TdDestroyObjectConnectionStateWaitingForNetwork (struct TdConnectionStateWaitingForNetwork *var);
void TdStackStorerConnectionStateWaitingForNetwork (struct TdConnectionStateWaitingForNetwork *var, struct TdStackStorerMethods *M);
struct TdConnectionStateWaitingForNetwork *TdStackFetcherConnectionStateWaitingForNetwork (struct TdStackFetcherMethods *M);
struct TdConnectionStateConnectingToProxy {
  int ID;
  int refcnt;
};
struct TdConnectionStateConnectingToProxy *TdCreateObjectConnectionStateConnectingToProxy (void);
char *TdSerializeConnectionStateConnectingToProxy (struct TdConnectionStateConnectingToProxy *var);
void TdDestroyObjectConnectionStateConnectingToProxy (struct TdConnectionStateConnectingToProxy *var);
void TdStackStorerConnectionStateConnectingToProxy (struct TdConnectionStateConnectingToProxy *var, struct TdStackStorerMethods *M);
struct TdConnectionStateConnectingToProxy *TdStackFetcherConnectionStateConnectingToProxy (struct TdStackFetcherMethods *M);
struct TdConnectionStateConnecting {
  int ID;
  int refcnt;
};
struct TdConnectionStateConnecting *TdCreateObjectConnectionStateConnecting (void);
char *TdSerializeConnectionStateConnecting (struct TdConnectionStateConnecting *var);
void TdDestroyObjectConnectionStateConnecting (struct TdConnectionStateConnecting *var);
void TdStackStorerConnectionStateConnecting (struct TdConnectionStateConnecting *var, struct TdStackStorerMethods *M);
struct TdConnectionStateConnecting *TdStackFetcherConnectionStateConnecting (struct TdStackFetcherMethods *M);
struct TdConnectionStateUpdating {
  int ID;
  int refcnt;
};
struct TdConnectionStateUpdating *TdCreateObjectConnectionStateUpdating (void);
char *TdSerializeConnectionStateUpdating (struct TdConnectionStateUpdating *var);
void TdDestroyObjectConnectionStateUpdating (struct TdConnectionStateUpdating *var);
void TdStackStorerConnectionStateUpdating (struct TdConnectionStateUpdating *var, struct TdStackStorerMethods *M);
struct TdConnectionStateUpdating *TdStackFetcherConnectionStateUpdating (struct TdStackFetcherMethods *M);
struct TdConnectionStateReady {
  int ID;
  int refcnt;
};
struct TdConnectionStateReady *TdCreateObjectConnectionStateReady (void);
char *TdSerializeConnectionStateReady (struct TdConnectionStateReady *var);
void TdDestroyObjectConnectionStateReady (struct TdConnectionStateReady *var);
void TdStackStorerConnectionStateReady (struct TdConnectionStateReady *var, struct TdStackStorerMethods *M);
struct TdConnectionStateReady *TdStackFetcherConnectionStateReady (struct TdStackFetcherMethods *M);
struct TdContact {
  int ID;
  int refcnt;
  char *phone_number_;
  char *first_name_;
  char *last_name_;
  char *vcard_;
  int user_id_;
};
struct TdContact *TdCreateObjectContact (char *phone_number_, char *first_name_, char *last_name_, char *vcard_, int user_id_);
char *TdSerializeContact (struct TdContact *var);
void TdDestroyObjectContact (struct TdContact *var);
void TdStackStorerContact (struct TdContact *var, struct TdStackStorerMethods *M);
struct TdContact *TdStackFetcherContact (struct TdStackFetcherMethods *M);
struct TdCount {
  int ID;
  int refcnt;
  int count_;
};
struct TdCount *TdCreateObjectCount (int count_);
char *TdSerializeCount (struct TdCount *var);
void TdDestroyObjectCount (struct TdCount *var);
void TdStackStorerCount (struct TdCount *var, struct TdStackStorerMethods *M);
struct TdCount *TdStackFetcherCount (struct TdStackFetcherMethods *M);
struct TdCustomRequestResult {
  int ID;
  int refcnt;
  char *result_;
};
struct TdCustomRequestResult *TdCreateObjectCustomRequestResult (char *result_);
char *TdSerializeCustomRequestResult (struct TdCustomRequestResult *var);
void TdDestroyObjectCustomRequestResult (struct TdCustomRequestResult *var);
void TdStackStorerCustomRequestResult (struct TdCustomRequestResult *var, struct TdStackStorerMethods *M);
struct TdCustomRequestResult *TdStackFetcherCustomRequestResult (struct TdStackFetcherMethods *M);
struct TdDate {
  int ID;
  int refcnt;
  int day_;
  int month_;
  int year_;
};
struct TdDate *TdCreateObjectDate (int day_, int month_, int year_);
char *TdSerializeDate (struct TdDate *var);
void TdDestroyObjectDate (struct TdDate *var);
void TdStackStorerDate (struct TdDate *var, struct TdStackStorerMethods *M);
struct TdDate *TdStackFetcherDate (struct TdStackFetcherMethods *M);
struct TdDatedFile {
  int ID;
  int refcnt;
  struct TdFile *file_;
  int date_;
};
struct TdDatedFile *TdCreateObjectDatedFile (struct TdFile *file_, int date_);
char *TdSerializeDatedFile (struct TdDatedFile *var);
void TdDestroyObjectDatedFile (struct TdDatedFile *var);
void TdStackStorerDatedFile (struct TdDatedFile *var, struct TdStackStorerMethods *M);
struct TdDatedFile *TdStackFetcherDatedFile (struct TdStackFetcherMethods *M);
struct TdDeepLinkInfo {
  int ID;
  int refcnt;
  struct TdFormattedText *text_;
  int need_update_application_;
};
struct TdDeepLinkInfo *TdCreateObjectDeepLinkInfo (struct TdFormattedText *text_, int need_update_application_);
char *TdSerializeDeepLinkInfo (struct TdDeepLinkInfo *var);
void TdDestroyObjectDeepLinkInfo (struct TdDeepLinkInfo *var);
void TdStackStorerDeepLinkInfo (struct TdDeepLinkInfo *var, struct TdStackStorerMethods *M);
struct TdDeepLinkInfo *TdStackFetcherDeepLinkInfo (struct TdStackFetcherMethods *M);
struct TdDeviceToken {
  int ID;
  int refcnt;
};
char *TdSerializeDeviceToken (struct TdDeviceToken *var);
void TdDestroyObjectDeviceToken (struct TdDeviceToken *var);
void TdStackStorerDeviceToken (struct TdDeviceToken *var, struct TdStackStorerMethods *M);
struct TdDeviceToken *TdStackFetcherDeviceToken (struct TdStackFetcherMethods *M);
enum List_DeviceToken {
  CODE_DeviceTokenGoogleCloudMessaging = 1092220225,
  CODE_DeviceTokenApplePush = 387541955,
  CODE_DeviceTokenApplePushVoIP = -327676505,
  CODE_DeviceTokenWindowsPush = -1410514289,
  CODE_DeviceTokenMicrosoftPush = 1224269900,
  CODE_DeviceTokenMicrosoftPushVoIP = -785603759,
  CODE_DeviceTokenWebPush = -1694507273,
  CODE_DeviceTokenSimplePush = 49584736,
  CODE_DeviceTokenUbuntuPush = 1782320422,
  CODE_DeviceTokenBlackBerryPush = 1559167234,
  CODE_DeviceTokenTizenPush = -1359947213,
};
struct TdDeviceTokenGoogleCloudMessaging {
  int ID;
  int refcnt;
  char *token_;
};
struct TdDeviceTokenGoogleCloudMessaging *TdCreateObjectDeviceTokenGoogleCloudMessaging (char *token_);
char *TdSerializeDeviceTokenGoogleCloudMessaging (struct TdDeviceTokenGoogleCloudMessaging *var);
void TdDestroyObjectDeviceTokenGoogleCloudMessaging (struct TdDeviceTokenGoogleCloudMessaging *var);
void TdStackStorerDeviceTokenGoogleCloudMessaging (struct TdDeviceTokenGoogleCloudMessaging *var, struct TdStackStorerMethods *M);
struct TdDeviceTokenGoogleCloudMessaging *TdStackFetcherDeviceTokenGoogleCloudMessaging (struct TdStackFetcherMethods *M);
struct TdDeviceTokenApplePush {
  int ID;
  int refcnt;
  char *device_token_;
  int is_app_sandbox_;
};
struct TdDeviceTokenApplePush *TdCreateObjectDeviceTokenApplePush (char *device_token_, int is_app_sandbox_);
char *TdSerializeDeviceTokenApplePush (struct TdDeviceTokenApplePush *var);
void TdDestroyObjectDeviceTokenApplePush (struct TdDeviceTokenApplePush *var);
void TdStackStorerDeviceTokenApplePush (struct TdDeviceTokenApplePush *var, struct TdStackStorerMethods *M);
struct TdDeviceTokenApplePush *TdStackFetcherDeviceTokenApplePush (struct TdStackFetcherMethods *M);
struct TdDeviceTokenApplePushVoIP {
  int ID;
  int refcnt;
  char *device_token_;
  int is_app_sandbox_;
};
struct TdDeviceTokenApplePushVoIP *TdCreateObjectDeviceTokenApplePushVoIP (char *device_token_, int is_app_sandbox_);
char *TdSerializeDeviceTokenApplePushVoIP (struct TdDeviceTokenApplePushVoIP *var);
void TdDestroyObjectDeviceTokenApplePushVoIP (struct TdDeviceTokenApplePushVoIP *var);
void TdStackStorerDeviceTokenApplePushVoIP (struct TdDeviceTokenApplePushVoIP *var, struct TdStackStorerMethods *M);
struct TdDeviceTokenApplePushVoIP *TdStackFetcherDeviceTokenApplePushVoIP (struct TdStackFetcherMethods *M);
struct TdDeviceTokenWindowsPush {
  int ID;
  int refcnt;
  char *access_token_;
};
struct TdDeviceTokenWindowsPush *TdCreateObjectDeviceTokenWindowsPush (char *access_token_);
char *TdSerializeDeviceTokenWindowsPush (struct TdDeviceTokenWindowsPush *var);
void TdDestroyObjectDeviceTokenWindowsPush (struct TdDeviceTokenWindowsPush *var);
void TdStackStorerDeviceTokenWindowsPush (struct TdDeviceTokenWindowsPush *var, struct TdStackStorerMethods *M);
struct TdDeviceTokenWindowsPush *TdStackFetcherDeviceTokenWindowsPush (struct TdStackFetcherMethods *M);
struct TdDeviceTokenMicrosoftPush {
  int ID;
  int refcnt;
  char *channel_uri_;
};
struct TdDeviceTokenMicrosoftPush *TdCreateObjectDeviceTokenMicrosoftPush (char *channel_uri_);
char *TdSerializeDeviceTokenMicrosoftPush (struct TdDeviceTokenMicrosoftPush *var);
void TdDestroyObjectDeviceTokenMicrosoftPush (struct TdDeviceTokenMicrosoftPush *var);
void TdStackStorerDeviceTokenMicrosoftPush (struct TdDeviceTokenMicrosoftPush *var, struct TdStackStorerMethods *M);
struct TdDeviceTokenMicrosoftPush *TdStackFetcherDeviceTokenMicrosoftPush (struct TdStackFetcherMethods *M);
struct TdDeviceTokenMicrosoftPushVoIP {
  int ID;
  int refcnt;
  char *channel_uri_;
};
struct TdDeviceTokenMicrosoftPushVoIP *TdCreateObjectDeviceTokenMicrosoftPushVoIP (char *channel_uri_);
char *TdSerializeDeviceTokenMicrosoftPushVoIP (struct TdDeviceTokenMicrosoftPushVoIP *var);
void TdDestroyObjectDeviceTokenMicrosoftPushVoIP (struct TdDeviceTokenMicrosoftPushVoIP *var);
void TdStackStorerDeviceTokenMicrosoftPushVoIP (struct TdDeviceTokenMicrosoftPushVoIP *var, struct TdStackStorerMethods *M);
struct TdDeviceTokenMicrosoftPushVoIP *TdStackFetcherDeviceTokenMicrosoftPushVoIP (struct TdStackFetcherMethods *M);
struct TdDeviceTokenWebPush {
  int ID;
  int refcnt;
  char *endpoint_;
  char *p256dh_base64url_;
  char *auth_base64url_;
};
struct TdDeviceTokenWebPush *TdCreateObjectDeviceTokenWebPush (char *endpoint_, char *p256dh_base64url_, char *auth_base64url_);
char *TdSerializeDeviceTokenWebPush (struct TdDeviceTokenWebPush *var);
void TdDestroyObjectDeviceTokenWebPush (struct TdDeviceTokenWebPush *var);
void TdStackStorerDeviceTokenWebPush (struct TdDeviceTokenWebPush *var, struct TdStackStorerMethods *M);
struct TdDeviceTokenWebPush *TdStackFetcherDeviceTokenWebPush (struct TdStackFetcherMethods *M);
struct TdDeviceTokenSimplePush {
  int ID;
  int refcnt;
  char *endpoint_;
};
struct TdDeviceTokenSimplePush *TdCreateObjectDeviceTokenSimplePush (char *endpoint_);
char *TdSerializeDeviceTokenSimplePush (struct TdDeviceTokenSimplePush *var);
void TdDestroyObjectDeviceTokenSimplePush (struct TdDeviceTokenSimplePush *var);
void TdStackStorerDeviceTokenSimplePush (struct TdDeviceTokenSimplePush *var, struct TdStackStorerMethods *M);
struct TdDeviceTokenSimplePush *TdStackFetcherDeviceTokenSimplePush (struct TdStackFetcherMethods *M);
struct TdDeviceTokenUbuntuPush {
  int ID;
  int refcnt;
  char *token_;
};
struct TdDeviceTokenUbuntuPush *TdCreateObjectDeviceTokenUbuntuPush (char *token_);
char *TdSerializeDeviceTokenUbuntuPush (struct TdDeviceTokenUbuntuPush *var);
void TdDestroyObjectDeviceTokenUbuntuPush (struct TdDeviceTokenUbuntuPush *var);
void TdStackStorerDeviceTokenUbuntuPush (struct TdDeviceTokenUbuntuPush *var, struct TdStackStorerMethods *M);
struct TdDeviceTokenUbuntuPush *TdStackFetcherDeviceTokenUbuntuPush (struct TdStackFetcherMethods *M);
struct TdDeviceTokenBlackBerryPush {
  int ID;
  int refcnt;
  char *token_;
};
struct TdDeviceTokenBlackBerryPush *TdCreateObjectDeviceTokenBlackBerryPush (char *token_);
char *TdSerializeDeviceTokenBlackBerryPush (struct TdDeviceTokenBlackBerryPush *var);
void TdDestroyObjectDeviceTokenBlackBerryPush (struct TdDeviceTokenBlackBerryPush *var);
void TdStackStorerDeviceTokenBlackBerryPush (struct TdDeviceTokenBlackBerryPush *var, struct TdStackStorerMethods *M);
struct TdDeviceTokenBlackBerryPush *TdStackFetcherDeviceTokenBlackBerryPush (struct TdStackFetcherMethods *M);
struct TdDeviceTokenTizenPush {
  int ID;
  int refcnt;
  char *reg_id_;
};
struct TdDeviceTokenTizenPush *TdCreateObjectDeviceTokenTizenPush (char *reg_id_);
char *TdSerializeDeviceTokenTizenPush (struct TdDeviceTokenTizenPush *var);
void TdDestroyObjectDeviceTokenTizenPush (struct TdDeviceTokenTizenPush *var);
void TdStackStorerDeviceTokenTizenPush (struct TdDeviceTokenTizenPush *var, struct TdStackStorerMethods *M);
struct TdDeviceTokenTizenPush *TdStackFetcherDeviceTokenTizenPush (struct TdStackFetcherMethods *M);
struct TdDocument {
  int ID;
  int refcnt;
  char *file_name_;
  char *mime_type_;
  struct TdPhotoSize *thumbnail_;
  struct TdFile *document_;
};
struct TdDocument *TdCreateObjectDocument (char *file_name_, char *mime_type_, struct TdPhotoSize *thumbnail_, struct TdFile *document_);
char *TdSerializeDocument (struct TdDocument *var);
void TdDestroyObjectDocument (struct TdDocument *var);
void TdStackStorerDocument (struct TdDocument *var, struct TdStackStorerMethods *M);
struct TdDocument *TdStackFetcherDocument (struct TdStackFetcherMethods *M);
struct TdDraftMessage {
  int ID;
  int refcnt;
  long long reply_to_message_id_;
  struct TdInputMessageContent *input_message_text_;
};
struct TdDraftMessage *TdCreateObjectDraftMessage (long long reply_to_message_id_, struct TdInputMessageContent *input_message_text_);
char *TdSerializeDraftMessage (struct TdDraftMessage *var);
void TdDestroyObjectDraftMessage (struct TdDraftMessage *var);
void TdStackStorerDraftMessage (struct TdDraftMessage *var, struct TdStackStorerMethods *M);
struct TdDraftMessage *TdStackFetcherDraftMessage (struct TdStackFetcherMethods *M);
struct TdEmailAddressAuthenticationCodeInfo {
  int ID;
  int refcnt;
  char *email_address_pattern_;
  int length_;
};
struct TdEmailAddressAuthenticationCodeInfo *TdCreateObjectEmailAddressAuthenticationCodeInfo (char *email_address_pattern_, int length_);
char *TdSerializeEmailAddressAuthenticationCodeInfo (struct TdEmailAddressAuthenticationCodeInfo *var);
void TdDestroyObjectEmailAddressAuthenticationCodeInfo (struct TdEmailAddressAuthenticationCodeInfo *var);
void TdStackStorerEmailAddressAuthenticationCodeInfo (struct TdEmailAddressAuthenticationCodeInfo *var, struct TdStackStorerMethods *M);
struct TdEmailAddressAuthenticationCodeInfo *TdStackFetcherEmailAddressAuthenticationCodeInfo (struct TdStackFetcherMethods *M);
struct TdEncryptedCredentials {
  int ID;
  int refcnt;
  struct TdBytes data_;
  struct TdBytes hash_;
  struct TdBytes secret_;
};
struct TdEncryptedCredentials *TdCreateObjectEncryptedCredentials (struct TdBytes data_, struct TdBytes hash_, struct TdBytes secret_);
char *TdSerializeEncryptedCredentials (struct TdEncryptedCredentials *var);
void TdDestroyObjectEncryptedCredentials (struct TdEncryptedCredentials *var);
void TdStackStorerEncryptedCredentials (struct TdEncryptedCredentials *var, struct TdStackStorerMethods *M);
struct TdEncryptedCredentials *TdStackFetcherEncryptedCredentials (struct TdStackFetcherMethods *M);
struct TdEncryptedPassportElement {
  int ID;
  int refcnt;
  struct TdPassportElementType *type_;
  struct TdBytes data_;
  struct TdDatedFile *front_side_;
  struct TdDatedFile *reverse_side_;
  struct TdDatedFile *selfie_;
  struct TdVectorDatedFile *translation_;
  struct TdVectorDatedFile *files_;
  char *value_;
  char *hash_;
};
struct TdEncryptedPassportElement *TdCreateObjectEncryptedPassportElement (struct TdPassportElementType *type_, struct TdBytes data_, struct TdDatedFile *front_side_, struct TdDatedFile *reverse_side_, struct TdDatedFile *selfie_, struct TdVectorDatedFile *translation_, struct TdVectorDatedFile *files_, char *value_, char *hash_);
char *TdSerializeEncryptedPassportElement (struct TdEncryptedPassportElement *var);
void TdDestroyObjectEncryptedPassportElement (struct TdEncryptedPassportElement *var);
void TdStackStorerEncryptedPassportElement (struct TdEncryptedPassportElement *var, struct TdStackStorerMethods *M);
struct TdEncryptedPassportElement *TdStackFetcherEncryptedPassportElement (struct TdStackFetcherMethods *M);
struct TdError {
  int ID;
  int refcnt;
  int code_;
  char *message_;
};
struct TdError *TdCreateObjectError (int code_, char *message_);
char *TdSerializeError (struct TdError *var);
void TdDestroyObjectError (struct TdError *var);
void TdStackStorerError (struct TdError *var, struct TdStackStorerMethods *M);
struct TdError *TdStackFetcherError (struct TdStackFetcherMethods *M);
struct TdFile {
  int ID;
  int refcnt;
  int id_;
  int size_;
  int expected_size_;
  struct TdLocalFile *local_;
  struct TdRemoteFile *remote_;
};
struct TdFile *TdCreateObjectFile (int id_, int size_, int expected_size_, struct TdLocalFile *local_, struct TdRemoteFile *remote_);
char *TdSerializeFile (struct TdFile *var);
void TdDestroyObjectFile (struct TdFile *var);
void TdStackStorerFile (struct TdFile *var, struct TdStackStorerMethods *M);
struct TdFile *TdStackFetcherFile (struct TdStackFetcherMethods *M);
struct TdFileType {
  int ID;
  int refcnt;
};
char *TdSerializeFileType (struct TdFileType *var);
void TdDestroyObjectFileType (struct TdFileType *var);
void TdStackStorerFileType (struct TdFileType *var, struct TdStackStorerMethods *M);
struct TdFileType *TdStackFetcherFileType (struct TdStackFetcherMethods *M);
enum List_FileType {
  CODE_FileTypeNone = 2003009189,
  CODE_FileTypeAnimation = -290816582,
  CODE_FileTypeAudio = -709112160,
  CODE_FileTypeDocument = -564722929,
  CODE_FileTypePhoto = -1718914651,
  CODE_FileTypeProfilePhoto = 1795089315,
  CODE_FileTypeSecret = -1871899401,
  CODE_FileTypeSecretThumbnail = -1401326026,
  CODE_FileTypeSecure = -1419133146,
  CODE_FileTypeSticker = 475233385,
  CODE_FileTypeThumbnail = -12443298,
  CODE_FileTypeUnknown = -2011566768,
  CODE_FileTypeVideo = 1430816539,
  CODE_FileTypeVideoNote = -518412385,
  CODE_FileTypeVoiceNote = -588681661,
  CODE_FileTypeWallpaper = 1854930076,
};
struct TdFileTypeNone {
  int ID;
  int refcnt;
};
struct TdFileTypeNone *TdCreateObjectFileTypeNone (void);
char *TdSerializeFileTypeNone (struct TdFileTypeNone *var);
void TdDestroyObjectFileTypeNone (struct TdFileTypeNone *var);
void TdStackStorerFileTypeNone (struct TdFileTypeNone *var, struct TdStackStorerMethods *M);
struct TdFileTypeNone *TdStackFetcherFileTypeNone (struct TdStackFetcherMethods *M);
struct TdFileTypeAnimation {
  int ID;
  int refcnt;
};
struct TdFileTypeAnimation *TdCreateObjectFileTypeAnimation (void);
char *TdSerializeFileTypeAnimation (struct TdFileTypeAnimation *var);
void TdDestroyObjectFileTypeAnimation (struct TdFileTypeAnimation *var);
void TdStackStorerFileTypeAnimation (struct TdFileTypeAnimation *var, struct TdStackStorerMethods *M);
struct TdFileTypeAnimation *TdStackFetcherFileTypeAnimation (struct TdStackFetcherMethods *M);
struct TdFileTypeAudio {
  int ID;
  int refcnt;
};
struct TdFileTypeAudio *TdCreateObjectFileTypeAudio (void);
char *TdSerializeFileTypeAudio (struct TdFileTypeAudio *var);
void TdDestroyObjectFileTypeAudio (struct TdFileTypeAudio *var);
void TdStackStorerFileTypeAudio (struct TdFileTypeAudio *var, struct TdStackStorerMethods *M);
struct TdFileTypeAudio *TdStackFetcherFileTypeAudio (struct TdStackFetcherMethods *M);
struct TdFileTypeDocument {
  int ID;
  int refcnt;
};
struct TdFileTypeDocument *TdCreateObjectFileTypeDocument (void);
char *TdSerializeFileTypeDocument (struct TdFileTypeDocument *var);
void TdDestroyObjectFileTypeDocument (struct TdFileTypeDocument *var);
void TdStackStorerFileTypeDocument (struct TdFileTypeDocument *var, struct TdStackStorerMethods *M);
struct TdFileTypeDocument *TdStackFetcherFileTypeDocument (struct TdStackFetcherMethods *M);
struct TdFileTypePhoto {
  int ID;
  int refcnt;
};
struct TdFileTypePhoto *TdCreateObjectFileTypePhoto (void);
char *TdSerializeFileTypePhoto (struct TdFileTypePhoto *var);
void TdDestroyObjectFileTypePhoto (struct TdFileTypePhoto *var);
void TdStackStorerFileTypePhoto (struct TdFileTypePhoto *var, struct TdStackStorerMethods *M);
struct TdFileTypePhoto *TdStackFetcherFileTypePhoto (struct TdStackFetcherMethods *M);
struct TdFileTypeProfilePhoto {
  int ID;
  int refcnt;
};
struct TdFileTypeProfilePhoto *TdCreateObjectFileTypeProfilePhoto (void);
char *TdSerializeFileTypeProfilePhoto (struct TdFileTypeProfilePhoto *var);
void TdDestroyObjectFileTypeProfilePhoto (struct TdFileTypeProfilePhoto *var);
void TdStackStorerFileTypeProfilePhoto (struct TdFileTypeProfilePhoto *var, struct TdStackStorerMethods *M);
struct TdFileTypeProfilePhoto *TdStackFetcherFileTypeProfilePhoto (struct TdStackFetcherMethods *M);
struct TdFileTypeSecret {
  int ID;
  int refcnt;
};
struct TdFileTypeSecret *TdCreateObjectFileTypeSecret (void);
char *TdSerializeFileTypeSecret (struct TdFileTypeSecret *var);
void TdDestroyObjectFileTypeSecret (struct TdFileTypeSecret *var);
void TdStackStorerFileTypeSecret (struct TdFileTypeSecret *var, struct TdStackStorerMethods *M);
struct TdFileTypeSecret *TdStackFetcherFileTypeSecret (struct TdStackFetcherMethods *M);
struct TdFileTypeSecretThumbnail {
  int ID;
  int refcnt;
};
struct TdFileTypeSecretThumbnail *TdCreateObjectFileTypeSecretThumbnail (void);
char *TdSerializeFileTypeSecretThumbnail (struct TdFileTypeSecretThumbnail *var);
void TdDestroyObjectFileTypeSecretThumbnail (struct TdFileTypeSecretThumbnail *var);
void TdStackStorerFileTypeSecretThumbnail (struct TdFileTypeSecretThumbnail *var, struct TdStackStorerMethods *M);
struct TdFileTypeSecretThumbnail *TdStackFetcherFileTypeSecretThumbnail (struct TdStackFetcherMethods *M);
struct TdFileTypeSecure {
  int ID;
  int refcnt;
};
struct TdFileTypeSecure *TdCreateObjectFileTypeSecure (void);
char *TdSerializeFileTypeSecure (struct TdFileTypeSecure *var);
void TdDestroyObjectFileTypeSecure (struct TdFileTypeSecure *var);
void TdStackStorerFileTypeSecure (struct TdFileTypeSecure *var, struct TdStackStorerMethods *M);
struct TdFileTypeSecure *TdStackFetcherFileTypeSecure (struct TdStackFetcherMethods *M);
struct TdFileTypeSticker {
  int ID;
  int refcnt;
};
struct TdFileTypeSticker *TdCreateObjectFileTypeSticker (void);
char *TdSerializeFileTypeSticker (struct TdFileTypeSticker *var);
void TdDestroyObjectFileTypeSticker (struct TdFileTypeSticker *var);
void TdStackStorerFileTypeSticker (struct TdFileTypeSticker *var, struct TdStackStorerMethods *M);
struct TdFileTypeSticker *TdStackFetcherFileTypeSticker (struct TdStackFetcherMethods *M);
struct TdFileTypeThumbnail {
  int ID;
  int refcnt;
};
struct TdFileTypeThumbnail *TdCreateObjectFileTypeThumbnail (void);
char *TdSerializeFileTypeThumbnail (struct TdFileTypeThumbnail *var);
void TdDestroyObjectFileTypeThumbnail (struct TdFileTypeThumbnail *var);
void TdStackStorerFileTypeThumbnail (struct TdFileTypeThumbnail *var, struct TdStackStorerMethods *M);
struct TdFileTypeThumbnail *TdStackFetcherFileTypeThumbnail (struct TdStackFetcherMethods *M);
struct TdFileTypeUnknown {
  int ID;
  int refcnt;
};
struct TdFileTypeUnknown *TdCreateObjectFileTypeUnknown (void);
char *TdSerializeFileTypeUnknown (struct TdFileTypeUnknown *var);
void TdDestroyObjectFileTypeUnknown (struct TdFileTypeUnknown *var);
void TdStackStorerFileTypeUnknown (struct TdFileTypeUnknown *var, struct TdStackStorerMethods *M);
struct TdFileTypeUnknown *TdStackFetcherFileTypeUnknown (struct TdStackFetcherMethods *M);
struct TdFileTypeVideo {
  int ID;
  int refcnt;
};
struct TdFileTypeVideo *TdCreateObjectFileTypeVideo (void);
char *TdSerializeFileTypeVideo (struct TdFileTypeVideo *var);
void TdDestroyObjectFileTypeVideo (struct TdFileTypeVideo *var);
void TdStackStorerFileTypeVideo (struct TdFileTypeVideo *var, struct TdStackStorerMethods *M);
struct TdFileTypeVideo *TdStackFetcherFileTypeVideo (struct TdStackFetcherMethods *M);
struct TdFileTypeVideoNote {
  int ID;
  int refcnt;
};
struct TdFileTypeVideoNote *TdCreateObjectFileTypeVideoNote (void);
char *TdSerializeFileTypeVideoNote (struct TdFileTypeVideoNote *var);
void TdDestroyObjectFileTypeVideoNote (struct TdFileTypeVideoNote *var);
void TdStackStorerFileTypeVideoNote (struct TdFileTypeVideoNote *var, struct TdStackStorerMethods *M);
struct TdFileTypeVideoNote *TdStackFetcherFileTypeVideoNote (struct TdStackFetcherMethods *M);
struct TdFileTypeVoiceNote {
  int ID;
  int refcnt;
};
struct TdFileTypeVoiceNote *TdCreateObjectFileTypeVoiceNote (void);
char *TdSerializeFileTypeVoiceNote (struct TdFileTypeVoiceNote *var);
void TdDestroyObjectFileTypeVoiceNote (struct TdFileTypeVoiceNote *var);
void TdStackStorerFileTypeVoiceNote (struct TdFileTypeVoiceNote *var, struct TdStackStorerMethods *M);
struct TdFileTypeVoiceNote *TdStackFetcherFileTypeVoiceNote (struct TdStackFetcherMethods *M);
struct TdFileTypeWallpaper {
  int ID;
  int refcnt;
};
struct TdFileTypeWallpaper *TdCreateObjectFileTypeWallpaper (void);
char *TdSerializeFileTypeWallpaper (struct TdFileTypeWallpaper *var);
void TdDestroyObjectFileTypeWallpaper (struct TdFileTypeWallpaper *var);
void TdStackStorerFileTypeWallpaper (struct TdFileTypeWallpaper *var, struct TdStackStorerMethods *M);
struct TdFileTypeWallpaper *TdStackFetcherFileTypeWallpaper (struct TdStackFetcherMethods *M);
struct TdFormattedText {
  int ID;
  int refcnt;
  char *text_;
  struct TdVectorTextEntity *entities_;
};
struct TdFormattedText *TdCreateObjectFormattedText (char *text_, struct TdVectorTextEntity *entities_);
char *TdSerializeFormattedText (struct TdFormattedText *var);
void TdDestroyObjectFormattedText (struct TdFormattedText *var);
void TdStackStorerFormattedText (struct TdFormattedText *var, struct TdStackStorerMethods *M);
struct TdFormattedText *TdStackFetcherFormattedText (struct TdStackFetcherMethods *M);
struct TdFoundMessages {
  int ID;
  int refcnt;
  struct TdVectorMessage *messages_;
  long long next_from_search_id_;
};
struct TdFoundMessages *TdCreateObjectFoundMessages (struct TdVectorMessage *messages_, long long next_from_search_id_);
char *TdSerializeFoundMessages (struct TdFoundMessages *var);
void TdDestroyObjectFoundMessages (struct TdFoundMessages *var);
void TdStackStorerFoundMessages (struct TdFoundMessages *var, struct TdStackStorerMethods *M);
struct TdFoundMessages *TdStackFetcherFoundMessages (struct TdStackFetcherMethods *M);
struct TdGame {
  int ID;
  int refcnt;
  long long id_;
  char *short_name_;
  char *title_;
  struct TdFormattedText *text_;
  char *description_;
  struct TdPhoto *photo_;
  struct TdAnimation *animation_;
};
struct TdGame *TdCreateObjectGame (long long id_, char *short_name_, char *title_, struct TdFormattedText *text_, char *description_, struct TdPhoto *photo_, struct TdAnimation *animation_);
char *TdSerializeGame (struct TdGame *var);
void TdDestroyObjectGame (struct TdGame *var);
void TdStackStorerGame (struct TdGame *var, struct TdStackStorerMethods *M);
struct TdGame *TdStackFetcherGame (struct TdStackFetcherMethods *M);
struct TdGameHighScore {
  int ID;
  int refcnt;
  int position_;
  int user_id_;
  int score_;
};
struct TdGameHighScore *TdCreateObjectGameHighScore (int position_, int user_id_, int score_);
char *TdSerializeGameHighScore (struct TdGameHighScore *var);
void TdDestroyObjectGameHighScore (struct TdGameHighScore *var);
void TdStackStorerGameHighScore (struct TdGameHighScore *var, struct TdStackStorerMethods *M);
struct TdGameHighScore *TdStackFetcherGameHighScore (struct TdStackFetcherMethods *M);
struct TdGameHighScores {
  int ID;
  int refcnt;
  struct TdVectorGameHighScore *scores_;
};
struct TdGameHighScores *TdCreateObjectGameHighScores (struct TdVectorGameHighScore *scores_);
char *TdSerializeGameHighScores (struct TdGameHighScores *var);
void TdDestroyObjectGameHighScores (struct TdGameHighScores *var);
void TdStackStorerGameHighScores (struct TdGameHighScores *var, struct TdStackStorerMethods *M);
struct TdGameHighScores *TdStackFetcherGameHighScores (struct TdStackFetcherMethods *M);
struct TdHashtags {
  int ID;
  int refcnt;
  struct TdVectorString *hashtags_;
};
struct TdHashtags *TdCreateObjectHashtags (struct TdVectorString *hashtags_);
char *TdSerializeHashtags (struct TdHashtags *var);
void TdDestroyObjectHashtags (struct TdHashtags *var);
void TdStackStorerHashtags (struct TdHashtags *var, struct TdStackStorerMethods *M);
struct TdHashtags *TdStackFetcherHashtags (struct TdStackFetcherMethods *M);
struct TdIdentityDocument {
  int ID;
  int refcnt;
  char *number_;
  struct TdDate *expiry_date_;
  struct TdDatedFile *front_side_;
  struct TdDatedFile *reverse_side_;
  struct TdDatedFile *selfie_;
  struct TdVectorDatedFile *translation_;
};
struct TdIdentityDocument *TdCreateObjectIdentityDocument (char *number_, struct TdDate *expiry_date_, struct TdDatedFile *front_side_, struct TdDatedFile *reverse_side_, struct TdDatedFile *selfie_, struct TdVectorDatedFile *translation_);
char *TdSerializeIdentityDocument (struct TdIdentityDocument *var);
void TdDestroyObjectIdentityDocument (struct TdIdentityDocument *var);
void TdStackStorerIdentityDocument (struct TdIdentityDocument *var, struct TdStackStorerMethods *M);
struct TdIdentityDocument *TdStackFetcherIdentityDocument (struct TdStackFetcherMethods *M);
struct TdImportedContacts {
  int ID;
  int refcnt;
  struct TdVectorInt *user_ids_;
  struct TdVectorInt *importer_count_;
};
struct TdImportedContacts *TdCreateObjectImportedContacts (struct TdVectorInt *user_ids_, struct TdVectorInt *importer_count_);
char *TdSerializeImportedContacts (struct TdImportedContacts *var);
void TdDestroyObjectImportedContacts (struct TdImportedContacts *var);
void TdStackStorerImportedContacts (struct TdImportedContacts *var, struct TdStackStorerMethods *M);
struct TdImportedContacts *TdStackFetcherImportedContacts (struct TdStackFetcherMethods *M);
struct TdInlineKeyboardButton {
  int ID;
  int refcnt;
  char *text_;
  struct TdInlineKeyboardButtonType *type_;
};
struct TdInlineKeyboardButton *TdCreateObjectInlineKeyboardButton (char *text_, struct TdInlineKeyboardButtonType *type_);
char *TdSerializeInlineKeyboardButton (struct TdInlineKeyboardButton *var);
void TdDestroyObjectInlineKeyboardButton (struct TdInlineKeyboardButton *var);
void TdStackStorerInlineKeyboardButton (struct TdInlineKeyboardButton *var, struct TdStackStorerMethods *M);
struct TdInlineKeyboardButton *TdStackFetcherInlineKeyboardButton (struct TdStackFetcherMethods *M);
struct TdInlineKeyboardButtonType {
  int ID;
  int refcnt;
};
char *TdSerializeInlineKeyboardButtonType (struct TdInlineKeyboardButtonType *var);
void TdDestroyObjectInlineKeyboardButtonType (struct TdInlineKeyboardButtonType *var);
void TdStackStorerInlineKeyboardButtonType (struct TdInlineKeyboardButtonType *var, struct TdStackStorerMethods *M);
struct TdInlineKeyboardButtonType *TdStackFetcherInlineKeyboardButtonType (struct TdStackFetcherMethods *M);
enum List_InlineKeyboardButtonType {
  CODE_InlineKeyboardButtonTypeUrl = 1130741420,
  CODE_InlineKeyboardButtonTypeCallback = -1127515139,
  CODE_InlineKeyboardButtonTypeCallbackGame = -383429528,
  CODE_InlineKeyboardButtonTypeSwitchInline = -2035563307,
  CODE_InlineKeyboardButtonTypeBuy = 1360739440,
};
struct TdInlineKeyboardButtonTypeUrl {
  int ID;
  int refcnt;
  char *url_;
};
struct TdInlineKeyboardButtonTypeUrl *TdCreateObjectInlineKeyboardButtonTypeUrl (char *url_);
char *TdSerializeInlineKeyboardButtonTypeUrl (struct TdInlineKeyboardButtonTypeUrl *var);
void TdDestroyObjectInlineKeyboardButtonTypeUrl (struct TdInlineKeyboardButtonTypeUrl *var);
void TdStackStorerInlineKeyboardButtonTypeUrl (struct TdInlineKeyboardButtonTypeUrl *var, struct TdStackStorerMethods *M);
struct TdInlineKeyboardButtonTypeUrl *TdStackFetcherInlineKeyboardButtonTypeUrl (struct TdStackFetcherMethods *M);
struct TdInlineKeyboardButtonTypeCallback {
  int ID;
  int refcnt;
  struct TdBytes data_;
};
struct TdInlineKeyboardButtonTypeCallback *TdCreateObjectInlineKeyboardButtonTypeCallback (struct TdBytes data_);
char *TdSerializeInlineKeyboardButtonTypeCallback (struct TdInlineKeyboardButtonTypeCallback *var);
void TdDestroyObjectInlineKeyboardButtonTypeCallback (struct TdInlineKeyboardButtonTypeCallback *var);
void TdStackStorerInlineKeyboardButtonTypeCallback (struct TdInlineKeyboardButtonTypeCallback *var, struct TdStackStorerMethods *M);
struct TdInlineKeyboardButtonTypeCallback *TdStackFetcherInlineKeyboardButtonTypeCallback (struct TdStackFetcherMethods *M);
struct TdInlineKeyboardButtonTypeCallbackGame {
  int ID;
  int refcnt;
};
struct TdInlineKeyboardButtonTypeCallbackGame *TdCreateObjectInlineKeyboardButtonTypeCallbackGame (void);
char *TdSerializeInlineKeyboardButtonTypeCallbackGame (struct TdInlineKeyboardButtonTypeCallbackGame *var);
void TdDestroyObjectInlineKeyboardButtonTypeCallbackGame (struct TdInlineKeyboardButtonTypeCallbackGame *var);
void TdStackStorerInlineKeyboardButtonTypeCallbackGame (struct TdInlineKeyboardButtonTypeCallbackGame *var, struct TdStackStorerMethods *M);
struct TdInlineKeyboardButtonTypeCallbackGame *TdStackFetcherInlineKeyboardButtonTypeCallbackGame (struct TdStackFetcherMethods *M);
struct TdInlineKeyboardButtonTypeSwitchInline {
  int ID;
  int refcnt;
  char *query_;
  int in_current_chat_;
};
struct TdInlineKeyboardButtonTypeSwitchInline *TdCreateObjectInlineKeyboardButtonTypeSwitchInline (char *query_, int in_current_chat_);
char *TdSerializeInlineKeyboardButtonTypeSwitchInline (struct TdInlineKeyboardButtonTypeSwitchInline *var);
void TdDestroyObjectInlineKeyboardButtonTypeSwitchInline (struct TdInlineKeyboardButtonTypeSwitchInline *var);
void TdStackStorerInlineKeyboardButtonTypeSwitchInline (struct TdInlineKeyboardButtonTypeSwitchInline *var, struct TdStackStorerMethods *M);
struct TdInlineKeyboardButtonTypeSwitchInline *TdStackFetcherInlineKeyboardButtonTypeSwitchInline (struct TdStackFetcherMethods *M);
struct TdInlineKeyboardButtonTypeBuy {
  int ID;
  int refcnt;
};
struct TdInlineKeyboardButtonTypeBuy *TdCreateObjectInlineKeyboardButtonTypeBuy (void);
char *TdSerializeInlineKeyboardButtonTypeBuy (struct TdInlineKeyboardButtonTypeBuy *var);
void TdDestroyObjectInlineKeyboardButtonTypeBuy (struct TdInlineKeyboardButtonTypeBuy *var);
void TdStackStorerInlineKeyboardButtonTypeBuy (struct TdInlineKeyboardButtonTypeBuy *var, struct TdStackStorerMethods *M);
struct TdInlineKeyboardButtonTypeBuy *TdStackFetcherInlineKeyboardButtonTypeBuy (struct TdStackFetcherMethods *M);
struct TdInlineQueryResult {
  int ID;
  int refcnt;
};
char *TdSerializeInlineQueryResult (struct TdInlineQueryResult *var);
void TdDestroyObjectInlineQueryResult (struct TdInlineQueryResult *var);
void TdStackStorerInlineQueryResult (struct TdInlineQueryResult *var, struct TdStackStorerMethods *M);
struct TdInlineQueryResult *TdStackFetcherInlineQueryResult (struct TdStackFetcherMethods *M);
enum List_InlineQueryResult {
  CODE_InlineQueryResultArticle = -518366710,
  CODE_InlineQueryResultContact = 410081985,
  CODE_InlineQueryResultLocation = -158305341,
  CODE_InlineQueryResultVenue = -1592932211,
  CODE_InlineQueryResultGame = 1706916987,
  CODE_InlineQueryResultAnimation = 2009984267,
  CODE_InlineQueryResultAudio = 842650360,
  CODE_InlineQueryResultDocument = -1491268539,
  CODE_InlineQueryResultPhoto = 1848319440,
  CODE_InlineQueryResultSticker = -1848224245,
  CODE_InlineQueryResultVideo = -1373158683,
  CODE_InlineQueryResultVoiceNote = -1897393105,
};
struct TdInlineQueryResultArticle {
  int ID;
  int refcnt;
  char *id_;
  char *url_;
  int hide_url_;
  char *title_;
  char *description_;
  struct TdPhotoSize *thumbnail_;
};
struct TdInlineQueryResultArticle *TdCreateObjectInlineQueryResultArticle (char *id_, char *url_, int hide_url_, char *title_, char *description_, struct TdPhotoSize *thumbnail_);
char *TdSerializeInlineQueryResultArticle (struct TdInlineQueryResultArticle *var);
void TdDestroyObjectInlineQueryResultArticle (struct TdInlineQueryResultArticle *var);
void TdStackStorerInlineQueryResultArticle (struct TdInlineQueryResultArticle *var, struct TdStackStorerMethods *M);
struct TdInlineQueryResultArticle *TdStackFetcherInlineQueryResultArticle (struct TdStackFetcherMethods *M);
struct TdInlineQueryResultContact {
  int ID;
  int refcnt;
  char *id_;
  struct TdContact *contact_;
  struct TdPhotoSize *thumbnail_;
};
struct TdInlineQueryResultContact *TdCreateObjectInlineQueryResultContact (char *id_, struct TdContact *contact_, struct TdPhotoSize *thumbnail_);
char *TdSerializeInlineQueryResultContact (struct TdInlineQueryResultContact *var);
void TdDestroyObjectInlineQueryResultContact (struct TdInlineQueryResultContact *var);
void TdStackStorerInlineQueryResultContact (struct TdInlineQueryResultContact *var, struct TdStackStorerMethods *M);
struct TdInlineQueryResultContact *TdStackFetcherInlineQueryResultContact (struct TdStackFetcherMethods *M);
struct TdInlineQueryResultLocation {
  int ID;
  int refcnt;
  char *id_;
  struct TdLocation *location_;
  char *title_;
  struct TdPhotoSize *thumbnail_;
};
struct TdInlineQueryResultLocation *TdCreateObjectInlineQueryResultLocation (char *id_, struct TdLocation *location_, char *title_, struct TdPhotoSize *thumbnail_);
char *TdSerializeInlineQueryResultLocation (struct TdInlineQueryResultLocation *var);
void TdDestroyObjectInlineQueryResultLocation (struct TdInlineQueryResultLocation *var);
void TdStackStorerInlineQueryResultLocation (struct TdInlineQueryResultLocation *var, struct TdStackStorerMethods *M);
struct TdInlineQueryResultLocation *TdStackFetcherInlineQueryResultLocation (struct TdStackFetcherMethods *M);
struct TdInlineQueryResultVenue {
  int ID;
  int refcnt;
  char *id_;
  struct TdVenue *venue_;
  struct TdPhotoSize *thumbnail_;
};
struct TdInlineQueryResultVenue *TdCreateObjectInlineQueryResultVenue (char *id_, struct TdVenue *venue_, struct TdPhotoSize *thumbnail_);
char *TdSerializeInlineQueryResultVenue (struct TdInlineQueryResultVenue *var);
void TdDestroyObjectInlineQueryResultVenue (struct TdInlineQueryResultVenue *var);
void TdStackStorerInlineQueryResultVenue (struct TdInlineQueryResultVenue *var, struct TdStackStorerMethods *M);
struct TdInlineQueryResultVenue *TdStackFetcherInlineQueryResultVenue (struct TdStackFetcherMethods *M);
struct TdInlineQueryResultGame {
  int ID;
  int refcnt;
  char *id_;
  struct TdGame *game_;
};
struct TdInlineQueryResultGame *TdCreateObjectInlineQueryResultGame (char *id_, struct TdGame *game_);
char *TdSerializeInlineQueryResultGame (struct TdInlineQueryResultGame *var);
void TdDestroyObjectInlineQueryResultGame (struct TdInlineQueryResultGame *var);
void TdStackStorerInlineQueryResultGame (struct TdInlineQueryResultGame *var, struct TdStackStorerMethods *M);
struct TdInlineQueryResultGame *TdStackFetcherInlineQueryResultGame (struct TdStackFetcherMethods *M);
struct TdInlineQueryResultAnimation {
  int ID;
  int refcnt;
  char *id_;
  struct TdAnimation *animation_;
  char *title_;
};
struct TdInlineQueryResultAnimation *TdCreateObjectInlineQueryResultAnimation (char *id_, struct TdAnimation *animation_, char *title_);
char *TdSerializeInlineQueryResultAnimation (struct TdInlineQueryResultAnimation *var);
void TdDestroyObjectInlineQueryResultAnimation (struct TdInlineQueryResultAnimation *var);
void TdStackStorerInlineQueryResultAnimation (struct TdInlineQueryResultAnimation *var, struct TdStackStorerMethods *M);
struct TdInlineQueryResultAnimation *TdStackFetcherInlineQueryResultAnimation (struct TdStackFetcherMethods *M);
struct TdInlineQueryResultAudio {
  int ID;
  int refcnt;
  char *id_;
  struct TdAudio *audio_;
};
struct TdInlineQueryResultAudio *TdCreateObjectInlineQueryResultAudio (char *id_, struct TdAudio *audio_);
char *TdSerializeInlineQueryResultAudio (struct TdInlineQueryResultAudio *var);
void TdDestroyObjectInlineQueryResultAudio (struct TdInlineQueryResultAudio *var);
void TdStackStorerInlineQueryResultAudio (struct TdInlineQueryResultAudio *var, struct TdStackStorerMethods *M);
struct TdInlineQueryResultAudio *TdStackFetcherInlineQueryResultAudio (struct TdStackFetcherMethods *M);
struct TdInlineQueryResultDocument {
  int ID;
  int refcnt;
  char *id_;
  struct TdDocument *document_;
  char *title_;
  char *description_;
};
struct TdInlineQueryResultDocument *TdCreateObjectInlineQueryResultDocument (char *id_, struct TdDocument *document_, char *title_, char *description_);
char *TdSerializeInlineQueryResultDocument (struct TdInlineQueryResultDocument *var);
void TdDestroyObjectInlineQueryResultDocument (struct TdInlineQueryResultDocument *var);
void TdStackStorerInlineQueryResultDocument (struct TdInlineQueryResultDocument *var, struct TdStackStorerMethods *M);
struct TdInlineQueryResultDocument *TdStackFetcherInlineQueryResultDocument (struct TdStackFetcherMethods *M);
struct TdInlineQueryResultPhoto {
  int ID;
  int refcnt;
  char *id_;
  struct TdPhoto *photo_;
  char *title_;
  char *description_;
};
struct TdInlineQueryResultPhoto *TdCreateObjectInlineQueryResultPhoto (char *id_, struct TdPhoto *photo_, char *title_, char *description_);
char *TdSerializeInlineQueryResultPhoto (struct TdInlineQueryResultPhoto *var);
void TdDestroyObjectInlineQueryResultPhoto (struct TdInlineQueryResultPhoto *var);
void TdStackStorerInlineQueryResultPhoto (struct TdInlineQueryResultPhoto *var, struct TdStackStorerMethods *M);
struct TdInlineQueryResultPhoto *TdStackFetcherInlineQueryResultPhoto (struct TdStackFetcherMethods *M);
struct TdInlineQueryResultSticker {
  int ID;
  int refcnt;
  char *id_;
  struct TdSticker *sticker_;
};
struct TdInlineQueryResultSticker *TdCreateObjectInlineQueryResultSticker (char *id_, struct TdSticker *sticker_);
char *TdSerializeInlineQueryResultSticker (struct TdInlineQueryResultSticker *var);
void TdDestroyObjectInlineQueryResultSticker (struct TdInlineQueryResultSticker *var);
void TdStackStorerInlineQueryResultSticker (struct TdInlineQueryResultSticker *var, struct TdStackStorerMethods *M);
struct TdInlineQueryResultSticker *TdStackFetcherInlineQueryResultSticker (struct TdStackFetcherMethods *M);
struct TdInlineQueryResultVideo {
  int ID;
  int refcnt;
  char *id_;
  struct TdVideo *video_;
  char *title_;
  char *description_;
};
struct TdInlineQueryResultVideo *TdCreateObjectInlineQueryResultVideo (char *id_, struct TdVideo *video_, char *title_, char *description_);
char *TdSerializeInlineQueryResultVideo (struct TdInlineQueryResultVideo *var);
void TdDestroyObjectInlineQueryResultVideo (struct TdInlineQueryResultVideo *var);
void TdStackStorerInlineQueryResultVideo (struct TdInlineQueryResultVideo *var, struct TdStackStorerMethods *M);
struct TdInlineQueryResultVideo *TdStackFetcherInlineQueryResultVideo (struct TdStackFetcherMethods *M);
struct TdInlineQueryResultVoiceNote {
  int ID;
  int refcnt;
  char *id_;
  struct TdVoiceNote *voice_note_;
  char *title_;
};
struct TdInlineQueryResultVoiceNote *TdCreateObjectInlineQueryResultVoiceNote (char *id_, struct TdVoiceNote *voice_note_, char *title_);
char *TdSerializeInlineQueryResultVoiceNote (struct TdInlineQueryResultVoiceNote *var);
void TdDestroyObjectInlineQueryResultVoiceNote (struct TdInlineQueryResultVoiceNote *var);
void TdStackStorerInlineQueryResultVoiceNote (struct TdInlineQueryResultVoiceNote *var, struct TdStackStorerMethods *M);
struct TdInlineQueryResultVoiceNote *TdStackFetcherInlineQueryResultVoiceNote (struct TdStackFetcherMethods *M);
struct TdInlineQueryResults {
  int ID;
  int refcnt;
  long long inline_query_id_;
  char *next_offset_;
  struct TdVectorInlineQueryResult *results_;
  char *switch_pm_text_;
  char *switch_pm_parameter_;
};
struct TdInlineQueryResults *TdCreateObjectInlineQueryResults (long long inline_query_id_, char *next_offset_, struct TdVectorInlineQueryResult *results_, char *switch_pm_text_, char *switch_pm_parameter_);
char *TdSerializeInlineQueryResults (struct TdInlineQueryResults *var);
void TdDestroyObjectInlineQueryResults (struct TdInlineQueryResults *var);
void TdStackStorerInlineQueryResults (struct TdInlineQueryResults *var, struct TdStackStorerMethods *M);
struct TdInlineQueryResults *TdStackFetcherInlineQueryResults (struct TdStackFetcherMethods *M);
struct TdInputCredentials {
  int ID;
  int refcnt;
};
char *TdSerializeInputCredentials (struct TdInputCredentials *var);
void TdDestroyObjectInputCredentials (struct TdInputCredentials *var);
void TdStackStorerInputCredentials (struct TdInputCredentials *var, struct TdStackStorerMethods *M);
struct TdInputCredentials *TdStackFetcherInputCredentials (struct TdStackFetcherMethods *M);
enum List_InputCredentials {
  CODE_InputCredentialsSaved = -2034385364,
  CODE_InputCredentialsNew = -829689558,
  CODE_InputCredentialsAndroidPay = 1979566832,
  CODE_InputCredentialsApplePay = -1246570799,
};
struct TdInputCredentialsSaved {
  int ID;
  int refcnt;
  char *saved_credentials_id_;
};
struct TdInputCredentialsSaved *TdCreateObjectInputCredentialsSaved (char *saved_credentials_id_);
char *TdSerializeInputCredentialsSaved (struct TdInputCredentialsSaved *var);
void TdDestroyObjectInputCredentialsSaved (struct TdInputCredentialsSaved *var);
void TdStackStorerInputCredentialsSaved (struct TdInputCredentialsSaved *var, struct TdStackStorerMethods *M);
struct TdInputCredentialsSaved *TdStackFetcherInputCredentialsSaved (struct TdStackFetcherMethods *M);
struct TdInputCredentialsNew {
  int ID;
  int refcnt;
  char *data_;
  int allow_save_;
};
struct TdInputCredentialsNew *TdCreateObjectInputCredentialsNew (char *data_, int allow_save_);
char *TdSerializeInputCredentialsNew (struct TdInputCredentialsNew *var);
void TdDestroyObjectInputCredentialsNew (struct TdInputCredentialsNew *var);
void TdStackStorerInputCredentialsNew (struct TdInputCredentialsNew *var, struct TdStackStorerMethods *M);
struct TdInputCredentialsNew *TdStackFetcherInputCredentialsNew (struct TdStackFetcherMethods *M);
struct TdInputCredentialsAndroidPay {
  int ID;
  int refcnt;
  char *data_;
};
struct TdInputCredentialsAndroidPay *TdCreateObjectInputCredentialsAndroidPay (char *data_);
char *TdSerializeInputCredentialsAndroidPay (struct TdInputCredentialsAndroidPay *var);
void TdDestroyObjectInputCredentialsAndroidPay (struct TdInputCredentialsAndroidPay *var);
void TdStackStorerInputCredentialsAndroidPay (struct TdInputCredentialsAndroidPay *var, struct TdStackStorerMethods *M);
struct TdInputCredentialsAndroidPay *TdStackFetcherInputCredentialsAndroidPay (struct TdStackFetcherMethods *M);
struct TdInputCredentialsApplePay {
  int ID;
  int refcnt;
  char *data_;
};
struct TdInputCredentialsApplePay *TdCreateObjectInputCredentialsApplePay (char *data_);
char *TdSerializeInputCredentialsApplePay (struct TdInputCredentialsApplePay *var);
void TdDestroyObjectInputCredentialsApplePay (struct TdInputCredentialsApplePay *var);
void TdStackStorerInputCredentialsApplePay (struct TdInputCredentialsApplePay *var, struct TdStackStorerMethods *M);
struct TdInputCredentialsApplePay *TdStackFetcherInputCredentialsApplePay (struct TdStackFetcherMethods *M);
struct TdInputFile {
  int ID;
  int refcnt;
};
char *TdSerializeInputFile (struct TdInputFile *var);
void TdDestroyObjectInputFile (struct TdInputFile *var);
void TdStackStorerInputFile (struct TdInputFile *var, struct TdStackStorerMethods *M);
struct TdInputFile *TdStackFetcherInputFile (struct TdStackFetcherMethods *M);
enum List_InputFile {
  CODE_InputFileId = 1788906253,
  CODE_InputFileRemote = -107574466,
  CODE_InputFileLocal = 2056030919,
  CODE_InputFileGenerated = -1781351885,
};
struct TdInputFileId {
  int ID;
  int refcnt;
  int id_;
};
struct TdInputFileId *TdCreateObjectInputFileId (int id_);
char *TdSerializeInputFileId (struct TdInputFileId *var);
void TdDestroyObjectInputFileId (struct TdInputFileId *var);
void TdStackStorerInputFileId (struct TdInputFileId *var, struct TdStackStorerMethods *M);
struct TdInputFileId *TdStackFetcherInputFileId (struct TdStackFetcherMethods *M);
struct TdInputFileRemote {
  int ID;
  int refcnt;
  char *id_;
};
struct TdInputFileRemote *TdCreateObjectInputFileRemote (char *id_);
char *TdSerializeInputFileRemote (struct TdInputFileRemote *var);
void TdDestroyObjectInputFileRemote (struct TdInputFileRemote *var);
void TdStackStorerInputFileRemote (struct TdInputFileRemote *var, struct TdStackStorerMethods *M);
struct TdInputFileRemote *TdStackFetcherInputFileRemote (struct TdStackFetcherMethods *M);
struct TdInputFileLocal {
  int ID;
  int refcnt;
  char *path_;
};
struct TdInputFileLocal *TdCreateObjectInputFileLocal (char *path_);
char *TdSerializeInputFileLocal (struct TdInputFileLocal *var);
void TdDestroyObjectInputFileLocal (struct TdInputFileLocal *var);
void TdStackStorerInputFileLocal (struct TdInputFileLocal *var, struct TdStackStorerMethods *M);
struct TdInputFileLocal *TdStackFetcherInputFileLocal (struct TdStackFetcherMethods *M);
struct TdInputFileGenerated {
  int ID;
  int refcnt;
  char *original_path_;
  char *conversion_;
  int expected_size_;
};
struct TdInputFileGenerated *TdCreateObjectInputFileGenerated (char *original_path_, char *conversion_, int expected_size_);
char *TdSerializeInputFileGenerated (struct TdInputFileGenerated *var);
void TdDestroyObjectInputFileGenerated (struct TdInputFileGenerated *var);
void TdStackStorerInputFileGenerated (struct TdInputFileGenerated *var, struct TdStackStorerMethods *M);
struct TdInputFileGenerated *TdStackFetcherInputFileGenerated (struct TdStackFetcherMethods *M);
struct TdInputIdentityDocument {
  int ID;
  int refcnt;
  char *number_;
  struct TdDate *expiry_date_;
  struct TdInputFile *front_side_;
  struct TdInputFile *reverse_side_;
  struct TdInputFile *selfie_;
  struct TdVectorInputFile *translation_;
};
struct TdInputIdentityDocument *TdCreateObjectInputIdentityDocument (char *number_, struct TdDate *expiry_date_, struct TdInputFile *front_side_, struct TdInputFile *reverse_side_, struct TdInputFile *selfie_, struct TdVectorInputFile *translation_);
char *TdSerializeInputIdentityDocument (struct TdInputIdentityDocument *var);
void TdDestroyObjectInputIdentityDocument (struct TdInputIdentityDocument *var);
void TdStackStorerInputIdentityDocument (struct TdInputIdentityDocument *var, struct TdStackStorerMethods *M);
struct TdInputIdentityDocument *TdStackFetcherInputIdentityDocument (struct TdStackFetcherMethods *M);
struct TdInputInlineQueryResult {
  int ID;
  int refcnt;
};
char *TdSerializeInputInlineQueryResult (struct TdInputInlineQueryResult *var);
void TdDestroyObjectInputInlineQueryResult (struct TdInputInlineQueryResult *var);
void TdStackStorerInputInlineQueryResult (struct TdInputInlineQueryResult *var, struct TdStackStorerMethods *M);
struct TdInputInlineQueryResult *TdStackFetcherInputInlineQueryResult (struct TdStackFetcherMethods *M);
enum List_InputInlineQueryResult {
  CODE_InputInlineQueryResultAnimatedGif = -891474894,
  CODE_InputInlineQueryResultAnimatedMpeg4 = -1629529888,
  CODE_InputInlineQueryResultArticle = 1973670156,
  CODE_InputInlineQueryResultAudio = 1260139988,
  CODE_InputInlineQueryResultContact = 1846064594,
  CODE_InputInlineQueryResultDocument = 578801869,
  CODE_InputInlineQueryResultGame = 966074327,
  CODE_InputInlineQueryResultLocation = -1887650218,
  CODE_InputInlineQueryResultPhoto = -1123338721,
  CODE_InputInlineQueryResultSticker = 274007129,
  CODE_InputInlineQueryResultVenue = 541704509,
  CODE_InputInlineQueryResultVideo = 1724073191,
  CODE_InputInlineQueryResultVoiceNote = -1790072503,
};
struct TdInputInlineQueryResultAnimatedGif {
  int ID;
  int refcnt;
  char *id_;
  char *title_;
  char *thumbnail_url_;
  char *gif_url_;
  int gif_duration_;
  int gif_width_;
  int gif_height_;
  struct TdReplyMarkup *reply_markup_;
  struct TdInputMessageContent *input_message_content_;
};
struct TdInputInlineQueryResultAnimatedGif *TdCreateObjectInputInlineQueryResultAnimatedGif (char *id_, char *title_, char *thumbnail_url_, char *gif_url_, int gif_duration_, int gif_width_, int gif_height_, struct TdReplyMarkup *reply_markup_, struct TdInputMessageContent *input_message_content_);
char *TdSerializeInputInlineQueryResultAnimatedGif (struct TdInputInlineQueryResultAnimatedGif *var);
void TdDestroyObjectInputInlineQueryResultAnimatedGif (struct TdInputInlineQueryResultAnimatedGif *var);
void TdStackStorerInputInlineQueryResultAnimatedGif (struct TdInputInlineQueryResultAnimatedGif *var, struct TdStackStorerMethods *M);
struct TdInputInlineQueryResultAnimatedGif *TdStackFetcherInputInlineQueryResultAnimatedGif (struct TdStackFetcherMethods *M);
struct TdInputInlineQueryResultAnimatedMpeg4 {
  int ID;
  int refcnt;
  char *id_;
  char *title_;
  char *thumbnail_url_;
  char *mpeg4_url_;
  int mpeg4_duration_;
  int mpeg4_width_;
  int mpeg4_height_;
  struct TdReplyMarkup *reply_markup_;
  struct TdInputMessageContent *input_message_content_;
};
struct TdInputInlineQueryResultAnimatedMpeg4 *TdCreateObjectInputInlineQueryResultAnimatedMpeg4 (char *id_, char *title_, char *thumbnail_url_, char *mpeg4_url_, int mpeg4_duration_, int mpeg4_width_, int mpeg4_height_, struct TdReplyMarkup *reply_markup_, struct TdInputMessageContent *input_message_content_);
char *TdSerializeInputInlineQueryResultAnimatedMpeg4 (struct TdInputInlineQueryResultAnimatedMpeg4 *var);
void TdDestroyObjectInputInlineQueryResultAnimatedMpeg4 (struct TdInputInlineQueryResultAnimatedMpeg4 *var);
void TdStackStorerInputInlineQueryResultAnimatedMpeg4 (struct TdInputInlineQueryResultAnimatedMpeg4 *var, struct TdStackStorerMethods *M);
struct TdInputInlineQueryResultAnimatedMpeg4 *TdStackFetcherInputInlineQueryResultAnimatedMpeg4 (struct TdStackFetcherMethods *M);
struct TdInputInlineQueryResultArticle {
  int ID;
  int refcnt;
  char *id_;
  char *url_;
  int hide_url_;
  char *title_;
  char *description_;
  char *thumbnail_url_;
  int thumbnail_width_;
  int thumbnail_height_;
  struct TdReplyMarkup *reply_markup_;
  struct TdInputMessageContent *input_message_content_;
};
struct TdInputInlineQueryResultArticle *TdCreateObjectInputInlineQueryResultArticle (char *id_, char *url_, int hide_url_, char *title_, char *description_, char *thumbnail_url_, int thumbnail_width_, int thumbnail_height_, struct TdReplyMarkup *reply_markup_, struct TdInputMessageContent *input_message_content_);
char *TdSerializeInputInlineQueryResultArticle (struct TdInputInlineQueryResultArticle *var);
void TdDestroyObjectInputInlineQueryResultArticle (struct TdInputInlineQueryResultArticle *var);
void TdStackStorerInputInlineQueryResultArticle (struct TdInputInlineQueryResultArticle *var, struct TdStackStorerMethods *M);
struct TdInputInlineQueryResultArticle *TdStackFetcherInputInlineQueryResultArticle (struct TdStackFetcherMethods *M);
struct TdInputInlineQueryResultAudio {
  int ID;
  int refcnt;
  char *id_;
  char *title_;
  char *performer_;
  char *audio_url_;
  int audio_duration_;
  struct TdReplyMarkup *reply_markup_;
  struct TdInputMessageContent *input_message_content_;
};
struct TdInputInlineQueryResultAudio *TdCreateObjectInputInlineQueryResultAudio (char *id_, char *title_, char *performer_, char *audio_url_, int audio_duration_, struct TdReplyMarkup *reply_markup_, struct TdInputMessageContent *input_message_content_);
char *TdSerializeInputInlineQueryResultAudio (struct TdInputInlineQueryResultAudio *var);
void TdDestroyObjectInputInlineQueryResultAudio (struct TdInputInlineQueryResultAudio *var);
void TdStackStorerInputInlineQueryResultAudio (struct TdInputInlineQueryResultAudio *var, struct TdStackStorerMethods *M);
struct TdInputInlineQueryResultAudio *TdStackFetcherInputInlineQueryResultAudio (struct TdStackFetcherMethods *M);
struct TdInputInlineQueryResultContact {
  int ID;
  int refcnt;
  char *id_;
  struct TdContact *contact_;
  char *thumbnail_url_;
  int thumbnail_width_;
  int thumbnail_height_;
  struct TdReplyMarkup *reply_markup_;
  struct TdInputMessageContent *input_message_content_;
};
struct TdInputInlineQueryResultContact *TdCreateObjectInputInlineQueryResultContact (char *id_, struct TdContact *contact_, char *thumbnail_url_, int thumbnail_width_, int thumbnail_height_, struct TdReplyMarkup *reply_markup_, struct TdInputMessageContent *input_message_content_);
char *TdSerializeInputInlineQueryResultContact (struct TdInputInlineQueryResultContact *var);
void TdDestroyObjectInputInlineQueryResultContact (struct TdInputInlineQueryResultContact *var);
void TdStackStorerInputInlineQueryResultContact (struct TdInputInlineQueryResultContact *var, struct TdStackStorerMethods *M);
struct TdInputInlineQueryResultContact *TdStackFetcherInputInlineQueryResultContact (struct TdStackFetcherMethods *M);
struct TdInputInlineQueryResultDocument {
  int ID;
  int refcnt;
  char *id_;
  char *title_;
  char *description_;
  char *document_url_;
  char *mime_type_;
  char *thumbnail_url_;
  int thumbnail_width_;
  int thumbnail_height_;
  struct TdReplyMarkup *reply_markup_;
  struct TdInputMessageContent *input_message_content_;
};
struct TdInputInlineQueryResultDocument *TdCreateObjectInputInlineQueryResultDocument (char *id_, char *title_, char *description_, char *document_url_, char *mime_type_, char *thumbnail_url_, int thumbnail_width_, int thumbnail_height_, struct TdReplyMarkup *reply_markup_, struct TdInputMessageContent *input_message_content_);
char *TdSerializeInputInlineQueryResultDocument (struct TdInputInlineQueryResultDocument *var);
void TdDestroyObjectInputInlineQueryResultDocument (struct TdInputInlineQueryResultDocument *var);
void TdStackStorerInputInlineQueryResultDocument (struct TdInputInlineQueryResultDocument *var, struct TdStackStorerMethods *M);
struct TdInputInlineQueryResultDocument *TdStackFetcherInputInlineQueryResultDocument (struct TdStackFetcherMethods *M);
struct TdInputInlineQueryResultGame {
  int ID;
  int refcnt;
  char *id_;
  char *game_short_name_;
  struct TdReplyMarkup *reply_markup_;
};
struct TdInputInlineQueryResultGame *TdCreateObjectInputInlineQueryResultGame (char *id_, char *game_short_name_, struct TdReplyMarkup *reply_markup_);
char *TdSerializeInputInlineQueryResultGame (struct TdInputInlineQueryResultGame *var);
void TdDestroyObjectInputInlineQueryResultGame (struct TdInputInlineQueryResultGame *var);
void TdStackStorerInputInlineQueryResultGame (struct TdInputInlineQueryResultGame *var, struct TdStackStorerMethods *M);
struct TdInputInlineQueryResultGame *TdStackFetcherInputInlineQueryResultGame (struct TdStackFetcherMethods *M);
struct TdInputInlineQueryResultLocation {
  int ID;
  int refcnt;
  char *id_;
  struct TdLocation *location_;
  int live_period_;
  char *title_;
  char *thumbnail_url_;
  int thumbnail_width_;
  int thumbnail_height_;
  struct TdReplyMarkup *reply_markup_;
  struct TdInputMessageContent *input_message_content_;
};
struct TdInputInlineQueryResultLocation *TdCreateObjectInputInlineQueryResultLocation (char *id_, struct TdLocation *location_, int live_period_, char *title_, char *thumbnail_url_, int thumbnail_width_, int thumbnail_height_, struct TdReplyMarkup *reply_markup_, struct TdInputMessageContent *input_message_content_);
char *TdSerializeInputInlineQueryResultLocation (struct TdInputInlineQueryResultLocation *var);
void TdDestroyObjectInputInlineQueryResultLocation (struct TdInputInlineQueryResultLocation *var);
void TdStackStorerInputInlineQueryResultLocation (struct TdInputInlineQueryResultLocation *var, struct TdStackStorerMethods *M);
struct TdInputInlineQueryResultLocation *TdStackFetcherInputInlineQueryResultLocation (struct TdStackFetcherMethods *M);
struct TdInputInlineQueryResultPhoto {
  int ID;
  int refcnt;
  char *id_;
  char *title_;
  char *description_;
  char *thumbnail_url_;
  char *photo_url_;
  int photo_width_;
  int photo_height_;
  struct TdReplyMarkup *reply_markup_;
  struct TdInputMessageContent *input_message_content_;
};
struct TdInputInlineQueryResultPhoto *TdCreateObjectInputInlineQueryResultPhoto (char *id_, char *title_, char *description_, char *thumbnail_url_, char *photo_url_, int photo_width_, int photo_height_, struct TdReplyMarkup *reply_markup_, struct TdInputMessageContent *input_message_content_);
char *TdSerializeInputInlineQueryResultPhoto (struct TdInputInlineQueryResultPhoto *var);
void TdDestroyObjectInputInlineQueryResultPhoto (struct TdInputInlineQueryResultPhoto *var);
void TdStackStorerInputInlineQueryResultPhoto (struct TdInputInlineQueryResultPhoto *var, struct TdStackStorerMethods *M);
struct TdInputInlineQueryResultPhoto *TdStackFetcherInputInlineQueryResultPhoto (struct TdStackFetcherMethods *M);
struct TdInputInlineQueryResultSticker {
  int ID;
  int refcnt;
  char *id_;
  char *thumbnail_url_;
  char *sticker_url_;
  int sticker_width_;
  int sticker_height_;
  struct TdReplyMarkup *reply_markup_;
  struct TdInputMessageContent *input_message_content_;
};
struct TdInputInlineQueryResultSticker *TdCreateObjectInputInlineQueryResultSticker (char *id_, char *thumbnail_url_, char *sticker_url_, int sticker_width_, int sticker_height_, struct TdReplyMarkup *reply_markup_, struct TdInputMessageContent *input_message_content_);
char *TdSerializeInputInlineQueryResultSticker (struct TdInputInlineQueryResultSticker *var);
void TdDestroyObjectInputInlineQueryResultSticker (struct TdInputInlineQueryResultSticker *var);
void TdStackStorerInputInlineQueryResultSticker (struct TdInputInlineQueryResultSticker *var, struct TdStackStorerMethods *M);
struct TdInputInlineQueryResultSticker *TdStackFetcherInputInlineQueryResultSticker (struct TdStackFetcherMethods *M);
struct TdInputInlineQueryResultVenue {
  int ID;
  int refcnt;
  char *id_;
  struct TdVenue *venue_;
  char *thumbnail_url_;
  int thumbnail_width_;
  int thumbnail_height_;
  struct TdReplyMarkup *reply_markup_;
  struct TdInputMessageContent *input_message_content_;
};
struct TdInputInlineQueryResultVenue *TdCreateObjectInputInlineQueryResultVenue (char *id_, struct TdVenue *venue_, char *thumbnail_url_, int thumbnail_width_, int thumbnail_height_, struct TdReplyMarkup *reply_markup_, struct TdInputMessageContent *input_message_content_);
char *TdSerializeInputInlineQueryResultVenue (struct TdInputInlineQueryResultVenue *var);
void TdDestroyObjectInputInlineQueryResultVenue (struct TdInputInlineQueryResultVenue *var);
void TdStackStorerInputInlineQueryResultVenue (struct TdInputInlineQueryResultVenue *var, struct TdStackStorerMethods *M);
struct TdInputInlineQueryResultVenue *TdStackFetcherInputInlineQueryResultVenue (struct TdStackFetcherMethods *M);
struct TdInputInlineQueryResultVideo {
  int ID;
  int refcnt;
  char *id_;
  char *title_;
  char *description_;
  char *thumbnail_url_;
  char *video_url_;
  char *mime_type_;
  int video_width_;
  int video_height_;
  int video_duration_;
  struct TdReplyMarkup *reply_markup_;
  struct TdInputMessageContent *input_message_content_;
};
struct TdInputInlineQueryResultVideo *TdCreateObjectInputInlineQueryResultVideo (char *id_, char *title_, char *description_, char *thumbnail_url_, char *video_url_, char *mime_type_, int video_width_, int video_height_, int video_duration_, struct TdReplyMarkup *reply_markup_, struct TdInputMessageContent *input_message_content_);
char *TdSerializeInputInlineQueryResultVideo (struct TdInputInlineQueryResultVideo *var);
void TdDestroyObjectInputInlineQueryResultVideo (struct TdInputInlineQueryResultVideo *var);
void TdStackStorerInputInlineQueryResultVideo (struct TdInputInlineQueryResultVideo *var, struct TdStackStorerMethods *M);
struct TdInputInlineQueryResultVideo *TdStackFetcherInputInlineQueryResultVideo (struct TdStackFetcherMethods *M);
struct TdInputInlineQueryResultVoiceNote {
  int ID;
  int refcnt;
  char *id_;
  char *title_;
  char *voice_note_url_;
  int voice_note_duration_;
  struct TdReplyMarkup *reply_markup_;
  struct TdInputMessageContent *input_message_content_;
};
struct TdInputInlineQueryResultVoiceNote *TdCreateObjectInputInlineQueryResultVoiceNote (char *id_, char *title_, char *voice_note_url_, int voice_note_duration_, struct TdReplyMarkup *reply_markup_, struct TdInputMessageContent *input_message_content_);
char *TdSerializeInputInlineQueryResultVoiceNote (struct TdInputInlineQueryResultVoiceNote *var);
void TdDestroyObjectInputInlineQueryResultVoiceNote (struct TdInputInlineQueryResultVoiceNote *var);
void TdStackStorerInputInlineQueryResultVoiceNote (struct TdInputInlineQueryResultVoiceNote *var, struct TdStackStorerMethods *M);
struct TdInputInlineQueryResultVoiceNote *TdStackFetcherInputInlineQueryResultVoiceNote (struct TdStackFetcherMethods *M);
struct TdInputMessageContent {
  int ID;
  int refcnt;
};
char *TdSerializeInputMessageContent (struct TdInputMessageContent *var);
void TdDestroyObjectInputMessageContent (struct TdInputMessageContent *var);
void TdStackStorerInputMessageContent (struct TdInputMessageContent *var, struct TdStackStorerMethods *M);
struct TdInputMessageContent *TdStackFetcherInputMessageContent (struct TdStackFetcherMethods *M);
enum List_InputMessageContent {
  CODE_InputMessageText = 247050392,
  CODE_InputMessageAnimation = 926542724,
  CODE_InputMessageAudio = -626786126,
  CODE_InputMessageDocument = 937970604,
  CODE_InputMessagePhoto = 1648801584,
  CODE_InputMessageSticker = 740776325,
  CODE_InputMessageVideo = -2108486755,
  CODE_InputMessageVideoNote = 279108859,
  CODE_InputMessageVoiceNote = 2136519657,
  CODE_InputMessageLocation = -1624179655,
  CODE_InputMessageVenue = 1447926269,
  CODE_InputMessageContact = -982446849,
  CODE_InputMessageGame = -1728000914,
  CODE_InputMessageInvoice = 1038812175,
  CODE_InputMessageForwarded = 1561363198,
};
struct TdInputMessageText {
  int ID;
  int refcnt;
  struct TdFormattedText *text_;
  int disable_web_page_preview_;
  int clear_draft_;
};
struct TdInputMessageText *TdCreateObjectInputMessageText (struct TdFormattedText *text_, int disable_web_page_preview_, int clear_draft_);
char *TdSerializeInputMessageText (struct TdInputMessageText *var);
void TdDestroyObjectInputMessageText (struct TdInputMessageText *var);
void TdStackStorerInputMessageText (struct TdInputMessageText *var, struct TdStackStorerMethods *M);
struct TdInputMessageText *TdStackFetcherInputMessageText (struct TdStackFetcherMethods *M);
struct TdInputMessageAnimation {
  int ID;
  int refcnt;
  struct TdInputFile *animation_;
  struct TdInputThumbnail *thumbnail_;
  int duration_;
  int width_;
  int height_;
  struct TdFormattedText *caption_;
};
struct TdInputMessageAnimation *TdCreateObjectInputMessageAnimation (struct TdInputFile *animation_, struct TdInputThumbnail *thumbnail_, int duration_, int width_, int height_, struct TdFormattedText *caption_);
char *TdSerializeInputMessageAnimation (struct TdInputMessageAnimation *var);
void TdDestroyObjectInputMessageAnimation (struct TdInputMessageAnimation *var);
void TdStackStorerInputMessageAnimation (struct TdInputMessageAnimation *var, struct TdStackStorerMethods *M);
struct TdInputMessageAnimation *TdStackFetcherInputMessageAnimation (struct TdStackFetcherMethods *M);
struct TdInputMessageAudio {
  int ID;
  int refcnt;
  struct TdInputFile *audio_;
  struct TdInputThumbnail *album_cover_thumbnail_;
  int duration_;
  char *title_;
  char *performer_;
  struct TdFormattedText *caption_;
};
struct TdInputMessageAudio *TdCreateObjectInputMessageAudio (struct TdInputFile *audio_, struct TdInputThumbnail *album_cover_thumbnail_, int duration_, char *title_, char *performer_, struct TdFormattedText *caption_);
char *TdSerializeInputMessageAudio (struct TdInputMessageAudio *var);
void TdDestroyObjectInputMessageAudio (struct TdInputMessageAudio *var);
void TdStackStorerInputMessageAudio (struct TdInputMessageAudio *var, struct TdStackStorerMethods *M);
struct TdInputMessageAudio *TdStackFetcherInputMessageAudio (struct TdStackFetcherMethods *M);
struct TdInputMessageDocument {
  int ID;
  int refcnt;
  struct TdInputFile *document_;
  struct TdInputThumbnail *thumbnail_;
  struct TdFormattedText *caption_;
};
struct TdInputMessageDocument *TdCreateObjectInputMessageDocument (struct TdInputFile *document_, struct TdInputThumbnail *thumbnail_, struct TdFormattedText *caption_);
char *TdSerializeInputMessageDocument (struct TdInputMessageDocument *var);
void TdDestroyObjectInputMessageDocument (struct TdInputMessageDocument *var);
void TdStackStorerInputMessageDocument (struct TdInputMessageDocument *var, struct TdStackStorerMethods *M);
struct TdInputMessageDocument *TdStackFetcherInputMessageDocument (struct TdStackFetcherMethods *M);
struct TdInputMessagePhoto {
  int ID;
  int refcnt;
  struct TdInputFile *photo_;
  struct TdInputThumbnail *thumbnail_;
  struct TdVectorInt *added_sticker_file_ids_;
  int width_;
  int height_;
  struct TdFormattedText *caption_;
  int ttl_;
};
struct TdInputMessagePhoto *TdCreateObjectInputMessagePhoto (struct TdInputFile *photo_, struct TdInputThumbnail *thumbnail_, struct TdVectorInt *added_sticker_file_ids_, int width_, int height_, struct TdFormattedText *caption_, int ttl_);
char *TdSerializeInputMessagePhoto (struct TdInputMessagePhoto *var);
void TdDestroyObjectInputMessagePhoto (struct TdInputMessagePhoto *var);
void TdStackStorerInputMessagePhoto (struct TdInputMessagePhoto *var, struct TdStackStorerMethods *M);
struct TdInputMessagePhoto *TdStackFetcherInputMessagePhoto (struct TdStackFetcherMethods *M);
struct TdInputMessageSticker {
  int ID;
  int refcnt;
  struct TdInputFile *sticker_;
  struct TdInputThumbnail *thumbnail_;
  int width_;
  int height_;
};
struct TdInputMessageSticker *TdCreateObjectInputMessageSticker (struct TdInputFile *sticker_, struct TdInputThumbnail *thumbnail_, int width_, int height_);
char *TdSerializeInputMessageSticker (struct TdInputMessageSticker *var);
void TdDestroyObjectInputMessageSticker (struct TdInputMessageSticker *var);
void TdStackStorerInputMessageSticker (struct TdInputMessageSticker *var, struct TdStackStorerMethods *M);
struct TdInputMessageSticker *TdStackFetcherInputMessageSticker (struct TdStackFetcherMethods *M);
struct TdInputMessageVideo {
  int ID;
  int refcnt;
  struct TdInputFile *video_;
  struct TdInputThumbnail *thumbnail_;
  struct TdVectorInt *added_sticker_file_ids_;
  int duration_;
  int width_;
  int height_;
  int supports_streaming_;
  struct TdFormattedText *caption_;
  int ttl_;
};
struct TdInputMessageVideo *TdCreateObjectInputMessageVideo (struct TdInputFile *video_, struct TdInputThumbnail *thumbnail_, struct TdVectorInt *added_sticker_file_ids_, int duration_, int width_, int height_, int supports_streaming_, struct TdFormattedText *caption_, int ttl_);
char *TdSerializeInputMessageVideo (struct TdInputMessageVideo *var);
void TdDestroyObjectInputMessageVideo (struct TdInputMessageVideo *var);
void TdStackStorerInputMessageVideo (struct TdInputMessageVideo *var, struct TdStackStorerMethods *M);
struct TdInputMessageVideo *TdStackFetcherInputMessageVideo (struct TdStackFetcherMethods *M);
struct TdInputMessageVideoNote {
  int ID;
  int refcnt;
  struct TdInputFile *video_note_;
  struct TdInputThumbnail *thumbnail_;
  int duration_;
  int length_;
};
struct TdInputMessageVideoNote *TdCreateObjectInputMessageVideoNote (struct TdInputFile *video_note_, struct TdInputThumbnail *thumbnail_, int duration_, int length_);
char *TdSerializeInputMessageVideoNote (struct TdInputMessageVideoNote *var);
void TdDestroyObjectInputMessageVideoNote (struct TdInputMessageVideoNote *var);
void TdStackStorerInputMessageVideoNote (struct TdInputMessageVideoNote *var, struct TdStackStorerMethods *M);
struct TdInputMessageVideoNote *TdStackFetcherInputMessageVideoNote (struct TdStackFetcherMethods *M);
struct TdInputMessageVoiceNote {
  int ID;
  int refcnt;
  struct TdInputFile *voice_note_;
  int duration_;
  struct TdBytes waveform_;
  struct TdFormattedText *caption_;
};
struct TdInputMessageVoiceNote *TdCreateObjectInputMessageVoiceNote (struct TdInputFile *voice_note_, int duration_, struct TdBytes waveform_, struct TdFormattedText *caption_);
char *TdSerializeInputMessageVoiceNote (struct TdInputMessageVoiceNote *var);
void TdDestroyObjectInputMessageVoiceNote (struct TdInputMessageVoiceNote *var);
void TdStackStorerInputMessageVoiceNote (struct TdInputMessageVoiceNote *var, struct TdStackStorerMethods *M);
struct TdInputMessageVoiceNote *TdStackFetcherInputMessageVoiceNote (struct TdStackFetcherMethods *M);
struct TdInputMessageLocation {
  int ID;
  int refcnt;
  struct TdLocation *location_;
  int live_period_;
};
struct TdInputMessageLocation *TdCreateObjectInputMessageLocation (struct TdLocation *location_, int live_period_);
char *TdSerializeInputMessageLocation (struct TdInputMessageLocation *var);
void TdDestroyObjectInputMessageLocation (struct TdInputMessageLocation *var);
void TdStackStorerInputMessageLocation (struct TdInputMessageLocation *var, struct TdStackStorerMethods *M);
struct TdInputMessageLocation *TdStackFetcherInputMessageLocation (struct TdStackFetcherMethods *M);
struct TdInputMessageVenue {
  int ID;
  int refcnt;
  struct TdVenue *venue_;
};
struct TdInputMessageVenue *TdCreateObjectInputMessageVenue (struct TdVenue *venue_);
char *TdSerializeInputMessageVenue (struct TdInputMessageVenue *var);
void TdDestroyObjectInputMessageVenue (struct TdInputMessageVenue *var);
void TdStackStorerInputMessageVenue (struct TdInputMessageVenue *var, struct TdStackStorerMethods *M);
struct TdInputMessageVenue *TdStackFetcherInputMessageVenue (struct TdStackFetcherMethods *M);
struct TdInputMessageContact {
  int ID;
  int refcnt;
  struct TdContact *contact_;
};
struct TdInputMessageContact *TdCreateObjectInputMessageContact (struct TdContact *contact_);
char *TdSerializeInputMessageContact (struct TdInputMessageContact *var);
void TdDestroyObjectInputMessageContact (struct TdInputMessageContact *var);
void TdStackStorerInputMessageContact (struct TdInputMessageContact *var, struct TdStackStorerMethods *M);
struct TdInputMessageContact *TdStackFetcherInputMessageContact (struct TdStackFetcherMethods *M);
struct TdInputMessageGame {
  int ID;
  int refcnt;
  int bot_user_id_;
  char *game_short_name_;
};
struct TdInputMessageGame *TdCreateObjectInputMessageGame (int bot_user_id_, char *game_short_name_);
char *TdSerializeInputMessageGame (struct TdInputMessageGame *var);
void TdDestroyObjectInputMessageGame (struct TdInputMessageGame *var);
void TdStackStorerInputMessageGame (struct TdInputMessageGame *var, struct TdStackStorerMethods *M);
struct TdInputMessageGame *TdStackFetcherInputMessageGame (struct TdStackFetcherMethods *M);
struct TdInputMessageInvoice {
  int ID;
  int refcnt;
  struct TdInvoice *invoice_;
  char *title_;
  char *description_;
  char *photo_url_;
  int photo_size_;
  int photo_width_;
  int photo_height_;
  struct TdBytes payload_;
  char *provider_token_;
  char *provider_data_;
  char *start_parameter_;
};
struct TdInputMessageInvoice *TdCreateObjectInputMessageInvoice (struct TdInvoice *invoice_, char *title_, char *description_, char *photo_url_, int photo_size_, int photo_width_, int photo_height_, struct TdBytes payload_, char *provider_token_, char *provider_data_, char *start_parameter_);
char *TdSerializeInputMessageInvoice (struct TdInputMessageInvoice *var);
void TdDestroyObjectInputMessageInvoice (struct TdInputMessageInvoice *var);
void TdStackStorerInputMessageInvoice (struct TdInputMessageInvoice *var, struct TdStackStorerMethods *M);
struct TdInputMessageInvoice *TdStackFetcherInputMessageInvoice (struct TdStackFetcherMethods *M);
struct TdInputMessageForwarded {
  int ID;
  int refcnt;
  long long from_chat_id_;
  long long message_id_;
  int in_game_share_;
};
struct TdInputMessageForwarded *TdCreateObjectInputMessageForwarded (long long from_chat_id_, long long message_id_, int in_game_share_);
char *TdSerializeInputMessageForwarded (struct TdInputMessageForwarded *var);
void TdDestroyObjectInputMessageForwarded (struct TdInputMessageForwarded *var);
void TdStackStorerInputMessageForwarded (struct TdInputMessageForwarded *var, struct TdStackStorerMethods *M);
struct TdInputMessageForwarded *TdStackFetcherInputMessageForwarded (struct TdStackFetcherMethods *M);
struct TdInputPassportElement {
  int ID;
  int refcnt;
};
char *TdSerializeInputPassportElement (struct TdInputPassportElement *var);
void TdDestroyObjectInputPassportElement (struct TdInputPassportElement *var);
void TdStackStorerInputPassportElement (struct TdInputPassportElement *var, struct TdStackStorerMethods *M);
struct TdInputPassportElement *TdStackFetcherInputPassportElement (struct TdStackFetcherMethods *M);
enum List_InputPassportElement {
  CODE_InputPassportElementPersonalDetails = 164791359,
  CODE_InputPassportElementPassport = -497011356,
  CODE_InputPassportElementDriverLicense = 304813264,
  CODE_InputPassportElementIdentityCard = -9963390,
  CODE_InputPassportElementInternalPassport = 715360043,
  CODE_InputPassportElementAddress = 461630480,
  CODE_InputPassportElementUtilityBill = 1389203841,
  CODE_InputPassportElementBankStatement = -26585208,
  CODE_InputPassportElementRentalAgreement = 1736154155,
  CODE_InputPassportElementPassportRegistration = 1314562128,
  CODE_InputPassportElementTemporaryRegistration = -1913238047,
  CODE_InputPassportElementPhoneNumber = 1319357497,
  CODE_InputPassportElementEmailAddress = -248605659,
};
struct TdInputPassportElementPersonalDetails {
  int ID;
  int refcnt;
  struct TdPersonalDetails *personal_details_;
};
struct TdInputPassportElementPersonalDetails *TdCreateObjectInputPassportElementPersonalDetails (struct TdPersonalDetails *personal_details_);
char *TdSerializeInputPassportElementPersonalDetails (struct TdInputPassportElementPersonalDetails *var);
void TdDestroyObjectInputPassportElementPersonalDetails (struct TdInputPassportElementPersonalDetails *var);
void TdStackStorerInputPassportElementPersonalDetails (struct TdInputPassportElementPersonalDetails *var, struct TdStackStorerMethods *M);
struct TdInputPassportElementPersonalDetails *TdStackFetcherInputPassportElementPersonalDetails (struct TdStackFetcherMethods *M);
struct TdInputPassportElementPassport {
  int ID;
  int refcnt;
  struct TdInputIdentityDocument *passport_;
};
struct TdInputPassportElementPassport *TdCreateObjectInputPassportElementPassport (struct TdInputIdentityDocument *passport_);
char *TdSerializeInputPassportElementPassport (struct TdInputPassportElementPassport *var);
void TdDestroyObjectInputPassportElementPassport (struct TdInputPassportElementPassport *var);
void TdStackStorerInputPassportElementPassport (struct TdInputPassportElementPassport *var, struct TdStackStorerMethods *M);
struct TdInputPassportElementPassport *TdStackFetcherInputPassportElementPassport (struct TdStackFetcherMethods *M);
struct TdInputPassportElementDriverLicense {
  int ID;
  int refcnt;
  struct TdInputIdentityDocument *driver_license_;
};
struct TdInputPassportElementDriverLicense *TdCreateObjectInputPassportElementDriverLicense (struct TdInputIdentityDocument *driver_license_);
char *TdSerializeInputPassportElementDriverLicense (struct TdInputPassportElementDriverLicense *var);
void TdDestroyObjectInputPassportElementDriverLicense (struct TdInputPassportElementDriverLicense *var);
void TdStackStorerInputPassportElementDriverLicense (struct TdInputPassportElementDriverLicense *var, struct TdStackStorerMethods *M);
struct TdInputPassportElementDriverLicense *TdStackFetcherInputPassportElementDriverLicense (struct TdStackFetcherMethods *M);
struct TdInputPassportElementIdentityCard {
  int ID;
  int refcnt;
  struct TdInputIdentityDocument *identity_card_;
};
struct TdInputPassportElementIdentityCard *TdCreateObjectInputPassportElementIdentityCard (struct TdInputIdentityDocument *identity_card_);
char *TdSerializeInputPassportElementIdentityCard (struct TdInputPassportElementIdentityCard *var);
void TdDestroyObjectInputPassportElementIdentityCard (struct TdInputPassportElementIdentityCard *var);
void TdStackStorerInputPassportElementIdentityCard (struct TdInputPassportElementIdentityCard *var, struct TdStackStorerMethods *M);
struct TdInputPassportElementIdentityCard *TdStackFetcherInputPassportElementIdentityCard (struct TdStackFetcherMethods *M);
struct TdInputPassportElementInternalPassport {
  int ID;
  int refcnt;
  struct TdInputIdentityDocument *internal_passport_;
};
struct TdInputPassportElementInternalPassport *TdCreateObjectInputPassportElementInternalPassport (struct TdInputIdentityDocument *internal_passport_);
char *TdSerializeInputPassportElementInternalPassport (struct TdInputPassportElementInternalPassport *var);
void TdDestroyObjectInputPassportElementInternalPassport (struct TdInputPassportElementInternalPassport *var);
void TdStackStorerInputPassportElementInternalPassport (struct TdInputPassportElementInternalPassport *var, struct TdStackStorerMethods *M);
struct TdInputPassportElementInternalPassport *TdStackFetcherInputPassportElementInternalPassport (struct TdStackFetcherMethods *M);
struct TdInputPassportElementAddress {
  int ID;
  int refcnt;
  struct TdAddress *address_;
};
struct TdInputPassportElementAddress *TdCreateObjectInputPassportElementAddress (struct TdAddress *address_);
char *TdSerializeInputPassportElementAddress (struct TdInputPassportElementAddress *var);
void TdDestroyObjectInputPassportElementAddress (struct TdInputPassportElementAddress *var);
void TdStackStorerInputPassportElementAddress (struct TdInputPassportElementAddress *var, struct TdStackStorerMethods *M);
struct TdInputPassportElementAddress *TdStackFetcherInputPassportElementAddress (struct TdStackFetcherMethods *M);
struct TdInputPassportElementUtilityBill {
  int ID;
  int refcnt;
  struct TdInputPersonalDocument *utility_bill_;
};
struct TdInputPassportElementUtilityBill *TdCreateObjectInputPassportElementUtilityBill (struct TdInputPersonalDocument *utility_bill_);
char *TdSerializeInputPassportElementUtilityBill (struct TdInputPassportElementUtilityBill *var);
void TdDestroyObjectInputPassportElementUtilityBill (struct TdInputPassportElementUtilityBill *var);
void TdStackStorerInputPassportElementUtilityBill (struct TdInputPassportElementUtilityBill *var, struct TdStackStorerMethods *M);
struct TdInputPassportElementUtilityBill *TdStackFetcherInputPassportElementUtilityBill (struct TdStackFetcherMethods *M);
struct TdInputPassportElementBankStatement {
  int ID;
  int refcnt;
  struct TdInputPersonalDocument *bank_statement_;
};
struct TdInputPassportElementBankStatement *TdCreateObjectInputPassportElementBankStatement (struct TdInputPersonalDocument *bank_statement_);
char *TdSerializeInputPassportElementBankStatement (struct TdInputPassportElementBankStatement *var);
void TdDestroyObjectInputPassportElementBankStatement (struct TdInputPassportElementBankStatement *var);
void TdStackStorerInputPassportElementBankStatement (struct TdInputPassportElementBankStatement *var, struct TdStackStorerMethods *M);
struct TdInputPassportElementBankStatement *TdStackFetcherInputPassportElementBankStatement (struct TdStackFetcherMethods *M);
struct TdInputPassportElementRentalAgreement {
  int ID;
  int refcnt;
  struct TdInputPersonalDocument *rental_agreement_;
};
struct TdInputPassportElementRentalAgreement *TdCreateObjectInputPassportElementRentalAgreement (struct TdInputPersonalDocument *rental_agreement_);
char *TdSerializeInputPassportElementRentalAgreement (struct TdInputPassportElementRentalAgreement *var);
void TdDestroyObjectInputPassportElementRentalAgreement (struct TdInputPassportElementRentalAgreement *var);
void TdStackStorerInputPassportElementRentalAgreement (struct TdInputPassportElementRentalAgreement *var, struct TdStackStorerMethods *M);
struct TdInputPassportElementRentalAgreement *TdStackFetcherInputPassportElementRentalAgreement (struct TdStackFetcherMethods *M);
struct TdInputPassportElementPassportRegistration {
  int ID;
  int refcnt;
  struct TdInputPersonalDocument *passport_registration_;
};
struct TdInputPassportElementPassportRegistration *TdCreateObjectInputPassportElementPassportRegistration (struct TdInputPersonalDocument *passport_registration_);
char *TdSerializeInputPassportElementPassportRegistration (struct TdInputPassportElementPassportRegistration *var);
void TdDestroyObjectInputPassportElementPassportRegistration (struct TdInputPassportElementPassportRegistration *var);
void TdStackStorerInputPassportElementPassportRegistration (struct TdInputPassportElementPassportRegistration *var, struct TdStackStorerMethods *M);
struct TdInputPassportElementPassportRegistration *TdStackFetcherInputPassportElementPassportRegistration (struct TdStackFetcherMethods *M);
struct TdInputPassportElementTemporaryRegistration {
  int ID;
  int refcnt;
  struct TdInputPersonalDocument *temporary_registration_;
};
struct TdInputPassportElementTemporaryRegistration *TdCreateObjectInputPassportElementTemporaryRegistration (struct TdInputPersonalDocument *temporary_registration_);
char *TdSerializeInputPassportElementTemporaryRegistration (struct TdInputPassportElementTemporaryRegistration *var);
void TdDestroyObjectInputPassportElementTemporaryRegistration (struct TdInputPassportElementTemporaryRegistration *var);
void TdStackStorerInputPassportElementTemporaryRegistration (struct TdInputPassportElementTemporaryRegistration *var, struct TdStackStorerMethods *M);
struct TdInputPassportElementTemporaryRegistration *TdStackFetcherInputPassportElementTemporaryRegistration (struct TdStackFetcherMethods *M);
struct TdInputPassportElementPhoneNumber {
  int ID;
  int refcnt;
  char *phone_number_;
};
struct TdInputPassportElementPhoneNumber *TdCreateObjectInputPassportElementPhoneNumber (char *phone_number_);
char *TdSerializeInputPassportElementPhoneNumber (struct TdInputPassportElementPhoneNumber *var);
void TdDestroyObjectInputPassportElementPhoneNumber (struct TdInputPassportElementPhoneNumber *var);
void TdStackStorerInputPassportElementPhoneNumber (struct TdInputPassportElementPhoneNumber *var, struct TdStackStorerMethods *M);
struct TdInputPassportElementPhoneNumber *TdStackFetcherInputPassportElementPhoneNumber (struct TdStackFetcherMethods *M);
struct TdInputPassportElementEmailAddress {
  int ID;
  int refcnt;
  char *email_address_;
};
struct TdInputPassportElementEmailAddress *TdCreateObjectInputPassportElementEmailAddress (char *email_address_);
char *TdSerializeInputPassportElementEmailAddress (struct TdInputPassportElementEmailAddress *var);
void TdDestroyObjectInputPassportElementEmailAddress (struct TdInputPassportElementEmailAddress *var);
void TdStackStorerInputPassportElementEmailAddress (struct TdInputPassportElementEmailAddress *var, struct TdStackStorerMethods *M);
struct TdInputPassportElementEmailAddress *TdStackFetcherInputPassportElementEmailAddress (struct TdStackFetcherMethods *M);
struct TdInputPassportElementError {
  int ID;
  int refcnt;
  struct TdPassportElementType *type_;
  char *message_;
  struct TdInputPassportElementErrorSource *source_;
};
struct TdInputPassportElementError *TdCreateObjectInputPassportElementError (struct TdPassportElementType *type_, char *message_, struct TdInputPassportElementErrorSource *source_);
char *TdSerializeInputPassportElementError (struct TdInputPassportElementError *var);
void TdDestroyObjectInputPassportElementError (struct TdInputPassportElementError *var);
void TdStackStorerInputPassportElementError (struct TdInputPassportElementError *var, struct TdStackStorerMethods *M);
struct TdInputPassportElementError *TdStackFetcherInputPassportElementError (struct TdStackFetcherMethods *M);
struct TdInputPassportElementErrorSource {
  int ID;
  int refcnt;
};
char *TdSerializeInputPassportElementErrorSource (struct TdInputPassportElementErrorSource *var);
void TdDestroyObjectInputPassportElementErrorSource (struct TdInputPassportElementErrorSource *var);
void TdStackStorerInputPassportElementErrorSource (struct TdInputPassportElementErrorSource *var, struct TdStackStorerMethods *M);
struct TdInputPassportElementErrorSource *TdStackFetcherInputPassportElementErrorSource (struct TdStackFetcherMethods *M);
enum List_InputPassportElementErrorSource {
  CODE_InputPassportElementErrorSourceUnspecified = 267230319,
  CODE_InputPassportElementErrorSourceDataField = -426795002,
  CODE_InputPassportElementErrorSourceFrontSide = 588023741,
  CODE_InputPassportElementErrorSourceReverseSide = 413072891,
  CODE_InputPassportElementErrorSourceSelfie = -773575528,
  CODE_InputPassportElementErrorSourceTranslationFile = 505842299,
  CODE_InputPassportElementErrorSourceTranslationFiles = -527254048,
  CODE_InputPassportElementErrorSourceFile = -298492469,
  CODE_InputPassportElementErrorSourceFiles = -2008541640,
};
struct TdInputPassportElementErrorSourceUnspecified {
  int ID;
  int refcnt;
  struct TdBytes element_hash_;
};
struct TdInputPassportElementErrorSourceUnspecified *TdCreateObjectInputPassportElementErrorSourceUnspecified (struct TdBytes element_hash_);
char *TdSerializeInputPassportElementErrorSourceUnspecified (struct TdInputPassportElementErrorSourceUnspecified *var);
void TdDestroyObjectInputPassportElementErrorSourceUnspecified (struct TdInputPassportElementErrorSourceUnspecified *var);
void TdStackStorerInputPassportElementErrorSourceUnspecified (struct TdInputPassportElementErrorSourceUnspecified *var, struct TdStackStorerMethods *M);
struct TdInputPassportElementErrorSourceUnspecified *TdStackFetcherInputPassportElementErrorSourceUnspecified (struct TdStackFetcherMethods *M);
struct TdInputPassportElementErrorSourceDataField {
  int ID;
  int refcnt;
  char *field_name_;
  struct TdBytes data_hash_;
};
struct TdInputPassportElementErrorSourceDataField *TdCreateObjectInputPassportElementErrorSourceDataField (char *field_name_, struct TdBytes data_hash_);
char *TdSerializeInputPassportElementErrorSourceDataField (struct TdInputPassportElementErrorSourceDataField *var);
void TdDestroyObjectInputPassportElementErrorSourceDataField (struct TdInputPassportElementErrorSourceDataField *var);
void TdStackStorerInputPassportElementErrorSourceDataField (struct TdInputPassportElementErrorSourceDataField *var, struct TdStackStorerMethods *M);
struct TdInputPassportElementErrorSourceDataField *TdStackFetcherInputPassportElementErrorSourceDataField (struct TdStackFetcherMethods *M);
struct TdInputPassportElementErrorSourceFrontSide {
  int ID;
  int refcnt;
  struct TdBytes file_hash_;
};
struct TdInputPassportElementErrorSourceFrontSide *TdCreateObjectInputPassportElementErrorSourceFrontSide (struct TdBytes file_hash_);
char *TdSerializeInputPassportElementErrorSourceFrontSide (struct TdInputPassportElementErrorSourceFrontSide *var);
void TdDestroyObjectInputPassportElementErrorSourceFrontSide (struct TdInputPassportElementErrorSourceFrontSide *var);
void TdStackStorerInputPassportElementErrorSourceFrontSide (struct TdInputPassportElementErrorSourceFrontSide *var, struct TdStackStorerMethods *M);
struct TdInputPassportElementErrorSourceFrontSide *TdStackFetcherInputPassportElementErrorSourceFrontSide (struct TdStackFetcherMethods *M);
struct TdInputPassportElementErrorSourceReverseSide {
  int ID;
  int refcnt;
  struct TdBytes file_hash_;
};
struct TdInputPassportElementErrorSourceReverseSide *TdCreateObjectInputPassportElementErrorSourceReverseSide (struct TdBytes file_hash_);
char *TdSerializeInputPassportElementErrorSourceReverseSide (struct TdInputPassportElementErrorSourceReverseSide *var);
void TdDestroyObjectInputPassportElementErrorSourceReverseSide (struct TdInputPassportElementErrorSourceReverseSide *var);
void TdStackStorerInputPassportElementErrorSourceReverseSide (struct TdInputPassportElementErrorSourceReverseSide *var, struct TdStackStorerMethods *M);
struct TdInputPassportElementErrorSourceReverseSide *TdStackFetcherInputPassportElementErrorSourceReverseSide (struct TdStackFetcherMethods *M);
struct TdInputPassportElementErrorSourceSelfie {
  int ID;
  int refcnt;
  struct TdBytes file_hash_;
};
struct TdInputPassportElementErrorSourceSelfie *TdCreateObjectInputPassportElementErrorSourceSelfie (struct TdBytes file_hash_);
char *TdSerializeInputPassportElementErrorSourceSelfie (struct TdInputPassportElementErrorSourceSelfie *var);
void TdDestroyObjectInputPassportElementErrorSourceSelfie (struct TdInputPassportElementErrorSourceSelfie *var);
void TdStackStorerInputPassportElementErrorSourceSelfie (struct TdInputPassportElementErrorSourceSelfie *var, struct TdStackStorerMethods *M);
struct TdInputPassportElementErrorSourceSelfie *TdStackFetcherInputPassportElementErrorSourceSelfie (struct TdStackFetcherMethods *M);
struct TdInputPassportElementErrorSourceTranslationFile {
  int ID;
  int refcnt;
  struct TdBytes file_hash_;
};
struct TdInputPassportElementErrorSourceTranslationFile *TdCreateObjectInputPassportElementErrorSourceTranslationFile (struct TdBytes file_hash_);
char *TdSerializeInputPassportElementErrorSourceTranslationFile (struct TdInputPassportElementErrorSourceTranslationFile *var);
void TdDestroyObjectInputPassportElementErrorSourceTranslationFile (struct TdInputPassportElementErrorSourceTranslationFile *var);
void TdStackStorerInputPassportElementErrorSourceTranslationFile (struct TdInputPassportElementErrorSourceTranslationFile *var, struct TdStackStorerMethods *M);
struct TdInputPassportElementErrorSourceTranslationFile *TdStackFetcherInputPassportElementErrorSourceTranslationFile (struct TdStackFetcherMethods *M);
struct TdInputPassportElementErrorSourceTranslationFiles {
  int ID;
  int refcnt;
  struct TdVectorBytes *file_hashes_;
};
struct TdInputPassportElementErrorSourceTranslationFiles *TdCreateObjectInputPassportElementErrorSourceTranslationFiles (struct TdVectorBytes *file_hashes_);
char *TdSerializeInputPassportElementErrorSourceTranslationFiles (struct TdInputPassportElementErrorSourceTranslationFiles *var);
void TdDestroyObjectInputPassportElementErrorSourceTranslationFiles (struct TdInputPassportElementErrorSourceTranslationFiles *var);
void TdStackStorerInputPassportElementErrorSourceTranslationFiles (struct TdInputPassportElementErrorSourceTranslationFiles *var, struct TdStackStorerMethods *M);
struct TdInputPassportElementErrorSourceTranslationFiles *TdStackFetcherInputPassportElementErrorSourceTranslationFiles (struct TdStackFetcherMethods *M);
struct TdInputPassportElementErrorSourceFile {
  int ID;
  int refcnt;
  struct TdBytes file_hash_;
};
struct TdInputPassportElementErrorSourceFile *TdCreateObjectInputPassportElementErrorSourceFile (struct TdBytes file_hash_);
char *TdSerializeInputPassportElementErrorSourceFile (struct TdInputPassportElementErrorSourceFile *var);
void TdDestroyObjectInputPassportElementErrorSourceFile (struct TdInputPassportElementErrorSourceFile *var);
void TdStackStorerInputPassportElementErrorSourceFile (struct TdInputPassportElementErrorSourceFile *var, struct TdStackStorerMethods *M);
struct TdInputPassportElementErrorSourceFile *TdStackFetcherInputPassportElementErrorSourceFile (struct TdStackFetcherMethods *M);
struct TdInputPassportElementErrorSourceFiles {
  int ID;
  int refcnt;
  struct TdVectorBytes *file_hashes_;
};
struct TdInputPassportElementErrorSourceFiles *TdCreateObjectInputPassportElementErrorSourceFiles (struct TdVectorBytes *file_hashes_);
char *TdSerializeInputPassportElementErrorSourceFiles (struct TdInputPassportElementErrorSourceFiles *var);
void TdDestroyObjectInputPassportElementErrorSourceFiles (struct TdInputPassportElementErrorSourceFiles *var);
void TdStackStorerInputPassportElementErrorSourceFiles (struct TdInputPassportElementErrorSourceFiles *var, struct TdStackStorerMethods *M);
struct TdInputPassportElementErrorSourceFiles *TdStackFetcherInputPassportElementErrorSourceFiles (struct TdStackFetcherMethods *M);
struct TdInputPersonalDocument {
  int ID;
  int refcnt;
  struct TdVectorInputFile *files_;
  struct TdVectorInputFile *translation_;
};
struct TdInputPersonalDocument *TdCreateObjectInputPersonalDocument (struct TdVectorInputFile *files_, struct TdVectorInputFile *translation_);
char *TdSerializeInputPersonalDocument (struct TdInputPersonalDocument *var);
void TdDestroyObjectInputPersonalDocument (struct TdInputPersonalDocument *var);
void TdStackStorerInputPersonalDocument (struct TdInputPersonalDocument *var, struct TdStackStorerMethods *M);
struct TdInputPersonalDocument *TdStackFetcherInputPersonalDocument (struct TdStackFetcherMethods *M);
struct TdInputSticker {
  int ID;
  int refcnt;
  struct TdInputFile *png_sticker_;
  char *emojis_;
  struct TdMaskPosition *mask_position_;
};
struct TdInputSticker *TdCreateObjectInputSticker (struct TdInputFile *png_sticker_, char *emojis_, struct TdMaskPosition *mask_position_);
char *TdSerializeInputSticker (struct TdInputSticker *var);
void TdDestroyObjectInputSticker (struct TdInputSticker *var);
void TdStackStorerInputSticker (struct TdInputSticker *var, struct TdStackStorerMethods *M);
struct TdInputSticker *TdStackFetcherInputSticker (struct TdStackFetcherMethods *M);
struct TdInputThumbnail {
  int ID;
  int refcnt;
  struct TdInputFile *thumbnail_;
  int width_;
  int height_;
};
struct TdInputThumbnail *TdCreateObjectInputThumbnail (struct TdInputFile *thumbnail_, int width_, int height_);
char *TdSerializeInputThumbnail (struct TdInputThumbnail *var);
void TdDestroyObjectInputThumbnail (struct TdInputThumbnail *var);
void TdStackStorerInputThumbnail (struct TdInputThumbnail *var, struct TdStackStorerMethods *M);
struct TdInputThumbnail *TdStackFetcherInputThumbnail (struct TdStackFetcherMethods *M);
struct TdInvoice {
  int ID;
  int refcnt;
  char *currency_;
  struct TdVectorLabeledPricePart *price_parts_;
  int is_test_;
  int need_name_;
  int need_phone_number_;
  int need_email_address_;
  int need_shipping_address_;
  int send_phone_number_to_provider_;
  int send_email_address_to_provider_;
  int is_flexible_;
};
struct TdInvoice *TdCreateObjectInvoice (char *currency_, struct TdVectorLabeledPricePart *price_parts_, int is_test_, int need_name_, int need_phone_number_, int need_email_address_, int need_shipping_address_, int send_phone_number_to_provider_, int send_email_address_to_provider_, int is_flexible_);
char *TdSerializeInvoice (struct TdInvoice *var);
void TdDestroyObjectInvoice (struct TdInvoice *var);
void TdStackStorerInvoice (struct TdInvoice *var, struct TdStackStorerMethods *M);
struct TdInvoice *TdStackFetcherInvoice (struct TdStackFetcherMethods *M);
struct TdKeyboardButton {
  int ID;
  int refcnt;
  char *text_;
  struct TdKeyboardButtonType *type_;
};
struct TdKeyboardButton *TdCreateObjectKeyboardButton (char *text_, struct TdKeyboardButtonType *type_);
char *TdSerializeKeyboardButton (struct TdKeyboardButton *var);
void TdDestroyObjectKeyboardButton (struct TdKeyboardButton *var);
void TdStackStorerKeyboardButton (struct TdKeyboardButton *var, struct TdStackStorerMethods *M);
struct TdKeyboardButton *TdStackFetcherKeyboardButton (struct TdStackFetcherMethods *M);
struct TdKeyboardButtonType {
  int ID;
  int refcnt;
};
char *TdSerializeKeyboardButtonType (struct TdKeyboardButtonType *var);
void TdDestroyObjectKeyboardButtonType (struct TdKeyboardButtonType *var);
void TdStackStorerKeyboardButtonType (struct TdKeyboardButtonType *var, struct TdStackStorerMethods *M);
struct TdKeyboardButtonType *TdStackFetcherKeyboardButtonType (struct TdStackFetcherMethods *M);
enum List_KeyboardButtonType {
  CODE_KeyboardButtonTypeText = -1773037256,
  CODE_KeyboardButtonTypeRequestPhoneNumber = -1529235527,
  CODE_KeyboardButtonTypeRequestLocation = -125661955,
};
struct TdKeyboardButtonTypeText {
  int ID;
  int refcnt;
};
struct TdKeyboardButtonTypeText *TdCreateObjectKeyboardButtonTypeText (void);
char *TdSerializeKeyboardButtonTypeText (struct TdKeyboardButtonTypeText *var);
void TdDestroyObjectKeyboardButtonTypeText (struct TdKeyboardButtonTypeText *var);
void TdStackStorerKeyboardButtonTypeText (struct TdKeyboardButtonTypeText *var, struct TdStackStorerMethods *M);
struct TdKeyboardButtonTypeText *TdStackFetcherKeyboardButtonTypeText (struct TdStackFetcherMethods *M);
struct TdKeyboardButtonTypeRequestPhoneNumber {
  int ID;
  int refcnt;
};
struct TdKeyboardButtonTypeRequestPhoneNumber *TdCreateObjectKeyboardButtonTypeRequestPhoneNumber (void);
char *TdSerializeKeyboardButtonTypeRequestPhoneNumber (struct TdKeyboardButtonTypeRequestPhoneNumber *var);
void TdDestroyObjectKeyboardButtonTypeRequestPhoneNumber (struct TdKeyboardButtonTypeRequestPhoneNumber *var);
void TdStackStorerKeyboardButtonTypeRequestPhoneNumber (struct TdKeyboardButtonTypeRequestPhoneNumber *var, struct TdStackStorerMethods *M);
struct TdKeyboardButtonTypeRequestPhoneNumber *TdStackFetcherKeyboardButtonTypeRequestPhoneNumber (struct TdStackFetcherMethods *M);
struct TdKeyboardButtonTypeRequestLocation {
  int ID;
  int refcnt;
};
struct TdKeyboardButtonTypeRequestLocation *TdCreateObjectKeyboardButtonTypeRequestLocation (void);
char *TdSerializeKeyboardButtonTypeRequestLocation (struct TdKeyboardButtonTypeRequestLocation *var);
void TdDestroyObjectKeyboardButtonTypeRequestLocation (struct TdKeyboardButtonTypeRequestLocation *var);
void TdStackStorerKeyboardButtonTypeRequestLocation (struct TdKeyboardButtonTypeRequestLocation *var, struct TdStackStorerMethods *M);
struct TdKeyboardButtonTypeRequestLocation *TdStackFetcherKeyboardButtonTypeRequestLocation (struct TdStackFetcherMethods *M);
struct TdLabeledPricePart {
  int ID;
  int refcnt;
  char *label_;
  long long amount_;
};
struct TdLabeledPricePart *TdCreateObjectLabeledPricePart (char *label_, long long amount_);
char *TdSerializeLabeledPricePart (struct TdLabeledPricePart *var);
void TdDestroyObjectLabeledPricePart (struct TdLabeledPricePart *var);
void TdStackStorerLabeledPricePart (struct TdLabeledPricePart *var, struct TdStackStorerMethods *M);
struct TdLabeledPricePart *TdStackFetcherLabeledPricePart (struct TdStackFetcherMethods *M);
struct TdLanguagePackInfo {
  int ID;
  int refcnt;
  char *id_;
  char *name_;
  char *native_name_;
  int local_string_count_;
};
struct TdLanguagePackInfo *TdCreateObjectLanguagePackInfo (char *id_, char *name_, char *native_name_, int local_string_count_);
char *TdSerializeLanguagePackInfo (struct TdLanguagePackInfo *var);
void TdDestroyObjectLanguagePackInfo (struct TdLanguagePackInfo *var);
void TdStackStorerLanguagePackInfo (struct TdLanguagePackInfo *var, struct TdStackStorerMethods *M);
struct TdLanguagePackInfo *TdStackFetcherLanguagePackInfo (struct TdStackFetcherMethods *M);
struct TdLanguagePackString {
  int ID;
  int refcnt;
  char *key_;
  struct TdLanguagePackStringValue *value_;
};
struct TdLanguagePackString *TdCreateObjectLanguagePackString (char *key_, struct TdLanguagePackStringValue *value_);
char *TdSerializeLanguagePackString (struct TdLanguagePackString *var);
void TdDestroyObjectLanguagePackString (struct TdLanguagePackString *var);
void TdStackStorerLanguagePackString (struct TdLanguagePackString *var, struct TdStackStorerMethods *M);
struct TdLanguagePackString *TdStackFetcherLanguagePackString (struct TdStackFetcherMethods *M);
struct TdLanguagePackStringValue {
  int ID;
  int refcnt;
};
char *TdSerializeLanguagePackStringValue (struct TdLanguagePackStringValue *var);
void TdDestroyObjectLanguagePackStringValue (struct TdLanguagePackStringValue *var);
void TdStackStorerLanguagePackStringValue (struct TdLanguagePackStringValue *var, struct TdStackStorerMethods *M);
struct TdLanguagePackStringValue *TdStackFetcherLanguagePackStringValue (struct TdStackFetcherMethods *M);
enum List_LanguagePackStringValue {
  CODE_LanguagePackStringValueOrdinary = -249256352,
  CODE_LanguagePackStringValuePluralized = 1906840261,
  CODE_LanguagePackStringValueDeleted = 1834792698,
};
struct TdLanguagePackStringValueOrdinary {
  int ID;
  int refcnt;
  char *value_;
};
struct TdLanguagePackStringValueOrdinary *TdCreateObjectLanguagePackStringValueOrdinary (char *value_);
char *TdSerializeLanguagePackStringValueOrdinary (struct TdLanguagePackStringValueOrdinary *var);
void TdDestroyObjectLanguagePackStringValueOrdinary (struct TdLanguagePackStringValueOrdinary *var);
void TdStackStorerLanguagePackStringValueOrdinary (struct TdLanguagePackStringValueOrdinary *var, struct TdStackStorerMethods *M);
struct TdLanguagePackStringValueOrdinary *TdStackFetcherLanguagePackStringValueOrdinary (struct TdStackFetcherMethods *M);
struct TdLanguagePackStringValuePluralized {
  int ID;
  int refcnt;
  char *zero_value_;
  char *one_value_;
  char *two_value_;
  char *few_value_;
  char *many_value_;
  char *other_value_;
};
struct TdLanguagePackStringValuePluralized *TdCreateObjectLanguagePackStringValuePluralized (char *zero_value_, char *one_value_, char *two_value_, char *few_value_, char *many_value_, char *other_value_);
char *TdSerializeLanguagePackStringValuePluralized (struct TdLanguagePackStringValuePluralized *var);
void TdDestroyObjectLanguagePackStringValuePluralized (struct TdLanguagePackStringValuePluralized *var);
void TdStackStorerLanguagePackStringValuePluralized (struct TdLanguagePackStringValuePluralized *var, struct TdStackStorerMethods *M);
struct TdLanguagePackStringValuePluralized *TdStackFetcherLanguagePackStringValuePluralized (struct TdStackFetcherMethods *M);
struct TdLanguagePackStringValueDeleted {
  int ID;
  int refcnt;
};
struct TdLanguagePackStringValueDeleted *TdCreateObjectLanguagePackStringValueDeleted (void);
char *TdSerializeLanguagePackStringValueDeleted (struct TdLanguagePackStringValueDeleted *var);
void TdDestroyObjectLanguagePackStringValueDeleted (struct TdLanguagePackStringValueDeleted *var);
void TdStackStorerLanguagePackStringValueDeleted (struct TdLanguagePackStringValueDeleted *var, struct TdStackStorerMethods *M);
struct TdLanguagePackStringValueDeleted *TdStackFetcherLanguagePackStringValueDeleted (struct TdStackFetcherMethods *M);
struct TdLanguagePackStrings {
  int ID;
  int refcnt;
  struct TdVectorLanguagePackString *strings_;
};
struct TdLanguagePackStrings *TdCreateObjectLanguagePackStrings (struct TdVectorLanguagePackString *strings_);
char *TdSerializeLanguagePackStrings (struct TdLanguagePackStrings *var);
void TdDestroyObjectLanguagePackStrings (struct TdLanguagePackStrings *var);
void TdStackStorerLanguagePackStrings (struct TdLanguagePackStrings *var, struct TdStackStorerMethods *M);
struct TdLanguagePackStrings *TdStackFetcherLanguagePackStrings (struct TdStackFetcherMethods *M);
struct TdLinkState {
  int ID;
  int refcnt;
};
char *TdSerializeLinkState (struct TdLinkState *var);
void TdDestroyObjectLinkState (struct TdLinkState *var);
void TdStackStorerLinkState (struct TdLinkState *var, struct TdStackStorerMethods *M);
struct TdLinkState *TdStackFetcherLinkState (struct TdStackFetcherMethods *M);
enum List_LinkState {
  CODE_LinkStateNone = 951430287,
  CODE_LinkStateKnowsPhoneNumber = 380898199,
  CODE_LinkStateIsContact = -1000499465,
};
struct TdLinkStateNone {
  int ID;
  int refcnt;
};
struct TdLinkStateNone *TdCreateObjectLinkStateNone (void);
char *TdSerializeLinkStateNone (struct TdLinkStateNone *var);
void TdDestroyObjectLinkStateNone (struct TdLinkStateNone *var);
void TdStackStorerLinkStateNone (struct TdLinkStateNone *var, struct TdStackStorerMethods *M);
struct TdLinkStateNone *TdStackFetcherLinkStateNone (struct TdStackFetcherMethods *M);
struct TdLinkStateKnowsPhoneNumber {
  int ID;
  int refcnt;
};
struct TdLinkStateKnowsPhoneNumber *TdCreateObjectLinkStateKnowsPhoneNumber (void);
char *TdSerializeLinkStateKnowsPhoneNumber (struct TdLinkStateKnowsPhoneNumber *var);
void TdDestroyObjectLinkStateKnowsPhoneNumber (struct TdLinkStateKnowsPhoneNumber *var);
void TdStackStorerLinkStateKnowsPhoneNumber (struct TdLinkStateKnowsPhoneNumber *var, struct TdStackStorerMethods *M);
struct TdLinkStateKnowsPhoneNumber *TdStackFetcherLinkStateKnowsPhoneNumber (struct TdStackFetcherMethods *M);
struct TdLinkStateIsContact {
  int ID;
  int refcnt;
};
struct TdLinkStateIsContact *TdCreateObjectLinkStateIsContact (void);
char *TdSerializeLinkStateIsContact (struct TdLinkStateIsContact *var);
void TdDestroyObjectLinkStateIsContact (struct TdLinkStateIsContact *var);
void TdStackStorerLinkStateIsContact (struct TdLinkStateIsContact *var, struct TdStackStorerMethods *M);
struct TdLinkStateIsContact *TdStackFetcherLinkStateIsContact (struct TdStackFetcherMethods *M);
struct TdLocalFile {
  int ID;
  int refcnt;
  char *path_;
  int can_be_downloaded_;
  int can_be_deleted_;
  int is_downloading_active_;
  int is_downloading_completed_;
  int downloaded_prefix_size_;
  int downloaded_size_;
};
struct TdLocalFile *TdCreateObjectLocalFile (char *path_, int can_be_downloaded_, int can_be_deleted_, int is_downloading_active_, int is_downloading_completed_, int downloaded_prefix_size_, int downloaded_size_);
char *TdSerializeLocalFile (struct TdLocalFile *var);
void TdDestroyObjectLocalFile (struct TdLocalFile *var);
void TdStackStorerLocalFile (struct TdLocalFile *var, struct TdStackStorerMethods *M);
struct TdLocalFile *TdStackFetcherLocalFile (struct TdStackFetcherMethods *M);
struct TdLocalizationTargetInfo {
  int ID;
  int refcnt;
  struct TdVectorLanguagePackInfo *language_packs_;
};
struct TdLocalizationTargetInfo *TdCreateObjectLocalizationTargetInfo (struct TdVectorLanguagePackInfo *language_packs_);
char *TdSerializeLocalizationTargetInfo (struct TdLocalizationTargetInfo *var);
void TdDestroyObjectLocalizationTargetInfo (struct TdLocalizationTargetInfo *var);
void TdStackStorerLocalizationTargetInfo (struct TdLocalizationTargetInfo *var, struct TdStackStorerMethods *M);
struct TdLocalizationTargetInfo *TdStackFetcherLocalizationTargetInfo (struct TdStackFetcherMethods *M);
struct TdLocation {
  int ID;
  int refcnt;
  double latitude_;
  double longitude_;
};
struct TdLocation *TdCreateObjectLocation (double latitude_, double longitude_);
char *TdSerializeLocation (struct TdLocation *var);
void TdDestroyObjectLocation (struct TdLocation *var);
void TdStackStorerLocation (struct TdLocation *var, struct TdStackStorerMethods *M);
struct TdLocation *TdStackFetcherLocation (struct TdStackFetcherMethods *M);
struct TdMaskPoint {
  int ID;
  int refcnt;
};
char *TdSerializeMaskPoint (struct TdMaskPoint *var);
void TdDestroyObjectMaskPoint (struct TdMaskPoint *var);
void TdStackStorerMaskPoint (struct TdMaskPoint *var, struct TdStackStorerMethods *M);
struct TdMaskPoint *TdStackFetcherMaskPoint (struct TdStackFetcherMethods *M);
enum List_MaskPoint {
  CODE_MaskPointForehead = 1027512005,
  CODE_MaskPointEyes = 1748310861,
  CODE_MaskPointMouth = 411773406,
  CODE_MaskPointChin = 534995335,
};
struct TdMaskPointForehead {
  int ID;
  int refcnt;
};
struct TdMaskPointForehead *TdCreateObjectMaskPointForehead (void);
char *TdSerializeMaskPointForehead (struct TdMaskPointForehead *var);
void TdDestroyObjectMaskPointForehead (struct TdMaskPointForehead *var);
void TdStackStorerMaskPointForehead (struct TdMaskPointForehead *var, struct TdStackStorerMethods *M);
struct TdMaskPointForehead *TdStackFetcherMaskPointForehead (struct TdStackFetcherMethods *M);
struct TdMaskPointEyes {
  int ID;
  int refcnt;
};
struct TdMaskPointEyes *TdCreateObjectMaskPointEyes (void);
char *TdSerializeMaskPointEyes (struct TdMaskPointEyes *var);
void TdDestroyObjectMaskPointEyes (struct TdMaskPointEyes *var);
void TdStackStorerMaskPointEyes (struct TdMaskPointEyes *var, struct TdStackStorerMethods *M);
struct TdMaskPointEyes *TdStackFetcherMaskPointEyes (struct TdStackFetcherMethods *M);
struct TdMaskPointMouth {
  int ID;
  int refcnt;
};
struct TdMaskPointMouth *TdCreateObjectMaskPointMouth (void);
char *TdSerializeMaskPointMouth (struct TdMaskPointMouth *var);
void TdDestroyObjectMaskPointMouth (struct TdMaskPointMouth *var);
void TdStackStorerMaskPointMouth (struct TdMaskPointMouth *var, struct TdStackStorerMethods *M);
struct TdMaskPointMouth *TdStackFetcherMaskPointMouth (struct TdStackFetcherMethods *M);
struct TdMaskPointChin {
  int ID;
  int refcnt;
};
struct TdMaskPointChin *TdCreateObjectMaskPointChin (void);
char *TdSerializeMaskPointChin (struct TdMaskPointChin *var);
void TdDestroyObjectMaskPointChin (struct TdMaskPointChin *var);
void TdStackStorerMaskPointChin (struct TdMaskPointChin *var, struct TdStackStorerMethods *M);
struct TdMaskPointChin *TdStackFetcherMaskPointChin (struct TdStackFetcherMethods *M);
struct TdMaskPosition {
  int ID;
  int refcnt;
  struct TdMaskPoint *point_;
  double x_shift_;
  double y_shift_;
  double scale_;
};
struct TdMaskPosition *TdCreateObjectMaskPosition (struct TdMaskPoint *point_, double x_shift_, double y_shift_, double scale_);
char *TdSerializeMaskPosition (struct TdMaskPosition *var);
void TdDestroyObjectMaskPosition (struct TdMaskPosition *var);
void TdStackStorerMaskPosition (struct TdMaskPosition *var, struct TdStackStorerMethods *M);
struct TdMaskPosition *TdStackFetcherMaskPosition (struct TdStackFetcherMethods *M);
struct TdMessage {
  int ID;
  int refcnt;
  long long id_;
  int sender_user_id_;
  long long chat_id_;
  struct TdMessageSendingState *sending_state_;
  int is_outgoing_;
  int can_be_edited_;
  int can_be_forwarded_;
  int can_be_deleted_only_for_self_;
  int can_be_deleted_for_all_users_;
  int is_channel_post_;
  int contains_unread_mention_;
  int date_;
  int edit_date_;
  struct TdMessageForwardInfo *forward_info_;
  long long reply_to_message_id_;
  int ttl_;
  double ttl_expires_in_;
  int via_bot_user_id_;
  char *author_signature_;
  int views_;
  long long media_album_id_;
  struct TdMessageContent *content_;
  struct TdReplyMarkup *reply_markup_;
};
struct TdMessage *TdCreateObjectMessage (long long id_, int sender_user_id_, long long chat_id_, struct TdMessageSendingState *sending_state_, int is_outgoing_, int can_be_edited_, int can_be_forwarded_, int can_be_deleted_only_for_self_, int can_be_deleted_for_all_users_, int is_channel_post_, int contains_unread_mention_, int date_, int edit_date_, struct TdMessageForwardInfo *forward_info_, long long reply_to_message_id_, int ttl_, double ttl_expires_in_, int via_bot_user_id_, char *author_signature_, int views_, long long media_album_id_, struct TdMessageContent *content_, struct TdReplyMarkup *reply_markup_);
char *TdSerializeMessage (struct TdMessage *var);
void TdDestroyObjectMessage (struct TdMessage *var);
void TdStackStorerMessage (struct TdMessage *var, struct TdStackStorerMethods *M);
struct TdMessage *TdStackFetcherMessage (struct TdStackFetcherMethods *M);
struct TdMessageContent {
  int ID;
  int refcnt;
};
char *TdSerializeMessageContent (struct TdMessageContent *var);
void TdDestroyObjectMessageContent (struct TdMessageContent *var);
void TdStackStorerMessageContent (struct TdMessageContent *var, struct TdStackStorerMethods *M);
struct TdMessageContent *TdStackFetcherMessageContent (struct TdStackFetcherMethods *M);
enum List_MessageContent {
  CODE_MessageText = 1989037971,
  CODE_MessageAnimation = 1306939396,
  CODE_MessageAudio = 276722716,
  CODE_MessageDocument = 596945783,
  CODE_MessagePhoto = -1851395174,
  CODE_MessageExpiredPhoto = -1404641801,
  CODE_MessageSticker = 1779022878,
  CODE_MessageVideo = 2021281344,
  CODE_MessageExpiredVideo = -1212209981,
  CODE_MessageVideoNote = 963323014,
  CODE_MessageVoiceNote = 527777781,
  CODE_MessageLocation = -1301887786,
  CODE_MessageVenue = -2146492043,
  CODE_MessageContact = -512684966,
  CODE_MessageGame = -69441162,
  CODE_MessageInvoice = -1916671476,
  CODE_MessageCall = 366512596,
  CODE_MessageBasicGroupChatCreate = 1575377646,
  CODE_MessageSupergroupChatCreate = -434325733,
  CODE_MessageChatChangeTitle = 748272449,
  CODE_MessageChatChangePhoto = 319630249,
  CODE_MessageChatDeletePhoto = -184374809,
  CODE_MessageChatAddMembers = 401228326,
  CODE_MessageChatJoinByLink = 1846493311,
  CODE_MessageChatDeleteMember = 1164414043,
  CODE_MessageChatUpgradeTo = 1957816681,
  CODE_MessageChatUpgradeFrom = 1642272558,
  CODE_MessagePinMessage = 953503801,
  CODE_MessageScreenshotTaken = -1564971605,
  CODE_MessageChatSetTtl = 1810060209,
  CODE_MessageCustomServiceAction = 1435879282,
  CODE_MessageGameScore = 1344904575,
  CODE_MessagePaymentSuccessful = -595962993,
  CODE_MessagePaymentSuccessfulBot = -412310696,
  CODE_MessageContactRegistered = -1502020353,
  CODE_MessageWebsiteConnected = -1074551800,
  CODE_MessagePassportDataSent = 1017405171,
  CODE_MessagePassportDataReceived = -1367863624,
  CODE_MessageUnsupported = -1816726139,
};
struct TdMessageText {
  int ID;
  int refcnt;
  struct TdFormattedText *text_;
  struct TdWebPage *web_page_;
};
struct TdMessageText *TdCreateObjectMessageText (struct TdFormattedText *text_, struct TdWebPage *web_page_);
char *TdSerializeMessageText (struct TdMessageText *var);
void TdDestroyObjectMessageText (struct TdMessageText *var);
void TdStackStorerMessageText (struct TdMessageText *var, struct TdStackStorerMethods *M);
struct TdMessageText *TdStackFetcherMessageText (struct TdStackFetcherMethods *M);
struct TdMessageAnimation {
  int ID;
  int refcnt;
  struct TdAnimation *animation_;
  struct TdFormattedText *caption_;
  int is_secret_;
};
struct TdMessageAnimation *TdCreateObjectMessageAnimation (struct TdAnimation *animation_, struct TdFormattedText *caption_, int is_secret_);
char *TdSerializeMessageAnimation (struct TdMessageAnimation *var);
void TdDestroyObjectMessageAnimation (struct TdMessageAnimation *var);
void TdStackStorerMessageAnimation (struct TdMessageAnimation *var, struct TdStackStorerMethods *M);
struct TdMessageAnimation *TdStackFetcherMessageAnimation (struct TdStackFetcherMethods *M);
struct TdMessageAudio {
  int ID;
  int refcnt;
  struct TdAudio *audio_;
  struct TdFormattedText *caption_;
};
struct TdMessageAudio *TdCreateObjectMessageAudio (struct TdAudio *audio_, struct TdFormattedText *caption_);
char *TdSerializeMessageAudio (struct TdMessageAudio *var);
void TdDestroyObjectMessageAudio (struct TdMessageAudio *var);
void TdStackStorerMessageAudio (struct TdMessageAudio *var, struct TdStackStorerMethods *M);
struct TdMessageAudio *TdStackFetcherMessageAudio (struct TdStackFetcherMethods *M);
struct TdMessageDocument {
  int ID;
  int refcnt;
  struct TdDocument *document_;
  struct TdFormattedText *caption_;
};
struct TdMessageDocument *TdCreateObjectMessageDocument (struct TdDocument *document_, struct TdFormattedText *caption_);
char *TdSerializeMessageDocument (struct TdMessageDocument *var);
void TdDestroyObjectMessageDocument (struct TdMessageDocument *var);
void TdStackStorerMessageDocument (struct TdMessageDocument *var, struct TdStackStorerMethods *M);
struct TdMessageDocument *TdStackFetcherMessageDocument (struct TdStackFetcherMethods *M);
struct TdMessagePhoto {
  int ID;
  int refcnt;
  struct TdPhoto *photo_;
  struct TdFormattedText *caption_;
  int is_secret_;
};
struct TdMessagePhoto *TdCreateObjectMessagePhoto (struct TdPhoto *photo_, struct TdFormattedText *caption_, int is_secret_);
char *TdSerializeMessagePhoto (struct TdMessagePhoto *var);
void TdDestroyObjectMessagePhoto (struct TdMessagePhoto *var);
void TdStackStorerMessagePhoto (struct TdMessagePhoto *var, struct TdStackStorerMethods *M);
struct TdMessagePhoto *TdStackFetcherMessagePhoto (struct TdStackFetcherMethods *M);
struct TdMessageExpiredPhoto {
  int ID;
  int refcnt;
};
struct TdMessageExpiredPhoto *TdCreateObjectMessageExpiredPhoto (void);
char *TdSerializeMessageExpiredPhoto (struct TdMessageExpiredPhoto *var);
void TdDestroyObjectMessageExpiredPhoto (struct TdMessageExpiredPhoto *var);
void TdStackStorerMessageExpiredPhoto (struct TdMessageExpiredPhoto *var, struct TdStackStorerMethods *M);
struct TdMessageExpiredPhoto *TdStackFetcherMessageExpiredPhoto (struct TdStackFetcherMethods *M);
struct TdMessageSticker {
  int ID;
  int refcnt;
  struct TdSticker *sticker_;
};
struct TdMessageSticker *TdCreateObjectMessageSticker (struct TdSticker *sticker_);
char *TdSerializeMessageSticker (struct TdMessageSticker *var);
void TdDestroyObjectMessageSticker (struct TdMessageSticker *var);
void TdStackStorerMessageSticker (struct TdMessageSticker *var, struct TdStackStorerMethods *M);
struct TdMessageSticker *TdStackFetcherMessageSticker (struct TdStackFetcherMethods *M);
struct TdMessageVideo {
  int ID;
  int refcnt;
  struct TdVideo *video_;
  struct TdFormattedText *caption_;
  int is_secret_;
};
struct TdMessageVideo *TdCreateObjectMessageVideo (struct TdVideo *video_, struct TdFormattedText *caption_, int is_secret_);
char *TdSerializeMessageVideo (struct TdMessageVideo *var);
void TdDestroyObjectMessageVideo (struct TdMessageVideo *var);
void TdStackStorerMessageVideo (struct TdMessageVideo *var, struct TdStackStorerMethods *M);
struct TdMessageVideo *TdStackFetcherMessageVideo (struct TdStackFetcherMethods *M);
struct TdMessageExpiredVideo {
  int ID;
  int refcnt;
};
struct TdMessageExpiredVideo *TdCreateObjectMessageExpiredVideo (void);
char *TdSerializeMessageExpiredVideo (struct TdMessageExpiredVideo *var);
void TdDestroyObjectMessageExpiredVideo (struct TdMessageExpiredVideo *var);
void TdStackStorerMessageExpiredVideo (struct TdMessageExpiredVideo *var, struct TdStackStorerMethods *M);
struct TdMessageExpiredVideo *TdStackFetcherMessageExpiredVideo (struct TdStackFetcherMethods *M);
struct TdMessageVideoNote {
  int ID;
  int refcnt;
  struct TdVideoNote *video_note_;
  int is_viewed_;
  int is_secret_;
};
struct TdMessageVideoNote *TdCreateObjectMessageVideoNote (struct TdVideoNote *video_note_, int is_viewed_, int is_secret_);
char *TdSerializeMessageVideoNote (struct TdMessageVideoNote *var);
void TdDestroyObjectMessageVideoNote (struct TdMessageVideoNote *var);
void TdStackStorerMessageVideoNote (struct TdMessageVideoNote *var, struct TdStackStorerMethods *M);
struct TdMessageVideoNote *TdStackFetcherMessageVideoNote (struct TdStackFetcherMethods *M);
struct TdMessageVoiceNote {
  int ID;
  int refcnt;
  struct TdVoiceNote *voice_note_;
  struct TdFormattedText *caption_;
  int is_listened_;
};
struct TdMessageVoiceNote *TdCreateObjectMessageVoiceNote (struct TdVoiceNote *voice_note_, struct TdFormattedText *caption_, int is_listened_);
char *TdSerializeMessageVoiceNote (struct TdMessageVoiceNote *var);
void TdDestroyObjectMessageVoiceNote (struct TdMessageVoiceNote *var);
void TdStackStorerMessageVoiceNote (struct TdMessageVoiceNote *var, struct TdStackStorerMethods *M);
struct TdMessageVoiceNote *TdStackFetcherMessageVoiceNote (struct TdStackFetcherMethods *M);
struct TdMessageLocation {
  int ID;
  int refcnt;
  struct TdLocation *location_;
  int live_period_;
  int expires_in_;
};
struct TdMessageLocation *TdCreateObjectMessageLocation (struct TdLocation *location_, int live_period_, int expires_in_);
char *TdSerializeMessageLocation (struct TdMessageLocation *var);
void TdDestroyObjectMessageLocation (struct TdMessageLocation *var);
void TdStackStorerMessageLocation (struct TdMessageLocation *var, struct TdStackStorerMethods *M);
struct TdMessageLocation *TdStackFetcherMessageLocation (struct TdStackFetcherMethods *M);
struct TdMessageVenue {
  int ID;
  int refcnt;
  struct TdVenue *venue_;
};
struct TdMessageVenue *TdCreateObjectMessageVenue (struct TdVenue *venue_);
char *TdSerializeMessageVenue (struct TdMessageVenue *var);
void TdDestroyObjectMessageVenue (struct TdMessageVenue *var);
void TdStackStorerMessageVenue (struct TdMessageVenue *var, struct TdStackStorerMethods *M);
struct TdMessageVenue *TdStackFetcherMessageVenue (struct TdStackFetcherMethods *M);
struct TdMessageContact {
  int ID;
  int refcnt;
  struct TdContact *contact_;
};
struct TdMessageContact *TdCreateObjectMessageContact (struct TdContact *contact_);
char *TdSerializeMessageContact (struct TdMessageContact *var);
void TdDestroyObjectMessageContact (struct TdMessageContact *var);
void TdStackStorerMessageContact (struct TdMessageContact *var, struct TdStackStorerMethods *M);
struct TdMessageContact *TdStackFetcherMessageContact (struct TdStackFetcherMethods *M);
struct TdMessageGame {
  int ID;
  int refcnt;
  struct TdGame *game_;
};
struct TdMessageGame *TdCreateObjectMessageGame (struct TdGame *game_);
char *TdSerializeMessageGame (struct TdMessageGame *var);
void TdDestroyObjectMessageGame (struct TdMessageGame *var);
void TdStackStorerMessageGame (struct TdMessageGame *var, struct TdStackStorerMethods *M);
struct TdMessageGame *TdStackFetcherMessageGame (struct TdStackFetcherMethods *M);
struct TdMessageInvoice {
  int ID;
  int refcnt;
  char *title_;
  char *description_;
  struct TdPhoto *photo_;
  char *currency_;
  long long total_amount_;
  char *start_parameter_;
  int is_test_;
  int need_shipping_address_;
  long long receipt_message_id_;
};
struct TdMessageInvoice *TdCreateObjectMessageInvoice (char *title_, char *description_, struct TdPhoto *photo_, char *currency_, long long total_amount_, char *start_parameter_, int is_test_, int need_shipping_address_, long long receipt_message_id_);
char *TdSerializeMessageInvoice (struct TdMessageInvoice *var);
void TdDestroyObjectMessageInvoice (struct TdMessageInvoice *var);
void TdStackStorerMessageInvoice (struct TdMessageInvoice *var, struct TdStackStorerMethods *M);
struct TdMessageInvoice *TdStackFetcherMessageInvoice (struct TdStackFetcherMethods *M);
struct TdMessageCall {
  int ID;
  int refcnt;
  struct TdCallDiscardReason *discard_reason_;
  int duration_;
};
struct TdMessageCall *TdCreateObjectMessageCall (struct TdCallDiscardReason *discard_reason_, int duration_);
char *TdSerializeMessageCall (struct TdMessageCall *var);
void TdDestroyObjectMessageCall (struct TdMessageCall *var);
void TdStackStorerMessageCall (struct TdMessageCall *var, struct TdStackStorerMethods *M);
struct TdMessageCall *TdStackFetcherMessageCall (struct TdStackFetcherMethods *M);
struct TdMessageBasicGroupChatCreate {
  int ID;
  int refcnt;
  char *title_;
  struct TdVectorInt *member_user_ids_;
};
struct TdMessageBasicGroupChatCreate *TdCreateObjectMessageBasicGroupChatCreate (char *title_, struct TdVectorInt *member_user_ids_);
char *TdSerializeMessageBasicGroupChatCreate (struct TdMessageBasicGroupChatCreate *var);
void TdDestroyObjectMessageBasicGroupChatCreate (struct TdMessageBasicGroupChatCreate *var);
void TdStackStorerMessageBasicGroupChatCreate (struct TdMessageBasicGroupChatCreate *var, struct TdStackStorerMethods *M);
struct TdMessageBasicGroupChatCreate *TdStackFetcherMessageBasicGroupChatCreate (struct TdStackFetcherMethods *M);
struct TdMessageSupergroupChatCreate {
  int ID;
  int refcnt;
  char *title_;
};
struct TdMessageSupergroupChatCreate *TdCreateObjectMessageSupergroupChatCreate (char *title_);
char *TdSerializeMessageSupergroupChatCreate (struct TdMessageSupergroupChatCreate *var);
void TdDestroyObjectMessageSupergroupChatCreate (struct TdMessageSupergroupChatCreate *var);
void TdStackStorerMessageSupergroupChatCreate (struct TdMessageSupergroupChatCreate *var, struct TdStackStorerMethods *M);
struct TdMessageSupergroupChatCreate *TdStackFetcherMessageSupergroupChatCreate (struct TdStackFetcherMethods *M);
struct TdMessageChatChangeTitle {
  int ID;
  int refcnt;
  char *title_;
};
struct TdMessageChatChangeTitle *TdCreateObjectMessageChatChangeTitle (char *title_);
char *TdSerializeMessageChatChangeTitle (struct TdMessageChatChangeTitle *var);
void TdDestroyObjectMessageChatChangeTitle (struct TdMessageChatChangeTitle *var);
void TdStackStorerMessageChatChangeTitle (struct TdMessageChatChangeTitle *var, struct TdStackStorerMethods *M);
struct TdMessageChatChangeTitle *TdStackFetcherMessageChatChangeTitle (struct TdStackFetcherMethods *M);
struct TdMessageChatChangePhoto {
  int ID;
  int refcnt;
  struct TdPhoto *photo_;
};
struct TdMessageChatChangePhoto *TdCreateObjectMessageChatChangePhoto (struct TdPhoto *photo_);
char *TdSerializeMessageChatChangePhoto (struct TdMessageChatChangePhoto *var);
void TdDestroyObjectMessageChatChangePhoto (struct TdMessageChatChangePhoto *var);
void TdStackStorerMessageChatChangePhoto (struct TdMessageChatChangePhoto *var, struct TdStackStorerMethods *M);
struct TdMessageChatChangePhoto *TdStackFetcherMessageChatChangePhoto (struct TdStackFetcherMethods *M);
struct TdMessageChatDeletePhoto {
  int ID;
  int refcnt;
};
struct TdMessageChatDeletePhoto *TdCreateObjectMessageChatDeletePhoto (void);
char *TdSerializeMessageChatDeletePhoto (struct TdMessageChatDeletePhoto *var);
void TdDestroyObjectMessageChatDeletePhoto (struct TdMessageChatDeletePhoto *var);
void TdStackStorerMessageChatDeletePhoto (struct TdMessageChatDeletePhoto *var, struct TdStackStorerMethods *M);
struct TdMessageChatDeletePhoto *TdStackFetcherMessageChatDeletePhoto (struct TdStackFetcherMethods *M);
struct TdMessageChatAddMembers {
  int ID;
  int refcnt;
  struct TdVectorInt *member_user_ids_;
};
struct TdMessageChatAddMembers *TdCreateObjectMessageChatAddMembers (struct TdVectorInt *member_user_ids_);
char *TdSerializeMessageChatAddMembers (struct TdMessageChatAddMembers *var);
void TdDestroyObjectMessageChatAddMembers (struct TdMessageChatAddMembers *var);
void TdStackStorerMessageChatAddMembers (struct TdMessageChatAddMembers *var, struct TdStackStorerMethods *M);
struct TdMessageChatAddMembers *TdStackFetcherMessageChatAddMembers (struct TdStackFetcherMethods *M);
struct TdMessageChatJoinByLink {
  int ID;
  int refcnt;
};
struct TdMessageChatJoinByLink *TdCreateObjectMessageChatJoinByLink (void);
char *TdSerializeMessageChatJoinByLink (struct TdMessageChatJoinByLink *var);
void TdDestroyObjectMessageChatJoinByLink (struct TdMessageChatJoinByLink *var);
void TdStackStorerMessageChatJoinByLink (struct TdMessageChatJoinByLink *var, struct TdStackStorerMethods *M);
struct TdMessageChatJoinByLink *TdStackFetcherMessageChatJoinByLink (struct TdStackFetcherMethods *M);
struct TdMessageChatDeleteMember {
  int ID;
  int refcnt;
  int user_id_;
};
struct TdMessageChatDeleteMember *TdCreateObjectMessageChatDeleteMember (int user_id_);
char *TdSerializeMessageChatDeleteMember (struct TdMessageChatDeleteMember *var);
void TdDestroyObjectMessageChatDeleteMember (struct TdMessageChatDeleteMember *var);
void TdStackStorerMessageChatDeleteMember (struct TdMessageChatDeleteMember *var, struct TdStackStorerMethods *M);
struct TdMessageChatDeleteMember *TdStackFetcherMessageChatDeleteMember (struct TdStackFetcherMethods *M);
struct TdMessageChatUpgradeTo {
  int ID;
  int refcnt;
  int supergroup_id_;
};
struct TdMessageChatUpgradeTo *TdCreateObjectMessageChatUpgradeTo (int supergroup_id_);
char *TdSerializeMessageChatUpgradeTo (struct TdMessageChatUpgradeTo *var);
void TdDestroyObjectMessageChatUpgradeTo (struct TdMessageChatUpgradeTo *var);
void TdStackStorerMessageChatUpgradeTo (struct TdMessageChatUpgradeTo *var, struct TdStackStorerMethods *M);
struct TdMessageChatUpgradeTo *TdStackFetcherMessageChatUpgradeTo (struct TdStackFetcherMethods *M);
struct TdMessageChatUpgradeFrom {
  int ID;
  int refcnt;
  char *title_;
  int basic_group_id_;
};
struct TdMessageChatUpgradeFrom *TdCreateObjectMessageChatUpgradeFrom (char *title_, int basic_group_id_);
char *TdSerializeMessageChatUpgradeFrom (struct TdMessageChatUpgradeFrom *var);
void TdDestroyObjectMessageChatUpgradeFrom (struct TdMessageChatUpgradeFrom *var);
void TdStackStorerMessageChatUpgradeFrom (struct TdMessageChatUpgradeFrom *var, struct TdStackStorerMethods *M);
struct TdMessageChatUpgradeFrom *TdStackFetcherMessageChatUpgradeFrom (struct TdStackFetcherMethods *M);
struct TdMessagePinMessage {
  int ID;
  int refcnt;
  long long message_id_;
};
struct TdMessagePinMessage *TdCreateObjectMessagePinMessage (long long message_id_);
char *TdSerializeMessagePinMessage (struct TdMessagePinMessage *var);
void TdDestroyObjectMessagePinMessage (struct TdMessagePinMessage *var);
void TdStackStorerMessagePinMessage (struct TdMessagePinMessage *var, struct TdStackStorerMethods *M);
struct TdMessagePinMessage *TdStackFetcherMessagePinMessage (struct TdStackFetcherMethods *M);
struct TdMessageScreenshotTaken {
  int ID;
  int refcnt;
};
struct TdMessageScreenshotTaken *TdCreateObjectMessageScreenshotTaken (void);
char *TdSerializeMessageScreenshotTaken (struct TdMessageScreenshotTaken *var);
void TdDestroyObjectMessageScreenshotTaken (struct TdMessageScreenshotTaken *var);
void TdStackStorerMessageScreenshotTaken (struct TdMessageScreenshotTaken *var, struct TdStackStorerMethods *M);
struct TdMessageScreenshotTaken *TdStackFetcherMessageScreenshotTaken (struct TdStackFetcherMethods *M);
struct TdMessageChatSetTtl {
  int ID;
  int refcnt;
  int ttl_;
};
struct TdMessageChatSetTtl *TdCreateObjectMessageChatSetTtl (int ttl_);
char *TdSerializeMessageChatSetTtl (struct TdMessageChatSetTtl *var);
void TdDestroyObjectMessageChatSetTtl (struct TdMessageChatSetTtl *var);
void TdStackStorerMessageChatSetTtl (struct TdMessageChatSetTtl *var, struct TdStackStorerMethods *M);
struct TdMessageChatSetTtl *TdStackFetcherMessageChatSetTtl (struct TdStackFetcherMethods *M);
struct TdMessageCustomServiceAction {
  int ID;
  int refcnt;
  char *text_;
};
struct TdMessageCustomServiceAction *TdCreateObjectMessageCustomServiceAction (char *text_);
char *TdSerializeMessageCustomServiceAction (struct TdMessageCustomServiceAction *var);
void TdDestroyObjectMessageCustomServiceAction (struct TdMessageCustomServiceAction *var);
void TdStackStorerMessageCustomServiceAction (struct TdMessageCustomServiceAction *var, struct TdStackStorerMethods *M);
struct TdMessageCustomServiceAction *TdStackFetcherMessageCustomServiceAction (struct TdStackFetcherMethods *M);
struct TdMessageGameScore {
  int ID;
  int refcnt;
  long long game_message_id_;
  long long game_id_;
  int score_;
};
struct TdMessageGameScore *TdCreateObjectMessageGameScore (long long game_message_id_, long long game_id_, int score_);
char *TdSerializeMessageGameScore (struct TdMessageGameScore *var);
void TdDestroyObjectMessageGameScore (struct TdMessageGameScore *var);
void TdStackStorerMessageGameScore (struct TdMessageGameScore *var, struct TdStackStorerMethods *M);
struct TdMessageGameScore *TdStackFetcherMessageGameScore (struct TdStackFetcherMethods *M);
struct TdMessagePaymentSuccessful {
  int ID;
  int refcnt;
  long long invoice_message_id_;
  char *currency_;
  long long total_amount_;
};
struct TdMessagePaymentSuccessful *TdCreateObjectMessagePaymentSuccessful (long long invoice_message_id_, char *currency_, long long total_amount_);
char *TdSerializeMessagePaymentSuccessful (struct TdMessagePaymentSuccessful *var);
void TdDestroyObjectMessagePaymentSuccessful (struct TdMessagePaymentSuccessful *var);
void TdStackStorerMessagePaymentSuccessful (struct TdMessagePaymentSuccessful *var, struct TdStackStorerMethods *M);
struct TdMessagePaymentSuccessful *TdStackFetcherMessagePaymentSuccessful (struct TdStackFetcherMethods *M);
struct TdMessagePaymentSuccessfulBot {
  int ID;
  int refcnt;
  long long invoice_message_id_;
  char *currency_;
  long long total_amount_;
  struct TdBytes invoice_payload_;
  char *shipping_option_id_;
  struct TdOrderInfo *order_info_;
  char *telegram_payment_charge_id_;
  char *provider_payment_charge_id_;
};
struct TdMessagePaymentSuccessfulBot *TdCreateObjectMessagePaymentSuccessfulBot (long long invoice_message_id_, char *currency_, long long total_amount_, struct TdBytes invoice_payload_, char *shipping_option_id_, struct TdOrderInfo *order_info_, char *telegram_payment_charge_id_, char *provider_payment_charge_id_);
char *TdSerializeMessagePaymentSuccessfulBot (struct TdMessagePaymentSuccessfulBot *var);
void TdDestroyObjectMessagePaymentSuccessfulBot (struct TdMessagePaymentSuccessfulBot *var);
void TdStackStorerMessagePaymentSuccessfulBot (struct TdMessagePaymentSuccessfulBot *var, struct TdStackStorerMethods *M);
struct TdMessagePaymentSuccessfulBot *TdStackFetcherMessagePaymentSuccessfulBot (struct TdStackFetcherMethods *M);
struct TdMessageContactRegistered {
  int ID;
  int refcnt;
};
struct TdMessageContactRegistered *TdCreateObjectMessageContactRegistered (void);
char *TdSerializeMessageContactRegistered (struct TdMessageContactRegistered *var);
void TdDestroyObjectMessageContactRegistered (struct TdMessageContactRegistered *var);
void TdStackStorerMessageContactRegistered (struct TdMessageContactRegistered *var, struct TdStackStorerMethods *M);
struct TdMessageContactRegistered *TdStackFetcherMessageContactRegistered (struct TdStackFetcherMethods *M);
struct TdMessageWebsiteConnected {
  int ID;
  int refcnt;
  char *domain_name_;
};
struct TdMessageWebsiteConnected *TdCreateObjectMessageWebsiteConnected (char *domain_name_);
char *TdSerializeMessageWebsiteConnected (struct TdMessageWebsiteConnected *var);
void TdDestroyObjectMessageWebsiteConnected (struct TdMessageWebsiteConnected *var);
void TdStackStorerMessageWebsiteConnected (struct TdMessageWebsiteConnected *var, struct TdStackStorerMethods *M);
struct TdMessageWebsiteConnected *TdStackFetcherMessageWebsiteConnected (struct TdStackFetcherMethods *M);
struct TdMessagePassportDataSent {
  int ID;
  int refcnt;
  struct TdVectorPassportElementType *types_;
};
struct TdMessagePassportDataSent *TdCreateObjectMessagePassportDataSent (struct TdVectorPassportElementType *types_);
char *TdSerializeMessagePassportDataSent (struct TdMessagePassportDataSent *var);
void TdDestroyObjectMessagePassportDataSent (struct TdMessagePassportDataSent *var);
void TdStackStorerMessagePassportDataSent (struct TdMessagePassportDataSent *var, struct TdStackStorerMethods *M);
struct TdMessagePassportDataSent *TdStackFetcherMessagePassportDataSent (struct TdStackFetcherMethods *M);
struct TdMessagePassportDataReceived {
  int ID;
  int refcnt;
  struct TdVectorEncryptedPassportElement *elements_;
  struct TdEncryptedCredentials *credentials_;
};
struct TdMessagePassportDataReceived *TdCreateObjectMessagePassportDataReceived (struct TdVectorEncryptedPassportElement *elements_, struct TdEncryptedCredentials *credentials_);
char *TdSerializeMessagePassportDataReceived (struct TdMessagePassportDataReceived *var);
void TdDestroyObjectMessagePassportDataReceived (struct TdMessagePassportDataReceived *var);
void TdStackStorerMessagePassportDataReceived (struct TdMessagePassportDataReceived *var, struct TdStackStorerMethods *M);
struct TdMessagePassportDataReceived *TdStackFetcherMessagePassportDataReceived (struct TdStackFetcherMethods *M);
struct TdMessageUnsupported {
  int ID;
  int refcnt;
};
struct TdMessageUnsupported *TdCreateObjectMessageUnsupported (void);
char *TdSerializeMessageUnsupported (struct TdMessageUnsupported *var);
void TdDestroyObjectMessageUnsupported (struct TdMessageUnsupported *var);
void TdStackStorerMessageUnsupported (struct TdMessageUnsupported *var, struct TdStackStorerMethods *M);
struct TdMessageUnsupported *TdStackFetcherMessageUnsupported (struct TdStackFetcherMethods *M);
struct TdMessageForwardInfo {
  int ID;
  int refcnt;
};
char *TdSerializeMessageForwardInfo (struct TdMessageForwardInfo *var);
void TdDestroyObjectMessageForwardInfo (struct TdMessageForwardInfo *var);
void TdStackStorerMessageForwardInfo (struct TdMessageForwardInfo *var, struct TdStackStorerMethods *M);
struct TdMessageForwardInfo *TdStackFetcherMessageForwardInfo (struct TdStackFetcherMethods *M);
enum List_MessageForwardInfo {
  CODE_MessageForwardedFromUser = 1004332765,
  CODE_MessageForwardedPost = -244050875,
};
struct TdMessageForwardedFromUser {
  int ID;
  int refcnt;
  int sender_user_id_;
  int date_;
  long long forwarded_from_chat_id_;
  long long forwarded_from_message_id_;
};
struct TdMessageForwardedFromUser *TdCreateObjectMessageForwardedFromUser (int sender_user_id_, int date_, long long forwarded_from_chat_id_, long long forwarded_from_message_id_);
char *TdSerializeMessageForwardedFromUser (struct TdMessageForwardedFromUser *var);
void TdDestroyObjectMessageForwardedFromUser (struct TdMessageForwardedFromUser *var);
void TdStackStorerMessageForwardedFromUser (struct TdMessageForwardedFromUser *var, struct TdStackStorerMethods *M);
struct TdMessageForwardedFromUser *TdStackFetcherMessageForwardedFromUser (struct TdStackFetcherMethods *M);
struct TdMessageForwardedPost {
  int ID;
  int refcnt;
  long long chat_id_;
  char *author_signature_;
  int date_;
  long long message_id_;
  long long forwarded_from_chat_id_;
  long long forwarded_from_message_id_;
};
struct TdMessageForwardedPost *TdCreateObjectMessageForwardedPost (long long chat_id_, char *author_signature_, int date_, long long message_id_, long long forwarded_from_chat_id_, long long forwarded_from_message_id_);
char *TdSerializeMessageForwardedPost (struct TdMessageForwardedPost *var);
void TdDestroyObjectMessageForwardedPost (struct TdMessageForwardedPost *var);
void TdStackStorerMessageForwardedPost (struct TdMessageForwardedPost *var, struct TdStackStorerMethods *M);
struct TdMessageForwardedPost *TdStackFetcherMessageForwardedPost (struct TdStackFetcherMethods *M);
struct TdMessageSendingState {
  int ID;
  int refcnt;
};
char *TdSerializeMessageSendingState (struct TdMessageSendingState *var);
void TdDestroyObjectMessageSendingState (struct TdMessageSendingState *var);
void TdStackStorerMessageSendingState (struct TdMessageSendingState *var, struct TdStackStorerMethods *M);
struct TdMessageSendingState *TdStackFetcherMessageSendingState (struct TdStackFetcherMethods *M);
enum List_MessageSendingState {
  CODE_MessageSendingStatePending = -1381803582,
  CODE_MessageSendingStateFailed = -546610323,
};
struct TdMessageSendingStatePending {
  int ID;
  int refcnt;
};
struct TdMessageSendingStatePending *TdCreateObjectMessageSendingStatePending (void);
char *TdSerializeMessageSendingStatePending (struct TdMessageSendingStatePending *var);
void TdDestroyObjectMessageSendingStatePending (struct TdMessageSendingStatePending *var);
void TdStackStorerMessageSendingStatePending (struct TdMessageSendingStatePending *var, struct TdStackStorerMethods *M);
struct TdMessageSendingStatePending *TdStackFetcherMessageSendingStatePending (struct TdStackFetcherMethods *M);
struct TdMessageSendingStateFailed {
  int ID;
  int refcnt;
};
struct TdMessageSendingStateFailed *TdCreateObjectMessageSendingStateFailed (void);
char *TdSerializeMessageSendingStateFailed (struct TdMessageSendingStateFailed *var);
void TdDestroyObjectMessageSendingStateFailed (struct TdMessageSendingStateFailed *var);
void TdStackStorerMessageSendingStateFailed (struct TdMessageSendingStateFailed *var, struct TdStackStorerMethods *M);
struct TdMessageSendingStateFailed *TdStackFetcherMessageSendingStateFailed (struct TdStackFetcherMethods *M);
struct TdMessages {
  int ID;
  int refcnt;
  int total_count_;
  struct TdVectorMessage *messages_;
};
struct TdMessages *TdCreateObjectMessages (int total_count_, struct TdVectorMessage *messages_);
char *TdSerializeMessages (struct TdMessages *var);
void TdDestroyObjectMessages (struct TdMessages *var);
void TdStackStorerMessages (struct TdMessages *var, struct TdStackStorerMethods *M);
struct TdMessages *TdStackFetcherMessages (struct TdStackFetcherMethods *M);
struct TdNetworkStatistics {
  int ID;
  int refcnt;
  int since_date_;
  struct TdVectorNetworkStatisticsEntry *entries_;
};
struct TdNetworkStatistics *TdCreateObjectNetworkStatistics (int since_date_, struct TdVectorNetworkStatisticsEntry *entries_);
char *TdSerializeNetworkStatistics (struct TdNetworkStatistics *var);
void TdDestroyObjectNetworkStatistics (struct TdNetworkStatistics *var);
void TdStackStorerNetworkStatistics (struct TdNetworkStatistics *var, struct TdStackStorerMethods *M);
struct TdNetworkStatistics *TdStackFetcherNetworkStatistics (struct TdStackFetcherMethods *M);
struct TdNetworkStatisticsEntry {
  int ID;
  int refcnt;
};
char *TdSerializeNetworkStatisticsEntry (struct TdNetworkStatisticsEntry *var);
void TdDestroyObjectNetworkStatisticsEntry (struct TdNetworkStatisticsEntry *var);
void TdStackStorerNetworkStatisticsEntry (struct TdNetworkStatisticsEntry *var, struct TdStackStorerMethods *M);
struct TdNetworkStatisticsEntry *TdStackFetcherNetworkStatisticsEntry (struct TdStackFetcherMethods *M);
enum List_NetworkStatisticsEntry {
  CODE_NetworkStatisticsEntryFile = 188452706,
  CODE_NetworkStatisticsEntryCall = 737000365,
};
struct TdNetworkStatisticsEntryFile {
  int ID;
  int refcnt;
  struct TdFileType *file_type_;
  struct TdNetworkType *network_type_;
  long long sent_bytes_;
  long long received_bytes_;
};
struct TdNetworkStatisticsEntryFile *TdCreateObjectNetworkStatisticsEntryFile (struct TdFileType *file_type_, struct TdNetworkType *network_type_, long long sent_bytes_, long long received_bytes_);
char *TdSerializeNetworkStatisticsEntryFile (struct TdNetworkStatisticsEntryFile *var);
void TdDestroyObjectNetworkStatisticsEntryFile (struct TdNetworkStatisticsEntryFile *var);
void TdStackStorerNetworkStatisticsEntryFile (struct TdNetworkStatisticsEntryFile *var, struct TdStackStorerMethods *M);
struct TdNetworkStatisticsEntryFile *TdStackFetcherNetworkStatisticsEntryFile (struct TdStackFetcherMethods *M);
struct TdNetworkStatisticsEntryCall {
  int ID;
  int refcnt;
  struct TdNetworkType *network_type_;
  long long sent_bytes_;
  long long received_bytes_;
  double duration_;
};
struct TdNetworkStatisticsEntryCall *TdCreateObjectNetworkStatisticsEntryCall (struct TdNetworkType *network_type_, long long sent_bytes_, long long received_bytes_, double duration_);
char *TdSerializeNetworkStatisticsEntryCall (struct TdNetworkStatisticsEntryCall *var);
void TdDestroyObjectNetworkStatisticsEntryCall (struct TdNetworkStatisticsEntryCall *var);
void TdStackStorerNetworkStatisticsEntryCall (struct TdNetworkStatisticsEntryCall *var, struct TdStackStorerMethods *M);
struct TdNetworkStatisticsEntryCall *TdStackFetcherNetworkStatisticsEntryCall (struct TdStackFetcherMethods *M);
struct TdNetworkType {
  int ID;
  int refcnt;
};
char *TdSerializeNetworkType (struct TdNetworkType *var);
void TdDestroyObjectNetworkType (struct TdNetworkType *var);
void TdStackStorerNetworkType (struct TdNetworkType *var, struct TdStackStorerMethods *M);
struct TdNetworkType *TdStackFetcherNetworkType (struct TdStackFetcherMethods *M);
enum List_NetworkType {
  CODE_NetworkTypeNone = -1971691759,
  CODE_NetworkTypeMobile = 819228239,
  CODE_NetworkTypeMobileRoaming = -1435199760,
  CODE_NetworkTypeWiFi = -633872070,
  CODE_NetworkTypeOther = 1942128539,
};
struct TdNetworkTypeNone {
  int ID;
  int refcnt;
};
struct TdNetworkTypeNone *TdCreateObjectNetworkTypeNone (void);
char *TdSerializeNetworkTypeNone (struct TdNetworkTypeNone *var);
void TdDestroyObjectNetworkTypeNone (struct TdNetworkTypeNone *var);
void TdStackStorerNetworkTypeNone (struct TdNetworkTypeNone *var, struct TdStackStorerMethods *M);
struct TdNetworkTypeNone *TdStackFetcherNetworkTypeNone (struct TdStackFetcherMethods *M);
struct TdNetworkTypeMobile {
  int ID;
  int refcnt;
};
struct TdNetworkTypeMobile *TdCreateObjectNetworkTypeMobile (void);
char *TdSerializeNetworkTypeMobile (struct TdNetworkTypeMobile *var);
void TdDestroyObjectNetworkTypeMobile (struct TdNetworkTypeMobile *var);
void TdStackStorerNetworkTypeMobile (struct TdNetworkTypeMobile *var, struct TdStackStorerMethods *M);
struct TdNetworkTypeMobile *TdStackFetcherNetworkTypeMobile (struct TdStackFetcherMethods *M);
struct TdNetworkTypeMobileRoaming {
  int ID;
  int refcnt;
};
struct TdNetworkTypeMobileRoaming *TdCreateObjectNetworkTypeMobileRoaming (void);
char *TdSerializeNetworkTypeMobileRoaming (struct TdNetworkTypeMobileRoaming *var);
void TdDestroyObjectNetworkTypeMobileRoaming (struct TdNetworkTypeMobileRoaming *var);
void TdStackStorerNetworkTypeMobileRoaming (struct TdNetworkTypeMobileRoaming *var, struct TdStackStorerMethods *M);
struct TdNetworkTypeMobileRoaming *TdStackFetcherNetworkTypeMobileRoaming (struct TdStackFetcherMethods *M);
struct TdNetworkTypeWiFi {
  int ID;
  int refcnt;
};
struct TdNetworkTypeWiFi *TdCreateObjectNetworkTypeWiFi (void);
char *TdSerializeNetworkTypeWiFi (struct TdNetworkTypeWiFi *var);
void TdDestroyObjectNetworkTypeWiFi (struct TdNetworkTypeWiFi *var);
void TdStackStorerNetworkTypeWiFi (struct TdNetworkTypeWiFi *var, struct TdStackStorerMethods *M);
struct TdNetworkTypeWiFi *TdStackFetcherNetworkTypeWiFi (struct TdStackFetcherMethods *M);
struct TdNetworkTypeOther {
  int ID;
  int refcnt;
};
struct TdNetworkTypeOther *TdCreateObjectNetworkTypeOther (void);
char *TdSerializeNetworkTypeOther (struct TdNetworkTypeOther *var);
void TdDestroyObjectNetworkTypeOther (struct TdNetworkTypeOther *var);
void TdStackStorerNetworkTypeOther (struct TdNetworkTypeOther *var, struct TdStackStorerMethods *M);
struct TdNetworkTypeOther *TdStackFetcherNetworkTypeOther (struct TdStackFetcherMethods *M);
struct TdNotificationSettingsScope {
  int ID;
  int refcnt;
};
char *TdSerializeNotificationSettingsScope (struct TdNotificationSettingsScope *var);
void TdDestroyObjectNotificationSettingsScope (struct TdNotificationSettingsScope *var);
void TdStackStorerNotificationSettingsScope (struct TdNotificationSettingsScope *var, struct TdStackStorerMethods *M);
struct TdNotificationSettingsScope *TdStackFetcherNotificationSettingsScope (struct TdStackFetcherMethods *M);
enum List_NotificationSettingsScope {
  CODE_NotificationSettingsScopePrivateChats = 937446759,
  CODE_NotificationSettingsScopeGroupChats = 1212142067,
};
struct TdNotificationSettingsScopePrivateChats {
  int ID;
  int refcnt;
};
struct TdNotificationSettingsScopePrivateChats *TdCreateObjectNotificationSettingsScopePrivateChats (void);
char *TdSerializeNotificationSettingsScopePrivateChats (struct TdNotificationSettingsScopePrivateChats *var);
void TdDestroyObjectNotificationSettingsScopePrivateChats (struct TdNotificationSettingsScopePrivateChats *var);
void TdStackStorerNotificationSettingsScopePrivateChats (struct TdNotificationSettingsScopePrivateChats *var, struct TdStackStorerMethods *M);
struct TdNotificationSettingsScopePrivateChats *TdStackFetcherNotificationSettingsScopePrivateChats (struct TdStackFetcherMethods *M);
struct TdNotificationSettingsScopeGroupChats {
  int ID;
  int refcnt;
};
struct TdNotificationSettingsScopeGroupChats *TdCreateObjectNotificationSettingsScopeGroupChats (void);
char *TdSerializeNotificationSettingsScopeGroupChats (struct TdNotificationSettingsScopeGroupChats *var);
void TdDestroyObjectNotificationSettingsScopeGroupChats (struct TdNotificationSettingsScopeGroupChats *var);
void TdStackStorerNotificationSettingsScopeGroupChats (struct TdNotificationSettingsScopeGroupChats *var, struct TdStackStorerMethods *M);
struct TdNotificationSettingsScopeGroupChats *TdStackFetcherNotificationSettingsScopeGroupChats (struct TdStackFetcherMethods *M);
struct TdOk {
  int ID;
  int refcnt;
};
struct TdOk *TdCreateObjectOk (void);
char *TdSerializeOk (struct TdOk *var);
void TdDestroyObjectOk (struct TdOk *var);
void TdStackStorerOk (struct TdOk *var, struct TdStackStorerMethods *M);
struct TdOk *TdStackFetcherOk (struct TdStackFetcherMethods *M);
struct TdOptionValue {
  int ID;
  int refcnt;
};
char *TdSerializeOptionValue (struct TdOptionValue *var);
void TdDestroyObjectOptionValue (struct TdOptionValue *var);
void TdStackStorerOptionValue (struct TdOptionValue *var, struct TdStackStorerMethods *M);
struct TdOptionValue *TdStackFetcherOptionValue (struct TdStackFetcherMethods *M);
enum List_OptionValue {
  CODE_OptionValueBoolean = 63135518,
  CODE_OptionValueEmpty = 918955155,
  CODE_OptionValueInteger = -1400911104,
  CODE_OptionValueString = 756248212,
};
struct TdOptionValueBoolean {
  int ID;
  int refcnt;
  int value_;
};
struct TdOptionValueBoolean *TdCreateObjectOptionValueBoolean (int value_);
char *TdSerializeOptionValueBoolean (struct TdOptionValueBoolean *var);
void TdDestroyObjectOptionValueBoolean (struct TdOptionValueBoolean *var);
void TdStackStorerOptionValueBoolean (struct TdOptionValueBoolean *var, struct TdStackStorerMethods *M);
struct TdOptionValueBoolean *TdStackFetcherOptionValueBoolean (struct TdStackFetcherMethods *M);
struct TdOptionValueEmpty {
  int ID;
  int refcnt;
};
struct TdOptionValueEmpty *TdCreateObjectOptionValueEmpty (void);
char *TdSerializeOptionValueEmpty (struct TdOptionValueEmpty *var);
void TdDestroyObjectOptionValueEmpty (struct TdOptionValueEmpty *var);
void TdStackStorerOptionValueEmpty (struct TdOptionValueEmpty *var, struct TdStackStorerMethods *M);
struct TdOptionValueEmpty *TdStackFetcherOptionValueEmpty (struct TdStackFetcherMethods *M);
struct TdOptionValueInteger {
  int ID;
  int refcnt;
  int value_;
};
struct TdOptionValueInteger *TdCreateObjectOptionValueInteger (int value_);
char *TdSerializeOptionValueInteger (struct TdOptionValueInteger *var);
void TdDestroyObjectOptionValueInteger (struct TdOptionValueInteger *var);
void TdStackStorerOptionValueInteger (struct TdOptionValueInteger *var, struct TdStackStorerMethods *M);
struct TdOptionValueInteger *TdStackFetcherOptionValueInteger (struct TdStackFetcherMethods *M);
struct TdOptionValueString {
  int ID;
  int refcnt;
  char *value_;
};
struct TdOptionValueString *TdCreateObjectOptionValueString (char *value_);
char *TdSerializeOptionValueString (struct TdOptionValueString *var);
void TdDestroyObjectOptionValueString (struct TdOptionValueString *var);
void TdStackStorerOptionValueString (struct TdOptionValueString *var, struct TdStackStorerMethods *M);
struct TdOptionValueString *TdStackFetcherOptionValueString (struct TdStackFetcherMethods *M);
struct TdOrderInfo {
  int ID;
  int refcnt;
  char *name_;
  char *phone_number_;
  char *email_address_;
  struct TdAddress *shipping_address_;
};
struct TdOrderInfo *TdCreateObjectOrderInfo (char *name_, char *phone_number_, char *email_address_, struct TdAddress *shipping_address_);
char *TdSerializeOrderInfo (struct TdOrderInfo *var);
void TdDestroyObjectOrderInfo (struct TdOrderInfo *var);
void TdStackStorerOrderInfo (struct TdOrderInfo *var, struct TdStackStorerMethods *M);
struct TdOrderInfo *TdStackFetcherOrderInfo (struct TdStackFetcherMethods *M);
struct TdPageBlock {
  int ID;
  int refcnt;
};
char *TdSerializePageBlock (struct TdPageBlock *var);
void TdDestroyObjectPageBlock (struct TdPageBlock *var);
void TdStackStorerPageBlock (struct TdPageBlock *var, struct TdStackStorerMethods *M);
struct TdPageBlock *TdStackFetcherPageBlock (struct TdStackFetcherMethods *M);
enum List_PageBlock {
  CODE_PageBlockTitle = 1629664784,
  CODE_PageBlockSubtitle = 264524263,
  CODE_PageBlockAuthorDate = 1300231184,
  CODE_PageBlockHeader = 1402854811,
  CODE_PageBlockSubheader = 1263956774,
  CODE_PageBlockParagraph = 1182402406,
  CODE_PageBlockPreformatted = -1066346178,
  CODE_PageBlockFooter = 886429480,
  CODE_PageBlockDivider = -618614392,
  CODE_PageBlockAnchor = -837994576,
  CODE_PageBlockList = -1752631674,
  CODE_PageBlockBlockQuote = -37421406,
  CODE_PageBlockPullQuote = -1799498665,
  CODE_PageBlockAnimation = 1639478661,
  CODE_PageBlockAudio = 1898245855,
  CODE_PageBlockPhoto = -637181825,
  CODE_PageBlockVideo = 1610373002,
  CODE_PageBlockCover = 972174080,
  CODE_PageBlockEmbedded = -211257334,
  CODE_PageBlockEmbeddedPost = 1049948772,
  CODE_PageBlockCollage = 911142202,
  CODE_PageBlockSlideshow = 178557514,
  CODE_PageBlockChatLink = 214606645,
};
struct TdPageBlockTitle {
  int ID;
  int refcnt;
  struct TdRichText *title_;
};
struct TdPageBlockTitle *TdCreateObjectPageBlockTitle (struct TdRichText *title_);
char *TdSerializePageBlockTitle (struct TdPageBlockTitle *var);
void TdDestroyObjectPageBlockTitle (struct TdPageBlockTitle *var);
void TdStackStorerPageBlockTitle (struct TdPageBlockTitle *var, struct TdStackStorerMethods *M);
struct TdPageBlockTitle *TdStackFetcherPageBlockTitle (struct TdStackFetcherMethods *M);
struct TdPageBlockSubtitle {
  int ID;
  int refcnt;
  struct TdRichText *subtitle_;
};
struct TdPageBlockSubtitle *TdCreateObjectPageBlockSubtitle (struct TdRichText *subtitle_);
char *TdSerializePageBlockSubtitle (struct TdPageBlockSubtitle *var);
void TdDestroyObjectPageBlockSubtitle (struct TdPageBlockSubtitle *var);
void TdStackStorerPageBlockSubtitle (struct TdPageBlockSubtitle *var, struct TdStackStorerMethods *M);
struct TdPageBlockSubtitle *TdStackFetcherPageBlockSubtitle (struct TdStackFetcherMethods *M);
struct TdPageBlockAuthorDate {
  int ID;
  int refcnt;
  struct TdRichText *author_;
  int publish_date_;
};
struct TdPageBlockAuthorDate *TdCreateObjectPageBlockAuthorDate (struct TdRichText *author_, int publish_date_);
char *TdSerializePageBlockAuthorDate (struct TdPageBlockAuthorDate *var);
void TdDestroyObjectPageBlockAuthorDate (struct TdPageBlockAuthorDate *var);
void TdStackStorerPageBlockAuthorDate (struct TdPageBlockAuthorDate *var, struct TdStackStorerMethods *M);
struct TdPageBlockAuthorDate *TdStackFetcherPageBlockAuthorDate (struct TdStackFetcherMethods *M);
struct TdPageBlockHeader {
  int ID;
  int refcnt;
  struct TdRichText *header_;
};
struct TdPageBlockHeader *TdCreateObjectPageBlockHeader (struct TdRichText *header_);
char *TdSerializePageBlockHeader (struct TdPageBlockHeader *var);
void TdDestroyObjectPageBlockHeader (struct TdPageBlockHeader *var);
void TdStackStorerPageBlockHeader (struct TdPageBlockHeader *var, struct TdStackStorerMethods *M);
struct TdPageBlockHeader *TdStackFetcherPageBlockHeader (struct TdStackFetcherMethods *M);
struct TdPageBlockSubheader {
  int ID;
  int refcnt;
  struct TdRichText *subheader_;
};
struct TdPageBlockSubheader *TdCreateObjectPageBlockSubheader (struct TdRichText *subheader_);
char *TdSerializePageBlockSubheader (struct TdPageBlockSubheader *var);
void TdDestroyObjectPageBlockSubheader (struct TdPageBlockSubheader *var);
void TdStackStorerPageBlockSubheader (struct TdPageBlockSubheader *var, struct TdStackStorerMethods *M);
struct TdPageBlockSubheader *TdStackFetcherPageBlockSubheader (struct TdStackFetcherMethods *M);
struct TdPageBlockParagraph {
  int ID;
  int refcnt;
  struct TdRichText *text_;
};
struct TdPageBlockParagraph *TdCreateObjectPageBlockParagraph (struct TdRichText *text_);
char *TdSerializePageBlockParagraph (struct TdPageBlockParagraph *var);
void TdDestroyObjectPageBlockParagraph (struct TdPageBlockParagraph *var);
void TdStackStorerPageBlockParagraph (struct TdPageBlockParagraph *var, struct TdStackStorerMethods *M);
struct TdPageBlockParagraph *TdStackFetcherPageBlockParagraph (struct TdStackFetcherMethods *M);
struct TdPageBlockPreformatted {
  int ID;
  int refcnt;
  struct TdRichText *text_;
  char *language_;
};
struct TdPageBlockPreformatted *TdCreateObjectPageBlockPreformatted (struct TdRichText *text_, char *language_);
char *TdSerializePageBlockPreformatted (struct TdPageBlockPreformatted *var);
void TdDestroyObjectPageBlockPreformatted (struct TdPageBlockPreformatted *var);
void TdStackStorerPageBlockPreformatted (struct TdPageBlockPreformatted *var, struct TdStackStorerMethods *M);
struct TdPageBlockPreformatted *TdStackFetcherPageBlockPreformatted (struct TdStackFetcherMethods *M);
struct TdPageBlockFooter {
  int ID;
  int refcnt;
  struct TdRichText *footer_;
};
struct TdPageBlockFooter *TdCreateObjectPageBlockFooter (struct TdRichText *footer_);
char *TdSerializePageBlockFooter (struct TdPageBlockFooter *var);
void TdDestroyObjectPageBlockFooter (struct TdPageBlockFooter *var);
void TdStackStorerPageBlockFooter (struct TdPageBlockFooter *var, struct TdStackStorerMethods *M);
struct TdPageBlockFooter *TdStackFetcherPageBlockFooter (struct TdStackFetcherMethods *M);
struct TdPageBlockDivider {
  int ID;
  int refcnt;
};
struct TdPageBlockDivider *TdCreateObjectPageBlockDivider (void);
char *TdSerializePageBlockDivider (struct TdPageBlockDivider *var);
void TdDestroyObjectPageBlockDivider (struct TdPageBlockDivider *var);
void TdStackStorerPageBlockDivider (struct TdPageBlockDivider *var, struct TdStackStorerMethods *M);
struct TdPageBlockDivider *TdStackFetcherPageBlockDivider (struct TdStackFetcherMethods *M);
struct TdPageBlockAnchor {
  int ID;
  int refcnt;
  char *name_;
};
struct TdPageBlockAnchor *TdCreateObjectPageBlockAnchor (char *name_);
char *TdSerializePageBlockAnchor (struct TdPageBlockAnchor *var);
void TdDestroyObjectPageBlockAnchor (struct TdPageBlockAnchor *var);
void TdStackStorerPageBlockAnchor (struct TdPageBlockAnchor *var, struct TdStackStorerMethods *M);
struct TdPageBlockAnchor *TdStackFetcherPageBlockAnchor (struct TdStackFetcherMethods *M);
struct TdPageBlockList {
  int ID;
  int refcnt;
  struct TdVectorRichText *items_;
  int is_ordered_;
};
struct TdPageBlockList *TdCreateObjectPageBlockList (struct TdVectorRichText *items_, int is_ordered_);
char *TdSerializePageBlockList (struct TdPageBlockList *var);
void TdDestroyObjectPageBlockList (struct TdPageBlockList *var);
void TdStackStorerPageBlockList (struct TdPageBlockList *var, struct TdStackStorerMethods *M);
struct TdPageBlockList *TdStackFetcherPageBlockList (struct TdStackFetcherMethods *M);
struct TdPageBlockBlockQuote {
  int ID;
  int refcnt;
  struct TdRichText *text_;
  struct TdRichText *caption_;
};
struct TdPageBlockBlockQuote *TdCreateObjectPageBlockBlockQuote (struct TdRichText *text_, struct TdRichText *caption_);
char *TdSerializePageBlockBlockQuote (struct TdPageBlockBlockQuote *var);
void TdDestroyObjectPageBlockBlockQuote (struct TdPageBlockBlockQuote *var);
void TdStackStorerPageBlockBlockQuote (struct TdPageBlockBlockQuote *var, struct TdStackStorerMethods *M);
struct TdPageBlockBlockQuote *TdStackFetcherPageBlockBlockQuote (struct TdStackFetcherMethods *M);
struct TdPageBlockPullQuote {
  int ID;
  int refcnt;
  struct TdRichText *text_;
  struct TdRichText *caption_;
};
struct TdPageBlockPullQuote *TdCreateObjectPageBlockPullQuote (struct TdRichText *text_, struct TdRichText *caption_);
char *TdSerializePageBlockPullQuote (struct TdPageBlockPullQuote *var);
void TdDestroyObjectPageBlockPullQuote (struct TdPageBlockPullQuote *var);
void TdStackStorerPageBlockPullQuote (struct TdPageBlockPullQuote *var, struct TdStackStorerMethods *M);
struct TdPageBlockPullQuote *TdStackFetcherPageBlockPullQuote (struct TdStackFetcherMethods *M);
struct TdPageBlockAnimation {
  int ID;
  int refcnt;
  struct TdAnimation *animation_;
  struct TdRichText *caption_;
  int need_autoplay_;
};
struct TdPageBlockAnimation *TdCreateObjectPageBlockAnimation (struct TdAnimation *animation_, struct TdRichText *caption_, int need_autoplay_);
char *TdSerializePageBlockAnimation (struct TdPageBlockAnimation *var);
void TdDestroyObjectPageBlockAnimation (struct TdPageBlockAnimation *var);
void TdStackStorerPageBlockAnimation (struct TdPageBlockAnimation *var, struct TdStackStorerMethods *M);
struct TdPageBlockAnimation *TdStackFetcherPageBlockAnimation (struct TdStackFetcherMethods *M);
struct TdPageBlockAudio {
  int ID;
  int refcnt;
  struct TdAudio *audio_;
  struct TdRichText *caption_;
};
struct TdPageBlockAudio *TdCreateObjectPageBlockAudio (struct TdAudio *audio_, struct TdRichText *caption_);
char *TdSerializePageBlockAudio (struct TdPageBlockAudio *var);
void TdDestroyObjectPageBlockAudio (struct TdPageBlockAudio *var);
void TdStackStorerPageBlockAudio (struct TdPageBlockAudio *var, struct TdStackStorerMethods *M);
struct TdPageBlockAudio *TdStackFetcherPageBlockAudio (struct TdStackFetcherMethods *M);
struct TdPageBlockPhoto {
  int ID;
  int refcnt;
  struct TdPhoto *photo_;
  struct TdRichText *caption_;
};
struct TdPageBlockPhoto *TdCreateObjectPageBlockPhoto (struct TdPhoto *photo_, struct TdRichText *caption_);
char *TdSerializePageBlockPhoto (struct TdPageBlockPhoto *var);
void TdDestroyObjectPageBlockPhoto (struct TdPageBlockPhoto *var);
void TdStackStorerPageBlockPhoto (struct TdPageBlockPhoto *var, struct TdStackStorerMethods *M);
struct TdPageBlockPhoto *TdStackFetcherPageBlockPhoto (struct TdStackFetcherMethods *M);
struct TdPageBlockVideo {
  int ID;
  int refcnt;
  struct TdVideo *video_;
  struct TdRichText *caption_;
  int need_autoplay_;
  int is_looped_;
};
struct TdPageBlockVideo *TdCreateObjectPageBlockVideo (struct TdVideo *video_, struct TdRichText *caption_, int need_autoplay_, int is_looped_);
char *TdSerializePageBlockVideo (struct TdPageBlockVideo *var);
void TdDestroyObjectPageBlockVideo (struct TdPageBlockVideo *var);
void TdStackStorerPageBlockVideo (struct TdPageBlockVideo *var, struct TdStackStorerMethods *M);
struct TdPageBlockVideo *TdStackFetcherPageBlockVideo (struct TdStackFetcherMethods *M);
struct TdPageBlockCover {
  int ID;
  int refcnt;
  struct TdPageBlock *cover_;
};
struct TdPageBlockCover *TdCreateObjectPageBlockCover (struct TdPageBlock *cover_);
char *TdSerializePageBlockCover (struct TdPageBlockCover *var);
void TdDestroyObjectPageBlockCover (struct TdPageBlockCover *var);
void TdStackStorerPageBlockCover (struct TdPageBlockCover *var, struct TdStackStorerMethods *M);
struct TdPageBlockCover *TdStackFetcherPageBlockCover (struct TdStackFetcherMethods *M);
struct TdPageBlockEmbedded {
  int ID;
  int refcnt;
  char *url_;
  char *html_;
  struct TdPhoto *poster_photo_;
  int width_;
  int height_;
  struct TdRichText *caption_;
  int is_full_width_;
  int allow_scrolling_;
};
struct TdPageBlockEmbedded *TdCreateObjectPageBlockEmbedded (char *url_, char *html_, struct TdPhoto *poster_photo_, int width_, int height_, struct TdRichText *caption_, int is_full_width_, int allow_scrolling_);
char *TdSerializePageBlockEmbedded (struct TdPageBlockEmbedded *var);
void TdDestroyObjectPageBlockEmbedded (struct TdPageBlockEmbedded *var);
void TdStackStorerPageBlockEmbedded (struct TdPageBlockEmbedded *var, struct TdStackStorerMethods *M);
struct TdPageBlockEmbedded *TdStackFetcherPageBlockEmbedded (struct TdStackFetcherMethods *M);
struct TdPageBlockEmbeddedPost {
  int ID;
  int refcnt;
  char *url_;
  char *author_;
  struct TdPhoto *author_photo_;
  int date_;
  struct TdVectorPageBlock *page_blocks_;
  struct TdRichText *caption_;
};
struct TdPageBlockEmbeddedPost *TdCreateObjectPageBlockEmbeddedPost (char *url_, char *author_, struct TdPhoto *author_photo_, int date_, struct TdVectorPageBlock *page_blocks_, struct TdRichText *caption_);
char *TdSerializePageBlockEmbeddedPost (struct TdPageBlockEmbeddedPost *var);
void TdDestroyObjectPageBlockEmbeddedPost (struct TdPageBlockEmbeddedPost *var);
void TdStackStorerPageBlockEmbeddedPost (struct TdPageBlockEmbeddedPost *var, struct TdStackStorerMethods *M);
struct TdPageBlockEmbeddedPost *TdStackFetcherPageBlockEmbeddedPost (struct TdStackFetcherMethods *M);
struct TdPageBlockCollage {
  int ID;
  int refcnt;
  struct TdVectorPageBlock *page_blocks_;
  struct TdRichText *caption_;
};
struct TdPageBlockCollage *TdCreateObjectPageBlockCollage (struct TdVectorPageBlock *page_blocks_, struct TdRichText *caption_);
char *TdSerializePageBlockCollage (struct TdPageBlockCollage *var);
void TdDestroyObjectPageBlockCollage (struct TdPageBlockCollage *var);
void TdStackStorerPageBlockCollage (struct TdPageBlockCollage *var, struct TdStackStorerMethods *M);
struct TdPageBlockCollage *TdStackFetcherPageBlockCollage (struct TdStackFetcherMethods *M);
struct TdPageBlockSlideshow {
  int ID;
  int refcnt;
  struct TdVectorPageBlock *page_blocks_;
  struct TdRichText *caption_;
};
struct TdPageBlockSlideshow *TdCreateObjectPageBlockSlideshow (struct TdVectorPageBlock *page_blocks_, struct TdRichText *caption_);
char *TdSerializePageBlockSlideshow (struct TdPageBlockSlideshow *var);
void TdDestroyObjectPageBlockSlideshow (struct TdPageBlockSlideshow *var);
void TdStackStorerPageBlockSlideshow (struct TdPageBlockSlideshow *var, struct TdStackStorerMethods *M);
struct TdPageBlockSlideshow *TdStackFetcherPageBlockSlideshow (struct TdStackFetcherMethods *M);
struct TdPageBlockChatLink {
  int ID;
  int refcnt;
  char *title_;
  struct TdChatPhoto *photo_;
  char *username_;
};
struct TdPageBlockChatLink *TdCreateObjectPageBlockChatLink (char *title_, struct TdChatPhoto *photo_, char *username_);
char *TdSerializePageBlockChatLink (struct TdPageBlockChatLink *var);
void TdDestroyObjectPageBlockChatLink (struct TdPageBlockChatLink *var);
void TdStackStorerPageBlockChatLink (struct TdPageBlockChatLink *var, struct TdStackStorerMethods *M);
struct TdPageBlockChatLink *TdStackFetcherPageBlockChatLink (struct TdStackFetcherMethods *M);
struct TdPassportAuthorizationForm {
  int ID;
  int refcnt;
  int id_;
  struct TdVectorPassportRequiredElement *required_elements_;
  struct TdVectorPassportElement *elements_;
  struct TdVectorPassportElementError *errors_;
  char *privacy_policy_url_;
};
struct TdPassportAuthorizationForm *TdCreateObjectPassportAuthorizationForm (int id_, struct TdVectorPassportRequiredElement *required_elements_, struct TdVectorPassportElement *elements_, struct TdVectorPassportElementError *errors_, char *privacy_policy_url_);
char *TdSerializePassportAuthorizationForm (struct TdPassportAuthorizationForm *var);
void TdDestroyObjectPassportAuthorizationForm (struct TdPassportAuthorizationForm *var);
void TdStackStorerPassportAuthorizationForm (struct TdPassportAuthorizationForm *var, struct TdStackStorerMethods *M);
struct TdPassportAuthorizationForm *TdStackFetcherPassportAuthorizationForm (struct TdStackFetcherMethods *M);
struct TdPassportElement {
  int ID;
  int refcnt;
};
char *TdSerializePassportElement (struct TdPassportElement *var);
void TdDestroyObjectPassportElement (struct TdPassportElement *var);
void TdStackStorerPassportElement (struct TdPassportElement *var, struct TdStackStorerMethods *M);
struct TdPassportElement *TdStackFetcherPassportElement (struct TdStackFetcherMethods *M);
enum List_PassportElement {
  CODE_PassportElementPersonalDetails = 1217724035,
  CODE_PassportElementPassport = -263985373,
  CODE_PassportElementDriverLicense = 1643580589,
  CODE_PassportElementIdentityCard = 2083775797,
  CODE_PassportElementInternalPassport = 36220295,
  CODE_PassportElementAddress = -782625232,
  CODE_PassportElementUtilityBill = -234611246,
  CODE_PassportElementBankStatement = -366464408,
  CODE_PassportElementRentalAgreement = -290141400,
  CODE_PassportElementPassportRegistration = 618323071,
  CODE_PassportElementTemporaryRegistration = 1237626864,
  CODE_PassportElementPhoneNumber = -1320118375,
  CODE_PassportElementEmailAddress = -1528129531,
};
struct TdPassportElementPersonalDetails {
  int ID;
  int refcnt;
  struct TdPersonalDetails *personal_details_;
};
struct TdPassportElementPersonalDetails *TdCreateObjectPassportElementPersonalDetails (struct TdPersonalDetails *personal_details_);
char *TdSerializePassportElementPersonalDetails (struct TdPassportElementPersonalDetails *var);
void TdDestroyObjectPassportElementPersonalDetails (struct TdPassportElementPersonalDetails *var);
void TdStackStorerPassportElementPersonalDetails (struct TdPassportElementPersonalDetails *var, struct TdStackStorerMethods *M);
struct TdPassportElementPersonalDetails *TdStackFetcherPassportElementPersonalDetails (struct TdStackFetcherMethods *M);
struct TdPassportElementPassport {
  int ID;
  int refcnt;
  struct TdIdentityDocument *passport_;
};
struct TdPassportElementPassport *TdCreateObjectPassportElementPassport (struct TdIdentityDocument *passport_);
char *TdSerializePassportElementPassport (struct TdPassportElementPassport *var);
void TdDestroyObjectPassportElementPassport (struct TdPassportElementPassport *var);
void TdStackStorerPassportElementPassport (struct TdPassportElementPassport *var, struct TdStackStorerMethods *M);
struct TdPassportElementPassport *TdStackFetcherPassportElementPassport (struct TdStackFetcherMethods *M);
struct TdPassportElementDriverLicense {
  int ID;
  int refcnt;
  struct TdIdentityDocument *driver_license_;
};
struct TdPassportElementDriverLicense *TdCreateObjectPassportElementDriverLicense (struct TdIdentityDocument *driver_license_);
char *TdSerializePassportElementDriverLicense (struct TdPassportElementDriverLicense *var);
void TdDestroyObjectPassportElementDriverLicense (struct TdPassportElementDriverLicense *var);
void TdStackStorerPassportElementDriverLicense (struct TdPassportElementDriverLicense *var, struct TdStackStorerMethods *M);
struct TdPassportElementDriverLicense *TdStackFetcherPassportElementDriverLicense (struct TdStackFetcherMethods *M);
struct TdPassportElementIdentityCard {
  int ID;
  int refcnt;
  struct TdIdentityDocument *identity_card_;
};
struct TdPassportElementIdentityCard *TdCreateObjectPassportElementIdentityCard (struct TdIdentityDocument *identity_card_);
char *TdSerializePassportElementIdentityCard (struct TdPassportElementIdentityCard *var);
void TdDestroyObjectPassportElementIdentityCard (struct TdPassportElementIdentityCard *var);
void TdStackStorerPassportElementIdentityCard (struct TdPassportElementIdentityCard *var, struct TdStackStorerMethods *M);
struct TdPassportElementIdentityCard *TdStackFetcherPassportElementIdentityCard (struct TdStackFetcherMethods *M);
struct TdPassportElementInternalPassport {
  int ID;
  int refcnt;
  struct TdIdentityDocument *internal_passport_;
};
struct TdPassportElementInternalPassport *TdCreateObjectPassportElementInternalPassport (struct TdIdentityDocument *internal_passport_);
char *TdSerializePassportElementInternalPassport (struct TdPassportElementInternalPassport *var);
void TdDestroyObjectPassportElementInternalPassport (struct TdPassportElementInternalPassport *var);
void TdStackStorerPassportElementInternalPassport (struct TdPassportElementInternalPassport *var, struct TdStackStorerMethods *M);
struct TdPassportElementInternalPassport *TdStackFetcherPassportElementInternalPassport (struct TdStackFetcherMethods *M);
struct TdPassportElementAddress {
  int ID;
  int refcnt;
  struct TdAddress *address_;
};
struct TdPassportElementAddress *TdCreateObjectPassportElementAddress (struct TdAddress *address_);
char *TdSerializePassportElementAddress (struct TdPassportElementAddress *var);
void TdDestroyObjectPassportElementAddress (struct TdPassportElementAddress *var);
void TdStackStorerPassportElementAddress (struct TdPassportElementAddress *var, struct TdStackStorerMethods *M);
struct TdPassportElementAddress *TdStackFetcherPassportElementAddress (struct TdStackFetcherMethods *M);
struct TdPassportElementUtilityBill {
  int ID;
  int refcnt;
  struct TdPersonalDocument *utility_bill_;
};
struct TdPassportElementUtilityBill *TdCreateObjectPassportElementUtilityBill (struct TdPersonalDocument *utility_bill_);
char *TdSerializePassportElementUtilityBill (struct TdPassportElementUtilityBill *var);
void TdDestroyObjectPassportElementUtilityBill (struct TdPassportElementUtilityBill *var);
void TdStackStorerPassportElementUtilityBill (struct TdPassportElementUtilityBill *var, struct TdStackStorerMethods *M);
struct TdPassportElementUtilityBill *TdStackFetcherPassportElementUtilityBill (struct TdStackFetcherMethods *M);
struct TdPassportElementBankStatement {
  int ID;
  int refcnt;
  struct TdPersonalDocument *bank_statement_;
};
struct TdPassportElementBankStatement *TdCreateObjectPassportElementBankStatement (struct TdPersonalDocument *bank_statement_);
char *TdSerializePassportElementBankStatement (struct TdPassportElementBankStatement *var);
void TdDestroyObjectPassportElementBankStatement (struct TdPassportElementBankStatement *var);
void TdStackStorerPassportElementBankStatement (struct TdPassportElementBankStatement *var, struct TdStackStorerMethods *M);
struct TdPassportElementBankStatement *TdStackFetcherPassportElementBankStatement (struct TdStackFetcherMethods *M);
struct TdPassportElementRentalAgreement {
  int ID;
  int refcnt;
  struct TdPersonalDocument *rental_agreement_;
};
struct TdPassportElementRentalAgreement *TdCreateObjectPassportElementRentalAgreement (struct TdPersonalDocument *rental_agreement_);
char *TdSerializePassportElementRentalAgreement (struct TdPassportElementRentalAgreement *var);
void TdDestroyObjectPassportElementRentalAgreement (struct TdPassportElementRentalAgreement *var);
void TdStackStorerPassportElementRentalAgreement (struct TdPassportElementRentalAgreement *var, struct TdStackStorerMethods *M);
struct TdPassportElementRentalAgreement *TdStackFetcherPassportElementRentalAgreement (struct TdStackFetcherMethods *M);
struct TdPassportElementPassportRegistration {
  int ID;
  int refcnt;
  struct TdPersonalDocument *passport_registration_;
};
struct TdPassportElementPassportRegistration *TdCreateObjectPassportElementPassportRegistration (struct TdPersonalDocument *passport_registration_);
char *TdSerializePassportElementPassportRegistration (struct TdPassportElementPassportRegistration *var);
void TdDestroyObjectPassportElementPassportRegistration (struct TdPassportElementPassportRegistration *var);
void TdStackStorerPassportElementPassportRegistration (struct TdPassportElementPassportRegistration *var, struct TdStackStorerMethods *M);
struct TdPassportElementPassportRegistration *TdStackFetcherPassportElementPassportRegistration (struct TdStackFetcherMethods *M);
struct TdPassportElementTemporaryRegistration {
  int ID;
  int refcnt;
  struct TdPersonalDocument *temporary_registration_;
};
struct TdPassportElementTemporaryRegistration *TdCreateObjectPassportElementTemporaryRegistration (struct TdPersonalDocument *temporary_registration_);
char *TdSerializePassportElementTemporaryRegistration (struct TdPassportElementTemporaryRegistration *var);
void TdDestroyObjectPassportElementTemporaryRegistration (struct TdPassportElementTemporaryRegistration *var);
void TdStackStorerPassportElementTemporaryRegistration (struct TdPassportElementTemporaryRegistration *var, struct TdStackStorerMethods *M);
struct TdPassportElementTemporaryRegistration *TdStackFetcherPassportElementTemporaryRegistration (struct TdStackFetcherMethods *M);
struct TdPassportElementPhoneNumber {
  int ID;
  int refcnt;
  char *phone_number_;
};
struct TdPassportElementPhoneNumber *TdCreateObjectPassportElementPhoneNumber (char *phone_number_);
char *TdSerializePassportElementPhoneNumber (struct TdPassportElementPhoneNumber *var);
void TdDestroyObjectPassportElementPhoneNumber (struct TdPassportElementPhoneNumber *var);
void TdStackStorerPassportElementPhoneNumber (struct TdPassportElementPhoneNumber *var, struct TdStackStorerMethods *M);
struct TdPassportElementPhoneNumber *TdStackFetcherPassportElementPhoneNumber (struct TdStackFetcherMethods *M);
struct TdPassportElementEmailAddress {
  int ID;
  int refcnt;
  char *email_address_;
};
struct TdPassportElementEmailAddress *TdCreateObjectPassportElementEmailAddress (char *email_address_);
char *TdSerializePassportElementEmailAddress (struct TdPassportElementEmailAddress *var);
void TdDestroyObjectPassportElementEmailAddress (struct TdPassportElementEmailAddress *var);
void TdStackStorerPassportElementEmailAddress (struct TdPassportElementEmailAddress *var, struct TdStackStorerMethods *M);
struct TdPassportElementEmailAddress *TdStackFetcherPassportElementEmailAddress (struct TdStackFetcherMethods *M);
struct TdPassportElementError {
  int ID;
  int refcnt;
  struct TdPassportElementType *type_;
  char *message_;
  struct TdPassportElementErrorSource *source_;
};
struct TdPassportElementError *TdCreateObjectPassportElementError (struct TdPassportElementType *type_, char *message_, struct TdPassportElementErrorSource *source_);
char *TdSerializePassportElementError (struct TdPassportElementError *var);
void TdDestroyObjectPassportElementError (struct TdPassportElementError *var);
void TdStackStorerPassportElementError (struct TdPassportElementError *var, struct TdStackStorerMethods *M);
struct TdPassportElementError *TdStackFetcherPassportElementError (struct TdStackFetcherMethods *M);
struct TdPassportElementErrorSource {
  int ID;
  int refcnt;
};
char *TdSerializePassportElementErrorSource (struct TdPassportElementErrorSource *var);
void TdDestroyObjectPassportElementErrorSource (struct TdPassportElementErrorSource *var);
void TdStackStorerPassportElementErrorSource (struct TdPassportElementErrorSource *var, struct TdStackStorerMethods *M);
struct TdPassportElementErrorSource *TdStackFetcherPassportElementErrorSource (struct TdStackFetcherMethods *M);
enum List_PassportElementErrorSource {
  CODE_PassportElementErrorSourceUnspecified = -378320830,
  CODE_PassportElementErrorSourceDataField = -308650776,
  CODE_PassportElementErrorSourceFrontSide = 1895658292,
  CODE_PassportElementErrorSourceReverseSide = 1918630391,
  CODE_PassportElementErrorSourceSelfie = -797043672,
  CODE_PassportElementErrorSourceTranslationFile = -643919323,
  CODE_PassportElementErrorSourceTranslationFiles = 581280796,
  CODE_PassportElementErrorSourceFile = -226596202,
  CODE_PassportElementErrorSourceFiles = 1894164178,
};
struct TdPassportElementErrorSourceUnspecified {
  int ID;
  int refcnt;
};
struct TdPassportElementErrorSourceUnspecified *TdCreateObjectPassportElementErrorSourceUnspecified (void);
char *TdSerializePassportElementErrorSourceUnspecified (struct TdPassportElementErrorSourceUnspecified *var);
void TdDestroyObjectPassportElementErrorSourceUnspecified (struct TdPassportElementErrorSourceUnspecified *var);
void TdStackStorerPassportElementErrorSourceUnspecified (struct TdPassportElementErrorSourceUnspecified *var, struct TdStackStorerMethods *M);
struct TdPassportElementErrorSourceUnspecified *TdStackFetcherPassportElementErrorSourceUnspecified (struct TdStackFetcherMethods *M);
struct TdPassportElementErrorSourceDataField {
  int ID;
  int refcnt;
  char *field_name_;
};
struct TdPassportElementErrorSourceDataField *TdCreateObjectPassportElementErrorSourceDataField (char *field_name_);
char *TdSerializePassportElementErrorSourceDataField (struct TdPassportElementErrorSourceDataField *var);
void TdDestroyObjectPassportElementErrorSourceDataField (struct TdPassportElementErrorSourceDataField *var);
void TdStackStorerPassportElementErrorSourceDataField (struct TdPassportElementErrorSourceDataField *var, struct TdStackStorerMethods *M);
struct TdPassportElementErrorSourceDataField *TdStackFetcherPassportElementErrorSourceDataField (struct TdStackFetcherMethods *M);
struct TdPassportElementErrorSourceFrontSide {
  int ID;
  int refcnt;
};
struct TdPassportElementErrorSourceFrontSide *TdCreateObjectPassportElementErrorSourceFrontSide (void);
char *TdSerializePassportElementErrorSourceFrontSide (struct TdPassportElementErrorSourceFrontSide *var);
void TdDestroyObjectPassportElementErrorSourceFrontSide (struct TdPassportElementErrorSourceFrontSide *var);
void TdStackStorerPassportElementErrorSourceFrontSide (struct TdPassportElementErrorSourceFrontSide *var, struct TdStackStorerMethods *M);
struct TdPassportElementErrorSourceFrontSide *TdStackFetcherPassportElementErrorSourceFrontSide (struct TdStackFetcherMethods *M);
struct TdPassportElementErrorSourceReverseSide {
  int ID;
  int refcnt;
};
struct TdPassportElementErrorSourceReverseSide *TdCreateObjectPassportElementErrorSourceReverseSide (void);
char *TdSerializePassportElementErrorSourceReverseSide (struct TdPassportElementErrorSourceReverseSide *var);
void TdDestroyObjectPassportElementErrorSourceReverseSide (struct TdPassportElementErrorSourceReverseSide *var);
void TdStackStorerPassportElementErrorSourceReverseSide (struct TdPassportElementErrorSourceReverseSide *var, struct TdStackStorerMethods *M);
struct TdPassportElementErrorSourceReverseSide *TdStackFetcherPassportElementErrorSourceReverseSide (struct TdStackFetcherMethods *M);
struct TdPassportElementErrorSourceSelfie {
  int ID;
  int refcnt;
};
struct TdPassportElementErrorSourceSelfie *TdCreateObjectPassportElementErrorSourceSelfie (void);
char *TdSerializePassportElementErrorSourceSelfie (struct TdPassportElementErrorSourceSelfie *var);
void TdDestroyObjectPassportElementErrorSourceSelfie (struct TdPassportElementErrorSourceSelfie *var);
void TdStackStorerPassportElementErrorSourceSelfie (struct TdPassportElementErrorSourceSelfie *var, struct TdStackStorerMethods *M);
struct TdPassportElementErrorSourceSelfie *TdStackFetcherPassportElementErrorSourceSelfie (struct TdStackFetcherMethods *M);
struct TdPassportElementErrorSourceTranslationFile {
  int ID;
  int refcnt;
};
struct TdPassportElementErrorSourceTranslationFile *TdCreateObjectPassportElementErrorSourceTranslationFile (void);
char *TdSerializePassportElementErrorSourceTranslationFile (struct TdPassportElementErrorSourceTranslationFile *var);
void TdDestroyObjectPassportElementErrorSourceTranslationFile (struct TdPassportElementErrorSourceTranslationFile *var);
void TdStackStorerPassportElementErrorSourceTranslationFile (struct TdPassportElementErrorSourceTranslationFile *var, struct TdStackStorerMethods *M);
struct TdPassportElementErrorSourceTranslationFile *TdStackFetcherPassportElementErrorSourceTranslationFile (struct TdStackFetcherMethods *M);
struct TdPassportElementErrorSourceTranslationFiles {
  int ID;
  int refcnt;
};
struct TdPassportElementErrorSourceTranslationFiles *TdCreateObjectPassportElementErrorSourceTranslationFiles (void);
char *TdSerializePassportElementErrorSourceTranslationFiles (struct TdPassportElementErrorSourceTranslationFiles *var);
void TdDestroyObjectPassportElementErrorSourceTranslationFiles (struct TdPassportElementErrorSourceTranslationFiles *var);
void TdStackStorerPassportElementErrorSourceTranslationFiles (struct TdPassportElementErrorSourceTranslationFiles *var, struct TdStackStorerMethods *M);
struct TdPassportElementErrorSourceTranslationFiles *TdStackFetcherPassportElementErrorSourceTranslationFiles (struct TdStackFetcherMethods *M);
struct TdPassportElementErrorSourceFile {
  int ID;
  int refcnt;
};
struct TdPassportElementErrorSourceFile *TdCreateObjectPassportElementErrorSourceFile (void);
char *TdSerializePassportElementErrorSourceFile (struct TdPassportElementErrorSourceFile *var);
void TdDestroyObjectPassportElementErrorSourceFile (struct TdPassportElementErrorSourceFile *var);
void TdStackStorerPassportElementErrorSourceFile (struct TdPassportElementErrorSourceFile *var, struct TdStackStorerMethods *M);
struct TdPassportElementErrorSourceFile *TdStackFetcherPassportElementErrorSourceFile (struct TdStackFetcherMethods *M);
struct TdPassportElementErrorSourceFiles {
  int ID;
  int refcnt;
};
struct TdPassportElementErrorSourceFiles *TdCreateObjectPassportElementErrorSourceFiles (void);
char *TdSerializePassportElementErrorSourceFiles (struct TdPassportElementErrorSourceFiles *var);
void TdDestroyObjectPassportElementErrorSourceFiles (struct TdPassportElementErrorSourceFiles *var);
void TdStackStorerPassportElementErrorSourceFiles (struct TdPassportElementErrorSourceFiles *var, struct TdStackStorerMethods *M);
struct TdPassportElementErrorSourceFiles *TdStackFetcherPassportElementErrorSourceFiles (struct TdStackFetcherMethods *M);
struct TdPassportElementType {
  int ID;
  int refcnt;
};
char *TdSerializePassportElementType (struct TdPassportElementType *var);
void TdDestroyObjectPassportElementType (struct TdPassportElementType *var);
void TdStackStorerPassportElementType (struct TdPassportElementType *var, struct TdStackStorerMethods *M);
struct TdPassportElementType *TdStackFetcherPassportElementType (struct TdStackFetcherMethods *M);
enum List_PassportElementType {
  CODE_PassportElementTypePersonalDetails = -1032136365,
  CODE_PassportElementTypePassport = -436360376,
  CODE_PassportElementTypeDriverLicense = 1827298379,
  CODE_PassportElementTypeIdentityCard = -502356132,
  CODE_PassportElementTypeInternalPassport = -793781959,
  CODE_PassportElementTypeAddress = 496327874,
  CODE_PassportElementTypeUtilityBill = 627084906,
  CODE_PassportElementTypeBankStatement = 574095667,
  CODE_PassportElementTypeRentalAgreement = -2060583280,
  CODE_PassportElementTypePassportRegistration = -159478209,
  CODE_PassportElementTypeTemporaryRegistration = 1092498527,
  CODE_PassportElementTypePhoneNumber = -995361172,
  CODE_PassportElementTypeEmailAddress = -79321405,
};
struct TdPassportElementTypePersonalDetails {
  int ID;
  int refcnt;
};
struct TdPassportElementTypePersonalDetails *TdCreateObjectPassportElementTypePersonalDetails (void);
char *TdSerializePassportElementTypePersonalDetails (struct TdPassportElementTypePersonalDetails *var);
void TdDestroyObjectPassportElementTypePersonalDetails (struct TdPassportElementTypePersonalDetails *var);
void TdStackStorerPassportElementTypePersonalDetails (struct TdPassportElementTypePersonalDetails *var, struct TdStackStorerMethods *M);
struct TdPassportElementTypePersonalDetails *TdStackFetcherPassportElementTypePersonalDetails (struct TdStackFetcherMethods *M);
struct TdPassportElementTypePassport {
  int ID;
  int refcnt;
};
struct TdPassportElementTypePassport *TdCreateObjectPassportElementTypePassport (void);
char *TdSerializePassportElementTypePassport (struct TdPassportElementTypePassport *var);
void TdDestroyObjectPassportElementTypePassport (struct TdPassportElementTypePassport *var);
void TdStackStorerPassportElementTypePassport (struct TdPassportElementTypePassport *var, struct TdStackStorerMethods *M);
struct TdPassportElementTypePassport *TdStackFetcherPassportElementTypePassport (struct TdStackFetcherMethods *M);
struct TdPassportElementTypeDriverLicense {
  int ID;
  int refcnt;
};
struct TdPassportElementTypeDriverLicense *TdCreateObjectPassportElementTypeDriverLicense (void);
char *TdSerializePassportElementTypeDriverLicense (struct TdPassportElementTypeDriverLicense *var);
void TdDestroyObjectPassportElementTypeDriverLicense (struct TdPassportElementTypeDriverLicense *var);
void TdStackStorerPassportElementTypeDriverLicense (struct TdPassportElementTypeDriverLicense *var, struct TdStackStorerMethods *M);
struct TdPassportElementTypeDriverLicense *TdStackFetcherPassportElementTypeDriverLicense (struct TdStackFetcherMethods *M);
struct TdPassportElementTypeIdentityCard {
  int ID;
  int refcnt;
};
struct TdPassportElementTypeIdentityCard *TdCreateObjectPassportElementTypeIdentityCard (void);
char *TdSerializePassportElementTypeIdentityCard (struct TdPassportElementTypeIdentityCard *var);
void TdDestroyObjectPassportElementTypeIdentityCard (struct TdPassportElementTypeIdentityCard *var);
void TdStackStorerPassportElementTypeIdentityCard (struct TdPassportElementTypeIdentityCard *var, struct TdStackStorerMethods *M);
struct TdPassportElementTypeIdentityCard *TdStackFetcherPassportElementTypeIdentityCard (struct TdStackFetcherMethods *M);
struct TdPassportElementTypeInternalPassport {
  int ID;
  int refcnt;
};
struct TdPassportElementTypeInternalPassport *TdCreateObjectPassportElementTypeInternalPassport (void);
char *TdSerializePassportElementTypeInternalPassport (struct TdPassportElementTypeInternalPassport *var);
void TdDestroyObjectPassportElementTypeInternalPassport (struct TdPassportElementTypeInternalPassport *var);
void TdStackStorerPassportElementTypeInternalPassport (struct TdPassportElementTypeInternalPassport *var, struct TdStackStorerMethods *M);
struct TdPassportElementTypeInternalPassport *TdStackFetcherPassportElementTypeInternalPassport (struct TdStackFetcherMethods *M);
struct TdPassportElementTypeAddress {
  int ID;
  int refcnt;
};
struct TdPassportElementTypeAddress *TdCreateObjectPassportElementTypeAddress (void);
char *TdSerializePassportElementTypeAddress (struct TdPassportElementTypeAddress *var);
void TdDestroyObjectPassportElementTypeAddress (struct TdPassportElementTypeAddress *var);
void TdStackStorerPassportElementTypeAddress (struct TdPassportElementTypeAddress *var, struct TdStackStorerMethods *M);
struct TdPassportElementTypeAddress *TdStackFetcherPassportElementTypeAddress (struct TdStackFetcherMethods *M);
struct TdPassportElementTypeUtilityBill {
  int ID;
  int refcnt;
};
struct TdPassportElementTypeUtilityBill *TdCreateObjectPassportElementTypeUtilityBill (void);
char *TdSerializePassportElementTypeUtilityBill (struct TdPassportElementTypeUtilityBill *var);
void TdDestroyObjectPassportElementTypeUtilityBill (struct TdPassportElementTypeUtilityBill *var);
void TdStackStorerPassportElementTypeUtilityBill (struct TdPassportElementTypeUtilityBill *var, struct TdStackStorerMethods *M);
struct TdPassportElementTypeUtilityBill *TdStackFetcherPassportElementTypeUtilityBill (struct TdStackFetcherMethods *M);
struct TdPassportElementTypeBankStatement {
  int ID;
  int refcnt;
};
struct TdPassportElementTypeBankStatement *TdCreateObjectPassportElementTypeBankStatement (void);
char *TdSerializePassportElementTypeBankStatement (struct TdPassportElementTypeBankStatement *var);
void TdDestroyObjectPassportElementTypeBankStatement (struct TdPassportElementTypeBankStatement *var);
void TdStackStorerPassportElementTypeBankStatement (struct TdPassportElementTypeBankStatement *var, struct TdStackStorerMethods *M);
struct TdPassportElementTypeBankStatement *TdStackFetcherPassportElementTypeBankStatement (struct TdStackFetcherMethods *M);
struct TdPassportElementTypeRentalAgreement {
  int ID;
  int refcnt;
};
struct TdPassportElementTypeRentalAgreement *TdCreateObjectPassportElementTypeRentalAgreement (void);
char *TdSerializePassportElementTypeRentalAgreement (struct TdPassportElementTypeRentalAgreement *var);
void TdDestroyObjectPassportElementTypeRentalAgreement (struct TdPassportElementTypeRentalAgreement *var);
void TdStackStorerPassportElementTypeRentalAgreement (struct TdPassportElementTypeRentalAgreement *var, struct TdStackStorerMethods *M);
struct TdPassportElementTypeRentalAgreement *TdStackFetcherPassportElementTypeRentalAgreement (struct TdStackFetcherMethods *M);
struct TdPassportElementTypePassportRegistration {
  int ID;
  int refcnt;
};
struct TdPassportElementTypePassportRegistration *TdCreateObjectPassportElementTypePassportRegistration (void);
char *TdSerializePassportElementTypePassportRegistration (struct TdPassportElementTypePassportRegistration *var);
void TdDestroyObjectPassportElementTypePassportRegistration (struct TdPassportElementTypePassportRegistration *var);
void TdStackStorerPassportElementTypePassportRegistration (struct TdPassportElementTypePassportRegistration *var, struct TdStackStorerMethods *M);
struct TdPassportElementTypePassportRegistration *TdStackFetcherPassportElementTypePassportRegistration (struct TdStackFetcherMethods *M);
struct TdPassportElementTypeTemporaryRegistration {
  int ID;
  int refcnt;
};
struct TdPassportElementTypeTemporaryRegistration *TdCreateObjectPassportElementTypeTemporaryRegistration (void);
char *TdSerializePassportElementTypeTemporaryRegistration (struct TdPassportElementTypeTemporaryRegistration *var);
void TdDestroyObjectPassportElementTypeTemporaryRegistration (struct TdPassportElementTypeTemporaryRegistration *var);
void TdStackStorerPassportElementTypeTemporaryRegistration (struct TdPassportElementTypeTemporaryRegistration *var, struct TdStackStorerMethods *M);
struct TdPassportElementTypeTemporaryRegistration *TdStackFetcherPassportElementTypeTemporaryRegistration (struct TdStackFetcherMethods *M);
struct TdPassportElementTypePhoneNumber {
  int ID;
  int refcnt;
};
struct TdPassportElementTypePhoneNumber *TdCreateObjectPassportElementTypePhoneNumber (void);
char *TdSerializePassportElementTypePhoneNumber (struct TdPassportElementTypePhoneNumber *var);
void TdDestroyObjectPassportElementTypePhoneNumber (struct TdPassportElementTypePhoneNumber *var);
void TdStackStorerPassportElementTypePhoneNumber (struct TdPassportElementTypePhoneNumber *var, struct TdStackStorerMethods *M);
struct TdPassportElementTypePhoneNumber *TdStackFetcherPassportElementTypePhoneNumber (struct TdStackFetcherMethods *M);
struct TdPassportElementTypeEmailAddress {
  int ID;
  int refcnt;
};
struct TdPassportElementTypeEmailAddress *TdCreateObjectPassportElementTypeEmailAddress (void);
char *TdSerializePassportElementTypeEmailAddress (struct TdPassportElementTypeEmailAddress *var);
void TdDestroyObjectPassportElementTypeEmailAddress (struct TdPassportElementTypeEmailAddress *var);
void TdStackStorerPassportElementTypeEmailAddress (struct TdPassportElementTypeEmailAddress *var, struct TdStackStorerMethods *M);
struct TdPassportElementTypeEmailAddress *TdStackFetcherPassportElementTypeEmailAddress (struct TdStackFetcherMethods *M);
struct TdPassportElements {
  int ID;
  int refcnt;
  struct TdVectorPassportElement *elements_;
};
struct TdPassportElements *TdCreateObjectPassportElements (struct TdVectorPassportElement *elements_);
char *TdSerializePassportElements (struct TdPassportElements *var);
void TdDestroyObjectPassportElements (struct TdPassportElements *var);
void TdStackStorerPassportElements (struct TdPassportElements *var, struct TdStackStorerMethods *M);
struct TdPassportElements *TdStackFetcherPassportElements (struct TdStackFetcherMethods *M);
struct TdPassportRequiredElement {
  int ID;
  int refcnt;
  struct TdVectorPassportSuitableElement *suitable_elements_;
};
struct TdPassportRequiredElement *TdCreateObjectPassportRequiredElement (struct TdVectorPassportSuitableElement *suitable_elements_);
char *TdSerializePassportRequiredElement (struct TdPassportRequiredElement *var);
void TdDestroyObjectPassportRequiredElement (struct TdPassportRequiredElement *var);
void TdStackStorerPassportRequiredElement (struct TdPassportRequiredElement *var, struct TdStackStorerMethods *M);
struct TdPassportRequiredElement *TdStackFetcherPassportRequiredElement (struct TdStackFetcherMethods *M);
struct TdPassportSuitableElement {
  int ID;
  int refcnt;
  struct TdPassportElementType *type_;
  int is_selfie_required_;
  int is_translation_required_;
  int is_native_name_required_;
};
struct TdPassportSuitableElement *TdCreateObjectPassportSuitableElement (struct TdPassportElementType *type_, int is_selfie_required_, int is_translation_required_, int is_native_name_required_);
char *TdSerializePassportSuitableElement (struct TdPassportSuitableElement *var);
void TdDestroyObjectPassportSuitableElement (struct TdPassportSuitableElement *var);
void TdStackStorerPassportSuitableElement (struct TdPassportSuitableElement *var, struct TdStackStorerMethods *M);
struct TdPassportSuitableElement *TdStackFetcherPassportSuitableElement (struct TdStackFetcherMethods *M);
struct TdPasswordState {
  int ID;
  int refcnt;
  int has_password_;
  char *password_hint_;
  int has_recovery_email_address_;
  int has_passport_data_;
  char *unconfirmed_recovery_email_address_pattern_;
};
struct TdPasswordState *TdCreateObjectPasswordState (int has_password_, char *password_hint_, int has_recovery_email_address_, int has_passport_data_, char *unconfirmed_recovery_email_address_pattern_);
char *TdSerializePasswordState (struct TdPasswordState *var);
void TdDestroyObjectPasswordState (struct TdPasswordState *var);
void TdStackStorerPasswordState (struct TdPasswordState *var, struct TdStackStorerMethods *M);
struct TdPasswordState *TdStackFetcherPasswordState (struct TdStackFetcherMethods *M);
struct TdPaymentForm {
  int ID;
  int refcnt;
  struct TdInvoice *invoice_;
  char *url_;
  struct TdPaymentsProviderStripe *payments_provider_;
  struct TdOrderInfo *saved_order_info_;
  struct TdSavedCredentials *saved_credentials_;
  int can_save_credentials_;
  int need_password_;
};
struct TdPaymentForm *TdCreateObjectPaymentForm (struct TdInvoice *invoice_, char *url_, struct TdPaymentsProviderStripe *payments_provider_, struct TdOrderInfo *saved_order_info_, struct TdSavedCredentials *saved_credentials_, int can_save_credentials_, int need_password_);
char *TdSerializePaymentForm (struct TdPaymentForm *var);
void TdDestroyObjectPaymentForm (struct TdPaymentForm *var);
void TdStackStorerPaymentForm (struct TdPaymentForm *var, struct TdStackStorerMethods *M);
struct TdPaymentForm *TdStackFetcherPaymentForm (struct TdStackFetcherMethods *M);
struct TdPaymentReceipt {
  int ID;
  int refcnt;
  int date_;
  int payments_provider_user_id_;
  struct TdInvoice *invoice_;
  struct TdOrderInfo *order_info_;
  struct TdShippingOption *shipping_option_;
  char *credentials_title_;
};
struct TdPaymentReceipt *TdCreateObjectPaymentReceipt (int date_, int payments_provider_user_id_, struct TdInvoice *invoice_, struct TdOrderInfo *order_info_, struct TdShippingOption *shipping_option_, char *credentials_title_);
char *TdSerializePaymentReceipt (struct TdPaymentReceipt *var);
void TdDestroyObjectPaymentReceipt (struct TdPaymentReceipt *var);
void TdStackStorerPaymentReceipt (struct TdPaymentReceipt *var, struct TdStackStorerMethods *M);
struct TdPaymentReceipt *TdStackFetcherPaymentReceipt (struct TdStackFetcherMethods *M);
struct TdPaymentResult {
  int ID;
  int refcnt;
  int success_;
  char *verification_url_;
};
struct TdPaymentResult *TdCreateObjectPaymentResult (int success_, char *verification_url_);
char *TdSerializePaymentResult (struct TdPaymentResult *var);
void TdDestroyObjectPaymentResult (struct TdPaymentResult *var);
void TdStackStorerPaymentResult (struct TdPaymentResult *var, struct TdStackStorerMethods *M);
struct TdPaymentResult *TdStackFetcherPaymentResult (struct TdStackFetcherMethods *M);
struct TdPaymentsProviderStripe {
  int ID;
  int refcnt;
  char *publishable_key_;
  int need_country_;
  int need_postal_code_;
  int need_cardholder_name_;
};
struct TdPaymentsProviderStripe *TdCreateObjectPaymentsProviderStripe (char *publishable_key_, int need_country_, int need_postal_code_, int need_cardholder_name_);
char *TdSerializePaymentsProviderStripe (struct TdPaymentsProviderStripe *var);
void TdDestroyObjectPaymentsProviderStripe (struct TdPaymentsProviderStripe *var);
void TdStackStorerPaymentsProviderStripe (struct TdPaymentsProviderStripe *var, struct TdStackStorerMethods *M);
struct TdPaymentsProviderStripe *TdStackFetcherPaymentsProviderStripe (struct TdStackFetcherMethods *M);
struct TdPersonalDetails {
  int ID;
  int refcnt;
  char *first_name_;
  char *middle_name_;
  char *last_name_;
  char *native_first_name_;
  char *native_middle_name_;
  char *native_last_name_;
  struct TdDate *birthdate_;
  char *gender_;
  char *country_code_;
  char *residence_country_code_;
};
struct TdPersonalDetails *TdCreateObjectPersonalDetails (char *first_name_, char *middle_name_, char *last_name_, char *native_first_name_, char *native_middle_name_, char *native_last_name_, struct TdDate *birthdate_, char *gender_, char *country_code_, char *residence_country_code_);
char *TdSerializePersonalDetails (struct TdPersonalDetails *var);
void TdDestroyObjectPersonalDetails (struct TdPersonalDetails *var);
void TdStackStorerPersonalDetails (struct TdPersonalDetails *var, struct TdStackStorerMethods *M);
struct TdPersonalDetails *TdStackFetcherPersonalDetails (struct TdStackFetcherMethods *M);
struct TdPersonalDocument {
  int ID;
  int refcnt;
  struct TdVectorDatedFile *files_;
  struct TdVectorDatedFile *translation_;
};
struct TdPersonalDocument *TdCreateObjectPersonalDocument (struct TdVectorDatedFile *files_, struct TdVectorDatedFile *translation_);
char *TdSerializePersonalDocument (struct TdPersonalDocument *var);
void TdDestroyObjectPersonalDocument (struct TdPersonalDocument *var);
void TdStackStorerPersonalDocument (struct TdPersonalDocument *var, struct TdStackStorerMethods *M);
struct TdPersonalDocument *TdStackFetcherPersonalDocument (struct TdStackFetcherMethods *M);
struct TdPhoto {
  int ID;
  int refcnt;
  long long id_;
  int has_stickers_;
  struct TdVectorPhotoSize *sizes_;
};
struct TdPhoto *TdCreateObjectPhoto (long long id_, int has_stickers_, struct TdVectorPhotoSize *sizes_);
char *TdSerializePhoto (struct TdPhoto *var);
void TdDestroyObjectPhoto (struct TdPhoto *var);
void TdStackStorerPhoto (struct TdPhoto *var, struct TdStackStorerMethods *M);
struct TdPhoto *TdStackFetcherPhoto (struct TdStackFetcherMethods *M);
struct TdPhotoSize {
  int ID;
  int refcnt;
  char *type_;
  struct TdFile *photo_;
  int width_;
  int height_;
};
struct TdPhotoSize *TdCreateObjectPhotoSize (char *type_, struct TdFile *photo_, int width_, int height_);
char *TdSerializePhotoSize (struct TdPhotoSize *var);
void TdDestroyObjectPhotoSize (struct TdPhotoSize *var);
void TdStackStorerPhotoSize (struct TdPhotoSize *var, struct TdStackStorerMethods *M);
struct TdPhotoSize *TdStackFetcherPhotoSize (struct TdStackFetcherMethods *M);
struct TdProfilePhoto {
  int ID;
  int refcnt;
  long long id_;
  struct TdFile *small_;
  struct TdFile *big_;
};
struct TdProfilePhoto *TdCreateObjectProfilePhoto (long long id_, struct TdFile *small_, struct TdFile *big_);
char *TdSerializeProfilePhoto (struct TdProfilePhoto *var);
void TdDestroyObjectProfilePhoto (struct TdProfilePhoto *var);
void TdStackStorerProfilePhoto (struct TdProfilePhoto *var, struct TdStackStorerMethods *M);
struct TdProfilePhoto *TdStackFetcherProfilePhoto (struct TdStackFetcherMethods *M);
struct TdProxies {
  int ID;
  int refcnt;
  struct TdVectorProxy *proxies_;
};
struct TdProxies *TdCreateObjectProxies (struct TdVectorProxy *proxies_);
char *TdSerializeProxies (struct TdProxies *var);
void TdDestroyObjectProxies (struct TdProxies *var);
void TdStackStorerProxies (struct TdProxies *var, struct TdStackStorerMethods *M);
struct TdProxies *TdStackFetcherProxies (struct TdStackFetcherMethods *M);
struct TdProxy {
  int ID;
  int refcnt;
  int id_;
  char *server_;
  int port_;
  int last_used_date_;
  int is_enabled_;
  struct TdProxyType *type_;
};
struct TdProxy *TdCreateObjectProxy (int id_, char *server_, int port_, int last_used_date_, int is_enabled_, struct TdProxyType *type_);
char *TdSerializeProxy (struct TdProxy *var);
void TdDestroyObjectProxy (struct TdProxy *var);
void TdStackStorerProxy (struct TdProxy *var, struct TdStackStorerMethods *M);
struct TdProxy *TdStackFetcherProxy (struct TdStackFetcherMethods *M);
struct TdProxyType {
  int ID;
  int refcnt;
};
char *TdSerializeProxyType (struct TdProxyType *var);
void TdDestroyObjectProxyType (struct TdProxyType *var);
void TdStackStorerProxyType (struct TdProxyType *var, struct TdStackStorerMethods *M);
struct TdProxyType *TdStackFetcherProxyType (struct TdStackFetcherMethods *M);
enum List_ProxyType {
  CODE_ProxyTypeSocks5 = -890027341,
  CODE_ProxyTypeHttp = -1547188361,
  CODE_ProxyTypeMtproto = -1964826627,
};
struct TdProxyTypeSocks5 {
  int ID;
  int refcnt;
  char *username_;
  char *password_;
};
struct TdProxyTypeSocks5 *TdCreateObjectProxyTypeSocks5 (char *username_, char *password_);
char *TdSerializeProxyTypeSocks5 (struct TdProxyTypeSocks5 *var);
void TdDestroyObjectProxyTypeSocks5 (struct TdProxyTypeSocks5 *var);
void TdStackStorerProxyTypeSocks5 (struct TdProxyTypeSocks5 *var, struct TdStackStorerMethods *M);
struct TdProxyTypeSocks5 *TdStackFetcherProxyTypeSocks5 (struct TdStackFetcherMethods *M);
struct TdProxyTypeHttp {
  int ID;
  int refcnt;
  char *username_;
  char *password_;
  int http_only_;
};
struct TdProxyTypeHttp *TdCreateObjectProxyTypeHttp (char *username_, char *password_, int http_only_);
char *TdSerializeProxyTypeHttp (struct TdProxyTypeHttp *var);
void TdDestroyObjectProxyTypeHttp (struct TdProxyTypeHttp *var);
void TdStackStorerProxyTypeHttp (struct TdProxyTypeHttp *var, struct TdStackStorerMethods *M);
struct TdProxyTypeHttp *TdStackFetcherProxyTypeHttp (struct TdStackFetcherMethods *M);
struct TdProxyTypeMtproto {
  int ID;
  int refcnt;
  char *secret_;
};
struct TdProxyTypeMtproto *TdCreateObjectProxyTypeMtproto (char *secret_);
char *TdSerializeProxyTypeMtproto (struct TdProxyTypeMtproto *var);
void TdDestroyObjectProxyTypeMtproto (struct TdProxyTypeMtproto *var);
void TdStackStorerProxyTypeMtproto (struct TdProxyTypeMtproto *var, struct TdStackStorerMethods *M);
struct TdProxyTypeMtproto *TdStackFetcherProxyTypeMtproto (struct TdStackFetcherMethods *M);
struct TdPublicMessageLink {
  int ID;
  int refcnt;
  char *link_;
  char *html_;
};
struct TdPublicMessageLink *TdCreateObjectPublicMessageLink (char *link_, char *html_);
char *TdSerializePublicMessageLink (struct TdPublicMessageLink *var);
void TdDestroyObjectPublicMessageLink (struct TdPublicMessageLink *var);
void TdStackStorerPublicMessageLink (struct TdPublicMessageLink *var, struct TdStackStorerMethods *M);
struct TdPublicMessageLink *TdStackFetcherPublicMessageLink (struct TdStackFetcherMethods *M);
struct TdRecoveryEmailAddress {
  int ID;
  int refcnt;
  char *recovery_email_address_;
};
struct TdRecoveryEmailAddress *TdCreateObjectRecoveryEmailAddress (char *recovery_email_address_);
char *TdSerializeRecoveryEmailAddress (struct TdRecoveryEmailAddress *var);
void TdDestroyObjectRecoveryEmailAddress (struct TdRecoveryEmailAddress *var);
void TdStackStorerRecoveryEmailAddress (struct TdRecoveryEmailAddress *var, struct TdStackStorerMethods *M);
struct TdRecoveryEmailAddress *TdStackFetcherRecoveryEmailAddress (struct TdStackFetcherMethods *M);
struct TdRemoteFile {
  int ID;
  int refcnt;
  char *id_;
  int is_uploading_active_;
  int is_uploading_completed_;
  int uploaded_size_;
};
struct TdRemoteFile *TdCreateObjectRemoteFile (char *id_, int is_uploading_active_, int is_uploading_completed_, int uploaded_size_);
char *TdSerializeRemoteFile (struct TdRemoteFile *var);
void TdDestroyObjectRemoteFile (struct TdRemoteFile *var);
void TdStackStorerRemoteFile (struct TdRemoteFile *var, struct TdStackStorerMethods *M);
struct TdRemoteFile *TdStackFetcherRemoteFile (struct TdStackFetcherMethods *M);
struct TdReplyMarkup {
  int ID;
  int refcnt;
};
char *TdSerializeReplyMarkup (struct TdReplyMarkup *var);
void TdDestroyObjectReplyMarkup (struct TdReplyMarkup *var);
void TdStackStorerReplyMarkup (struct TdReplyMarkup *var, struct TdStackStorerMethods *M);
struct TdReplyMarkup *TdStackFetcherReplyMarkup (struct TdStackFetcherMethods *M);
enum List_ReplyMarkup {
  CODE_ReplyMarkupRemoveKeyboard = -691252879,
  CODE_ReplyMarkupForceReply = 1039104593,
  CODE_ReplyMarkupShowKeyboard = -992627133,
  CODE_ReplyMarkupInlineKeyboard = -619317658,
};
struct TdReplyMarkupRemoveKeyboard {
  int ID;
  int refcnt;
  int is_personal_;
};
struct TdReplyMarkupRemoveKeyboard *TdCreateObjectReplyMarkupRemoveKeyboard (int is_personal_);
char *TdSerializeReplyMarkupRemoveKeyboard (struct TdReplyMarkupRemoveKeyboard *var);
void TdDestroyObjectReplyMarkupRemoveKeyboard (struct TdReplyMarkupRemoveKeyboard *var);
void TdStackStorerReplyMarkupRemoveKeyboard (struct TdReplyMarkupRemoveKeyboard *var, struct TdStackStorerMethods *M);
struct TdReplyMarkupRemoveKeyboard *TdStackFetcherReplyMarkupRemoveKeyboard (struct TdStackFetcherMethods *M);
struct TdReplyMarkupForceReply {
  int ID;
  int refcnt;
  int is_personal_;
};
struct TdReplyMarkupForceReply *TdCreateObjectReplyMarkupForceReply (int is_personal_);
char *TdSerializeReplyMarkupForceReply (struct TdReplyMarkupForceReply *var);
void TdDestroyObjectReplyMarkupForceReply (struct TdReplyMarkupForceReply *var);
void TdStackStorerReplyMarkupForceReply (struct TdReplyMarkupForceReply *var, struct TdStackStorerMethods *M);
struct TdReplyMarkupForceReply *TdStackFetcherReplyMarkupForceReply (struct TdStackFetcherMethods *M);
struct TdReplyMarkupShowKeyboard {
  int ID;
  int refcnt;
  struct TdVectorVectorKeyboardButton *rows_;
  int resize_keyboard_;
  int one_time_;
  int is_personal_;
};
struct TdReplyMarkupShowKeyboard *TdCreateObjectReplyMarkupShowKeyboard (struct TdVectorVectorKeyboardButton *rows_, int resize_keyboard_, int one_time_, int is_personal_);
char *TdSerializeReplyMarkupShowKeyboard (struct TdReplyMarkupShowKeyboard *var);
void TdDestroyObjectReplyMarkupShowKeyboard (struct TdReplyMarkupShowKeyboard *var);
void TdStackStorerReplyMarkupShowKeyboard (struct TdReplyMarkupShowKeyboard *var, struct TdStackStorerMethods *M);
struct TdReplyMarkupShowKeyboard *TdStackFetcherReplyMarkupShowKeyboard (struct TdStackFetcherMethods *M);
struct TdReplyMarkupInlineKeyboard {
  int ID;
  int refcnt;
  struct TdVectorVectorInlineKeyboardButton *rows_;
};
struct TdReplyMarkupInlineKeyboard *TdCreateObjectReplyMarkupInlineKeyboard (struct TdVectorVectorInlineKeyboardButton *rows_);
char *TdSerializeReplyMarkupInlineKeyboard (struct TdReplyMarkupInlineKeyboard *var);
void TdDestroyObjectReplyMarkupInlineKeyboard (struct TdReplyMarkupInlineKeyboard *var);
void TdStackStorerReplyMarkupInlineKeyboard (struct TdReplyMarkupInlineKeyboard *var, struct TdStackStorerMethods *M);
struct TdReplyMarkupInlineKeyboard *TdStackFetcherReplyMarkupInlineKeyboard (struct TdStackFetcherMethods *M);
struct TdRichText {
  int ID;
  int refcnt;
};
char *TdSerializeRichText (struct TdRichText *var);
void TdDestroyObjectRichText (struct TdRichText *var);
void TdStackStorerRichText (struct TdRichText *var, struct TdStackStorerMethods *M);
struct TdRichText *TdStackFetcherRichText (struct TdStackFetcherMethods *M);
enum List_RichText {
  CODE_RichTextPlain = 482617702,
  CODE_RichTextBold = 1670844268,
  CODE_RichTextItalic = 1853354047,
  CODE_RichTextUnderline = -536019572,
  CODE_RichTextStrikethrough = 723413585,
  CODE_RichTextFixed = -1271496249,
  CODE_RichTextUrl = 1967248447,
  CODE_RichTextEmailAddress = 40018679,
  CODE_RichTexts = 1647457821,
};
struct TdRichTextPlain {
  int ID;
  int refcnt;
  char *text_;
};
struct TdRichTextPlain *TdCreateObjectRichTextPlain (char *text_);
char *TdSerializeRichTextPlain (struct TdRichTextPlain *var);
void TdDestroyObjectRichTextPlain (struct TdRichTextPlain *var);
void TdStackStorerRichTextPlain (struct TdRichTextPlain *var, struct TdStackStorerMethods *M);
struct TdRichTextPlain *TdStackFetcherRichTextPlain (struct TdStackFetcherMethods *M);
struct TdRichTextBold {
  int ID;
  int refcnt;
  struct TdRichText *text_;
};
struct TdRichTextBold *TdCreateObjectRichTextBold (struct TdRichText *text_);
char *TdSerializeRichTextBold (struct TdRichTextBold *var);
void TdDestroyObjectRichTextBold (struct TdRichTextBold *var);
void TdStackStorerRichTextBold (struct TdRichTextBold *var, struct TdStackStorerMethods *M);
struct TdRichTextBold *TdStackFetcherRichTextBold (struct TdStackFetcherMethods *M);
struct TdRichTextItalic {
  int ID;
  int refcnt;
  struct TdRichText *text_;
};
struct TdRichTextItalic *TdCreateObjectRichTextItalic (struct TdRichText *text_);
char *TdSerializeRichTextItalic (struct TdRichTextItalic *var);
void TdDestroyObjectRichTextItalic (struct TdRichTextItalic *var);
void TdStackStorerRichTextItalic (struct TdRichTextItalic *var, struct TdStackStorerMethods *M);
struct TdRichTextItalic *TdStackFetcherRichTextItalic (struct TdStackFetcherMethods *M);
struct TdRichTextUnderline {
  int ID;
  int refcnt;
  struct TdRichText *text_;
};
struct TdRichTextUnderline *TdCreateObjectRichTextUnderline (struct TdRichText *text_);
char *TdSerializeRichTextUnderline (struct TdRichTextUnderline *var);
void TdDestroyObjectRichTextUnderline (struct TdRichTextUnderline *var);
void TdStackStorerRichTextUnderline (struct TdRichTextUnderline *var, struct TdStackStorerMethods *M);
struct TdRichTextUnderline *TdStackFetcherRichTextUnderline (struct TdStackFetcherMethods *M);
struct TdRichTextStrikethrough {
  int ID;
  int refcnt;
  struct TdRichText *text_;
};
struct TdRichTextStrikethrough *TdCreateObjectRichTextStrikethrough (struct TdRichText *text_);
char *TdSerializeRichTextStrikethrough (struct TdRichTextStrikethrough *var);
void TdDestroyObjectRichTextStrikethrough (struct TdRichTextStrikethrough *var);
void TdStackStorerRichTextStrikethrough (struct TdRichTextStrikethrough *var, struct TdStackStorerMethods *M);
struct TdRichTextStrikethrough *TdStackFetcherRichTextStrikethrough (struct TdStackFetcherMethods *M);
struct TdRichTextFixed {
  int ID;
  int refcnt;
  struct TdRichText *text_;
};
struct TdRichTextFixed *TdCreateObjectRichTextFixed (struct TdRichText *text_);
char *TdSerializeRichTextFixed (struct TdRichTextFixed *var);
void TdDestroyObjectRichTextFixed (struct TdRichTextFixed *var);
void TdStackStorerRichTextFixed (struct TdRichTextFixed *var, struct TdStackStorerMethods *M);
struct TdRichTextFixed *TdStackFetcherRichTextFixed (struct TdStackFetcherMethods *M);
struct TdRichTextUrl {
  int ID;
  int refcnt;
  struct TdRichText *text_;
  char *url_;
};
struct TdRichTextUrl *TdCreateObjectRichTextUrl (struct TdRichText *text_, char *url_);
char *TdSerializeRichTextUrl (struct TdRichTextUrl *var);
void TdDestroyObjectRichTextUrl (struct TdRichTextUrl *var);
void TdStackStorerRichTextUrl (struct TdRichTextUrl *var, struct TdStackStorerMethods *M);
struct TdRichTextUrl *TdStackFetcherRichTextUrl (struct TdStackFetcherMethods *M);
struct TdRichTextEmailAddress {
  int ID;
  int refcnt;
  struct TdRichText *text_;
  char *email_address_;
};
struct TdRichTextEmailAddress *TdCreateObjectRichTextEmailAddress (struct TdRichText *text_, char *email_address_);
char *TdSerializeRichTextEmailAddress (struct TdRichTextEmailAddress *var);
void TdDestroyObjectRichTextEmailAddress (struct TdRichTextEmailAddress *var);
void TdStackStorerRichTextEmailAddress (struct TdRichTextEmailAddress *var, struct TdStackStorerMethods *M);
struct TdRichTextEmailAddress *TdStackFetcherRichTextEmailAddress (struct TdStackFetcherMethods *M);
struct TdRichTexts {
  int ID;
  int refcnt;
  struct TdVectorRichText *texts_;
};
struct TdRichTexts *TdCreateObjectRichTexts (struct TdVectorRichText *texts_);
char *TdSerializeRichTexts (struct TdRichTexts *var);
void TdDestroyObjectRichTexts (struct TdRichTexts *var);
void TdStackStorerRichTexts (struct TdRichTexts *var, struct TdStackStorerMethods *M);
struct TdRichTexts *TdStackFetcherRichTexts (struct TdStackFetcherMethods *M);
struct TdSavedCredentials {
  int ID;
  int refcnt;
  char *id_;
  char *title_;
};
struct TdSavedCredentials *TdCreateObjectSavedCredentials (char *id_, char *title_);
char *TdSerializeSavedCredentials (struct TdSavedCredentials *var);
void TdDestroyObjectSavedCredentials (struct TdSavedCredentials *var);
void TdStackStorerSavedCredentials (struct TdSavedCredentials *var, struct TdStackStorerMethods *M);
struct TdSavedCredentials *TdStackFetcherSavedCredentials (struct TdStackFetcherMethods *M);
struct TdScopeNotificationSettings {
  int ID;
  int refcnt;
  int mute_for_;
  char *sound_;
  int show_preview_;
};
struct TdScopeNotificationSettings *TdCreateObjectScopeNotificationSettings (int mute_for_, char *sound_, int show_preview_);
char *TdSerializeScopeNotificationSettings (struct TdScopeNotificationSettings *var);
void TdDestroyObjectScopeNotificationSettings (struct TdScopeNotificationSettings *var);
void TdStackStorerScopeNotificationSettings (struct TdScopeNotificationSettings *var, struct TdStackStorerMethods *M);
struct TdScopeNotificationSettings *TdStackFetcherScopeNotificationSettings (struct TdStackFetcherMethods *M);
struct TdSearchMessagesFilter {
  int ID;
  int refcnt;
};
char *TdSerializeSearchMessagesFilter (struct TdSearchMessagesFilter *var);
void TdDestroyObjectSearchMessagesFilter (struct TdSearchMessagesFilter *var);
void TdStackStorerSearchMessagesFilter (struct TdSearchMessagesFilter *var, struct TdStackStorerMethods *M);
struct TdSearchMessagesFilter *TdStackFetcherSearchMessagesFilter (struct TdStackFetcherMethods *M);
enum List_SearchMessagesFilter {
  CODE_SearchMessagesFilterEmpty = -869395657,
  CODE_SearchMessagesFilterAnimation = -155713339,
  CODE_SearchMessagesFilterAudio = 867505275,
  CODE_SearchMessagesFilterDocument = 1526331215,
  CODE_SearchMessagesFilterPhoto = 925932293,
  CODE_SearchMessagesFilterVideo = 115538222,
  CODE_SearchMessagesFilterVoiceNote = 1841439357,
  CODE_SearchMessagesFilterPhotoAndVideo = 1352130963,
  CODE_SearchMessagesFilterUrl = -1828724341,
  CODE_SearchMessagesFilterChatPhoto = -1247751329,
  CODE_SearchMessagesFilterCall = 1305231012,
  CODE_SearchMessagesFilterMissedCall = 970663098,
  CODE_SearchMessagesFilterVideoNote = 564323321,
  CODE_SearchMessagesFilterVoiceAndVideoNote = 664174819,
  CODE_SearchMessagesFilterMention = 2001258652,
  CODE_SearchMessagesFilterUnreadMention = -95769149,
};
struct TdSearchMessagesFilterEmpty {
  int ID;
  int refcnt;
};
struct TdSearchMessagesFilterEmpty *TdCreateObjectSearchMessagesFilterEmpty (void);
char *TdSerializeSearchMessagesFilterEmpty (struct TdSearchMessagesFilterEmpty *var);
void TdDestroyObjectSearchMessagesFilterEmpty (struct TdSearchMessagesFilterEmpty *var);
void TdStackStorerSearchMessagesFilterEmpty (struct TdSearchMessagesFilterEmpty *var, struct TdStackStorerMethods *M);
struct TdSearchMessagesFilterEmpty *TdStackFetcherSearchMessagesFilterEmpty (struct TdStackFetcherMethods *M);
struct TdSearchMessagesFilterAnimation {
  int ID;
  int refcnt;
};
struct TdSearchMessagesFilterAnimation *TdCreateObjectSearchMessagesFilterAnimation (void);
char *TdSerializeSearchMessagesFilterAnimation (struct TdSearchMessagesFilterAnimation *var);
void TdDestroyObjectSearchMessagesFilterAnimation (struct TdSearchMessagesFilterAnimation *var);
void TdStackStorerSearchMessagesFilterAnimation (struct TdSearchMessagesFilterAnimation *var, struct TdStackStorerMethods *M);
struct TdSearchMessagesFilterAnimation *TdStackFetcherSearchMessagesFilterAnimation (struct TdStackFetcherMethods *M);
struct TdSearchMessagesFilterAudio {
  int ID;
  int refcnt;
};
struct TdSearchMessagesFilterAudio *TdCreateObjectSearchMessagesFilterAudio (void);
char *TdSerializeSearchMessagesFilterAudio (struct TdSearchMessagesFilterAudio *var);
void TdDestroyObjectSearchMessagesFilterAudio (struct TdSearchMessagesFilterAudio *var);
void TdStackStorerSearchMessagesFilterAudio (struct TdSearchMessagesFilterAudio *var, struct TdStackStorerMethods *M);
struct TdSearchMessagesFilterAudio *TdStackFetcherSearchMessagesFilterAudio (struct TdStackFetcherMethods *M);
struct TdSearchMessagesFilterDocument {
  int ID;
  int refcnt;
};
struct TdSearchMessagesFilterDocument *TdCreateObjectSearchMessagesFilterDocument (void);
char *TdSerializeSearchMessagesFilterDocument (struct TdSearchMessagesFilterDocument *var);
void TdDestroyObjectSearchMessagesFilterDocument (struct TdSearchMessagesFilterDocument *var);
void TdStackStorerSearchMessagesFilterDocument (struct TdSearchMessagesFilterDocument *var, struct TdStackStorerMethods *M);
struct TdSearchMessagesFilterDocument *TdStackFetcherSearchMessagesFilterDocument (struct TdStackFetcherMethods *M);
struct TdSearchMessagesFilterPhoto {
  int ID;
  int refcnt;
};
struct TdSearchMessagesFilterPhoto *TdCreateObjectSearchMessagesFilterPhoto (void);
char *TdSerializeSearchMessagesFilterPhoto (struct TdSearchMessagesFilterPhoto *var);
void TdDestroyObjectSearchMessagesFilterPhoto (struct TdSearchMessagesFilterPhoto *var);
void TdStackStorerSearchMessagesFilterPhoto (struct TdSearchMessagesFilterPhoto *var, struct TdStackStorerMethods *M);
struct TdSearchMessagesFilterPhoto *TdStackFetcherSearchMessagesFilterPhoto (struct TdStackFetcherMethods *M);
struct TdSearchMessagesFilterVideo {
  int ID;
  int refcnt;
};
struct TdSearchMessagesFilterVideo *TdCreateObjectSearchMessagesFilterVideo (void);
char *TdSerializeSearchMessagesFilterVideo (struct TdSearchMessagesFilterVideo *var);
void TdDestroyObjectSearchMessagesFilterVideo (struct TdSearchMessagesFilterVideo *var);
void TdStackStorerSearchMessagesFilterVideo (struct TdSearchMessagesFilterVideo *var, struct TdStackStorerMethods *M);
struct TdSearchMessagesFilterVideo *TdStackFetcherSearchMessagesFilterVideo (struct TdStackFetcherMethods *M);
struct TdSearchMessagesFilterVoiceNote {
  int ID;
  int refcnt;
};
struct TdSearchMessagesFilterVoiceNote *TdCreateObjectSearchMessagesFilterVoiceNote (void);
char *TdSerializeSearchMessagesFilterVoiceNote (struct TdSearchMessagesFilterVoiceNote *var);
void TdDestroyObjectSearchMessagesFilterVoiceNote (struct TdSearchMessagesFilterVoiceNote *var);
void TdStackStorerSearchMessagesFilterVoiceNote (struct TdSearchMessagesFilterVoiceNote *var, struct TdStackStorerMethods *M);
struct TdSearchMessagesFilterVoiceNote *TdStackFetcherSearchMessagesFilterVoiceNote (struct TdStackFetcherMethods *M);
struct TdSearchMessagesFilterPhotoAndVideo {
  int ID;
  int refcnt;
};
struct TdSearchMessagesFilterPhotoAndVideo *TdCreateObjectSearchMessagesFilterPhotoAndVideo (void);
char *TdSerializeSearchMessagesFilterPhotoAndVideo (struct TdSearchMessagesFilterPhotoAndVideo *var);
void TdDestroyObjectSearchMessagesFilterPhotoAndVideo (struct TdSearchMessagesFilterPhotoAndVideo *var);
void TdStackStorerSearchMessagesFilterPhotoAndVideo (struct TdSearchMessagesFilterPhotoAndVideo *var, struct TdStackStorerMethods *M);
struct TdSearchMessagesFilterPhotoAndVideo *TdStackFetcherSearchMessagesFilterPhotoAndVideo (struct TdStackFetcherMethods *M);
struct TdSearchMessagesFilterUrl {
  int ID;
  int refcnt;
};
struct TdSearchMessagesFilterUrl *TdCreateObjectSearchMessagesFilterUrl (void);
char *TdSerializeSearchMessagesFilterUrl (struct TdSearchMessagesFilterUrl *var);
void TdDestroyObjectSearchMessagesFilterUrl (struct TdSearchMessagesFilterUrl *var);
void TdStackStorerSearchMessagesFilterUrl (struct TdSearchMessagesFilterUrl *var, struct TdStackStorerMethods *M);
struct TdSearchMessagesFilterUrl *TdStackFetcherSearchMessagesFilterUrl (struct TdStackFetcherMethods *M);
struct TdSearchMessagesFilterChatPhoto {
  int ID;
  int refcnt;
};
struct TdSearchMessagesFilterChatPhoto *TdCreateObjectSearchMessagesFilterChatPhoto (void);
char *TdSerializeSearchMessagesFilterChatPhoto (struct TdSearchMessagesFilterChatPhoto *var);
void TdDestroyObjectSearchMessagesFilterChatPhoto (struct TdSearchMessagesFilterChatPhoto *var);
void TdStackStorerSearchMessagesFilterChatPhoto (struct TdSearchMessagesFilterChatPhoto *var, struct TdStackStorerMethods *M);
struct TdSearchMessagesFilterChatPhoto *TdStackFetcherSearchMessagesFilterChatPhoto (struct TdStackFetcherMethods *M);
struct TdSearchMessagesFilterCall {
  int ID;
  int refcnt;
};
struct TdSearchMessagesFilterCall *TdCreateObjectSearchMessagesFilterCall (void);
char *TdSerializeSearchMessagesFilterCall (struct TdSearchMessagesFilterCall *var);
void TdDestroyObjectSearchMessagesFilterCall (struct TdSearchMessagesFilterCall *var);
void TdStackStorerSearchMessagesFilterCall (struct TdSearchMessagesFilterCall *var, struct TdStackStorerMethods *M);
struct TdSearchMessagesFilterCall *TdStackFetcherSearchMessagesFilterCall (struct TdStackFetcherMethods *M);
struct TdSearchMessagesFilterMissedCall {
  int ID;
  int refcnt;
};
struct TdSearchMessagesFilterMissedCall *TdCreateObjectSearchMessagesFilterMissedCall (void);
char *TdSerializeSearchMessagesFilterMissedCall (struct TdSearchMessagesFilterMissedCall *var);
void TdDestroyObjectSearchMessagesFilterMissedCall (struct TdSearchMessagesFilterMissedCall *var);
void TdStackStorerSearchMessagesFilterMissedCall (struct TdSearchMessagesFilterMissedCall *var, struct TdStackStorerMethods *M);
struct TdSearchMessagesFilterMissedCall *TdStackFetcherSearchMessagesFilterMissedCall (struct TdStackFetcherMethods *M);
struct TdSearchMessagesFilterVideoNote {
  int ID;
  int refcnt;
};
struct TdSearchMessagesFilterVideoNote *TdCreateObjectSearchMessagesFilterVideoNote (void);
char *TdSerializeSearchMessagesFilterVideoNote (struct TdSearchMessagesFilterVideoNote *var);
void TdDestroyObjectSearchMessagesFilterVideoNote (struct TdSearchMessagesFilterVideoNote *var);
void TdStackStorerSearchMessagesFilterVideoNote (struct TdSearchMessagesFilterVideoNote *var, struct TdStackStorerMethods *M);
struct TdSearchMessagesFilterVideoNote *TdStackFetcherSearchMessagesFilterVideoNote (struct TdStackFetcherMethods *M);
struct TdSearchMessagesFilterVoiceAndVideoNote {
  int ID;
  int refcnt;
};
struct TdSearchMessagesFilterVoiceAndVideoNote *TdCreateObjectSearchMessagesFilterVoiceAndVideoNote (void);
char *TdSerializeSearchMessagesFilterVoiceAndVideoNote (struct TdSearchMessagesFilterVoiceAndVideoNote *var);
void TdDestroyObjectSearchMessagesFilterVoiceAndVideoNote (struct TdSearchMessagesFilterVoiceAndVideoNote *var);
void TdStackStorerSearchMessagesFilterVoiceAndVideoNote (struct TdSearchMessagesFilterVoiceAndVideoNote *var, struct TdStackStorerMethods *M);
struct TdSearchMessagesFilterVoiceAndVideoNote *TdStackFetcherSearchMessagesFilterVoiceAndVideoNote (struct TdStackFetcherMethods *M);
struct TdSearchMessagesFilterMention {
  int ID;
  int refcnt;
};
struct TdSearchMessagesFilterMention *TdCreateObjectSearchMessagesFilterMention (void);
char *TdSerializeSearchMessagesFilterMention (struct TdSearchMessagesFilterMention *var);
void TdDestroyObjectSearchMessagesFilterMention (struct TdSearchMessagesFilterMention *var);
void TdStackStorerSearchMessagesFilterMention (struct TdSearchMessagesFilterMention *var, struct TdStackStorerMethods *M);
struct TdSearchMessagesFilterMention *TdStackFetcherSearchMessagesFilterMention (struct TdStackFetcherMethods *M);
struct TdSearchMessagesFilterUnreadMention {
  int ID;
  int refcnt;
};
struct TdSearchMessagesFilterUnreadMention *TdCreateObjectSearchMessagesFilterUnreadMention (void);
char *TdSerializeSearchMessagesFilterUnreadMention (struct TdSearchMessagesFilterUnreadMention *var);
void TdDestroyObjectSearchMessagesFilterUnreadMention (struct TdSearchMessagesFilterUnreadMention *var);
void TdStackStorerSearchMessagesFilterUnreadMention (struct TdSearchMessagesFilterUnreadMention *var, struct TdStackStorerMethods *M);
struct TdSearchMessagesFilterUnreadMention *TdStackFetcherSearchMessagesFilterUnreadMention (struct TdStackFetcherMethods *M);
struct TdSeconds {
  int ID;
  int refcnt;
  double seconds_;
};
struct TdSeconds *TdCreateObjectSeconds (double seconds_);
char *TdSerializeSeconds (struct TdSeconds *var);
void TdDestroyObjectSeconds (struct TdSeconds *var);
void TdStackStorerSeconds (struct TdSeconds *var, struct TdStackStorerMethods *M);
struct TdSeconds *TdStackFetcherSeconds (struct TdStackFetcherMethods *M);
struct TdSecretChat {
  int ID;
  int refcnt;
  int id_;
  int user_id_;
  struct TdSecretChatState *state_;
  int is_outbound_;
  int ttl_;
  struct TdBytes key_hash_;
  int layer_;
};
struct TdSecretChat *TdCreateObjectSecretChat (int id_, int user_id_, struct TdSecretChatState *state_, int is_outbound_, int ttl_, struct TdBytes key_hash_, int layer_);
char *TdSerializeSecretChat (struct TdSecretChat *var);
void TdDestroyObjectSecretChat (struct TdSecretChat *var);
void TdStackStorerSecretChat (struct TdSecretChat *var, struct TdStackStorerMethods *M);
struct TdSecretChat *TdStackFetcherSecretChat (struct TdStackFetcherMethods *M);
struct TdSecretChatState {
  int ID;
  int refcnt;
};
char *TdSerializeSecretChatState (struct TdSecretChatState *var);
void TdDestroyObjectSecretChatState (struct TdSecretChatState *var);
void TdStackStorerSecretChatState (struct TdSecretChatState *var, struct TdStackStorerMethods *M);
struct TdSecretChatState *TdStackFetcherSecretChatState (struct TdStackFetcherMethods *M);
enum List_SecretChatState {
  CODE_SecretChatStatePending = -1637050756,
  CODE_SecretChatStateReady = -1611352087,
  CODE_SecretChatStateClosed = -1945106707,
};
struct TdSecretChatStatePending {
  int ID;
  int refcnt;
};
struct TdSecretChatStatePending *TdCreateObjectSecretChatStatePending (void);
char *TdSerializeSecretChatStatePending (struct TdSecretChatStatePending *var);
void TdDestroyObjectSecretChatStatePending (struct TdSecretChatStatePending *var);
void TdStackStorerSecretChatStatePending (struct TdSecretChatStatePending *var, struct TdStackStorerMethods *M);
struct TdSecretChatStatePending *TdStackFetcherSecretChatStatePending (struct TdStackFetcherMethods *M);
struct TdSecretChatStateReady {
  int ID;
  int refcnt;
};
struct TdSecretChatStateReady *TdCreateObjectSecretChatStateReady (void);
char *TdSerializeSecretChatStateReady (struct TdSecretChatStateReady *var);
void TdDestroyObjectSecretChatStateReady (struct TdSecretChatStateReady *var);
void TdStackStorerSecretChatStateReady (struct TdSecretChatStateReady *var, struct TdStackStorerMethods *M);
struct TdSecretChatStateReady *TdStackFetcherSecretChatStateReady (struct TdStackFetcherMethods *M);
struct TdSecretChatStateClosed {
  int ID;
  int refcnt;
};
struct TdSecretChatStateClosed *TdCreateObjectSecretChatStateClosed (void);
char *TdSerializeSecretChatStateClosed (struct TdSecretChatStateClosed *var);
void TdDestroyObjectSecretChatStateClosed (struct TdSecretChatStateClosed *var);
void TdStackStorerSecretChatStateClosed (struct TdSecretChatStateClosed *var, struct TdStackStorerMethods *M);
struct TdSecretChatStateClosed *TdStackFetcherSecretChatStateClosed (struct TdStackFetcherMethods *M);
struct TdSession {
  int ID;
  int refcnt;
  long long id_;
  int is_current_;
  int api_id_;
  char *application_name_;
  char *application_version_;
  int is_official_application_;
  char *device_model_;
  char *platform_;
  char *system_version_;
  int log_in_date_;
  int last_active_date_;
  char *ip_;
  char *country_;
  char *region_;
};
struct TdSession *TdCreateObjectSession (long long id_, int is_current_, int api_id_, char *application_name_, char *application_version_, int is_official_application_, char *device_model_, char *platform_, char *system_version_, int log_in_date_, int last_active_date_, char *ip_, char *country_, char *region_);
char *TdSerializeSession (struct TdSession *var);
void TdDestroyObjectSession (struct TdSession *var);
void TdStackStorerSession (struct TdSession *var, struct TdStackStorerMethods *M);
struct TdSession *TdStackFetcherSession (struct TdStackFetcherMethods *M);
struct TdSessions {
  int ID;
  int refcnt;
  struct TdVectorSession *sessions_;
};
struct TdSessions *TdCreateObjectSessions (struct TdVectorSession *sessions_);
char *TdSerializeSessions (struct TdSessions *var);
void TdDestroyObjectSessions (struct TdSessions *var);
void TdStackStorerSessions (struct TdSessions *var, struct TdStackStorerMethods *M);
struct TdSessions *TdStackFetcherSessions (struct TdStackFetcherMethods *M);
struct TdShippingOption {
  int ID;
  int refcnt;
  char *id_;
  char *title_;
  struct TdVectorLabeledPricePart *price_parts_;
};
struct TdShippingOption *TdCreateObjectShippingOption (char *id_, char *title_, struct TdVectorLabeledPricePart *price_parts_);
char *TdSerializeShippingOption (struct TdShippingOption *var);
void TdDestroyObjectShippingOption (struct TdShippingOption *var);
void TdStackStorerShippingOption (struct TdShippingOption *var, struct TdStackStorerMethods *M);
struct TdShippingOption *TdStackFetcherShippingOption (struct TdStackFetcherMethods *M);
struct TdSticker {
  int ID;
  int refcnt;
  long long set_id_;
  int width_;
  int height_;
  char *emoji_;
  int is_mask_;
  struct TdMaskPosition *mask_position_;
  struct TdPhotoSize *thumbnail_;
  struct TdFile *sticker_;
};
struct TdSticker *TdCreateObjectSticker (long long set_id_, int width_, int height_, char *emoji_, int is_mask_, struct TdMaskPosition *mask_position_, struct TdPhotoSize *thumbnail_, struct TdFile *sticker_);
char *TdSerializeSticker (struct TdSticker *var);
void TdDestroyObjectSticker (struct TdSticker *var);
void TdStackStorerSticker (struct TdSticker *var, struct TdStackStorerMethods *M);
struct TdSticker *TdStackFetcherSticker (struct TdStackFetcherMethods *M);
struct TdStickerEmojis {
  int ID;
  int refcnt;
  struct TdVectorString *emojis_;
};
struct TdStickerEmojis *TdCreateObjectStickerEmojis (struct TdVectorString *emojis_);
char *TdSerializeStickerEmojis (struct TdStickerEmojis *var);
void TdDestroyObjectStickerEmojis (struct TdStickerEmojis *var);
void TdStackStorerStickerEmojis (struct TdStickerEmojis *var, struct TdStackStorerMethods *M);
struct TdStickerEmojis *TdStackFetcherStickerEmojis (struct TdStackFetcherMethods *M);
struct TdStickerSet {
  int ID;
  int refcnt;
  long long id_;
  char *title_;
  char *name_;
  int is_installed_;
  int is_archived_;
  int is_official_;
  int is_masks_;
  int is_viewed_;
  struct TdVectorSticker *stickers_;
  struct TdVectorStickerEmojis *emojis_;
};
struct TdStickerSet *TdCreateObjectStickerSet (long long id_, char *title_, char *name_, int is_installed_, int is_archived_, int is_official_, int is_masks_, int is_viewed_, struct TdVectorSticker *stickers_, struct TdVectorStickerEmojis *emojis_);
char *TdSerializeStickerSet (struct TdStickerSet *var);
void TdDestroyObjectStickerSet (struct TdStickerSet *var);
void TdStackStorerStickerSet (struct TdStickerSet *var, struct TdStackStorerMethods *M);
struct TdStickerSet *TdStackFetcherStickerSet (struct TdStackFetcherMethods *M);
struct TdStickerSetInfo {
  int ID;
  int refcnt;
  long long id_;
  char *title_;
  char *name_;
  int is_installed_;
  int is_archived_;
  int is_official_;
  int is_masks_;
  int is_viewed_;
  int size_;
  struct TdVectorSticker *covers_;
};
struct TdStickerSetInfo *TdCreateObjectStickerSetInfo (long long id_, char *title_, char *name_, int is_installed_, int is_archived_, int is_official_, int is_masks_, int is_viewed_, int size_, struct TdVectorSticker *covers_);
char *TdSerializeStickerSetInfo (struct TdStickerSetInfo *var);
void TdDestroyObjectStickerSetInfo (struct TdStickerSetInfo *var);
void TdStackStorerStickerSetInfo (struct TdStickerSetInfo *var, struct TdStackStorerMethods *M);
struct TdStickerSetInfo *TdStackFetcherStickerSetInfo (struct TdStackFetcherMethods *M);
struct TdStickerSets {
  int ID;
  int refcnt;
  int total_count_;
  struct TdVectorStickerSetInfo *sets_;
};
struct TdStickerSets *TdCreateObjectStickerSets (int total_count_, struct TdVectorStickerSetInfo *sets_);
char *TdSerializeStickerSets (struct TdStickerSets *var);
void TdDestroyObjectStickerSets (struct TdStickerSets *var);
void TdStackStorerStickerSets (struct TdStickerSets *var, struct TdStackStorerMethods *M);
struct TdStickerSets *TdStackFetcherStickerSets (struct TdStackFetcherMethods *M);
struct TdStickers {
  int ID;
  int refcnt;
  struct TdVectorSticker *stickers_;
};
struct TdStickers *TdCreateObjectStickers (struct TdVectorSticker *stickers_);
char *TdSerializeStickers (struct TdStickers *var);
void TdDestroyObjectStickers (struct TdStickers *var);
void TdStackStorerStickers (struct TdStickers *var, struct TdStackStorerMethods *M);
struct TdStickers *TdStackFetcherStickers (struct TdStackFetcherMethods *M);
struct TdStorageStatistics {
  int ID;
  int refcnt;
  long long size_;
  int count_;
  struct TdVectorStorageStatisticsByChat *by_chat_;
};
struct TdStorageStatistics *TdCreateObjectStorageStatistics (long long size_, int count_, struct TdVectorStorageStatisticsByChat *by_chat_);
char *TdSerializeStorageStatistics (struct TdStorageStatistics *var);
void TdDestroyObjectStorageStatistics (struct TdStorageStatistics *var);
void TdStackStorerStorageStatistics (struct TdStorageStatistics *var, struct TdStackStorerMethods *M);
struct TdStorageStatistics *TdStackFetcherStorageStatistics (struct TdStackFetcherMethods *M);
struct TdStorageStatisticsByChat {
  int ID;
  int refcnt;
  long long chat_id_;
  long long size_;
  int count_;
  struct TdVectorStorageStatisticsByFileType *by_file_type_;
};
struct TdStorageStatisticsByChat *TdCreateObjectStorageStatisticsByChat (long long chat_id_, long long size_, int count_, struct TdVectorStorageStatisticsByFileType *by_file_type_);
char *TdSerializeStorageStatisticsByChat (struct TdStorageStatisticsByChat *var);
void TdDestroyObjectStorageStatisticsByChat (struct TdStorageStatisticsByChat *var);
void TdStackStorerStorageStatisticsByChat (struct TdStorageStatisticsByChat *var, struct TdStackStorerMethods *M);
struct TdStorageStatisticsByChat *TdStackFetcherStorageStatisticsByChat (struct TdStackFetcherMethods *M);
struct TdStorageStatisticsByFileType {
  int ID;
  int refcnt;
  struct TdFileType *file_type_;
  long long size_;
  int count_;
};
struct TdStorageStatisticsByFileType *TdCreateObjectStorageStatisticsByFileType (struct TdFileType *file_type_, long long size_, int count_);
char *TdSerializeStorageStatisticsByFileType (struct TdStorageStatisticsByFileType *var);
void TdDestroyObjectStorageStatisticsByFileType (struct TdStorageStatisticsByFileType *var);
void TdStackStorerStorageStatisticsByFileType (struct TdStorageStatisticsByFileType *var, struct TdStackStorerMethods *M);
struct TdStorageStatisticsByFileType *TdStackFetcherStorageStatisticsByFileType (struct TdStackFetcherMethods *M);
struct TdStorageStatisticsFast {
  int ID;
  int refcnt;
  long long files_size_;
  int file_count_;
  long long database_size_;
};
struct TdStorageStatisticsFast *TdCreateObjectStorageStatisticsFast (long long files_size_, int file_count_, long long database_size_);
char *TdSerializeStorageStatisticsFast (struct TdStorageStatisticsFast *var);
void TdDestroyObjectStorageStatisticsFast (struct TdStorageStatisticsFast *var);
void TdStackStorerStorageStatisticsFast (struct TdStorageStatisticsFast *var, struct TdStackStorerMethods *M);
struct TdStorageStatisticsFast *TdStackFetcherStorageStatisticsFast (struct TdStackFetcherMethods *M);
struct TdSupergroup {
  int ID;
  int refcnt;
  int id_;
  char *username_;
  int date_;
  struct TdChatMemberStatus *status_;
  int member_count_;
  int anyone_can_invite_;
  int sign_messages_;
  int is_channel_;
  int is_verified_;
  char *restriction_reason_;
};
struct TdSupergroup *TdCreateObjectSupergroup (int id_, char *username_, int date_, struct TdChatMemberStatus *status_, int member_count_, int anyone_can_invite_, int sign_messages_, int is_channel_, int is_verified_, char *restriction_reason_);
char *TdSerializeSupergroup (struct TdSupergroup *var);
void TdDestroyObjectSupergroup (struct TdSupergroup *var);
void TdStackStorerSupergroup (struct TdSupergroup *var, struct TdStackStorerMethods *M);
struct TdSupergroup *TdStackFetcherSupergroup (struct TdStackFetcherMethods *M);
struct TdSupergroupFullInfo {
  int ID;
  int refcnt;
  char *description_;
  int member_count_;
  int administrator_count_;
  int restricted_count_;
  int banned_count_;
  int can_get_members_;
  int can_set_username_;
  int can_set_sticker_set_;
  int is_all_history_available_;
  long long sticker_set_id_;
  char *invite_link_;
  long long pinned_message_id_;
  int upgraded_from_basic_group_id_;
  long long upgraded_from_max_message_id_;
};
struct TdSupergroupFullInfo *TdCreateObjectSupergroupFullInfo (char *description_, int member_count_, int administrator_count_, int restricted_count_, int banned_count_, int can_get_members_, int can_set_username_, int can_set_sticker_set_, int is_all_history_available_, long long sticker_set_id_, char *invite_link_, long long pinned_message_id_, int upgraded_from_basic_group_id_, long long upgraded_from_max_message_id_);
char *TdSerializeSupergroupFullInfo (struct TdSupergroupFullInfo *var);
void TdDestroyObjectSupergroupFullInfo (struct TdSupergroupFullInfo *var);
void TdStackStorerSupergroupFullInfo (struct TdSupergroupFullInfo *var, struct TdStackStorerMethods *M);
struct TdSupergroupFullInfo *TdStackFetcherSupergroupFullInfo (struct TdStackFetcherMethods *M);
struct TdSupergroupMembersFilter {
  int ID;
  int refcnt;
};
char *TdSerializeSupergroupMembersFilter (struct TdSupergroupMembersFilter *var);
void TdDestroyObjectSupergroupMembersFilter (struct TdSupergroupMembersFilter *var);
void TdStackStorerSupergroupMembersFilter (struct TdSupergroupMembersFilter *var, struct TdStackStorerMethods *M);
struct TdSupergroupMembersFilter *TdStackFetcherSupergroupMembersFilter (struct TdStackFetcherMethods *M);
enum List_SupergroupMembersFilter {
  CODE_SupergroupMembersFilterRecent = 1178199509,
  CODE_SupergroupMembersFilterAdministrators = -2097380265,
  CODE_SupergroupMembersFilterSearch = -1696358469,
  CODE_SupergroupMembersFilterRestricted = -1107800034,
  CODE_SupergroupMembersFilterBanned = -1210621683,
  CODE_SupergroupMembersFilterBots = 492138918,
};
struct TdSupergroupMembersFilterRecent {
  int ID;
  int refcnt;
};
struct TdSupergroupMembersFilterRecent *TdCreateObjectSupergroupMembersFilterRecent (void);
char *TdSerializeSupergroupMembersFilterRecent (struct TdSupergroupMembersFilterRecent *var);
void TdDestroyObjectSupergroupMembersFilterRecent (struct TdSupergroupMembersFilterRecent *var);
void TdStackStorerSupergroupMembersFilterRecent (struct TdSupergroupMembersFilterRecent *var, struct TdStackStorerMethods *M);
struct TdSupergroupMembersFilterRecent *TdStackFetcherSupergroupMembersFilterRecent (struct TdStackFetcherMethods *M);
struct TdSupergroupMembersFilterAdministrators {
  int ID;
  int refcnt;
};
struct TdSupergroupMembersFilterAdministrators *TdCreateObjectSupergroupMembersFilterAdministrators (void);
char *TdSerializeSupergroupMembersFilterAdministrators (struct TdSupergroupMembersFilterAdministrators *var);
void TdDestroyObjectSupergroupMembersFilterAdministrators (struct TdSupergroupMembersFilterAdministrators *var);
void TdStackStorerSupergroupMembersFilterAdministrators (struct TdSupergroupMembersFilterAdministrators *var, struct TdStackStorerMethods *M);
struct TdSupergroupMembersFilterAdministrators *TdStackFetcherSupergroupMembersFilterAdministrators (struct TdStackFetcherMethods *M);
struct TdSupergroupMembersFilterSearch {
  int ID;
  int refcnt;
  char *query_;
};
struct TdSupergroupMembersFilterSearch *TdCreateObjectSupergroupMembersFilterSearch (char *query_);
char *TdSerializeSupergroupMembersFilterSearch (struct TdSupergroupMembersFilterSearch *var);
void TdDestroyObjectSupergroupMembersFilterSearch (struct TdSupergroupMembersFilterSearch *var);
void TdStackStorerSupergroupMembersFilterSearch (struct TdSupergroupMembersFilterSearch *var, struct TdStackStorerMethods *M);
struct TdSupergroupMembersFilterSearch *TdStackFetcherSupergroupMembersFilterSearch (struct TdStackFetcherMethods *M);
struct TdSupergroupMembersFilterRestricted {
  int ID;
  int refcnt;
  char *query_;
};
struct TdSupergroupMembersFilterRestricted *TdCreateObjectSupergroupMembersFilterRestricted (char *query_);
char *TdSerializeSupergroupMembersFilterRestricted (struct TdSupergroupMembersFilterRestricted *var);
void TdDestroyObjectSupergroupMembersFilterRestricted (struct TdSupergroupMembersFilterRestricted *var);
void TdStackStorerSupergroupMembersFilterRestricted (struct TdSupergroupMembersFilterRestricted *var, struct TdStackStorerMethods *M);
struct TdSupergroupMembersFilterRestricted *TdStackFetcherSupergroupMembersFilterRestricted (struct TdStackFetcherMethods *M);
struct TdSupergroupMembersFilterBanned {
  int ID;
  int refcnt;
  char *query_;
};
struct TdSupergroupMembersFilterBanned *TdCreateObjectSupergroupMembersFilterBanned (char *query_);
char *TdSerializeSupergroupMembersFilterBanned (struct TdSupergroupMembersFilterBanned *var);
void TdDestroyObjectSupergroupMembersFilterBanned (struct TdSupergroupMembersFilterBanned *var);
void TdStackStorerSupergroupMembersFilterBanned (struct TdSupergroupMembersFilterBanned *var, struct TdStackStorerMethods *M);
struct TdSupergroupMembersFilterBanned *TdStackFetcherSupergroupMembersFilterBanned (struct TdStackFetcherMethods *M);
struct TdSupergroupMembersFilterBots {
  int ID;
  int refcnt;
};
struct TdSupergroupMembersFilterBots *TdCreateObjectSupergroupMembersFilterBots (void);
char *TdSerializeSupergroupMembersFilterBots (struct TdSupergroupMembersFilterBots *var);
void TdDestroyObjectSupergroupMembersFilterBots (struct TdSupergroupMembersFilterBots *var);
void TdStackStorerSupergroupMembersFilterBots (struct TdSupergroupMembersFilterBots *var, struct TdStackStorerMethods *M);
struct TdSupergroupMembersFilterBots *TdStackFetcherSupergroupMembersFilterBots (struct TdStackFetcherMethods *M);
struct TdTMeUrl {
  int ID;
  int refcnt;
  char *url_;
  struct TdTMeUrlType *type_;
};
struct TdTMeUrl *TdCreateObjectTMeUrl (char *url_, struct TdTMeUrlType *type_);
char *TdSerializeTMeUrl (struct TdTMeUrl *var);
void TdDestroyObjectTMeUrl (struct TdTMeUrl *var);
void TdStackStorerTMeUrl (struct TdTMeUrl *var, struct TdStackStorerMethods *M);
struct TdTMeUrl *TdStackFetcherTMeUrl (struct TdStackFetcherMethods *M);
struct TdTMeUrlType {
  int ID;
  int refcnt;
};
char *TdSerializeTMeUrlType (struct TdTMeUrlType *var);
void TdDestroyObjectTMeUrlType (struct TdTMeUrlType *var);
void TdStackStorerTMeUrlType (struct TdTMeUrlType *var, struct TdStackStorerMethods *M);
struct TdTMeUrlType *TdStackFetcherTMeUrlType (struct TdStackFetcherMethods *M);
enum List_TMeUrlType {
  CODE_TMeUrlTypeUser = -1198700130,
  CODE_TMeUrlTypeSupergroup = -1353369944,
  CODE_TMeUrlTypeChatInvite = 313907785,
  CODE_TMeUrlTypeStickerSet = 1602473196,
};
struct TdTMeUrlTypeUser {
  int ID;
  int refcnt;
  int user_id_;
};
struct TdTMeUrlTypeUser *TdCreateObjectTMeUrlTypeUser (int user_id_);
char *TdSerializeTMeUrlTypeUser (struct TdTMeUrlTypeUser *var);
void TdDestroyObjectTMeUrlTypeUser (struct TdTMeUrlTypeUser *var);
void TdStackStorerTMeUrlTypeUser (struct TdTMeUrlTypeUser *var, struct TdStackStorerMethods *M);
struct TdTMeUrlTypeUser *TdStackFetcherTMeUrlTypeUser (struct TdStackFetcherMethods *M);
struct TdTMeUrlTypeSupergroup {
  int ID;
  int refcnt;
  long long supergroup_id_;
};
struct TdTMeUrlTypeSupergroup *TdCreateObjectTMeUrlTypeSupergroup (long long supergroup_id_);
char *TdSerializeTMeUrlTypeSupergroup (struct TdTMeUrlTypeSupergroup *var);
void TdDestroyObjectTMeUrlTypeSupergroup (struct TdTMeUrlTypeSupergroup *var);
void TdStackStorerTMeUrlTypeSupergroup (struct TdTMeUrlTypeSupergroup *var, struct TdStackStorerMethods *M);
struct TdTMeUrlTypeSupergroup *TdStackFetcherTMeUrlTypeSupergroup (struct TdStackFetcherMethods *M);
struct TdTMeUrlTypeChatInvite {
  int ID;
  int refcnt;
  struct TdChatInviteLinkInfo *info_;
};
struct TdTMeUrlTypeChatInvite *TdCreateObjectTMeUrlTypeChatInvite (struct TdChatInviteLinkInfo *info_);
char *TdSerializeTMeUrlTypeChatInvite (struct TdTMeUrlTypeChatInvite *var);
void TdDestroyObjectTMeUrlTypeChatInvite (struct TdTMeUrlTypeChatInvite *var);
void TdStackStorerTMeUrlTypeChatInvite (struct TdTMeUrlTypeChatInvite *var, struct TdStackStorerMethods *M);
struct TdTMeUrlTypeChatInvite *TdStackFetcherTMeUrlTypeChatInvite (struct TdStackFetcherMethods *M);
struct TdTMeUrlTypeStickerSet {
  int ID;
  int refcnt;
  long long sticker_set_id_;
};
struct TdTMeUrlTypeStickerSet *TdCreateObjectTMeUrlTypeStickerSet (long long sticker_set_id_);
char *TdSerializeTMeUrlTypeStickerSet (struct TdTMeUrlTypeStickerSet *var);
void TdDestroyObjectTMeUrlTypeStickerSet (struct TdTMeUrlTypeStickerSet *var);
void TdStackStorerTMeUrlTypeStickerSet (struct TdTMeUrlTypeStickerSet *var, struct TdStackStorerMethods *M);
struct TdTMeUrlTypeStickerSet *TdStackFetcherTMeUrlTypeStickerSet (struct TdStackFetcherMethods *M);
struct TdTMeUrls {
  int ID;
  int refcnt;
  struct TdVectorTMeUrl *urls_;
};
struct TdTMeUrls *TdCreateObjectTMeUrls (struct TdVectorTMeUrl *urls_);
char *TdSerializeTMeUrls (struct TdTMeUrls *var);
void TdDestroyObjectTMeUrls (struct TdTMeUrls *var);
void TdStackStorerTMeUrls (struct TdTMeUrls *var, struct TdStackStorerMethods *M);
struct TdTMeUrls *TdStackFetcherTMeUrls (struct TdStackFetcherMethods *M);
struct TdTdlibParameters {
  int ID;
  int refcnt;
  int use_test_dc_;
  char *database_directory_;
  char *files_directory_;
  int use_file_database_;
  int use_chat_info_database_;
  int use_message_database_;
  int use_secret_chats_;
  int api_id_;
  char *api_hash_;
  char *system_language_code_;
  char *device_model_;
  char *system_version_;
  char *application_version_;
  int enable_storage_optimizer_;
  int ignore_file_names_;
};
struct TdTdlibParameters *TdCreateObjectTdlibParameters (int use_test_dc_, char *database_directory_, char *files_directory_, int use_file_database_, int use_chat_info_database_, int use_message_database_, int use_secret_chats_, int api_id_, char *api_hash_, char *system_language_code_, char *device_model_, char *system_version_, char *application_version_, int enable_storage_optimizer_, int ignore_file_names_);
char *TdSerializeTdlibParameters (struct TdTdlibParameters *var);
void TdDestroyObjectTdlibParameters (struct TdTdlibParameters *var);
void TdStackStorerTdlibParameters (struct TdTdlibParameters *var, struct TdStackStorerMethods *M);
struct TdTdlibParameters *TdStackFetcherTdlibParameters (struct TdStackFetcherMethods *M);
struct TdTemporaryPasswordState {
  int ID;
  int refcnt;
  int has_password_;
  int valid_for_;
};
struct TdTemporaryPasswordState *TdCreateObjectTemporaryPasswordState (int has_password_, int valid_for_);
char *TdSerializeTemporaryPasswordState (struct TdTemporaryPasswordState *var);
void TdDestroyObjectTemporaryPasswordState (struct TdTemporaryPasswordState *var);
void TdStackStorerTemporaryPasswordState (struct TdTemporaryPasswordState *var, struct TdStackStorerMethods *M);
struct TdTemporaryPasswordState *TdStackFetcherTemporaryPasswordState (struct TdStackFetcherMethods *M);
struct TdTermsOfService {
  int ID;
  int refcnt;
  struct TdFormattedText *text_;
  int min_user_age_;
  int show_popup_;
};
struct TdTermsOfService *TdCreateObjectTermsOfService (struct TdFormattedText *text_, int min_user_age_, int show_popup_);
char *TdSerializeTermsOfService (struct TdTermsOfService *var);
void TdDestroyObjectTermsOfService (struct TdTermsOfService *var);
void TdStackStorerTermsOfService (struct TdTermsOfService *var, struct TdStackStorerMethods *M);
struct TdTermsOfService *TdStackFetcherTermsOfService (struct TdStackFetcherMethods *M);
struct TdTestBytes {
  int ID;
  int refcnt;
  struct TdBytes value_;
};
struct TdTestBytes *TdCreateObjectTestBytes (struct TdBytes value_);
char *TdSerializeTestBytes (struct TdTestBytes *var);
void TdDestroyObjectTestBytes (struct TdTestBytes *var);
void TdStackStorerTestBytes (struct TdTestBytes *var, struct TdStackStorerMethods *M);
struct TdTestBytes *TdStackFetcherTestBytes (struct TdStackFetcherMethods *M);
struct TdTestInt {
  int ID;
  int refcnt;
  int value_;
};
struct TdTestInt *TdCreateObjectTestInt (int value_);
char *TdSerializeTestInt (struct TdTestInt *var);
void TdDestroyObjectTestInt (struct TdTestInt *var);
void TdStackStorerTestInt (struct TdTestInt *var, struct TdStackStorerMethods *M);
struct TdTestInt *TdStackFetcherTestInt (struct TdStackFetcherMethods *M);
struct TdTestString {
  int ID;
  int refcnt;
  char *value_;
};
struct TdTestString *TdCreateObjectTestString (char *value_);
char *TdSerializeTestString (struct TdTestString *var);
void TdDestroyObjectTestString (struct TdTestString *var);
void TdStackStorerTestString (struct TdTestString *var, struct TdStackStorerMethods *M);
struct TdTestString *TdStackFetcherTestString (struct TdStackFetcherMethods *M);
struct TdTestVectorInt {
  int ID;
  int refcnt;
  struct TdVectorInt *value_;
};
struct TdTestVectorInt *TdCreateObjectTestVectorInt (struct TdVectorInt *value_);
char *TdSerializeTestVectorInt (struct TdTestVectorInt *var);
void TdDestroyObjectTestVectorInt (struct TdTestVectorInt *var);
void TdStackStorerTestVectorInt (struct TdTestVectorInt *var, struct TdStackStorerMethods *M);
struct TdTestVectorInt *TdStackFetcherTestVectorInt (struct TdStackFetcherMethods *M);
struct TdTestVectorIntObject {
  int ID;
  int refcnt;
  struct TdVectorTestInt *value_;
};
struct TdTestVectorIntObject *TdCreateObjectTestVectorIntObject (struct TdVectorTestInt *value_);
char *TdSerializeTestVectorIntObject (struct TdTestVectorIntObject *var);
void TdDestroyObjectTestVectorIntObject (struct TdTestVectorIntObject *var);
void TdStackStorerTestVectorIntObject (struct TdTestVectorIntObject *var, struct TdStackStorerMethods *M);
struct TdTestVectorIntObject *TdStackFetcherTestVectorIntObject (struct TdStackFetcherMethods *M);
struct TdTestVectorString {
  int ID;
  int refcnt;
  struct TdVectorString *value_;
};
struct TdTestVectorString *TdCreateObjectTestVectorString (struct TdVectorString *value_);
char *TdSerializeTestVectorString (struct TdTestVectorString *var);
void TdDestroyObjectTestVectorString (struct TdTestVectorString *var);
void TdStackStorerTestVectorString (struct TdTestVectorString *var, struct TdStackStorerMethods *M);
struct TdTestVectorString *TdStackFetcherTestVectorString (struct TdStackFetcherMethods *M);
struct TdTestVectorStringObject {
  int ID;
  int refcnt;
  struct TdVectorTestString *value_;
};
struct TdTestVectorStringObject *TdCreateObjectTestVectorStringObject (struct TdVectorTestString *value_);
char *TdSerializeTestVectorStringObject (struct TdTestVectorStringObject *var);
void TdDestroyObjectTestVectorStringObject (struct TdTestVectorStringObject *var);
void TdStackStorerTestVectorStringObject (struct TdTestVectorStringObject *var, struct TdStackStorerMethods *M);
struct TdTestVectorStringObject *TdStackFetcherTestVectorStringObject (struct TdStackFetcherMethods *M);
struct TdText {
  int ID;
  int refcnt;
  char *text_;
};
struct TdText *TdCreateObjectText (char *text_);
char *TdSerializeText (struct TdText *var);
void TdDestroyObjectText (struct TdText *var);
void TdStackStorerText (struct TdText *var, struct TdStackStorerMethods *M);
struct TdText *TdStackFetcherText (struct TdStackFetcherMethods *M);
struct TdTextEntities {
  int ID;
  int refcnt;
  struct TdVectorTextEntity *entities_;
};
struct TdTextEntities *TdCreateObjectTextEntities (struct TdVectorTextEntity *entities_);
char *TdSerializeTextEntities (struct TdTextEntities *var);
void TdDestroyObjectTextEntities (struct TdTextEntities *var);
void TdStackStorerTextEntities (struct TdTextEntities *var, struct TdStackStorerMethods *M);
struct TdTextEntities *TdStackFetcherTextEntities (struct TdStackFetcherMethods *M);
struct TdTextEntity {
  int ID;
  int refcnt;
  int offset_;
  int length_;
  struct TdTextEntityType *type_;
};
struct TdTextEntity *TdCreateObjectTextEntity (int offset_, int length_, struct TdTextEntityType *type_);
char *TdSerializeTextEntity (struct TdTextEntity *var);
void TdDestroyObjectTextEntity (struct TdTextEntity *var);
void TdStackStorerTextEntity (struct TdTextEntity *var, struct TdStackStorerMethods *M);
struct TdTextEntity *TdStackFetcherTextEntity (struct TdStackFetcherMethods *M);
struct TdTextEntityType {
  int ID;
  int refcnt;
};
char *TdSerializeTextEntityType (struct TdTextEntityType *var);
void TdDestroyObjectTextEntityType (struct TdTextEntityType *var);
void TdStackStorerTextEntityType (struct TdTextEntityType *var, struct TdStackStorerMethods *M);
struct TdTextEntityType *TdStackFetcherTextEntityType (struct TdStackFetcherMethods *M);
enum List_TextEntityType {
  CODE_TextEntityTypeMention = 934535013,
  CODE_TextEntityTypeHashtag = -1023958307,
  CODE_TextEntityTypeCashtag = 1222915915,
  CODE_TextEntityTypeBotCommand = -1150997581,
  CODE_TextEntityTypeUrl = -1312762756,
  CODE_TextEntityTypeEmailAddress = 1425545249,
  CODE_TextEntityTypeBold = -1128210000,
  CODE_TextEntityTypeItalic = -118253987,
  CODE_TextEntityTypeCode = -974534326,
  CODE_TextEntityTypePre = 1648958606,
  CODE_TextEntityTypePreCode = -945325397,
  CODE_TextEntityTypeTextUrl = 445719651,
  CODE_TextEntityTypeMentionName = -791517091,
  CODE_TextEntityTypePhoneNumber = -1160140246,
};
struct TdTextEntityTypeMention {
  int ID;
  int refcnt;
};
struct TdTextEntityTypeMention *TdCreateObjectTextEntityTypeMention (void);
char *TdSerializeTextEntityTypeMention (struct TdTextEntityTypeMention *var);
void TdDestroyObjectTextEntityTypeMention (struct TdTextEntityTypeMention *var);
void TdStackStorerTextEntityTypeMention (struct TdTextEntityTypeMention *var, struct TdStackStorerMethods *M);
struct TdTextEntityTypeMention *TdStackFetcherTextEntityTypeMention (struct TdStackFetcherMethods *M);
struct TdTextEntityTypeHashtag {
  int ID;
  int refcnt;
};
struct TdTextEntityTypeHashtag *TdCreateObjectTextEntityTypeHashtag (void);
char *TdSerializeTextEntityTypeHashtag (struct TdTextEntityTypeHashtag *var);
void TdDestroyObjectTextEntityTypeHashtag (struct TdTextEntityTypeHashtag *var);
void TdStackStorerTextEntityTypeHashtag (struct TdTextEntityTypeHashtag *var, struct TdStackStorerMethods *M);
struct TdTextEntityTypeHashtag *TdStackFetcherTextEntityTypeHashtag (struct TdStackFetcherMethods *M);
struct TdTextEntityTypeCashtag {
  int ID;
  int refcnt;
};
struct TdTextEntityTypeCashtag *TdCreateObjectTextEntityTypeCashtag (void);
char *TdSerializeTextEntityTypeCashtag (struct TdTextEntityTypeCashtag *var);
void TdDestroyObjectTextEntityTypeCashtag (struct TdTextEntityTypeCashtag *var);
void TdStackStorerTextEntityTypeCashtag (struct TdTextEntityTypeCashtag *var, struct TdStackStorerMethods *M);
struct TdTextEntityTypeCashtag *TdStackFetcherTextEntityTypeCashtag (struct TdStackFetcherMethods *M);
struct TdTextEntityTypeBotCommand {
  int ID;
  int refcnt;
};
struct TdTextEntityTypeBotCommand *TdCreateObjectTextEntityTypeBotCommand (void);
char *TdSerializeTextEntityTypeBotCommand (struct TdTextEntityTypeBotCommand *var);
void TdDestroyObjectTextEntityTypeBotCommand (struct TdTextEntityTypeBotCommand *var);
void TdStackStorerTextEntityTypeBotCommand (struct TdTextEntityTypeBotCommand *var, struct TdStackStorerMethods *M);
struct TdTextEntityTypeBotCommand *TdStackFetcherTextEntityTypeBotCommand (struct TdStackFetcherMethods *M);
struct TdTextEntityTypeUrl {
  int ID;
  int refcnt;
};
struct TdTextEntityTypeUrl *TdCreateObjectTextEntityTypeUrl (void);
char *TdSerializeTextEntityTypeUrl (struct TdTextEntityTypeUrl *var);
void TdDestroyObjectTextEntityTypeUrl (struct TdTextEntityTypeUrl *var);
void TdStackStorerTextEntityTypeUrl (struct TdTextEntityTypeUrl *var, struct TdStackStorerMethods *M);
struct TdTextEntityTypeUrl *TdStackFetcherTextEntityTypeUrl (struct TdStackFetcherMethods *M);
struct TdTextEntityTypeEmailAddress {
  int ID;
  int refcnt;
};
struct TdTextEntityTypeEmailAddress *TdCreateObjectTextEntityTypeEmailAddress (void);
char *TdSerializeTextEntityTypeEmailAddress (struct TdTextEntityTypeEmailAddress *var);
void TdDestroyObjectTextEntityTypeEmailAddress (struct TdTextEntityTypeEmailAddress *var);
void TdStackStorerTextEntityTypeEmailAddress (struct TdTextEntityTypeEmailAddress *var, struct TdStackStorerMethods *M);
struct TdTextEntityTypeEmailAddress *TdStackFetcherTextEntityTypeEmailAddress (struct TdStackFetcherMethods *M);
struct TdTextEntityTypeBold {
  int ID;
  int refcnt;
};
struct TdTextEntityTypeBold *TdCreateObjectTextEntityTypeBold (void);
char *TdSerializeTextEntityTypeBold (struct TdTextEntityTypeBold *var);
void TdDestroyObjectTextEntityTypeBold (struct TdTextEntityTypeBold *var);
void TdStackStorerTextEntityTypeBold (struct TdTextEntityTypeBold *var, struct TdStackStorerMethods *M);
struct TdTextEntityTypeBold *TdStackFetcherTextEntityTypeBold (struct TdStackFetcherMethods *M);
struct TdTextEntityTypeItalic {
  int ID;
  int refcnt;
};
struct TdTextEntityTypeItalic *TdCreateObjectTextEntityTypeItalic (void);
char *TdSerializeTextEntityTypeItalic (struct TdTextEntityTypeItalic *var);
void TdDestroyObjectTextEntityTypeItalic (struct TdTextEntityTypeItalic *var);
void TdStackStorerTextEntityTypeItalic (struct TdTextEntityTypeItalic *var, struct TdStackStorerMethods *M);
struct TdTextEntityTypeItalic *TdStackFetcherTextEntityTypeItalic (struct TdStackFetcherMethods *M);
struct TdTextEntityTypeCode {
  int ID;
  int refcnt;
};
struct TdTextEntityTypeCode *TdCreateObjectTextEntityTypeCode (void);
char *TdSerializeTextEntityTypeCode (struct TdTextEntityTypeCode *var);
void TdDestroyObjectTextEntityTypeCode (struct TdTextEntityTypeCode *var);
void TdStackStorerTextEntityTypeCode (struct TdTextEntityTypeCode *var, struct TdStackStorerMethods *M);
struct TdTextEntityTypeCode *TdStackFetcherTextEntityTypeCode (struct TdStackFetcherMethods *M);
struct TdTextEntityTypePre {
  int ID;
  int refcnt;
};
struct TdTextEntityTypePre *TdCreateObjectTextEntityTypePre (void);
char *TdSerializeTextEntityTypePre (struct TdTextEntityTypePre *var);
void TdDestroyObjectTextEntityTypePre (struct TdTextEntityTypePre *var);
void TdStackStorerTextEntityTypePre (struct TdTextEntityTypePre *var, struct TdStackStorerMethods *M);
struct TdTextEntityTypePre *TdStackFetcherTextEntityTypePre (struct TdStackFetcherMethods *M);
struct TdTextEntityTypePreCode {
  int ID;
  int refcnt;
  char *language_;
};
struct TdTextEntityTypePreCode *TdCreateObjectTextEntityTypePreCode (char *language_);
char *TdSerializeTextEntityTypePreCode (struct TdTextEntityTypePreCode *var);
void TdDestroyObjectTextEntityTypePreCode (struct TdTextEntityTypePreCode *var);
void TdStackStorerTextEntityTypePreCode (struct TdTextEntityTypePreCode *var, struct TdStackStorerMethods *M);
struct TdTextEntityTypePreCode *TdStackFetcherTextEntityTypePreCode (struct TdStackFetcherMethods *M);
struct TdTextEntityTypeTextUrl {
  int ID;
  int refcnt;
  char *url_;
};
struct TdTextEntityTypeTextUrl *TdCreateObjectTextEntityTypeTextUrl (char *url_);
char *TdSerializeTextEntityTypeTextUrl (struct TdTextEntityTypeTextUrl *var);
void TdDestroyObjectTextEntityTypeTextUrl (struct TdTextEntityTypeTextUrl *var);
void TdStackStorerTextEntityTypeTextUrl (struct TdTextEntityTypeTextUrl *var, struct TdStackStorerMethods *M);
struct TdTextEntityTypeTextUrl *TdStackFetcherTextEntityTypeTextUrl (struct TdStackFetcherMethods *M);
struct TdTextEntityTypeMentionName {
  int ID;
  int refcnt;
  int user_id_;
};
struct TdTextEntityTypeMentionName *TdCreateObjectTextEntityTypeMentionName (int user_id_);
char *TdSerializeTextEntityTypeMentionName (struct TdTextEntityTypeMentionName *var);
void TdDestroyObjectTextEntityTypeMentionName (struct TdTextEntityTypeMentionName *var);
void TdStackStorerTextEntityTypeMentionName (struct TdTextEntityTypeMentionName *var, struct TdStackStorerMethods *M);
struct TdTextEntityTypeMentionName *TdStackFetcherTextEntityTypeMentionName (struct TdStackFetcherMethods *M);
struct TdTextEntityTypePhoneNumber {
  int ID;
  int refcnt;
};
struct TdTextEntityTypePhoneNumber *TdCreateObjectTextEntityTypePhoneNumber (void);
char *TdSerializeTextEntityTypePhoneNumber (struct TdTextEntityTypePhoneNumber *var);
void TdDestroyObjectTextEntityTypePhoneNumber (struct TdTextEntityTypePhoneNumber *var);
void TdStackStorerTextEntityTypePhoneNumber (struct TdTextEntityTypePhoneNumber *var, struct TdStackStorerMethods *M);
struct TdTextEntityTypePhoneNumber *TdStackFetcherTextEntityTypePhoneNumber (struct TdStackFetcherMethods *M);
struct TdTextParseMode {
  int ID;
  int refcnt;
};
char *TdSerializeTextParseMode (struct TdTextParseMode *var);
void TdDestroyObjectTextParseMode (struct TdTextParseMode *var);
void TdStackStorerTextParseMode (struct TdTextParseMode *var, struct TdStackStorerMethods *M);
struct TdTextParseMode *TdStackFetcherTextParseMode (struct TdStackFetcherMethods *M);
enum List_TextParseMode {
  CODE_TextParseModeMarkdown = 969225580,
  CODE_TextParseModeHTML = 1660208627,
};
struct TdTextParseModeMarkdown {
  int ID;
  int refcnt;
};
struct TdTextParseModeMarkdown *TdCreateObjectTextParseModeMarkdown (void);
char *TdSerializeTextParseModeMarkdown (struct TdTextParseModeMarkdown *var);
void TdDestroyObjectTextParseModeMarkdown (struct TdTextParseModeMarkdown *var);
void TdStackStorerTextParseModeMarkdown (struct TdTextParseModeMarkdown *var, struct TdStackStorerMethods *M);
struct TdTextParseModeMarkdown *TdStackFetcherTextParseModeMarkdown (struct TdStackFetcherMethods *M);
struct TdTextParseModeHTML {
  int ID;
  int refcnt;
};
struct TdTextParseModeHTML *TdCreateObjectTextParseModeHTML (void);
char *TdSerializeTextParseModeHTML (struct TdTextParseModeHTML *var);
void TdDestroyObjectTextParseModeHTML (struct TdTextParseModeHTML *var);
void TdStackStorerTextParseModeHTML (struct TdTextParseModeHTML *var, struct TdStackStorerMethods *M);
struct TdTextParseModeHTML *TdStackFetcherTextParseModeHTML (struct TdStackFetcherMethods *M);
struct TdTopChatCategory {
  int ID;
  int refcnt;
};
char *TdSerializeTopChatCategory (struct TdTopChatCategory *var);
void TdDestroyObjectTopChatCategory (struct TdTopChatCategory *var);
void TdStackStorerTopChatCategory (struct TdTopChatCategory *var, struct TdStackStorerMethods *M);
struct TdTopChatCategory *TdStackFetcherTopChatCategory (struct TdStackFetcherMethods *M);
enum List_TopChatCategory {
  CODE_TopChatCategoryUsers = 1026706816,
  CODE_TopChatCategoryBots = -1577129195,
  CODE_TopChatCategoryGroups = 1530056846,
  CODE_TopChatCategoryChannels = -500825885,
  CODE_TopChatCategoryInlineBots = 377023356,
  CODE_TopChatCategoryCalls = 356208861,
};
struct TdTopChatCategoryUsers {
  int ID;
  int refcnt;
};
struct TdTopChatCategoryUsers *TdCreateObjectTopChatCategoryUsers (void);
char *TdSerializeTopChatCategoryUsers (struct TdTopChatCategoryUsers *var);
void TdDestroyObjectTopChatCategoryUsers (struct TdTopChatCategoryUsers *var);
void TdStackStorerTopChatCategoryUsers (struct TdTopChatCategoryUsers *var, struct TdStackStorerMethods *M);
struct TdTopChatCategoryUsers *TdStackFetcherTopChatCategoryUsers (struct TdStackFetcherMethods *M);
struct TdTopChatCategoryBots {
  int ID;
  int refcnt;
};
struct TdTopChatCategoryBots *TdCreateObjectTopChatCategoryBots (void);
char *TdSerializeTopChatCategoryBots (struct TdTopChatCategoryBots *var);
void TdDestroyObjectTopChatCategoryBots (struct TdTopChatCategoryBots *var);
void TdStackStorerTopChatCategoryBots (struct TdTopChatCategoryBots *var, struct TdStackStorerMethods *M);
struct TdTopChatCategoryBots *TdStackFetcherTopChatCategoryBots (struct TdStackFetcherMethods *M);
struct TdTopChatCategoryGroups {
  int ID;
  int refcnt;
};
struct TdTopChatCategoryGroups *TdCreateObjectTopChatCategoryGroups (void);
char *TdSerializeTopChatCategoryGroups (struct TdTopChatCategoryGroups *var);
void TdDestroyObjectTopChatCategoryGroups (struct TdTopChatCategoryGroups *var);
void TdStackStorerTopChatCategoryGroups (struct TdTopChatCategoryGroups *var, struct TdStackStorerMethods *M);
struct TdTopChatCategoryGroups *TdStackFetcherTopChatCategoryGroups (struct TdStackFetcherMethods *M);
struct TdTopChatCategoryChannels {
  int ID;
  int refcnt;
};
struct TdTopChatCategoryChannels *TdCreateObjectTopChatCategoryChannels (void);
char *TdSerializeTopChatCategoryChannels (struct TdTopChatCategoryChannels *var);
void TdDestroyObjectTopChatCategoryChannels (struct TdTopChatCategoryChannels *var);
void TdStackStorerTopChatCategoryChannels (struct TdTopChatCategoryChannels *var, struct TdStackStorerMethods *M);
struct TdTopChatCategoryChannels *TdStackFetcherTopChatCategoryChannels (struct TdStackFetcherMethods *M);
struct TdTopChatCategoryInlineBots {
  int ID;
  int refcnt;
};
struct TdTopChatCategoryInlineBots *TdCreateObjectTopChatCategoryInlineBots (void);
char *TdSerializeTopChatCategoryInlineBots (struct TdTopChatCategoryInlineBots *var);
void TdDestroyObjectTopChatCategoryInlineBots (struct TdTopChatCategoryInlineBots *var);
void TdStackStorerTopChatCategoryInlineBots (struct TdTopChatCategoryInlineBots *var, struct TdStackStorerMethods *M);
struct TdTopChatCategoryInlineBots *TdStackFetcherTopChatCategoryInlineBots (struct TdStackFetcherMethods *M);
struct TdTopChatCategoryCalls {
  int ID;
  int refcnt;
};
struct TdTopChatCategoryCalls *TdCreateObjectTopChatCategoryCalls (void);
char *TdSerializeTopChatCategoryCalls (struct TdTopChatCategoryCalls *var);
void TdDestroyObjectTopChatCategoryCalls (struct TdTopChatCategoryCalls *var);
void TdStackStorerTopChatCategoryCalls (struct TdTopChatCategoryCalls *var, struct TdStackStorerMethods *M);
struct TdTopChatCategoryCalls *TdStackFetcherTopChatCategoryCalls (struct TdStackFetcherMethods *M);
struct TdUpdate {
  int ID;
  int refcnt;
};
char *TdSerializeUpdate (struct TdUpdate *var);
void TdDestroyObjectUpdate (struct TdUpdate *var);
void TdStackStorerUpdate (struct TdUpdate *var, struct TdStackStorerMethods *M);
struct TdUpdate *TdStackFetcherUpdate (struct TdStackFetcherMethods *M);
enum List_Update {
  CODE_UpdateAuthorizationState = 1622347490,
  CODE_UpdateNewMessage = 238944219,
  CODE_UpdateMessageSendAcknowledged = 1302843961,
  CODE_UpdateMessageSendSucceeded = 1815715197,
  CODE_UpdateMessageSendFailed = -1032335779,
  CODE_UpdateMessageContent = 506903332,
  CODE_UpdateMessageEdited = -559545626,
  CODE_UpdateMessageViews = -1854131125,
  CODE_UpdateMessageContentOpened = -1520523131,
  CODE_UpdateMessageMentionRead = -252228282,
  CODE_UpdateNewChat = 2075757773,
  CODE_UpdateChatTitle = -175405660,
  CODE_UpdateChatPhoto = -209353966,
  CODE_UpdateChatLastMessage = 580348828,
  CODE_UpdateChatOrder = -1601888026,
  CODE_UpdateChatIsPinned = 488876260,
  CODE_UpdateChatIsMarkedAsUnread = 1468347188,
  CODE_UpdateChatIsSponsored = -1196180070,
  CODE_UpdateChatDefaultDisableNotification = 464087707,
  CODE_UpdateChatReadInbox = -797952281,
  CODE_UpdateChatReadOutbox = 708334213,
  CODE_UpdateChatUnreadMentionCount = -2131461348,
  CODE_UpdateChatNotificationSettings = -803163050,
  CODE_UpdateScopeNotificationSettings = -1203975309,
  CODE_UpdateChatReplyMarkup = 1309386144,
  CODE_UpdateChatDraftMessage = -1436617498,
  CODE_UpdateDeleteMessages = 1669252686,
  CODE_UpdateUserChatAction = 1444133514,
  CODE_UpdateUserStatus = -1443545195,
  CODE_UpdateUser = 1183394041,
  CODE_UpdateBasicGroup = -1003239581,
  CODE_UpdateSupergroup = -76782300,
  CODE_UpdateSecretChat = -1666903253,
  CODE_UpdateUserFullInfo = 222103874,
  CODE_UpdateBasicGroupFullInfo = 924030531,
  CODE_UpdateSupergroupFullInfo = 1288828758,
  CODE_UpdateServiceNotification = 1318622637,
  CODE_UpdateFile = 114132831,
  CODE_UpdateFileGenerationStart = 216817388,
  CODE_UpdateFileGenerationStop = -1894449685,
  CODE_UpdateCall = 1337184477,
  CODE_UpdateUserPrivacySettingRules = -912960778,
  CODE_UpdateUnreadMessageCount = -824420376,
  CODE_UpdateUnreadChatCount = 891150304,
  CODE_UpdateOption = 900822020,
  CODE_UpdateInstalledStickerSets = 1125575977,
  CODE_UpdateTrendingStickerSets = 450714593,
  CODE_UpdateRecentStickers = 1906403540,
  CODE_UpdateFavoriteStickers = 1662240999,
  CODE_UpdateSavedAnimations = 65563814,
  CODE_UpdateLanguagePackStrings = -1056319886,
  CODE_UpdateConnectionState = 1469292078,
  CODE_UpdateTermsOfService = -1304640162,
  CODE_UpdateNewInlineQuery = 2064730634,
  CODE_UpdateNewChosenInlineResult = 527526965,
  CODE_UpdateNewCallbackQuery = -2044226370,
  CODE_UpdateNewInlineCallbackQuery = -1879154829,
  CODE_UpdateNewShippingQuery = -817474682,
  CODE_UpdateNewPreCheckoutQuery = 87964006,
  CODE_UpdateNewCustomEvent = 1994222092,
  CODE_UpdateNewCustomQuery = -687670874,
};
struct TdUpdateAuthorizationState {
  int ID;
  int refcnt;
  struct TdAuthorizationState *authorization_state_;
};
struct TdUpdateAuthorizationState *TdCreateObjectUpdateAuthorizationState (struct TdAuthorizationState *authorization_state_);
char *TdSerializeUpdateAuthorizationState (struct TdUpdateAuthorizationState *var);
void TdDestroyObjectUpdateAuthorizationState (struct TdUpdateAuthorizationState *var);
void TdStackStorerUpdateAuthorizationState (struct TdUpdateAuthorizationState *var, struct TdStackStorerMethods *M);
struct TdUpdateAuthorizationState *TdStackFetcherUpdateAuthorizationState (struct TdStackFetcherMethods *M);
struct TdUpdateNewMessage {
  int ID;
  int refcnt;
  struct TdMessage *message_;
  int disable_notification_;
  int contains_mention_;
};
struct TdUpdateNewMessage *TdCreateObjectUpdateNewMessage (struct TdMessage *message_, int disable_notification_, int contains_mention_);
char *TdSerializeUpdateNewMessage (struct TdUpdateNewMessage *var);
void TdDestroyObjectUpdateNewMessage (struct TdUpdateNewMessage *var);
void TdStackStorerUpdateNewMessage (struct TdUpdateNewMessage *var, struct TdStackStorerMethods *M);
struct TdUpdateNewMessage *TdStackFetcherUpdateNewMessage (struct TdStackFetcherMethods *M);
struct TdUpdateMessageSendAcknowledged {
  int ID;
  int refcnt;
  long long chat_id_;
  long long message_id_;
};
struct TdUpdateMessageSendAcknowledged *TdCreateObjectUpdateMessageSendAcknowledged (long long chat_id_, long long message_id_);
char *TdSerializeUpdateMessageSendAcknowledged (struct TdUpdateMessageSendAcknowledged *var);
void TdDestroyObjectUpdateMessageSendAcknowledged (struct TdUpdateMessageSendAcknowledged *var);
void TdStackStorerUpdateMessageSendAcknowledged (struct TdUpdateMessageSendAcknowledged *var, struct TdStackStorerMethods *M);
struct TdUpdateMessageSendAcknowledged *TdStackFetcherUpdateMessageSendAcknowledged (struct TdStackFetcherMethods *M);
struct TdUpdateMessageSendSucceeded {
  int ID;
  int refcnt;
  struct TdMessage *message_;
  long long old_message_id_;
};
struct TdUpdateMessageSendSucceeded *TdCreateObjectUpdateMessageSendSucceeded (struct TdMessage *message_, long long old_message_id_);
char *TdSerializeUpdateMessageSendSucceeded (struct TdUpdateMessageSendSucceeded *var);
void TdDestroyObjectUpdateMessageSendSucceeded (struct TdUpdateMessageSendSucceeded *var);
void TdStackStorerUpdateMessageSendSucceeded (struct TdUpdateMessageSendSucceeded *var, struct TdStackStorerMethods *M);
struct TdUpdateMessageSendSucceeded *TdStackFetcherUpdateMessageSendSucceeded (struct TdStackFetcherMethods *M);
struct TdUpdateMessageSendFailed {
  int ID;
  int refcnt;
  struct TdMessage *message_;
  long long old_message_id_;
  int error_code_;
  char *error_message_;
};
struct TdUpdateMessageSendFailed *TdCreateObjectUpdateMessageSendFailed (struct TdMessage *message_, long long old_message_id_, int error_code_, char *error_message_);
char *TdSerializeUpdateMessageSendFailed (struct TdUpdateMessageSendFailed *var);
void TdDestroyObjectUpdateMessageSendFailed (struct TdUpdateMessageSendFailed *var);
void TdStackStorerUpdateMessageSendFailed (struct TdUpdateMessageSendFailed *var, struct TdStackStorerMethods *M);
struct TdUpdateMessageSendFailed *TdStackFetcherUpdateMessageSendFailed (struct TdStackFetcherMethods *M);
struct TdUpdateMessageContent {
  int ID;
  int refcnt;
  long long chat_id_;
  long long message_id_;
  struct TdMessageContent *new_content_;
};
struct TdUpdateMessageContent *TdCreateObjectUpdateMessageContent (long long chat_id_, long long message_id_, struct TdMessageContent *new_content_);
char *TdSerializeUpdateMessageContent (struct TdUpdateMessageContent *var);
void TdDestroyObjectUpdateMessageContent (struct TdUpdateMessageContent *var);
void TdStackStorerUpdateMessageContent (struct TdUpdateMessageContent *var, struct TdStackStorerMethods *M);
struct TdUpdateMessageContent *TdStackFetcherUpdateMessageContent (struct TdStackFetcherMethods *M);
struct TdUpdateMessageEdited {
  int ID;
  int refcnt;
  long long chat_id_;
  long long message_id_;
  int edit_date_;
  struct TdReplyMarkup *reply_markup_;
};
struct TdUpdateMessageEdited *TdCreateObjectUpdateMessageEdited (long long chat_id_, long long message_id_, int edit_date_, struct TdReplyMarkup *reply_markup_);
char *TdSerializeUpdateMessageEdited (struct TdUpdateMessageEdited *var);
void TdDestroyObjectUpdateMessageEdited (struct TdUpdateMessageEdited *var);
void TdStackStorerUpdateMessageEdited (struct TdUpdateMessageEdited *var, struct TdStackStorerMethods *M);
struct TdUpdateMessageEdited *TdStackFetcherUpdateMessageEdited (struct TdStackFetcherMethods *M);
struct TdUpdateMessageViews {
  int ID;
  int refcnt;
  long long chat_id_;
  long long message_id_;
  int views_;
};
struct TdUpdateMessageViews *TdCreateObjectUpdateMessageViews (long long chat_id_, long long message_id_, int views_);
char *TdSerializeUpdateMessageViews (struct TdUpdateMessageViews *var);
void TdDestroyObjectUpdateMessageViews (struct TdUpdateMessageViews *var);
void TdStackStorerUpdateMessageViews (struct TdUpdateMessageViews *var, struct TdStackStorerMethods *M);
struct TdUpdateMessageViews *TdStackFetcherUpdateMessageViews (struct TdStackFetcherMethods *M);
struct TdUpdateMessageContentOpened {
  int ID;
  int refcnt;
  long long chat_id_;
  long long message_id_;
};
struct TdUpdateMessageContentOpened *TdCreateObjectUpdateMessageContentOpened (long long chat_id_, long long message_id_);
char *TdSerializeUpdateMessageContentOpened (struct TdUpdateMessageContentOpened *var);
void TdDestroyObjectUpdateMessageContentOpened (struct TdUpdateMessageContentOpened *var);
void TdStackStorerUpdateMessageContentOpened (struct TdUpdateMessageContentOpened *var, struct TdStackStorerMethods *M);
struct TdUpdateMessageContentOpened *TdStackFetcherUpdateMessageContentOpened (struct TdStackFetcherMethods *M);
struct TdUpdateMessageMentionRead {
  int ID;
  int refcnt;
  long long chat_id_;
  long long message_id_;
  int unread_mention_count_;
};
struct TdUpdateMessageMentionRead *TdCreateObjectUpdateMessageMentionRead (long long chat_id_, long long message_id_, int unread_mention_count_);
char *TdSerializeUpdateMessageMentionRead (struct TdUpdateMessageMentionRead *var);
void TdDestroyObjectUpdateMessageMentionRead (struct TdUpdateMessageMentionRead *var);
void TdStackStorerUpdateMessageMentionRead (struct TdUpdateMessageMentionRead *var, struct TdStackStorerMethods *M);
struct TdUpdateMessageMentionRead *TdStackFetcherUpdateMessageMentionRead (struct TdStackFetcherMethods *M);
struct TdUpdateNewChat {
  int ID;
  int refcnt;
  struct TdChat *chat_;
};
struct TdUpdateNewChat *TdCreateObjectUpdateNewChat (struct TdChat *chat_);
char *TdSerializeUpdateNewChat (struct TdUpdateNewChat *var);
void TdDestroyObjectUpdateNewChat (struct TdUpdateNewChat *var);
void TdStackStorerUpdateNewChat (struct TdUpdateNewChat *var, struct TdStackStorerMethods *M);
struct TdUpdateNewChat *TdStackFetcherUpdateNewChat (struct TdStackFetcherMethods *M);
struct TdUpdateChatTitle {
  int ID;
  int refcnt;
  long long chat_id_;
  char *title_;
};
struct TdUpdateChatTitle *TdCreateObjectUpdateChatTitle (long long chat_id_, char *title_);
char *TdSerializeUpdateChatTitle (struct TdUpdateChatTitle *var);
void TdDestroyObjectUpdateChatTitle (struct TdUpdateChatTitle *var);
void TdStackStorerUpdateChatTitle (struct TdUpdateChatTitle *var, struct TdStackStorerMethods *M);
struct TdUpdateChatTitle *TdStackFetcherUpdateChatTitle (struct TdStackFetcherMethods *M);
struct TdUpdateChatPhoto {
  int ID;
  int refcnt;
  long long chat_id_;
  struct TdChatPhoto *photo_;
};
struct TdUpdateChatPhoto *TdCreateObjectUpdateChatPhoto (long long chat_id_, struct TdChatPhoto *photo_);
char *TdSerializeUpdateChatPhoto (struct TdUpdateChatPhoto *var);
void TdDestroyObjectUpdateChatPhoto (struct TdUpdateChatPhoto *var);
void TdStackStorerUpdateChatPhoto (struct TdUpdateChatPhoto *var, struct TdStackStorerMethods *M);
struct TdUpdateChatPhoto *TdStackFetcherUpdateChatPhoto (struct TdStackFetcherMethods *M);
struct TdUpdateChatLastMessage {
  int ID;
  int refcnt;
  long long chat_id_;
  struct TdMessage *last_message_;
  long long order_;
};
struct TdUpdateChatLastMessage *TdCreateObjectUpdateChatLastMessage (long long chat_id_, struct TdMessage *last_message_, long long order_);
char *TdSerializeUpdateChatLastMessage (struct TdUpdateChatLastMessage *var);
void TdDestroyObjectUpdateChatLastMessage (struct TdUpdateChatLastMessage *var);
void TdStackStorerUpdateChatLastMessage (struct TdUpdateChatLastMessage *var, struct TdStackStorerMethods *M);
struct TdUpdateChatLastMessage *TdStackFetcherUpdateChatLastMessage (struct TdStackFetcherMethods *M);
struct TdUpdateChatOrder {
  int ID;
  int refcnt;
  long long chat_id_;
  long long order_;
};
struct TdUpdateChatOrder *TdCreateObjectUpdateChatOrder (long long chat_id_, long long order_);
char *TdSerializeUpdateChatOrder (struct TdUpdateChatOrder *var);
void TdDestroyObjectUpdateChatOrder (struct TdUpdateChatOrder *var);
void TdStackStorerUpdateChatOrder (struct TdUpdateChatOrder *var, struct TdStackStorerMethods *M);
struct TdUpdateChatOrder *TdStackFetcherUpdateChatOrder (struct TdStackFetcherMethods *M);
struct TdUpdateChatIsPinned {
  int ID;
  int refcnt;
  long long chat_id_;
  int is_pinned_;
  long long order_;
};
struct TdUpdateChatIsPinned *TdCreateObjectUpdateChatIsPinned (long long chat_id_, int is_pinned_, long long order_);
char *TdSerializeUpdateChatIsPinned (struct TdUpdateChatIsPinned *var);
void TdDestroyObjectUpdateChatIsPinned (struct TdUpdateChatIsPinned *var);
void TdStackStorerUpdateChatIsPinned (struct TdUpdateChatIsPinned *var, struct TdStackStorerMethods *M);
struct TdUpdateChatIsPinned *TdStackFetcherUpdateChatIsPinned (struct TdStackFetcherMethods *M);
struct TdUpdateChatIsMarkedAsUnread {
  int ID;
  int refcnt;
  long long chat_id_;
  int is_marked_as_unread_;
};
struct TdUpdateChatIsMarkedAsUnread *TdCreateObjectUpdateChatIsMarkedAsUnread (long long chat_id_, int is_marked_as_unread_);
char *TdSerializeUpdateChatIsMarkedAsUnread (struct TdUpdateChatIsMarkedAsUnread *var);
void TdDestroyObjectUpdateChatIsMarkedAsUnread (struct TdUpdateChatIsMarkedAsUnread *var);
void TdStackStorerUpdateChatIsMarkedAsUnread (struct TdUpdateChatIsMarkedAsUnread *var, struct TdStackStorerMethods *M);
struct TdUpdateChatIsMarkedAsUnread *TdStackFetcherUpdateChatIsMarkedAsUnread (struct TdStackFetcherMethods *M);
struct TdUpdateChatIsSponsored {
  int ID;
  int refcnt;
  long long chat_id_;
  int is_sponsored_;
  long long order_;
};
struct TdUpdateChatIsSponsored *TdCreateObjectUpdateChatIsSponsored (long long chat_id_, int is_sponsored_, long long order_);
char *TdSerializeUpdateChatIsSponsored (struct TdUpdateChatIsSponsored *var);
void TdDestroyObjectUpdateChatIsSponsored (struct TdUpdateChatIsSponsored *var);
void TdStackStorerUpdateChatIsSponsored (struct TdUpdateChatIsSponsored *var, struct TdStackStorerMethods *M);
struct TdUpdateChatIsSponsored *TdStackFetcherUpdateChatIsSponsored (struct TdStackFetcherMethods *M);
struct TdUpdateChatDefaultDisableNotification {
  int ID;
  int refcnt;
  long long chat_id_;
  int default_disable_notification_;
};
struct TdUpdateChatDefaultDisableNotification *TdCreateObjectUpdateChatDefaultDisableNotification (long long chat_id_, int default_disable_notification_);
char *TdSerializeUpdateChatDefaultDisableNotification (struct TdUpdateChatDefaultDisableNotification *var);
void TdDestroyObjectUpdateChatDefaultDisableNotification (struct TdUpdateChatDefaultDisableNotification *var);
void TdStackStorerUpdateChatDefaultDisableNotification (struct TdUpdateChatDefaultDisableNotification *var, struct TdStackStorerMethods *M);
struct TdUpdateChatDefaultDisableNotification *TdStackFetcherUpdateChatDefaultDisableNotification (struct TdStackFetcherMethods *M);
struct TdUpdateChatReadInbox {
  int ID;
  int refcnt;
  long long chat_id_;
  long long last_read_inbox_message_id_;
  int unread_count_;
};
struct TdUpdateChatReadInbox *TdCreateObjectUpdateChatReadInbox (long long chat_id_, long long last_read_inbox_message_id_, int unread_count_);
char *TdSerializeUpdateChatReadInbox (struct TdUpdateChatReadInbox *var);
void TdDestroyObjectUpdateChatReadInbox (struct TdUpdateChatReadInbox *var);
void TdStackStorerUpdateChatReadInbox (struct TdUpdateChatReadInbox *var, struct TdStackStorerMethods *M);
struct TdUpdateChatReadInbox *TdStackFetcherUpdateChatReadInbox (struct TdStackFetcherMethods *M);
struct TdUpdateChatReadOutbox {
  int ID;
  int refcnt;
  long long chat_id_;
  long long last_read_outbox_message_id_;
};
struct TdUpdateChatReadOutbox *TdCreateObjectUpdateChatReadOutbox (long long chat_id_, long long last_read_outbox_message_id_);
char *TdSerializeUpdateChatReadOutbox (struct TdUpdateChatReadOutbox *var);
void TdDestroyObjectUpdateChatReadOutbox (struct TdUpdateChatReadOutbox *var);
void TdStackStorerUpdateChatReadOutbox (struct TdUpdateChatReadOutbox *var, struct TdStackStorerMethods *M);
struct TdUpdateChatReadOutbox *TdStackFetcherUpdateChatReadOutbox (struct TdStackFetcherMethods *M);
struct TdUpdateChatUnreadMentionCount {
  int ID;
  int refcnt;
  long long chat_id_;
  int unread_mention_count_;
};
struct TdUpdateChatUnreadMentionCount *TdCreateObjectUpdateChatUnreadMentionCount (long long chat_id_, int unread_mention_count_);
char *TdSerializeUpdateChatUnreadMentionCount (struct TdUpdateChatUnreadMentionCount *var);
void TdDestroyObjectUpdateChatUnreadMentionCount (struct TdUpdateChatUnreadMentionCount *var);
void TdStackStorerUpdateChatUnreadMentionCount (struct TdUpdateChatUnreadMentionCount *var, struct TdStackStorerMethods *M);
struct TdUpdateChatUnreadMentionCount *TdStackFetcherUpdateChatUnreadMentionCount (struct TdStackFetcherMethods *M);
struct TdUpdateChatNotificationSettings {
  int ID;
  int refcnt;
  long long chat_id_;
  struct TdChatNotificationSettings *notification_settings_;
};
struct TdUpdateChatNotificationSettings *TdCreateObjectUpdateChatNotificationSettings (long long chat_id_, struct TdChatNotificationSettings *notification_settings_);
char *TdSerializeUpdateChatNotificationSettings (struct TdUpdateChatNotificationSettings *var);
void TdDestroyObjectUpdateChatNotificationSettings (struct TdUpdateChatNotificationSettings *var);
void TdStackStorerUpdateChatNotificationSettings (struct TdUpdateChatNotificationSettings *var, struct TdStackStorerMethods *M);
struct TdUpdateChatNotificationSettings *TdStackFetcherUpdateChatNotificationSettings (struct TdStackFetcherMethods *M);
struct TdUpdateScopeNotificationSettings {
  int ID;
  int refcnt;
  struct TdNotificationSettingsScope *scope_;
  struct TdScopeNotificationSettings *notification_settings_;
};
struct TdUpdateScopeNotificationSettings *TdCreateObjectUpdateScopeNotificationSettings (struct TdNotificationSettingsScope *scope_, struct TdScopeNotificationSettings *notification_settings_);
char *TdSerializeUpdateScopeNotificationSettings (struct TdUpdateScopeNotificationSettings *var);
void TdDestroyObjectUpdateScopeNotificationSettings (struct TdUpdateScopeNotificationSettings *var);
void TdStackStorerUpdateScopeNotificationSettings (struct TdUpdateScopeNotificationSettings *var, struct TdStackStorerMethods *M);
struct TdUpdateScopeNotificationSettings *TdStackFetcherUpdateScopeNotificationSettings (struct TdStackFetcherMethods *M);
struct TdUpdateChatReplyMarkup {
  int ID;
  int refcnt;
  long long chat_id_;
  long long reply_markup_message_id_;
};
struct TdUpdateChatReplyMarkup *TdCreateObjectUpdateChatReplyMarkup (long long chat_id_, long long reply_markup_message_id_);
char *TdSerializeUpdateChatReplyMarkup (struct TdUpdateChatReplyMarkup *var);
void TdDestroyObjectUpdateChatReplyMarkup (struct TdUpdateChatReplyMarkup *var);
void TdStackStorerUpdateChatReplyMarkup (struct TdUpdateChatReplyMarkup *var, struct TdStackStorerMethods *M);
struct TdUpdateChatReplyMarkup *TdStackFetcherUpdateChatReplyMarkup (struct TdStackFetcherMethods *M);
struct TdUpdateChatDraftMessage {
  int ID;
  int refcnt;
  long long chat_id_;
  struct TdDraftMessage *draft_message_;
  long long order_;
};
struct TdUpdateChatDraftMessage *TdCreateObjectUpdateChatDraftMessage (long long chat_id_, struct TdDraftMessage *draft_message_, long long order_);
char *TdSerializeUpdateChatDraftMessage (struct TdUpdateChatDraftMessage *var);
void TdDestroyObjectUpdateChatDraftMessage (struct TdUpdateChatDraftMessage *var);
void TdStackStorerUpdateChatDraftMessage (struct TdUpdateChatDraftMessage *var, struct TdStackStorerMethods *M);
struct TdUpdateChatDraftMessage *TdStackFetcherUpdateChatDraftMessage (struct TdStackFetcherMethods *M);
struct TdUpdateDeleteMessages {
  int ID;
  int refcnt;
  long long chat_id_;
  struct TdVectorLong *message_ids_;
  int is_permanent_;
  int from_cache_;
};
struct TdUpdateDeleteMessages *TdCreateObjectUpdateDeleteMessages (long long chat_id_, struct TdVectorLong *message_ids_, int is_permanent_, int from_cache_);
char *TdSerializeUpdateDeleteMessages (struct TdUpdateDeleteMessages *var);
void TdDestroyObjectUpdateDeleteMessages (struct TdUpdateDeleteMessages *var);
void TdStackStorerUpdateDeleteMessages (struct TdUpdateDeleteMessages *var, struct TdStackStorerMethods *M);
struct TdUpdateDeleteMessages *TdStackFetcherUpdateDeleteMessages (struct TdStackFetcherMethods *M);
struct TdUpdateUserChatAction {
  int ID;
  int refcnt;
  long long chat_id_;
  int user_id_;
  struct TdChatAction *action_;
};
struct TdUpdateUserChatAction *TdCreateObjectUpdateUserChatAction (long long chat_id_, int user_id_, struct TdChatAction *action_);
char *TdSerializeUpdateUserChatAction (struct TdUpdateUserChatAction *var);
void TdDestroyObjectUpdateUserChatAction (struct TdUpdateUserChatAction *var);
void TdStackStorerUpdateUserChatAction (struct TdUpdateUserChatAction *var, struct TdStackStorerMethods *M);
struct TdUpdateUserChatAction *TdStackFetcherUpdateUserChatAction (struct TdStackFetcherMethods *M);
struct TdUpdateUserStatus {
  int ID;
  int refcnt;
  int user_id_;
  struct TdUserStatus *status_;
};
struct TdUpdateUserStatus *TdCreateObjectUpdateUserStatus (int user_id_, struct TdUserStatus *status_);
char *TdSerializeUpdateUserStatus (struct TdUpdateUserStatus *var);
void TdDestroyObjectUpdateUserStatus (struct TdUpdateUserStatus *var);
void TdStackStorerUpdateUserStatus (struct TdUpdateUserStatus *var, struct TdStackStorerMethods *M);
struct TdUpdateUserStatus *TdStackFetcherUpdateUserStatus (struct TdStackFetcherMethods *M);
struct TdUpdateUser {
  int ID;
  int refcnt;
  struct TdUser *user_;
};
struct TdUpdateUser *TdCreateObjectUpdateUser (struct TdUser *user_);
char *TdSerializeUpdateUser (struct TdUpdateUser *var);
void TdDestroyObjectUpdateUser (struct TdUpdateUser *var);
void TdStackStorerUpdateUser (struct TdUpdateUser *var, struct TdStackStorerMethods *M);
struct TdUpdateUser *TdStackFetcherUpdateUser (struct TdStackFetcherMethods *M);
struct TdUpdateBasicGroup {
  int ID;
  int refcnt;
  struct TdBasicGroup *basic_group_;
};
struct TdUpdateBasicGroup *TdCreateObjectUpdateBasicGroup (struct TdBasicGroup *basic_group_);
char *TdSerializeUpdateBasicGroup (struct TdUpdateBasicGroup *var);
void TdDestroyObjectUpdateBasicGroup (struct TdUpdateBasicGroup *var);
void TdStackStorerUpdateBasicGroup (struct TdUpdateBasicGroup *var, struct TdStackStorerMethods *M);
struct TdUpdateBasicGroup *TdStackFetcherUpdateBasicGroup (struct TdStackFetcherMethods *M);
struct TdUpdateSupergroup {
  int ID;
  int refcnt;
  struct TdSupergroup *supergroup_;
};
struct TdUpdateSupergroup *TdCreateObjectUpdateSupergroup (struct TdSupergroup *supergroup_);
char *TdSerializeUpdateSupergroup (struct TdUpdateSupergroup *var);
void TdDestroyObjectUpdateSupergroup (struct TdUpdateSupergroup *var);
void TdStackStorerUpdateSupergroup (struct TdUpdateSupergroup *var, struct TdStackStorerMethods *M);
struct TdUpdateSupergroup *TdStackFetcherUpdateSupergroup (struct TdStackFetcherMethods *M);
struct TdUpdateSecretChat {
  int ID;
  int refcnt;
  struct TdSecretChat *secret_chat_;
};
struct TdUpdateSecretChat *TdCreateObjectUpdateSecretChat (struct TdSecretChat *secret_chat_);
char *TdSerializeUpdateSecretChat (struct TdUpdateSecretChat *var);
void TdDestroyObjectUpdateSecretChat (struct TdUpdateSecretChat *var);
void TdStackStorerUpdateSecretChat (struct TdUpdateSecretChat *var, struct TdStackStorerMethods *M);
struct TdUpdateSecretChat *TdStackFetcherUpdateSecretChat (struct TdStackFetcherMethods *M);
struct TdUpdateUserFullInfo {
  int ID;
  int refcnt;
  int user_id_;
  struct TdUserFullInfo *user_full_info_;
};
struct TdUpdateUserFullInfo *TdCreateObjectUpdateUserFullInfo (int user_id_, struct TdUserFullInfo *user_full_info_);
char *TdSerializeUpdateUserFullInfo (struct TdUpdateUserFullInfo *var);
void TdDestroyObjectUpdateUserFullInfo (struct TdUpdateUserFullInfo *var);
void TdStackStorerUpdateUserFullInfo (struct TdUpdateUserFullInfo *var, struct TdStackStorerMethods *M);
struct TdUpdateUserFullInfo *TdStackFetcherUpdateUserFullInfo (struct TdStackFetcherMethods *M);
struct TdUpdateBasicGroupFullInfo {
  int ID;
  int refcnt;
  int basic_group_id_;
  struct TdBasicGroupFullInfo *basic_group_full_info_;
};
struct TdUpdateBasicGroupFullInfo *TdCreateObjectUpdateBasicGroupFullInfo (int basic_group_id_, struct TdBasicGroupFullInfo *basic_group_full_info_);
char *TdSerializeUpdateBasicGroupFullInfo (struct TdUpdateBasicGroupFullInfo *var);
void TdDestroyObjectUpdateBasicGroupFullInfo (struct TdUpdateBasicGroupFullInfo *var);
void TdStackStorerUpdateBasicGroupFullInfo (struct TdUpdateBasicGroupFullInfo *var, struct TdStackStorerMethods *M);
struct TdUpdateBasicGroupFullInfo *TdStackFetcherUpdateBasicGroupFullInfo (struct TdStackFetcherMethods *M);
struct TdUpdateSupergroupFullInfo {
  int ID;
  int refcnt;
  int supergroup_id_;
  struct TdSupergroupFullInfo *supergroup_full_info_;
};
struct TdUpdateSupergroupFullInfo *TdCreateObjectUpdateSupergroupFullInfo (int supergroup_id_, struct TdSupergroupFullInfo *supergroup_full_info_);
char *TdSerializeUpdateSupergroupFullInfo (struct TdUpdateSupergroupFullInfo *var);
void TdDestroyObjectUpdateSupergroupFullInfo (struct TdUpdateSupergroupFullInfo *var);
void TdStackStorerUpdateSupergroupFullInfo (struct TdUpdateSupergroupFullInfo *var, struct TdStackStorerMethods *M);
struct TdUpdateSupergroupFullInfo *TdStackFetcherUpdateSupergroupFullInfo (struct TdStackFetcherMethods *M);
struct TdUpdateServiceNotification {
  int ID;
  int refcnt;
  char *type_;
  struct TdMessageContent *content_;
};
struct TdUpdateServiceNotification *TdCreateObjectUpdateServiceNotification (char *type_, struct TdMessageContent *content_);
char *TdSerializeUpdateServiceNotification (struct TdUpdateServiceNotification *var);
void TdDestroyObjectUpdateServiceNotification (struct TdUpdateServiceNotification *var);
void TdStackStorerUpdateServiceNotification (struct TdUpdateServiceNotification *var, struct TdStackStorerMethods *M);
struct TdUpdateServiceNotification *TdStackFetcherUpdateServiceNotification (struct TdStackFetcherMethods *M);
struct TdUpdateFile {
  int ID;
  int refcnt;
  struct TdFile *file_;
};
struct TdUpdateFile *TdCreateObjectUpdateFile (struct TdFile *file_);
char *TdSerializeUpdateFile (struct TdUpdateFile *var);
void TdDestroyObjectUpdateFile (struct TdUpdateFile *var);
void TdStackStorerUpdateFile (struct TdUpdateFile *var, struct TdStackStorerMethods *M);
struct TdUpdateFile *TdStackFetcherUpdateFile (struct TdStackFetcherMethods *M);
struct TdUpdateFileGenerationStart {
  int ID;
  int refcnt;
  long long generation_id_;
  char *original_path_;
  char *destination_path_;
  char *conversion_;
};
struct TdUpdateFileGenerationStart *TdCreateObjectUpdateFileGenerationStart (long long generation_id_, char *original_path_, char *destination_path_, char *conversion_);
char *TdSerializeUpdateFileGenerationStart (struct TdUpdateFileGenerationStart *var);
void TdDestroyObjectUpdateFileGenerationStart (struct TdUpdateFileGenerationStart *var);
void TdStackStorerUpdateFileGenerationStart (struct TdUpdateFileGenerationStart *var, struct TdStackStorerMethods *M);
struct TdUpdateFileGenerationStart *TdStackFetcherUpdateFileGenerationStart (struct TdStackFetcherMethods *M);
struct TdUpdateFileGenerationStop {
  int ID;
  int refcnt;
  long long generation_id_;
};
struct TdUpdateFileGenerationStop *TdCreateObjectUpdateFileGenerationStop (long long generation_id_);
char *TdSerializeUpdateFileGenerationStop (struct TdUpdateFileGenerationStop *var);
void TdDestroyObjectUpdateFileGenerationStop (struct TdUpdateFileGenerationStop *var);
void TdStackStorerUpdateFileGenerationStop (struct TdUpdateFileGenerationStop *var, struct TdStackStorerMethods *M);
struct TdUpdateFileGenerationStop *TdStackFetcherUpdateFileGenerationStop (struct TdStackFetcherMethods *M);
struct TdUpdateCall {
  int ID;
  int refcnt;
  struct TdCall *call_;
};
struct TdUpdateCall *TdCreateObjectUpdateCall (struct TdCall *call_);
char *TdSerializeUpdateCall (struct TdUpdateCall *var);
void TdDestroyObjectUpdateCall (struct TdUpdateCall *var);
void TdStackStorerUpdateCall (struct TdUpdateCall *var, struct TdStackStorerMethods *M);
struct TdUpdateCall *TdStackFetcherUpdateCall (struct TdStackFetcherMethods *M);
struct TdUpdateUserPrivacySettingRules {
  int ID;
  int refcnt;
  struct TdUserPrivacySetting *setting_;
  struct TdUserPrivacySettingRules *rules_;
};
struct TdUpdateUserPrivacySettingRules *TdCreateObjectUpdateUserPrivacySettingRules (struct TdUserPrivacySetting *setting_, struct TdUserPrivacySettingRules *rules_);
char *TdSerializeUpdateUserPrivacySettingRules (struct TdUpdateUserPrivacySettingRules *var);
void TdDestroyObjectUpdateUserPrivacySettingRules (struct TdUpdateUserPrivacySettingRules *var);
void TdStackStorerUpdateUserPrivacySettingRules (struct TdUpdateUserPrivacySettingRules *var, struct TdStackStorerMethods *M);
struct TdUpdateUserPrivacySettingRules *TdStackFetcherUpdateUserPrivacySettingRules (struct TdStackFetcherMethods *M);
struct TdUpdateUnreadMessageCount {
  int ID;
  int refcnt;
  int unread_count_;
  int unread_unmuted_count_;
};
struct TdUpdateUnreadMessageCount *TdCreateObjectUpdateUnreadMessageCount (int unread_count_, int unread_unmuted_count_);
char *TdSerializeUpdateUnreadMessageCount (struct TdUpdateUnreadMessageCount *var);
void TdDestroyObjectUpdateUnreadMessageCount (struct TdUpdateUnreadMessageCount *var);
void TdStackStorerUpdateUnreadMessageCount (struct TdUpdateUnreadMessageCount *var, struct TdStackStorerMethods *M);
struct TdUpdateUnreadMessageCount *TdStackFetcherUpdateUnreadMessageCount (struct TdStackFetcherMethods *M);
struct TdUpdateUnreadChatCount {
  int ID;
  int refcnt;
  int unread_count_;
  int unread_unmuted_count_;
  int marked_as_unread_count_;
  int marked_as_unread_unmuted_count_;
};
struct TdUpdateUnreadChatCount *TdCreateObjectUpdateUnreadChatCount (int unread_count_, int unread_unmuted_count_, int marked_as_unread_count_, int marked_as_unread_unmuted_count_);
char *TdSerializeUpdateUnreadChatCount (struct TdUpdateUnreadChatCount *var);
void TdDestroyObjectUpdateUnreadChatCount (struct TdUpdateUnreadChatCount *var);
void TdStackStorerUpdateUnreadChatCount (struct TdUpdateUnreadChatCount *var, struct TdStackStorerMethods *M);
struct TdUpdateUnreadChatCount *TdStackFetcherUpdateUnreadChatCount (struct TdStackFetcherMethods *M);
struct TdUpdateOption {
  int ID;
  int refcnt;
  char *name_;
  struct TdOptionValue *value_;
};
struct TdUpdateOption *TdCreateObjectUpdateOption (char *name_, struct TdOptionValue *value_);
char *TdSerializeUpdateOption (struct TdUpdateOption *var);
void TdDestroyObjectUpdateOption (struct TdUpdateOption *var);
void TdStackStorerUpdateOption (struct TdUpdateOption *var, struct TdStackStorerMethods *M);
struct TdUpdateOption *TdStackFetcherUpdateOption (struct TdStackFetcherMethods *M);
struct TdUpdateInstalledStickerSets {
  int ID;
  int refcnt;
  int is_masks_;
  struct TdVectorLong *sticker_set_ids_;
};
struct TdUpdateInstalledStickerSets *TdCreateObjectUpdateInstalledStickerSets (int is_masks_, struct TdVectorLong *sticker_set_ids_);
char *TdSerializeUpdateInstalledStickerSets (struct TdUpdateInstalledStickerSets *var);
void TdDestroyObjectUpdateInstalledStickerSets (struct TdUpdateInstalledStickerSets *var);
void TdStackStorerUpdateInstalledStickerSets (struct TdUpdateInstalledStickerSets *var, struct TdStackStorerMethods *M);
struct TdUpdateInstalledStickerSets *TdStackFetcherUpdateInstalledStickerSets (struct TdStackFetcherMethods *M);
struct TdUpdateTrendingStickerSets {
  int ID;
  int refcnt;
  struct TdStickerSets *sticker_sets_;
};
struct TdUpdateTrendingStickerSets *TdCreateObjectUpdateTrendingStickerSets (struct TdStickerSets *sticker_sets_);
char *TdSerializeUpdateTrendingStickerSets (struct TdUpdateTrendingStickerSets *var);
void TdDestroyObjectUpdateTrendingStickerSets (struct TdUpdateTrendingStickerSets *var);
void TdStackStorerUpdateTrendingStickerSets (struct TdUpdateTrendingStickerSets *var, struct TdStackStorerMethods *M);
struct TdUpdateTrendingStickerSets *TdStackFetcherUpdateTrendingStickerSets (struct TdStackFetcherMethods *M);
struct TdUpdateRecentStickers {
  int ID;
  int refcnt;
  int is_attached_;
  struct TdVectorInt *sticker_ids_;
};
struct TdUpdateRecentStickers *TdCreateObjectUpdateRecentStickers (int is_attached_, struct TdVectorInt *sticker_ids_);
char *TdSerializeUpdateRecentStickers (struct TdUpdateRecentStickers *var);
void TdDestroyObjectUpdateRecentStickers (struct TdUpdateRecentStickers *var);
void TdStackStorerUpdateRecentStickers (struct TdUpdateRecentStickers *var, struct TdStackStorerMethods *M);
struct TdUpdateRecentStickers *TdStackFetcherUpdateRecentStickers (struct TdStackFetcherMethods *M);
struct TdUpdateFavoriteStickers {
  int ID;
  int refcnt;
  struct TdVectorInt *sticker_ids_;
};
struct TdUpdateFavoriteStickers *TdCreateObjectUpdateFavoriteStickers (struct TdVectorInt *sticker_ids_);
char *TdSerializeUpdateFavoriteStickers (struct TdUpdateFavoriteStickers *var);
void TdDestroyObjectUpdateFavoriteStickers (struct TdUpdateFavoriteStickers *var);
void TdStackStorerUpdateFavoriteStickers (struct TdUpdateFavoriteStickers *var, struct TdStackStorerMethods *M);
struct TdUpdateFavoriteStickers *TdStackFetcherUpdateFavoriteStickers (struct TdStackFetcherMethods *M);
struct TdUpdateSavedAnimations {
  int ID;
  int refcnt;
  struct TdVectorInt *animation_ids_;
};
struct TdUpdateSavedAnimations *TdCreateObjectUpdateSavedAnimations (struct TdVectorInt *animation_ids_);
char *TdSerializeUpdateSavedAnimations (struct TdUpdateSavedAnimations *var);
void TdDestroyObjectUpdateSavedAnimations (struct TdUpdateSavedAnimations *var);
void TdStackStorerUpdateSavedAnimations (struct TdUpdateSavedAnimations *var, struct TdStackStorerMethods *M);
struct TdUpdateSavedAnimations *TdStackFetcherUpdateSavedAnimations (struct TdStackFetcherMethods *M);
struct TdUpdateLanguagePackStrings {
  int ID;
  int refcnt;
  char *localization_target_;
  char *language_pack_id_;
  struct TdVectorLanguagePackString *strings_;
};
struct TdUpdateLanguagePackStrings *TdCreateObjectUpdateLanguagePackStrings (char *localization_target_, char *language_pack_id_, struct TdVectorLanguagePackString *strings_);
char *TdSerializeUpdateLanguagePackStrings (struct TdUpdateLanguagePackStrings *var);
void TdDestroyObjectUpdateLanguagePackStrings (struct TdUpdateLanguagePackStrings *var);
void TdStackStorerUpdateLanguagePackStrings (struct TdUpdateLanguagePackStrings *var, struct TdStackStorerMethods *M);
struct TdUpdateLanguagePackStrings *TdStackFetcherUpdateLanguagePackStrings (struct TdStackFetcherMethods *M);
struct TdUpdateConnectionState {
  int ID;
  int refcnt;
  struct TdConnectionState *state_;
};
struct TdUpdateConnectionState *TdCreateObjectUpdateConnectionState (struct TdConnectionState *state_);
char *TdSerializeUpdateConnectionState (struct TdUpdateConnectionState *var);
void TdDestroyObjectUpdateConnectionState (struct TdUpdateConnectionState *var);
void TdStackStorerUpdateConnectionState (struct TdUpdateConnectionState *var, struct TdStackStorerMethods *M);
struct TdUpdateConnectionState *TdStackFetcherUpdateConnectionState (struct TdStackFetcherMethods *M);
struct TdUpdateTermsOfService {
  int ID;
  int refcnt;
  char *terms_of_service_id_;
  struct TdTermsOfService *terms_of_service_;
};
struct TdUpdateTermsOfService *TdCreateObjectUpdateTermsOfService (char *terms_of_service_id_, struct TdTermsOfService *terms_of_service_);
char *TdSerializeUpdateTermsOfService (struct TdUpdateTermsOfService *var);
void TdDestroyObjectUpdateTermsOfService (struct TdUpdateTermsOfService *var);
void TdStackStorerUpdateTermsOfService (struct TdUpdateTermsOfService *var, struct TdStackStorerMethods *M);
struct TdUpdateTermsOfService *TdStackFetcherUpdateTermsOfService (struct TdStackFetcherMethods *M);
struct TdUpdateNewInlineQuery {
  int ID;
  int refcnt;
  long long id_;
  int sender_user_id_;
  struct TdLocation *user_location_;
  char *query_;
  char *offset_;
};
struct TdUpdateNewInlineQuery *TdCreateObjectUpdateNewInlineQuery (long long id_, int sender_user_id_, struct TdLocation *user_location_, char *query_, char *offset_);
char *TdSerializeUpdateNewInlineQuery (struct TdUpdateNewInlineQuery *var);
void TdDestroyObjectUpdateNewInlineQuery (struct TdUpdateNewInlineQuery *var);
void TdStackStorerUpdateNewInlineQuery (struct TdUpdateNewInlineQuery *var, struct TdStackStorerMethods *M);
struct TdUpdateNewInlineQuery *TdStackFetcherUpdateNewInlineQuery (struct TdStackFetcherMethods *M);
struct TdUpdateNewChosenInlineResult {
  int ID;
  int refcnt;
  int sender_user_id_;
  struct TdLocation *user_location_;
  char *query_;
  char *result_id_;
  char *inline_message_id_;
};
struct TdUpdateNewChosenInlineResult *TdCreateObjectUpdateNewChosenInlineResult (int sender_user_id_, struct TdLocation *user_location_, char *query_, char *result_id_, char *inline_message_id_);
char *TdSerializeUpdateNewChosenInlineResult (struct TdUpdateNewChosenInlineResult *var);
void TdDestroyObjectUpdateNewChosenInlineResult (struct TdUpdateNewChosenInlineResult *var);
void TdStackStorerUpdateNewChosenInlineResult (struct TdUpdateNewChosenInlineResult *var, struct TdStackStorerMethods *M);
struct TdUpdateNewChosenInlineResult *TdStackFetcherUpdateNewChosenInlineResult (struct TdStackFetcherMethods *M);
struct TdUpdateNewCallbackQuery {
  int ID;
  int refcnt;
  long long id_;
  int sender_user_id_;
  long long chat_id_;
  long long message_id_;
  long long chat_instance_;
  struct TdCallbackQueryPayload *payload_;
};
struct TdUpdateNewCallbackQuery *TdCreateObjectUpdateNewCallbackQuery (long long id_, int sender_user_id_, long long chat_id_, long long message_id_, long long chat_instance_, struct TdCallbackQueryPayload *payload_);
char *TdSerializeUpdateNewCallbackQuery (struct TdUpdateNewCallbackQuery *var);
void TdDestroyObjectUpdateNewCallbackQuery (struct TdUpdateNewCallbackQuery *var);
void TdStackStorerUpdateNewCallbackQuery (struct TdUpdateNewCallbackQuery *var, struct TdStackStorerMethods *M);
struct TdUpdateNewCallbackQuery *TdStackFetcherUpdateNewCallbackQuery (struct TdStackFetcherMethods *M);
struct TdUpdateNewInlineCallbackQuery {
  int ID;
  int refcnt;
  long long id_;
  int sender_user_id_;
  char *inline_message_id_;
  long long chat_instance_;
  struct TdCallbackQueryPayload *payload_;
};
struct TdUpdateNewInlineCallbackQuery *TdCreateObjectUpdateNewInlineCallbackQuery (long long id_, int sender_user_id_, char *inline_message_id_, long long chat_instance_, struct TdCallbackQueryPayload *payload_);
char *TdSerializeUpdateNewInlineCallbackQuery (struct TdUpdateNewInlineCallbackQuery *var);
void TdDestroyObjectUpdateNewInlineCallbackQuery (struct TdUpdateNewInlineCallbackQuery *var);
void TdStackStorerUpdateNewInlineCallbackQuery (struct TdUpdateNewInlineCallbackQuery *var, struct TdStackStorerMethods *M);
struct TdUpdateNewInlineCallbackQuery *TdStackFetcherUpdateNewInlineCallbackQuery (struct TdStackFetcherMethods *M);
struct TdUpdateNewShippingQuery {
  int ID;
  int refcnt;
  long long id_;
  int sender_user_id_;
  char *invoice_payload_;
  struct TdAddress *shipping_address_;
};
struct TdUpdateNewShippingQuery *TdCreateObjectUpdateNewShippingQuery (long long id_, int sender_user_id_, char *invoice_payload_, struct TdAddress *shipping_address_);
char *TdSerializeUpdateNewShippingQuery (struct TdUpdateNewShippingQuery *var);
void TdDestroyObjectUpdateNewShippingQuery (struct TdUpdateNewShippingQuery *var);
void TdStackStorerUpdateNewShippingQuery (struct TdUpdateNewShippingQuery *var, struct TdStackStorerMethods *M);
struct TdUpdateNewShippingQuery *TdStackFetcherUpdateNewShippingQuery (struct TdStackFetcherMethods *M);
struct TdUpdateNewPreCheckoutQuery {
  int ID;
  int refcnt;
  long long id_;
  int sender_user_id_;
  char *currency_;
  long long total_amount_;
  struct TdBytes invoice_payload_;
  char *shipping_option_id_;
  struct TdOrderInfo *order_info_;
};
struct TdUpdateNewPreCheckoutQuery *TdCreateObjectUpdateNewPreCheckoutQuery (long long id_, int sender_user_id_, char *currency_, long long total_amount_, struct TdBytes invoice_payload_, char *shipping_option_id_, struct TdOrderInfo *order_info_);
char *TdSerializeUpdateNewPreCheckoutQuery (struct TdUpdateNewPreCheckoutQuery *var);
void TdDestroyObjectUpdateNewPreCheckoutQuery (struct TdUpdateNewPreCheckoutQuery *var);
void TdStackStorerUpdateNewPreCheckoutQuery (struct TdUpdateNewPreCheckoutQuery *var, struct TdStackStorerMethods *M);
struct TdUpdateNewPreCheckoutQuery *TdStackFetcherUpdateNewPreCheckoutQuery (struct TdStackFetcherMethods *M);
struct TdUpdateNewCustomEvent {
  int ID;
  int refcnt;
  char *event_;
};
struct TdUpdateNewCustomEvent *TdCreateObjectUpdateNewCustomEvent (char *event_);
char *TdSerializeUpdateNewCustomEvent (struct TdUpdateNewCustomEvent *var);
void TdDestroyObjectUpdateNewCustomEvent (struct TdUpdateNewCustomEvent *var);
void TdStackStorerUpdateNewCustomEvent (struct TdUpdateNewCustomEvent *var, struct TdStackStorerMethods *M);
struct TdUpdateNewCustomEvent *TdStackFetcherUpdateNewCustomEvent (struct TdStackFetcherMethods *M);
struct TdUpdateNewCustomQuery {
  int ID;
  int refcnt;
  long long id_;
  char *data_;
  int timeout_;
};
struct TdUpdateNewCustomQuery *TdCreateObjectUpdateNewCustomQuery (long long id_, char *data_, int timeout_);
char *TdSerializeUpdateNewCustomQuery (struct TdUpdateNewCustomQuery *var);
void TdDestroyObjectUpdateNewCustomQuery (struct TdUpdateNewCustomQuery *var);
void TdStackStorerUpdateNewCustomQuery (struct TdUpdateNewCustomQuery *var, struct TdStackStorerMethods *M);
struct TdUpdateNewCustomQuery *TdStackFetcherUpdateNewCustomQuery (struct TdStackFetcherMethods *M);
struct TdUser {
  int ID;
  int refcnt;
  int id_;
  char *first_name_;
  char *last_name_;
  char *username_;
  char *phone_number_;
  struct TdUserStatus *status_;
  struct TdProfilePhoto *profile_photo_;
  struct TdLinkState *outgoing_link_;
  struct TdLinkState *incoming_link_;
  int is_verified_;
  char *restriction_reason_;
  int have_access_;
  struct TdUserType *type_;
  char *language_code_;
};
struct TdUser *TdCreateObjectUser (int id_, char *first_name_, char *last_name_, char *username_, char *phone_number_, struct TdUserStatus *status_, struct TdProfilePhoto *profile_photo_, struct TdLinkState *outgoing_link_, struct TdLinkState *incoming_link_, int is_verified_, char *restriction_reason_, int have_access_, struct TdUserType *type_, char *language_code_);
char *TdSerializeUser (struct TdUser *var);
void TdDestroyObjectUser (struct TdUser *var);
void TdStackStorerUser (struct TdUser *var, struct TdStackStorerMethods *M);
struct TdUser *TdStackFetcherUser (struct TdStackFetcherMethods *M);
struct TdUserFullInfo {
  int ID;
  int refcnt;
  int is_blocked_;
  int can_be_called_;
  int has_private_calls_;
  char *bio_;
  char *share_text_;
  int group_in_common_count_;
  struct TdBotInfo *bot_info_;
};
struct TdUserFullInfo *TdCreateObjectUserFullInfo (int is_blocked_, int can_be_called_, int has_private_calls_, char *bio_, char *share_text_, int group_in_common_count_, struct TdBotInfo *bot_info_);
char *TdSerializeUserFullInfo (struct TdUserFullInfo *var);
void TdDestroyObjectUserFullInfo (struct TdUserFullInfo *var);
void TdStackStorerUserFullInfo (struct TdUserFullInfo *var, struct TdStackStorerMethods *M);
struct TdUserFullInfo *TdStackFetcherUserFullInfo (struct TdStackFetcherMethods *M);
struct TdUserPrivacySetting {
  int ID;
  int refcnt;
};
char *TdSerializeUserPrivacySetting (struct TdUserPrivacySetting *var);
void TdDestroyObjectUserPrivacySetting (struct TdUserPrivacySetting *var);
void TdStackStorerUserPrivacySetting (struct TdUserPrivacySetting *var, struct TdStackStorerMethods *M);
struct TdUserPrivacySetting *TdStackFetcherUserPrivacySetting (struct TdStackFetcherMethods *M);
enum List_UserPrivacySetting {
  CODE_UserPrivacySettingShowStatus = 1862829310,
  CODE_UserPrivacySettingAllowChatInvites = 1271668007,
  CODE_UserPrivacySettingAllowCalls = -906967291,
};
struct TdUserPrivacySettingShowStatus {
  int ID;
  int refcnt;
};
struct TdUserPrivacySettingShowStatus *TdCreateObjectUserPrivacySettingShowStatus (void);
char *TdSerializeUserPrivacySettingShowStatus (struct TdUserPrivacySettingShowStatus *var);
void TdDestroyObjectUserPrivacySettingShowStatus (struct TdUserPrivacySettingShowStatus *var);
void TdStackStorerUserPrivacySettingShowStatus (struct TdUserPrivacySettingShowStatus *var, struct TdStackStorerMethods *M);
struct TdUserPrivacySettingShowStatus *TdStackFetcherUserPrivacySettingShowStatus (struct TdStackFetcherMethods *M);
struct TdUserPrivacySettingAllowChatInvites {
  int ID;
  int refcnt;
};
struct TdUserPrivacySettingAllowChatInvites *TdCreateObjectUserPrivacySettingAllowChatInvites (void);
char *TdSerializeUserPrivacySettingAllowChatInvites (struct TdUserPrivacySettingAllowChatInvites *var);
void TdDestroyObjectUserPrivacySettingAllowChatInvites (struct TdUserPrivacySettingAllowChatInvites *var);
void TdStackStorerUserPrivacySettingAllowChatInvites (struct TdUserPrivacySettingAllowChatInvites *var, struct TdStackStorerMethods *M);
struct TdUserPrivacySettingAllowChatInvites *TdStackFetcherUserPrivacySettingAllowChatInvites (struct TdStackFetcherMethods *M);
struct TdUserPrivacySettingAllowCalls {
  int ID;
  int refcnt;
};
struct TdUserPrivacySettingAllowCalls *TdCreateObjectUserPrivacySettingAllowCalls (void);
char *TdSerializeUserPrivacySettingAllowCalls (struct TdUserPrivacySettingAllowCalls *var);
void TdDestroyObjectUserPrivacySettingAllowCalls (struct TdUserPrivacySettingAllowCalls *var);
void TdStackStorerUserPrivacySettingAllowCalls (struct TdUserPrivacySettingAllowCalls *var, struct TdStackStorerMethods *M);
struct TdUserPrivacySettingAllowCalls *TdStackFetcherUserPrivacySettingAllowCalls (struct TdStackFetcherMethods *M);
struct TdUserPrivacySettingRule {
  int ID;
  int refcnt;
};
char *TdSerializeUserPrivacySettingRule (struct TdUserPrivacySettingRule *var);
void TdDestroyObjectUserPrivacySettingRule (struct TdUserPrivacySettingRule *var);
void TdStackStorerUserPrivacySettingRule (struct TdUserPrivacySettingRule *var, struct TdStackStorerMethods *M);
struct TdUserPrivacySettingRule *TdStackFetcherUserPrivacySettingRule (struct TdStackFetcherMethods *M);
enum List_UserPrivacySettingRule {
  CODE_UserPrivacySettingRuleAllowAll = -1967186881,
  CODE_UserPrivacySettingRuleAllowContacts = -1892733680,
  CODE_UserPrivacySettingRuleAllowUsers = 427601278,
  CODE_UserPrivacySettingRuleRestrictAll = -1406495408,
  CODE_UserPrivacySettingRuleRestrictContacts = 1008389378,
  CODE_UserPrivacySettingRuleRestrictUsers = 2119951802,
};
struct TdUserPrivacySettingRuleAllowAll {
  int ID;
  int refcnt;
};
struct TdUserPrivacySettingRuleAllowAll *TdCreateObjectUserPrivacySettingRuleAllowAll (void);
char *TdSerializeUserPrivacySettingRuleAllowAll (struct TdUserPrivacySettingRuleAllowAll *var);
void TdDestroyObjectUserPrivacySettingRuleAllowAll (struct TdUserPrivacySettingRuleAllowAll *var);
void TdStackStorerUserPrivacySettingRuleAllowAll (struct TdUserPrivacySettingRuleAllowAll *var, struct TdStackStorerMethods *M);
struct TdUserPrivacySettingRuleAllowAll *TdStackFetcherUserPrivacySettingRuleAllowAll (struct TdStackFetcherMethods *M);
struct TdUserPrivacySettingRuleAllowContacts {
  int ID;
  int refcnt;
};
struct TdUserPrivacySettingRuleAllowContacts *TdCreateObjectUserPrivacySettingRuleAllowContacts (void);
char *TdSerializeUserPrivacySettingRuleAllowContacts (struct TdUserPrivacySettingRuleAllowContacts *var);
void TdDestroyObjectUserPrivacySettingRuleAllowContacts (struct TdUserPrivacySettingRuleAllowContacts *var);
void TdStackStorerUserPrivacySettingRuleAllowContacts (struct TdUserPrivacySettingRuleAllowContacts *var, struct TdStackStorerMethods *M);
struct TdUserPrivacySettingRuleAllowContacts *TdStackFetcherUserPrivacySettingRuleAllowContacts (struct TdStackFetcherMethods *M);
struct TdUserPrivacySettingRuleAllowUsers {
  int ID;
  int refcnt;
  struct TdVectorInt *user_ids_;
};
struct TdUserPrivacySettingRuleAllowUsers *TdCreateObjectUserPrivacySettingRuleAllowUsers (struct TdVectorInt *user_ids_);
char *TdSerializeUserPrivacySettingRuleAllowUsers (struct TdUserPrivacySettingRuleAllowUsers *var);
void TdDestroyObjectUserPrivacySettingRuleAllowUsers (struct TdUserPrivacySettingRuleAllowUsers *var);
void TdStackStorerUserPrivacySettingRuleAllowUsers (struct TdUserPrivacySettingRuleAllowUsers *var, struct TdStackStorerMethods *M);
struct TdUserPrivacySettingRuleAllowUsers *TdStackFetcherUserPrivacySettingRuleAllowUsers (struct TdStackFetcherMethods *M);
struct TdUserPrivacySettingRuleRestrictAll {
  int ID;
  int refcnt;
};
struct TdUserPrivacySettingRuleRestrictAll *TdCreateObjectUserPrivacySettingRuleRestrictAll (void);
char *TdSerializeUserPrivacySettingRuleRestrictAll (struct TdUserPrivacySettingRuleRestrictAll *var);
void TdDestroyObjectUserPrivacySettingRuleRestrictAll (struct TdUserPrivacySettingRuleRestrictAll *var);
void TdStackStorerUserPrivacySettingRuleRestrictAll (struct TdUserPrivacySettingRuleRestrictAll *var, struct TdStackStorerMethods *M);
struct TdUserPrivacySettingRuleRestrictAll *TdStackFetcherUserPrivacySettingRuleRestrictAll (struct TdStackFetcherMethods *M);
struct TdUserPrivacySettingRuleRestrictContacts {
  int ID;
  int refcnt;
};
struct TdUserPrivacySettingRuleRestrictContacts *TdCreateObjectUserPrivacySettingRuleRestrictContacts (void);
char *TdSerializeUserPrivacySettingRuleRestrictContacts (struct TdUserPrivacySettingRuleRestrictContacts *var);
void TdDestroyObjectUserPrivacySettingRuleRestrictContacts (struct TdUserPrivacySettingRuleRestrictContacts *var);
void TdStackStorerUserPrivacySettingRuleRestrictContacts (struct TdUserPrivacySettingRuleRestrictContacts *var, struct TdStackStorerMethods *M);
struct TdUserPrivacySettingRuleRestrictContacts *TdStackFetcherUserPrivacySettingRuleRestrictContacts (struct TdStackFetcherMethods *M);
struct TdUserPrivacySettingRuleRestrictUsers {
  int ID;
  int refcnt;
  struct TdVectorInt *user_ids_;
};
struct TdUserPrivacySettingRuleRestrictUsers *TdCreateObjectUserPrivacySettingRuleRestrictUsers (struct TdVectorInt *user_ids_);
char *TdSerializeUserPrivacySettingRuleRestrictUsers (struct TdUserPrivacySettingRuleRestrictUsers *var);
void TdDestroyObjectUserPrivacySettingRuleRestrictUsers (struct TdUserPrivacySettingRuleRestrictUsers *var);
void TdStackStorerUserPrivacySettingRuleRestrictUsers (struct TdUserPrivacySettingRuleRestrictUsers *var, struct TdStackStorerMethods *M);
struct TdUserPrivacySettingRuleRestrictUsers *TdStackFetcherUserPrivacySettingRuleRestrictUsers (struct TdStackFetcherMethods *M);
struct TdUserPrivacySettingRules {
  int ID;
  int refcnt;
  struct TdVectorUserPrivacySettingRule *rules_;
};
struct TdUserPrivacySettingRules *TdCreateObjectUserPrivacySettingRules (struct TdVectorUserPrivacySettingRule *rules_);
char *TdSerializeUserPrivacySettingRules (struct TdUserPrivacySettingRules *var);
void TdDestroyObjectUserPrivacySettingRules (struct TdUserPrivacySettingRules *var);
void TdStackStorerUserPrivacySettingRules (struct TdUserPrivacySettingRules *var, struct TdStackStorerMethods *M);
struct TdUserPrivacySettingRules *TdStackFetcherUserPrivacySettingRules (struct TdStackFetcherMethods *M);
struct TdUserProfilePhotos {
  int ID;
  int refcnt;
  int total_count_;
  struct TdVectorPhoto *photos_;
};
struct TdUserProfilePhotos *TdCreateObjectUserProfilePhotos (int total_count_, struct TdVectorPhoto *photos_);
char *TdSerializeUserProfilePhotos (struct TdUserProfilePhotos *var);
void TdDestroyObjectUserProfilePhotos (struct TdUserProfilePhotos *var);
void TdStackStorerUserProfilePhotos (struct TdUserProfilePhotos *var, struct TdStackStorerMethods *M);
struct TdUserProfilePhotos *TdStackFetcherUserProfilePhotos (struct TdStackFetcherMethods *M);
struct TdUserStatus {
  int ID;
  int refcnt;
};
char *TdSerializeUserStatus (struct TdUserStatus *var);
void TdDestroyObjectUserStatus (struct TdUserStatus *var);
void TdStackStorerUserStatus (struct TdUserStatus *var, struct TdStackStorerMethods *M);
struct TdUserStatus *TdStackFetcherUserStatus (struct TdStackFetcherMethods *M);
enum List_UserStatus {
  CODE_UserStatusEmpty = 164646985,
  CODE_UserStatusOnline = -1529460876,
  CODE_UserStatusOffline = -759984891,
  CODE_UserStatusRecently = -496024847,
  CODE_UserStatusLastWeek = 129960444,
  CODE_UserStatusLastMonth = 2011940674,
};
struct TdUserStatusEmpty {
  int ID;
  int refcnt;
};
struct TdUserStatusEmpty *TdCreateObjectUserStatusEmpty (void);
char *TdSerializeUserStatusEmpty (struct TdUserStatusEmpty *var);
void TdDestroyObjectUserStatusEmpty (struct TdUserStatusEmpty *var);
void TdStackStorerUserStatusEmpty (struct TdUserStatusEmpty *var, struct TdStackStorerMethods *M);
struct TdUserStatusEmpty *TdStackFetcherUserStatusEmpty (struct TdStackFetcherMethods *M);
struct TdUserStatusOnline {
  int ID;
  int refcnt;
  int expires_;
};
struct TdUserStatusOnline *TdCreateObjectUserStatusOnline (int expires_);
char *TdSerializeUserStatusOnline (struct TdUserStatusOnline *var);
void TdDestroyObjectUserStatusOnline (struct TdUserStatusOnline *var);
void TdStackStorerUserStatusOnline (struct TdUserStatusOnline *var, struct TdStackStorerMethods *M);
struct TdUserStatusOnline *TdStackFetcherUserStatusOnline (struct TdStackFetcherMethods *M);
struct TdUserStatusOffline {
  int ID;
  int refcnt;
  int was_online_;
};
struct TdUserStatusOffline *TdCreateObjectUserStatusOffline (int was_online_);
char *TdSerializeUserStatusOffline (struct TdUserStatusOffline *var);
void TdDestroyObjectUserStatusOffline (struct TdUserStatusOffline *var);
void TdStackStorerUserStatusOffline (struct TdUserStatusOffline *var, struct TdStackStorerMethods *M);
struct TdUserStatusOffline *TdStackFetcherUserStatusOffline (struct TdStackFetcherMethods *M);
struct TdUserStatusRecently {
  int ID;
  int refcnt;
};
struct TdUserStatusRecently *TdCreateObjectUserStatusRecently (void);
char *TdSerializeUserStatusRecently (struct TdUserStatusRecently *var);
void TdDestroyObjectUserStatusRecently (struct TdUserStatusRecently *var);
void TdStackStorerUserStatusRecently (struct TdUserStatusRecently *var, struct TdStackStorerMethods *M);
struct TdUserStatusRecently *TdStackFetcherUserStatusRecently (struct TdStackFetcherMethods *M);
struct TdUserStatusLastWeek {
  int ID;
  int refcnt;
};
struct TdUserStatusLastWeek *TdCreateObjectUserStatusLastWeek (void);
char *TdSerializeUserStatusLastWeek (struct TdUserStatusLastWeek *var);
void TdDestroyObjectUserStatusLastWeek (struct TdUserStatusLastWeek *var);
void TdStackStorerUserStatusLastWeek (struct TdUserStatusLastWeek *var, struct TdStackStorerMethods *M);
struct TdUserStatusLastWeek *TdStackFetcherUserStatusLastWeek (struct TdStackFetcherMethods *M);
struct TdUserStatusLastMonth {
  int ID;
  int refcnt;
};
struct TdUserStatusLastMonth *TdCreateObjectUserStatusLastMonth (void);
char *TdSerializeUserStatusLastMonth (struct TdUserStatusLastMonth *var);
void TdDestroyObjectUserStatusLastMonth (struct TdUserStatusLastMonth *var);
void TdStackStorerUserStatusLastMonth (struct TdUserStatusLastMonth *var, struct TdStackStorerMethods *M);
struct TdUserStatusLastMonth *TdStackFetcherUserStatusLastMonth (struct TdStackFetcherMethods *M);
struct TdUserType {
  int ID;
  int refcnt;
};
char *TdSerializeUserType (struct TdUserType *var);
void TdDestroyObjectUserType (struct TdUserType *var);
void TdStackStorerUserType (struct TdUserType *var, struct TdStackStorerMethods *M);
struct TdUserType *TdStackFetcherUserType (struct TdStackFetcherMethods *M);
enum List_UserType {
  CODE_UserTypeRegular = -598644325,
  CODE_UserTypeDeleted = -1807729372,
  CODE_UserTypeBot = 1262387765,
  CODE_UserTypeUnknown = -724541123,
};
struct TdUserTypeRegular {
  int ID;
  int refcnt;
};
struct TdUserTypeRegular *TdCreateObjectUserTypeRegular (void);
char *TdSerializeUserTypeRegular (struct TdUserTypeRegular *var);
void TdDestroyObjectUserTypeRegular (struct TdUserTypeRegular *var);
void TdStackStorerUserTypeRegular (struct TdUserTypeRegular *var, struct TdStackStorerMethods *M);
struct TdUserTypeRegular *TdStackFetcherUserTypeRegular (struct TdStackFetcherMethods *M);
struct TdUserTypeDeleted {
  int ID;
  int refcnt;
};
struct TdUserTypeDeleted *TdCreateObjectUserTypeDeleted (void);
char *TdSerializeUserTypeDeleted (struct TdUserTypeDeleted *var);
void TdDestroyObjectUserTypeDeleted (struct TdUserTypeDeleted *var);
void TdStackStorerUserTypeDeleted (struct TdUserTypeDeleted *var, struct TdStackStorerMethods *M);
struct TdUserTypeDeleted *TdStackFetcherUserTypeDeleted (struct TdStackFetcherMethods *M);
struct TdUserTypeBot {
  int ID;
  int refcnt;
  int can_join_groups_;
  int can_read_all_group_messages_;
  int is_inline_;
  char *inline_query_placeholder_;
  int need_location_;
};
struct TdUserTypeBot *TdCreateObjectUserTypeBot (int can_join_groups_, int can_read_all_group_messages_, int is_inline_, char *inline_query_placeholder_, int need_location_);
char *TdSerializeUserTypeBot (struct TdUserTypeBot *var);
void TdDestroyObjectUserTypeBot (struct TdUserTypeBot *var);
void TdStackStorerUserTypeBot (struct TdUserTypeBot *var, struct TdStackStorerMethods *M);
struct TdUserTypeBot *TdStackFetcherUserTypeBot (struct TdStackFetcherMethods *M);
struct TdUserTypeUnknown {
  int ID;
  int refcnt;
};
struct TdUserTypeUnknown *TdCreateObjectUserTypeUnknown (void);
char *TdSerializeUserTypeUnknown (struct TdUserTypeUnknown *var);
void TdDestroyObjectUserTypeUnknown (struct TdUserTypeUnknown *var);
void TdStackStorerUserTypeUnknown (struct TdUserTypeUnknown *var, struct TdStackStorerMethods *M);
struct TdUserTypeUnknown *TdStackFetcherUserTypeUnknown (struct TdStackFetcherMethods *M);
struct TdUsers {
  int ID;
  int refcnt;
  int total_count_;
  struct TdVectorInt *user_ids_;
};
struct TdUsers *TdCreateObjectUsers (int total_count_, struct TdVectorInt *user_ids_);
char *TdSerializeUsers (struct TdUsers *var);
void TdDestroyObjectUsers (struct TdUsers *var);
void TdStackStorerUsers (struct TdUsers *var, struct TdStackStorerMethods *M);
struct TdUsers *TdStackFetcherUsers (struct TdStackFetcherMethods *M);
struct TdValidatedOrderInfo {
  int ID;
  int refcnt;
  char *order_info_id_;
  struct TdVectorShippingOption *shipping_options_;
};
struct TdValidatedOrderInfo *TdCreateObjectValidatedOrderInfo (char *order_info_id_, struct TdVectorShippingOption *shipping_options_);
char *TdSerializeValidatedOrderInfo (struct TdValidatedOrderInfo *var);
void TdDestroyObjectValidatedOrderInfo (struct TdValidatedOrderInfo *var);
void TdStackStorerValidatedOrderInfo (struct TdValidatedOrderInfo *var, struct TdStackStorerMethods *M);
struct TdValidatedOrderInfo *TdStackFetcherValidatedOrderInfo (struct TdStackFetcherMethods *M);
struct TdVenue {
  int ID;
  int refcnt;
  struct TdLocation *location_;
  char *title_;
  char *address_;
  char *provider_;
  char *id_;
  char *type_;
};
struct TdVenue *TdCreateObjectVenue (struct TdLocation *location_, char *title_, char *address_, char *provider_, char *id_, char *type_);
char *TdSerializeVenue (struct TdVenue *var);
void TdDestroyObjectVenue (struct TdVenue *var);
void TdStackStorerVenue (struct TdVenue *var, struct TdStackStorerMethods *M);
struct TdVenue *TdStackFetcherVenue (struct TdStackFetcherMethods *M);
struct TdVideo {
  int ID;
  int refcnt;
  int duration_;
  int width_;
  int height_;
  char *file_name_;
  char *mime_type_;
  int has_stickers_;
  int supports_streaming_;
  struct TdPhotoSize *thumbnail_;
  struct TdFile *video_;
};
struct TdVideo *TdCreateObjectVideo (int duration_, int width_, int height_, char *file_name_, char *mime_type_, int has_stickers_, int supports_streaming_, struct TdPhotoSize *thumbnail_, struct TdFile *video_);
char *TdSerializeVideo (struct TdVideo *var);
void TdDestroyObjectVideo (struct TdVideo *var);
void TdStackStorerVideo (struct TdVideo *var, struct TdStackStorerMethods *M);
struct TdVideo *TdStackFetcherVideo (struct TdStackFetcherMethods *M);
struct TdVideoNote {
  int ID;
  int refcnt;
  int duration_;
  int length_;
  struct TdPhotoSize *thumbnail_;
  struct TdFile *video_;
};
struct TdVideoNote *TdCreateObjectVideoNote (int duration_, int length_, struct TdPhotoSize *thumbnail_, struct TdFile *video_);
char *TdSerializeVideoNote (struct TdVideoNote *var);
void TdDestroyObjectVideoNote (struct TdVideoNote *var);
void TdStackStorerVideoNote (struct TdVideoNote *var, struct TdStackStorerMethods *M);
struct TdVideoNote *TdStackFetcherVideoNote (struct TdStackFetcherMethods *M);
struct TdVoiceNote {
  int ID;
  int refcnt;
  int duration_;
  struct TdBytes waveform_;
  char *mime_type_;
  struct TdFile *voice_;
};
struct TdVoiceNote *TdCreateObjectVoiceNote (int duration_, struct TdBytes waveform_, char *mime_type_, struct TdFile *voice_);
char *TdSerializeVoiceNote (struct TdVoiceNote *var);
void TdDestroyObjectVoiceNote (struct TdVoiceNote *var);
void TdStackStorerVoiceNote (struct TdVoiceNote *var, struct TdStackStorerMethods *M);
struct TdVoiceNote *TdStackFetcherVoiceNote (struct TdStackFetcherMethods *M);
struct TdWallpaper {
  int ID;
  int refcnt;
  int id_;
  struct TdVectorPhotoSize *sizes_;
  int color_;
};
struct TdWallpaper *TdCreateObjectWallpaper (int id_, struct TdVectorPhotoSize *sizes_, int color_);
char *TdSerializeWallpaper (struct TdWallpaper *var);
void TdDestroyObjectWallpaper (struct TdWallpaper *var);
void TdStackStorerWallpaper (struct TdWallpaper *var, struct TdStackStorerMethods *M);
struct TdWallpaper *TdStackFetcherWallpaper (struct TdStackFetcherMethods *M);
struct TdWallpapers {
  int ID;
  int refcnt;
  struct TdVectorWallpaper *wallpapers_;
};
struct TdWallpapers *TdCreateObjectWallpapers (struct TdVectorWallpaper *wallpapers_);
char *TdSerializeWallpapers (struct TdWallpapers *var);
void TdDestroyObjectWallpapers (struct TdWallpapers *var);
void TdStackStorerWallpapers (struct TdWallpapers *var, struct TdStackStorerMethods *M);
struct TdWallpapers *TdStackFetcherWallpapers (struct TdStackFetcherMethods *M);
struct TdWebPage {
  int ID;
  int refcnt;
  char *url_;
  char *display_url_;
  char *type_;
  char *site_name_;
  char *title_;
  char *description_;
  struct TdPhoto *photo_;
  char *embed_url_;
  char *embed_type_;
  int embed_width_;
  int embed_height_;
  int duration_;
  char *author_;
  struct TdAnimation *animation_;
  struct TdAudio *audio_;
  struct TdDocument *document_;
  struct TdSticker *sticker_;
  struct TdVideo *video_;
  struct TdVideoNote *video_note_;
  struct TdVoiceNote *voice_note_;
  int has_instant_view_;
};
struct TdWebPage *TdCreateObjectWebPage (char *url_, char *display_url_, char *type_, char *site_name_, char *title_, char *description_, struct TdPhoto *photo_, char *embed_url_, char *embed_type_, int embed_width_, int embed_height_, int duration_, char *author_, struct TdAnimation *animation_, struct TdAudio *audio_, struct TdDocument *document_, struct TdSticker *sticker_, struct TdVideo *video_, struct TdVideoNote *video_note_, struct TdVoiceNote *voice_note_, int has_instant_view_);
char *TdSerializeWebPage (struct TdWebPage *var);
void TdDestroyObjectWebPage (struct TdWebPage *var);
void TdStackStorerWebPage (struct TdWebPage *var, struct TdStackStorerMethods *M);
struct TdWebPage *TdStackFetcherWebPage (struct TdStackFetcherMethods *M);
struct TdWebPageInstantView {
  int ID;
  int refcnt;
  struct TdVectorPageBlock *page_blocks_;
  int is_full_;
};
struct TdWebPageInstantView *TdCreateObjectWebPageInstantView (struct TdVectorPageBlock *page_blocks_, int is_full_);
char *TdSerializeWebPageInstantView (struct TdWebPageInstantView *var);
void TdDestroyObjectWebPageInstantView (struct TdWebPageInstantView *var);
void TdStackStorerWebPageInstantView (struct TdWebPageInstantView *var, struct TdStackStorerMethods *M);
struct TdWebPageInstantView *TdStackFetcherWebPageInstantView (struct TdStackFetcherMethods *M);
struct TdAcceptCall {
  int ID;
  int refcnt;
  int call_id_;
  struct TdCallProtocol *protocol_;
};
struct TdAcceptCall *TdCreateObjectAcceptCall (int call_id_, struct TdCallProtocol *protocol_);
char *TdSerializeAcceptCall (struct TdAcceptCall *var);
void TdDestroyObjectAcceptCall (struct TdAcceptCall *var);
void TdStackStorerAcceptCall (struct TdAcceptCall *var, struct TdStackStorerMethods *M);
struct TdAcceptCall *TdStackFetcherAcceptCall (struct TdStackFetcherMethods *M);
struct TdAcceptTermsOfService {
  int ID;
  int refcnt;
  char *terms_of_service_id_;
};
struct TdAcceptTermsOfService *TdCreateObjectAcceptTermsOfService (char *terms_of_service_id_);
char *TdSerializeAcceptTermsOfService (struct TdAcceptTermsOfService *var);
void TdDestroyObjectAcceptTermsOfService (struct TdAcceptTermsOfService *var);
void TdStackStorerAcceptTermsOfService (struct TdAcceptTermsOfService *var, struct TdStackStorerMethods *M);
struct TdAcceptTermsOfService *TdStackFetcherAcceptTermsOfService (struct TdStackFetcherMethods *M);
struct TdAddChatMember {
  int ID;
  int refcnt;
  long long chat_id_;
  int user_id_;
  int forward_limit_;
};
struct TdAddChatMember *TdCreateObjectAddChatMember (long long chat_id_, int user_id_, int forward_limit_);
char *TdSerializeAddChatMember (struct TdAddChatMember *var);
void TdDestroyObjectAddChatMember (struct TdAddChatMember *var);
void TdStackStorerAddChatMember (struct TdAddChatMember *var, struct TdStackStorerMethods *M);
struct TdAddChatMember *TdStackFetcherAddChatMember (struct TdStackFetcherMethods *M);
struct TdAddChatMembers {
  int ID;
  int refcnt;
  long long chat_id_;
  struct TdVectorInt *user_ids_;
};
struct TdAddChatMembers *TdCreateObjectAddChatMembers (long long chat_id_, struct TdVectorInt *user_ids_);
char *TdSerializeAddChatMembers (struct TdAddChatMembers *var);
void TdDestroyObjectAddChatMembers (struct TdAddChatMembers *var);
void TdStackStorerAddChatMembers (struct TdAddChatMembers *var, struct TdStackStorerMethods *M);
struct TdAddChatMembers *TdStackFetcherAddChatMembers (struct TdStackFetcherMethods *M);
struct TdAddFavoriteSticker {
  int ID;
  int refcnt;
  struct TdInputFile *sticker_;
};
struct TdAddFavoriteSticker *TdCreateObjectAddFavoriteSticker (struct TdInputFile *sticker_);
char *TdSerializeAddFavoriteSticker (struct TdAddFavoriteSticker *var);
void TdDestroyObjectAddFavoriteSticker (struct TdAddFavoriteSticker *var);
void TdStackStorerAddFavoriteSticker (struct TdAddFavoriteSticker *var, struct TdStackStorerMethods *M);
struct TdAddFavoriteSticker *TdStackFetcherAddFavoriteSticker (struct TdStackFetcherMethods *M);
struct TdAddLocalMessage {
  int ID;
  int refcnt;
  long long chat_id_;
  int sender_user_id_;
  long long reply_to_message_id_;
  int disable_notification_;
  struct TdInputMessageContent *input_message_content_;
};
struct TdAddLocalMessage *TdCreateObjectAddLocalMessage (long long chat_id_, int sender_user_id_, long long reply_to_message_id_, int disable_notification_, struct TdInputMessageContent *input_message_content_);
char *TdSerializeAddLocalMessage (struct TdAddLocalMessage *var);
void TdDestroyObjectAddLocalMessage (struct TdAddLocalMessage *var);
void TdStackStorerAddLocalMessage (struct TdAddLocalMessage *var, struct TdStackStorerMethods *M);
struct TdAddLocalMessage *TdStackFetcherAddLocalMessage (struct TdStackFetcherMethods *M);
struct TdAddNetworkStatistics {
  int ID;
  int refcnt;
  struct TdNetworkStatisticsEntry *entry_;
};
struct TdAddNetworkStatistics *TdCreateObjectAddNetworkStatistics (struct TdNetworkStatisticsEntry *entry_);
char *TdSerializeAddNetworkStatistics (struct TdAddNetworkStatistics *var);
void TdDestroyObjectAddNetworkStatistics (struct TdAddNetworkStatistics *var);
void TdStackStorerAddNetworkStatistics (struct TdAddNetworkStatistics *var, struct TdStackStorerMethods *M);
struct TdAddNetworkStatistics *TdStackFetcherAddNetworkStatistics (struct TdStackFetcherMethods *M);
struct TdAddProxy {
  int ID;
  int refcnt;
  char *server_;
  int port_;
  int enable_;
  struct TdProxyType *type_;
};
struct TdAddProxy *TdCreateObjectAddProxy (char *server_, int port_, int enable_, struct TdProxyType *type_);
char *TdSerializeAddProxy (struct TdAddProxy *var);
void TdDestroyObjectAddProxy (struct TdAddProxy *var);
void TdStackStorerAddProxy (struct TdAddProxy *var, struct TdStackStorerMethods *M);
struct TdAddProxy *TdStackFetcherAddProxy (struct TdStackFetcherMethods *M);
struct TdAddRecentSticker {
  int ID;
  int refcnt;
  int is_attached_;
  struct TdInputFile *sticker_;
};
struct TdAddRecentSticker *TdCreateObjectAddRecentSticker (int is_attached_, struct TdInputFile *sticker_);
char *TdSerializeAddRecentSticker (struct TdAddRecentSticker *var);
void TdDestroyObjectAddRecentSticker (struct TdAddRecentSticker *var);
void TdStackStorerAddRecentSticker (struct TdAddRecentSticker *var, struct TdStackStorerMethods *M);
struct TdAddRecentSticker *TdStackFetcherAddRecentSticker (struct TdStackFetcherMethods *M);
struct TdAddRecentlyFoundChat {
  int ID;
  int refcnt;
  long long chat_id_;
};
struct TdAddRecentlyFoundChat *TdCreateObjectAddRecentlyFoundChat (long long chat_id_);
char *TdSerializeAddRecentlyFoundChat (struct TdAddRecentlyFoundChat *var);
void TdDestroyObjectAddRecentlyFoundChat (struct TdAddRecentlyFoundChat *var);
void TdStackStorerAddRecentlyFoundChat (struct TdAddRecentlyFoundChat *var, struct TdStackStorerMethods *M);
struct TdAddRecentlyFoundChat *TdStackFetcherAddRecentlyFoundChat (struct TdStackFetcherMethods *M);
struct TdAddSavedAnimation {
  int ID;
  int refcnt;
  struct TdInputFile *animation_;
};
struct TdAddSavedAnimation *TdCreateObjectAddSavedAnimation (struct TdInputFile *animation_);
char *TdSerializeAddSavedAnimation (struct TdAddSavedAnimation *var);
void TdDestroyObjectAddSavedAnimation (struct TdAddSavedAnimation *var);
void TdStackStorerAddSavedAnimation (struct TdAddSavedAnimation *var, struct TdStackStorerMethods *M);
struct TdAddSavedAnimation *TdStackFetcherAddSavedAnimation (struct TdStackFetcherMethods *M);
struct TdAddStickerToSet {
  int ID;
  int refcnt;
  int user_id_;
  char *name_;
  struct TdInputSticker *sticker_;
};
struct TdAddStickerToSet *TdCreateObjectAddStickerToSet (int user_id_, char *name_, struct TdInputSticker *sticker_);
char *TdSerializeAddStickerToSet (struct TdAddStickerToSet *var);
void TdDestroyObjectAddStickerToSet (struct TdAddStickerToSet *var);
void TdStackStorerAddStickerToSet (struct TdAddStickerToSet *var, struct TdStackStorerMethods *M);
struct TdAddStickerToSet *TdStackFetcherAddStickerToSet (struct TdStackFetcherMethods *M);
struct TdAnswerCallbackQuery {
  int ID;
  int refcnt;
  long long callback_query_id_;
  char *text_;
  int show_alert_;
  char *url_;
  int cache_time_;
};
struct TdAnswerCallbackQuery *TdCreateObjectAnswerCallbackQuery (long long callback_query_id_, char *text_, int show_alert_, char *url_, int cache_time_);
char *TdSerializeAnswerCallbackQuery (struct TdAnswerCallbackQuery *var);
void TdDestroyObjectAnswerCallbackQuery (struct TdAnswerCallbackQuery *var);
void TdStackStorerAnswerCallbackQuery (struct TdAnswerCallbackQuery *var, struct TdStackStorerMethods *M);
struct TdAnswerCallbackQuery *TdStackFetcherAnswerCallbackQuery (struct TdStackFetcherMethods *M);
struct TdAnswerCustomQuery {
  int ID;
  int refcnt;
  long long custom_query_id_;
  char *data_;
};
struct TdAnswerCustomQuery *TdCreateObjectAnswerCustomQuery (long long custom_query_id_, char *data_);
char *TdSerializeAnswerCustomQuery (struct TdAnswerCustomQuery *var);
void TdDestroyObjectAnswerCustomQuery (struct TdAnswerCustomQuery *var);
void TdStackStorerAnswerCustomQuery (struct TdAnswerCustomQuery *var, struct TdStackStorerMethods *M);
struct TdAnswerCustomQuery *TdStackFetcherAnswerCustomQuery (struct TdStackFetcherMethods *M);
struct TdAnswerInlineQuery {
  int ID;
  int refcnt;
  long long inline_query_id_;
  int is_personal_;
  struct TdVectorInputInlineQueryResult *results_;
  int cache_time_;
  char *next_offset_;
  char *switch_pm_text_;
  char *switch_pm_parameter_;
};
struct TdAnswerInlineQuery *TdCreateObjectAnswerInlineQuery (long long inline_query_id_, int is_personal_, struct TdVectorInputInlineQueryResult *results_, int cache_time_, char *next_offset_, char *switch_pm_text_, char *switch_pm_parameter_);
char *TdSerializeAnswerInlineQuery (struct TdAnswerInlineQuery *var);
void TdDestroyObjectAnswerInlineQuery (struct TdAnswerInlineQuery *var);
void TdStackStorerAnswerInlineQuery (struct TdAnswerInlineQuery *var, struct TdStackStorerMethods *M);
struct TdAnswerInlineQuery *TdStackFetcherAnswerInlineQuery (struct TdStackFetcherMethods *M);
struct TdAnswerPreCheckoutQuery {
  int ID;
  int refcnt;
  long long pre_checkout_query_id_;
  char *error_message_;
};
struct TdAnswerPreCheckoutQuery *TdCreateObjectAnswerPreCheckoutQuery (long long pre_checkout_query_id_, char *error_message_);
char *TdSerializeAnswerPreCheckoutQuery (struct TdAnswerPreCheckoutQuery *var);
void TdDestroyObjectAnswerPreCheckoutQuery (struct TdAnswerPreCheckoutQuery *var);
void TdStackStorerAnswerPreCheckoutQuery (struct TdAnswerPreCheckoutQuery *var, struct TdStackStorerMethods *M);
struct TdAnswerPreCheckoutQuery *TdStackFetcherAnswerPreCheckoutQuery (struct TdStackFetcherMethods *M);
struct TdAnswerShippingQuery {
  int ID;
  int refcnt;
  long long shipping_query_id_;
  struct TdVectorShippingOption *shipping_options_;
  char *error_message_;
};
struct TdAnswerShippingQuery *TdCreateObjectAnswerShippingQuery (long long shipping_query_id_, struct TdVectorShippingOption *shipping_options_, char *error_message_);
char *TdSerializeAnswerShippingQuery (struct TdAnswerShippingQuery *var);
void TdDestroyObjectAnswerShippingQuery (struct TdAnswerShippingQuery *var);
void TdStackStorerAnswerShippingQuery (struct TdAnswerShippingQuery *var, struct TdStackStorerMethods *M);
struct TdAnswerShippingQuery *TdStackFetcherAnswerShippingQuery (struct TdStackFetcherMethods *M);
struct TdBlockUser {
  int ID;
  int refcnt;
  int user_id_;
};
struct TdBlockUser *TdCreateObjectBlockUser (int user_id_);
char *TdSerializeBlockUser (struct TdBlockUser *var);
void TdDestroyObjectBlockUser (struct TdBlockUser *var);
void TdStackStorerBlockUser (struct TdBlockUser *var, struct TdStackStorerMethods *M);
struct TdBlockUser *TdStackFetcherBlockUser (struct TdStackFetcherMethods *M);
struct TdCancelDownloadFile {
  int ID;
  int refcnt;
  int file_id_;
  int only_if_pending_;
};
struct TdCancelDownloadFile *TdCreateObjectCancelDownloadFile (int file_id_, int only_if_pending_);
char *TdSerializeCancelDownloadFile (struct TdCancelDownloadFile *var);
void TdDestroyObjectCancelDownloadFile (struct TdCancelDownloadFile *var);
void TdStackStorerCancelDownloadFile (struct TdCancelDownloadFile *var, struct TdStackStorerMethods *M);
struct TdCancelDownloadFile *TdStackFetcherCancelDownloadFile (struct TdStackFetcherMethods *M);
struct TdCancelUploadFile {
  int ID;
  int refcnt;
  int file_id_;
};
struct TdCancelUploadFile *TdCreateObjectCancelUploadFile (int file_id_);
char *TdSerializeCancelUploadFile (struct TdCancelUploadFile *var);
void TdDestroyObjectCancelUploadFile (struct TdCancelUploadFile *var);
void TdStackStorerCancelUploadFile (struct TdCancelUploadFile *var, struct TdStackStorerMethods *M);
struct TdCancelUploadFile *TdStackFetcherCancelUploadFile (struct TdStackFetcherMethods *M);
struct TdChangeChatReportSpamState {
  int ID;
  int refcnt;
  long long chat_id_;
  int is_spam_chat_;
};
struct TdChangeChatReportSpamState *TdCreateObjectChangeChatReportSpamState (long long chat_id_, int is_spam_chat_);
char *TdSerializeChangeChatReportSpamState (struct TdChangeChatReportSpamState *var);
void TdDestroyObjectChangeChatReportSpamState (struct TdChangeChatReportSpamState *var);
void TdStackStorerChangeChatReportSpamState (struct TdChangeChatReportSpamState *var, struct TdStackStorerMethods *M);
struct TdChangeChatReportSpamState *TdStackFetcherChangeChatReportSpamState (struct TdStackFetcherMethods *M);
struct TdChangeImportedContacts {
  int ID;
  int refcnt;
  struct TdVectorContact *contacts_;
};
struct TdChangeImportedContacts *TdCreateObjectChangeImportedContacts (struct TdVectorContact *contacts_);
char *TdSerializeChangeImportedContacts (struct TdChangeImportedContacts *var);
void TdDestroyObjectChangeImportedContacts (struct TdChangeImportedContacts *var);
void TdStackStorerChangeImportedContacts (struct TdChangeImportedContacts *var, struct TdStackStorerMethods *M);
struct TdChangeImportedContacts *TdStackFetcherChangeImportedContacts (struct TdStackFetcherMethods *M);
struct TdChangePhoneNumber {
  int ID;
  int refcnt;
  char *phone_number_;
  int allow_flash_call_;
  int is_current_phone_number_;
};
struct TdChangePhoneNumber *TdCreateObjectChangePhoneNumber (char *phone_number_, int allow_flash_call_, int is_current_phone_number_);
char *TdSerializeChangePhoneNumber (struct TdChangePhoneNumber *var);
void TdDestroyObjectChangePhoneNumber (struct TdChangePhoneNumber *var);
void TdStackStorerChangePhoneNumber (struct TdChangePhoneNumber *var, struct TdStackStorerMethods *M);
struct TdChangePhoneNumber *TdStackFetcherChangePhoneNumber (struct TdStackFetcherMethods *M);
struct TdChangeStickerSet {
  int ID;
  int refcnt;
  long long set_id_;
  int is_installed_;
  int is_archived_;
};
struct TdChangeStickerSet *TdCreateObjectChangeStickerSet (long long set_id_, int is_installed_, int is_archived_);
char *TdSerializeChangeStickerSet (struct TdChangeStickerSet *var);
void TdDestroyObjectChangeStickerSet (struct TdChangeStickerSet *var);
void TdStackStorerChangeStickerSet (struct TdChangeStickerSet *var, struct TdStackStorerMethods *M);
struct TdChangeStickerSet *TdStackFetcherChangeStickerSet (struct TdStackFetcherMethods *M);
struct TdCheckAuthenticationBotToken {
  int ID;
  int refcnt;
  char *token_;
};
struct TdCheckAuthenticationBotToken *TdCreateObjectCheckAuthenticationBotToken (char *token_);
char *TdSerializeCheckAuthenticationBotToken (struct TdCheckAuthenticationBotToken *var);
void TdDestroyObjectCheckAuthenticationBotToken (struct TdCheckAuthenticationBotToken *var);
void TdStackStorerCheckAuthenticationBotToken (struct TdCheckAuthenticationBotToken *var, struct TdStackStorerMethods *M);
struct TdCheckAuthenticationBotToken *TdStackFetcherCheckAuthenticationBotToken (struct TdStackFetcherMethods *M);
struct TdCheckAuthenticationCode {
  int ID;
  int refcnt;
  char *code_;
  char *first_name_;
  char *last_name_;
};
struct TdCheckAuthenticationCode *TdCreateObjectCheckAuthenticationCode (char *code_, char *first_name_, char *last_name_);
char *TdSerializeCheckAuthenticationCode (struct TdCheckAuthenticationCode *var);
void TdDestroyObjectCheckAuthenticationCode (struct TdCheckAuthenticationCode *var);
void TdStackStorerCheckAuthenticationCode (struct TdCheckAuthenticationCode *var, struct TdStackStorerMethods *M);
struct TdCheckAuthenticationCode *TdStackFetcherCheckAuthenticationCode (struct TdStackFetcherMethods *M);
struct TdCheckAuthenticationPassword {
  int ID;
  int refcnt;
  char *password_;
};
struct TdCheckAuthenticationPassword *TdCreateObjectCheckAuthenticationPassword (char *password_);
char *TdSerializeCheckAuthenticationPassword (struct TdCheckAuthenticationPassword *var);
void TdDestroyObjectCheckAuthenticationPassword (struct TdCheckAuthenticationPassword *var);
void TdStackStorerCheckAuthenticationPassword (struct TdCheckAuthenticationPassword *var, struct TdStackStorerMethods *M);
struct TdCheckAuthenticationPassword *TdStackFetcherCheckAuthenticationPassword (struct TdStackFetcherMethods *M);
struct TdCheckChangePhoneNumberCode {
  int ID;
  int refcnt;
  char *code_;
};
struct TdCheckChangePhoneNumberCode *TdCreateObjectCheckChangePhoneNumberCode (char *code_);
char *TdSerializeCheckChangePhoneNumberCode (struct TdCheckChangePhoneNumberCode *var);
void TdDestroyObjectCheckChangePhoneNumberCode (struct TdCheckChangePhoneNumberCode *var);
void TdStackStorerCheckChangePhoneNumberCode (struct TdCheckChangePhoneNumberCode *var, struct TdStackStorerMethods *M);
struct TdCheckChangePhoneNumberCode *TdStackFetcherCheckChangePhoneNumberCode (struct TdStackFetcherMethods *M);
struct TdCheckChatInviteLink {
  int ID;
  int refcnt;
  char *invite_link_;
};
struct TdCheckChatInviteLink *TdCreateObjectCheckChatInviteLink (char *invite_link_);
char *TdSerializeCheckChatInviteLink (struct TdCheckChatInviteLink *var);
void TdDestroyObjectCheckChatInviteLink (struct TdCheckChatInviteLink *var);
void TdStackStorerCheckChatInviteLink (struct TdCheckChatInviteLink *var, struct TdStackStorerMethods *M);
struct TdCheckChatInviteLink *TdStackFetcherCheckChatInviteLink (struct TdStackFetcherMethods *M);
struct TdCheckChatUsername {
  int ID;
  int refcnt;
  long long chat_id_;
  char *username_;
};
struct TdCheckChatUsername *TdCreateObjectCheckChatUsername (long long chat_id_, char *username_);
char *TdSerializeCheckChatUsername (struct TdCheckChatUsername *var);
void TdDestroyObjectCheckChatUsername (struct TdCheckChatUsername *var);
void TdStackStorerCheckChatUsername (struct TdCheckChatUsername *var, struct TdStackStorerMethods *M);
struct TdCheckChatUsername *TdStackFetcherCheckChatUsername (struct TdStackFetcherMethods *M);
struct TdCheckDatabaseEncryptionKey {
  int ID;
  int refcnt;
  struct TdBytes encryption_key_;
};
struct TdCheckDatabaseEncryptionKey *TdCreateObjectCheckDatabaseEncryptionKey (struct TdBytes encryption_key_);
char *TdSerializeCheckDatabaseEncryptionKey (struct TdCheckDatabaseEncryptionKey *var);
void TdDestroyObjectCheckDatabaseEncryptionKey (struct TdCheckDatabaseEncryptionKey *var);
void TdStackStorerCheckDatabaseEncryptionKey (struct TdCheckDatabaseEncryptionKey *var, struct TdStackStorerMethods *M);
struct TdCheckDatabaseEncryptionKey *TdStackFetcherCheckDatabaseEncryptionKey (struct TdStackFetcherMethods *M);
struct TdCheckEmailAddressVerificationCode {
  int ID;
  int refcnt;
  char *code_;
};
struct TdCheckEmailAddressVerificationCode *TdCreateObjectCheckEmailAddressVerificationCode (char *code_);
char *TdSerializeCheckEmailAddressVerificationCode (struct TdCheckEmailAddressVerificationCode *var);
void TdDestroyObjectCheckEmailAddressVerificationCode (struct TdCheckEmailAddressVerificationCode *var);
void TdStackStorerCheckEmailAddressVerificationCode (struct TdCheckEmailAddressVerificationCode *var, struct TdStackStorerMethods *M);
struct TdCheckEmailAddressVerificationCode *TdStackFetcherCheckEmailAddressVerificationCode (struct TdStackFetcherMethods *M);
struct TdCheckPhoneNumberConfirmationCode {
  int ID;
  int refcnt;
  char *code_;
};
struct TdCheckPhoneNumberConfirmationCode *TdCreateObjectCheckPhoneNumberConfirmationCode (char *code_);
char *TdSerializeCheckPhoneNumberConfirmationCode (struct TdCheckPhoneNumberConfirmationCode *var);
void TdDestroyObjectCheckPhoneNumberConfirmationCode (struct TdCheckPhoneNumberConfirmationCode *var);
void TdStackStorerCheckPhoneNumberConfirmationCode (struct TdCheckPhoneNumberConfirmationCode *var, struct TdStackStorerMethods *M);
struct TdCheckPhoneNumberConfirmationCode *TdStackFetcherCheckPhoneNumberConfirmationCode (struct TdStackFetcherMethods *M);
struct TdCheckPhoneNumberVerificationCode {
  int ID;
  int refcnt;
  char *code_;
};
struct TdCheckPhoneNumberVerificationCode *TdCreateObjectCheckPhoneNumberVerificationCode (char *code_);
char *TdSerializeCheckPhoneNumberVerificationCode (struct TdCheckPhoneNumberVerificationCode *var);
void TdDestroyObjectCheckPhoneNumberVerificationCode (struct TdCheckPhoneNumberVerificationCode *var);
void TdStackStorerCheckPhoneNumberVerificationCode (struct TdCheckPhoneNumberVerificationCode *var, struct TdStackStorerMethods *M);
struct TdCheckPhoneNumberVerificationCode *TdStackFetcherCheckPhoneNumberVerificationCode (struct TdStackFetcherMethods *M);
struct TdCleanFileName {
  int ID;
  int refcnt;
  char *file_name_;
};
struct TdCleanFileName *TdCreateObjectCleanFileName (char *file_name_);
char *TdSerializeCleanFileName (struct TdCleanFileName *var);
void TdDestroyObjectCleanFileName (struct TdCleanFileName *var);
void TdStackStorerCleanFileName (struct TdCleanFileName *var, struct TdStackStorerMethods *M);
struct TdCleanFileName *TdStackFetcherCleanFileName (struct TdStackFetcherMethods *M);
struct TdClearAllDraftMessages {
  int ID;
  int refcnt;
  int exclude_secret_chats_;
};
struct TdClearAllDraftMessages *TdCreateObjectClearAllDraftMessages (int exclude_secret_chats_);
char *TdSerializeClearAllDraftMessages (struct TdClearAllDraftMessages *var);
void TdDestroyObjectClearAllDraftMessages (struct TdClearAllDraftMessages *var);
void TdStackStorerClearAllDraftMessages (struct TdClearAllDraftMessages *var, struct TdStackStorerMethods *M);
struct TdClearAllDraftMessages *TdStackFetcherClearAllDraftMessages (struct TdStackFetcherMethods *M);
struct TdClearImportedContacts {
  int ID;
  int refcnt;
};
struct TdClearImportedContacts *TdCreateObjectClearImportedContacts (void);
char *TdSerializeClearImportedContacts (struct TdClearImportedContacts *var);
void TdDestroyObjectClearImportedContacts (struct TdClearImportedContacts *var);
void TdStackStorerClearImportedContacts (struct TdClearImportedContacts *var, struct TdStackStorerMethods *M);
struct TdClearImportedContacts *TdStackFetcherClearImportedContacts (struct TdStackFetcherMethods *M);
struct TdClearRecentStickers {
  int ID;
  int refcnt;
  int is_attached_;
};
struct TdClearRecentStickers *TdCreateObjectClearRecentStickers (int is_attached_);
char *TdSerializeClearRecentStickers (struct TdClearRecentStickers *var);
void TdDestroyObjectClearRecentStickers (struct TdClearRecentStickers *var);
void TdStackStorerClearRecentStickers (struct TdClearRecentStickers *var, struct TdStackStorerMethods *M);
struct TdClearRecentStickers *TdStackFetcherClearRecentStickers (struct TdStackFetcherMethods *M);
struct TdClearRecentlyFoundChats {
  int ID;
  int refcnt;
};
struct TdClearRecentlyFoundChats *TdCreateObjectClearRecentlyFoundChats (void);
char *TdSerializeClearRecentlyFoundChats (struct TdClearRecentlyFoundChats *var);
void TdDestroyObjectClearRecentlyFoundChats (struct TdClearRecentlyFoundChats *var);
void TdStackStorerClearRecentlyFoundChats (struct TdClearRecentlyFoundChats *var, struct TdStackStorerMethods *M);
struct TdClearRecentlyFoundChats *TdStackFetcherClearRecentlyFoundChats (struct TdStackFetcherMethods *M);
struct TdClose {
  int ID;
  int refcnt;
};
struct TdClose *TdCreateObjectClose (void);
char *TdSerializeClose (struct TdClose *var);
void TdDestroyObjectClose (struct TdClose *var);
void TdStackStorerClose (struct TdClose *var, struct TdStackStorerMethods *M);
struct TdClose *TdStackFetcherClose (struct TdStackFetcherMethods *M);
struct TdCloseChat {
  int ID;
  int refcnt;
  long long chat_id_;
};
struct TdCloseChat *TdCreateObjectCloseChat (long long chat_id_);
char *TdSerializeCloseChat (struct TdCloseChat *var);
void TdDestroyObjectCloseChat (struct TdCloseChat *var);
void TdStackStorerCloseChat (struct TdCloseChat *var, struct TdStackStorerMethods *M);
struct TdCloseChat *TdStackFetcherCloseChat (struct TdStackFetcherMethods *M);
struct TdCloseSecretChat {
  int ID;
  int refcnt;
  int secret_chat_id_;
};
struct TdCloseSecretChat *TdCreateObjectCloseSecretChat (int secret_chat_id_);
char *TdSerializeCloseSecretChat (struct TdCloseSecretChat *var);
void TdDestroyObjectCloseSecretChat (struct TdCloseSecretChat *var);
void TdStackStorerCloseSecretChat (struct TdCloseSecretChat *var, struct TdStackStorerMethods *M);
struct TdCloseSecretChat *TdStackFetcherCloseSecretChat (struct TdStackFetcherMethods *M);
struct TdCreateBasicGroupChat {
  int ID;
  int refcnt;
  int basic_group_id_;
  int force_;
};
struct TdCreateBasicGroupChat *TdCreateObjectCreateBasicGroupChat (int basic_group_id_, int force_);
char *TdSerializeCreateBasicGroupChat (struct TdCreateBasicGroupChat *var);
void TdDestroyObjectCreateBasicGroupChat (struct TdCreateBasicGroupChat *var);
void TdStackStorerCreateBasicGroupChat (struct TdCreateBasicGroupChat *var, struct TdStackStorerMethods *M);
struct TdCreateBasicGroupChat *TdStackFetcherCreateBasicGroupChat (struct TdStackFetcherMethods *M);
struct TdCreateCall {
  int ID;
  int refcnt;
  int user_id_;
  struct TdCallProtocol *protocol_;
};
struct TdCreateCall *TdCreateObjectCreateCall (int user_id_, struct TdCallProtocol *protocol_);
char *TdSerializeCreateCall (struct TdCreateCall *var);
void TdDestroyObjectCreateCall (struct TdCreateCall *var);
void TdStackStorerCreateCall (struct TdCreateCall *var, struct TdStackStorerMethods *M);
struct TdCreateCall *TdStackFetcherCreateCall (struct TdStackFetcherMethods *M);
struct TdCreateNewBasicGroupChat {
  int ID;
  int refcnt;
  struct TdVectorInt *user_ids_;
  char *title_;
};
struct TdCreateNewBasicGroupChat *TdCreateObjectCreateNewBasicGroupChat (struct TdVectorInt *user_ids_, char *title_);
char *TdSerializeCreateNewBasicGroupChat (struct TdCreateNewBasicGroupChat *var);
void TdDestroyObjectCreateNewBasicGroupChat (struct TdCreateNewBasicGroupChat *var);
void TdStackStorerCreateNewBasicGroupChat (struct TdCreateNewBasicGroupChat *var, struct TdStackStorerMethods *M);
struct TdCreateNewBasicGroupChat *TdStackFetcherCreateNewBasicGroupChat (struct TdStackFetcherMethods *M);
struct TdCreateNewSecretChat {
  int ID;
  int refcnt;
  int user_id_;
};
struct TdCreateNewSecretChat *TdCreateObjectCreateNewSecretChat (int user_id_);
char *TdSerializeCreateNewSecretChat (struct TdCreateNewSecretChat *var);
void TdDestroyObjectCreateNewSecretChat (struct TdCreateNewSecretChat *var);
void TdStackStorerCreateNewSecretChat (struct TdCreateNewSecretChat *var, struct TdStackStorerMethods *M);
struct TdCreateNewSecretChat *TdStackFetcherCreateNewSecretChat (struct TdStackFetcherMethods *M);
struct TdCreateNewStickerSet {
  int ID;
  int refcnt;
  int user_id_;
  char *title_;
  char *name_;
  int is_masks_;
  struct TdVectorInputSticker *stickers_;
};
struct TdCreateNewStickerSet *TdCreateObjectCreateNewStickerSet (int user_id_, char *title_, char *name_, int is_masks_, struct TdVectorInputSticker *stickers_);
char *TdSerializeCreateNewStickerSet (struct TdCreateNewStickerSet *var);
void TdDestroyObjectCreateNewStickerSet (struct TdCreateNewStickerSet *var);
void TdStackStorerCreateNewStickerSet (struct TdCreateNewStickerSet *var, struct TdStackStorerMethods *M);
struct TdCreateNewStickerSet *TdStackFetcherCreateNewStickerSet (struct TdStackFetcherMethods *M);
struct TdCreateNewSupergroupChat {
  int ID;
  int refcnt;
  char *title_;
  int is_channel_;
  char *description_;
};
struct TdCreateNewSupergroupChat *TdCreateObjectCreateNewSupergroupChat (char *title_, int is_channel_, char *description_);
char *TdSerializeCreateNewSupergroupChat (struct TdCreateNewSupergroupChat *var);
void TdDestroyObjectCreateNewSupergroupChat (struct TdCreateNewSupergroupChat *var);
void TdStackStorerCreateNewSupergroupChat (struct TdCreateNewSupergroupChat *var, struct TdStackStorerMethods *M);
struct TdCreateNewSupergroupChat *TdStackFetcherCreateNewSupergroupChat (struct TdStackFetcherMethods *M);
struct TdCreatePrivateChat {
  int ID;
  int refcnt;
  int user_id_;
  int force_;
};
struct TdCreatePrivateChat *TdCreateObjectCreatePrivateChat (int user_id_, int force_);
char *TdSerializeCreatePrivateChat (struct TdCreatePrivateChat *var);
void TdDestroyObjectCreatePrivateChat (struct TdCreatePrivateChat *var);
void TdStackStorerCreatePrivateChat (struct TdCreatePrivateChat *var, struct TdStackStorerMethods *M);
struct TdCreatePrivateChat *TdStackFetcherCreatePrivateChat (struct TdStackFetcherMethods *M);
struct TdCreateSecretChat {
  int ID;
  int refcnt;
  int secret_chat_id_;
};
struct TdCreateSecretChat *TdCreateObjectCreateSecretChat (int secret_chat_id_);
char *TdSerializeCreateSecretChat (struct TdCreateSecretChat *var);
void TdDestroyObjectCreateSecretChat (struct TdCreateSecretChat *var);
void TdStackStorerCreateSecretChat (struct TdCreateSecretChat *var, struct TdStackStorerMethods *M);
struct TdCreateSecretChat *TdStackFetcherCreateSecretChat (struct TdStackFetcherMethods *M);
struct TdCreateSupergroupChat {
  int ID;
  int refcnt;
  int supergroup_id_;
  int force_;
};
struct TdCreateSupergroupChat *TdCreateObjectCreateSupergroupChat (int supergroup_id_, int force_);
char *TdSerializeCreateSupergroupChat (struct TdCreateSupergroupChat *var);
void TdDestroyObjectCreateSupergroupChat (struct TdCreateSupergroupChat *var);
void TdStackStorerCreateSupergroupChat (struct TdCreateSupergroupChat *var, struct TdStackStorerMethods *M);
struct TdCreateSupergroupChat *TdStackFetcherCreateSupergroupChat (struct TdStackFetcherMethods *M);
struct TdCreateTemporaryPassword {
  int ID;
  int refcnt;
  char *password_;
  int valid_for_;
};
struct TdCreateTemporaryPassword *TdCreateObjectCreateTemporaryPassword (char *password_, int valid_for_);
char *TdSerializeCreateTemporaryPassword (struct TdCreateTemporaryPassword *var);
void TdDestroyObjectCreateTemporaryPassword (struct TdCreateTemporaryPassword *var);
void TdStackStorerCreateTemporaryPassword (struct TdCreateTemporaryPassword *var, struct TdStackStorerMethods *M);
struct TdCreateTemporaryPassword *TdStackFetcherCreateTemporaryPassword (struct TdStackFetcherMethods *M);
struct TdDeleteAccount {
  int ID;
  int refcnt;
  char *reason_;
};
struct TdDeleteAccount *TdCreateObjectDeleteAccount (char *reason_);
char *TdSerializeDeleteAccount (struct TdDeleteAccount *var);
void TdDestroyObjectDeleteAccount (struct TdDeleteAccount *var);
void TdStackStorerDeleteAccount (struct TdDeleteAccount *var, struct TdStackStorerMethods *M);
struct TdDeleteAccount *TdStackFetcherDeleteAccount (struct TdStackFetcherMethods *M);
struct TdDeleteChatHistory {
  int ID;
  int refcnt;
  long long chat_id_;
  int remove_from_chat_list_;
};
struct TdDeleteChatHistory *TdCreateObjectDeleteChatHistory (long long chat_id_, int remove_from_chat_list_);
char *TdSerializeDeleteChatHistory (struct TdDeleteChatHistory *var);
void TdDestroyObjectDeleteChatHistory (struct TdDeleteChatHistory *var);
void TdStackStorerDeleteChatHistory (struct TdDeleteChatHistory *var, struct TdStackStorerMethods *M);
struct TdDeleteChatHistory *TdStackFetcherDeleteChatHistory (struct TdStackFetcherMethods *M);
struct TdDeleteChatMessagesFromUser {
  int ID;
  int refcnt;
  long long chat_id_;
  int user_id_;
};
struct TdDeleteChatMessagesFromUser *TdCreateObjectDeleteChatMessagesFromUser (long long chat_id_, int user_id_);
char *TdSerializeDeleteChatMessagesFromUser (struct TdDeleteChatMessagesFromUser *var);
void TdDestroyObjectDeleteChatMessagesFromUser (struct TdDeleteChatMessagesFromUser *var);
void TdStackStorerDeleteChatMessagesFromUser (struct TdDeleteChatMessagesFromUser *var, struct TdStackStorerMethods *M);
struct TdDeleteChatMessagesFromUser *TdStackFetcherDeleteChatMessagesFromUser (struct TdStackFetcherMethods *M);
struct TdDeleteChatReplyMarkup {
  int ID;
  int refcnt;
  long long chat_id_;
  long long message_id_;
};
struct TdDeleteChatReplyMarkup *TdCreateObjectDeleteChatReplyMarkup (long long chat_id_, long long message_id_);
char *TdSerializeDeleteChatReplyMarkup (struct TdDeleteChatReplyMarkup *var);
void TdDestroyObjectDeleteChatReplyMarkup (struct TdDeleteChatReplyMarkup *var);
void TdStackStorerDeleteChatReplyMarkup (struct TdDeleteChatReplyMarkup *var, struct TdStackStorerMethods *M);
struct TdDeleteChatReplyMarkup *TdStackFetcherDeleteChatReplyMarkup (struct TdStackFetcherMethods *M);
struct TdDeleteFile {
  int ID;
  int refcnt;
  int file_id_;
};
struct TdDeleteFile *TdCreateObjectDeleteFile (int file_id_);
char *TdSerializeDeleteFile (struct TdDeleteFile *var);
void TdDestroyObjectDeleteFile (struct TdDeleteFile *var);
void TdStackStorerDeleteFile (struct TdDeleteFile *var, struct TdStackStorerMethods *M);
struct TdDeleteFile *TdStackFetcherDeleteFile (struct TdStackFetcherMethods *M);
struct TdDeleteLanguagePack {
  int ID;
  int refcnt;
  char *language_pack_id_;
};
struct TdDeleteLanguagePack *TdCreateObjectDeleteLanguagePack (char *language_pack_id_);
char *TdSerializeDeleteLanguagePack (struct TdDeleteLanguagePack *var);
void TdDestroyObjectDeleteLanguagePack (struct TdDeleteLanguagePack *var);
void TdStackStorerDeleteLanguagePack (struct TdDeleteLanguagePack *var, struct TdStackStorerMethods *M);
struct TdDeleteLanguagePack *TdStackFetcherDeleteLanguagePack (struct TdStackFetcherMethods *M);
struct TdDeleteMessages {
  int ID;
  int refcnt;
  long long chat_id_;
  struct TdVectorLong *message_ids_;
  int revoke_;
};
struct TdDeleteMessages *TdCreateObjectDeleteMessages (long long chat_id_, struct TdVectorLong *message_ids_, int revoke_);
char *TdSerializeDeleteMessages (struct TdDeleteMessages *var);
void TdDestroyObjectDeleteMessages (struct TdDeleteMessages *var);
void TdStackStorerDeleteMessages (struct TdDeleteMessages *var, struct TdStackStorerMethods *M);
struct TdDeleteMessages *TdStackFetcherDeleteMessages (struct TdStackFetcherMethods *M);
struct TdDeletePassportElement {
  int ID;
  int refcnt;
  struct TdPassportElementType *type_;
};
struct TdDeletePassportElement *TdCreateObjectDeletePassportElement (struct TdPassportElementType *type_);
char *TdSerializeDeletePassportElement (struct TdDeletePassportElement *var);
void TdDestroyObjectDeletePassportElement (struct TdDeletePassportElement *var);
void TdStackStorerDeletePassportElement (struct TdDeletePassportElement *var, struct TdStackStorerMethods *M);
struct TdDeletePassportElement *TdStackFetcherDeletePassportElement (struct TdStackFetcherMethods *M);
struct TdDeleteProfilePhoto {
  int ID;
  int refcnt;
  long long profile_photo_id_;
};
struct TdDeleteProfilePhoto *TdCreateObjectDeleteProfilePhoto (long long profile_photo_id_);
char *TdSerializeDeleteProfilePhoto (struct TdDeleteProfilePhoto *var);
void TdDestroyObjectDeleteProfilePhoto (struct TdDeleteProfilePhoto *var);
void TdStackStorerDeleteProfilePhoto (struct TdDeleteProfilePhoto *var, struct TdStackStorerMethods *M);
struct TdDeleteProfilePhoto *TdStackFetcherDeleteProfilePhoto (struct TdStackFetcherMethods *M);
struct TdDeleteSavedCredentials {
  int ID;
  int refcnt;
};
struct TdDeleteSavedCredentials *TdCreateObjectDeleteSavedCredentials (void);
char *TdSerializeDeleteSavedCredentials (struct TdDeleteSavedCredentials *var);
void TdDestroyObjectDeleteSavedCredentials (struct TdDeleteSavedCredentials *var);
void TdStackStorerDeleteSavedCredentials (struct TdDeleteSavedCredentials *var, struct TdStackStorerMethods *M);
struct TdDeleteSavedCredentials *TdStackFetcherDeleteSavedCredentials (struct TdStackFetcherMethods *M);
struct TdDeleteSavedOrderInfo {
  int ID;
  int refcnt;
};
struct TdDeleteSavedOrderInfo *TdCreateObjectDeleteSavedOrderInfo (void);
char *TdSerializeDeleteSavedOrderInfo (struct TdDeleteSavedOrderInfo *var);
void TdDestroyObjectDeleteSavedOrderInfo (struct TdDeleteSavedOrderInfo *var);
void TdStackStorerDeleteSavedOrderInfo (struct TdDeleteSavedOrderInfo *var, struct TdStackStorerMethods *M);
struct TdDeleteSavedOrderInfo *TdStackFetcherDeleteSavedOrderInfo (struct TdStackFetcherMethods *M);
struct TdDeleteSupergroup {
  int ID;
  int refcnt;
  int supergroup_id_;
};
struct TdDeleteSupergroup *TdCreateObjectDeleteSupergroup (int supergroup_id_);
char *TdSerializeDeleteSupergroup (struct TdDeleteSupergroup *var);
void TdDestroyObjectDeleteSupergroup (struct TdDeleteSupergroup *var);
void TdStackStorerDeleteSupergroup (struct TdDeleteSupergroup *var, struct TdStackStorerMethods *M);
struct TdDeleteSupergroup *TdStackFetcherDeleteSupergroup (struct TdStackFetcherMethods *M);
struct TdDestroy {
  int ID;
  int refcnt;
};
struct TdDestroy *TdCreateObjectDestroy (void);
char *TdSerializeDestroy (struct TdDestroy *var);
void TdDestroyObjectDestroy (struct TdDestroy *var);
void TdStackStorerDestroy (struct TdDestroy *var, struct TdStackStorerMethods *M);
struct TdDestroy *TdStackFetcherDestroy (struct TdStackFetcherMethods *M);
struct TdDisableProxy {
  int ID;
  int refcnt;
};
struct TdDisableProxy *TdCreateObjectDisableProxy (void);
char *TdSerializeDisableProxy (struct TdDisableProxy *var);
void TdDestroyObjectDisableProxy (struct TdDisableProxy *var);
void TdStackStorerDisableProxy (struct TdDisableProxy *var, struct TdStackStorerMethods *M);
struct TdDisableProxy *TdStackFetcherDisableProxy (struct TdStackFetcherMethods *M);
struct TdDiscardCall {
  int ID;
  int refcnt;
  int call_id_;
  int is_disconnected_;
  int duration_;
  long long connection_id_;
};
struct TdDiscardCall *TdCreateObjectDiscardCall (int call_id_, int is_disconnected_, int duration_, long long connection_id_);
char *TdSerializeDiscardCall (struct TdDiscardCall *var);
void TdDestroyObjectDiscardCall (struct TdDiscardCall *var);
void TdStackStorerDiscardCall (struct TdDiscardCall *var, struct TdStackStorerMethods *M);
struct TdDiscardCall *TdStackFetcherDiscardCall (struct TdStackFetcherMethods *M);
struct TdDisconnectAllWebsites {
  int ID;
  int refcnt;
};
struct TdDisconnectAllWebsites *TdCreateObjectDisconnectAllWebsites (void);
char *TdSerializeDisconnectAllWebsites (struct TdDisconnectAllWebsites *var);
void TdDestroyObjectDisconnectAllWebsites (struct TdDisconnectAllWebsites *var);
void TdStackStorerDisconnectAllWebsites (struct TdDisconnectAllWebsites *var, struct TdStackStorerMethods *M);
struct TdDisconnectAllWebsites *TdStackFetcherDisconnectAllWebsites (struct TdStackFetcherMethods *M);
struct TdDisconnectWebsite {
  int ID;
  int refcnt;
  long long website_id_;
};
struct TdDisconnectWebsite *TdCreateObjectDisconnectWebsite (long long website_id_);
char *TdSerializeDisconnectWebsite (struct TdDisconnectWebsite *var);
void TdDestroyObjectDisconnectWebsite (struct TdDisconnectWebsite *var);
void TdStackStorerDisconnectWebsite (struct TdDisconnectWebsite *var, struct TdStackStorerMethods *M);
struct TdDisconnectWebsite *TdStackFetcherDisconnectWebsite (struct TdStackFetcherMethods *M);
struct TdDownloadFile {
  int ID;
  int refcnt;
  int file_id_;
  int priority_;
};
struct TdDownloadFile *TdCreateObjectDownloadFile (int file_id_, int priority_);
char *TdSerializeDownloadFile (struct TdDownloadFile *var);
void TdDestroyObjectDownloadFile (struct TdDownloadFile *var);
void TdStackStorerDownloadFile (struct TdDownloadFile *var, struct TdStackStorerMethods *M);
struct TdDownloadFile *TdStackFetcherDownloadFile (struct TdStackFetcherMethods *M);
struct TdEditCustomLanguagePackInfo {
  int ID;
  int refcnt;
  struct TdLanguagePackInfo *info_;
};
struct TdEditCustomLanguagePackInfo *TdCreateObjectEditCustomLanguagePackInfo (struct TdLanguagePackInfo *info_);
char *TdSerializeEditCustomLanguagePackInfo (struct TdEditCustomLanguagePackInfo *var);
void TdDestroyObjectEditCustomLanguagePackInfo (struct TdEditCustomLanguagePackInfo *var);
void TdStackStorerEditCustomLanguagePackInfo (struct TdEditCustomLanguagePackInfo *var, struct TdStackStorerMethods *M);
struct TdEditCustomLanguagePackInfo *TdStackFetcherEditCustomLanguagePackInfo (struct TdStackFetcherMethods *M);
struct TdEditInlineMessageCaption {
  int ID;
  int refcnt;
  char *inline_message_id_;
  struct TdReplyMarkup *reply_markup_;
  struct TdFormattedText *caption_;
};
struct TdEditInlineMessageCaption *TdCreateObjectEditInlineMessageCaption (char *inline_message_id_, struct TdReplyMarkup *reply_markup_, struct TdFormattedText *caption_);
char *TdSerializeEditInlineMessageCaption (struct TdEditInlineMessageCaption *var);
void TdDestroyObjectEditInlineMessageCaption (struct TdEditInlineMessageCaption *var);
void TdStackStorerEditInlineMessageCaption (struct TdEditInlineMessageCaption *var, struct TdStackStorerMethods *M);
struct TdEditInlineMessageCaption *TdStackFetcherEditInlineMessageCaption (struct TdStackFetcherMethods *M);
struct TdEditInlineMessageLiveLocation {
  int ID;
  int refcnt;
  char *inline_message_id_;
  struct TdReplyMarkup *reply_markup_;
  struct TdLocation *location_;
};
struct TdEditInlineMessageLiveLocation *TdCreateObjectEditInlineMessageLiveLocation (char *inline_message_id_, struct TdReplyMarkup *reply_markup_, struct TdLocation *location_);
char *TdSerializeEditInlineMessageLiveLocation (struct TdEditInlineMessageLiveLocation *var);
void TdDestroyObjectEditInlineMessageLiveLocation (struct TdEditInlineMessageLiveLocation *var);
void TdStackStorerEditInlineMessageLiveLocation (struct TdEditInlineMessageLiveLocation *var, struct TdStackStorerMethods *M);
struct TdEditInlineMessageLiveLocation *TdStackFetcherEditInlineMessageLiveLocation (struct TdStackFetcherMethods *M);
struct TdEditInlineMessageMedia {
  int ID;
  int refcnt;
  char *inline_message_id_;
  struct TdReplyMarkup *reply_markup_;
  struct TdInputMessageContent *input_message_content_;
};
struct TdEditInlineMessageMedia *TdCreateObjectEditInlineMessageMedia (char *inline_message_id_, struct TdReplyMarkup *reply_markup_, struct TdInputMessageContent *input_message_content_);
char *TdSerializeEditInlineMessageMedia (struct TdEditInlineMessageMedia *var);
void TdDestroyObjectEditInlineMessageMedia (struct TdEditInlineMessageMedia *var);
void TdStackStorerEditInlineMessageMedia (struct TdEditInlineMessageMedia *var, struct TdStackStorerMethods *M);
struct TdEditInlineMessageMedia *TdStackFetcherEditInlineMessageMedia (struct TdStackFetcherMethods *M);
struct TdEditInlineMessageReplyMarkup {
  int ID;
  int refcnt;
  char *inline_message_id_;
  struct TdReplyMarkup *reply_markup_;
};
struct TdEditInlineMessageReplyMarkup *TdCreateObjectEditInlineMessageReplyMarkup (char *inline_message_id_, struct TdReplyMarkup *reply_markup_);
char *TdSerializeEditInlineMessageReplyMarkup (struct TdEditInlineMessageReplyMarkup *var);
void TdDestroyObjectEditInlineMessageReplyMarkup (struct TdEditInlineMessageReplyMarkup *var);
void TdStackStorerEditInlineMessageReplyMarkup (struct TdEditInlineMessageReplyMarkup *var, struct TdStackStorerMethods *M);
struct TdEditInlineMessageReplyMarkup *TdStackFetcherEditInlineMessageReplyMarkup (struct TdStackFetcherMethods *M);
struct TdEditInlineMessageText {
  int ID;
  int refcnt;
  char *inline_message_id_;
  struct TdReplyMarkup *reply_markup_;
  struct TdInputMessageContent *input_message_content_;
};
struct TdEditInlineMessageText *TdCreateObjectEditInlineMessageText (char *inline_message_id_, struct TdReplyMarkup *reply_markup_, struct TdInputMessageContent *input_message_content_);
char *TdSerializeEditInlineMessageText (struct TdEditInlineMessageText *var);
void TdDestroyObjectEditInlineMessageText (struct TdEditInlineMessageText *var);
void TdStackStorerEditInlineMessageText (struct TdEditInlineMessageText *var, struct TdStackStorerMethods *M);
struct TdEditInlineMessageText *TdStackFetcherEditInlineMessageText (struct TdStackFetcherMethods *M);
struct TdEditMessageCaption {
  int ID;
  int refcnt;
  long long chat_id_;
  long long message_id_;
  struct TdReplyMarkup *reply_markup_;
  struct TdFormattedText *caption_;
};
struct TdEditMessageCaption *TdCreateObjectEditMessageCaption (long long chat_id_, long long message_id_, struct TdReplyMarkup *reply_markup_, struct TdFormattedText *caption_);
char *TdSerializeEditMessageCaption (struct TdEditMessageCaption *var);
void TdDestroyObjectEditMessageCaption (struct TdEditMessageCaption *var);
void TdStackStorerEditMessageCaption (struct TdEditMessageCaption *var, struct TdStackStorerMethods *M);
struct TdEditMessageCaption *TdStackFetcherEditMessageCaption (struct TdStackFetcherMethods *M);
struct TdEditMessageLiveLocation {
  int ID;
  int refcnt;
  long long chat_id_;
  long long message_id_;
  struct TdReplyMarkup *reply_markup_;
  struct TdLocation *location_;
};
struct TdEditMessageLiveLocation *TdCreateObjectEditMessageLiveLocation (long long chat_id_, long long message_id_, struct TdReplyMarkup *reply_markup_, struct TdLocation *location_);
char *TdSerializeEditMessageLiveLocation (struct TdEditMessageLiveLocation *var);
void TdDestroyObjectEditMessageLiveLocation (struct TdEditMessageLiveLocation *var);
void TdStackStorerEditMessageLiveLocation (struct TdEditMessageLiveLocation *var, struct TdStackStorerMethods *M);
struct TdEditMessageLiveLocation *TdStackFetcherEditMessageLiveLocation (struct TdStackFetcherMethods *M);
struct TdEditMessageMedia {
  int ID;
  int refcnt;
  long long chat_id_;
  long long message_id_;
  struct TdReplyMarkup *reply_markup_;
  struct TdInputMessageContent *input_message_content_;
};
struct TdEditMessageMedia *TdCreateObjectEditMessageMedia (long long chat_id_, long long message_id_, struct TdReplyMarkup *reply_markup_, struct TdInputMessageContent *input_message_content_);
char *TdSerializeEditMessageMedia (struct TdEditMessageMedia *var);
void TdDestroyObjectEditMessageMedia (struct TdEditMessageMedia *var);
void TdStackStorerEditMessageMedia (struct TdEditMessageMedia *var, struct TdStackStorerMethods *M);
struct TdEditMessageMedia *TdStackFetcherEditMessageMedia (struct TdStackFetcherMethods *M);
struct TdEditMessageReplyMarkup {
  int ID;
  int refcnt;
  long long chat_id_;
  long long message_id_;
  struct TdReplyMarkup *reply_markup_;
};
struct TdEditMessageReplyMarkup *TdCreateObjectEditMessageReplyMarkup (long long chat_id_, long long message_id_, struct TdReplyMarkup *reply_markup_);
char *TdSerializeEditMessageReplyMarkup (struct TdEditMessageReplyMarkup *var);
void TdDestroyObjectEditMessageReplyMarkup (struct TdEditMessageReplyMarkup *var);
void TdStackStorerEditMessageReplyMarkup (struct TdEditMessageReplyMarkup *var, struct TdStackStorerMethods *M);
struct TdEditMessageReplyMarkup *TdStackFetcherEditMessageReplyMarkup (struct TdStackFetcherMethods *M);
struct TdEditMessageText {
  int ID;
  int refcnt;
  long long chat_id_;
  long long message_id_;
  struct TdReplyMarkup *reply_markup_;
  struct TdInputMessageContent *input_message_content_;
};
struct TdEditMessageText *TdCreateObjectEditMessageText (long long chat_id_, long long message_id_, struct TdReplyMarkup *reply_markup_, struct TdInputMessageContent *input_message_content_);
char *TdSerializeEditMessageText (struct TdEditMessageText *var);
void TdDestroyObjectEditMessageText (struct TdEditMessageText *var);
void TdStackStorerEditMessageText (struct TdEditMessageText *var, struct TdStackStorerMethods *M);
struct TdEditMessageText *TdStackFetcherEditMessageText (struct TdStackFetcherMethods *M);
struct TdEditProxy {
  int ID;
  int refcnt;
  int proxy_id_;
  char *server_;
  int port_;
  int enable_;
  struct TdProxyType *type_;
};
struct TdEditProxy *TdCreateObjectEditProxy (int proxy_id_, char *server_, int port_, int enable_, struct TdProxyType *type_);
char *TdSerializeEditProxy (struct TdEditProxy *var);
void TdDestroyObjectEditProxy (struct TdEditProxy *var);
void TdStackStorerEditProxy (struct TdEditProxy *var, struct TdStackStorerMethods *M);
struct TdEditProxy *TdStackFetcherEditProxy (struct TdStackFetcherMethods *M);
struct TdEnableProxy {
  int ID;
  int refcnt;
  int proxy_id_;
};
struct TdEnableProxy *TdCreateObjectEnableProxy (int proxy_id_);
char *TdSerializeEnableProxy (struct TdEnableProxy *var);
void TdDestroyObjectEnableProxy (struct TdEnableProxy *var);
void TdStackStorerEnableProxy (struct TdEnableProxy *var, struct TdStackStorerMethods *M);
struct TdEnableProxy *TdStackFetcherEnableProxy (struct TdStackFetcherMethods *M);
struct TdFinishFileGeneration {
  int ID;
  int refcnt;
  long long generation_id_;
  struct TdError *error_;
};
struct TdFinishFileGeneration *TdCreateObjectFinishFileGeneration (long long generation_id_, struct TdError *error_);
char *TdSerializeFinishFileGeneration (struct TdFinishFileGeneration *var);
void TdDestroyObjectFinishFileGeneration (struct TdFinishFileGeneration *var);
void TdStackStorerFinishFileGeneration (struct TdFinishFileGeneration *var, struct TdStackStorerMethods *M);
struct TdFinishFileGeneration *TdStackFetcherFinishFileGeneration (struct TdStackFetcherMethods *M);
struct TdForwardMessages {
  int ID;
  int refcnt;
  long long chat_id_;
  long long from_chat_id_;
  struct TdVectorLong *message_ids_;
  int disable_notification_;
  int from_background_;
  int as_album_;
};
struct TdForwardMessages *TdCreateObjectForwardMessages (long long chat_id_, long long from_chat_id_, struct TdVectorLong *message_ids_, int disable_notification_, int from_background_, int as_album_);
char *TdSerializeForwardMessages (struct TdForwardMessages *var);
void TdDestroyObjectForwardMessages (struct TdForwardMessages *var);
void TdStackStorerForwardMessages (struct TdForwardMessages *var, struct TdStackStorerMethods *M);
struct TdForwardMessages *TdStackFetcherForwardMessages (struct TdStackFetcherMethods *M);
struct TdGenerateChatInviteLink {
  int ID;
  int refcnt;
  long long chat_id_;
};
struct TdGenerateChatInviteLink *TdCreateObjectGenerateChatInviteLink (long long chat_id_);
char *TdSerializeGenerateChatInviteLink (struct TdGenerateChatInviteLink *var);
void TdDestroyObjectGenerateChatInviteLink (struct TdGenerateChatInviteLink *var);
void TdStackStorerGenerateChatInviteLink (struct TdGenerateChatInviteLink *var, struct TdStackStorerMethods *M);
struct TdGenerateChatInviteLink *TdStackFetcherGenerateChatInviteLink (struct TdStackFetcherMethods *M);
struct TdGetAccountTtl {
  int ID;
  int refcnt;
};
struct TdGetAccountTtl *TdCreateObjectGetAccountTtl (void);
char *TdSerializeGetAccountTtl (struct TdGetAccountTtl *var);
void TdDestroyObjectGetAccountTtl (struct TdGetAccountTtl *var);
void TdStackStorerGetAccountTtl (struct TdGetAccountTtl *var, struct TdStackStorerMethods *M);
struct TdGetAccountTtl *TdStackFetcherGetAccountTtl (struct TdStackFetcherMethods *M);
struct TdGetActiveLiveLocationMessages {
  int ID;
  int refcnt;
};
struct TdGetActiveLiveLocationMessages *TdCreateObjectGetActiveLiveLocationMessages (void);
char *TdSerializeGetActiveLiveLocationMessages (struct TdGetActiveLiveLocationMessages *var);
void TdDestroyObjectGetActiveLiveLocationMessages (struct TdGetActiveLiveLocationMessages *var);
void TdStackStorerGetActiveLiveLocationMessages (struct TdGetActiveLiveLocationMessages *var, struct TdStackStorerMethods *M);
struct TdGetActiveLiveLocationMessages *TdStackFetcherGetActiveLiveLocationMessages (struct TdStackFetcherMethods *M);
struct TdGetActiveSessions {
  int ID;
  int refcnt;
};
struct TdGetActiveSessions *TdCreateObjectGetActiveSessions (void);
char *TdSerializeGetActiveSessions (struct TdGetActiveSessions *var);
void TdDestroyObjectGetActiveSessions (struct TdGetActiveSessions *var);
void TdStackStorerGetActiveSessions (struct TdGetActiveSessions *var, struct TdStackStorerMethods *M);
struct TdGetActiveSessions *TdStackFetcherGetActiveSessions (struct TdStackFetcherMethods *M);
struct TdGetAllPassportElements {
  int ID;
  int refcnt;
  char *password_;
};
struct TdGetAllPassportElements *TdCreateObjectGetAllPassportElements (char *password_);
char *TdSerializeGetAllPassportElements (struct TdGetAllPassportElements *var);
void TdDestroyObjectGetAllPassportElements (struct TdGetAllPassportElements *var);
void TdStackStorerGetAllPassportElements (struct TdGetAllPassportElements *var, struct TdStackStorerMethods *M);
struct TdGetAllPassportElements *TdStackFetcherGetAllPassportElements (struct TdStackFetcherMethods *M);
struct TdGetArchivedStickerSets {
  int ID;
  int refcnt;
  int is_masks_;
  long long offset_sticker_set_id_;
  int limit_;
};
struct TdGetArchivedStickerSets *TdCreateObjectGetArchivedStickerSets (int is_masks_, long long offset_sticker_set_id_, int limit_);
char *TdSerializeGetArchivedStickerSets (struct TdGetArchivedStickerSets *var);
void TdDestroyObjectGetArchivedStickerSets (struct TdGetArchivedStickerSets *var);
void TdStackStorerGetArchivedStickerSets (struct TdGetArchivedStickerSets *var, struct TdStackStorerMethods *M);
struct TdGetArchivedStickerSets *TdStackFetcherGetArchivedStickerSets (struct TdStackFetcherMethods *M);
struct TdGetAttachedStickerSets {
  int ID;
  int refcnt;
  int file_id_;
};
struct TdGetAttachedStickerSets *TdCreateObjectGetAttachedStickerSets (int file_id_);
char *TdSerializeGetAttachedStickerSets (struct TdGetAttachedStickerSets *var);
void TdDestroyObjectGetAttachedStickerSets (struct TdGetAttachedStickerSets *var);
void TdStackStorerGetAttachedStickerSets (struct TdGetAttachedStickerSets *var, struct TdStackStorerMethods *M);
struct TdGetAttachedStickerSets *TdStackFetcherGetAttachedStickerSets (struct TdStackFetcherMethods *M);
struct TdGetAuthorizationState {
  int ID;
  int refcnt;
};
struct TdGetAuthorizationState *TdCreateObjectGetAuthorizationState (void);
char *TdSerializeGetAuthorizationState (struct TdGetAuthorizationState *var);
void TdDestroyObjectGetAuthorizationState (struct TdGetAuthorizationState *var);
void TdStackStorerGetAuthorizationState (struct TdGetAuthorizationState *var, struct TdStackStorerMethods *M);
struct TdGetAuthorizationState *TdStackFetcherGetAuthorizationState (struct TdStackFetcherMethods *M);
struct TdGetBasicGroup {
  int ID;
  int refcnt;
  int basic_group_id_;
};
struct TdGetBasicGroup *TdCreateObjectGetBasicGroup (int basic_group_id_);
char *TdSerializeGetBasicGroup (struct TdGetBasicGroup *var);
void TdDestroyObjectGetBasicGroup (struct TdGetBasicGroup *var);
void TdStackStorerGetBasicGroup (struct TdGetBasicGroup *var, struct TdStackStorerMethods *M);
struct TdGetBasicGroup *TdStackFetcherGetBasicGroup (struct TdStackFetcherMethods *M);
struct TdGetBasicGroupFullInfo {
  int ID;
  int refcnt;
  int basic_group_id_;
};
struct TdGetBasicGroupFullInfo *TdCreateObjectGetBasicGroupFullInfo (int basic_group_id_);
char *TdSerializeGetBasicGroupFullInfo (struct TdGetBasicGroupFullInfo *var);
void TdDestroyObjectGetBasicGroupFullInfo (struct TdGetBasicGroupFullInfo *var);
void TdStackStorerGetBasicGroupFullInfo (struct TdGetBasicGroupFullInfo *var, struct TdStackStorerMethods *M);
struct TdGetBasicGroupFullInfo *TdStackFetcherGetBasicGroupFullInfo (struct TdStackFetcherMethods *M);
struct TdGetBlockedUsers {
  int ID;
  int refcnt;
  int offset_;
  int limit_;
};
struct TdGetBlockedUsers *TdCreateObjectGetBlockedUsers (int offset_, int limit_);
char *TdSerializeGetBlockedUsers (struct TdGetBlockedUsers *var);
void TdDestroyObjectGetBlockedUsers (struct TdGetBlockedUsers *var);
void TdStackStorerGetBlockedUsers (struct TdGetBlockedUsers *var, struct TdStackStorerMethods *M);
struct TdGetBlockedUsers *TdStackFetcherGetBlockedUsers (struct TdStackFetcherMethods *M);
struct TdGetCallbackQueryAnswer {
  int ID;
  int refcnt;
  long long chat_id_;
  long long message_id_;
  struct TdCallbackQueryPayload *payload_;
};
struct TdGetCallbackQueryAnswer *TdCreateObjectGetCallbackQueryAnswer (long long chat_id_, long long message_id_, struct TdCallbackQueryPayload *payload_);
char *TdSerializeGetCallbackQueryAnswer (struct TdGetCallbackQueryAnswer *var);
void TdDestroyObjectGetCallbackQueryAnswer (struct TdGetCallbackQueryAnswer *var);
void TdStackStorerGetCallbackQueryAnswer (struct TdGetCallbackQueryAnswer *var, struct TdStackStorerMethods *M);
struct TdGetCallbackQueryAnswer *TdStackFetcherGetCallbackQueryAnswer (struct TdStackFetcherMethods *M);
struct TdGetChat {
  int ID;
  int refcnt;
  long long chat_id_;
};
struct TdGetChat *TdCreateObjectGetChat (long long chat_id_);
char *TdSerializeGetChat (struct TdGetChat *var);
void TdDestroyObjectGetChat (struct TdGetChat *var);
void TdStackStorerGetChat (struct TdGetChat *var, struct TdStackStorerMethods *M);
struct TdGetChat *TdStackFetcherGetChat (struct TdStackFetcherMethods *M);
struct TdGetChatAdministrators {
  int ID;
  int refcnt;
  long long chat_id_;
};
struct TdGetChatAdministrators *TdCreateObjectGetChatAdministrators (long long chat_id_);
char *TdSerializeGetChatAdministrators (struct TdGetChatAdministrators *var);
void TdDestroyObjectGetChatAdministrators (struct TdGetChatAdministrators *var);
void TdStackStorerGetChatAdministrators (struct TdGetChatAdministrators *var, struct TdStackStorerMethods *M);
struct TdGetChatAdministrators *TdStackFetcherGetChatAdministrators (struct TdStackFetcherMethods *M);
struct TdGetChatEventLog {
  int ID;
  int refcnt;
  long long chat_id_;
  char *query_;
  long long from_event_id_;
  int limit_;
  struct TdChatEventLogFilters *filters_;
  struct TdVectorInt *user_ids_;
};
struct TdGetChatEventLog *TdCreateObjectGetChatEventLog (long long chat_id_, char *query_, long long from_event_id_, int limit_, struct TdChatEventLogFilters *filters_, struct TdVectorInt *user_ids_);
char *TdSerializeGetChatEventLog (struct TdGetChatEventLog *var);
void TdDestroyObjectGetChatEventLog (struct TdGetChatEventLog *var);
void TdStackStorerGetChatEventLog (struct TdGetChatEventLog *var, struct TdStackStorerMethods *M);
struct TdGetChatEventLog *TdStackFetcherGetChatEventLog (struct TdStackFetcherMethods *M);
struct TdGetChatHistory {
  int ID;
  int refcnt;
  long long chat_id_;
  long long from_message_id_;
  int offset_;
  int limit_;
  int only_local_;
};
struct TdGetChatHistory *TdCreateObjectGetChatHistory (long long chat_id_, long long from_message_id_, int offset_, int limit_, int only_local_);
char *TdSerializeGetChatHistory (struct TdGetChatHistory *var);
void TdDestroyObjectGetChatHistory (struct TdGetChatHistory *var);
void TdStackStorerGetChatHistory (struct TdGetChatHistory *var, struct TdStackStorerMethods *M);
struct TdGetChatHistory *TdStackFetcherGetChatHistory (struct TdStackFetcherMethods *M);
struct TdGetChatMember {
  int ID;
  int refcnt;
  long long chat_id_;
  int user_id_;
};
struct TdGetChatMember *TdCreateObjectGetChatMember (long long chat_id_, int user_id_);
char *TdSerializeGetChatMember (struct TdGetChatMember *var);
void TdDestroyObjectGetChatMember (struct TdGetChatMember *var);
void TdStackStorerGetChatMember (struct TdGetChatMember *var, struct TdStackStorerMethods *M);
struct TdGetChatMember *TdStackFetcherGetChatMember (struct TdStackFetcherMethods *M);
struct TdGetChatMessageByDate {
  int ID;
  int refcnt;
  long long chat_id_;
  int date_;
};
struct TdGetChatMessageByDate *TdCreateObjectGetChatMessageByDate (long long chat_id_, int date_);
char *TdSerializeGetChatMessageByDate (struct TdGetChatMessageByDate *var);
void TdDestroyObjectGetChatMessageByDate (struct TdGetChatMessageByDate *var);
void TdStackStorerGetChatMessageByDate (struct TdGetChatMessageByDate *var, struct TdStackStorerMethods *M);
struct TdGetChatMessageByDate *TdStackFetcherGetChatMessageByDate (struct TdStackFetcherMethods *M);
struct TdGetChatMessageCount {
  int ID;
  int refcnt;
  long long chat_id_;
  struct TdSearchMessagesFilter *filter_;
  int return_local_;
};
struct TdGetChatMessageCount *TdCreateObjectGetChatMessageCount (long long chat_id_, struct TdSearchMessagesFilter *filter_, int return_local_);
char *TdSerializeGetChatMessageCount (struct TdGetChatMessageCount *var);
void TdDestroyObjectGetChatMessageCount (struct TdGetChatMessageCount *var);
void TdStackStorerGetChatMessageCount (struct TdGetChatMessageCount *var, struct TdStackStorerMethods *M);
struct TdGetChatMessageCount *TdStackFetcherGetChatMessageCount (struct TdStackFetcherMethods *M);
struct TdGetChatPinnedMessage {
  int ID;
  int refcnt;
  long long chat_id_;
};
struct TdGetChatPinnedMessage *TdCreateObjectGetChatPinnedMessage (long long chat_id_);
char *TdSerializeGetChatPinnedMessage (struct TdGetChatPinnedMessage *var);
void TdDestroyObjectGetChatPinnedMessage (struct TdGetChatPinnedMessage *var);
void TdStackStorerGetChatPinnedMessage (struct TdGetChatPinnedMessage *var, struct TdStackStorerMethods *M);
struct TdGetChatPinnedMessage *TdStackFetcherGetChatPinnedMessage (struct TdStackFetcherMethods *M);
struct TdGetChatReportSpamState {
  int ID;
  int refcnt;
  long long chat_id_;
};
struct TdGetChatReportSpamState *TdCreateObjectGetChatReportSpamState (long long chat_id_);
char *TdSerializeGetChatReportSpamState (struct TdGetChatReportSpamState *var);
void TdDestroyObjectGetChatReportSpamState (struct TdGetChatReportSpamState *var);
void TdStackStorerGetChatReportSpamState (struct TdGetChatReportSpamState *var, struct TdStackStorerMethods *M);
struct TdGetChatReportSpamState *TdStackFetcherGetChatReportSpamState (struct TdStackFetcherMethods *M);
struct TdGetChats {
  int ID;
  int refcnt;
  long long offset_order_;
  long long offset_chat_id_;
  int limit_;
};
struct TdGetChats *TdCreateObjectGetChats (long long offset_order_, long long offset_chat_id_, int limit_);
char *TdSerializeGetChats (struct TdGetChats *var);
void TdDestroyObjectGetChats (struct TdGetChats *var);
void TdStackStorerGetChats (struct TdGetChats *var, struct TdStackStorerMethods *M);
struct TdGetChats *TdStackFetcherGetChats (struct TdStackFetcherMethods *M);
struct TdGetConnectedWebsites {
  int ID;
  int refcnt;
};
struct TdGetConnectedWebsites *TdCreateObjectGetConnectedWebsites (void);
char *TdSerializeGetConnectedWebsites (struct TdGetConnectedWebsites *var);
void TdDestroyObjectGetConnectedWebsites (struct TdGetConnectedWebsites *var);
void TdStackStorerGetConnectedWebsites (struct TdGetConnectedWebsites *var, struct TdStackStorerMethods *M);
struct TdGetConnectedWebsites *TdStackFetcherGetConnectedWebsites (struct TdStackFetcherMethods *M);
struct TdGetContacts {
  int ID;
  int refcnt;
};
struct TdGetContacts *TdCreateObjectGetContacts (void);
char *TdSerializeGetContacts (struct TdGetContacts *var);
void TdDestroyObjectGetContacts (struct TdGetContacts *var);
void TdStackStorerGetContacts (struct TdGetContacts *var, struct TdStackStorerMethods *M);
struct TdGetContacts *TdStackFetcherGetContacts (struct TdStackFetcherMethods *M);
struct TdGetCountryCode {
  int ID;
  int refcnt;
};
struct TdGetCountryCode *TdCreateObjectGetCountryCode (void);
char *TdSerializeGetCountryCode (struct TdGetCountryCode *var);
void TdDestroyObjectGetCountryCode (struct TdGetCountryCode *var);
void TdStackStorerGetCountryCode (struct TdGetCountryCode *var, struct TdStackStorerMethods *M);
struct TdGetCountryCode *TdStackFetcherGetCountryCode (struct TdStackFetcherMethods *M);
struct TdGetCreatedPublicChats {
  int ID;
  int refcnt;
};
struct TdGetCreatedPublicChats *TdCreateObjectGetCreatedPublicChats (void);
char *TdSerializeGetCreatedPublicChats (struct TdGetCreatedPublicChats *var);
void TdDestroyObjectGetCreatedPublicChats (struct TdGetCreatedPublicChats *var);
void TdStackStorerGetCreatedPublicChats (struct TdGetCreatedPublicChats *var, struct TdStackStorerMethods *M);
struct TdGetCreatedPublicChats *TdStackFetcherGetCreatedPublicChats (struct TdStackFetcherMethods *M);
struct TdGetDeepLinkInfo {
  int ID;
  int refcnt;
  char *link_;
};
struct TdGetDeepLinkInfo *TdCreateObjectGetDeepLinkInfo (char *link_);
char *TdSerializeGetDeepLinkInfo (struct TdGetDeepLinkInfo *var);
void TdDestroyObjectGetDeepLinkInfo (struct TdGetDeepLinkInfo *var);
void TdStackStorerGetDeepLinkInfo (struct TdGetDeepLinkInfo *var, struct TdStackStorerMethods *M);
struct TdGetDeepLinkInfo *TdStackFetcherGetDeepLinkInfo (struct TdStackFetcherMethods *M);
struct TdGetFavoriteStickers {
  int ID;
  int refcnt;
};
struct TdGetFavoriteStickers *TdCreateObjectGetFavoriteStickers (void);
char *TdSerializeGetFavoriteStickers (struct TdGetFavoriteStickers *var);
void TdDestroyObjectGetFavoriteStickers (struct TdGetFavoriteStickers *var);
void TdStackStorerGetFavoriteStickers (struct TdGetFavoriteStickers *var, struct TdStackStorerMethods *M);
struct TdGetFavoriteStickers *TdStackFetcherGetFavoriteStickers (struct TdStackFetcherMethods *M);
struct TdGetFile {
  int ID;
  int refcnt;
  int file_id_;
};
struct TdGetFile *TdCreateObjectGetFile (int file_id_);
char *TdSerializeGetFile (struct TdGetFile *var);
void TdDestroyObjectGetFile (struct TdGetFile *var);
void TdStackStorerGetFile (struct TdGetFile *var, struct TdStackStorerMethods *M);
struct TdGetFile *TdStackFetcherGetFile (struct TdStackFetcherMethods *M);
struct TdGetFileExtension {
  int ID;
  int refcnt;
  char *mime_type_;
};
struct TdGetFileExtension *TdCreateObjectGetFileExtension (char *mime_type_);
char *TdSerializeGetFileExtension (struct TdGetFileExtension *var);
void TdDestroyObjectGetFileExtension (struct TdGetFileExtension *var);
void TdStackStorerGetFileExtension (struct TdGetFileExtension *var, struct TdStackStorerMethods *M);
struct TdGetFileExtension *TdStackFetcherGetFileExtension (struct TdStackFetcherMethods *M);
struct TdGetFileMimeType {
  int ID;
  int refcnt;
  char *file_name_;
};
struct TdGetFileMimeType *TdCreateObjectGetFileMimeType (char *file_name_);
char *TdSerializeGetFileMimeType (struct TdGetFileMimeType *var);
void TdDestroyObjectGetFileMimeType (struct TdGetFileMimeType *var);
void TdStackStorerGetFileMimeType (struct TdGetFileMimeType *var, struct TdStackStorerMethods *M);
struct TdGetFileMimeType *TdStackFetcherGetFileMimeType (struct TdStackFetcherMethods *M);
struct TdGetGameHighScores {
  int ID;
  int refcnt;
  long long chat_id_;
  long long message_id_;
  int user_id_;
};
struct TdGetGameHighScores *TdCreateObjectGetGameHighScores (long long chat_id_, long long message_id_, int user_id_);
char *TdSerializeGetGameHighScores (struct TdGetGameHighScores *var);
void TdDestroyObjectGetGameHighScores (struct TdGetGameHighScores *var);
void TdStackStorerGetGameHighScores (struct TdGetGameHighScores *var, struct TdStackStorerMethods *M);
struct TdGetGameHighScores *TdStackFetcherGetGameHighScores (struct TdStackFetcherMethods *M);
struct TdGetGroupsInCommon {
  int ID;
  int refcnt;
  int user_id_;
  long long offset_chat_id_;
  int limit_;
};
struct TdGetGroupsInCommon *TdCreateObjectGetGroupsInCommon (int user_id_, long long offset_chat_id_, int limit_);
char *TdSerializeGetGroupsInCommon (struct TdGetGroupsInCommon *var);
void TdDestroyObjectGetGroupsInCommon (struct TdGetGroupsInCommon *var);
void TdStackStorerGetGroupsInCommon (struct TdGetGroupsInCommon *var, struct TdStackStorerMethods *M);
struct TdGetGroupsInCommon *TdStackFetcherGetGroupsInCommon (struct TdStackFetcherMethods *M);
struct TdGetImportedContactCount {
  int ID;
  int refcnt;
};
struct TdGetImportedContactCount *TdCreateObjectGetImportedContactCount (void);
char *TdSerializeGetImportedContactCount (struct TdGetImportedContactCount *var);
void TdDestroyObjectGetImportedContactCount (struct TdGetImportedContactCount *var);
void TdStackStorerGetImportedContactCount (struct TdGetImportedContactCount *var, struct TdStackStorerMethods *M);
struct TdGetImportedContactCount *TdStackFetcherGetImportedContactCount (struct TdStackFetcherMethods *M);
struct TdGetInlineGameHighScores {
  int ID;
  int refcnt;
  char *inline_message_id_;
  int user_id_;
};
struct TdGetInlineGameHighScores *TdCreateObjectGetInlineGameHighScores (char *inline_message_id_, int user_id_);
char *TdSerializeGetInlineGameHighScores (struct TdGetInlineGameHighScores *var);
void TdDestroyObjectGetInlineGameHighScores (struct TdGetInlineGameHighScores *var);
void TdStackStorerGetInlineGameHighScores (struct TdGetInlineGameHighScores *var, struct TdStackStorerMethods *M);
struct TdGetInlineGameHighScores *TdStackFetcherGetInlineGameHighScores (struct TdStackFetcherMethods *M);
struct TdGetInlineQueryResults {
  int ID;
  int refcnt;
  int bot_user_id_;
  long long chat_id_;
  struct TdLocation *user_location_;
  char *query_;
  char *offset_;
};
struct TdGetInlineQueryResults *TdCreateObjectGetInlineQueryResults (int bot_user_id_, long long chat_id_, struct TdLocation *user_location_, char *query_, char *offset_);
char *TdSerializeGetInlineQueryResults (struct TdGetInlineQueryResults *var);
void TdDestroyObjectGetInlineQueryResults (struct TdGetInlineQueryResults *var);
void TdStackStorerGetInlineQueryResults (struct TdGetInlineQueryResults *var, struct TdStackStorerMethods *M);
struct TdGetInlineQueryResults *TdStackFetcherGetInlineQueryResults (struct TdStackFetcherMethods *M);
struct TdGetInstalledStickerSets {
  int ID;
  int refcnt;
  int is_masks_;
};
struct TdGetInstalledStickerSets *TdCreateObjectGetInstalledStickerSets (int is_masks_);
char *TdSerializeGetInstalledStickerSets (struct TdGetInstalledStickerSets *var);
void TdDestroyObjectGetInstalledStickerSets (struct TdGetInstalledStickerSets *var);
void TdStackStorerGetInstalledStickerSets (struct TdGetInstalledStickerSets *var, struct TdStackStorerMethods *M);
struct TdGetInstalledStickerSets *TdStackFetcherGetInstalledStickerSets (struct TdStackFetcherMethods *M);
struct TdGetInviteText {
  int ID;
  int refcnt;
};
struct TdGetInviteText *TdCreateObjectGetInviteText (void);
char *TdSerializeGetInviteText (struct TdGetInviteText *var);
void TdDestroyObjectGetInviteText (struct TdGetInviteText *var);
void TdStackStorerGetInviteText (struct TdGetInviteText *var, struct TdStackStorerMethods *M);
struct TdGetInviteText *TdStackFetcherGetInviteText (struct TdStackFetcherMethods *M);
struct TdGetLanguagePackString {
  int ID;
  int refcnt;
  char *language_pack_database_path_;
  char *localization_target_;
  char *language_pack_id_;
  char *key_;
};
struct TdGetLanguagePackString *TdCreateObjectGetLanguagePackString (char *language_pack_database_path_, char *localization_target_, char *language_pack_id_, char *key_);
char *TdSerializeGetLanguagePackString (struct TdGetLanguagePackString *var);
void TdDestroyObjectGetLanguagePackString (struct TdGetLanguagePackString *var);
void TdStackStorerGetLanguagePackString (struct TdGetLanguagePackString *var, struct TdStackStorerMethods *M);
struct TdGetLanguagePackString *TdStackFetcherGetLanguagePackString (struct TdStackFetcherMethods *M);
struct TdGetLanguagePackStrings {
  int ID;
  int refcnt;
  char *language_pack_id_;
  struct TdVectorString *keys_;
};
struct TdGetLanguagePackStrings *TdCreateObjectGetLanguagePackStrings (char *language_pack_id_, struct TdVectorString *keys_);
char *TdSerializeGetLanguagePackStrings (struct TdGetLanguagePackStrings *var);
void TdDestroyObjectGetLanguagePackStrings (struct TdGetLanguagePackStrings *var);
void TdStackStorerGetLanguagePackStrings (struct TdGetLanguagePackStrings *var, struct TdStackStorerMethods *M);
struct TdGetLanguagePackStrings *TdStackFetcherGetLanguagePackStrings (struct TdStackFetcherMethods *M);
struct TdGetLocalizationTargetInfo {
  int ID;
  int refcnt;
  int only_local_;
};
struct TdGetLocalizationTargetInfo *TdCreateObjectGetLocalizationTargetInfo (int only_local_);
char *TdSerializeGetLocalizationTargetInfo (struct TdGetLocalizationTargetInfo *var);
void TdDestroyObjectGetLocalizationTargetInfo (struct TdGetLocalizationTargetInfo *var);
void TdStackStorerGetLocalizationTargetInfo (struct TdGetLocalizationTargetInfo *var, struct TdStackStorerMethods *M);
struct TdGetLocalizationTargetInfo *TdStackFetcherGetLocalizationTargetInfo (struct TdStackFetcherMethods *M);
struct TdGetMapThumbnailFile {
  int ID;
  int refcnt;
  struct TdLocation *location_;
  int zoom_;
  int width_;
  int height_;
  int scale_;
  long long chat_id_;
};
struct TdGetMapThumbnailFile *TdCreateObjectGetMapThumbnailFile (struct TdLocation *location_, int zoom_, int width_, int height_, int scale_, long long chat_id_);
char *TdSerializeGetMapThumbnailFile (struct TdGetMapThumbnailFile *var);
void TdDestroyObjectGetMapThumbnailFile (struct TdGetMapThumbnailFile *var);
void TdStackStorerGetMapThumbnailFile (struct TdGetMapThumbnailFile *var, struct TdStackStorerMethods *M);
struct TdGetMapThumbnailFile *TdStackFetcherGetMapThumbnailFile (struct TdStackFetcherMethods *M);
struct TdGetMe {
  int ID;
  int refcnt;
};
struct TdGetMe *TdCreateObjectGetMe (void);
char *TdSerializeGetMe (struct TdGetMe *var);
void TdDestroyObjectGetMe (struct TdGetMe *var);
void TdStackStorerGetMe (struct TdGetMe *var, struct TdStackStorerMethods *M);
struct TdGetMe *TdStackFetcherGetMe (struct TdStackFetcherMethods *M);
struct TdGetMessage {
  int ID;
  int refcnt;
  long long chat_id_;
  long long message_id_;
};
struct TdGetMessage *TdCreateObjectGetMessage (long long chat_id_, long long message_id_);
char *TdSerializeGetMessage (struct TdGetMessage *var);
void TdDestroyObjectGetMessage (struct TdGetMessage *var);
void TdStackStorerGetMessage (struct TdGetMessage *var, struct TdStackStorerMethods *M);
struct TdGetMessage *TdStackFetcherGetMessage (struct TdStackFetcherMethods *M);
struct TdGetMessages {
  int ID;
  int refcnt;
  long long chat_id_;
  struct TdVectorLong *message_ids_;
};
struct TdGetMessages *TdCreateObjectGetMessages (long long chat_id_, struct TdVectorLong *message_ids_);
char *TdSerializeGetMessages (struct TdGetMessages *var);
void TdDestroyObjectGetMessages (struct TdGetMessages *var);
void TdStackStorerGetMessages (struct TdGetMessages *var, struct TdStackStorerMethods *M);
struct TdGetMessages *TdStackFetcherGetMessages (struct TdStackFetcherMethods *M);
struct TdGetNetworkStatistics {
  int ID;
  int refcnt;
  int only_current_;
};
struct TdGetNetworkStatistics *TdCreateObjectGetNetworkStatistics (int only_current_);
char *TdSerializeGetNetworkStatistics (struct TdGetNetworkStatistics *var);
void TdDestroyObjectGetNetworkStatistics (struct TdGetNetworkStatistics *var);
void TdStackStorerGetNetworkStatistics (struct TdGetNetworkStatistics *var, struct TdStackStorerMethods *M);
struct TdGetNetworkStatistics *TdStackFetcherGetNetworkStatistics (struct TdStackFetcherMethods *M);
struct TdGetOption {
  int ID;
  int refcnt;
  char *name_;
};
struct TdGetOption *TdCreateObjectGetOption (char *name_);
char *TdSerializeGetOption (struct TdGetOption *var);
void TdDestroyObjectGetOption (struct TdGetOption *var);
void TdStackStorerGetOption (struct TdGetOption *var, struct TdStackStorerMethods *M);
struct TdGetOption *TdStackFetcherGetOption (struct TdStackFetcherMethods *M);
struct TdGetPassportAuthorizationForm {
  int ID;
  int refcnt;
  int bot_user_id_;
  char *scope_;
  char *public_key_;
  char *nonce_;
  char *password_;
};
struct TdGetPassportAuthorizationForm *TdCreateObjectGetPassportAuthorizationForm (int bot_user_id_, char *scope_, char *public_key_, char *nonce_, char *password_);
char *TdSerializeGetPassportAuthorizationForm (struct TdGetPassportAuthorizationForm *var);
void TdDestroyObjectGetPassportAuthorizationForm (struct TdGetPassportAuthorizationForm *var);
void TdStackStorerGetPassportAuthorizationForm (struct TdGetPassportAuthorizationForm *var, struct TdStackStorerMethods *M);
struct TdGetPassportAuthorizationForm *TdStackFetcherGetPassportAuthorizationForm (struct TdStackFetcherMethods *M);
struct TdGetPassportElement {
  int ID;
  int refcnt;
  struct TdPassportElementType *type_;
  char *password_;
};
struct TdGetPassportElement *TdCreateObjectGetPassportElement (struct TdPassportElementType *type_, char *password_);
char *TdSerializeGetPassportElement (struct TdGetPassportElement *var);
void TdDestroyObjectGetPassportElement (struct TdGetPassportElement *var);
void TdStackStorerGetPassportElement (struct TdGetPassportElement *var, struct TdStackStorerMethods *M);
struct TdGetPassportElement *TdStackFetcherGetPassportElement (struct TdStackFetcherMethods *M);
struct TdGetPasswordState {
  int ID;
  int refcnt;
};
struct TdGetPasswordState *TdCreateObjectGetPasswordState (void);
char *TdSerializeGetPasswordState (struct TdGetPasswordState *var);
void TdDestroyObjectGetPasswordState (struct TdGetPasswordState *var);
void TdStackStorerGetPasswordState (struct TdGetPasswordState *var, struct TdStackStorerMethods *M);
struct TdGetPasswordState *TdStackFetcherGetPasswordState (struct TdStackFetcherMethods *M);
struct TdGetPaymentForm {
  int ID;
  int refcnt;
  long long chat_id_;
  long long message_id_;
};
struct TdGetPaymentForm *TdCreateObjectGetPaymentForm (long long chat_id_, long long message_id_);
char *TdSerializeGetPaymentForm (struct TdGetPaymentForm *var);
void TdDestroyObjectGetPaymentForm (struct TdGetPaymentForm *var);
void TdStackStorerGetPaymentForm (struct TdGetPaymentForm *var, struct TdStackStorerMethods *M);
struct TdGetPaymentForm *TdStackFetcherGetPaymentForm (struct TdStackFetcherMethods *M);
struct TdGetPaymentReceipt {
  int ID;
  int refcnt;
  long long chat_id_;
  long long message_id_;
};
struct TdGetPaymentReceipt *TdCreateObjectGetPaymentReceipt (long long chat_id_, long long message_id_);
char *TdSerializeGetPaymentReceipt (struct TdGetPaymentReceipt *var);
void TdDestroyObjectGetPaymentReceipt (struct TdGetPaymentReceipt *var);
void TdStackStorerGetPaymentReceipt (struct TdGetPaymentReceipt *var, struct TdStackStorerMethods *M);
struct TdGetPaymentReceipt *TdStackFetcherGetPaymentReceipt (struct TdStackFetcherMethods *M);
struct TdGetPreferredCountryLanguage {
  int ID;
  int refcnt;
  char *country_code_;
};
struct TdGetPreferredCountryLanguage *TdCreateObjectGetPreferredCountryLanguage (char *country_code_);
char *TdSerializeGetPreferredCountryLanguage (struct TdGetPreferredCountryLanguage *var);
void TdDestroyObjectGetPreferredCountryLanguage (struct TdGetPreferredCountryLanguage *var);
void TdStackStorerGetPreferredCountryLanguage (struct TdGetPreferredCountryLanguage *var, struct TdStackStorerMethods *M);
struct TdGetPreferredCountryLanguage *TdStackFetcherGetPreferredCountryLanguage (struct TdStackFetcherMethods *M);
struct TdGetProxies {
  int ID;
  int refcnt;
};
struct TdGetProxies *TdCreateObjectGetProxies (void);
char *TdSerializeGetProxies (struct TdGetProxies *var);
void TdDestroyObjectGetProxies (struct TdGetProxies *var);
void TdStackStorerGetProxies (struct TdGetProxies *var, struct TdStackStorerMethods *M);
struct TdGetProxies *TdStackFetcherGetProxies (struct TdStackFetcherMethods *M);
struct TdGetProxyLink {
  int ID;
  int refcnt;
  int proxy_id_;
};
struct TdGetProxyLink *TdCreateObjectGetProxyLink (int proxy_id_);
char *TdSerializeGetProxyLink (struct TdGetProxyLink *var);
void TdDestroyObjectGetProxyLink (struct TdGetProxyLink *var);
void TdStackStorerGetProxyLink (struct TdGetProxyLink *var, struct TdStackStorerMethods *M);
struct TdGetProxyLink *TdStackFetcherGetProxyLink (struct TdStackFetcherMethods *M);
struct TdGetPublicMessageLink {
  int ID;
  int refcnt;
  long long chat_id_;
  long long message_id_;
  int for_album_;
};
struct TdGetPublicMessageLink *TdCreateObjectGetPublicMessageLink (long long chat_id_, long long message_id_, int for_album_);
char *TdSerializeGetPublicMessageLink (struct TdGetPublicMessageLink *var);
void TdDestroyObjectGetPublicMessageLink (struct TdGetPublicMessageLink *var);
void TdStackStorerGetPublicMessageLink (struct TdGetPublicMessageLink *var, struct TdStackStorerMethods *M);
struct TdGetPublicMessageLink *TdStackFetcherGetPublicMessageLink (struct TdStackFetcherMethods *M);
struct TdGetRecentInlineBots {
  int ID;
  int refcnt;
};
struct TdGetRecentInlineBots *TdCreateObjectGetRecentInlineBots (void);
char *TdSerializeGetRecentInlineBots (struct TdGetRecentInlineBots *var);
void TdDestroyObjectGetRecentInlineBots (struct TdGetRecentInlineBots *var);
void TdStackStorerGetRecentInlineBots (struct TdGetRecentInlineBots *var, struct TdStackStorerMethods *M);
struct TdGetRecentInlineBots *TdStackFetcherGetRecentInlineBots (struct TdStackFetcherMethods *M);
struct TdGetRecentStickers {
  int ID;
  int refcnt;
  int is_attached_;
};
struct TdGetRecentStickers *TdCreateObjectGetRecentStickers (int is_attached_);
char *TdSerializeGetRecentStickers (struct TdGetRecentStickers *var);
void TdDestroyObjectGetRecentStickers (struct TdGetRecentStickers *var);
void TdStackStorerGetRecentStickers (struct TdGetRecentStickers *var, struct TdStackStorerMethods *M);
struct TdGetRecentStickers *TdStackFetcherGetRecentStickers (struct TdStackFetcherMethods *M);
struct TdGetRecentlyVisitedTMeUrls {
  int ID;
  int refcnt;
  char *referrer_;
};
struct TdGetRecentlyVisitedTMeUrls *TdCreateObjectGetRecentlyVisitedTMeUrls (char *referrer_);
char *TdSerializeGetRecentlyVisitedTMeUrls (struct TdGetRecentlyVisitedTMeUrls *var);
void TdDestroyObjectGetRecentlyVisitedTMeUrls (struct TdGetRecentlyVisitedTMeUrls *var);
void TdStackStorerGetRecentlyVisitedTMeUrls (struct TdGetRecentlyVisitedTMeUrls *var, struct TdStackStorerMethods *M);
struct TdGetRecentlyVisitedTMeUrls *TdStackFetcherGetRecentlyVisitedTMeUrls (struct TdStackFetcherMethods *M);
struct TdGetRecoveryEmailAddress {
  int ID;
  int refcnt;
  char *password_;
};
struct TdGetRecoveryEmailAddress *TdCreateObjectGetRecoveryEmailAddress (char *password_);
char *TdSerializeGetRecoveryEmailAddress (struct TdGetRecoveryEmailAddress *var);
void TdDestroyObjectGetRecoveryEmailAddress (struct TdGetRecoveryEmailAddress *var);
void TdStackStorerGetRecoveryEmailAddress (struct TdGetRecoveryEmailAddress *var, struct TdStackStorerMethods *M);
struct TdGetRecoveryEmailAddress *TdStackFetcherGetRecoveryEmailAddress (struct TdStackFetcherMethods *M);
struct TdGetRemoteFile {
  int ID;
  int refcnt;
  char *remote_file_id_;
  struct TdFileType *file_type_;
};
struct TdGetRemoteFile *TdCreateObjectGetRemoteFile (char *remote_file_id_, struct TdFileType *file_type_);
char *TdSerializeGetRemoteFile (struct TdGetRemoteFile *var);
void TdDestroyObjectGetRemoteFile (struct TdGetRemoteFile *var);
void TdStackStorerGetRemoteFile (struct TdGetRemoteFile *var, struct TdStackStorerMethods *M);
struct TdGetRemoteFile *TdStackFetcherGetRemoteFile (struct TdStackFetcherMethods *M);
struct TdGetRepliedMessage {
  int ID;
  int refcnt;
  long long chat_id_;
  long long message_id_;
};
struct TdGetRepliedMessage *TdCreateObjectGetRepliedMessage (long long chat_id_, long long message_id_);
char *TdSerializeGetRepliedMessage (struct TdGetRepliedMessage *var);
void TdDestroyObjectGetRepliedMessage (struct TdGetRepliedMessage *var);
void TdStackStorerGetRepliedMessage (struct TdGetRepliedMessage *var, struct TdStackStorerMethods *M);
struct TdGetRepliedMessage *TdStackFetcherGetRepliedMessage (struct TdStackFetcherMethods *M);
struct TdGetSavedAnimations {
  int ID;
  int refcnt;
};
struct TdGetSavedAnimations *TdCreateObjectGetSavedAnimations (void);
char *TdSerializeGetSavedAnimations (struct TdGetSavedAnimations *var);
void TdDestroyObjectGetSavedAnimations (struct TdGetSavedAnimations *var);
void TdStackStorerGetSavedAnimations (struct TdGetSavedAnimations *var, struct TdStackStorerMethods *M);
struct TdGetSavedAnimations *TdStackFetcherGetSavedAnimations (struct TdStackFetcherMethods *M);
struct TdGetSavedOrderInfo {
  int ID;
  int refcnt;
};
struct TdGetSavedOrderInfo *TdCreateObjectGetSavedOrderInfo (void);
char *TdSerializeGetSavedOrderInfo (struct TdGetSavedOrderInfo *var);
void TdDestroyObjectGetSavedOrderInfo (struct TdGetSavedOrderInfo *var);
void TdStackStorerGetSavedOrderInfo (struct TdGetSavedOrderInfo *var, struct TdStackStorerMethods *M);
struct TdGetSavedOrderInfo *TdStackFetcherGetSavedOrderInfo (struct TdStackFetcherMethods *M);
struct TdGetScopeNotificationSettings {
  int ID;
  int refcnt;
  struct TdNotificationSettingsScope *scope_;
};
struct TdGetScopeNotificationSettings *TdCreateObjectGetScopeNotificationSettings (struct TdNotificationSettingsScope *scope_);
char *TdSerializeGetScopeNotificationSettings (struct TdGetScopeNotificationSettings *var);
void TdDestroyObjectGetScopeNotificationSettings (struct TdGetScopeNotificationSettings *var);
void TdStackStorerGetScopeNotificationSettings (struct TdGetScopeNotificationSettings *var, struct TdStackStorerMethods *M);
struct TdGetScopeNotificationSettings *TdStackFetcherGetScopeNotificationSettings (struct TdStackFetcherMethods *M);
struct TdGetSecretChat {
  int ID;
  int refcnt;
  int secret_chat_id_;
};
struct TdGetSecretChat *TdCreateObjectGetSecretChat (int secret_chat_id_);
char *TdSerializeGetSecretChat (struct TdGetSecretChat *var);
void TdDestroyObjectGetSecretChat (struct TdGetSecretChat *var);
void TdStackStorerGetSecretChat (struct TdGetSecretChat *var, struct TdStackStorerMethods *M);
struct TdGetSecretChat *TdStackFetcherGetSecretChat (struct TdStackFetcherMethods *M);
struct TdGetStickerEmojis {
  int ID;
  int refcnt;
  struct TdInputFile *sticker_;
};
struct TdGetStickerEmojis *TdCreateObjectGetStickerEmojis (struct TdInputFile *sticker_);
char *TdSerializeGetStickerEmojis (struct TdGetStickerEmojis *var);
void TdDestroyObjectGetStickerEmojis (struct TdGetStickerEmojis *var);
void TdStackStorerGetStickerEmojis (struct TdGetStickerEmojis *var, struct TdStackStorerMethods *M);
struct TdGetStickerEmojis *TdStackFetcherGetStickerEmojis (struct TdStackFetcherMethods *M);
struct TdGetStickerSet {
  int ID;
  int refcnt;
  long long set_id_;
};
struct TdGetStickerSet *TdCreateObjectGetStickerSet (long long set_id_);
char *TdSerializeGetStickerSet (struct TdGetStickerSet *var);
void TdDestroyObjectGetStickerSet (struct TdGetStickerSet *var);
void TdStackStorerGetStickerSet (struct TdGetStickerSet *var, struct TdStackStorerMethods *M);
struct TdGetStickerSet *TdStackFetcherGetStickerSet (struct TdStackFetcherMethods *M);
struct TdGetStickers {
  int ID;
  int refcnt;
  char *emoji_;
  int limit_;
};
struct TdGetStickers *TdCreateObjectGetStickers (char *emoji_, int limit_);
char *TdSerializeGetStickers (struct TdGetStickers *var);
void TdDestroyObjectGetStickers (struct TdGetStickers *var);
void TdStackStorerGetStickers (struct TdGetStickers *var, struct TdStackStorerMethods *M);
struct TdGetStickers *TdStackFetcherGetStickers (struct TdStackFetcherMethods *M);
struct TdGetStorageStatistics {
  int ID;
  int refcnt;
  int chat_limit_;
};
struct TdGetStorageStatistics *TdCreateObjectGetStorageStatistics (int chat_limit_);
char *TdSerializeGetStorageStatistics (struct TdGetStorageStatistics *var);
void TdDestroyObjectGetStorageStatistics (struct TdGetStorageStatistics *var);
void TdStackStorerGetStorageStatistics (struct TdGetStorageStatistics *var, struct TdStackStorerMethods *M);
struct TdGetStorageStatistics *TdStackFetcherGetStorageStatistics (struct TdStackFetcherMethods *M);
struct TdGetStorageStatisticsFast {
  int ID;
  int refcnt;
};
struct TdGetStorageStatisticsFast *TdCreateObjectGetStorageStatisticsFast (void);
char *TdSerializeGetStorageStatisticsFast (struct TdGetStorageStatisticsFast *var);
void TdDestroyObjectGetStorageStatisticsFast (struct TdGetStorageStatisticsFast *var);
void TdStackStorerGetStorageStatisticsFast (struct TdGetStorageStatisticsFast *var, struct TdStackStorerMethods *M);
struct TdGetStorageStatisticsFast *TdStackFetcherGetStorageStatisticsFast (struct TdStackFetcherMethods *M);
struct TdGetSupergroup {
  int ID;
  int refcnt;
  int supergroup_id_;
};
struct TdGetSupergroup *TdCreateObjectGetSupergroup (int supergroup_id_);
char *TdSerializeGetSupergroup (struct TdGetSupergroup *var);
void TdDestroyObjectGetSupergroup (struct TdGetSupergroup *var);
void TdStackStorerGetSupergroup (struct TdGetSupergroup *var, struct TdStackStorerMethods *M);
struct TdGetSupergroup *TdStackFetcherGetSupergroup (struct TdStackFetcherMethods *M);
struct TdGetSupergroupFullInfo {
  int ID;
  int refcnt;
  int supergroup_id_;
};
struct TdGetSupergroupFullInfo *TdCreateObjectGetSupergroupFullInfo (int supergroup_id_);
char *TdSerializeGetSupergroupFullInfo (struct TdGetSupergroupFullInfo *var);
void TdDestroyObjectGetSupergroupFullInfo (struct TdGetSupergroupFullInfo *var);
void TdStackStorerGetSupergroupFullInfo (struct TdGetSupergroupFullInfo *var, struct TdStackStorerMethods *M);
struct TdGetSupergroupFullInfo *TdStackFetcherGetSupergroupFullInfo (struct TdStackFetcherMethods *M);
struct TdGetSupergroupMembers {
  int ID;
  int refcnt;
  int supergroup_id_;
  struct TdSupergroupMembersFilter *filter_;
  int offset_;
  int limit_;
};
struct TdGetSupergroupMembers *TdCreateObjectGetSupergroupMembers (int supergroup_id_, struct TdSupergroupMembersFilter *filter_, int offset_, int limit_);
char *TdSerializeGetSupergroupMembers (struct TdGetSupergroupMembers *var);
void TdDestroyObjectGetSupergroupMembers (struct TdGetSupergroupMembers *var);
void TdStackStorerGetSupergroupMembers (struct TdGetSupergroupMembers *var, struct TdStackStorerMethods *M);
struct TdGetSupergroupMembers *TdStackFetcherGetSupergroupMembers (struct TdStackFetcherMethods *M);
struct TdGetSupportUser {
  int ID;
  int refcnt;
};
struct TdGetSupportUser *TdCreateObjectGetSupportUser (void);
char *TdSerializeGetSupportUser (struct TdGetSupportUser *var);
void TdDestroyObjectGetSupportUser (struct TdGetSupportUser *var);
void TdStackStorerGetSupportUser (struct TdGetSupportUser *var, struct TdStackStorerMethods *M);
struct TdGetSupportUser *TdStackFetcherGetSupportUser (struct TdStackFetcherMethods *M);
struct TdGetTemporaryPasswordState {
  int ID;
  int refcnt;
};
struct TdGetTemporaryPasswordState *TdCreateObjectGetTemporaryPasswordState (void);
char *TdSerializeGetTemporaryPasswordState (struct TdGetTemporaryPasswordState *var);
void TdDestroyObjectGetTemporaryPasswordState (struct TdGetTemporaryPasswordState *var);
void TdStackStorerGetTemporaryPasswordState (struct TdGetTemporaryPasswordState *var, struct TdStackStorerMethods *M);
struct TdGetTemporaryPasswordState *TdStackFetcherGetTemporaryPasswordState (struct TdStackFetcherMethods *M);
struct TdGetTextEntities {
  int ID;
  int refcnt;
  char *text_;
};
struct TdGetTextEntities *TdCreateObjectGetTextEntities (char *text_);
char *TdSerializeGetTextEntities (struct TdGetTextEntities *var);
void TdDestroyObjectGetTextEntities (struct TdGetTextEntities *var);
void TdStackStorerGetTextEntities (struct TdGetTextEntities *var, struct TdStackStorerMethods *M);
struct TdGetTextEntities *TdStackFetcherGetTextEntities (struct TdStackFetcherMethods *M);
struct TdGetTopChats {
  int ID;
  int refcnt;
  struct TdTopChatCategory *category_;
  int limit_;
};
struct TdGetTopChats *TdCreateObjectGetTopChats (struct TdTopChatCategory *category_, int limit_);
char *TdSerializeGetTopChats (struct TdGetTopChats *var);
void TdDestroyObjectGetTopChats (struct TdGetTopChats *var);
void TdStackStorerGetTopChats (struct TdGetTopChats *var, struct TdStackStorerMethods *M);
struct TdGetTopChats *TdStackFetcherGetTopChats (struct TdStackFetcherMethods *M);
struct TdGetTrendingStickerSets {
  int ID;
  int refcnt;
};
struct TdGetTrendingStickerSets *TdCreateObjectGetTrendingStickerSets (void);
char *TdSerializeGetTrendingStickerSets (struct TdGetTrendingStickerSets *var);
void TdDestroyObjectGetTrendingStickerSets (struct TdGetTrendingStickerSets *var);
void TdStackStorerGetTrendingStickerSets (struct TdGetTrendingStickerSets *var, struct TdStackStorerMethods *M);
struct TdGetTrendingStickerSets *TdStackFetcherGetTrendingStickerSets (struct TdStackFetcherMethods *M);
struct TdGetUser {
  int ID;
  int refcnt;
  int user_id_;
};
struct TdGetUser *TdCreateObjectGetUser (int user_id_);
char *TdSerializeGetUser (struct TdGetUser *var);
void TdDestroyObjectGetUser (struct TdGetUser *var);
void TdStackStorerGetUser (struct TdGetUser *var, struct TdStackStorerMethods *M);
struct TdGetUser *TdStackFetcherGetUser (struct TdStackFetcherMethods *M);
struct TdGetUserFullInfo {
  int ID;
  int refcnt;
  int user_id_;
};
struct TdGetUserFullInfo *TdCreateObjectGetUserFullInfo (int user_id_);
char *TdSerializeGetUserFullInfo (struct TdGetUserFullInfo *var);
void TdDestroyObjectGetUserFullInfo (struct TdGetUserFullInfo *var);
void TdStackStorerGetUserFullInfo (struct TdGetUserFullInfo *var, struct TdStackStorerMethods *M);
struct TdGetUserFullInfo *TdStackFetcherGetUserFullInfo (struct TdStackFetcherMethods *M);
struct TdGetUserPrivacySettingRules {
  int ID;
  int refcnt;
  struct TdUserPrivacySetting *setting_;
};
struct TdGetUserPrivacySettingRules *TdCreateObjectGetUserPrivacySettingRules (struct TdUserPrivacySetting *setting_);
char *TdSerializeGetUserPrivacySettingRules (struct TdGetUserPrivacySettingRules *var);
void TdDestroyObjectGetUserPrivacySettingRules (struct TdGetUserPrivacySettingRules *var);
void TdStackStorerGetUserPrivacySettingRules (struct TdGetUserPrivacySettingRules *var, struct TdStackStorerMethods *M);
struct TdGetUserPrivacySettingRules *TdStackFetcherGetUserPrivacySettingRules (struct TdStackFetcherMethods *M);
struct TdGetUserProfilePhotos {
  int ID;
  int refcnt;
  int user_id_;
  int offset_;
  int limit_;
};
struct TdGetUserProfilePhotos *TdCreateObjectGetUserProfilePhotos (int user_id_, int offset_, int limit_);
char *TdSerializeGetUserProfilePhotos (struct TdGetUserProfilePhotos *var);
void TdDestroyObjectGetUserProfilePhotos (struct TdGetUserProfilePhotos *var);
void TdStackStorerGetUserProfilePhotos (struct TdGetUserProfilePhotos *var, struct TdStackStorerMethods *M);
struct TdGetUserProfilePhotos *TdStackFetcherGetUserProfilePhotos (struct TdStackFetcherMethods *M);
struct TdGetWallpapers {
  int ID;
  int refcnt;
};
struct TdGetWallpapers *TdCreateObjectGetWallpapers (void);
char *TdSerializeGetWallpapers (struct TdGetWallpapers *var);
void TdDestroyObjectGetWallpapers (struct TdGetWallpapers *var);
void TdStackStorerGetWallpapers (struct TdGetWallpapers *var, struct TdStackStorerMethods *M);
struct TdGetWallpapers *TdStackFetcherGetWallpapers (struct TdStackFetcherMethods *M);
struct TdGetWebPageInstantView {
  int ID;
  int refcnt;
  char *url_;
  int force_full_;
};
struct TdGetWebPageInstantView *TdCreateObjectGetWebPageInstantView (char *url_, int force_full_);
char *TdSerializeGetWebPageInstantView (struct TdGetWebPageInstantView *var);
void TdDestroyObjectGetWebPageInstantView (struct TdGetWebPageInstantView *var);
void TdStackStorerGetWebPageInstantView (struct TdGetWebPageInstantView *var, struct TdStackStorerMethods *M);
struct TdGetWebPageInstantView *TdStackFetcherGetWebPageInstantView (struct TdStackFetcherMethods *M);
struct TdGetWebPagePreview {
  int ID;
  int refcnt;
  struct TdFormattedText *text_;
};
struct TdGetWebPagePreview *TdCreateObjectGetWebPagePreview (struct TdFormattedText *text_);
char *TdSerializeGetWebPagePreview (struct TdGetWebPagePreview *var);
void TdDestroyObjectGetWebPagePreview (struct TdGetWebPagePreview *var);
void TdStackStorerGetWebPagePreview (struct TdGetWebPagePreview *var, struct TdStackStorerMethods *M);
struct TdGetWebPagePreview *TdStackFetcherGetWebPagePreview (struct TdStackFetcherMethods *M);
struct TdImportContacts {
  int ID;
  int refcnt;
  struct TdVectorContact *contacts_;
};
struct TdImportContacts *TdCreateObjectImportContacts (struct TdVectorContact *contacts_);
char *TdSerializeImportContacts (struct TdImportContacts *var);
void TdDestroyObjectImportContacts (struct TdImportContacts *var);
void TdStackStorerImportContacts (struct TdImportContacts *var, struct TdStackStorerMethods *M);
struct TdImportContacts *TdStackFetcherImportContacts (struct TdStackFetcherMethods *M);
struct TdJoinChat {
  int ID;
  int refcnt;
  long long chat_id_;
};
struct TdJoinChat *TdCreateObjectJoinChat (long long chat_id_);
char *TdSerializeJoinChat (struct TdJoinChat *var);
void TdDestroyObjectJoinChat (struct TdJoinChat *var);
void TdStackStorerJoinChat (struct TdJoinChat *var, struct TdStackStorerMethods *M);
struct TdJoinChat *TdStackFetcherJoinChat (struct TdStackFetcherMethods *M);
struct TdJoinChatByInviteLink {
  int ID;
  int refcnt;
  char *invite_link_;
};
struct TdJoinChatByInviteLink *TdCreateObjectJoinChatByInviteLink (char *invite_link_);
char *TdSerializeJoinChatByInviteLink (struct TdJoinChatByInviteLink *var);
void TdDestroyObjectJoinChatByInviteLink (struct TdJoinChatByInviteLink *var);
void TdStackStorerJoinChatByInviteLink (struct TdJoinChatByInviteLink *var, struct TdStackStorerMethods *M);
struct TdJoinChatByInviteLink *TdStackFetcherJoinChatByInviteLink (struct TdStackFetcherMethods *M);
struct TdLeaveChat {
  int ID;
  int refcnt;
  long long chat_id_;
};
struct TdLeaveChat *TdCreateObjectLeaveChat (long long chat_id_);
char *TdSerializeLeaveChat (struct TdLeaveChat *var);
void TdDestroyObjectLeaveChat (struct TdLeaveChat *var);
void TdStackStorerLeaveChat (struct TdLeaveChat *var, struct TdStackStorerMethods *M);
struct TdLeaveChat *TdStackFetcherLeaveChat (struct TdStackFetcherMethods *M);
struct TdLogOut {
  int ID;
  int refcnt;
};
struct TdLogOut *TdCreateObjectLogOut (void);
char *TdSerializeLogOut (struct TdLogOut *var);
void TdDestroyObjectLogOut (struct TdLogOut *var);
void TdStackStorerLogOut (struct TdLogOut *var, struct TdStackStorerMethods *M);
struct TdLogOut *TdStackFetcherLogOut (struct TdStackFetcherMethods *M);
struct TdOpenChat {
  int ID;
  int refcnt;
  long long chat_id_;
};
struct TdOpenChat *TdCreateObjectOpenChat (long long chat_id_);
char *TdSerializeOpenChat (struct TdOpenChat *var);
void TdDestroyObjectOpenChat (struct TdOpenChat *var);
void TdStackStorerOpenChat (struct TdOpenChat *var, struct TdStackStorerMethods *M);
struct TdOpenChat *TdStackFetcherOpenChat (struct TdStackFetcherMethods *M);
struct TdOpenMessageContent {
  int ID;
  int refcnt;
  long long chat_id_;
  long long message_id_;
};
struct TdOpenMessageContent *TdCreateObjectOpenMessageContent (long long chat_id_, long long message_id_);
char *TdSerializeOpenMessageContent (struct TdOpenMessageContent *var);
void TdDestroyObjectOpenMessageContent (struct TdOpenMessageContent *var);
void TdStackStorerOpenMessageContent (struct TdOpenMessageContent *var, struct TdStackStorerMethods *M);
struct TdOpenMessageContent *TdStackFetcherOpenMessageContent (struct TdStackFetcherMethods *M);
struct TdOptimizeStorage {
  int ID;
  int refcnt;
  long long size_;
  int ttl_;
  int count_;
  int immunity_delay_;
  struct TdVectorFileType *file_types_;
  struct TdVectorLong *chat_ids_;
  struct TdVectorLong *exclude_chat_ids_;
  int chat_limit_;
};
struct TdOptimizeStorage *TdCreateObjectOptimizeStorage (long long size_, int ttl_, int count_, int immunity_delay_, struct TdVectorFileType *file_types_, struct TdVectorLong *chat_ids_, struct TdVectorLong *exclude_chat_ids_, int chat_limit_);
char *TdSerializeOptimizeStorage (struct TdOptimizeStorage *var);
void TdDestroyObjectOptimizeStorage (struct TdOptimizeStorage *var);
void TdStackStorerOptimizeStorage (struct TdOptimizeStorage *var, struct TdStackStorerMethods *M);
struct TdOptimizeStorage *TdStackFetcherOptimizeStorage (struct TdStackFetcherMethods *M);
struct TdParseTextEntities {
  int ID;
  int refcnt;
  char *text_;
  struct TdTextParseMode *parse_mode_;
};
struct TdParseTextEntities *TdCreateObjectParseTextEntities (char *text_, struct TdTextParseMode *parse_mode_);
char *TdSerializeParseTextEntities (struct TdParseTextEntities *var);
void TdDestroyObjectParseTextEntities (struct TdParseTextEntities *var);
void TdStackStorerParseTextEntities (struct TdParseTextEntities *var, struct TdStackStorerMethods *M);
struct TdParseTextEntities *TdStackFetcherParseTextEntities (struct TdStackFetcherMethods *M);
struct TdPinSupergroupMessage {
  int ID;
  int refcnt;
  int supergroup_id_;
  long long message_id_;
  int disable_notification_;
};
struct TdPinSupergroupMessage *TdCreateObjectPinSupergroupMessage (int supergroup_id_, long long message_id_, int disable_notification_);
char *TdSerializePinSupergroupMessage (struct TdPinSupergroupMessage *var);
void TdDestroyObjectPinSupergroupMessage (struct TdPinSupergroupMessage *var);
void TdStackStorerPinSupergroupMessage (struct TdPinSupergroupMessage *var, struct TdStackStorerMethods *M);
struct TdPinSupergroupMessage *TdStackFetcherPinSupergroupMessage (struct TdStackFetcherMethods *M);
struct TdPingProxy {
  int ID;
  int refcnt;
  int proxy_id_;
};
struct TdPingProxy *TdCreateObjectPingProxy (int proxy_id_);
char *TdSerializePingProxy (struct TdPingProxy *var);
void TdDestroyObjectPingProxy (struct TdPingProxy *var);
void TdStackStorerPingProxy (struct TdPingProxy *var, struct TdStackStorerMethods *M);
struct TdPingProxy *TdStackFetcherPingProxy (struct TdStackFetcherMethods *M);
struct TdProcessDcUpdate {
  int ID;
  int refcnt;
  char *dc_;
  char *addr_;
};
struct TdProcessDcUpdate *TdCreateObjectProcessDcUpdate (char *dc_, char *addr_);
char *TdSerializeProcessDcUpdate (struct TdProcessDcUpdate *var);
void TdDestroyObjectProcessDcUpdate (struct TdProcessDcUpdate *var);
void TdStackStorerProcessDcUpdate (struct TdProcessDcUpdate *var, struct TdStackStorerMethods *M);
struct TdProcessDcUpdate *TdStackFetcherProcessDcUpdate (struct TdStackFetcherMethods *M);
struct TdReadAllChatMentions {
  int ID;
  int refcnt;
  long long chat_id_;
};
struct TdReadAllChatMentions *TdCreateObjectReadAllChatMentions (long long chat_id_);
char *TdSerializeReadAllChatMentions (struct TdReadAllChatMentions *var);
void TdDestroyObjectReadAllChatMentions (struct TdReadAllChatMentions *var);
void TdStackStorerReadAllChatMentions (struct TdReadAllChatMentions *var, struct TdStackStorerMethods *M);
struct TdReadAllChatMentions *TdStackFetcherReadAllChatMentions (struct TdStackFetcherMethods *M);
struct TdRecoverAuthenticationPassword {
  int ID;
  int refcnt;
  char *recovery_code_;
};
struct TdRecoverAuthenticationPassword *TdCreateObjectRecoverAuthenticationPassword (char *recovery_code_);
char *TdSerializeRecoverAuthenticationPassword (struct TdRecoverAuthenticationPassword *var);
void TdDestroyObjectRecoverAuthenticationPassword (struct TdRecoverAuthenticationPassword *var);
void TdStackStorerRecoverAuthenticationPassword (struct TdRecoverAuthenticationPassword *var, struct TdStackStorerMethods *M);
struct TdRecoverAuthenticationPassword *TdStackFetcherRecoverAuthenticationPassword (struct TdStackFetcherMethods *M);
struct TdRecoverPassword {
  int ID;
  int refcnt;
  char *recovery_code_;
};
struct TdRecoverPassword *TdCreateObjectRecoverPassword (char *recovery_code_);
char *TdSerializeRecoverPassword (struct TdRecoverPassword *var);
void TdDestroyObjectRecoverPassword (struct TdRecoverPassword *var);
void TdStackStorerRecoverPassword (struct TdRecoverPassword *var, struct TdStackStorerMethods *M);
struct TdRecoverPassword *TdStackFetcherRecoverPassword (struct TdStackFetcherMethods *M);
struct TdRegisterDevice {
  int ID;
  int refcnt;
  struct TdDeviceToken *device_token_;
  struct TdVectorInt *other_user_ids_;
};
struct TdRegisterDevice *TdCreateObjectRegisterDevice (struct TdDeviceToken *device_token_, struct TdVectorInt *other_user_ids_);
char *TdSerializeRegisterDevice (struct TdRegisterDevice *var);
void TdDestroyObjectRegisterDevice (struct TdRegisterDevice *var);
void TdStackStorerRegisterDevice (struct TdRegisterDevice *var, struct TdStackStorerMethods *M);
struct TdRegisterDevice *TdStackFetcherRegisterDevice (struct TdStackFetcherMethods *M);
struct TdRemoveContacts {
  int ID;
  int refcnt;
  struct TdVectorInt *user_ids_;
};
struct TdRemoveContacts *TdCreateObjectRemoveContacts (struct TdVectorInt *user_ids_);
char *TdSerializeRemoveContacts (struct TdRemoveContacts *var);
void TdDestroyObjectRemoveContacts (struct TdRemoveContacts *var);
void TdStackStorerRemoveContacts (struct TdRemoveContacts *var, struct TdStackStorerMethods *M);
struct TdRemoveContacts *TdStackFetcherRemoveContacts (struct TdStackFetcherMethods *M);
struct TdRemoveFavoriteSticker {
  int ID;
  int refcnt;
  struct TdInputFile *sticker_;
};
struct TdRemoveFavoriteSticker *TdCreateObjectRemoveFavoriteSticker (struct TdInputFile *sticker_);
char *TdSerializeRemoveFavoriteSticker (struct TdRemoveFavoriteSticker *var);
void TdDestroyObjectRemoveFavoriteSticker (struct TdRemoveFavoriteSticker *var);
void TdStackStorerRemoveFavoriteSticker (struct TdRemoveFavoriteSticker *var, struct TdStackStorerMethods *M);
struct TdRemoveFavoriteSticker *TdStackFetcherRemoveFavoriteSticker (struct TdStackFetcherMethods *M);
struct TdRemoveProxy {
  int ID;
  int refcnt;
  int proxy_id_;
};
struct TdRemoveProxy *TdCreateObjectRemoveProxy (int proxy_id_);
char *TdSerializeRemoveProxy (struct TdRemoveProxy *var);
void TdDestroyObjectRemoveProxy (struct TdRemoveProxy *var);
void TdStackStorerRemoveProxy (struct TdRemoveProxy *var, struct TdStackStorerMethods *M);
struct TdRemoveProxy *TdStackFetcherRemoveProxy (struct TdStackFetcherMethods *M);
struct TdRemoveRecentHashtag {
  int ID;
  int refcnt;
  char *hashtag_;
};
struct TdRemoveRecentHashtag *TdCreateObjectRemoveRecentHashtag (char *hashtag_);
char *TdSerializeRemoveRecentHashtag (struct TdRemoveRecentHashtag *var);
void TdDestroyObjectRemoveRecentHashtag (struct TdRemoveRecentHashtag *var);
void TdStackStorerRemoveRecentHashtag (struct TdRemoveRecentHashtag *var, struct TdStackStorerMethods *M);
struct TdRemoveRecentHashtag *TdStackFetcherRemoveRecentHashtag (struct TdStackFetcherMethods *M);
struct TdRemoveRecentSticker {
  int ID;
  int refcnt;
  int is_attached_;
  struct TdInputFile *sticker_;
};
struct TdRemoveRecentSticker *TdCreateObjectRemoveRecentSticker (int is_attached_, struct TdInputFile *sticker_);
char *TdSerializeRemoveRecentSticker (struct TdRemoveRecentSticker *var);
void TdDestroyObjectRemoveRecentSticker (struct TdRemoveRecentSticker *var);
void TdStackStorerRemoveRecentSticker (struct TdRemoveRecentSticker *var, struct TdStackStorerMethods *M);
struct TdRemoveRecentSticker *TdStackFetcherRemoveRecentSticker (struct TdStackFetcherMethods *M);
struct TdRemoveRecentlyFoundChat {
  int ID;
  int refcnt;
  long long chat_id_;
};
struct TdRemoveRecentlyFoundChat *TdCreateObjectRemoveRecentlyFoundChat (long long chat_id_);
char *TdSerializeRemoveRecentlyFoundChat (struct TdRemoveRecentlyFoundChat *var);
void TdDestroyObjectRemoveRecentlyFoundChat (struct TdRemoveRecentlyFoundChat *var);
void TdStackStorerRemoveRecentlyFoundChat (struct TdRemoveRecentlyFoundChat *var, struct TdStackStorerMethods *M);
struct TdRemoveRecentlyFoundChat *TdStackFetcherRemoveRecentlyFoundChat (struct TdStackFetcherMethods *M);
struct TdRemoveSavedAnimation {
  int ID;
  int refcnt;
  struct TdInputFile *animation_;
};
struct TdRemoveSavedAnimation *TdCreateObjectRemoveSavedAnimation (struct TdInputFile *animation_);
char *TdSerializeRemoveSavedAnimation (struct TdRemoveSavedAnimation *var);
void TdDestroyObjectRemoveSavedAnimation (struct TdRemoveSavedAnimation *var);
void TdStackStorerRemoveSavedAnimation (struct TdRemoveSavedAnimation *var, struct TdStackStorerMethods *M);
struct TdRemoveSavedAnimation *TdStackFetcherRemoveSavedAnimation (struct TdStackFetcherMethods *M);
struct TdRemoveStickerFromSet {
  int ID;
  int refcnt;
  struct TdInputFile *sticker_;
};
struct TdRemoveStickerFromSet *TdCreateObjectRemoveStickerFromSet (struct TdInputFile *sticker_);
char *TdSerializeRemoveStickerFromSet (struct TdRemoveStickerFromSet *var);
void TdDestroyObjectRemoveStickerFromSet (struct TdRemoveStickerFromSet *var);
void TdStackStorerRemoveStickerFromSet (struct TdRemoveStickerFromSet *var, struct TdStackStorerMethods *M);
struct TdRemoveStickerFromSet *TdStackFetcherRemoveStickerFromSet (struct TdStackFetcherMethods *M);
struct TdRemoveTopChat {
  int ID;
  int refcnt;
  struct TdTopChatCategory *category_;
  long long chat_id_;
};
struct TdRemoveTopChat *TdCreateObjectRemoveTopChat (struct TdTopChatCategory *category_, long long chat_id_);
char *TdSerializeRemoveTopChat (struct TdRemoveTopChat *var);
void TdDestroyObjectRemoveTopChat (struct TdRemoveTopChat *var);
void TdStackStorerRemoveTopChat (struct TdRemoveTopChat *var, struct TdStackStorerMethods *M);
struct TdRemoveTopChat *TdStackFetcherRemoveTopChat (struct TdStackFetcherMethods *M);
struct TdReorderInstalledStickerSets {
  int ID;
  int refcnt;
  int is_masks_;
  struct TdVectorLong *sticker_set_ids_;
};
struct TdReorderInstalledStickerSets *TdCreateObjectReorderInstalledStickerSets (int is_masks_, struct TdVectorLong *sticker_set_ids_);
char *TdSerializeReorderInstalledStickerSets (struct TdReorderInstalledStickerSets *var);
void TdDestroyObjectReorderInstalledStickerSets (struct TdReorderInstalledStickerSets *var);
void TdStackStorerReorderInstalledStickerSets (struct TdReorderInstalledStickerSets *var, struct TdStackStorerMethods *M);
struct TdReorderInstalledStickerSets *TdStackFetcherReorderInstalledStickerSets (struct TdStackFetcherMethods *M);
struct TdReportChat {
  int ID;
  int refcnt;
  long long chat_id_;
  struct TdChatReportReason *reason_;
  struct TdVectorLong *message_ids_;
};
struct TdReportChat *TdCreateObjectReportChat (long long chat_id_, struct TdChatReportReason *reason_, struct TdVectorLong *message_ids_);
char *TdSerializeReportChat (struct TdReportChat *var);
void TdDestroyObjectReportChat (struct TdReportChat *var);
void TdStackStorerReportChat (struct TdReportChat *var, struct TdStackStorerMethods *M);
struct TdReportChat *TdStackFetcherReportChat (struct TdStackFetcherMethods *M);
struct TdReportSupergroupSpam {
  int ID;
  int refcnt;
  int supergroup_id_;
  int user_id_;
  struct TdVectorLong *message_ids_;
};
struct TdReportSupergroupSpam *TdCreateObjectReportSupergroupSpam (int supergroup_id_, int user_id_, struct TdVectorLong *message_ids_);
char *TdSerializeReportSupergroupSpam (struct TdReportSupergroupSpam *var);
void TdDestroyObjectReportSupergroupSpam (struct TdReportSupergroupSpam *var);
void TdStackStorerReportSupergroupSpam (struct TdReportSupergroupSpam *var, struct TdStackStorerMethods *M);
struct TdReportSupergroupSpam *TdStackFetcherReportSupergroupSpam (struct TdStackFetcherMethods *M);
struct TdRequestAuthenticationPasswordRecovery {
  int ID;
  int refcnt;
};
struct TdRequestAuthenticationPasswordRecovery *TdCreateObjectRequestAuthenticationPasswordRecovery (void);
char *TdSerializeRequestAuthenticationPasswordRecovery (struct TdRequestAuthenticationPasswordRecovery *var);
void TdDestroyObjectRequestAuthenticationPasswordRecovery (struct TdRequestAuthenticationPasswordRecovery *var);
void TdStackStorerRequestAuthenticationPasswordRecovery (struct TdRequestAuthenticationPasswordRecovery *var, struct TdStackStorerMethods *M);
struct TdRequestAuthenticationPasswordRecovery *TdStackFetcherRequestAuthenticationPasswordRecovery (struct TdStackFetcherMethods *M);
struct TdRequestPasswordRecovery {
  int ID;
  int refcnt;
};
struct TdRequestPasswordRecovery *TdCreateObjectRequestPasswordRecovery (void);
char *TdSerializeRequestPasswordRecovery (struct TdRequestPasswordRecovery *var);
void TdDestroyObjectRequestPasswordRecovery (struct TdRequestPasswordRecovery *var);
void TdStackStorerRequestPasswordRecovery (struct TdRequestPasswordRecovery *var, struct TdStackStorerMethods *M);
struct TdRequestPasswordRecovery *TdStackFetcherRequestPasswordRecovery (struct TdStackFetcherMethods *M);
struct TdResendAuthenticationCode {
  int ID;
  int refcnt;
};
struct TdResendAuthenticationCode *TdCreateObjectResendAuthenticationCode (void);
char *TdSerializeResendAuthenticationCode (struct TdResendAuthenticationCode *var);
void TdDestroyObjectResendAuthenticationCode (struct TdResendAuthenticationCode *var);
void TdStackStorerResendAuthenticationCode (struct TdResendAuthenticationCode *var, struct TdStackStorerMethods *M);
struct TdResendAuthenticationCode *TdStackFetcherResendAuthenticationCode (struct TdStackFetcherMethods *M);
struct TdResendChangePhoneNumberCode {
  int ID;
  int refcnt;
};
struct TdResendChangePhoneNumberCode *TdCreateObjectResendChangePhoneNumberCode (void);
char *TdSerializeResendChangePhoneNumberCode (struct TdResendChangePhoneNumberCode *var);
void TdDestroyObjectResendChangePhoneNumberCode (struct TdResendChangePhoneNumberCode *var);
void TdStackStorerResendChangePhoneNumberCode (struct TdResendChangePhoneNumberCode *var, struct TdStackStorerMethods *M);
struct TdResendChangePhoneNumberCode *TdStackFetcherResendChangePhoneNumberCode (struct TdStackFetcherMethods *M);
struct TdResendEmailAddressVerificationCode {
  int ID;
  int refcnt;
};
struct TdResendEmailAddressVerificationCode *TdCreateObjectResendEmailAddressVerificationCode (void);
char *TdSerializeResendEmailAddressVerificationCode (struct TdResendEmailAddressVerificationCode *var);
void TdDestroyObjectResendEmailAddressVerificationCode (struct TdResendEmailAddressVerificationCode *var);
void TdStackStorerResendEmailAddressVerificationCode (struct TdResendEmailAddressVerificationCode *var, struct TdStackStorerMethods *M);
struct TdResendEmailAddressVerificationCode *TdStackFetcherResendEmailAddressVerificationCode (struct TdStackFetcherMethods *M);
struct TdResendPhoneNumberConfirmationCode {
  int ID;
  int refcnt;
};
struct TdResendPhoneNumberConfirmationCode *TdCreateObjectResendPhoneNumberConfirmationCode (void);
char *TdSerializeResendPhoneNumberConfirmationCode (struct TdResendPhoneNumberConfirmationCode *var);
void TdDestroyObjectResendPhoneNumberConfirmationCode (struct TdResendPhoneNumberConfirmationCode *var);
void TdStackStorerResendPhoneNumberConfirmationCode (struct TdResendPhoneNumberConfirmationCode *var, struct TdStackStorerMethods *M);
struct TdResendPhoneNumberConfirmationCode *TdStackFetcherResendPhoneNumberConfirmationCode (struct TdStackFetcherMethods *M);
struct TdResendPhoneNumberVerificationCode {
  int ID;
  int refcnt;
};
struct TdResendPhoneNumberVerificationCode *TdCreateObjectResendPhoneNumberVerificationCode (void);
char *TdSerializeResendPhoneNumberVerificationCode (struct TdResendPhoneNumberVerificationCode *var);
void TdDestroyObjectResendPhoneNumberVerificationCode (struct TdResendPhoneNumberVerificationCode *var);
void TdStackStorerResendPhoneNumberVerificationCode (struct TdResendPhoneNumberVerificationCode *var, struct TdStackStorerMethods *M);
struct TdResendPhoneNumberVerificationCode *TdStackFetcherResendPhoneNumberVerificationCode (struct TdStackFetcherMethods *M);
struct TdResetAllNotificationSettings {
  int ID;
  int refcnt;
};
struct TdResetAllNotificationSettings *TdCreateObjectResetAllNotificationSettings (void);
char *TdSerializeResetAllNotificationSettings (struct TdResetAllNotificationSettings *var);
void TdDestroyObjectResetAllNotificationSettings (struct TdResetAllNotificationSettings *var);
void TdStackStorerResetAllNotificationSettings (struct TdResetAllNotificationSettings *var, struct TdStackStorerMethods *M);
struct TdResetAllNotificationSettings *TdStackFetcherResetAllNotificationSettings (struct TdStackFetcherMethods *M);
struct TdResetNetworkStatistics {
  int ID;
  int refcnt;
};
struct TdResetNetworkStatistics *TdCreateObjectResetNetworkStatistics (void);
char *TdSerializeResetNetworkStatistics (struct TdResetNetworkStatistics *var);
void TdDestroyObjectResetNetworkStatistics (struct TdResetNetworkStatistics *var);
void TdStackStorerResetNetworkStatistics (struct TdResetNetworkStatistics *var, struct TdStackStorerMethods *M);
struct TdResetNetworkStatistics *TdStackFetcherResetNetworkStatistics (struct TdStackFetcherMethods *M);
struct TdSearchCallMessages {
  int ID;
  int refcnt;
  long long from_message_id_;
  int limit_;
  int only_missed_;
};
struct TdSearchCallMessages *TdCreateObjectSearchCallMessages (long long from_message_id_, int limit_, int only_missed_);
char *TdSerializeSearchCallMessages (struct TdSearchCallMessages *var);
void TdDestroyObjectSearchCallMessages (struct TdSearchCallMessages *var);
void TdStackStorerSearchCallMessages (struct TdSearchCallMessages *var, struct TdStackStorerMethods *M);
struct TdSearchCallMessages *TdStackFetcherSearchCallMessages (struct TdStackFetcherMethods *M);
struct TdSearchChatMembers {
  int ID;
  int refcnt;
  long long chat_id_;
  char *query_;
  int limit_;
  struct TdChatMembersFilter *filter_;
};
struct TdSearchChatMembers *TdCreateObjectSearchChatMembers (long long chat_id_, char *query_, int limit_, struct TdChatMembersFilter *filter_);
char *TdSerializeSearchChatMembers (struct TdSearchChatMembers *var);
void TdDestroyObjectSearchChatMembers (struct TdSearchChatMembers *var);
void TdStackStorerSearchChatMembers (struct TdSearchChatMembers *var, struct TdStackStorerMethods *M);
struct TdSearchChatMembers *TdStackFetcherSearchChatMembers (struct TdStackFetcherMethods *M);
struct TdSearchChatMessages {
  int ID;
  int refcnt;
  long long chat_id_;
  char *query_;
  int sender_user_id_;
  long long from_message_id_;
  int offset_;
  int limit_;
  struct TdSearchMessagesFilter *filter_;
};
struct TdSearchChatMessages *TdCreateObjectSearchChatMessages (long long chat_id_, char *query_, int sender_user_id_, long long from_message_id_, int offset_, int limit_, struct TdSearchMessagesFilter *filter_);
char *TdSerializeSearchChatMessages (struct TdSearchChatMessages *var);
void TdDestroyObjectSearchChatMessages (struct TdSearchChatMessages *var);
void TdStackStorerSearchChatMessages (struct TdSearchChatMessages *var, struct TdStackStorerMethods *M);
struct TdSearchChatMessages *TdStackFetcherSearchChatMessages (struct TdStackFetcherMethods *M);
struct TdSearchChatRecentLocationMessages {
  int ID;
  int refcnt;
  long long chat_id_;
  int limit_;
};
struct TdSearchChatRecentLocationMessages *TdCreateObjectSearchChatRecentLocationMessages (long long chat_id_, int limit_);
char *TdSerializeSearchChatRecentLocationMessages (struct TdSearchChatRecentLocationMessages *var);
void TdDestroyObjectSearchChatRecentLocationMessages (struct TdSearchChatRecentLocationMessages *var);
void TdStackStorerSearchChatRecentLocationMessages (struct TdSearchChatRecentLocationMessages *var, struct TdStackStorerMethods *M);
struct TdSearchChatRecentLocationMessages *TdStackFetcherSearchChatRecentLocationMessages (struct TdStackFetcherMethods *M);
struct TdSearchChats {
  int ID;
  int refcnt;
  char *query_;
  int limit_;
};
struct TdSearchChats *TdCreateObjectSearchChats (char *query_, int limit_);
char *TdSerializeSearchChats (struct TdSearchChats *var);
void TdDestroyObjectSearchChats (struct TdSearchChats *var);
void TdStackStorerSearchChats (struct TdSearchChats *var, struct TdStackStorerMethods *M);
struct TdSearchChats *TdStackFetcherSearchChats (struct TdStackFetcherMethods *M);
struct TdSearchChatsOnServer {
  int ID;
  int refcnt;
  char *query_;
  int limit_;
};
struct TdSearchChatsOnServer *TdCreateObjectSearchChatsOnServer (char *query_, int limit_);
char *TdSerializeSearchChatsOnServer (struct TdSearchChatsOnServer *var);
void TdDestroyObjectSearchChatsOnServer (struct TdSearchChatsOnServer *var);
void TdStackStorerSearchChatsOnServer (struct TdSearchChatsOnServer *var, struct TdStackStorerMethods *M);
struct TdSearchChatsOnServer *TdStackFetcherSearchChatsOnServer (struct TdStackFetcherMethods *M);
struct TdSearchContacts {
  int ID;
  int refcnt;
  char *query_;
  int limit_;
};
struct TdSearchContacts *TdCreateObjectSearchContacts (char *query_, int limit_);
char *TdSerializeSearchContacts (struct TdSearchContacts *var);
void TdDestroyObjectSearchContacts (struct TdSearchContacts *var);
void TdStackStorerSearchContacts (struct TdSearchContacts *var, struct TdStackStorerMethods *M);
struct TdSearchContacts *TdStackFetcherSearchContacts (struct TdStackFetcherMethods *M);
struct TdSearchHashtags {
  int ID;
  int refcnt;
  char *prefix_;
  int limit_;
};
struct TdSearchHashtags *TdCreateObjectSearchHashtags (char *prefix_, int limit_);
char *TdSerializeSearchHashtags (struct TdSearchHashtags *var);
void TdDestroyObjectSearchHashtags (struct TdSearchHashtags *var);
void TdStackStorerSearchHashtags (struct TdSearchHashtags *var, struct TdStackStorerMethods *M);
struct TdSearchHashtags *TdStackFetcherSearchHashtags (struct TdStackFetcherMethods *M);
struct TdSearchInstalledStickerSets {
  int ID;
  int refcnt;
  int is_masks_;
  char *query_;
  int limit_;
};
struct TdSearchInstalledStickerSets *TdCreateObjectSearchInstalledStickerSets (int is_masks_, char *query_, int limit_);
char *TdSerializeSearchInstalledStickerSets (struct TdSearchInstalledStickerSets *var);
void TdDestroyObjectSearchInstalledStickerSets (struct TdSearchInstalledStickerSets *var);
void TdStackStorerSearchInstalledStickerSets (struct TdSearchInstalledStickerSets *var, struct TdStackStorerMethods *M);
struct TdSearchInstalledStickerSets *TdStackFetcherSearchInstalledStickerSets (struct TdStackFetcherMethods *M);
struct TdSearchMessages {
  int ID;
  int refcnt;
  char *query_;
  int offset_date_;
  long long offset_chat_id_;
  long long offset_message_id_;
  int limit_;
};
struct TdSearchMessages *TdCreateObjectSearchMessages (char *query_, int offset_date_, long long offset_chat_id_, long long offset_message_id_, int limit_);
char *TdSerializeSearchMessages (struct TdSearchMessages *var);
void TdDestroyObjectSearchMessages (struct TdSearchMessages *var);
void TdStackStorerSearchMessages (struct TdSearchMessages *var, struct TdStackStorerMethods *M);
struct TdSearchMessages *TdStackFetcherSearchMessages (struct TdStackFetcherMethods *M);
struct TdSearchPublicChat {
  int ID;
  int refcnt;
  char *username_;
};
struct TdSearchPublicChat *TdCreateObjectSearchPublicChat (char *username_);
char *TdSerializeSearchPublicChat (struct TdSearchPublicChat *var);
void TdDestroyObjectSearchPublicChat (struct TdSearchPublicChat *var);
void TdStackStorerSearchPublicChat (struct TdSearchPublicChat *var, struct TdStackStorerMethods *M);
struct TdSearchPublicChat *TdStackFetcherSearchPublicChat (struct TdStackFetcherMethods *M);
struct TdSearchPublicChats {
  int ID;
  int refcnt;
  char *query_;
};
struct TdSearchPublicChats *TdCreateObjectSearchPublicChats (char *query_);
char *TdSerializeSearchPublicChats (struct TdSearchPublicChats *var);
void TdDestroyObjectSearchPublicChats (struct TdSearchPublicChats *var);
void TdStackStorerSearchPublicChats (struct TdSearchPublicChats *var, struct TdStackStorerMethods *M);
struct TdSearchPublicChats *TdStackFetcherSearchPublicChats (struct TdStackFetcherMethods *M);
struct TdSearchSecretMessages {
  int ID;
  int refcnt;
  long long chat_id_;
  char *query_;
  long long from_search_id_;
  int limit_;
  struct TdSearchMessagesFilter *filter_;
};
struct TdSearchSecretMessages *TdCreateObjectSearchSecretMessages (long long chat_id_, char *query_, long long from_search_id_, int limit_, struct TdSearchMessagesFilter *filter_);
char *TdSerializeSearchSecretMessages (struct TdSearchSecretMessages *var);
void TdDestroyObjectSearchSecretMessages (struct TdSearchSecretMessages *var);
void TdStackStorerSearchSecretMessages (struct TdSearchSecretMessages *var, struct TdStackStorerMethods *M);
struct TdSearchSecretMessages *TdStackFetcherSearchSecretMessages (struct TdStackFetcherMethods *M);
struct TdSearchStickerSet {
  int ID;
  int refcnt;
  char *name_;
};
struct TdSearchStickerSet *TdCreateObjectSearchStickerSet (char *name_);
char *TdSerializeSearchStickerSet (struct TdSearchStickerSet *var);
void TdDestroyObjectSearchStickerSet (struct TdSearchStickerSet *var);
void TdStackStorerSearchStickerSet (struct TdSearchStickerSet *var, struct TdStackStorerMethods *M);
struct TdSearchStickerSet *TdStackFetcherSearchStickerSet (struct TdStackFetcherMethods *M);
struct TdSearchStickerSets {
  int ID;
  int refcnt;
  char *query_;
};
struct TdSearchStickerSets *TdCreateObjectSearchStickerSets (char *query_);
char *TdSerializeSearchStickerSets (struct TdSearchStickerSets *var);
void TdDestroyObjectSearchStickerSets (struct TdSearchStickerSets *var);
void TdStackStorerSearchStickerSets (struct TdSearchStickerSets *var, struct TdStackStorerMethods *M);
struct TdSearchStickerSets *TdStackFetcherSearchStickerSets (struct TdStackFetcherMethods *M);
struct TdSearchStickers {
  int ID;
  int refcnt;
  char *emoji_;
  int limit_;
};
struct TdSearchStickers *TdCreateObjectSearchStickers (char *emoji_, int limit_);
char *TdSerializeSearchStickers (struct TdSearchStickers *var);
void TdDestroyObjectSearchStickers (struct TdSearchStickers *var);
void TdStackStorerSearchStickers (struct TdSearchStickers *var, struct TdStackStorerMethods *M);
struct TdSearchStickers *TdStackFetcherSearchStickers (struct TdStackFetcherMethods *M);
struct TdSendBotStartMessage {
  int ID;
  int refcnt;
  int bot_user_id_;
  long long chat_id_;
  char *parameter_;
};
struct TdSendBotStartMessage *TdCreateObjectSendBotStartMessage (int bot_user_id_, long long chat_id_, char *parameter_);
char *TdSerializeSendBotStartMessage (struct TdSendBotStartMessage *var);
void TdDestroyObjectSendBotStartMessage (struct TdSendBotStartMessage *var);
void TdStackStorerSendBotStartMessage (struct TdSendBotStartMessage *var, struct TdStackStorerMethods *M);
struct TdSendBotStartMessage *TdStackFetcherSendBotStartMessage (struct TdStackFetcherMethods *M);
struct TdSendCallDebugInformation {
  int ID;
  int refcnt;
  int call_id_;
  char *debug_information_;
};
struct TdSendCallDebugInformation *TdCreateObjectSendCallDebugInformation (int call_id_, char *debug_information_);
char *TdSerializeSendCallDebugInformation (struct TdSendCallDebugInformation *var);
void TdDestroyObjectSendCallDebugInformation (struct TdSendCallDebugInformation *var);
void TdStackStorerSendCallDebugInformation (struct TdSendCallDebugInformation *var, struct TdStackStorerMethods *M);
struct TdSendCallDebugInformation *TdStackFetcherSendCallDebugInformation (struct TdStackFetcherMethods *M);
struct TdSendCallRating {
  int ID;
  int refcnt;
  int call_id_;
  int rating_;
  char *comment_;
};
struct TdSendCallRating *TdCreateObjectSendCallRating (int call_id_, int rating_, char *comment_);
char *TdSerializeSendCallRating (struct TdSendCallRating *var);
void TdDestroyObjectSendCallRating (struct TdSendCallRating *var);
void TdStackStorerSendCallRating (struct TdSendCallRating *var, struct TdStackStorerMethods *M);
struct TdSendCallRating *TdStackFetcherSendCallRating (struct TdStackFetcherMethods *M);
struct TdSendChatAction {
  int ID;
  int refcnt;
  long long chat_id_;
  struct TdChatAction *action_;
};
struct TdSendChatAction *TdCreateObjectSendChatAction (long long chat_id_, struct TdChatAction *action_);
char *TdSerializeSendChatAction (struct TdSendChatAction *var);
void TdDestroyObjectSendChatAction (struct TdSendChatAction *var);
void TdStackStorerSendChatAction (struct TdSendChatAction *var, struct TdStackStorerMethods *M);
struct TdSendChatAction *TdStackFetcherSendChatAction (struct TdStackFetcherMethods *M);
struct TdSendChatScreenshotTakenNotification {
  int ID;
  int refcnt;
  long long chat_id_;
};
struct TdSendChatScreenshotTakenNotification *TdCreateObjectSendChatScreenshotTakenNotification (long long chat_id_);
char *TdSerializeSendChatScreenshotTakenNotification (struct TdSendChatScreenshotTakenNotification *var);
void TdDestroyObjectSendChatScreenshotTakenNotification (struct TdSendChatScreenshotTakenNotification *var);
void TdStackStorerSendChatScreenshotTakenNotification (struct TdSendChatScreenshotTakenNotification *var, struct TdStackStorerMethods *M);
struct TdSendChatScreenshotTakenNotification *TdStackFetcherSendChatScreenshotTakenNotification (struct TdStackFetcherMethods *M);
struct TdSendChatSetTtlMessage {
  int ID;
  int refcnt;
  long long chat_id_;
  int ttl_;
};
struct TdSendChatSetTtlMessage *TdCreateObjectSendChatSetTtlMessage (long long chat_id_, int ttl_);
char *TdSerializeSendChatSetTtlMessage (struct TdSendChatSetTtlMessage *var);
void TdDestroyObjectSendChatSetTtlMessage (struct TdSendChatSetTtlMessage *var);
void TdStackStorerSendChatSetTtlMessage (struct TdSendChatSetTtlMessage *var, struct TdStackStorerMethods *M);
struct TdSendChatSetTtlMessage *TdStackFetcherSendChatSetTtlMessage (struct TdStackFetcherMethods *M);
struct TdSendCustomRequest {
  int ID;
  int refcnt;
  char *method_;
  char *parameters_;
};
struct TdSendCustomRequest *TdCreateObjectSendCustomRequest (char *method_, char *parameters_);
char *TdSerializeSendCustomRequest (struct TdSendCustomRequest *var);
void TdDestroyObjectSendCustomRequest (struct TdSendCustomRequest *var);
void TdStackStorerSendCustomRequest (struct TdSendCustomRequest *var, struct TdStackStorerMethods *M);
struct TdSendCustomRequest *TdStackFetcherSendCustomRequest (struct TdStackFetcherMethods *M);
struct TdSendEmailAddressVerificationCode {
  int ID;
  int refcnt;
  char *email_address_;
};
struct TdSendEmailAddressVerificationCode *TdCreateObjectSendEmailAddressVerificationCode (char *email_address_);
char *TdSerializeSendEmailAddressVerificationCode (struct TdSendEmailAddressVerificationCode *var);
void TdDestroyObjectSendEmailAddressVerificationCode (struct TdSendEmailAddressVerificationCode *var);
void TdStackStorerSendEmailAddressVerificationCode (struct TdSendEmailAddressVerificationCode *var, struct TdStackStorerMethods *M);
struct TdSendEmailAddressVerificationCode *TdStackFetcherSendEmailAddressVerificationCode (struct TdStackFetcherMethods *M);
struct TdSendInlineQueryResultMessage {
  int ID;
  int refcnt;
  long long chat_id_;
  long long reply_to_message_id_;
  int disable_notification_;
  int from_background_;
  long long query_id_;
  char *result_id_;
};
struct TdSendInlineQueryResultMessage *TdCreateObjectSendInlineQueryResultMessage (long long chat_id_, long long reply_to_message_id_, int disable_notification_, int from_background_, long long query_id_, char *result_id_);
char *TdSerializeSendInlineQueryResultMessage (struct TdSendInlineQueryResultMessage *var);
void TdDestroyObjectSendInlineQueryResultMessage (struct TdSendInlineQueryResultMessage *var);
void TdStackStorerSendInlineQueryResultMessage (struct TdSendInlineQueryResultMessage *var, struct TdStackStorerMethods *M);
struct TdSendInlineQueryResultMessage *TdStackFetcherSendInlineQueryResultMessage (struct TdStackFetcherMethods *M);
struct TdSendMessage {
  int ID;
  int refcnt;
  long long chat_id_;
  long long reply_to_message_id_;
  int disable_notification_;
  int from_background_;
  struct TdReplyMarkup *reply_markup_;
  struct TdInputMessageContent *input_message_content_;
};
struct TdSendMessage *TdCreateObjectSendMessage (long long chat_id_, long long reply_to_message_id_, int disable_notification_, int from_background_, struct TdReplyMarkup *reply_markup_, struct TdInputMessageContent *input_message_content_);
char *TdSerializeSendMessage (struct TdSendMessage *var);
void TdDestroyObjectSendMessage (struct TdSendMessage *var);
void TdStackStorerSendMessage (struct TdSendMessage *var, struct TdStackStorerMethods *M);
struct TdSendMessage *TdStackFetcherSendMessage (struct TdStackFetcherMethods *M);
struct TdSendMessageAlbum {
  int ID;
  int refcnt;
  long long chat_id_;
  long long reply_to_message_id_;
  int disable_notification_;
  int from_background_;
  struct TdVectorInputMessageContent *input_message_contents_;
};
struct TdSendMessageAlbum *TdCreateObjectSendMessageAlbum (long long chat_id_, long long reply_to_message_id_, int disable_notification_, int from_background_, struct TdVectorInputMessageContent *input_message_contents_);
char *TdSerializeSendMessageAlbum (struct TdSendMessageAlbum *var);
void TdDestroyObjectSendMessageAlbum (struct TdSendMessageAlbum *var);
void TdStackStorerSendMessageAlbum (struct TdSendMessageAlbum *var, struct TdStackStorerMethods *M);
struct TdSendMessageAlbum *TdStackFetcherSendMessageAlbum (struct TdStackFetcherMethods *M);
struct TdSendPassportAuthorizationForm {
  int ID;
  int refcnt;
  int autorization_form_id_;
  struct TdVectorPassportElementType *types_;
};
struct TdSendPassportAuthorizationForm *TdCreateObjectSendPassportAuthorizationForm (int autorization_form_id_, struct TdVectorPassportElementType *types_);
char *TdSerializeSendPassportAuthorizationForm (struct TdSendPassportAuthorizationForm *var);
void TdDestroyObjectSendPassportAuthorizationForm (struct TdSendPassportAuthorizationForm *var);
void TdStackStorerSendPassportAuthorizationForm (struct TdSendPassportAuthorizationForm *var, struct TdStackStorerMethods *M);
struct TdSendPassportAuthorizationForm *TdStackFetcherSendPassportAuthorizationForm (struct TdStackFetcherMethods *M);
struct TdSendPaymentForm {
  int ID;
  int refcnt;
  long long chat_id_;
  long long message_id_;
  char *order_info_id_;
  char *shipping_option_id_;
  struct TdInputCredentials *credentials_;
};
struct TdSendPaymentForm *TdCreateObjectSendPaymentForm (long long chat_id_, long long message_id_, char *order_info_id_, char *shipping_option_id_, struct TdInputCredentials *credentials_);
char *TdSerializeSendPaymentForm (struct TdSendPaymentForm *var);
void TdDestroyObjectSendPaymentForm (struct TdSendPaymentForm *var);
void TdStackStorerSendPaymentForm (struct TdSendPaymentForm *var, struct TdStackStorerMethods *M);
struct TdSendPaymentForm *TdStackFetcherSendPaymentForm (struct TdStackFetcherMethods *M);
struct TdSendPhoneNumberConfirmationCode {
  int ID;
  int refcnt;
  char *hash_;
  char *phone_number_;
  int allow_flash_call_;
  int is_current_phone_number_;
};
struct TdSendPhoneNumberConfirmationCode *TdCreateObjectSendPhoneNumberConfirmationCode (char *hash_, char *phone_number_, int allow_flash_call_, int is_current_phone_number_);
char *TdSerializeSendPhoneNumberConfirmationCode (struct TdSendPhoneNumberConfirmationCode *var);
void TdDestroyObjectSendPhoneNumberConfirmationCode (struct TdSendPhoneNumberConfirmationCode *var);
void TdStackStorerSendPhoneNumberConfirmationCode (struct TdSendPhoneNumberConfirmationCode *var, struct TdStackStorerMethods *M);
struct TdSendPhoneNumberConfirmationCode *TdStackFetcherSendPhoneNumberConfirmationCode (struct TdStackFetcherMethods *M);
struct TdSendPhoneNumberVerificationCode {
  int ID;
  int refcnt;
  char *phone_number_;
  int allow_flash_call_;
  int is_current_phone_number_;
};
struct TdSendPhoneNumberVerificationCode *TdCreateObjectSendPhoneNumberVerificationCode (char *phone_number_, int allow_flash_call_, int is_current_phone_number_);
char *TdSerializeSendPhoneNumberVerificationCode (struct TdSendPhoneNumberVerificationCode *var);
void TdDestroyObjectSendPhoneNumberVerificationCode (struct TdSendPhoneNumberVerificationCode *var);
void TdStackStorerSendPhoneNumberVerificationCode (struct TdSendPhoneNumberVerificationCode *var, struct TdStackStorerMethods *M);
struct TdSendPhoneNumberVerificationCode *TdStackFetcherSendPhoneNumberVerificationCode (struct TdStackFetcherMethods *M);
struct TdSetAccountTtl {
  int ID;
  int refcnt;
  struct TdAccountTtl *ttl_;
};
struct TdSetAccountTtl *TdCreateObjectSetAccountTtl (struct TdAccountTtl *ttl_);
char *TdSerializeSetAccountTtl (struct TdSetAccountTtl *var);
void TdDestroyObjectSetAccountTtl (struct TdSetAccountTtl *var);
void TdStackStorerSetAccountTtl (struct TdSetAccountTtl *var, struct TdStackStorerMethods *M);
struct TdSetAccountTtl *TdStackFetcherSetAccountTtl (struct TdStackFetcherMethods *M);
struct TdSetAlarm {
  int ID;
  int refcnt;
  double seconds_;
};
struct TdSetAlarm *TdCreateObjectSetAlarm (double seconds_);
char *TdSerializeSetAlarm (struct TdSetAlarm *var);
void TdDestroyObjectSetAlarm (struct TdSetAlarm *var);
void TdStackStorerSetAlarm (struct TdSetAlarm *var, struct TdStackStorerMethods *M);
struct TdSetAlarm *TdStackFetcherSetAlarm (struct TdStackFetcherMethods *M);
struct TdSetAuthenticationPhoneNumber {
  int ID;
  int refcnt;
  char *phone_number_;
  int allow_flash_call_;
  int is_current_phone_number_;
};
struct TdSetAuthenticationPhoneNumber *TdCreateObjectSetAuthenticationPhoneNumber (char *phone_number_, int allow_flash_call_, int is_current_phone_number_);
char *TdSerializeSetAuthenticationPhoneNumber (struct TdSetAuthenticationPhoneNumber *var);
void TdDestroyObjectSetAuthenticationPhoneNumber (struct TdSetAuthenticationPhoneNumber *var);
void TdStackStorerSetAuthenticationPhoneNumber (struct TdSetAuthenticationPhoneNumber *var, struct TdStackStorerMethods *M);
struct TdSetAuthenticationPhoneNumber *TdStackFetcherSetAuthenticationPhoneNumber (struct TdStackFetcherMethods *M);
struct TdSetBio {
  int ID;
  int refcnt;
  char *bio_;
};
struct TdSetBio *TdCreateObjectSetBio (char *bio_);
char *TdSerializeSetBio (struct TdSetBio *var);
void TdDestroyObjectSetBio (struct TdSetBio *var);
void TdStackStorerSetBio (struct TdSetBio *var, struct TdStackStorerMethods *M);
struct TdSetBio *TdStackFetcherSetBio (struct TdStackFetcherMethods *M);
struct TdSetBotUpdatesStatus {
  int ID;
  int refcnt;
  int pending_update_count_;
  char *error_message_;
};
struct TdSetBotUpdatesStatus *TdCreateObjectSetBotUpdatesStatus (int pending_update_count_, char *error_message_);
char *TdSerializeSetBotUpdatesStatus (struct TdSetBotUpdatesStatus *var);
void TdDestroyObjectSetBotUpdatesStatus (struct TdSetBotUpdatesStatus *var);
void TdStackStorerSetBotUpdatesStatus (struct TdSetBotUpdatesStatus *var, struct TdStackStorerMethods *M);
struct TdSetBotUpdatesStatus *TdStackFetcherSetBotUpdatesStatus (struct TdStackFetcherMethods *M);
struct TdSetChatClientData {
  int ID;
  int refcnt;
  long long chat_id_;
  char *client_data_;
};
struct TdSetChatClientData *TdCreateObjectSetChatClientData (long long chat_id_, char *client_data_);
char *TdSerializeSetChatClientData (struct TdSetChatClientData *var);
void TdDestroyObjectSetChatClientData (struct TdSetChatClientData *var);
void TdStackStorerSetChatClientData (struct TdSetChatClientData *var, struct TdStackStorerMethods *M);
struct TdSetChatClientData *TdStackFetcherSetChatClientData (struct TdStackFetcherMethods *M);
struct TdSetChatDraftMessage {
  int ID;
  int refcnt;
  long long chat_id_;
  struct TdDraftMessage *draft_message_;
};
struct TdSetChatDraftMessage *TdCreateObjectSetChatDraftMessage (long long chat_id_, struct TdDraftMessage *draft_message_);
char *TdSerializeSetChatDraftMessage (struct TdSetChatDraftMessage *var);
void TdDestroyObjectSetChatDraftMessage (struct TdSetChatDraftMessage *var);
void TdStackStorerSetChatDraftMessage (struct TdSetChatDraftMessage *var, struct TdStackStorerMethods *M);
struct TdSetChatDraftMessage *TdStackFetcherSetChatDraftMessage (struct TdStackFetcherMethods *M);
struct TdSetChatMemberStatus {
  int ID;
  int refcnt;
  long long chat_id_;
  int user_id_;
  struct TdChatMemberStatus *status_;
};
struct TdSetChatMemberStatus *TdCreateObjectSetChatMemberStatus (long long chat_id_, int user_id_, struct TdChatMemberStatus *status_);
char *TdSerializeSetChatMemberStatus (struct TdSetChatMemberStatus *var);
void TdDestroyObjectSetChatMemberStatus (struct TdSetChatMemberStatus *var);
void TdStackStorerSetChatMemberStatus (struct TdSetChatMemberStatus *var, struct TdStackStorerMethods *M);
struct TdSetChatMemberStatus *TdStackFetcherSetChatMemberStatus (struct TdStackFetcherMethods *M);
struct TdSetChatNotificationSettings {
  int ID;
  int refcnt;
  long long chat_id_;
  struct TdChatNotificationSettings *notification_settings_;
};
struct TdSetChatNotificationSettings *TdCreateObjectSetChatNotificationSettings (long long chat_id_, struct TdChatNotificationSettings *notification_settings_);
char *TdSerializeSetChatNotificationSettings (struct TdSetChatNotificationSettings *var);
void TdDestroyObjectSetChatNotificationSettings (struct TdSetChatNotificationSettings *var);
void TdStackStorerSetChatNotificationSettings (struct TdSetChatNotificationSettings *var, struct TdStackStorerMethods *M);
struct TdSetChatNotificationSettings *TdStackFetcherSetChatNotificationSettings (struct TdStackFetcherMethods *M);
struct TdSetChatPhoto {
  int ID;
  int refcnt;
  long long chat_id_;
  struct TdInputFile *photo_;
};
struct TdSetChatPhoto *TdCreateObjectSetChatPhoto (long long chat_id_, struct TdInputFile *photo_);
char *TdSerializeSetChatPhoto (struct TdSetChatPhoto *var);
void TdDestroyObjectSetChatPhoto (struct TdSetChatPhoto *var);
void TdStackStorerSetChatPhoto (struct TdSetChatPhoto *var, struct TdStackStorerMethods *M);
struct TdSetChatPhoto *TdStackFetcherSetChatPhoto (struct TdStackFetcherMethods *M);
struct TdSetChatTitle {
  int ID;
  int refcnt;
  long long chat_id_;
  char *title_;
};
struct TdSetChatTitle *TdCreateObjectSetChatTitle (long long chat_id_, char *title_);
char *TdSerializeSetChatTitle (struct TdSetChatTitle *var);
void TdDestroyObjectSetChatTitle (struct TdSetChatTitle *var);
void TdStackStorerSetChatTitle (struct TdSetChatTitle *var, struct TdStackStorerMethods *M);
struct TdSetChatTitle *TdStackFetcherSetChatTitle (struct TdStackFetcherMethods *M);
struct TdSetCustomLanguagePack {
  int ID;
  int refcnt;
  struct TdLanguagePackInfo *info_;
  struct TdVectorLanguagePackString *strings_;
};
struct TdSetCustomLanguagePack *TdCreateObjectSetCustomLanguagePack (struct TdLanguagePackInfo *info_, struct TdVectorLanguagePackString *strings_);
char *TdSerializeSetCustomLanguagePack (struct TdSetCustomLanguagePack *var);
void TdDestroyObjectSetCustomLanguagePack (struct TdSetCustomLanguagePack *var);
void TdStackStorerSetCustomLanguagePack (struct TdSetCustomLanguagePack *var, struct TdStackStorerMethods *M);
struct TdSetCustomLanguagePack *TdStackFetcherSetCustomLanguagePack (struct TdStackFetcherMethods *M);
struct TdSetCustomLanguagePackString {
  int ID;
  int refcnt;
  char *language_pack_id_;
  struct TdLanguagePackString *new_string_;
};
struct TdSetCustomLanguagePackString *TdCreateObjectSetCustomLanguagePackString (char *language_pack_id_, struct TdLanguagePackString *new_string_);
char *TdSerializeSetCustomLanguagePackString (struct TdSetCustomLanguagePackString *var);
void TdDestroyObjectSetCustomLanguagePackString (struct TdSetCustomLanguagePackString *var);
void TdStackStorerSetCustomLanguagePackString (struct TdSetCustomLanguagePackString *var, struct TdStackStorerMethods *M);
struct TdSetCustomLanguagePackString *TdStackFetcherSetCustomLanguagePackString (struct TdStackFetcherMethods *M);
struct TdSetDatabaseEncryptionKey {
  int ID;
  int refcnt;
  struct TdBytes new_encryption_key_;
};
struct TdSetDatabaseEncryptionKey *TdCreateObjectSetDatabaseEncryptionKey (struct TdBytes new_encryption_key_);
char *TdSerializeSetDatabaseEncryptionKey (struct TdSetDatabaseEncryptionKey *var);
void TdDestroyObjectSetDatabaseEncryptionKey (struct TdSetDatabaseEncryptionKey *var);
void TdStackStorerSetDatabaseEncryptionKey (struct TdSetDatabaseEncryptionKey *var, struct TdStackStorerMethods *M);
struct TdSetDatabaseEncryptionKey *TdStackFetcherSetDatabaseEncryptionKey (struct TdStackFetcherMethods *M);
struct TdSetFileGenerationProgress {
  int ID;
  int refcnt;
  long long generation_id_;
  int expected_size_;
  int local_prefix_size_;
};
struct TdSetFileGenerationProgress *TdCreateObjectSetFileGenerationProgress (long long generation_id_, int expected_size_, int local_prefix_size_);
char *TdSerializeSetFileGenerationProgress (struct TdSetFileGenerationProgress *var);
void TdDestroyObjectSetFileGenerationProgress (struct TdSetFileGenerationProgress *var);
void TdStackStorerSetFileGenerationProgress (struct TdSetFileGenerationProgress *var, struct TdStackStorerMethods *M);
struct TdSetFileGenerationProgress *TdStackFetcherSetFileGenerationProgress (struct TdStackFetcherMethods *M);
struct TdSetGameScore {
  int ID;
  int refcnt;
  long long chat_id_;
  long long message_id_;
  int edit_message_;
  int user_id_;
  int score_;
  int force_;
};
struct TdSetGameScore *TdCreateObjectSetGameScore (long long chat_id_, long long message_id_, int edit_message_, int user_id_, int score_, int force_);
char *TdSerializeSetGameScore (struct TdSetGameScore *var);
void TdDestroyObjectSetGameScore (struct TdSetGameScore *var);
void TdStackStorerSetGameScore (struct TdSetGameScore *var, struct TdStackStorerMethods *M);
struct TdSetGameScore *TdStackFetcherSetGameScore (struct TdStackFetcherMethods *M);
struct TdSetInlineGameScore {
  int ID;
  int refcnt;
  char *inline_message_id_;
  int edit_message_;
  int user_id_;
  int score_;
  int force_;
};
struct TdSetInlineGameScore *TdCreateObjectSetInlineGameScore (char *inline_message_id_, int edit_message_, int user_id_, int score_, int force_);
char *TdSerializeSetInlineGameScore (struct TdSetInlineGameScore *var);
void TdDestroyObjectSetInlineGameScore (struct TdSetInlineGameScore *var);
void TdStackStorerSetInlineGameScore (struct TdSetInlineGameScore *var, struct TdStackStorerMethods *M);
struct TdSetInlineGameScore *TdStackFetcherSetInlineGameScore (struct TdStackFetcherMethods *M);
struct TdSetName {
  int ID;
  int refcnt;
  char *first_name_;
  char *last_name_;
};
struct TdSetName *TdCreateObjectSetName (char *first_name_, char *last_name_);
char *TdSerializeSetName (struct TdSetName *var);
void TdDestroyObjectSetName (struct TdSetName *var);
void TdStackStorerSetName (struct TdSetName *var, struct TdStackStorerMethods *M);
struct TdSetName *TdStackFetcherSetName (struct TdStackFetcherMethods *M);
struct TdSetNetworkType {
  int ID;
  int refcnt;
  struct TdNetworkType *type_;
};
struct TdSetNetworkType *TdCreateObjectSetNetworkType (struct TdNetworkType *type_);
char *TdSerializeSetNetworkType (struct TdSetNetworkType *var);
void TdDestroyObjectSetNetworkType (struct TdSetNetworkType *var);
void TdStackStorerSetNetworkType (struct TdSetNetworkType *var, struct TdStackStorerMethods *M);
struct TdSetNetworkType *TdStackFetcherSetNetworkType (struct TdStackFetcherMethods *M);
struct TdSetOption {
  int ID;
  int refcnt;
  char *name_;
  struct TdOptionValue *value_;
};
struct TdSetOption *TdCreateObjectSetOption (char *name_, struct TdOptionValue *value_);
char *TdSerializeSetOption (struct TdSetOption *var);
void TdDestroyObjectSetOption (struct TdSetOption *var);
void TdStackStorerSetOption (struct TdSetOption *var, struct TdStackStorerMethods *M);
struct TdSetOption *TdStackFetcherSetOption (struct TdStackFetcherMethods *M);
struct TdSetPassportElement {
  int ID;
  int refcnt;
  struct TdInputPassportElement *element_;
  char *password_;
};
struct TdSetPassportElement *TdCreateObjectSetPassportElement (struct TdInputPassportElement *element_, char *password_);
char *TdSerializeSetPassportElement (struct TdSetPassportElement *var);
void TdDestroyObjectSetPassportElement (struct TdSetPassportElement *var);
void TdStackStorerSetPassportElement (struct TdSetPassportElement *var, struct TdStackStorerMethods *M);
struct TdSetPassportElement *TdStackFetcherSetPassportElement (struct TdStackFetcherMethods *M);
struct TdSetPassportElementErrors {
  int ID;
  int refcnt;
  int user_id_;
  struct TdVectorInputPassportElementError *errors_;
};
struct TdSetPassportElementErrors *TdCreateObjectSetPassportElementErrors (int user_id_, struct TdVectorInputPassportElementError *errors_);
char *TdSerializeSetPassportElementErrors (struct TdSetPassportElementErrors *var);
void TdDestroyObjectSetPassportElementErrors (struct TdSetPassportElementErrors *var);
void TdStackStorerSetPassportElementErrors (struct TdSetPassportElementErrors *var, struct TdStackStorerMethods *M);
struct TdSetPassportElementErrors *TdStackFetcherSetPassportElementErrors (struct TdStackFetcherMethods *M);
struct TdSetPassword {
  int ID;
  int refcnt;
  char *old_password_;
  char *new_password_;
  char *new_hint_;
  int set_recovery_email_address_;
  char *new_recovery_email_address_;
};
struct TdSetPassword *TdCreateObjectSetPassword (char *old_password_, char *new_password_, char *new_hint_, int set_recovery_email_address_, char *new_recovery_email_address_);
char *TdSerializeSetPassword (struct TdSetPassword *var);
void TdDestroyObjectSetPassword (struct TdSetPassword *var);
void TdStackStorerSetPassword (struct TdSetPassword *var, struct TdStackStorerMethods *M);
struct TdSetPassword *TdStackFetcherSetPassword (struct TdStackFetcherMethods *M);
struct TdSetPinnedChats {
  int ID;
  int refcnt;
  struct TdVectorLong *chat_ids_;
};
struct TdSetPinnedChats *TdCreateObjectSetPinnedChats (struct TdVectorLong *chat_ids_);
char *TdSerializeSetPinnedChats (struct TdSetPinnedChats *var);
void TdDestroyObjectSetPinnedChats (struct TdSetPinnedChats *var);
void TdStackStorerSetPinnedChats (struct TdSetPinnedChats *var, struct TdStackStorerMethods *M);
struct TdSetPinnedChats *TdStackFetcherSetPinnedChats (struct TdStackFetcherMethods *M);
struct TdSetProfilePhoto {
  int ID;
  int refcnt;
  struct TdInputFile *photo_;
};
struct TdSetProfilePhoto *TdCreateObjectSetProfilePhoto (struct TdInputFile *photo_);
char *TdSerializeSetProfilePhoto (struct TdSetProfilePhoto *var);
void TdDestroyObjectSetProfilePhoto (struct TdSetProfilePhoto *var);
void TdStackStorerSetProfilePhoto (struct TdSetProfilePhoto *var, struct TdStackStorerMethods *M);
struct TdSetProfilePhoto *TdStackFetcherSetProfilePhoto (struct TdStackFetcherMethods *M);
struct TdSetRecoveryEmailAddress {
  int ID;
  int refcnt;
  char *password_;
  char *new_recovery_email_address_;
};
struct TdSetRecoveryEmailAddress *TdCreateObjectSetRecoveryEmailAddress (char *password_, char *new_recovery_email_address_);
char *TdSerializeSetRecoveryEmailAddress (struct TdSetRecoveryEmailAddress *var);
void TdDestroyObjectSetRecoveryEmailAddress (struct TdSetRecoveryEmailAddress *var);
void TdStackStorerSetRecoveryEmailAddress (struct TdSetRecoveryEmailAddress *var, struct TdStackStorerMethods *M);
struct TdSetRecoveryEmailAddress *TdStackFetcherSetRecoveryEmailAddress (struct TdStackFetcherMethods *M);
struct TdSetScopeNotificationSettings {
  int ID;
  int refcnt;
  struct TdNotificationSettingsScope *scope_;
  struct TdScopeNotificationSettings *notification_settings_;
};
struct TdSetScopeNotificationSettings *TdCreateObjectSetScopeNotificationSettings (struct TdNotificationSettingsScope *scope_, struct TdScopeNotificationSettings *notification_settings_);
char *TdSerializeSetScopeNotificationSettings (struct TdSetScopeNotificationSettings *var);
void TdDestroyObjectSetScopeNotificationSettings (struct TdSetScopeNotificationSettings *var);
void TdStackStorerSetScopeNotificationSettings (struct TdSetScopeNotificationSettings *var, struct TdStackStorerMethods *M);
struct TdSetScopeNotificationSettings *TdStackFetcherSetScopeNotificationSettings (struct TdStackFetcherMethods *M);
struct TdSetStickerPositionInSet {
  int ID;
  int refcnt;
  struct TdInputFile *sticker_;
  int position_;
};
struct TdSetStickerPositionInSet *TdCreateObjectSetStickerPositionInSet (struct TdInputFile *sticker_, int position_);
char *TdSerializeSetStickerPositionInSet (struct TdSetStickerPositionInSet *var);
void TdDestroyObjectSetStickerPositionInSet (struct TdSetStickerPositionInSet *var);
void TdStackStorerSetStickerPositionInSet (struct TdSetStickerPositionInSet *var, struct TdStackStorerMethods *M);
struct TdSetStickerPositionInSet *TdStackFetcherSetStickerPositionInSet (struct TdStackFetcherMethods *M);
struct TdSetSupergroupDescription {
  int ID;
  int refcnt;
  int supergroup_id_;
  char *description_;
};
struct TdSetSupergroupDescription *TdCreateObjectSetSupergroupDescription (int supergroup_id_, char *description_);
char *TdSerializeSetSupergroupDescription (struct TdSetSupergroupDescription *var);
void TdDestroyObjectSetSupergroupDescription (struct TdSetSupergroupDescription *var);
void TdStackStorerSetSupergroupDescription (struct TdSetSupergroupDescription *var, struct TdStackStorerMethods *M);
struct TdSetSupergroupDescription *TdStackFetcherSetSupergroupDescription (struct TdStackFetcherMethods *M);
struct TdSetSupergroupStickerSet {
  int ID;
  int refcnt;
  int supergroup_id_;
  long long sticker_set_id_;
};
struct TdSetSupergroupStickerSet *TdCreateObjectSetSupergroupStickerSet (int supergroup_id_, long long sticker_set_id_);
char *TdSerializeSetSupergroupStickerSet (struct TdSetSupergroupStickerSet *var);
void TdDestroyObjectSetSupergroupStickerSet (struct TdSetSupergroupStickerSet *var);
void TdStackStorerSetSupergroupStickerSet (struct TdSetSupergroupStickerSet *var, struct TdStackStorerMethods *M);
struct TdSetSupergroupStickerSet *TdStackFetcherSetSupergroupStickerSet (struct TdStackFetcherMethods *M);
struct TdSetSupergroupUsername {
  int ID;
  int refcnt;
  int supergroup_id_;
  char *username_;
};
struct TdSetSupergroupUsername *TdCreateObjectSetSupergroupUsername (int supergroup_id_, char *username_);
char *TdSerializeSetSupergroupUsername (struct TdSetSupergroupUsername *var);
void TdDestroyObjectSetSupergroupUsername (struct TdSetSupergroupUsername *var);
void TdStackStorerSetSupergroupUsername (struct TdSetSupergroupUsername *var, struct TdStackStorerMethods *M);
struct TdSetSupergroupUsername *TdStackFetcherSetSupergroupUsername (struct TdStackFetcherMethods *M);
struct TdSetTdlibParameters {
  int ID;
  int refcnt;
  struct TdTdlibParameters *parameters_;
};
struct TdSetTdlibParameters *TdCreateObjectSetTdlibParameters (struct TdTdlibParameters *parameters_);
char *TdSerializeSetTdlibParameters (struct TdSetTdlibParameters *var);
void TdDestroyObjectSetTdlibParameters (struct TdSetTdlibParameters *var);
void TdStackStorerSetTdlibParameters (struct TdSetTdlibParameters *var, struct TdStackStorerMethods *M);
struct TdSetTdlibParameters *TdStackFetcherSetTdlibParameters (struct TdStackFetcherMethods *M);
struct TdSetUserPrivacySettingRules {
  int ID;
  int refcnt;
  struct TdUserPrivacySetting *setting_;
  struct TdUserPrivacySettingRules *rules_;
};
struct TdSetUserPrivacySettingRules *TdCreateObjectSetUserPrivacySettingRules (struct TdUserPrivacySetting *setting_, struct TdUserPrivacySettingRules *rules_);
char *TdSerializeSetUserPrivacySettingRules (struct TdSetUserPrivacySettingRules *var);
void TdDestroyObjectSetUserPrivacySettingRules (struct TdSetUserPrivacySettingRules *var);
void TdStackStorerSetUserPrivacySettingRules (struct TdSetUserPrivacySettingRules *var, struct TdStackStorerMethods *M);
struct TdSetUserPrivacySettingRules *TdStackFetcherSetUserPrivacySettingRules (struct TdStackFetcherMethods *M);
struct TdSetUsername {
  int ID;
  int refcnt;
  char *username_;
};
struct TdSetUsername *TdCreateObjectSetUsername (char *username_);
char *TdSerializeSetUsername (struct TdSetUsername *var);
void TdDestroyObjectSetUsername (struct TdSetUsername *var);
void TdStackStorerSetUsername (struct TdSetUsername *var, struct TdStackStorerMethods *M);
struct TdSetUsername *TdStackFetcherSetUsername (struct TdStackFetcherMethods *M);
struct TdTerminateAllOtherSessions {
  int ID;
  int refcnt;
};
struct TdTerminateAllOtherSessions *TdCreateObjectTerminateAllOtherSessions (void);
char *TdSerializeTerminateAllOtherSessions (struct TdTerminateAllOtherSessions *var);
void TdDestroyObjectTerminateAllOtherSessions (struct TdTerminateAllOtherSessions *var);
void TdStackStorerTerminateAllOtherSessions (struct TdTerminateAllOtherSessions *var, struct TdStackStorerMethods *M);
struct TdTerminateAllOtherSessions *TdStackFetcherTerminateAllOtherSessions (struct TdStackFetcherMethods *M);
struct TdTerminateSession {
  int ID;
  int refcnt;
  long long session_id_;
};
struct TdTerminateSession *TdCreateObjectTerminateSession (long long session_id_);
char *TdSerializeTerminateSession (struct TdTerminateSession *var);
void TdDestroyObjectTerminateSession (struct TdTerminateSession *var);
void TdStackStorerTerminateSession (struct TdTerminateSession *var, struct TdStackStorerMethods *M);
struct TdTerminateSession *TdStackFetcherTerminateSession (struct TdStackFetcherMethods *M);
struct TdTestCallBytes {
  int ID;
  int refcnt;
  struct TdBytes x_;
};
struct TdTestCallBytes *TdCreateObjectTestCallBytes (struct TdBytes x_);
char *TdSerializeTestCallBytes (struct TdTestCallBytes *var);
void TdDestroyObjectTestCallBytes (struct TdTestCallBytes *var);
void TdStackStorerTestCallBytes (struct TdTestCallBytes *var, struct TdStackStorerMethods *M);
struct TdTestCallBytes *TdStackFetcherTestCallBytes (struct TdStackFetcherMethods *M);
struct TdTestCallEmpty {
  int ID;
  int refcnt;
};
struct TdTestCallEmpty *TdCreateObjectTestCallEmpty (void);
char *TdSerializeTestCallEmpty (struct TdTestCallEmpty *var);
void TdDestroyObjectTestCallEmpty (struct TdTestCallEmpty *var);
void TdStackStorerTestCallEmpty (struct TdTestCallEmpty *var, struct TdStackStorerMethods *M);
struct TdTestCallEmpty *TdStackFetcherTestCallEmpty (struct TdStackFetcherMethods *M);
struct TdTestCallString {
  int ID;
  int refcnt;
  char *x_;
};
struct TdTestCallString *TdCreateObjectTestCallString (char *x_);
char *TdSerializeTestCallString (struct TdTestCallString *var);
void TdDestroyObjectTestCallString (struct TdTestCallString *var);
void TdStackStorerTestCallString (struct TdTestCallString *var, struct TdStackStorerMethods *M);
struct TdTestCallString *TdStackFetcherTestCallString (struct TdStackFetcherMethods *M);
struct TdTestCallVectorInt {
  int ID;
  int refcnt;
  struct TdVectorInt *x_;
};
struct TdTestCallVectorInt *TdCreateObjectTestCallVectorInt (struct TdVectorInt *x_);
char *TdSerializeTestCallVectorInt (struct TdTestCallVectorInt *var);
void TdDestroyObjectTestCallVectorInt (struct TdTestCallVectorInt *var);
void TdStackStorerTestCallVectorInt (struct TdTestCallVectorInt *var, struct TdStackStorerMethods *M);
struct TdTestCallVectorInt *TdStackFetcherTestCallVectorInt (struct TdStackFetcherMethods *M);
struct TdTestCallVectorIntObject {
  int ID;
  int refcnt;
  struct TdVectorTestInt *x_;
};
struct TdTestCallVectorIntObject *TdCreateObjectTestCallVectorIntObject (struct TdVectorTestInt *x_);
char *TdSerializeTestCallVectorIntObject (struct TdTestCallVectorIntObject *var);
void TdDestroyObjectTestCallVectorIntObject (struct TdTestCallVectorIntObject *var);
void TdStackStorerTestCallVectorIntObject (struct TdTestCallVectorIntObject *var, struct TdStackStorerMethods *M);
struct TdTestCallVectorIntObject *TdStackFetcherTestCallVectorIntObject (struct TdStackFetcherMethods *M);
struct TdTestCallVectorString {
  int ID;
  int refcnt;
  struct TdVectorString *x_;
};
struct TdTestCallVectorString *TdCreateObjectTestCallVectorString (struct TdVectorString *x_);
char *TdSerializeTestCallVectorString (struct TdTestCallVectorString *var);
void TdDestroyObjectTestCallVectorString (struct TdTestCallVectorString *var);
void TdStackStorerTestCallVectorString (struct TdTestCallVectorString *var, struct TdStackStorerMethods *M);
struct TdTestCallVectorString *TdStackFetcherTestCallVectorString (struct TdStackFetcherMethods *M);
struct TdTestCallVectorStringObject {
  int ID;
  int refcnt;
  struct TdVectorTestString *x_;
};
struct TdTestCallVectorStringObject *TdCreateObjectTestCallVectorStringObject (struct TdVectorTestString *x_);
char *TdSerializeTestCallVectorStringObject (struct TdTestCallVectorStringObject *var);
void TdDestroyObjectTestCallVectorStringObject (struct TdTestCallVectorStringObject *var);
void TdStackStorerTestCallVectorStringObject (struct TdTestCallVectorStringObject *var, struct TdStackStorerMethods *M);
struct TdTestCallVectorStringObject *TdStackFetcherTestCallVectorStringObject (struct TdStackFetcherMethods *M);
struct TdTestGetDifference {
  int ID;
  int refcnt;
};
struct TdTestGetDifference *TdCreateObjectTestGetDifference (void);
char *TdSerializeTestGetDifference (struct TdTestGetDifference *var);
void TdDestroyObjectTestGetDifference (struct TdTestGetDifference *var);
void TdStackStorerTestGetDifference (struct TdTestGetDifference *var, struct TdStackStorerMethods *M);
struct TdTestGetDifference *TdStackFetcherTestGetDifference (struct TdStackFetcherMethods *M);
struct TdTestNetwork {
  int ID;
  int refcnt;
};
struct TdTestNetwork *TdCreateObjectTestNetwork (void);
char *TdSerializeTestNetwork (struct TdTestNetwork *var);
void TdDestroyObjectTestNetwork (struct TdTestNetwork *var);
void TdStackStorerTestNetwork (struct TdTestNetwork *var, struct TdStackStorerMethods *M);
struct TdTestNetwork *TdStackFetcherTestNetwork (struct TdStackFetcherMethods *M);
struct TdTestSquareInt {
  int ID;
  int refcnt;
  int x_;
};
struct TdTestSquareInt *TdCreateObjectTestSquareInt (int x_);
char *TdSerializeTestSquareInt (struct TdTestSquareInt *var);
void TdDestroyObjectTestSquareInt (struct TdTestSquareInt *var);
void TdStackStorerTestSquareInt (struct TdTestSquareInt *var, struct TdStackStorerMethods *M);
struct TdTestSquareInt *TdStackFetcherTestSquareInt (struct TdStackFetcherMethods *M);
struct TdTestUseError {
  int ID;
  int refcnt;
};
struct TdTestUseError *TdCreateObjectTestUseError (void);
char *TdSerializeTestUseError (struct TdTestUseError *var);
void TdDestroyObjectTestUseError (struct TdTestUseError *var);
void TdStackStorerTestUseError (struct TdTestUseError *var, struct TdStackStorerMethods *M);
struct TdTestUseError *TdStackFetcherTestUseError (struct TdStackFetcherMethods *M);
struct TdTestUseUpdate {
  int ID;
  int refcnt;
};
struct TdTestUseUpdate *TdCreateObjectTestUseUpdate (void);
char *TdSerializeTestUseUpdate (struct TdTestUseUpdate *var);
void TdDestroyObjectTestUseUpdate (struct TdTestUseUpdate *var);
void TdStackStorerTestUseUpdate (struct TdTestUseUpdate *var, struct TdStackStorerMethods *M);
struct TdTestUseUpdate *TdStackFetcherTestUseUpdate (struct TdStackFetcherMethods *M);
struct TdToggleBasicGroupAdministrators {
  int ID;
  int refcnt;
  int basic_group_id_;
  int everyone_is_administrator_;
};
struct TdToggleBasicGroupAdministrators *TdCreateObjectToggleBasicGroupAdministrators (int basic_group_id_, int everyone_is_administrator_);
char *TdSerializeToggleBasicGroupAdministrators (struct TdToggleBasicGroupAdministrators *var);
void TdDestroyObjectToggleBasicGroupAdministrators (struct TdToggleBasicGroupAdministrators *var);
void TdStackStorerToggleBasicGroupAdministrators (struct TdToggleBasicGroupAdministrators *var, struct TdStackStorerMethods *M);
struct TdToggleBasicGroupAdministrators *TdStackFetcherToggleBasicGroupAdministrators (struct TdStackFetcherMethods *M);
struct TdToggleChatDefaultDisableNotification {
  int ID;
  int refcnt;
  long long chat_id_;
  int default_disable_notification_;
};
struct TdToggleChatDefaultDisableNotification *TdCreateObjectToggleChatDefaultDisableNotification (long long chat_id_, int default_disable_notification_);
char *TdSerializeToggleChatDefaultDisableNotification (struct TdToggleChatDefaultDisableNotification *var);
void TdDestroyObjectToggleChatDefaultDisableNotification (struct TdToggleChatDefaultDisableNotification *var);
void TdStackStorerToggleChatDefaultDisableNotification (struct TdToggleChatDefaultDisableNotification *var, struct TdStackStorerMethods *M);
struct TdToggleChatDefaultDisableNotification *TdStackFetcherToggleChatDefaultDisableNotification (struct TdStackFetcherMethods *M);
struct TdToggleChatIsMarkedAsUnread {
  int ID;
  int refcnt;
  long long chat_id_;
  int is_marked_as_unread_;
};
struct TdToggleChatIsMarkedAsUnread *TdCreateObjectToggleChatIsMarkedAsUnread (long long chat_id_, int is_marked_as_unread_);
char *TdSerializeToggleChatIsMarkedAsUnread (struct TdToggleChatIsMarkedAsUnread *var);
void TdDestroyObjectToggleChatIsMarkedAsUnread (struct TdToggleChatIsMarkedAsUnread *var);
void TdStackStorerToggleChatIsMarkedAsUnread (struct TdToggleChatIsMarkedAsUnread *var, struct TdStackStorerMethods *M);
struct TdToggleChatIsMarkedAsUnread *TdStackFetcherToggleChatIsMarkedAsUnread (struct TdStackFetcherMethods *M);
struct TdToggleChatIsPinned {
  int ID;
  int refcnt;
  long long chat_id_;
  int is_pinned_;
};
struct TdToggleChatIsPinned *TdCreateObjectToggleChatIsPinned (long long chat_id_, int is_pinned_);
char *TdSerializeToggleChatIsPinned (struct TdToggleChatIsPinned *var);
void TdDestroyObjectToggleChatIsPinned (struct TdToggleChatIsPinned *var);
void TdStackStorerToggleChatIsPinned (struct TdToggleChatIsPinned *var, struct TdStackStorerMethods *M);
struct TdToggleChatIsPinned *TdStackFetcherToggleChatIsPinned (struct TdStackFetcherMethods *M);
struct TdToggleSupergroupInvites {
  int ID;
  int refcnt;
  int supergroup_id_;
  int anyone_can_invite_;
};
struct TdToggleSupergroupInvites *TdCreateObjectToggleSupergroupInvites (int supergroup_id_, int anyone_can_invite_);
char *TdSerializeToggleSupergroupInvites (struct TdToggleSupergroupInvites *var);
void TdDestroyObjectToggleSupergroupInvites (struct TdToggleSupergroupInvites *var);
void TdStackStorerToggleSupergroupInvites (struct TdToggleSupergroupInvites *var, struct TdStackStorerMethods *M);
struct TdToggleSupergroupInvites *TdStackFetcherToggleSupergroupInvites (struct TdStackFetcherMethods *M);
struct TdToggleSupergroupIsAllHistoryAvailable {
  int ID;
  int refcnt;
  int supergroup_id_;
  int is_all_history_available_;
};
struct TdToggleSupergroupIsAllHistoryAvailable *TdCreateObjectToggleSupergroupIsAllHistoryAvailable (int supergroup_id_, int is_all_history_available_);
char *TdSerializeToggleSupergroupIsAllHistoryAvailable (struct TdToggleSupergroupIsAllHistoryAvailable *var);
void TdDestroyObjectToggleSupergroupIsAllHistoryAvailable (struct TdToggleSupergroupIsAllHistoryAvailable *var);
void TdStackStorerToggleSupergroupIsAllHistoryAvailable (struct TdToggleSupergroupIsAllHistoryAvailable *var, struct TdStackStorerMethods *M);
struct TdToggleSupergroupIsAllHistoryAvailable *TdStackFetcherToggleSupergroupIsAllHistoryAvailable (struct TdStackFetcherMethods *M);
struct TdToggleSupergroupSignMessages {
  int ID;
  int refcnt;
  int supergroup_id_;
  int sign_messages_;
};
struct TdToggleSupergroupSignMessages *TdCreateObjectToggleSupergroupSignMessages (int supergroup_id_, int sign_messages_);
char *TdSerializeToggleSupergroupSignMessages (struct TdToggleSupergroupSignMessages *var);
void TdDestroyObjectToggleSupergroupSignMessages (struct TdToggleSupergroupSignMessages *var);
void TdStackStorerToggleSupergroupSignMessages (struct TdToggleSupergroupSignMessages *var, struct TdStackStorerMethods *M);
struct TdToggleSupergroupSignMessages *TdStackFetcherToggleSupergroupSignMessages (struct TdStackFetcherMethods *M);
struct TdUnblockUser {
  int ID;
  int refcnt;
  int user_id_;
};
struct TdUnblockUser *TdCreateObjectUnblockUser (int user_id_);
char *TdSerializeUnblockUser (struct TdUnblockUser *var);
void TdDestroyObjectUnblockUser (struct TdUnblockUser *var);
void TdStackStorerUnblockUser (struct TdUnblockUser *var, struct TdStackStorerMethods *M);
struct TdUnblockUser *TdStackFetcherUnblockUser (struct TdStackFetcherMethods *M);
struct TdUnpinSupergroupMessage {
  int ID;
  int refcnt;
  int supergroup_id_;
};
struct TdUnpinSupergroupMessage *TdCreateObjectUnpinSupergroupMessage (int supergroup_id_);
char *TdSerializeUnpinSupergroupMessage (struct TdUnpinSupergroupMessage *var);
void TdDestroyObjectUnpinSupergroupMessage (struct TdUnpinSupergroupMessage *var);
void TdStackStorerUnpinSupergroupMessage (struct TdUnpinSupergroupMessage *var, struct TdStackStorerMethods *M);
struct TdUnpinSupergroupMessage *TdStackFetcherUnpinSupergroupMessage (struct TdStackFetcherMethods *M);
struct TdUpgradeBasicGroupChatToSupergroupChat {
  int ID;
  int refcnt;
  long long chat_id_;
};
struct TdUpgradeBasicGroupChatToSupergroupChat *TdCreateObjectUpgradeBasicGroupChatToSupergroupChat (long long chat_id_);
char *TdSerializeUpgradeBasicGroupChatToSupergroupChat (struct TdUpgradeBasicGroupChatToSupergroupChat *var);
void TdDestroyObjectUpgradeBasicGroupChatToSupergroupChat (struct TdUpgradeBasicGroupChatToSupergroupChat *var);
void TdStackStorerUpgradeBasicGroupChatToSupergroupChat (struct TdUpgradeBasicGroupChatToSupergroupChat *var, struct TdStackStorerMethods *M);
struct TdUpgradeBasicGroupChatToSupergroupChat *TdStackFetcherUpgradeBasicGroupChatToSupergroupChat (struct TdStackFetcherMethods *M);
struct TdUploadFile {
  int ID;
  int refcnt;
  struct TdInputFile *file_;
  struct TdFileType *file_type_;
  int priority_;
};
struct TdUploadFile *TdCreateObjectUploadFile (struct TdInputFile *file_, struct TdFileType *file_type_, int priority_);
char *TdSerializeUploadFile (struct TdUploadFile *var);
void TdDestroyObjectUploadFile (struct TdUploadFile *var);
void TdStackStorerUploadFile (struct TdUploadFile *var, struct TdStackStorerMethods *M);
struct TdUploadFile *TdStackFetcherUploadFile (struct TdStackFetcherMethods *M);
struct TdUploadStickerFile {
  int ID;
  int refcnt;
  int user_id_;
  struct TdInputFile *png_sticker_;
};
struct TdUploadStickerFile *TdCreateObjectUploadStickerFile (int user_id_, struct TdInputFile *png_sticker_);
char *TdSerializeUploadStickerFile (struct TdUploadStickerFile *var);
void TdDestroyObjectUploadStickerFile (struct TdUploadStickerFile *var);
void TdStackStorerUploadStickerFile (struct TdUploadStickerFile *var, struct TdStackStorerMethods *M);
struct TdUploadStickerFile *TdStackFetcherUploadStickerFile (struct TdStackFetcherMethods *M);
struct TdValidateOrderInfo {
  int ID;
  int refcnt;
  long long chat_id_;
  long long message_id_;
  struct TdOrderInfo *order_info_;
  int allow_save_;
};
struct TdValidateOrderInfo *TdCreateObjectValidateOrderInfo (long long chat_id_, long long message_id_, struct TdOrderInfo *order_info_, int allow_save_);
char *TdSerializeValidateOrderInfo (struct TdValidateOrderInfo *var);
void TdDestroyObjectValidateOrderInfo (struct TdValidateOrderInfo *var);
void TdStackStorerValidateOrderInfo (struct TdValidateOrderInfo *var, struct TdStackStorerMethods *M);
struct TdValidateOrderInfo *TdStackFetcherValidateOrderInfo (struct TdStackFetcherMethods *M);
struct TdViewMessages {
  int ID;
  int refcnt;
  long long chat_id_;
  struct TdVectorLong *message_ids_;
  int force_read_;
};
struct TdViewMessages *TdCreateObjectViewMessages (long long chat_id_, struct TdVectorLong *message_ids_, int force_read_);
char *TdSerializeViewMessages (struct TdViewMessages *var);
void TdDestroyObjectViewMessages (struct TdViewMessages *var);
void TdStackStorerViewMessages (struct TdViewMessages *var, struct TdStackStorerMethods *M);
struct TdViewMessages *TdStackFetcherViewMessages (struct TdStackFetcherMethods *M);
struct TdViewTrendingStickerSets {
  int ID;
  int refcnt;
  struct TdVectorLong *sticker_set_ids_;
};
struct TdViewTrendingStickerSets *TdCreateObjectViewTrendingStickerSets (struct TdVectorLong *sticker_set_ids_);
char *TdSerializeViewTrendingStickerSets (struct TdViewTrendingStickerSets *var);
void TdDestroyObjectViewTrendingStickerSets (struct TdViewTrendingStickerSets *var);
void TdStackStorerViewTrendingStickerSets (struct TdViewTrendingStickerSets *var, struct TdStackStorerMethods *M);
struct TdViewTrendingStickerSets *TdStackFetcherViewTrendingStickerSets (struct TdStackFetcherMethods *M);
#ifdef __cplusplus
}
#endif
