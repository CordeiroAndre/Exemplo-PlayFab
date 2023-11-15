// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPlayFabJsonObject;
struct FAdminUpdateRandomResultTablesResult;
struct FAdminSetupPushNotificationResult;
struct FAdminSetTitleDataAndOverridesResult;
struct FAdminSetTitleDataResult;
struct FAdminUpdateStoreItemsResult;
struct FAdminUpdateCatalogItemsResult;
struct FAdminListVirtualCurrencyTypesResult;
struct FAdminGetTitleDataResult;
struct FAdminGetStoreItemsResult;
struct FAdminGetRandomResultTablesResult;
struct FAdminGetPublisherDataResult;
struct FAdminGetCatalogItemsResult;
struct FAdminDeleteTitleDataOverrideResult;
struct FAdminDeleteStoreResult;
struct FAdminAddNewsResult;
struct FAdminAddLocalizedNewsResult;
struct FAdminSetPublisherDataResult;
struct FAdminUpdateCloudScriptResult;
struct FAdminSetPublishedRevisionResult;
struct FAdminGetCloudScriptVersionsResult;
struct FAdminGetCloudScriptRevisionResult;
struct FAdminUpdateSegmentResponse;
struct FAdminGetSegmentsResponse;
struct FAdminDeleteSegmentsResponse;
struct FAdminCreateSegmentResponse;
struct FAdminRunTaskResult;
struct FAdminGetTasksResult;
struct FAdminGetTaskInstancesResult;
struct FAdminGetCloudScriptTaskInstanceResult;
struct FAdminGetActionsOnPlayersInSegmentTaskInstanceResult;
struct FAdminCreateTaskResult;
struct FAdminRemovePlayerTagResult;
struct FAdminGetPlayersInSegmentExportResponse;
struct FAdminGetPlayerTagsResult;
struct FAdminGetPlayersInSegmentResult;
struct FAdminGetPlayerSegmentsResult;
struct FAdminGetAllSegmentsResult;
struct FAdminExportPlayersInSegmentResult;
struct FAdminAddPlayerTagResult;
struct FAdminRevokeInventoryItemsResult;
struct FAdminRevokeInventoryResult;
struct FAdminIncrementLimitedEditionItemAvailabilityResult;
struct FAdminGrantItemsToUsersResult;
struct FAdminGetUserInventoryResult;
struct FAdminCheckLimitedEditionItemAvailabilityResult;
struct FAdminModifyUserVirtualCurrencyResult;
struct FAdminUpdateUserDataResult;
struct FAdminUpdatePlayerStatisticDefinitionResult;
struct FAdminResolvePurchaseDisputeResponse;
struct FAdminResetUserStatisticsResult;
struct FAdminRefundPurchaseResponse;
struct FAdminIncrementPlayerStatisticVersionResult;
struct FAdminGetUserDataResult;
struct FAdminGetPlayerStatisticVersionsResult;
struct FAdminGetPlayerStatisticDefinitionsResult;
struct FAdminGetDataReportResult;
struct FAdminCreatePlayerStatisticDefinitionResult;
struct FAdminGetContentUploadUrlResult;
struct FAdminGetContentListResult;
struct FAdminBlankResult;
struct FAdminResetCharacterStatisticsResult;
struct FAdminUpdatePolicyResponse;
struct FAdminUpdatePlayerSharedSecretResult;
struct FAdminSetPlayerSecretResult;
struct FAdminListOpenIdConnectionResponse;
struct FAdminGetPolicyResponse;
struct FAdminGetPlayerSharedSecretsResult;
struct FAdminDeletePlayerSharedSecretResult;
struct FAdminCreatePlayerSharedSecretResult;
struct FAdminEmptyResponse;
struct FAdminUpdateUserTitleDisplayNameResult;
struct FAdminUpdateBansResult;
struct FAdminSetMembershipOverrideResult;
struct FAdminSendAccountRecoveryEmailResult;
struct FAdminRevokeBansResult;
struct FAdminRevokeAllBansForUserResult;
struct FAdminResetPasswordResult;
struct FAdminGetUserBansResult;
struct FAdminLookupUserAccountInfoResult;
struct FAdminGetPlayerProfileResult;
struct FAdminGetPlayerIdFromAuthTokenResult;
struct FAdminGetPlayedTitleListResult;
struct FAdminExportMasterPlayerDataResult;
struct FAdminDeleteTitleResult;
struct FAdminDeletePlayerResult;
struct FAdminDeleteMembershipSubscriptionResult;
struct FAdminDeleteMasterPlayerEventDataResult;
struct FAdminDeleteMasterPlayerAccountResult;
struct FAdminBanUsersResult;
#ifdef PLAYFAB_PlayFabAdminModelDecoder_generated_h
#error "PlayFabAdminModelDecoder.generated.h already included, missing '#pragma once' in PlayFabAdminModelDecoder.h"
#endif
#define PLAYFAB_PlayFabAdminModelDecoder_generated_h

