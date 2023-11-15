// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FServerSetTitleDataResult;
class UObject;
struct FServerSetPublisherDataResult;
struct FServerGetTitleNewsResult;
struct FServerGetTitleDataResult;
struct FServerGetTimeResult;
struct FServerGetStoreItemsResult;
struct FServerGetPublisherDataResult;
struct FServerGetCatalogItemsResult;
struct FServerUpdateSharedGroupDataResult;
struct FServerRemoveSharedGroupMembersResult;
struct FServerGetSharedGroupDataResult;
struct FServerEmptyResponse;
struct FServerCreateSharedGroupResult;
struct FServerAddSharedGroupMembersResult;
struct FServerExecuteCloudScriptResult;
struct FServerRemovePlayerTagResult;
struct FServerGetPlayerTagsResult;
struct FServerGetPlayersInSegmentResult;
struct FServerGetPlayerSegmentsResult;
struct FServerGetAllSegmentsResult;
struct FServerAddPlayerTagResult;
struct FServerUnlockContainerItemResult;
struct FServerModifyUserVirtualCurrencyResult;
struct FServerModifyCharacterVirtualCurrencyResult;
struct FServerRevokeInventoryItemsResult;
struct FServerRevokeInventoryResult;
struct FServerReportPlayerServerResult;
struct FServerRedeemCouponResult;
struct FServerMoveItemToUserFromCharacterResult;
struct FServerMoveItemToCharacterFromUserResult;
struct FServerMoveItemToCharacterFromCharacterResult;
struct FServerModifyItemUsesResult;
struct FServerGrantItemsToUsersResult;
struct FServerGrantItemsToUserResult;
struct FServerGrantItemsToCharacterResult;
struct FServerGetUserInventoryResult;
struct FServerGetRandomResultTablesResult;
struct FServerGetCharacterInventoryResult;
struct FServerEvaluateRandomResultTableResult;
struct FServerConsumeItemResult;
struct FServerUpdateUserDataResult;
struct FServerUpdatePlayerStatisticsResult;
struct FServerGetUserDataResult;
struct FServerGetPlayerStatisticVersionsResult;
struct FServerGetPlayerStatisticsResult;
struct FServerGetPlayerCombinedInfoResult;
struct FServerGetLeaderboardAroundUserResult;
struct FServerGetLeaderboardResult;
struct FServerAwardSteamAchievementResult;
struct FServerGetFriendsListResult;
struct FServerGetContentDownloadUrlResult;
struct FServerUpdateCharacterStatisticsResult;
struct FServerGrantCharacterToUserResult;
struct FServerGetLeaderboardForUsersCharactersResult;
struct FServerGetLeaderboardAroundCharacterResult;
struct FServerGetCharacterStatisticsResult;
struct FServerGetCharacterLeaderboardResult;
struct FServerListUsersCharactersResult;
struct FServerDeleteCharacterFromUserResult;
struct FServerUpdateCharacterDataResult;
struct FServerGetCharacterDataResult;
struct FServerSetPlayerSecretResult;
struct FServerServerLoginResult;
struct FServerAuthenticateSessionTicketResult;
struct FServerWriteEventResponse;
struct FServerUpdateBansResult;
struct FServerUnlinkXboxAccountResult;
struct FServerUnlinkSteamIdResult;
struct FServerUnlinkServerCustomIdResult;
struct FServerUnlinkPSNAccountResult;
struct FServerUnlinkNintendoSwitchDeviceIdResult;
struct FServerSendPushNotificationResult;
struct FServerSendEmailFromTemplateResult;
struct FServerSendCustomAccountRecoveryEmailResult;
struct FServerSavePushNotificationTemplateResult;
struct FServerRevokeBansResult;
struct FServerRevokeAllBansForUserResult;
struct FServerEmptyResult;
struct FServerLinkXboxAccountResult;
struct FServerLinkSteamIdResult;
struct FServerLinkServerCustomIdResult;
struct FServerLinkPSNIdResponse;
struct FServerLinkPSNAccountResult;
struct FServerLinkNintendoSwitchDeviceIdResult;
struct FServerGetUserBansResult;
struct FServerGetUserAccountInfoResult;
struct FServerGetServerCustomIDsFromPlayFabIDsResult;
struct FServerGetPlayFabIDsFromXboxLiveIDsResult;
struct FServerGetPlayFabIDsFromTwitchIDsResult;
struct FServerGetPlayFabIDsFromSteamIDsResult;
struct FServerGetPlayFabIDsFromPSNAccountIDsResult;
struct FServerGetPlayFabIDsFromNintendoSwitchDeviceIdsResult;
struct FServerGetPlayFabIDsFromNintendoServiceAccountIdsResult;
struct FServerGetPlayFabIDsFromGenericIDsResult;
struct FServerGetPlayFabIDsFromFacebookInstantGamesIdsResult;
struct FServerGetPlayFabIDsFromFacebookIDsResult;
struct FServerGetPlayerProfileResult;
struct FServerDeletePushNotificationTemplateResult;
struct FServerDeletePlayerResult;
struct FServerBanUsersResult;
struct FPlayFabError;
struct FPlayFabBaseModel;
struct FServerSetTitleDataRequest;
class UPlayFabServerAPI;
struct FServerSetPublisherDataRequest;
struct FServerGetTitleNewsRequest;
struct FServerGetTitleDataRequest;
struct FServerGetTimeRequest;
struct FServerGetStoreItemsServerRequest;
struct FServerGetPublisherDataRequest;
struct FServerGetCatalogItemsRequest;
struct FServerUpdateSharedGroupDataRequest;
struct FServerRemoveSharedGroupMembersRequest;
struct FServerGetSharedGroupDataRequest;
struct FServerDeleteSharedGroupRequest;
struct FServerCreateSharedGroupRequest;
struct FServerAddSharedGroupMembersRequest;
struct FServerExecuteCloudScriptServerRequest;
struct FServerRemovePlayerTagRequest;
struct FServerGetPlayerTagsRequest;
struct FServerGetPlayersInSegmentRequest;
struct FServerGetPlayersSegmentsRequest;
struct FServerGetAllSegmentsRequest;
struct FServerAddPlayerTagRequest;
struct FServerUpdateUserInventoryItemDataRequest;
struct FServerUnlockContainerItemRequest;
struct FServerUnlockContainerInstanceRequest;
struct FServerSubtractUserVirtualCurrencyRequest;
struct FServerSubtractCharacterVirtualCurrencyRequest;
struct FServerRevokeInventoryItemsRequest;
struct FServerRevokeInventoryItemRequest;
struct FServerReportPlayerServerRequest;
struct FServerRedeemCouponRequest;
struct FServerMoveItemToUserFromCharacterRequest;
struct FServerMoveItemToCharacterFromUserRequest;
struct FServerMoveItemToCharacterFromCharacterRequest;
struct FServerModifyItemUsesRequest;
struct FServerGrantItemsToUsersRequest;
struct FServerGrantItemsToUserRequest;
struct FServerGrantItemsToCharacterRequest;
struct FServerGetUserInventoryRequest;
struct FServerGetRandomResultTablesRequest;
struct FServerGetCharacterInventoryRequest;
struct FServerEvaluateRandomResultTableRequest;
struct FServerConsumeItemRequest;
struct FServerAddUserVirtualCurrencyRequest;
struct FServerAddCharacterVirtualCurrencyRequest;
struct FServerUpdateUserDataRequest;
struct FServerUpdateUserInternalDataRequest;
struct FServerUpdatePlayerStatisticsRequest;
struct FServerGetUserDataRequest;
struct FServerGetPlayerStatisticVersionsRequest;
struct FServerGetPlayerStatisticsRequest;
struct FServerGetPlayerCombinedInfoRequest;
struct FServerGetLeaderboardAroundUserRequest;
struct FServerGetLeaderboardRequest;
struct FServerGetFriendLeaderboardRequest;
struct FServerAwardSteamAchievementRequest;
struct FServerSetFriendTagsRequest;
struct FServerRemoveFriendRequest;
struct FServerGetFriendsListRequest;
struct FServerAddFriendRequest;
struct FServerGetContentDownloadUrlRequest;
struct FServerUpdateCharacterStatisticsRequest;
struct FServerGrantCharacterToUserRequest;
struct FServerGetLeaderboardForUsersCharactersRequest;
struct FServerGetLeaderboardAroundCharacterRequest;
struct FServerGetCharacterStatisticsRequest;
struct FServerGetCharacterLeaderboardRequest;
struct FServerListUsersCharactersRequest;
struct FServerDeleteCharacterFromUserRequest;
struct FServerUpdateCharacterDataRequest;
struct FServerGetCharacterDataRequest;
struct FServerSetPlayerSecretRequest;
struct FServerLoginWithXboxIdRequest;
struct FServerLoginWithXboxRequest;
struct FServerLoginWithSteamIdRequest;
struct FServerLoginWithServerCustomIdRequest;
struct FServerAuthenticateSessionTicketRequest;
struct FServerWriteTitleEventRequest;
struct FServerWriteServerPlayerEventRequest;
struct FServerWriteServerCharacterEventRequest;
struct FServerUpdateBansRequest;
struct FServerUpdateAvatarUrlRequest;
struct FServerUnlinkXboxAccountRequest;
struct FServerUnlinkSteamIdRequest;
struct FServerUnlinkServerCustomIdRequest;
struct FServerUnlinkPSNAccountRequest;
struct FServerUnlinkNintendoSwitchDeviceIdRequest;
struct FServerUnlinkNintendoServiceAccountRequest;
struct FServerSendPushNotificationFromTemplateRequest;
struct FServerSendPushNotificationRequest;
struct FServerSendEmailFromTemplateRequest;
struct FServerSendCustomAccountRecoveryEmailRequest;
struct FServerSavePushNotificationTemplateRequest;
struct FServerRevokeBansRequest;
struct FServerRevokeAllBansForUserRequest;
struct FServerRemoveGenericIDRequest;
struct FServerLinkXboxAccountRequest;
struct FServerLinkSteamIdRequest;
struct FServerLinkServerCustomIdRequest;
struct FServerLinkPSNIdRequest;
struct FServerLinkPSNAccountRequest;
struct FServerLinkNintendoSwitchDeviceIdRequest;
struct FServerLinkNintendoServiceAccountSubjectRequest;
struct FServerLinkNintendoServiceAccountRequest;
struct FServerGetUserBansRequest;
struct FServerGetUserAccountInfoRequest;
struct FServerGetServerCustomIDsFromPlayFabIDsRequest;
struct FServerGetPlayFabIDsFromXboxLiveIDsRequest;
struct FServerGetPlayFabIDsFromTwitchIDsRequest;
struct FServerGetPlayFabIDsFromSteamIDsRequest;
struct FServerGetPlayFabIDsFromPSNAccountIDsRequest;
struct FServerGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest;
struct FServerGetPlayFabIDsFromNintendoServiceAccountIdsRequest;
struct FServerGetPlayFabIDsFromGenericIDsRequest;
struct FServerGetPlayFabIDsFromFacebookInstantGamesIdsRequest;
struct FServerGetPlayFabIDsFromFacebookIDsRequest;
struct FServerGetPlayerProfileRequest;
struct FServerDeletePushNotificationTemplateRequest;
struct FServerDeletePlayerRequest;
struct FServerBanUsersRequest;
struct FServerAddGenericIDRequest;
#ifdef PLAYFAB_PlayFabServerAPI_generated_h
#error "PlayFabServerAPI.generated.h already included, missing '#pragma once' in PlayFabServerAPI.h"
#endif
#define PLAYFAB_PlayFabServerAPI_generated_h

#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabServerAPI_h_2053_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessSetTitleInternalData_Parms \
{ \
	FServerSetTitleDataResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessSetTitleInternalData_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessSetTitleInternalData, FServerSetTitleDataResult result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessSetTitleInternalData_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessSetTitleInternalData.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabServerAPI_h_2040_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessSetTitleData_Parms \
{ \
	FServerSetTitleDataResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessSetTitleData_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessSetTitleData, FServerSetTitleDataResult result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessSetTitleData_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessSetTitleData.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabServerAPI_h_2027_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessSetPublisherData_Parms \
{ \
	FServerSetPublisherDataResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessSetPublisherData_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessSetPublisherData, FServerSetPublisherDataResult result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessSetPublisherData_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessSetPublisherData.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabServerAPI_h_2014_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessGetTitleNews_Parms \
{ \
	FServerGetTitleNewsResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetTitleNews_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetTitleNews, FServerGetTitleNewsResult result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessGetTitleNews_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetTitleNews.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabServerAPI_h_2001_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessGetTitleInternalData_Parms \
{ \
	FServerGetTitleDataResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetTitleInternalData_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetTitleInternalData, FServerGetTitleDataResult result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessGetTitleInternalData_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetTitleInternalData.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabServerAPI_h_1988_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessGetTitleData_Parms \
{ \
	FServerGetTitleDataResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetTitleData_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetTitleData, FServerGetTitleDataResult result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessGetTitleData_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetTitleData.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabServerAPI_h_1975_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessGetTime_Parms \
{ \
	FServerGetTimeResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetTime_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetTime, FServerGetTimeResult result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessGetTime_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetTime.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabServerAPI_h_1958_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessGetStoreItems_Parms \
{ \
	FServerGetStoreItemsResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetStoreItems_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetStoreItems, FServerGetStoreItemsResult result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessGetStoreItems_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetStoreItems.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabServerAPI_h_1945_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessGetPublisherData_Parms \
{ \
	FServerGetPublisherDataResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetPublisherData_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetPublisherData, FServerGetPublisherDataResult result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessGetPublisherData_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetPublisherData.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabServerAPI_h_1929_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessGetCatalogItems_Parms \
{ \
	FServerGetCatalogItemsResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetCatalogItems_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetCatalogItems, FServerGetCatalogItemsResult result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessGetCatalogItems_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetCatalogItems.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabServerAPI_h_1906_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessUpdateSharedGroupData_Parms \
{ \
	FServerUpdateSharedGroupDataResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessUpdateSharedGroupData_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessUpdateSharedGroupData, FServerUpdateSharedGroupDataResult result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessUpdateSharedGroupData_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessUpdateSharedGroupData.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabServerAPI_h_1888_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessRemoveSharedGroupMembers_Parms \
{ \
	FServerRemoveSharedGroupMembersResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessRemoveSharedGroupMembers_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessRemoveSharedGroupMembers, FServerRemoveSharedGroupMembersResult result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessRemoveSharedGroupMembers_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessRemoveSharedGroupMembers.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabServerAPI_h_1871_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessGetSharedGroupData_Parms \
{ \
	FServerGetSharedGroupDataResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetSharedGroupData_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetSharedGroupData, FServerGetSharedGroupDataResult result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessGetSharedGroupData_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetSharedGroupData.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabServerAPI_h_1854_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessDeleteSharedGroup_Parms \
{ \
	FServerEmptyResponse result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessDeleteSharedGroup_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessDeleteSharedGroup, FServerEmptyResponse result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessDeleteSharedGroup_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessDeleteSharedGroup.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabServerAPI_h_1836_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessCreateSharedGroup_Parms \
{ \
	FServerCreateSharedGroupResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessCreateSharedGroup_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessCreateSharedGroup, FServerCreateSharedGroupResult result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessCreateSharedGroup_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessCreateSharedGroup.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabServerAPI_h_1818_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessAddSharedGroupMembers_Parms \
{ \
	FServerAddSharedGroupMembersResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessAddSharedGroupMembers_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessAddSharedGroupMembers, FServerAddSharedGroupMembersResult result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessAddSharedGroupMembers_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessAddSharedGroupMembers.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabServerAPI_h_1798_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessExecuteCloudScript_Parms \
{ \
	FServerExecuteCloudScriptResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessExecuteCloudScript_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessExecuteCloudScript, FServerExecuteCloudScriptResult result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessExecuteCloudScript_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessExecuteCloudScript.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabServerAPI_h_1781_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessRemovePlayerTag_Parms \
{ \
	FServerRemovePlayerTagResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessRemovePlayerTag_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessRemovePlayerTag, FServerRemovePlayerTagResult result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessRemovePlayerTag_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessRemovePlayerTag.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabServerAPI_h_1768_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessGetPlayerTags_Parms \
{ \
	FServerGetPlayerTagsResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetPlayerTags_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetPlayerTags, FServerGetPlayerTagsResult result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessGetPlayerTags_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetPlayerTags.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabServerAPI_h_1749_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessGetPlayersInSegment_Parms \
{ \
	FServerGetPlayersInSegmentResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetPlayersInSegment_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetPlayersInSegment, FServerGetPlayersInSegmentResult result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessGetPlayersInSegment_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetPlayersInSegment.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabServerAPI_h_1736_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessGetPlayerSegments_Parms \
{ \
	FServerGetPlayerSegmentsResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetPlayerSegments_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetPlayerSegments, FServerGetPlayerSegmentsResult result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessGetPlayerSegments_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetPlayerSegments.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabServerAPI_h_1720_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessGetAllSegments_Parms \
{ \
	FServerGetAllSegmentsResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetAllSegments_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetAllSegments, FServerGetAllSegmentsResult result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessGetAllSegments_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetAllSegments.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabServerAPI_h_1707_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessAddPlayerTag_Parms \
{ \
	FServerAddPlayerTagResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessAddPlayerTag_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessAddPlayerTag, FServerAddPlayerTagResult result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessAddPlayerTag_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessAddPlayerTag.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabServerAPI_h_1687_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessUpdateUserInventoryItemCustomData_Parms \
{ \
	FServerEmptyResponse result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessUpdateUserInventoryItemCustomData_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessUpdateUserInventoryItemCustomData, FServerEmptyResponse result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessUpdateUserInventoryItemCustomData_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessUpdateUserInventoryItemCustomData.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabServerAPI_h_1668_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessUnlockContainerItem_Parms \
{ \
	FServerUnlockContainerItemResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessUnlockContainerItem_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessUnlockContainerItem, FServerUnlockContainerItemResult result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessUnlockContainerItem_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessUnlockContainerItem.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabServerAPI_h_1650_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessUnlockContainerInstance_Parms \
{ \
	FServerUnlockContainerItemResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessUnlockContainerInstance_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessUnlockContainerInstance, FServerUnlockContainerItemResult result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessUnlockContainerInstance_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessUnlockContainerInstance.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabServerAPI_h_1633_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessSubtractUserVirtualCurrency_Parms \
{ \
	FServerModifyUserVirtualCurrencyResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessSubtractUserVirtualCurrency_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessSubtractUserVirtualCurrency, FServerModifyUserVirtualCurrencyResult result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessSubtractUserVirtualCurrency_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessSubtractUserVirtualCurrency.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabServerAPI_h_1616_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessSubtractCharacterVirtualCurrency_Parms \
{ \
	FServerModifyCharacterVirtualCurrencyResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessSubtractCharacterVirtualCurrency_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessSubtractCharacterVirtualCurrency, FServerModifyCharacterVirtualCurrencyResult result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessSubtractCharacterVirtualCurrency_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessSubtractCharacterVirtualCurrency.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabServerAPI_h_1600_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessRevokeInventoryItems_Parms \
{ \
	FServerRevokeInventoryItemsResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessRevokeInventoryItems_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessRevokeInventoryItems, FServerRevokeInventoryItemsResult result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessRevokeInventoryItems_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessRevokeInventoryItems.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabServerAPI_h_1584_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessRevokeInventoryItem_Parms \
{ \
	FServerRevokeInventoryResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessRevokeInventoryItem_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessRevokeInventoryItem, FServerRevokeInventoryResult result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessRevokeInventoryItem_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessRevokeInventoryItem.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabServerAPI_h_1568_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessReportPlayer_Parms \
{ \
	FServerReportPlayerServerResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessReportPlayer_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessReportPlayer, FServerReportPlayerServerResult result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessReportPlayer_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessReportPlayer.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabServerAPI_h_1551_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessRedeemCoupon_Parms \
{ \
	FServerRedeemCouponResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessRedeemCoupon_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessRedeemCoupon, FServerRedeemCouponResult result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessRedeemCoupon_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessRedeemCoupon.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabServerAPI_h_1535_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessMoveItemToUserFromCharacter_Parms \
{ \
	FServerMoveItemToUserFromCharacterResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessMoveItemToUserFromCharacter_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessMoveItemToUserFromCharacter, FServerMoveItemToUserFromCharacterResult result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessMoveItemToUserFromCharacter_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessMoveItemToUserFromCharacter.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabServerAPI_h_1519_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessMoveItemToCharacterFromUser_Parms \
{ \
	FServerMoveItemToCharacterFromUserResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessMoveItemToCharacterFromUser_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessMoveItemToCharacterFromUser, FServerMoveItemToCharacterFromUserResult result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessMoveItemToCharacterFromUser_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessMoveItemToCharacterFromUser.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabServerAPI_h_1503_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessMoveItemToCharacterFromCharacter_Parms \
{ \
	FServerMoveItemToCharacterFromCharacterResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessMoveItemToCharacterFromCharacter_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessMoveItemToCharacterFromCharacter, FServerMoveItemToCharacterFromCharacterResult result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessMoveItemToCharacterFromCharacter_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessMoveItemToCharacterFromCharacter.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabServerAPI_h_1487_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessModifyItemUses_Parms \
{ \
	FServerModifyItemUsesResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessModifyItemUses_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessModifyItemUses, FServerModifyItemUsesResult result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessModifyItemUses_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessModifyItemUses.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabServerAPI_h_1471_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessGrantItemsToUsers_Parms \
{ \
	FServerGrantItemsToUsersResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGrantItemsToUsers_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGrantItemsToUsers, FServerGrantItemsToUsersResult result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessGrantItemsToUsers_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessGrantItemsToUsers.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabServerAPI_h_1455_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessGrantItemsToUser_Parms \
{ \
	FServerGrantItemsToUserResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGrantItemsToUser_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGrantItemsToUser, FServerGrantItemsToUserResult result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessGrantItemsToUser_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessGrantItemsToUser.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabServerAPI_h_1439_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessGrantItemsToCharacter_Parms \
{ \
	FServerGrantItemsToCharacterResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGrantItemsToCharacter_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGrantItemsToCharacter, FServerGrantItemsToCharacterResult result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessGrantItemsToCharacter_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessGrantItemsToCharacter.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabServerAPI_h_1423_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessGetUserInventory_Parms \
{ \
	FServerGetUserInventoryResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetUserInventory_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetUserInventory, FServerGetUserInventoryResult result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessGetUserInventory_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetUserInventory.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabServerAPI_h_1406_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessGetRandomResultTables_Parms \
{ \
	FServerGetRandomResultTablesResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetRandomResultTables_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetRandomResultTables, FServerGetRandomResultTablesResult result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessGetRandomResultTables_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetRandomResultTables.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabServerAPI_h_1390_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessGetCharacterInventory_Parms \
{ \
	FServerGetCharacterInventoryResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetCharacterInventory_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetCharacterInventory, FServerGetCharacterInventoryResult result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessGetCharacterInventory_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetCharacterInventory.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabServerAPI_h_1372_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessEvaluateRandomResultTable_Parms \
{ \
	FServerEvaluateRandomResultTableResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessEvaluateRandomResultTable_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessEvaluateRandomResultTable, FServerEvaluateRandomResultTableResult result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessEvaluateRandomResultTable_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessEvaluateRandomResultTable.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabServerAPI_h_1355_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessConsumeItem_Parms \
{ \
	FServerConsumeItemResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessConsumeItem_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessConsumeItem, FServerConsumeItemResult result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessConsumeItem_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessConsumeItem.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabServerAPI_h_1339_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessAddUserVirtualCurrency_Parms \
{ \
	FServerModifyUserVirtualCurrencyResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessAddUserVirtualCurrency_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessAddUserVirtualCurrency, FServerModifyUserVirtualCurrencyResult result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessAddUserVirtualCurrency_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessAddUserVirtualCurrency.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabServerAPI_h_1323_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessAddCharacterVirtualCurrency_Parms \
{ \
	FServerModifyCharacterVirtualCurrencyResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessAddCharacterVirtualCurrency_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessAddCharacterVirtualCurrency, FServerModifyCharacterVirtualCurrencyResult result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessAddCharacterVirtualCurrency_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessAddCharacterVirtualCurrency.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabServerAPI_h_1306_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessUpdateUserReadOnlyData_Parms \
{ \
	FServerUpdateUserDataResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessUpdateUserReadOnlyData_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessUpdateUserReadOnlyData, FServerUpdateUserDataResult result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessUpdateUserReadOnlyData_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessUpdateUserReadOnlyData.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabServerAPI_h_1293_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessUpdateUserPublisherReadOnlyData_Parms \
{ \
	FServerUpdateUserDataResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessUpdateUserPublisherReadOnlyData_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessUpdateUserPublisherReadOnlyData, FServerUpdateUserDataResult result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessUpdateUserPublisherReadOnlyData_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessUpdateUserPublisherReadOnlyData.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabServerAPI_h_1280_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessUpdateUserPublisherInternalData_Parms \
{ \
	FServerUpdateUserDataResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessUpdateUserPublisherInternalData_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessUpdateUserPublisherInternalData, FServerUpdateUserDataResult result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessUpdateUserPublisherInternalData_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessUpdateUserPublisherInternalData.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabServerAPI_h_1267_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessUpdateUserPublisherData_Parms \
{ \
	FServerUpdateUserDataResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessUpdateUserPublisherData_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessUpdateUserPublisherData, FServerUpdateUserDataResult result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessUpdateUserPublisherData_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessUpdateUserPublisherData.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabServerAPI_h_1254_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessUpdateUserInternalData_Parms \
{ \
	FServerUpdateUserDataResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessUpdateUserInternalData_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessUpdateUserInternalData, FServerUpdateUserDataResult result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessUpdateUserInternalData_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessUpdateUserInternalData.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabServerAPI_h_1241_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessUpdateUserData_Parms \
{ \
	FServerUpdateUserDataResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessUpdateUserData_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessUpdateUserData, FServerUpdateUserDataResult result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessUpdateUserData_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessUpdateUserData.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabServerAPI_h_1228_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessUpdatePlayerStatistics_Parms \
{ \
	FServerUpdatePlayerStatisticsResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessUpdatePlayerStatistics_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessUpdatePlayerStatistics, FServerUpdatePlayerStatisticsResult result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessUpdatePlayerStatistics_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessUpdatePlayerStatistics.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabServerAPI_h_1215_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessGetUserReadOnlyData_Parms \
{ \
	FServerGetUserDataResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetUserReadOnlyData_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetUserReadOnlyData, FServerGetUserDataResult result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessGetUserReadOnlyData_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetUserReadOnlyData.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabServerAPI_h_1202_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessGetUserPublisherReadOnlyData_Parms \
{ \
	FServerGetUserDataResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetUserPublisherReadOnlyData_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetUserPublisherReadOnlyData, FServerGetUserDataResult result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessGetUserPublisherReadOnlyData_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetUserPublisherReadOnlyData.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabServerAPI_h_1189_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessGetUserPublisherInternalData_Parms \
{ \
	FServerGetUserDataResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetUserPublisherInternalData_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetUserPublisherInternalData, FServerGetUserDataResult result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessGetUserPublisherInternalData_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetUserPublisherInternalData.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabServerAPI_h_1176_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessGetUserPublisherData_Parms \
{ \
	FServerGetUserDataResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetUserPublisherData_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetUserPublisherData, FServerGetUserDataResult result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessGetUserPublisherData_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetUserPublisherData.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabServerAPI_h_1163_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessGetUserInternalData_Parms \
{ \
	FServerGetUserDataResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetUserInternalData_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetUserInternalData, FServerGetUserDataResult result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessGetUserInternalData_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetUserInternalData.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabServerAPI_h_1150_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessGetUserData_Parms \
{ \
	FServerGetUserDataResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetUserData_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetUserData, FServerGetUserDataResult result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessGetUserData_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetUserData.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabServerAPI_h_1137_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessGetPlayerStatisticVersions_Parms \
{ \
	FServerGetPlayerStatisticVersionsResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetPlayerStatisticVersions_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetPlayerStatisticVersions, FServerGetPlayerStatisticVersionsResult result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessGetPlayerStatisticVersions_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetPlayerStatisticVersions.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabServerAPI_h_1124_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessGetPlayerStatistics_Parms \
{ \
	FServerGetPlayerStatisticsResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetPlayerStatistics_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetPlayerStatistics, FServerGetPlayerStatisticsResult result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessGetPlayerStatistics_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetPlayerStatistics.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabServerAPI_h_1108_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessGetPlayerCombinedInfo_Parms \
{ \
	FServerGetPlayerCombinedInfoResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetPlayerCombinedInfo_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetPlayerCombinedInfo, FServerGetPlayerCombinedInfoResult result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessGetPlayerCombinedInfo_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetPlayerCombinedInfo.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabServerAPI_h_1095_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessGetLeaderboardAroundUser_Parms \
{ \
	FServerGetLeaderboardAroundUserResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetLeaderboardAroundUser_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetLeaderboardAroundUser, FServerGetLeaderboardAroundUserResult result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessGetLeaderboardAroundUser_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetLeaderboardAroundUser.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabServerAPI_h_1082_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessGetLeaderboard_Parms \
{ \
	FServerGetLeaderboardResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetLeaderboard_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetLeaderboard, FServerGetLeaderboardResult result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessGetLeaderboard_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetLeaderboard.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabServerAPI_h_1066_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessGetFriendLeaderboard_Parms \
{ \
	FServerGetLeaderboardResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetFriendLeaderboard_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetFriendLeaderboard, FServerGetLeaderboardResult result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessGetFriendLeaderboard_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetFriendLeaderboard.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabServerAPI_h_1049_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessAwardSteamAchievement_Parms \
{ \
	FServerAwardSteamAchievementResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessAwardSteamAchievement_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessAwardSteamAchievement, FServerAwardSteamAchievementResult result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessAwardSteamAchievement_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessAwardSteamAchievement.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabServerAPI_h_1028_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessSetFriendTags_Parms \
{ \
	FServerEmptyResponse result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessSetFriendTags_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessSetFriendTags, FServerEmptyResponse result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessSetFriendTags_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessSetFriendTags.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabServerAPI_h_1015_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessRemoveFriend_Parms \
{ \
	FServerEmptyResponse result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessRemoveFriend_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessRemoveFriend, FServerEmptyResponse result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessRemoveFriend_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessRemoveFriend.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabServerAPI_h_999_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessGetFriendsList_Parms \
{ \
	FServerGetFriendsListResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetFriendsList_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetFriendsList, FServerGetFriendsListResult result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessGetFriendsList_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetFriendsList.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabServerAPI_h_983_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessAddFriend_Parms \
{ \
	FServerEmptyResponse result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessAddFriend_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessAddFriend, FServerEmptyResponse result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessAddFriend_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessAddFriend.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabServerAPI_h_959_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessGetContentDownloadUrl_Parms \
{ \
	FServerGetContentDownloadUrlResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetContentDownloadUrl_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetContentDownloadUrl, FServerGetContentDownloadUrlResult result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessGetContentDownloadUrl_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetContentDownloadUrl.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabServerAPI_h_942_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessUpdateCharacterStatistics_Parms \
{ \
	FServerUpdateCharacterStatisticsResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessUpdateCharacterStatistics_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessUpdateCharacterStatistics, FServerUpdateCharacterStatisticsResult result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessUpdateCharacterStatistics_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessUpdateCharacterStatistics.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabServerAPI_h_926_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessGrantCharacterToUser_Parms \
{ \
	FServerGrantCharacterToUserResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGrantCharacterToUser_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGrantCharacterToUser, FServerGrantCharacterToUserResult result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessGrantCharacterToUser_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessGrantCharacterToUser.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabServerAPI_h_913_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessGetLeaderboardForUserCharacters_Parms \
{ \
	FServerGetLeaderboardForUsersCharactersResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetLeaderboardForUserCharacters_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetLeaderboardForUserCharacters, FServerGetLeaderboardForUsersCharactersResult result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessGetLeaderboardForUserCharacters_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetLeaderboardForUserCharacters.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabServerAPI_h_900_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessGetLeaderboardAroundCharacter_Parms \
{ \
	FServerGetLeaderboardAroundCharacterResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetLeaderboardAroundCharacter_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetLeaderboardAroundCharacter, FServerGetLeaderboardAroundCharacterResult result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessGetLeaderboardAroundCharacter_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetLeaderboardAroundCharacter.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabServerAPI_h_887_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessGetCharacterStatistics_Parms \
{ \
	FServerGetCharacterStatisticsResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetCharacterStatistics_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetCharacterStatistics, FServerGetCharacterStatisticsResult result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessGetCharacterStatistics_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetCharacterStatistics.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabServerAPI_h_874_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessGetCharacterLeaderboard_Parms \
{ \
	FServerGetCharacterLeaderboardResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetCharacterLeaderboard_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetCharacterLeaderboard, FServerGetCharacterLeaderboardResult result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessGetCharacterLeaderboard_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetCharacterLeaderboard.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabServerAPI_h_858_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessGetAllUsersCharacters_Parms \
{ \
	FServerListUsersCharactersResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetAllUsersCharacters_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetAllUsersCharacters, FServerListUsersCharactersResult result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessGetAllUsersCharacters_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetAllUsersCharacters.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabServerAPI_h_845_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessDeleteCharacterFromUser_Parms \
{ \
	FServerDeleteCharacterFromUserResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessDeleteCharacterFromUser_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessDeleteCharacterFromUser, FServerDeleteCharacterFromUserResult result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessDeleteCharacterFromUser_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessDeleteCharacterFromUser.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabServerAPI_h_828_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessUpdateCharacterReadOnlyData_Parms \
{ \
	FServerUpdateCharacterDataResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessUpdateCharacterReadOnlyData_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessUpdateCharacterReadOnlyData, FServerUpdateCharacterDataResult result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessUpdateCharacterReadOnlyData_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessUpdateCharacterReadOnlyData.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabServerAPI_h_815_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessUpdateCharacterInternalData_Parms \
{ \
	FServerUpdateCharacterDataResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessUpdateCharacterInternalData_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessUpdateCharacterInternalData, FServerUpdateCharacterDataResult result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessUpdateCharacterInternalData_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessUpdateCharacterInternalData.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabServerAPI_h_802_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessUpdateCharacterData_Parms \
{ \
	FServerUpdateCharacterDataResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessUpdateCharacterData_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessUpdateCharacterData, FServerUpdateCharacterDataResult result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessUpdateCharacterData_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessUpdateCharacterData.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabServerAPI_h_789_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessGetCharacterReadOnlyData_Parms \
{ \
	FServerGetCharacterDataResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetCharacterReadOnlyData_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetCharacterReadOnlyData, FServerGetCharacterDataResult result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessGetCharacterReadOnlyData_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetCharacterReadOnlyData.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabServerAPI_h_776_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessGetCharacterInternalData_Parms \
{ \
	FServerGetCharacterDataResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetCharacterInternalData_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetCharacterInternalData, FServerGetCharacterDataResult result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessGetCharacterInternalData_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetCharacterInternalData.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabServerAPI_h_763_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessGetCharacterData_Parms \
{ \
	FServerGetCharacterDataResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetCharacterData_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetCharacterData, FServerGetCharacterDataResult result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessGetCharacterData_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetCharacterData.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabServerAPI_h_743_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessSetPlayerSecret_Parms \
{ \
	FServerSetPlayerSecretResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessSetPlayerSecret_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessSetPlayerSecret, FServerSetPlayerSecretResult result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessSetPlayerSecret_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessSetPlayerSecret.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabServerAPI_h_727_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessLoginWithXboxId_Parms \
{ \
	FServerServerLoginResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessLoginWithXboxId_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessLoginWithXboxId, FServerServerLoginResult result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessLoginWithXboxId_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessLoginWithXboxId.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabServerAPI_h_711_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessLoginWithXbox_Parms \
{ \
	FServerServerLoginResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessLoginWithXbox_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessLoginWithXbox, FServerServerLoginResult result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessLoginWithXbox_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessLoginWithXbox.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabServerAPI_h_695_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessLoginWithSteamId_Parms \
{ \
	FServerServerLoginResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessLoginWithSteamId_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessLoginWithSteamId, FServerServerLoginResult result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessLoginWithSteamId_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessLoginWithSteamId.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabServerAPI_h_679_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessLoginWithServerCustomId_Parms \
{ \
	FServerServerLoginResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessLoginWithServerCustomId_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessLoginWithServerCustomId, FServerServerLoginResult result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessLoginWithServerCustomId_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessLoginWithServerCustomId.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabServerAPI_h_666_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessAuthenticateSessionTicket_Parms \
{ \
	FServerAuthenticateSessionTicketResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessAuthenticateSessionTicket_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessAuthenticateSessionTicket, FServerAuthenticateSessionTicketResult result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessAuthenticateSessionTicket_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessAuthenticateSessionTicket.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabServerAPI_h_649_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessWriteTitleEvent_Parms \
{ \
	FServerWriteEventResponse result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessWriteTitleEvent_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessWriteTitleEvent, FServerWriteEventResponse result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessWriteTitleEvent_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessWriteTitleEvent.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabServerAPI_h_636_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessWritePlayerEvent_Parms \
{ \
	FServerWriteEventResponse result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessWritePlayerEvent_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessWritePlayerEvent, FServerWriteEventResponse result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessWritePlayerEvent_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessWritePlayerEvent.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabServerAPI_h_623_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessWriteCharacterEvent_Parms \
{ \
	FServerWriteEventResponse result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessWriteCharacterEvent_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessWriteCharacterEvent, FServerWriteEventResponse result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessWriteCharacterEvent_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessWriteCharacterEvent.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabServerAPI_h_606_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessUpdateBans_Parms \
{ \
	FServerUpdateBansResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessUpdateBans_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessUpdateBans, FServerUpdateBansResult result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessUpdateBans_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessUpdateBans.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabServerAPI_h_593_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessUpdateAvatarUrl_Parms \
{ \
	FServerEmptyResponse result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessUpdateAvatarUrl_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessUpdateAvatarUrl, FServerEmptyResponse result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessUpdateAvatarUrl_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessUpdateAvatarUrl.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabServerAPI_h_580_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessUnlinkXboxAccount_Parms \
{ \
	FServerUnlinkXboxAccountResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessUnlinkXboxAccount_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessUnlinkXboxAccount, FServerUnlinkXboxAccountResult result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessUnlinkXboxAccount_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessUnlinkXboxAccount.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabServerAPI_h_567_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessUnlinkSteamId_Parms \
{ \
	FServerUnlinkSteamIdResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessUnlinkSteamId_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessUnlinkSteamId, FServerUnlinkSteamIdResult result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessUnlinkSteamId_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessUnlinkSteamId.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabServerAPI_h_554_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessUnlinkServerCustomId_Parms \
{ \
	FServerUnlinkServerCustomIdResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessUnlinkServerCustomId_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessUnlinkServerCustomId, FServerUnlinkServerCustomIdResult result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessUnlinkServerCustomId_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessUnlinkServerCustomId.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabServerAPI_h_541_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessUnlinkPSNAccount_Parms \
{ \
	FServerUnlinkPSNAccountResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessUnlinkPSNAccount_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessUnlinkPSNAccount, FServerUnlinkPSNAccountResult result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessUnlinkPSNAccount_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessUnlinkPSNAccount.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabServerAPI_h_528_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessUnlinkNintendoSwitchDeviceId_Parms \
{ \
	FServerUnlinkNintendoSwitchDeviceIdResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessUnlinkNintendoSwitchDeviceId_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessUnlinkNintendoSwitchDeviceId, FServerUnlinkNintendoSwitchDeviceIdResult result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessUnlinkNintendoSwitchDeviceId_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessUnlinkNintendoSwitchDeviceId.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabServerAPI_h_515_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessUnlinkNintendoServiceAccount_Parms \
{ \
	FServerEmptyResponse result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessUnlinkNintendoServiceAccount_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessUnlinkNintendoServiceAccount, FServerEmptyResponse result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessUnlinkNintendoServiceAccount_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessUnlinkNintendoServiceAccount.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabServerAPI_h_499_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessSendPushNotificationFromTemplate_Parms \
{ \
	FServerSendPushNotificationResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessSendPushNotificationFromTemplate_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessSendPushNotificationFromTemplate, FServerSendPushNotificationResult result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessSendPushNotificationFromTemplate_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessSendPushNotificationFromTemplate.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabServerAPI_h_483_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessSendPushNotification_Parms \
{ \
	FServerSendPushNotificationResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessSendPushNotification_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessSendPushNotification, FServerSendPushNotificationResult result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessSendPushNotification_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessSendPushNotification.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabServerAPI_h_470_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessSendEmailFromTemplate_Parms \
{ \
	FServerSendEmailFromTemplateResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessSendEmailFromTemplate_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessSendEmailFromTemplate, FServerSendEmailFromTemplateResult result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessSendEmailFromTemplate_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessSendEmailFromTemplate.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabServerAPI_h_454_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessSendCustomAccountRecoveryEmail_Parms \
{ \
	FServerSendCustomAccountRecoveryEmailResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessSendCustomAccountRecoveryEmail_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessSendCustomAccountRecoveryEmail, FServerSendCustomAccountRecoveryEmailResult result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessSendCustomAccountRecoveryEmail_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessSendCustomAccountRecoveryEmail.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabServerAPI_h_441_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessSavePushNotificationTemplate_Parms \
{ \
	FServerSavePushNotificationTemplateResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessSavePushNotificationTemplate_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessSavePushNotificationTemplate, FServerSavePushNotificationTemplateResult result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessSavePushNotificationTemplate_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessSavePushNotificationTemplate.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabServerAPI_h_428_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessRevokeBans_Parms \
{ \
	FServerRevokeBansResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessRevokeBans_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessRevokeBans, FServerRevokeBansResult result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessRevokeBans_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessRevokeBans.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabServerAPI_h_415_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessRevokeAllBansForUser_Parms \
{ \
	FServerRevokeAllBansForUserResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessRevokeAllBansForUser_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessRevokeAllBansForUser, FServerRevokeAllBansForUserResult result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessRevokeAllBansForUser_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessRevokeAllBansForUser.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabServerAPI_h_402_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessRemoveGenericID_Parms \
{ \
	FServerEmptyResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessRemoveGenericID_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessRemoveGenericID, FServerEmptyResult result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessRemoveGenericID_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessRemoveGenericID.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabServerAPI_h_389_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessLinkXboxAccount_Parms \
{ \
	FServerLinkXboxAccountResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessLinkXboxAccount_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessLinkXboxAccount, FServerLinkXboxAccountResult result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessLinkXboxAccount_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessLinkXboxAccount.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabServerAPI_h_376_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessLinkSteamId_Parms \
{ \
	FServerLinkSteamIdResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessLinkSteamId_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessLinkSteamId, FServerLinkSteamIdResult result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessLinkSteamId_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessLinkSteamId.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabServerAPI_h_363_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessLinkServerCustomId_Parms \
{ \
	FServerLinkServerCustomIdResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessLinkServerCustomId_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessLinkServerCustomId, FServerLinkServerCustomIdResult result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessLinkServerCustomId_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessLinkServerCustomId.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabServerAPI_h_350_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessLinkPSNId_Parms \
{ \
	FServerLinkPSNIdResponse result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessLinkPSNId_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessLinkPSNId, FServerLinkPSNIdResponse result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessLinkPSNId_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessLinkPSNId.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabServerAPI_h_337_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessLinkPSNAccount_Parms \
{ \
	FServerLinkPSNAccountResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessLinkPSNAccount_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessLinkPSNAccount, FServerLinkPSNAccountResult result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessLinkPSNAccount_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessLinkPSNAccount.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabServerAPI_h_324_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessLinkNintendoSwitchDeviceId_Parms \
{ \
	FServerLinkNintendoSwitchDeviceIdResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessLinkNintendoSwitchDeviceId_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessLinkNintendoSwitchDeviceId, FServerLinkNintendoSwitchDeviceIdResult result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessLinkNintendoSwitchDeviceId_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessLinkNintendoSwitchDeviceId.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabServerAPI_h_311_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessLinkNintendoServiceAccountSubject_Parms \
{ \
	FServerEmptyResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessLinkNintendoServiceAccountSubject_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessLinkNintendoServiceAccountSubject, FServerEmptyResult result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessLinkNintendoServiceAccountSubject_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessLinkNintendoServiceAccountSubject.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabServerAPI_h_298_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessLinkNintendoServiceAccount_Parms \
{ \
	FServerEmptyResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessLinkNintendoServiceAccount_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessLinkNintendoServiceAccount, FServerEmptyResult result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessLinkNintendoServiceAccount_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessLinkNintendoServiceAccount.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabServerAPI_h_285_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessGetUserBans_Parms \
{ \
	FServerGetUserBansResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetUserBans_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetUserBans, FServerGetUserBansResult result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessGetUserBans_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetUserBans.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabServerAPI_h_272_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessGetUserAccountInfo_Parms \
{ \
	FServerGetUserAccountInfoResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetUserAccountInfo_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetUserAccountInfo, FServerGetUserAccountInfoResult result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessGetUserAccountInfo_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetUserAccountInfo.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabServerAPI_h_259_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessGetServerCustomIDsFromPlayFabIDs_Parms \
{ \
	FServerGetServerCustomIDsFromPlayFabIDsResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetServerCustomIDsFromPlayFabIDs_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetServerCustomIDsFromPlayFabIDs, FServerGetServerCustomIDsFromPlayFabIDsResult result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessGetServerCustomIDsFromPlayFabIDs_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetServerCustomIDsFromPlayFabIDs.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabServerAPI_h_246_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessGetPlayFabIDsFromXboxLiveIDs_Parms \
{ \
	FServerGetPlayFabIDsFromXboxLiveIDsResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetPlayFabIDsFromXboxLiveIDs_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetPlayFabIDsFromXboxLiveIDs, FServerGetPlayFabIDsFromXboxLiveIDsResult result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessGetPlayFabIDsFromXboxLiveIDs_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetPlayFabIDsFromXboxLiveIDs.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabServerAPI_h_229_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessGetPlayFabIDsFromTwitchIDs_Parms \
{ \
	FServerGetPlayFabIDsFromTwitchIDsResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetPlayFabIDsFromTwitchIDs_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetPlayFabIDsFromTwitchIDs, FServerGetPlayFabIDsFromTwitchIDsResult result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessGetPlayFabIDsFromTwitchIDs_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetPlayFabIDsFromTwitchIDs.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabServerAPI_h_213_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessGetPlayFabIDsFromSteamIDs_Parms \
{ \
	FServerGetPlayFabIDsFromSteamIDsResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetPlayFabIDsFromSteamIDs_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetPlayFabIDsFromSteamIDs, FServerGetPlayFabIDsFromSteamIDsResult result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessGetPlayFabIDsFromSteamIDs_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetPlayFabIDsFromSteamIDs.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabServerAPI_h_200_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessGetPlayFabIDsFromPSNAccountIDs_Parms \
{ \
	FServerGetPlayFabIDsFromPSNAccountIDsResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetPlayFabIDsFromPSNAccountIDs_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetPlayFabIDsFromPSNAccountIDs, FServerGetPlayFabIDsFromPSNAccountIDsResult result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessGetPlayFabIDsFromPSNAccountIDs_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetPlayFabIDsFromPSNAccountIDs.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabServerAPI_h_187_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessGetPlayFabIDsFromNintendoSwitchDeviceIds_Parms \
{ \
	FServerGetPlayFabIDsFromNintendoSwitchDeviceIdsResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetPlayFabIDsFromNintendoSwitchDeviceIds_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetPlayFabIDsFromNintendoSwitchDeviceIds, FServerGetPlayFabIDsFromNintendoSwitchDeviceIdsResult result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessGetPlayFabIDsFromNintendoSwitchDeviceIds_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetPlayFabIDsFromNintendoSwitchDeviceIds.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabServerAPI_h_174_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessGetPlayFabIDsFromNintendoServiceAccountIds_Parms \
{ \
	FServerGetPlayFabIDsFromNintendoServiceAccountIdsResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetPlayFabIDsFromNintendoServiceAccountIds_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetPlayFabIDsFromNintendoServiceAccountIds, FServerGetPlayFabIDsFromNintendoServiceAccountIdsResult result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessGetPlayFabIDsFromNintendoServiceAccountIds_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetPlayFabIDsFromNintendoServiceAccountIds.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabServerAPI_h_157_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessGetPlayFabIDsFromGenericIDs_Parms \
{ \
	FServerGetPlayFabIDsFromGenericIDsResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetPlayFabIDsFromGenericIDs_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetPlayFabIDsFromGenericIDs, FServerGetPlayFabIDsFromGenericIDsResult result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessGetPlayFabIDsFromGenericIDs_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetPlayFabIDsFromGenericIDs.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabServerAPI_h_144_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessGetPlayFabIDsFromFacebookInstantGamesIds_Parms \
{ \
	FServerGetPlayFabIDsFromFacebookInstantGamesIdsResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetPlayFabIDsFromFacebookInstantGamesIds_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetPlayFabIDsFromFacebookInstantGamesIds, FServerGetPlayFabIDsFromFacebookInstantGamesIdsResult result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessGetPlayFabIDsFromFacebookInstantGamesIds_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetPlayFabIDsFromFacebookInstantGamesIds.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabServerAPI_h_131_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessGetPlayFabIDsFromFacebookIDs_Parms \
{ \
	FServerGetPlayFabIDsFromFacebookIDsResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetPlayFabIDsFromFacebookIDs_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetPlayFabIDsFromFacebookIDs, FServerGetPlayFabIDsFromFacebookIDsResult result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessGetPlayFabIDsFromFacebookIDs_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetPlayFabIDsFromFacebookIDs.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabServerAPI_h_118_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessGetPlayerProfile_Parms \
{ \
	FServerGetPlayerProfileResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetPlayerProfile_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetPlayerProfile, FServerGetPlayerProfileResult result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessGetPlayerProfile_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetPlayerProfile.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabServerAPI_h_105_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessDeletePushNotificationTemplate_Parms \
{ \
	FServerDeletePushNotificationTemplateResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessDeletePushNotificationTemplate_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessDeletePushNotificationTemplate, FServerDeletePushNotificationTemplateResult result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessDeletePushNotificationTemplate_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessDeletePushNotificationTemplate.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabServerAPI_h_92_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessDeletePlayer_Parms \
{ \
	FServerDeletePlayerResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessDeletePlayer_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessDeletePlayer, FServerDeletePlayerResult result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessDeletePlayer_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessDeletePlayer.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabServerAPI_h_79_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessBanUsers_Parms \
{ \
	FServerBanUsersResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessBanUsers_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessBanUsers, FServerBanUsersResult result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessBanUsers_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessBanUsers.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabServerAPI_h_62_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnSuccessAddGenericID_Parms \
{ \
	FServerEmptyResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessAddGenericID_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessAddGenericID, FServerEmptyResult result, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnSuccessAddGenericID_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessAddGenericID.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabServerAPI_h_32_DELEGATE \
struct PlayFabServerAPI_eventDelegateOnFailurePlayFabError_Parms \
{ \
	FPlayFabError error; \
	UObject* customData; \
}; \
static inline void FDelegateOnFailurePlayFabError_DelegateWrapper(const FScriptDelegate& DelegateOnFailurePlayFabError, FPlayFabError error, UObject* customData) \
{ \
	PlayFabServerAPI_eventDelegateOnFailurePlayFabError_Parms Parms; \
	Parms.error=error; \
	Parms.customData=customData; \
	DelegateOnFailurePlayFabError.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabServerAPI_h_24_DELEGATE \
struct _Script_PlayFab_eventOnPlayFabServerRequestCompleted_Parms \
{ \
	FPlayFabBaseModel response; \
	UObject* customData; \
	bool successful; \
}; \
static inline void FOnPlayFabServerRequestCompleted_DelegateWrapper(const FMulticastScriptDelegate& OnPlayFabServerRequestCompleted, FPlayFabBaseModel response, UObject* customData, bool successful) \
{ \
	_Script_PlayFab_eventOnPlayFabServerRequestCompleted_Parms Parms; \
	Parms.response=response; \
	Parms.customData=customData; \
	Parms.successful=successful ? true : false; \
	OnPlayFabServerRequestCompleted.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabServerAPI_h_29_SPARSE_DATA
#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabServerAPI_h_29_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHelperSetTitleInternalData); \
	DECLARE_FUNCTION(execSetTitleInternalData); \
	DECLARE_FUNCTION(execHelperSetTitleData); \
	DECLARE_FUNCTION(execSetTitleData); \
	DECLARE_FUNCTION(execHelperSetPublisherData); \
	DECLARE_FUNCTION(execSetPublisherData); \
	DECLARE_FUNCTION(execHelperGetTitleNews); \
	DECLARE_FUNCTION(execGetTitleNews); \
	DECLARE_FUNCTION(execHelperGetTitleInternalData); \
	DECLARE_FUNCTION(execGetTitleInternalData); \
	DECLARE_FUNCTION(execHelperGetTitleData); \
	DECLARE_FUNCTION(execGetTitleData); \
	DECLARE_FUNCTION(execHelperGetTime); \
	DECLARE_FUNCTION(execGetTime); \
	DECLARE_FUNCTION(execHelperGetStoreItems); \
	DECLARE_FUNCTION(execGetStoreItems); \
	DECLARE_FUNCTION(execHelperGetPublisherData); \
	DECLARE_FUNCTION(execGetPublisherData); \
	DECLARE_FUNCTION(execHelperGetCatalogItems); \
	DECLARE_FUNCTION(execGetCatalogItems); \
	DECLARE_FUNCTION(execHelperUpdateSharedGroupData); \
	DECLARE_FUNCTION(execUpdateSharedGroupData); \
	DECLARE_FUNCTION(execHelperRemoveSharedGroupMembers); \
	DECLARE_FUNCTION(execRemoveSharedGroupMembers); \
	DECLARE_FUNCTION(execHelperGetSharedGroupData); \
	DECLARE_FUNCTION(execGetSharedGroupData); \
	DECLARE_FUNCTION(execHelperDeleteSharedGroup); \
	DECLARE_FUNCTION(execDeleteSharedGroup); \
	DECLARE_FUNCTION(execHelperCreateSharedGroup); \
	DECLARE_FUNCTION(execCreateSharedGroup); \
	DECLARE_FUNCTION(execHelperAddSharedGroupMembers); \
	DECLARE_FUNCTION(execAddSharedGroupMembers); \
	DECLARE_FUNCTION(execHelperExecuteCloudScript); \
	DECLARE_FUNCTION(execExecuteCloudScript); \
	DECLARE_FUNCTION(execHelperRemovePlayerTag); \
	DECLARE_FUNCTION(execRemovePlayerTag); \
	DECLARE_FUNCTION(execHelperGetPlayerTags); \
	DECLARE_FUNCTION(execGetPlayerTags); \
	DECLARE_FUNCTION(execHelperGetPlayersInSegment); \
	DECLARE_FUNCTION(execGetPlayersInSegment); \
	DECLARE_FUNCTION(execHelperGetPlayerSegments); \
	DECLARE_FUNCTION(execGetPlayerSegments); \
	DECLARE_FUNCTION(execHelperGetAllSegments); \
	DECLARE_FUNCTION(execGetAllSegments); \
	DECLARE_FUNCTION(execHelperAddPlayerTag); \
	DECLARE_FUNCTION(execAddPlayerTag); \
	DECLARE_FUNCTION(execHelperUpdateUserInventoryItemCustomData); \
	DECLARE_FUNCTION(execUpdateUserInventoryItemCustomData); \
	DECLARE_FUNCTION(execHelperUnlockContainerItem); \
	DECLARE_FUNCTION(execUnlockContainerItem); \
	DECLARE_FUNCTION(execHelperUnlockContainerInstance); \
	DECLARE_FUNCTION(execUnlockContainerInstance); \
	DECLARE_FUNCTION(execHelperSubtractUserVirtualCurrency); \
	DECLARE_FUNCTION(execSubtractUserVirtualCurrency); \
	DECLARE_FUNCTION(execHelperSubtractCharacterVirtualCurrency); \
	DECLARE_FUNCTION(execSubtractCharacterVirtualCurrency); \
	DECLARE_FUNCTION(execHelperRevokeInventoryItems); \
	DECLARE_FUNCTION(execRevokeInventoryItems); \
	DECLARE_FUNCTION(execHelperRevokeInventoryItem); \
	DECLARE_FUNCTION(execRevokeInventoryItem); \
	DECLARE_FUNCTION(execHelperReportPlayer); \
	DECLARE_FUNCTION(execReportPlayer); \
	DECLARE_FUNCTION(execHelperRedeemCoupon); \
	DECLARE_FUNCTION(execRedeemCoupon); \
	DECLARE_FUNCTION(execHelperMoveItemToUserFromCharacter); \
	DECLARE_FUNCTION(execMoveItemToUserFromCharacter); \
	DECLARE_FUNCTION(execHelperMoveItemToCharacterFromUser); \
	DECLARE_FUNCTION(execMoveItemToCharacterFromUser); \
	DECLARE_FUNCTION(execHelperMoveItemToCharacterFromCharacter); \
	DECLARE_FUNCTION(execMoveItemToCharacterFromCharacter); \
	DECLARE_FUNCTION(execHelperModifyItemUses); \
	DECLARE_FUNCTION(execModifyItemUses); \
	DECLARE_FUNCTION(execHelperGrantItemsToUsers); \
	DECLARE_FUNCTION(execGrantItemsToUsers); \
	DECLARE_FUNCTION(execHelperGrantItemsToUser); \
	DECLARE_FUNCTION(execGrantItemsToUser); \
	DECLARE_FUNCTION(execHelperGrantItemsToCharacter); \
	DECLARE_FUNCTION(execGrantItemsToCharacter); \
	DECLARE_FUNCTION(execHelperGetUserInventory); \
	DECLARE_FUNCTION(execGetUserInventory); \
	DECLARE_FUNCTION(execHelperGetRandomResultTables); \
	DECLARE_FUNCTION(execGetRandomResultTables); \
	DECLARE_FUNCTION(execHelperGetCharacterInventory); \
	DECLARE_FUNCTION(execGetCharacterInventory); \
	DECLARE_FUNCTION(execHelperEvaluateRandomResultTable); \
	DECLARE_FUNCTION(execEvaluateRandomResultTable); \
	DECLARE_FUNCTION(execHelperConsumeItem); \
	DECLARE_FUNCTION(execConsumeItem); \
	DECLARE_FUNCTION(execHelperAddUserVirtualCurrency); \
	DECLARE_FUNCTION(execAddUserVirtualCurrency); \
	DECLARE_FUNCTION(execHelperAddCharacterVirtualCurrency); \
	DECLARE_FUNCTION(execAddCharacterVirtualCurrency); \
	DECLARE_FUNCTION(execHelperUpdateUserReadOnlyData); \
	DECLARE_FUNCTION(execUpdateUserReadOnlyData); \
	DECLARE_FUNCTION(execHelperUpdateUserPublisherReadOnlyData); \
	DECLARE_FUNCTION(execUpdateUserPublisherReadOnlyData); \
	DECLARE_FUNCTION(execHelperUpdateUserPublisherInternalData); \
	DECLARE_FUNCTION(execUpdateUserPublisherInternalData); \
	DECLARE_FUNCTION(execHelperUpdateUserPublisherData); \
	DECLARE_FUNCTION(execUpdateUserPublisherData); \
	DECLARE_FUNCTION(execHelperUpdateUserInternalData); \
	DECLARE_FUNCTION(execUpdateUserInternalData); \
	DECLARE_FUNCTION(execHelperUpdateUserData); \
	DECLARE_FUNCTION(execUpdateUserData); \
	DECLARE_FUNCTION(execHelperUpdatePlayerStatistics); \
	DECLARE_FUNCTION(execUpdatePlayerStatistics); \
	DECLARE_FUNCTION(execHelperGetUserReadOnlyData); \
	DECLARE_FUNCTION(execGetUserReadOnlyData); \
	DECLARE_FUNCTION(execHelperGetUserPublisherReadOnlyData); \
	DECLARE_FUNCTION(execGetUserPublisherReadOnlyData); \
	DECLARE_FUNCTION(execHelperGetUserPublisherInternalData); \
	DECLARE_FUNCTION(execGetUserPublisherInternalData); \
	DECLARE_FUNCTION(execHelperGetUserPublisherData); \
	DECLARE_FUNCTION(execGetUserPublisherData); \
	DECLARE_FUNCTION(execHelperGetUserInternalData); \
	DECLARE_FUNCTION(execGetUserInternalData); \
	DECLARE_FUNCTION(execHelperGetUserData); \
	DECLARE_FUNCTION(execGetUserData); \
	DECLARE_FUNCTION(execHelperGetPlayerStatisticVersions); \
	DECLARE_FUNCTION(execGetPlayerStatisticVersions); \
	DECLARE_FUNCTION(execHelperGetPlayerStatistics); \
	DECLARE_FUNCTION(execGetPlayerStatistics); \
	DECLARE_FUNCTION(execHelperGetPlayerCombinedInfo); \
	DECLARE_FUNCTION(execGetPlayerCombinedInfo); \
	DECLARE_FUNCTION(execHelperGetLeaderboardAroundUser); \
	DECLARE_FUNCTION(execGetLeaderboardAroundUser); \
	DECLARE_FUNCTION(execHelperGetLeaderboard); \
	DECLARE_FUNCTION(execGetLeaderboard); \
	DECLARE_FUNCTION(execHelperGetFriendLeaderboard); \
	DECLARE_FUNCTION(execGetFriendLeaderboard); \
	DECLARE_FUNCTION(execHelperAwardSteamAchievement); \
	DECLARE_FUNCTION(execAwardSteamAchievement); \
	DECLARE_FUNCTION(execHelperSetFriendTags); \
	DECLARE_FUNCTION(execSetFriendTags); \
	DECLARE_FUNCTION(execHelperRemoveFriend); \
	DECLARE_FUNCTION(execRemoveFriend); \
	DECLARE_FUNCTION(execHelperGetFriendsList); \
	DECLARE_FUNCTION(execGetFriendsList); \
	DECLARE_FUNCTION(execHelperAddFriend); \
	DECLARE_FUNCTION(execAddFriend); \
	DECLARE_FUNCTION(execHelperGetContentDownloadUrl); \
	DECLARE_FUNCTION(execGetContentDownloadUrl); \
	DECLARE_FUNCTION(execHelperUpdateCharacterStatistics); \
	DECLARE_FUNCTION(execUpdateCharacterStatistics); \
	DECLARE_FUNCTION(execHelperGrantCharacterToUser); \
	DECLARE_FUNCTION(execGrantCharacterToUser); \
	DECLARE_FUNCTION(execHelperGetLeaderboardForUserCharacters); \
	DECLARE_FUNCTION(execGetLeaderboardForUserCharacters); \
	DECLARE_FUNCTION(execHelperGetLeaderboardAroundCharacter); \
	DECLARE_FUNCTION(execGetLeaderboardAroundCharacter); \
	DECLARE_FUNCTION(execHelperGetCharacterStatistics); \
	DECLARE_FUNCTION(execGetCharacterStatistics); \
	DECLARE_FUNCTION(execHelperGetCharacterLeaderboard); \
	DECLARE_FUNCTION(execGetCharacterLeaderboard); \
	DECLARE_FUNCTION(execHelperGetAllUsersCharacters); \
	DECLARE_FUNCTION(execGetAllUsersCharacters); \
	DECLARE_FUNCTION(execHelperDeleteCharacterFromUser); \
	DECLARE_FUNCTION(execDeleteCharacterFromUser); \
	DECLARE_FUNCTION(execHelperUpdateCharacterReadOnlyData); \
	DECLARE_FUNCTION(execUpdateCharacterReadOnlyData); \
	DECLARE_FUNCTION(execHelperUpdateCharacterInternalData); \
	DECLARE_FUNCTION(execUpdateCharacterInternalData); \
	DECLARE_FUNCTION(execHelperUpdateCharacterData); \
	DECLARE_FUNCTION(execUpdateCharacterData); \
	DECLARE_FUNCTION(execHelperGetCharacterReadOnlyData); \
	DECLARE_FUNCTION(execGetCharacterReadOnlyData); \
	DECLARE_FUNCTION(execHelperGetCharacterInternalData); \
	DECLARE_FUNCTION(execGetCharacterInternalData); \
	DECLARE_FUNCTION(execHelperGetCharacterData); \
	DECLARE_FUNCTION(execGetCharacterData); \
	DECLARE_FUNCTION(execHelperSetPlayerSecret); \
	DECLARE_FUNCTION(execSetPlayerSecret); \
	DECLARE_FUNCTION(execHelperLoginWithXboxId); \
	DECLARE_FUNCTION(execLoginWithXboxId); \
	DECLARE_FUNCTION(execHelperLoginWithXbox); \
	DECLARE_FUNCTION(execLoginWithXbox); \
	DECLARE_FUNCTION(execHelperLoginWithSteamId); \
	DECLARE_FUNCTION(execLoginWithSteamId); \
	DECLARE_FUNCTION(execHelperLoginWithServerCustomId); \
	DECLARE_FUNCTION(execLoginWithServerCustomId); \
	DECLARE_FUNCTION(execHelperAuthenticateSessionTicket); \
	DECLARE_FUNCTION(execAuthenticateSessionTicket); \
	DECLARE_FUNCTION(execHelperWriteTitleEvent); \
	DECLARE_FUNCTION(execWriteTitleEvent); \
	DECLARE_FUNCTION(execHelperWritePlayerEvent); \
	DECLARE_FUNCTION(execWritePlayerEvent); \
	DECLARE_FUNCTION(execHelperWriteCharacterEvent); \
	DECLARE_FUNCTION(execWriteCharacterEvent); \
	DECLARE_FUNCTION(execHelperUpdateBans); \
	DECLARE_FUNCTION(execUpdateBans); \
	DECLARE_FUNCTION(execHelperUpdateAvatarUrl); \
	DECLARE_FUNCTION(execUpdateAvatarUrl); \
	DECLARE_FUNCTION(execHelperUnlinkXboxAccount); \
	DECLARE_FUNCTION(execUnlinkXboxAccount); \
	DECLARE_FUNCTION(execHelperUnlinkSteamId); \
	DECLARE_FUNCTION(execUnlinkSteamId); \
	DECLARE_FUNCTION(execHelperUnlinkServerCustomId); \
	DECLARE_FUNCTION(execUnlinkServerCustomId); \
	DECLARE_FUNCTION(execHelperUnlinkPSNAccount); \
	DECLARE_FUNCTION(execUnlinkPSNAccount); \
	DECLARE_FUNCTION(execHelperUnlinkNintendoSwitchDeviceId); \
	DECLARE_FUNCTION(execUnlinkNintendoSwitchDeviceId); \
	DECLARE_FUNCTION(execHelperUnlinkNintendoServiceAccount); \
	DECLARE_FUNCTION(execUnlinkNintendoServiceAccount); \
	DECLARE_FUNCTION(execHelperSendPushNotificationFromTemplate); \
	DECLARE_FUNCTION(execSendPushNotificationFromTemplate); \
	DECLARE_FUNCTION(execHelperSendPushNotification); \
	DECLARE_FUNCTION(execSendPushNotification); \
	DECLARE_FUNCTION(execHelperSendEmailFromTemplate); \
	DECLARE_FUNCTION(execSendEmailFromTemplate); \
	DECLARE_FUNCTION(execHelperSendCustomAccountRecoveryEmail); \
	DECLARE_FUNCTION(execSendCustomAccountRecoveryEmail); \
	DECLARE_FUNCTION(execHelperSavePushNotificationTemplate); \
	DECLARE_FUNCTION(execSavePushNotificationTemplate); \
	DECLARE_FUNCTION(execHelperRevokeBans); \
	DECLARE_FUNCTION(execRevokeBans); \
	DECLARE_FUNCTION(execHelperRevokeAllBansForUser); \
	DECLARE_FUNCTION(execRevokeAllBansForUser); \
	DECLARE_FUNCTION(execHelperRemoveGenericID); \
	DECLARE_FUNCTION(execRemoveGenericID); \
	DECLARE_FUNCTION(execHelperLinkXboxAccount); \
	DECLARE_FUNCTION(execLinkXboxAccount); \
	DECLARE_FUNCTION(execHelperLinkSteamId); \
	DECLARE_FUNCTION(execLinkSteamId); \
	DECLARE_FUNCTION(execHelperLinkServerCustomId); \
	DECLARE_FUNCTION(execLinkServerCustomId); \
	DECLARE_FUNCTION(execHelperLinkPSNId); \
	DECLARE_FUNCTION(execLinkPSNId); \
	DECLARE_FUNCTION(execHelperLinkPSNAccount); \
	DECLARE_FUNCTION(execLinkPSNAccount); \
	DECLARE_FUNCTION(execHelperLinkNintendoSwitchDeviceId); \
	DECLARE_FUNCTION(execLinkNintendoSwitchDeviceId); \
	DECLARE_FUNCTION(execHelperLinkNintendoServiceAccountSubject); \
	DECLARE_FUNCTION(execLinkNintendoServiceAccountSubject); \
	DECLARE_FUNCTION(execHelperLinkNintendoServiceAccount); \
	DECLARE_FUNCTION(execLinkNintendoServiceAccount); \
	DECLARE_FUNCTION(execHelperGetUserBans); \
	DECLARE_FUNCTION(execGetUserBans); \
	DECLARE_FUNCTION(execHelperGetUserAccountInfo); \
	DECLARE_FUNCTION(execGetUserAccountInfo); \
	DECLARE_FUNCTION(execHelperGetServerCustomIDsFromPlayFabIDs); \
	DECLARE_FUNCTION(execGetServerCustomIDsFromPlayFabIDs); \
	DECLARE_FUNCTION(execHelperGetPlayFabIDsFromXboxLiveIDs); \
	DECLARE_FUNCTION(execGetPlayFabIDsFromXboxLiveIDs); \
	DECLARE_FUNCTION(execHelperGetPlayFabIDsFromTwitchIDs); \
	DECLARE_FUNCTION(execGetPlayFabIDsFromTwitchIDs); \
	DECLARE_FUNCTION(execHelperGetPlayFabIDsFromSteamIDs); \
	DECLARE_FUNCTION(execGetPlayFabIDsFromSteamIDs); \
	DECLARE_FUNCTION(execHelperGetPlayFabIDsFromPSNAccountIDs); \
	DECLARE_FUNCTION(execGetPlayFabIDsFromPSNAccountIDs); \
	DECLARE_FUNCTION(execHelperGetPlayFabIDsFromNintendoSwitchDeviceIds); \
	DECLARE_FUNCTION(execGetPlayFabIDsFromNintendoSwitchDeviceIds); \
	DECLARE_FUNCTION(execHelperGetPlayFabIDsFromNintendoServiceAccountIds); \
	DECLARE_FUNCTION(execGetPlayFabIDsFromNintendoServiceAccountIds); \
	DECLARE_FUNCTION(execHelperGetPlayFabIDsFromGenericIDs); \
	DECLARE_FUNCTION(execGetPlayFabIDsFromGenericIDs); \
	DECLARE_FUNCTION(execHelperGetPlayFabIDsFromFacebookInstantGamesIds); \
	DECLARE_FUNCTION(execGetPlayFabIDsFromFacebookInstantGamesIds); \
	DECLARE_FUNCTION(execHelperGetPlayFabIDsFromFacebookIDs); \
	DECLARE_FUNCTION(execGetPlayFabIDsFromFacebookIDs); \
	DECLARE_FUNCTION(execHelperGetPlayerProfile); \
	DECLARE_FUNCTION(execGetPlayerProfile); \
	DECLARE_FUNCTION(execHelperDeletePushNotificationTemplate); \
	DECLARE_FUNCTION(execDeletePushNotificationTemplate); \
	DECLARE_FUNCTION(execHelperDeletePlayer); \
	DECLARE_FUNCTION(execDeletePlayer); \
	DECLARE_FUNCTION(execHelperBanUsers); \
	DECLARE_FUNCTION(execBanUsers); \
	DECLARE_FUNCTION(execHelperAddGenericID); \
	DECLARE_FUNCTION(execAddGenericID);


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabServerAPI_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHelperSetTitleInternalData); \
	DECLARE_FUNCTION(execSetTitleInternalData); \
	DECLARE_FUNCTION(execHelperSetTitleData); \
	DECLARE_FUNCTION(execSetTitleData); \
	DECLARE_FUNCTION(execHelperSetPublisherData); \
	DECLARE_FUNCTION(execSetPublisherData); \
	DECLARE_FUNCTION(execHelperGetTitleNews); \
	DECLARE_FUNCTION(execGetTitleNews); \
	DECLARE_FUNCTION(execHelperGetTitleInternalData); \
	DECLARE_FUNCTION(execGetTitleInternalData); \
	DECLARE_FUNCTION(execHelperGetTitleData); \
	DECLARE_FUNCTION(execGetTitleData); \
	DECLARE_FUNCTION(execHelperGetTime); \
	DECLARE_FUNCTION(execGetTime); \
	DECLARE_FUNCTION(execHelperGetStoreItems); \
	DECLARE_FUNCTION(execGetStoreItems); \
	DECLARE_FUNCTION(execHelperGetPublisherData); \
	DECLARE_FUNCTION(execGetPublisherData); \
	DECLARE_FUNCTION(execHelperGetCatalogItems); \
	DECLARE_FUNCTION(execGetCatalogItems); \
	DECLARE_FUNCTION(execHelperUpdateSharedGroupData); \
	DECLARE_FUNCTION(execUpdateSharedGroupData); \
	DECLARE_FUNCTION(execHelperRemoveSharedGroupMembers); \
	DECLARE_FUNCTION(execRemoveSharedGroupMembers); \
	DECLARE_FUNCTION(execHelperGetSharedGroupData); \
	DECLARE_FUNCTION(execGetSharedGroupData); \
	DECLARE_FUNCTION(execHelperDeleteSharedGroup); \
	DECLARE_FUNCTION(execDeleteSharedGroup); \
	DECLARE_FUNCTION(execHelperCreateSharedGroup); \
	DECLARE_FUNCTION(execCreateSharedGroup); \
	DECLARE_FUNCTION(execHelperAddSharedGroupMembers); \
	DECLARE_FUNCTION(execAddSharedGroupMembers); \
	DECLARE_FUNCTION(execHelperExecuteCloudScript); \
	DECLARE_FUNCTION(execExecuteCloudScript); \
	DECLARE_FUNCTION(execHelperRemovePlayerTag); \
	DECLARE_FUNCTION(execRemovePlayerTag); \
	DECLARE_FUNCTION(execHelperGetPlayerTags); \
	DECLARE_FUNCTION(execGetPlayerTags); \
	DECLARE_FUNCTION(execHelperGetPlayersInSegment); \
	DECLARE_FUNCTION(execGetPlayersInSegment); \
	DECLARE_FUNCTION(execHelperGetPlayerSegments); \
	DECLARE_FUNCTION(execGetPlayerSegments); \
	DECLARE_FUNCTION(execHelperGetAllSegments); \
	DECLARE_FUNCTION(execGetAllSegments); \
	DECLARE_FUNCTION(execHelperAddPlayerTag); \
	DECLARE_FUNCTION(execAddPlayerTag); \
	DECLARE_FUNCTION(execHelperUpdateUserInventoryItemCustomData); \
	DECLARE_FUNCTION(execUpdateUserInventoryItemCustomData); \
	DECLARE_FUNCTION(execHelperUnlockContainerItem); \
	DECLARE_FUNCTION(execUnlockContainerItem); \
	DECLARE_FUNCTION(execHelperUnlockContainerInstance); \
	DECLARE_FUNCTION(execUnlockContainerInstance); \
	DECLARE_FUNCTION(execHelperSubtractUserVirtualCurrency); \
	DECLARE_FUNCTION(execSubtractUserVirtualCurrency); \
	DECLARE_FUNCTION(execHelperSubtractCharacterVirtualCurrency); \
	DECLARE_FUNCTION(execSubtractCharacterVirtualCurrency); \
	DECLARE_FUNCTION(execHelperRevokeInventoryItems); \
	DECLARE_FUNCTION(execRevokeInventoryItems); \
	DECLARE_FUNCTION(execHelperRevokeInventoryItem); \
	DECLARE_FUNCTION(execRevokeInventoryItem); \
	DECLARE_FUNCTION(execHelperReportPlayer); \
	DECLARE_FUNCTION(execReportPlayer); \
	DECLARE_FUNCTION(execHelperRedeemCoupon); \
	DECLARE_FUNCTION(execRedeemCoupon); \
	DECLARE_FUNCTION(execHelperMoveItemToUserFromCharacter); \
	DECLARE_FUNCTION(execMoveItemToUserFromCharacter); \
	DECLARE_FUNCTION(execHelperMoveItemToCharacterFromUser); \
	DECLARE_FUNCTION(execMoveItemToCharacterFromUser); \
	DECLARE_FUNCTION(execHelperMoveItemToCharacterFromCharacter); \
	DECLARE_FUNCTION(execMoveItemToCharacterFromCharacter); \
	DECLARE_FUNCTION(execHelperModifyItemUses); \
	DECLARE_FUNCTION(execModifyItemUses); \
	DECLARE_FUNCTION(execHelperGrantItemsToUsers); \
	DECLARE_FUNCTION(execGrantItemsToUsers); \
	DECLARE_FUNCTION(execHelperGrantItemsToUser); \
	DECLARE_FUNCTION(execGrantItemsToUser); \
	DECLARE_FUNCTION(execHelperGrantItemsToCharacter); \
	DECLARE_FUNCTION(execGrantItemsToCharacter); \
	DECLARE_FUNCTION(execHelperGetUserInventory); \
	DECLARE_FUNCTION(execGetUserInventory); \
	DECLARE_FUNCTION(execHelperGetRandomResultTables); \
	DECLARE_FUNCTION(execGetRandomResultTables); \
	DECLARE_FUNCTION(execHelperGetCharacterInventory); \
	DECLARE_FUNCTION(execGetCharacterInventory); \
	DECLARE_FUNCTION(execHelperEvaluateRandomResultTable); \
	DECLARE_FUNCTION(execEvaluateRandomResultTable); \
	DECLARE_FUNCTION(execHelperConsumeItem); \
	DECLARE_FUNCTION(execConsumeItem); \
	DECLARE_FUNCTION(execHelperAddUserVirtualCurrency); \
	DECLARE_FUNCTION(execAddUserVirtualCurrency); \
	DECLARE_FUNCTION(execHelperAddCharacterVirtualCurrency); \
	DECLARE_FUNCTION(execAddCharacterVirtualCurrency); \
	DECLARE_FUNCTION(execHelperUpdateUserReadOnlyData); \
	DECLARE_FUNCTION(execUpdateUserReadOnlyData); \
	DECLARE_FUNCTION(execHelperUpdateUserPublisherReadOnlyData); \
	DECLARE_FUNCTION(execUpdateUserPublisherReadOnlyData); \
	DECLARE_FUNCTION(execHelperUpdateUserPublisherInternalData); \
	DECLARE_FUNCTION(execUpdateUserPublisherInternalData); \
	DECLARE_FUNCTION(execHelperUpdateUserPublisherData); \
	DECLARE_FUNCTION(execUpdateUserPublisherData); \
	DECLARE_FUNCTION(execHelperUpdateUserInternalData); \
	DECLARE_FUNCTION(execUpdateUserInternalData); \
	DECLARE_FUNCTION(execHelperUpdateUserData); \
	DECLARE_FUNCTION(execUpdateUserData); \
	DECLARE_FUNCTION(execHelperUpdatePlayerStatistics); \
	DECLARE_FUNCTION(execUpdatePlayerStatistics); \
	DECLARE_FUNCTION(execHelperGetUserReadOnlyData); \
	DECLARE_FUNCTION(execGetUserReadOnlyData); \
	DECLARE_FUNCTION(execHelperGetUserPublisherReadOnlyData); \
	DECLARE_FUNCTION(execGetUserPublisherReadOnlyData); \
	DECLARE_FUNCTION(execHelperGetUserPublisherInternalData); \
	DECLARE_FUNCTION(execGetUserPublisherInternalData); \
	DECLARE_FUNCTION(execHelperGetUserPublisherData); \
	DECLARE_FUNCTION(execGetUserPublisherData); \
	DECLARE_FUNCTION(execHelperGetUserInternalData); \
	DECLARE_FUNCTION(execGetUserInternalData); \
	DECLARE_FUNCTION(execHelperGetUserData); \
	DECLARE_FUNCTION(execGetUserData); \
	DECLARE_FUNCTION(execHelperGetPlayerStatisticVersions); \
	DECLARE_FUNCTION(execGetPlayerStatisticVersions); \
	DECLARE_FUNCTION(execHelperGetPlayerStatistics); \
	DECLARE_FUNCTION(execGetPlayerStatistics); \
	DECLARE_FUNCTION(execHelperGetPlayerCombinedInfo); \
	DECLARE_FUNCTION(execGetPlayerCombinedInfo); \
	DECLARE_FUNCTION(execHelperGetLeaderboardAroundUser); \
	DECLARE_FUNCTION(execGetLeaderboardAroundUser); \
	DECLARE_FUNCTION(execHelperGetLeaderboard); \
	DECLARE_FUNCTION(execGetLeaderboard); \
	DECLARE_FUNCTION(execHelperGetFriendLeaderboard); \
	DECLARE_FUNCTION(execGetFriendLeaderboard); \
	DECLARE_FUNCTION(execHelperAwardSteamAchievement); \
	DECLARE_FUNCTION(execAwardSteamAchievement); \
	DECLARE_FUNCTION(execHelperSetFriendTags); \
	DECLARE_FUNCTION(execSetFriendTags); \
	DECLARE_FUNCTION(execHelperRemoveFriend); \
	DECLARE_FUNCTION(execRemoveFriend); \
	DECLARE_FUNCTION(execHelperGetFriendsList); \
	DECLARE_FUNCTION(execGetFriendsList); \
	DECLARE_FUNCTION(execHelperAddFriend); \
	DECLARE_FUNCTION(execAddFriend); \
	DECLARE_FUNCTION(execHelperGetContentDownloadUrl); \
	DECLARE_FUNCTION(execGetContentDownloadUrl); \
	DECLARE_FUNCTION(execHelperUpdateCharacterStatistics); \
	DECLARE_FUNCTION(execUpdateCharacterStatistics); \
	DECLARE_FUNCTION(execHelperGrantCharacterToUser); \
	DECLARE_FUNCTION(execGrantCharacterToUser); \
	DECLARE_FUNCTION(execHelperGetLeaderboardForUserCharacters); \
	DECLARE_FUNCTION(execGetLeaderboardForUserCharacters); \
	DECLARE_FUNCTION(execHelperGetLeaderboardAroundCharacter); \
	DECLARE_FUNCTION(execGetLeaderboardAroundCharacter); \
	DECLARE_FUNCTION(execHelperGetCharacterStatistics); \
	DECLARE_FUNCTION(execGetCharacterStatistics); \
	DECLARE_FUNCTION(execHelperGetCharacterLeaderboard); \
	DECLARE_FUNCTION(execGetCharacterLeaderboard); \
	DECLARE_FUNCTION(execHelperGetAllUsersCharacters); \
	DECLARE_FUNCTION(execGetAllUsersCharacters); \
	DECLARE_FUNCTION(execHelperDeleteCharacterFromUser); \
	DECLARE_FUNCTION(execDeleteCharacterFromUser); \
	DECLARE_FUNCTION(execHelperUpdateCharacterReadOnlyData); \
	DECLARE_FUNCTION(execUpdateCharacterReadOnlyData); \
	DECLARE_FUNCTION(execHelperUpdateCharacterInternalData); \
	DECLARE_FUNCTION(execUpdateCharacterInternalData); \
	DECLARE_FUNCTION(execHelperUpdateCharacterData); \
	DECLARE_FUNCTION(execUpdateCharacterData); \
	DECLARE_FUNCTION(execHelperGetCharacterReadOnlyData); \
	DECLARE_FUNCTION(execGetCharacterReadOnlyData); \
	DECLARE_FUNCTION(execHelperGetCharacterInternalData); \
	DECLARE_FUNCTION(execGetCharacterInternalData); \
	DECLARE_FUNCTION(execHelperGetCharacterData); \
	DECLARE_FUNCTION(execGetCharacterData); \
	DECLARE_FUNCTION(execHelperSetPlayerSecret); \
	DECLARE_FUNCTION(execSetPlayerSecret); \
	DECLARE_FUNCTION(execHelperLoginWithXboxId); \
	DECLARE_FUNCTION(execLoginWithXboxId); \
	DECLARE_FUNCTION(execHelperLoginWithXbox); \
	DECLARE_FUNCTION(execLoginWithXbox); \
	DECLARE_FUNCTION(execHelperLoginWithSteamId); \
	DECLARE_FUNCTION(execLoginWithSteamId); \
	DECLARE_FUNCTION(execHelperLoginWithServerCustomId); \
	DECLARE_FUNCTION(execLoginWithServerCustomId); \
	DECLARE_FUNCTION(execHelperAuthenticateSessionTicket); \
	DECLARE_FUNCTION(execAuthenticateSessionTicket); \
	DECLARE_FUNCTION(execHelperWriteTitleEvent); \
	DECLARE_FUNCTION(execWriteTitleEvent); \
	DECLARE_FUNCTION(execHelperWritePlayerEvent); \
	DECLARE_FUNCTION(execWritePlayerEvent); \
	DECLARE_FUNCTION(execHelperWriteCharacterEvent); \
	DECLARE_FUNCTION(execWriteCharacterEvent); \
	DECLARE_FUNCTION(execHelperUpdateBans); \
	DECLARE_FUNCTION(execUpdateBans); \
	DECLARE_FUNCTION(execHelperUpdateAvatarUrl); \
	DECLARE_FUNCTION(execUpdateAvatarUrl); \
	DECLARE_FUNCTION(execHelperUnlinkXboxAccount); \
	DECLARE_FUNCTION(execUnlinkXboxAccount); \
	DECLARE_FUNCTION(execHelperUnlinkSteamId); \
	DECLARE_FUNCTION(execUnlinkSteamId); \
	DECLARE_FUNCTION(execHelperUnlinkServerCustomId); \
	DECLARE_FUNCTION(execUnlinkServerCustomId); \
	DECLARE_FUNCTION(execHelperUnlinkPSNAccount); \
	DECLARE_FUNCTION(execUnlinkPSNAccount); \
	DECLARE_FUNCTION(execHelperUnlinkNintendoSwitchDeviceId); \
	DECLARE_FUNCTION(execUnlinkNintendoSwitchDeviceId); \
	DECLARE_FUNCTION(execHelperUnlinkNintendoServiceAccount); \
	DECLARE_FUNCTION(execUnlinkNintendoServiceAccount); \
	DECLARE_FUNCTION(execHelperSendPushNotificationFromTemplate); \
	DECLARE_FUNCTION(execSendPushNotificationFromTemplate); \
	DECLARE_FUNCTION(execHelperSendPushNotification); \
	DECLARE_FUNCTION(execSendPushNotification); \
	DECLARE_FUNCTION(execHelperSendEmailFromTemplate); \
	DECLARE_FUNCTION(execSendEmailFromTemplate); \
	DECLARE_FUNCTION(execHelperSendCustomAccountRecoveryEmail); \
	DECLARE_FUNCTION(execSendCustomAccountRecoveryEmail); \
	DECLARE_FUNCTION(execHelperSavePushNotificationTemplate); \
	DECLARE_FUNCTION(execSavePushNotificationTemplate); \
	DECLARE_FUNCTION(execHelperRevokeBans); \
	DECLARE_FUNCTION(execRevokeBans); \
	DECLARE_FUNCTION(execHelperRevokeAllBansForUser); \
	DECLARE_FUNCTION(execRevokeAllBansForUser); \
	DECLARE_FUNCTION(execHelperRemoveGenericID); \
	DECLARE_FUNCTION(execRemoveGenericID); \
	DECLARE_FUNCTION(execHelperLinkXboxAccount); \
	DECLARE_FUNCTION(execLinkXboxAccount); \
	DECLARE_FUNCTION(execHelperLinkSteamId); \
	DECLARE_FUNCTION(execLinkSteamId); \
	DECLARE_FUNCTION(execHelperLinkServerCustomId); \
	DECLARE_FUNCTION(execLinkServerCustomId); \
	DECLARE_FUNCTION(execHelperLinkPSNId); \
	DECLARE_FUNCTION(execLinkPSNId); \
	DECLARE_FUNCTION(execHelperLinkPSNAccount); \
	DECLARE_FUNCTION(execLinkPSNAccount); \
	DECLARE_FUNCTION(execHelperLinkNintendoSwitchDeviceId); \
	DECLARE_FUNCTION(execLinkNintendoSwitchDeviceId); \
	DECLARE_FUNCTION(execHelperLinkNintendoServiceAccountSubject); \
	DECLARE_FUNCTION(execLinkNintendoServiceAccountSubject); \
	DECLARE_FUNCTION(execHelperLinkNintendoServiceAccount); \
	DECLARE_FUNCTION(execLinkNintendoServiceAccount); \
	DECLARE_FUNCTION(execHelperGetUserBans); \
	DECLARE_FUNCTION(execGetUserBans); \
	DECLARE_FUNCTION(execHelperGetUserAccountInfo); \
	DECLARE_FUNCTION(execGetUserAccountInfo); \
	DECLARE_FUNCTION(execHelperGetServerCustomIDsFromPlayFabIDs); \
	DECLARE_FUNCTION(execGetServerCustomIDsFromPlayFabIDs); \
	DECLARE_FUNCTION(execHelperGetPlayFabIDsFromXboxLiveIDs); \
	DECLARE_FUNCTION(execGetPlayFabIDsFromXboxLiveIDs); \
	DECLARE_FUNCTION(execHelperGetPlayFabIDsFromTwitchIDs); \
	DECLARE_FUNCTION(execGetPlayFabIDsFromTwitchIDs); \
	DECLARE_FUNCTION(execHelperGetPlayFabIDsFromSteamIDs); \
	DECLARE_FUNCTION(execGetPlayFabIDsFromSteamIDs); \
	DECLARE_FUNCTION(execHelperGetPlayFabIDsFromPSNAccountIDs); \
	DECLARE_FUNCTION(execGetPlayFabIDsFromPSNAccountIDs); \
	DECLARE_FUNCTION(execHelperGetPlayFabIDsFromNintendoSwitchDeviceIds); \
	DECLARE_FUNCTION(execGetPlayFabIDsFromNintendoSwitchDeviceIds); \
	DECLARE_FUNCTION(execHelperGetPlayFabIDsFromNintendoServiceAccountIds); \
	DECLARE_FUNCTION(execGetPlayFabIDsFromNintendoServiceAccountIds); \
	DECLARE_FUNCTION(execHelperGetPlayFabIDsFromGenericIDs); \
	DECLARE_FUNCTION(execGetPlayFabIDsFromGenericIDs); \
	DECLARE_FUNCTION(execHelperGetPlayFabIDsFromFacebookInstantGamesIds); \
	DECLARE_FUNCTION(execGetPlayFabIDsFromFacebookInstantGamesIds); \
	DECLARE_FUNCTION(execHelperGetPlayFabIDsFromFacebookIDs); \
	DECLARE_FUNCTION(execGetPlayFabIDsFromFacebookIDs); \
	DECLARE_FUNCTION(execHelperGetPlayerProfile); \
	DECLARE_FUNCTION(execGetPlayerProfile); \
	DECLARE_FUNCTION(execHelperDeletePushNotificationTemplate); \
	DECLARE_FUNCTION(execDeletePushNotificationTemplate); \
	DECLARE_FUNCTION(execHelperDeletePlayer); \
	DECLARE_FUNCTION(execDeletePlayer); \
	DECLARE_FUNCTION(execHelperBanUsers); \
	DECLARE_FUNCTION(execBanUsers); \
	DECLARE_FUNCTION(execHelperAddGenericID); \
	DECLARE_FUNCTION(execAddGenericID);


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabServerAPI_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlayFabServerAPI(); \
	friend struct Z_Construct_UClass_UPlayFabServerAPI_Statics; \
public: \
	DECLARE_CLASS(UPlayFabServerAPI, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PlayFab"), NO_API) \
	DECLARE_SERIALIZER(UPlayFabServerAPI)


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabServerAPI_h_29_INCLASS \
private: \
	static void StaticRegisterNativesUPlayFabServerAPI(); \
	friend struct Z_Construct_UClass_UPlayFabServerAPI_Statics; \
public: \
	DECLARE_CLASS(UPlayFabServerAPI, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PlayFab"), NO_API) \
	DECLARE_SERIALIZER(UPlayFabServerAPI)


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabServerAPI_h_29_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayFabServerAPI(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayFabServerAPI) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayFabServerAPI); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayFabServerAPI); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayFabServerAPI(UPlayFabServerAPI&&); \
	NO_API UPlayFabServerAPI(const UPlayFabServerAPI&); \
public:


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabServerAPI_h_29_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayFabServerAPI(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayFabServerAPI(UPlayFabServerAPI&&); \
	NO_API UPlayFabServerAPI(const UPlayFabServerAPI&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayFabServerAPI); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayFabServerAPI); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayFabServerAPI)


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabServerAPI_h_29_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CallAuthenticationContext() { return STRUCT_OFFSET(UPlayFabServerAPI, CallAuthenticationContext); } \
	FORCEINLINE static uint32 __PPO__RequestJsonObj() { return STRUCT_OFFSET(UPlayFabServerAPI, RequestJsonObj); } \
	FORCEINLINE static uint32 __PPO__ResponseJsonObj() { return STRUCT_OFFSET(UPlayFabServerAPI, ResponseJsonObj); }


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabServerAPI_h_26_PROLOG
#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabServerAPI_h_29_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabServerAPI_h_29_PRIVATE_PROPERTY_OFFSET \
	UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabServerAPI_h_29_SPARSE_DATA \
	UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabServerAPI_h_29_RPC_WRAPPERS \
	UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabServerAPI_h_29_INCLASS \
	UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabServerAPI_h_29_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabServerAPI_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabServerAPI_h_29_PRIVATE_PROPERTY_OFFSET \
	UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabServerAPI_h_29_SPARSE_DATA \
	UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabServerAPI_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabServerAPI_h_29_INCLASS_NO_PURE_DECLS \
	UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabServerAPI_h_29_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class PlayFabServerAPI."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PLAYFAB_API UClass* StaticClass<class UPlayFabServerAPI>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabServerAPI_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