#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAdminModelDecoder_h_26_SPARSE_DATA
#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAdminModelDecoder_h_26_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execdecodeUpdateRandomResultTablesResultResponse); \
	DECLARE_FUNCTION(execdecodeSetupPushNotificationResultResponse); \
	DECLARE_FUNCTION(execdecodeSetTitleDataAndOverridesResultResponse); \
	DECLARE_FUNCTION(execdecodeSetTitleDataResultResponse); \
	DECLARE_FUNCTION(execdecodeUpdateStoreItemsResultResponse); \
	DECLARE_FUNCTION(execdecodeUpdateCatalogItemsResultResponse); \
	DECLARE_FUNCTION(execdecodeListVirtualCurrencyTypesResultResponse); \
	DECLARE_FUNCTION(execdecodeGetTitleDataResultResponse); \
	DECLARE_FUNCTION(execdecodeGetStoreItemsResultResponse); \
	DECLARE_FUNCTION(execdecodeGetRandomResultTablesResultResponse); \
	DECLARE_FUNCTION(execdecodeGetPublisherDataResultResponse); \
	DECLARE_FUNCTION(execdecodeGetCatalogItemsResultResponse); \
	DECLARE_FUNCTION(execdecodeDeleteTitleDataOverrideResultResponse); \
	DECLARE_FUNCTION(execdecodeDeleteStoreResultResponse); \
	DECLARE_FUNCTION(execdecodeAddNewsResultResponse); \
	DECLARE_FUNCTION(execdecodeAddLocalizedNewsResultResponse); \
	DECLARE_FUNCTION(execdecodeSetPublisherDataResultResponse); \
	DECLARE_FUNCTION(execdecodeUpdateCloudScriptResultResponse); \
	DECLARE_FUNCTION(execdecodeSetPublishedRevisionResultResponse); \
	DECLARE_FUNCTION(execdecodeGetCloudScriptVersionsResultResponse); \
	DECLARE_FUNCTION(execdecodeGetCloudScriptRevisionResultResponse); \
	DECLARE_FUNCTION(execdecodeUpdateSegmentResponseResponse); \
	DECLARE_FUNCTION(execdecodeGetSegmentsResponseResponse); \
	DECLARE_FUNCTION(execdecodeDeleteSegmentsResponseResponse); \
	DECLARE_FUNCTION(execdecodeCreateSegmentResponseResponse); \
	DECLARE_FUNCTION(execdecodeRunTaskResultResponse); \
	DECLARE_FUNCTION(execdecodeGetTasksResultResponse); \
	DECLARE_FUNCTION(execdecodeGetTaskInstancesResultResponse); \
	DECLARE_FUNCTION(execdecodeGetCloudScriptTaskInstanceResultResponse); \
	DECLARE_FUNCTION(execdecodeGetActionsOnPlayersInSegmentTaskInstanceResultResponse); \
	DECLARE_FUNCTION(execdecodeCreateTaskResultResponse); \
	DECLARE_FUNCTION(execdecodeRemovePlayerTagResultResponse); \
	DECLARE_FUNCTION(execdecodeGetPlayersInSegmentExportResponseResponse); \
	DECLARE_FUNCTION(execdecodeGetPlayerTagsResultResponse); \
	DECLARE_FUNCTION(execdecodeGetPlayersInSegmentResultResponse); \
	DECLARE_FUNCTION(execdecodeGetPlayerSegmentsResultResponse); \
	DECLARE_FUNCTION(execdecodeGetAllSegmentsResultResponse); \
	DECLARE_FUNCTION(execdecodeExportPlayersInSegmentResultResponse); \
	DECLARE_FUNCTION(execdecodeAddPlayerTagResultResponse); \
	DECLARE_FUNCTION(execdecodeRevokeInventoryItemsResultResponse); \
	DECLARE_FUNCTION(execdecodeRevokeInventoryResultResponse); \
	DECLARE_FUNCTION(execdecodeIncrementLimitedEditionItemAvailabilityResultResponse); \
	DECLARE_FUNCTION(execdecodeGrantItemsToUsersResultResponse); \
	DECLARE_FUNCTION(execdecodeGetUserInventoryResultResponse); \
	DECLARE_FUNCTION(execdecodeCheckLimitedEditionItemAvailabilityResultResponse); \
	DECLARE_FUNCTION(execdecodeModifyUserVirtualCurrencyResultResponse); \
	DECLARE_FUNCTION(execdecodeUpdateUserDataResultResponse); \
	DECLARE_FUNCTION(execdecodeUpdatePlayerStatisticDefinitionResultResponse); \
	DECLARE_FUNCTION(execdecodeResolvePurchaseDisputeResponseResponse); \
	DECLARE_FUNCTION(execdecodeResetUserStatisticsResultResponse); \
	DECLARE_FUNCTION(execdecodeRefundPurchaseResponseResponse); \
	DECLARE_FUNCTION(execdecodeIncrementPlayerStatisticVersionResultResponse); \
	DECLARE_FUNCTION(execdecodeGetUserDataResultResponse); \
	DECLARE_FUNCTION(execdecodeGetPlayerStatisticVersionsResultResponse); \
	DECLARE_FUNCTION(execdecodeGetPlayerStatisticDefinitionsResultResponse); \
	DECLARE_FUNCTION(execdecodeGetDataReportResultResponse); \
	DECLARE_FUNCTION(execdecodeCreatePlayerStatisticDefinitionResultResponse); \
	DECLARE_FUNCTION(execdecodeGetContentUploadUrlResultResponse); \
	DECLARE_FUNCTION(execdecodeGetContentListResultResponse); \
	DECLARE_FUNCTION(execdecodeBlankResultResponse); \
	DECLARE_FUNCTION(execdecodeResetCharacterStatisticsResultResponse); \
	DECLARE_FUNCTION(execdecodeUpdatePolicyResponseResponse); \
	DECLARE_FUNCTION(execdecodeUpdatePlayerSharedSecretResultResponse); \
	DECLARE_FUNCTION(execdecodeSetPlayerSecretResultResponse); \
	DECLARE_FUNCTION(execdecodeListOpenIdConnectionResponseResponse); \
	DECLARE_FUNCTION(execdecodeGetPolicyResponseResponse); \
	DECLARE_FUNCTION(execdecodeGetPlayerSharedSecretsResultResponse); \
	DECLARE_FUNCTION(execdecodeDeletePlayerSharedSecretResultResponse); \
	DECLARE_FUNCTION(execdecodeCreatePlayerSharedSecretResultResponse); \
	DECLARE_FUNCTION(execdecodeEmptyResponseResponse); \
	DECLARE_FUNCTION(execdecodeUpdateUserTitleDisplayNameResultResponse); \
	DECLARE_FUNCTION(execdecodeUpdateBansResultResponse); \
	DECLARE_FUNCTION(execdecodeSetMembershipOverrideResultResponse); \
	DECLARE_FUNCTION(execdecodeSendAccountRecoveryEmailResultResponse); \
	DECLARE_FUNCTION(execdecodeRevokeBansResultResponse); \
	DECLARE_FUNCTION(execdecodeRevokeAllBansForUserResultResponse); \
	DECLARE_FUNCTION(execdecodeResetPasswordResultResponse); \
	DECLARE_FUNCTION(execdecodeGetUserBansResultResponse); \
	DECLARE_FUNCTION(execdecodeLookupUserAccountInfoResultResponse); \
	DECLARE_FUNCTION(execdecodeGetPlayerProfileResultResponse); \
	DECLARE_FUNCTION(execdecodeGetPlayerIdFromAuthTokenResultResponse); \
	DECLARE_FUNCTION(execdecodeGetPlayedTitleListResultResponse); \
	DECLARE_FUNCTION(execdecodeExportMasterPlayerDataResultResponse); \
	DECLARE_FUNCTION(execdecodeDeleteTitleResultResponse); \
	DECLARE_FUNCTION(execdecodeDeletePlayerResultResponse); \
	DECLARE_FUNCTION(execdecodeDeleteMembershipSubscriptionResultResponse); \
	DECLARE_FUNCTION(execdecodeDeleteMasterPlayerEventDataResultResponse); \
	DECLARE_FUNCTION(execdecodeDeleteMasterPlayerAccountResultResponse); \
	DECLARE_FUNCTION(execdecodeBanUsersResultResponse);


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAdminModelDecoder_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execdecodeUpdateRandomResultTablesResultResponse); \
	DECLARE_FUNCTION(execdecodeSetupPushNotificationResultResponse); \
	DECLARE_FUNCTION(execdecodeSetTitleDataAndOverridesResultResponse); \
	DECLARE_FUNCTION(execdecodeSetTitleDataResultResponse); \
	DECLARE_FUNCTION(execdecodeUpdateStoreItemsResultResponse); \
	DECLARE_FUNCTION(execdecodeUpdateCatalogItemsResultResponse); \
	DECLARE_FUNCTION(execdecodeListVirtualCurrencyTypesResultResponse); \
	DECLARE_FUNCTION(execdecodeGetTitleDataResultResponse); \
	DECLARE_FUNCTION(execdecodeGetStoreItemsResultResponse); \
	DECLARE_FUNCTION(execdecodeGetRandomResultTablesResultResponse); \
	DECLARE_FUNCTION(execdecodeGetPublisherDataResultResponse); \
	DECLARE_FUNCTION(execdecodeGetCatalogItemsResultResponse); \
	DECLARE_FUNCTION(execdecodeDeleteTitleDataOverrideResultResponse); \
	DECLARE_FUNCTION(execdecodeDeleteStoreResultResponse); \
	DECLARE_FUNCTION(execdecodeAddNewsResultResponse); \
	DECLARE_FUNCTION(execdecodeAddLocalizedNewsResultResponse); \
	DECLARE_FUNCTION(execdecodeSetPublisherDataResultResponse); \
	DECLARE_FUNCTION(execdecodeUpdateCloudScriptResultResponse); \
	DECLARE_FUNCTION(execdecodeSetPublishedRevisionResultResponse); \
	DECLARE_FUNCTION(execdecodeGetCloudScriptVersionsResultResponse); \
	DECLARE_FUNCTION(execdecodeGetCloudScriptRevisionResultResponse); \
	DECLARE_FUNCTION(execdecodeUpdateSegmentResponseResponse); \
	DECLARE_FUNCTION(execdecodeGetSegmentsResponseResponse); \
	DECLARE_FUNCTION(execdecodeDeleteSegmentsResponseResponse); \
	DECLARE_FUNCTION(execdecodeCreateSegmentResponseResponse); \
	DECLARE_FUNCTION(execdecodeRunTaskResultResponse); \
	DECLARE_FUNCTION(execdecodeGetTasksResultResponse); \
	DECLARE_FUNCTION(execdecodeGetTaskInstancesResultResponse); \
	DECLARE_FUNCTION(execdecodeGetCloudScriptTaskInstanceResultResponse); \
	DECLARE_FUNCTION(execdecodeGetActionsOnPlayersInSegmentTaskInstanceResultResponse); \
	DECLARE_FUNCTION(execdecodeCreateTaskResultResponse); \
	DECLARE_FUNCTION(execdecodeRemovePlayerTagResultResponse); \
	DECLARE_FUNCTION(execdecodeGetPlayersInSegmentExportResponseResponse); \
	DECLARE_FUNCTION(execdecodeGetPlayerTagsResultResponse); \
	DECLARE_FUNCTION(execdecodeGetPlayersInSegmentResultResponse); \
	DECLARE_FUNCTION(execdecodeGetPlayerSegmentsResultResponse); \
	DECLARE_FUNCTION(execdecodeGetAllSegmentsResultResponse); \
	DECLARE_FUNCTION(execdecodeExportPlayersInSegmentResultResponse); \
	DECLARE_FUNCTION(execdecodeAddPlayerTagResultResponse); \
	DECLARE_FUNCTION(execdecodeRevokeInventoryItemsResultResponse); \
	DECLARE_FUNCTION(execdecodeRevokeInventoryResultResponse); \
	DECLARE_FUNCTION(execdecodeIncrementLimitedEditionItemAvailabilityResultResponse); \
	DECLARE_FUNCTION(execdecodeGrantItemsToUsersResultResponse); \
	DECLARE_FUNCTION(execdecodeGetUserInventoryResultResponse); \
	DECLARE_FUNCTION(execdecodeCheckLimitedEditionItemAvailabilityResultResponse); \
	DECLARE_FUNCTION(execdecodeModifyUserVirtualCurrencyResultResponse); \
	DECLARE_FUNCTION(execdecodeUpdateUserDataResultResponse); \
	DECLARE_FUNCTION(execdecodeUpdatePlayerStatisticDefinitionResultResponse); \
	DECLARE_FUNCTION(execdecodeResolvePurchaseDisputeResponseResponse); \
	DECLARE_FUNCTION(execdecodeResetUserStatisticsResultResponse); \
	DECLARE_FUNCTION(execdecodeRefundPurchaseResponseResponse); \
	DECLARE_FUNCTION(execdecodeIncrementPlayerStatisticVersionResultResponse); \
	DECLARE_FUNCTION(execdecodeGetUserDataResultResponse); \
	DECLARE_FUNCTION(execdecodeGetPlayerStatisticVersionsResultResponse); \
	DECLARE_FUNCTION(execdecodeGetPlayerStatisticDefinitionsResultResponse); \
	DECLARE_FUNCTION(execdecodeGetDataReportResultResponse); \
	DECLARE_FUNCTION(execdecodeCreatePlayerStatisticDefinitionResultResponse); \
	DECLARE_FUNCTION(execdecodeGetContentUploadUrlResultResponse); \
	DECLARE_FUNCTION(execdecodeGetContentListResultResponse); \
	DECLARE_FUNCTION(execdecodeBlankResultResponse); \
	DECLARE_FUNCTION(execdecodeResetCharacterStatisticsResultResponse); \
	DECLARE_FUNCTION(execdecodeUpdatePolicyResponseResponse); \
	DECLARE_FUNCTION(execdecodeUpdatePlayerSharedSecretResultResponse); \
	DECLARE_FUNCTION(execdecodeSetPlayerSecretResultResponse); \
	DECLARE_FUNCTION(execdecodeListOpenIdConnectionResponseResponse); \
	DECLARE_FUNCTION(execdecodeGetPolicyResponseResponse); \
	DECLARE_FUNCTION(execdecodeGetPlayerSharedSecretsResultResponse); \
	DECLARE_FUNCTION(execdecodeDeletePlayerSharedSecretResultResponse); \
	DECLARE_FUNCTION(execdecodeCreatePlayerSharedSecretResultResponse); \
	DECLARE_FUNCTION(execdecodeEmptyResponseResponse); \
	DECLARE_FUNCTION(execdecodeUpdateUserTitleDisplayNameResultResponse); \
	DECLARE_FUNCTION(execdecodeUpdateBansResultResponse); \
	DECLARE_FUNCTION(execdecodeSetMembershipOverrideResultResponse); \
	DECLARE_FUNCTION(execdecodeSendAccountRecoveryEmailResultResponse); \
	DECLARE_FUNCTION(execdecodeRevokeBansResultResponse); \
	DECLARE_FUNCTION(execdecodeRevokeAllBansForUserResultResponse); \
	DECLARE_FUNCTION(execdecodeResetPasswordResultResponse); \
	DECLARE_FUNCTION(execdecodeGetUserBansResultResponse); \
	DECLARE_FUNCTION(execdecodeLookupUserAccountInfoResultResponse); \
	DECLARE_FUNCTION(execdecodeGetPlayerProfileResultResponse); \
	DECLARE_FUNCTION(execdecodeGetPlayerIdFromAuthTokenResultResponse); \
	DECLARE_FUNCTION(execdecodeGetPlayedTitleListResultResponse); \
	DECLARE_FUNCTION(execdecodeExportMasterPlayerDataResultResponse); \
	DECLARE_FUNCTION(execdecodeDeleteTitleResultResponse); \
	DECLARE_FUNCTION(execdecodeDeletePlayerResultResponse); \
	DECLARE_FUNCTION(execdecodeDeleteMembershipSubscriptionResultResponse); \
	DECLARE_FUNCTION(execdecodeDeleteMasterPlayerEventDataResultResponse); \
	DECLARE_FUNCTION(execdecodeDeleteMasterPlayerAccountResultResponse); \
	DECLARE_FUNCTION(execdecodeBanUsersResultResponse);


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAdminModelDecoder_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlayFabAdminModelDecoder(); \
	friend struct Z_Construct_UClass_UPlayFabAdminModelDecoder_Statics; \
public: \
	DECLARE_CLASS(UPlayFabAdminModelDecoder, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PlayFab"), NO_API) \
	DECLARE_SERIALIZER(UPlayFabAdminModelDecoder)


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAdminModelDecoder_h_26_INCLASS \
private: \
	static void StaticRegisterNativesUPlayFabAdminModelDecoder(); \
	friend struct Z_Construct_UClass_UPlayFabAdminModelDecoder_Statics; \
public: \
	DECLARE_CLASS(UPlayFabAdminModelDecoder, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PlayFab"), NO_API) \
	DECLARE_SERIALIZER(UPlayFabAdminModelDecoder)


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAdminModelDecoder_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayFabAdminModelDecoder(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayFabAdminModelDecoder) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayFabAdminModelDecoder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayFabAdminModelDecoder); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayFabAdminModelDecoder(UPlayFabAdminModelDecoder&&); \
	NO_API UPlayFabAdminModelDecoder(const UPlayFabAdminModelDecoder&); \
public:


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAdminModelDecoder_h_26_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayFabAdminModelDecoder(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayFabAdminModelDecoder(UPlayFabAdminModelDecoder&&); \
	NO_API UPlayFabAdminModelDecoder(const UPlayFabAdminModelDecoder&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayFabAdminModelDecoder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayFabAdminModelDecoder); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayFabAdminModelDecoder)


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAdminModelDecoder_h_26_PRIVATE_PROPERTY_OFFSET
#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAdminModelDecoder_h_23_PROLOG
#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAdminModelDecoder_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAdminModelDecoder_h_26_PRIVATE_PROPERTY_OFFSET \
	UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAdminModelDecoder_h_26_SPARSE_DATA \
	UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAdminModelDecoder_h_26_RPC_WRAPPERS \
	UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAdminModelDecoder_h_26_INCLASS \
	UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAdminModelDecoder_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAdminModelDecoder_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAdminModelDecoder_h_26_PRIVATE_PROPERTY_OFFSET \
	UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAdminModelDecoder_h_26_SPARSE_DATA \
	UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAdminModelDecoder_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAdminModelDecoder_h_26_INCLASS_NO_PURE_DECLS \
	UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAdminModelDecoder_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PLAYFAB_API UClass* StaticClass<class UPlayFabAdminModelDecoder>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAdminModelDecoder_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
