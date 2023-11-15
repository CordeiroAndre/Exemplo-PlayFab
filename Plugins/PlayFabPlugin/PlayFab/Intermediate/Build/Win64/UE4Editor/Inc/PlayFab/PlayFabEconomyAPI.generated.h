// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FEconomyUpdateInventoryItemsResponse;
class UObject;
struct FEconomyTransferInventoryItemsResponse;
struct FEconomySubtractInventoryItemsResponse;
struct FEconomyRedeemSteamInventoryItemsResponse;
struct FEconomyRedeemPlayStationStoreInventoryItemsResponse;
struct FEconomyRedeemNintendoEShopInventoryItemsResponse;
struct FEconomyRedeemMicrosoftStoreInventoryItemsResponse;
struct FEconomyRedeemGooglePlayInventoryItemsResponse;
struct FEconomyRedeemAppleAppStoreInventoryItemsResponse;
struct FEconomyPurchaseInventoryItemsResponse;
struct FEconomyGetTransactionHistoryResponse;
struct FEconomyGetMicrosoftStoreAccessTokensResponse;
struct FEconomyGetInventoryItemsResponse;
struct FEconomyGetInventoryCollectionIdsResponse;
struct FEconomyExecuteInventoryOperationsResponse;
struct FEconomyDeleteInventoryItemsResponse;
struct FEconomyDeleteInventoryCollectionResponse;
struct FEconomyAddInventoryItemsResponse;
struct FEconomyUpdateDraftItemResponse;
struct FEconomyUpdateCatalogConfigResponse;
struct FEconomyTakedownItemReviewsResponse;
struct FEconomySubmitItemReviewVoteResponse;
struct FEconomySetItemModerationStateResponse;
struct FEconomySearchItemsResponse;
struct FEconomyReviewItemResponse;
struct FEconomyReportItemReviewResponse;
struct FEconomyReportItemResponse;
struct FEconomyPublishDraftItemResponse;
struct FEconomyGetItemsResponse;
struct FEconomyGetItemReviewSummaryResponse;
struct FEconomyGetItemReviewsResponse;
struct FEconomyGetItemPublishStatusResponse;
struct FEconomyGetItemModerationStateResponse;
struct FEconomyGetItemContainersResponse;
struct FEconomyGetItemResponse;
struct FEconomyGetEntityItemReviewResponse;
struct FEconomyGetEntityDraftItemsResponse;
struct FEconomyGetDraftItemsResponse;
struct FEconomyGetDraftItemResponse;
struct FEconomyGetCatalogConfigResponse;
struct FEconomyDeleteItemResponse;
struct FEconomyDeleteEntityItemReviewsResponse;
struct FEconomyCreateUploadUrlsResponse;
struct FEconomyCreateDraftItemResponse;
struct FPlayFabError;
struct FPlayFabBaseModel;
struct FEconomyUpdateInventoryItemsRequest;
class UPlayFabEconomyAPI;
struct FEconomyTransferInventoryItemsRequest;
struct FEconomySubtractInventoryItemsRequest;
struct FEconomyRedeemSteamInventoryItemsRequest;
struct FEconomyRedeemPlayStationStoreInventoryItemsRequest;
struct FEconomyRedeemNintendoEShopInventoryItemsRequest;
struct FEconomyRedeemMicrosoftStoreInventoryItemsRequest;
struct FEconomyRedeemGooglePlayInventoryItemsRequest;
struct FEconomyRedeemAppleAppStoreInventoryItemsRequest;
struct FEconomyPurchaseInventoryItemsRequest;
struct FEconomyGetTransactionHistoryRequest;
struct FEconomyGetMicrosoftStoreAccessTokensRequest;
struct FEconomyGetInventoryItemsRequest;
struct FEconomyGetInventoryCollectionIdsRequest;
struct FEconomyExecuteInventoryOperationsRequest;
struct FEconomyDeleteInventoryItemsRequest;
struct FEconomyDeleteInventoryCollectionRequest;
struct FEconomyAddInventoryItemsRequest;
struct FEconomyUpdateDraftItemRequest;
struct FEconomyUpdateCatalogConfigRequest;
struct FEconomyTakedownItemReviewsRequest;
struct FEconomySubmitItemReviewVoteRequest;
struct FEconomySetItemModerationStateRequest;
struct FEconomySearchItemsRequest;
struct FEconomyReviewItemRequest;
struct FEconomyReportItemReviewRequest;
struct FEconomyReportItemRequest;
struct FEconomyPublishDraftItemRequest;
struct FEconomyGetItemsRequest;
struct FEconomyGetItemReviewSummaryRequest;
struct FEconomyGetItemReviewsRequest;
struct FEconomyGetItemPublishStatusRequest;
struct FEconomyGetItemModerationStateRequest;
struct FEconomyGetItemContainersRequest;
struct FEconomyGetItemRequest;
struct FEconomyGetEntityItemReviewRequest;
struct FEconomyGetEntityDraftItemsRequest;
struct FEconomyGetDraftItemsRequest;
struct FEconomyGetDraftItemRequest;
struct FEconomyGetCatalogConfigRequest;
struct FEconomyDeleteItemRequest;
struct FEconomyDeleteEntityItemReviewsRequest;
struct FEconomyCreateUploadUrlsRequest;
struct FEconomyCreateDraftItemRequest;
#ifdef PLAYFAB_PlayFabEconomyAPI_generated_h
#error "PlayFabEconomyAPI.generated.h already included, missing '#pragma once' in PlayFabEconomyAPI.h"
#endif
#define PLAYFAB_PlayFabEconomyAPI_generated_h

#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabEconomyAPI_h_716_DELEGATE \
struct PlayFabEconomyAPI_eventDelegateOnSuccessUpdateInventoryItems_Parms \
{ \
	FEconomyUpdateInventoryItemsResponse result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessUpdateInventoryItems_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessUpdateInventoryItems, FEconomyUpdateInventoryItemsResponse result, UObject* customData) \
{ \
	PlayFabEconomyAPI_eventDelegateOnSuccessUpdateInventoryItems_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessUpdateInventoryItems.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabEconomyAPI_h_696_DELEGATE \
struct PlayFabEconomyAPI_eventDelegateOnSuccessTransferInventoryItems_Parms \
{ \
	FEconomyTransferInventoryItemsResponse result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessTransferInventoryItems_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessTransferInventoryItems, FEconomyTransferInventoryItemsResponse result, UObject* customData) \
{ \
	PlayFabEconomyAPI_eventDelegateOnSuccessTransferInventoryItems_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessTransferInventoryItems.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabEconomyAPI_h_683_DELEGATE \
struct PlayFabEconomyAPI_eventDelegateOnSuccessSubtractInventoryItems_Parms \
{ \
	FEconomySubtractInventoryItemsResponse result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessSubtractInventoryItems_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessSubtractInventoryItems, FEconomySubtractInventoryItemsResponse result, UObject* customData) \
{ \
	PlayFabEconomyAPI_eventDelegateOnSuccessSubtractInventoryItems_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessSubtractInventoryItems.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabEconomyAPI_h_670_DELEGATE \
struct PlayFabEconomyAPI_eventDelegateOnSuccessRedeemSteamInventoryItems_Parms \
{ \
	FEconomyRedeemSteamInventoryItemsResponse result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessRedeemSteamInventoryItems_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessRedeemSteamInventoryItems, FEconomyRedeemSteamInventoryItemsResponse result, UObject* customData) \
{ \
	PlayFabEconomyAPI_eventDelegateOnSuccessRedeemSteamInventoryItems_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessRedeemSteamInventoryItems.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabEconomyAPI_h_657_DELEGATE \
struct PlayFabEconomyAPI_eventDelegateOnSuccessRedeemPlayStationStoreInventoryItems_Parms \
{ \
	FEconomyRedeemPlayStationStoreInventoryItemsResponse result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessRedeemPlayStationStoreInventoryItems_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessRedeemPlayStationStoreInventoryItems, FEconomyRedeemPlayStationStoreInventoryItemsResponse result, UObject* customData) \
{ \
	PlayFabEconomyAPI_eventDelegateOnSuccessRedeemPlayStationStoreInventoryItems_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessRedeemPlayStationStoreInventoryItems.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabEconomyAPI_h_644_DELEGATE \
struct PlayFabEconomyAPI_eventDelegateOnSuccessRedeemNintendoEShopInventoryItems_Parms \
{ \
	FEconomyRedeemNintendoEShopInventoryItemsResponse result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessRedeemNintendoEShopInventoryItems_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessRedeemNintendoEShopInventoryItems, FEconomyRedeemNintendoEShopInventoryItemsResponse result, UObject* customData) \
{ \
	PlayFabEconomyAPI_eventDelegateOnSuccessRedeemNintendoEShopInventoryItems_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessRedeemNintendoEShopInventoryItems.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabEconomyAPI_h_631_DELEGATE \
struct PlayFabEconomyAPI_eventDelegateOnSuccessRedeemMicrosoftStoreInventoryItems_Parms \
{ \
	FEconomyRedeemMicrosoftStoreInventoryItemsResponse result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessRedeemMicrosoftStoreInventoryItems_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessRedeemMicrosoftStoreInventoryItems, FEconomyRedeemMicrosoftStoreInventoryItemsResponse result, UObject* customData) \
{ \
	PlayFabEconomyAPI_eventDelegateOnSuccessRedeemMicrosoftStoreInventoryItems_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessRedeemMicrosoftStoreInventoryItems.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabEconomyAPI_h_618_DELEGATE \
struct PlayFabEconomyAPI_eventDelegateOnSuccessRedeemGooglePlayInventoryItems_Parms \
{ \
	FEconomyRedeemGooglePlayInventoryItemsResponse result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessRedeemGooglePlayInventoryItems_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessRedeemGooglePlayInventoryItems, FEconomyRedeemGooglePlayInventoryItemsResponse result, UObject* customData) \
{ \
	PlayFabEconomyAPI_eventDelegateOnSuccessRedeemGooglePlayInventoryItems_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessRedeemGooglePlayInventoryItems.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabEconomyAPI_h_605_DELEGATE \
struct PlayFabEconomyAPI_eventDelegateOnSuccessRedeemAppleAppStoreInventoryItems_Parms \
{ \
	FEconomyRedeemAppleAppStoreInventoryItemsResponse result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessRedeemAppleAppStoreInventoryItems_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessRedeemAppleAppStoreInventoryItems, FEconomyRedeemAppleAppStoreInventoryItemsResponse result, UObject* customData) \
{ \
	PlayFabEconomyAPI_eventDelegateOnSuccessRedeemAppleAppStoreInventoryItems_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessRedeemAppleAppStoreInventoryItems.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabEconomyAPI_h_589_DELEGATE \
struct PlayFabEconomyAPI_eventDelegateOnSuccessPurchaseInventoryItems_Parms \
{ \
	FEconomyPurchaseInventoryItemsResponse result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessPurchaseInventoryItems_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessPurchaseInventoryItems, FEconomyPurchaseInventoryItemsResponse result, UObject* customData) \
{ \
	PlayFabEconomyAPI_eventDelegateOnSuccessPurchaseInventoryItems_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessPurchaseInventoryItems.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabEconomyAPI_h_571_DELEGATE \
struct PlayFabEconomyAPI_eventDelegateOnSuccessGetTransactionHistory_Parms \
{ \
	FEconomyGetTransactionHistoryResponse result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetTransactionHistory_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetTransactionHistory, FEconomyGetTransactionHistoryResponse result, UObject* customData) \
{ \
	PlayFabEconomyAPI_eventDelegateOnSuccessGetTransactionHistory_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetTransactionHistory.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabEconomyAPI_h_558_DELEGATE \
struct PlayFabEconomyAPI_eventDelegateOnSuccessGetMicrosoftStoreAccessTokens_Parms \
{ \
	FEconomyGetMicrosoftStoreAccessTokensResponse result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetMicrosoftStoreAccessTokens_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetMicrosoftStoreAccessTokens, FEconomyGetMicrosoftStoreAccessTokensResponse result, UObject* customData) \
{ \
	PlayFabEconomyAPI_eventDelegateOnSuccessGetMicrosoftStoreAccessTokens_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetMicrosoftStoreAccessTokens.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabEconomyAPI_h_545_DELEGATE \
struct PlayFabEconomyAPI_eventDelegateOnSuccessGetInventoryItems_Parms \
{ \
	FEconomyGetInventoryItemsResponse result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetInventoryItems_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetInventoryItems, FEconomyGetInventoryItemsResponse result, UObject* customData) \
{ \
	PlayFabEconomyAPI_eventDelegateOnSuccessGetInventoryItems_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetInventoryItems.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabEconomyAPI_h_529_DELEGATE \
struct PlayFabEconomyAPI_eventDelegateOnSuccessGetInventoryCollectionIds_Parms \
{ \
	FEconomyGetInventoryCollectionIdsResponse result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetInventoryCollectionIds_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetInventoryCollectionIds, FEconomyGetInventoryCollectionIdsResponse result, UObject* customData) \
{ \
	PlayFabEconomyAPI_eventDelegateOnSuccessGetInventoryCollectionIds_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetInventoryCollectionIds.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabEconomyAPI_h_510_DELEGATE \
struct PlayFabEconomyAPI_eventDelegateOnSuccessExecuteInventoryOperations_Parms \
{ \
	FEconomyExecuteInventoryOperationsResponse result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessExecuteInventoryOperations_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessExecuteInventoryOperations, FEconomyExecuteInventoryOperationsResponse result, UObject* customData) \
{ \
	PlayFabEconomyAPI_eventDelegateOnSuccessExecuteInventoryOperations_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessExecuteInventoryOperations.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabEconomyAPI_h_497_DELEGATE \
struct PlayFabEconomyAPI_eventDelegateOnSuccessDeleteInventoryItems_Parms \
{ \
	FEconomyDeleteInventoryItemsResponse result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessDeleteInventoryItems_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessDeleteInventoryItems, FEconomyDeleteInventoryItemsResponse result, UObject* customData) \
{ \
	PlayFabEconomyAPI_eventDelegateOnSuccessDeleteInventoryItems_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessDeleteInventoryItems.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabEconomyAPI_h_481_DELEGATE \
struct PlayFabEconomyAPI_eventDelegateOnSuccessDeleteInventoryCollection_Parms \
{ \
	FEconomyDeleteInventoryCollectionResponse result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessDeleteInventoryCollection_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessDeleteInventoryCollection, FEconomyDeleteInventoryCollectionResponse result, UObject* customData) \
{ \
	PlayFabEconomyAPI_eventDelegateOnSuccessDeleteInventoryCollection_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessDeleteInventoryCollection.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabEconomyAPI_h_468_DELEGATE \
struct PlayFabEconomyAPI_eventDelegateOnSuccessAddInventoryItems_Parms \
{ \
	FEconomyAddInventoryItemsResponse result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessAddInventoryItems_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessAddInventoryItems, FEconomyAddInventoryItemsResponse result, UObject* customData) \
{ \
	PlayFabEconomyAPI_eventDelegateOnSuccessAddInventoryItems_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessAddInventoryItems.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabEconomyAPI_h_451_DELEGATE \
struct PlayFabEconomyAPI_eventDelegateOnSuccessUpdateDraftItem_Parms \
{ \
	FEconomyUpdateDraftItemResponse result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessUpdateDraftItem_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessUpdateDraftItem, FEconomyUpdateDraftItemResponse result, UObject* customData) \
{ \
	PlayFabEconomyAPI_eventDelegateOnSuccessUpdateDraftItem_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessUpdateDraftItem.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabEconomyAPI_h_434_DELEGATE \
struct PlayFabEconomyAPI_eventDelegateOnSuccessUpdateCatalogConfig_Parms \
{ \
	FEconomyUpdateCatalogConfigResponse result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessUpdateCatalogConfig_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessUpdateCatalogConfig, FEconomyUpdateCatalogConfigResponse result, UObject* customData) \
{ \
	PlayFabEconomyAPI_eventDelegateOnSuccessUpdateCatalogConfig_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessUpdateCatalogConfig.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabEconomyAPI_h_421_DELEGATE \
struct PlayFabEconomyAPI_eventDelegateOnSuccessTakedownItemReviews_Parms \
{ \
	FEconomyTakedownItemReviewsResponse result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessTakedownItemReviews_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessTakedownItemReviews, FEconomyTakedownItemReviewsResponse result, UObject* customData) \
{ \
	PlayFabEconomyAPI_eventDelegateOnSuccessTakedownItemReviews_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessTakedownItemReviews.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabEconomyAPI_h_408_DELEGATE \
struct PlayFabEconomyAPI_eventDelegateOnSuccessSubmitItemReviewVote_Parms \
{ \
	FEconomySubmitItemReviewVoteResponse result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessSubmitItemReviewVote_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessSubmitItemReviewVote, FEconomySubmitItemReviewVoteResponse result, UObject* customData) \
{ \
	PlayFabEconomyAPI_eventDelegateOnSuccessSubmitItemReviewVote_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessSubmitItemReviewVote.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabEconomyAPI_h_392_DELEGATE \
struct PlayFabEconomyAPI_eventDelegateOnSuccessSetItemModerationState_Parms \
{ \
	FEconomySetItemModerationStateResponse result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessSetItemModerationState_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessSetItemModerationState, FEconomySetItemModerationStateResponse result, UObject* customData) \
{ \
	PlayFabEconomyAPI_eventDelegateOnSuccessSetItemModerationState_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessSetItemModerationState.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabEconomyAPI_h_374_DELEGATE \
struct PlayFabEconomyAPI_eventDelegateOnSuccessSearchItems_Parms \
{ \
	FEconomySearchItemsResponse result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessSearchItems_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessSearchItems, FEconomySearchItemsResponse result, UObject* customData) \
{ \
	PlayFabEconomyAPI_eventDelegateOnSuccessSearchItems_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessSearchItems.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabEconomyAPI_h_357_DELEGATE \
struct PlayFabEconomyAPI_eventDelegateOnSuccessReviewItem_Parms \
{ \
	FEconomyReviewItemResponse result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessReviewItem_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessReviewItem, FEconomyReviewItemResponse result, UObject* customData) \
{ \
	PlayFabEconomyAPI_eventDelegateOnSuccessReviewItem_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessReviewItem.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabEconomyAPI_h_344_DELEGATE \
struct PlayFabEconomyAPI_eventDelegateOnSuccessReportItemReview_Parms \
{ \
	FEconomyReportItemReviewResponse result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessReportItemReview_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessReportItemReview, FEconomyReportItemReviewResponse result, UObject* customData) \
{ \
	PlayFabEconomyAPI_eventDelegateOnSuccessReportItemReview_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessReportItemReview.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabEconomyAPI_h_331_DELEGATE \
struct PlayFabEconomyAPI_eventDelegateOnSuccessReportItem_Parms \
{ \
	FEconomyReportItemResponse result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessReportItem_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessReportItem, FEconomyReportItemResponse result, UObject* customData) \
{ \
	PlayFabEconomyAPI_eventDelegateOnSuccessReportItem_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessReportItem.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabEconomyAPI_h_315_DELEGATE \
struct PlayFabEconomyAPI_eventDelegateOnSuccessPublishDraftItem_Parms \
{ \
	FEconomyPublishDraftItemResponse result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessPublishDraftItem_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessPublishDraftItem, FEconomyPublishDraftItemResponse result, UObject* customData) \
{ \
	PlayFabEconomyAPI_eventDelegateOnSuccessPublishDraftItem_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessPublishDraftItem.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabEconomyAPI_h_298_DELEGATE \
struct PlayFabEconomyAPI_eventDelegateOnSuccessGetItems_Parms \
{ \
	FEconomyGetItemsResponse result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetItems_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetItems, FEconomyGetItemsResponse result, UObject* customData) \
{ \
	PlayFabEconomyAPI_eventDelegateOnSuccessGetItems_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetItems.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabEconomyAPI_h_282_DELEGATE \
struct PlayFabEconomyAPI_eventDelegateOnSuccessGetItemReviewSummary_Parms \
{ \
	FEconomyGetItemReviewSummaryResponse result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetItemReviewSummary_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetItemReviewSummary, FEconomyGetItemReviewSummaryResponse result, UObject* customData) \
{ \
	PlayFabEconomyAPI_eventDelegateOnSuccessGetItemReviewSummary_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetItemReviewSummary.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabEconomyAPI_h_266_DELEGATE \
struct PlayFabEconomyAPI_eventDelegateOnSuccessGetItemReviews_Parms \
{ \
	FEconomyGetItemReviewsResponse result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetItemReviews_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetItemReviews, FEconomyGetItemReviewsResponse result, UObject* customData) \
{ \
	PlayFabEconomyAPI_eventDelegateOnSuccessGetItemReviews_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetItemReviews.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabEconomyAPI_h_253_DELEGATE \
struct PlayFabEconomyAPI_eventDelegateOnSuccessGetItemPublishStatus_Parms \
{ \
	FEconomyGetItemPublishStatusResponse result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetItemPublishStatus_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetItemPublishStatus, FEconomyGetItemPublishStatusResponse result, UObject* customData) \
{ \
	PlayFabEconomyAPI_eventDelegateOnSuccessGetItemPublishStatus_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetItemPublishStatus.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabEconomyAPI_h_237_DELEGATE \
struct PlayFabEconomyAPI_eventDelegateOnSuccessGetItemModerationState_Parms \
{ \
	FEconomyGetItemModerationStateResponse result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetItemModerationState_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetItemModerationState, FEconomyGetItemModerationStateResponse result, UObject* customData) \
{ \
	PlayFabEconomyAPI_eventDelegateOnSuccessGetItemModerationState_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetItemModerationState.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabEconomyAPI_h_219_DELEGATE \
struct PlayFabEconomyAPI_eventDelegateOnSuccessGetItemContainers_Parms \
{ \
	FEconomyGetItemContainersResponse result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetItemContainers_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetItemContainers, FEconomyGetItemContainersResponse result, UObject* customData) \
{ \
	PlayFabEconomyAPI_eventDelegateOnSuccessGetItemContainers_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetItemContainers.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabEconomyAPI_h_202_DELEGATE \
struct PlayFabEconomyAPI_eventDelegateOnSuccessGetItem_Parms \
{ \
	FEconomyGetItemResponse result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetItem_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetItem, FEconomyGetItemResponse result, UObject* customData) \
{ \
	PlayFabEconomyAPI_eventDelegateOnSuccessGetItem_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetItem.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabEconomyAPI_h_186_DELEGATE \
struct PlayFabEconomyAPI_eventDelegateOnSuccessGetEntityItemReview_Parms \
{ \
	FEconomyGetEntityItemReviewResponse result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetEntityItemReview_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetEntityItemReview, FEconomyGetEntityItemReviewResponse result, UObject* customData) \
{ \
	PlayFabEconomyAPI_eventDelegateOnSuccessGetEntityItemReview_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetEntityItemReview.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabEconomyAPI_h_169_DELEGATE \
struct PlayFabEconomyAPI_eventDelegateOnSuccessGetEntityDraftItems_Parms \
{ \
	FEconomyGetEntityDraftItemsResponse result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetEntityDraftItems_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetEntityDraftItems, FEconomyGetEntityDraftItemsResponse result, UObject* customData) \
{ \
	PlayFabEconomyAPI_eventDelegateOnSuccessGetEntityDraftItems_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetEntityDraftItems.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabEconomyAPI_h_153_DELEGATE \
struct PlayFabEconomyAPI_eventDelegateOnSuccessGetDraftItems_Parms \
{ \
	FEconomyGetDraftItemsResponse result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetDraftItems_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetDraftItems, FEconomyGetDraftItemsResponse result, UObject* customData) \
{ \
	PlayFabEconomyAPI_eventDelegateOnSuccessGetDraftItems_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetDraftItems.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabEconomyAPI_h_136_DELEGATE \
struct PlayFabEconomyAPI_eventDelegateOnSuccessGetDraftItem_Parms \
{ \
	FEconomyGetDraftItemResponse result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetDraftItem_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetDraftItem, FEconomyGetDraftItemResponse result, UObject* customData) \
{ \
	PlayFabEconomyAPI_eventDelegateOnSuccessGetDraftItem_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetDraftItem.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabEconomyAPI_h_119_DELEGATE \
struct PlayFabEconomyAPI_eventDelegateOnSuccessGetCatalogConfig_Parms \
{ \
	FEconomyGetCatalogConfigResponse result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetCatalogConfig_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetCatalogConfig, FEconomyGetCatalogConfigResponse result, UObject* customData) \
{ \
	PlayFabEconomyAPI_eventDelegateOnSuccessGetCatalogConfig_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetCatalogConfig.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabEconomyAPI_h_106_DELEGATE \
struct PlayFabEconomyAPI_eventDelegateOnSuccessDeleteItem_Parms \
{ \
	FEconomyDeleteItemResponse result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessDeleteItem_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessDeleteItem, FEconomyDeleteItemResponse result, UObject* customData) \
{ \
	PlayFabEconomyAPI_eventDelegateOnSuccessDeleteItem_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessDeleteItem.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabEconomyAPI_h_93_DELEGATE \
struct PlayFabEconomyAPI_eventDelegateOnSuccessDeleteEntityItemReviews_Parms \
{ \
	FEconomyDeleteEntityItemReviewsResponse result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessDeleteEntityItemReviews_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessDeleteEntityItemReviews, FEconomyDeleteEntityItemReviewsResponse result, UObject* customData) \
{ \
	PlayFabEconomyAPI_eventDelegateOnSuccessDeleteEntityItemReviews_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessDeleteEntityItemReviews.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabEconomyAPI_h_75_DELEGATE \
struct PlayFabEconomyAPI_eventDelegateOnSuccessCreateUploadUrls_Parms \
{ \
	FEconomyCreateUploadUrlsResponse result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessCreateUploadUrls_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessCreateUploadUrls, FEconomyCreateUploadUrlsResponse result, UObject* customData) \
{ \
	PlayFabEconomyAPI_eventDelegateOnSuccessCreateUploadUrls_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessCreateUploadUrls.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabEconomyAPI_h_62_DELEGATE \
struct PlayFabEconomyAPI_eventDelegateOnSuccessCreateDraftItem_Parms \
{ \
	FEconomyCreateDraftItemResponse result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessCreateDraftItem_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessCreateDraftItem, FEconomyCreateDraftItemResponse result, UObject* customData) \
{ \
	PlayFabEconomyAPI_eventDelegateOnSuccessCreateDraftItem_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessCreateDraftItem.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabEconomyAPI_h_32_DELEGATE \
struct PlayFabEconomyAPI_eventDelegateOnFailurePlayFabError_Parms \
{ \
	FPlayFabError error; \
	UObject* customData; \
}; \
static inline void FDelegateOnFailurePlayFabError_DelegateWrapper(const FScriptDelegate& DelegateOnFailurePlayFabError, FPlayFabError error, UObject* customData) \
{ \
	PlayFabEconomyAPI_eventDelegateOnFailurePlayFabError_Parms Parms; \
	Parms.error=error; \
	Parms.customData=customData; \
	DelegateOnFailurePlayFabError.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabEconomyAPI_h_24_DELEGATE \
struct _Script_PlayFab_eventOnPlayFabEconomyRequestCompleted_Parms \
{ \
	FPlayFabBaseModel response; \
	UObject* customData; \
	bool successful; \
}; \
static inline void FOnPlayFabEconomyRequestCompleted_DelegateWrapper(const FMulticastScriptDelegate& OnPlayFabEconomyRequestCompleted, FPlayFabBaseModel response, UObject* customData, bool successful) \
{ \
	_Script_PlayFab_eventOnPlayFabEconomyRequestCompleted_Parms Parms; \
	Parms.response=response; \
	Parms.customData=customData; \
	Parms.successful=successful ? true : false; \
	OnPlayFabEconomyRequestCompleted.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabEconomyAPI_h_29_SPARSE_DATA
#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabEconomyAPI_h_29_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHelperUpdateInventoryItems); \
	DECLARE_FUNCTION(execUpdateInventoryItems); \
	DECLARE_FUNCTION(execHelperTransferInventoryItems); \
	DECLARE_FUNCTION(execTransferInventoryItems); \
	DECLARE_FUNCTION(execHelperSubtractInventoryItems); \
	DECLARE_FUNCTION(execSubtractInventoryItems); \
	DECLARE_FUNCTION(execHelperRedeemSteamInventoryItems); \
	DECLARE_FUNCTION(execRedeemSteamInventoryItems); \
	DECLARE_FUNCTION(execHelperRedeemPlayStationStoreInventoryItems); \
	DECLARE_FUNCTION(execRedeemPlayStationStoreInventoryItems); \
	DECLARE_FUNCTION(execHelperRedeemNintendoEShopInventoryItems); \
	DECLARE_FUNCTION(execRedeemNintendoEShopInventoryItems); \
	DECLARE_FUNCTION(execHelperRedeemMicrosoftStoreInventoryItems); \
	DECLARE_FUNCTION(execRedeemMicrosoftStoreInventoryItems); \
	DECLARE_FUNCTION(execHelperRedeemGooglePlayInventoryItems); \
	DECLARE_FUNCTION(execRedeemGooglePlayInventoryItems); \
	DECLARE_FUNCTION(execHelperRedeemAppleAppStoreInventoryItems); \
	DECLARE_FUNCTION(execRedeemAppleAppStoreInventoryItems); \
	DECLARE_FUNCTION(execHelperPurchaseInventoryItems); \
	DECLARE_FUNCTION(execPurchaseInventoryItems); \
	DECLARE_FUNCTION(execHelperGetTransactionHistory); \
	DECLARE_FUNCTION(execGetTransactionHistory); \
	DECLARE_FUNCTION(execHelperGetMicrosoftStoreAccessTokens); \
	DECLARE_FUNCTION(execGetMicrosoftStoreAccessTokens); \
	DECLARE_FUNCTION(execHelperGetInventoryItems); \
	DECLARE_FUNCTION(execGetInventoryItems); \
	DECLARE_FUNCTION(execHelperGetInventoryCollectionIds); \
	DECLARE_FUNCTION(execGetInventoryCollectionIds); \
	DECLARE_FUNCTION(execHelperExecuteInventoryOperations); \
	DECLARE_FUNCTION(execExecuteInventoryOperations); \
	DECLARE_FUNCTION(execHelperDeleteInventoryItems); \
	DECLARE_FUNCTION(execDeleteInventoryItems); \
	DECLARE_FUNCTION(execHelperDeleteInventoryCollection); \
	DECLARE_FUNCTION(execDeleteInventoryCollection); \
	DECLARE_FUNCTION(execHelperAddInventoryItems); \
	DECLARE_FUNCTION(execAddInventoryItems); \
	DECLARE_FUNCTION(execHelperUpdateDraftItem); \
	DECLARE_FUNCTION(execUpdateDraftItem); \
	DECLARE_FUNCTION(execHelperUpdateCatalogConfig); \
	DECLARE_FUNCTION(execUpdateCatalogConfig); \
	DECLARE_FUNCTION(execHelperTakedownItemReviews); \
	DECLARE_FUNCTION(execTakedownItemReviews); \
	DECLARE_FUNCTION(execHelperSubmitItemReviewVote); \
	DECLARE_FUNCTION(execSubmitItemReviewVote); \
	DECLARE_FUNCTION(execHelperSetItemModerationState); \
	DECLARE_FUNCTION(execSetItemModerationState); \
	DECLARE_FUNCTION(execHelperSearchItems); \
	DECLARE_FUNCTION(execSearchItems); \
	DECLARE_FUNCTION(execHelperReviewItem); \
	DECLARE_FUNCTION(execReviewItem); \
	DECLARE_FUNCTION(execHelperReportItemReview); \
	DECLARE_FUNCTION(execReportItemReview); \
	DECLARE_FUNCTION(execHelperReportItem); \
	DECLARE_FUNCTION(execReportItem); \
	DECLARE_FUNCTION(execHelperPublishDraftItem); \
	DECLARE_FUNCTION(execPublishDraftItem); \
	DECLARE_FUNCTION(execHelperGetItems); \
	DECLARE_FUNCTION(execGetItems); \
	DECLARE_FUNCTION(execHelperGetItemReviewSummary); \
	DECLARE_FUNCTION(execGetItemReviewSummary); \
	DECLARE_FUNCTION(execHelperGetItemReviews); \
	DECLARE_FUNCTION(execGetItemReviews); \
	DECLARE_FUNCTION(execHelperGetItemPublishStatus); \
	DECLARE_FUNCTION(execGetItemPublishStatus); \
	DECLARE_FUNCTION(execHelperGetItemModerationState); \
	DECLARE_FUNCTION(execGetItemModerationState); \
	DECLARE_FUNCTION(execHelperGetItemContainers); \
	DECLARE_FUNCTION(execGetItemContainers); \
	DECLARE_FUNCTION(execHelperGetItem); \
	DECLARE_FUNCTION(execGetItem); \
	DECLARE_FUNCTION(execHelperGetEntityItemReview); \
	DECLARE_FUNCTION(execGetEntityItemReview); \
	DECLARE_FUNCTION(execHelperGetEntityDraftItems); \
	DECLARE_FUNCTION(execGetEntityDraftItems); \
	DECLARE_FUNCTION(execHelperGetDraftItems); \
	DECLARE_FUNCTION(execGetDraftItems); \
	DECLARE_FUNCTION(execHelperGetDraftItem); \
	DECLARE_FUNCTION(execGetDraftItem); \
	DECLARE_FUNCTION(execHelperGetCatalogConfig); \
	DECLARE_FUNCTION(execGetCatalogConfig); \
	DECLARE_FUNCTION(execHelperDeleteItem); \
	DECLARE_FUNCTION(execDeleteItem); \
	DECLARE_FUNCTION(execHelperDeleteEntityItemReviews); \
	DECLARE_FUNCTION(execDeleteEntityItemReviews); \
	DECLARE_FUNCTION(execHelperCreateUploadUrls); \
	DECLARE_FUNCTION(execCreateUploadUrls); \
	DECLARE_FUNCTION(execHelperCreateDraftItem); \
	DECLARE_FUNCTION(execCreateDraftItem);


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabEconomyAPI_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHelperUpdateInventoryItems); \
	DECLARE_FUNCTION(execUpdateInventoryItems); \
	DECLARE_FUNCTION(execHelperTransferInventoryItems); \
	DECLARE_FUNCTION(execTransferInventoryItems); \
	DECLARE_FUNCTION(execHelperSubtractInventoryItems); \
	DECLARE_FUNCTION(execSubtractInventoryItems); \
	DECLARE_FUNCTION(execHelperRedeemSteamInventoryItems); \
	DECLARE_FUNCTION(execRedeemSteamInventoryItems); \
	DECLARE_FUNCTION(execHelperRedeemPlayStationStoreInventoryItems); \
	DECLARE_FUNCTION(execRedeemPlayStationStoreInventoryItems); \
	DECLARE_FUNCTION(execHelperRedeemNintendoEShopInventoryItems); \
	DECLARE_FUNCTION(execRedeemNintendoEShopInventoryItems); \
	DECLARE_FUNCTION(execHelperRedeemMicrosoftStoreInventoryItems); \
	DECLARE_FUNCTION(execRedeemMicrosoftStoreInventoryItems); \
	DECLARE_FUNCTION(execHelperRedeemGooglePlayInventoryItems); \
	DECLARE_FUNCTION(execRedeemGooglePlayInventoryItems); \
	DECLARE_FUNCTION(execHelperRedeemAppleAppStoreInventoryItems); \
	DECLARE_FUNCTION(execRedeemAppleAppStoreInventoryItems); \
	DECLARE_FUNCTION(execHelperPurchaseInventoryItems); \
	DECLARE_FUNCTION(execPurchaseInventoryItems); \
	DECLARE_FUNCTION(execHelperGetTransactionHistory); \
	DECLARE_FUNCTION(execGetTransactionHistory); \
	DECLARE_FUNCTION(execHelperGetMicrosoftStoreAccessTokens); \
	DECLARE_FUNCTION(execGetMicrosoftStoreAccessTokens); \
	DECLARE_FUNCTION(execHelperGetInventoryItems); \
	DECLARE_FUNCTION(execGetInventoryItems); \
	DECLARE_FUNCTION(execHelperGetInventoryCollectionIds); \
	DECLARE_FUNCTION(execGetInventoryCollectionIds); \
	DECLARE_FUNCTION(execHelperExecuteInventoryOperations); \
	DECLARE_FUNCTION(execExecuteInventoryOperations); \
	DECLARE_FUNCTION(execHelperDeleteInventoryItems); \
	DECLARE_FUNCTION(execDeleteInventoryItems); \
	DECLARE_FUNCTION(execHelperDeleteInventoryCollection); \
	DECLARE_FUNCTION(execDeleteInventoryCollection); \
	DECLARE_FUNCTION(execHelperAddInventoryItems); \
	DECLARE_FUNCTION(execAddInventoryItems); \
	DECLARE_FUNCTION(execHelperUpdateDraftItem); \
	DECLARE_FUNCTION(execUpdateDraftItem); \
	DECLARE_FUNCTION(execHelperUpdateCatalogConfig); \
	DECLARE_FUNCTION(execUpdateCatalogConfig); \
	DECLARE_FUNCTION(execHelperTakedownItemReviews); \
	DECLARE_FUNCTION(execTakedownItemReviews); \
	DECLARE_FUNCTION(execHelperSubmitItemReviewVote); \
	DECLARE_FUNCTION(execSubmitItemReviewVote); \
	DECLARE_FUNCTION(execHelperSetItemModerationState); \
	DECLARE_FUNCTION(execSetItemModerationState); \
	DECLARE_FUNCTION(execHelperSearchItems); \
	DECLARE_FUNCTION(execSearchItems); \
	DECLARE_FUNCTION(execHelperReviewItem); \
	DECLARE_FUNCTION(execReviewItem); \
	DECLARE_FUNCTION(execHelperReportItemReview); \
	DECLARE_FUNCTION(execReportItemReview); \
	DECLARE_FUNCTION(execHelperReportItem); \
	DECLARE_FUNCTION(execReportItem); \
	DECLARE_FUNCTION(execHelperPublishDraftItem); \
	DECLARE_FUNCTION(execPublishDraftItem); \
	DECLARE_FUNCTION(execHelperGetItems); \
	DECLARE_FUNCTION(execGetItems); \
	DECLARE_FUNCTION(execHelperGetItemReviewSummary); \
	DECLARE_FUNCTION(execGetItemReviewSummary); \
	DECLARE_FUNCTION(execHelperGetItemReviews); \
	DECLARE_FUNCTION(execGetItemReviews); \
	DECLARE_FUNCTION(execHelperGetItemPublishStatus); \
	DECLARE_FUNCTION(execGetItemPublishStatus); \
	DECLARE_FUNCTION(execHelperGetItemModerationState); \
	DECLARE_FUNCTION(execGetItemModerationState); \
	DECLARE_FUNCTION(execHelperGetItemContainers); \
	DECLARE_FUNCTION(execGetItemContainers); \
	DECLARE_FUNCTION(execHelperGetItem); \
	DECLARE_FUNCTION(execGetItem); \
	DECLARE_FUNCTION(execHelperGetEntityItemReview); \
	DECLARE_FUNCTION(execGetEntityItemReview); \
	DECLARE_FUNCTION(execHelperGetEntityDraftItems); \
	DECLARE_FUNCTION(execGetEntityDraftItems); \
	DECLARE_FUNCTION(execHelperGetDraftItems); \
	DECLARE_FUNCTION(execGetDraftItems); \
	DECLARE_FUNCTION(execHelperGetDraftItem); \
	DECLARE_FUNCTION(execGetDraftItem); \
	DECLARE_FUNCTION(execHelperGetCatalogConfig); \
	DECLARE_FUNCTION(execGetCatalogConfig); \
	DECLARE_FUNCTION(execHelperDeleteItem); \
	DECLARE_FUNCTION(execDeleteItem); \
	DECLARE_FUNCTION(execHelperDeleteEntityItemReviews); \
	DECLARE_FUNCTION(execDeleteEntityItemReviews); \
	DECLARE_FUNCTION(execHelperCreateUploadUrls); \
	DECLARE_FUNCTION(execCreateUploadUrls); \
	DECLARE_FUNCTION(execHelperCreateDraftItem); \
	DECLARE_FUNCTION(execCreateDraftItem);


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabEconomyAPI_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlayFabEconomyAPI(); \
	friend struct Z_Construct_UClass_UPlayFabEconomyAPI_Statics; \
public: \
	DECLARE_CLASS(UPlayFabEconomyAPI, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PlayFab"), NO_API) \
	DECLARE_SERIALIZER(UPlayFabEconomyAPI)


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabEconomyAPI_h_29_INCLASS \
private: \
	static void StaticRegisterNativesUPlayFabEconomyAPI(); \
	friend struct Z_Construct_UClass_UPlayFabEconomyAPI_Statics; \
public: \
	DECLARE_CLASS(UPlayFabEconomyAPI, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PlayFab"), NO_API) \
	DECLARE_SERIALIZER(UPlayFabEconomyAPI)


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabEconomyAPI_h_29_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayFabEconomyAPI(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayFabEconomyAPI) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayFabEconomyAPI); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayFabEconomyAPI); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayFabEconomyAPI(UPlayFabEconomyAPI&&); \
	NO_API UPlayFabEconomyAPI(const UPlayFabEconomyAPI&); \
public:


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabEconomyAPI_h_29_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayFabEconomyAPI(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayFabEconomyAPI(UPlayFabEconomyAPI&&); \
	NO_API UPlayFabEconomyAPI(const UPlayFabEconomyAPI&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayFabEconomyAPI); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayFabEconomyAPI); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayFabEconomyAPI)


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabEconomyAPI_h_29_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CallAuthenticationContext() { return STRUCT_OFFSET(UPlayFabEconomyAPI, CallAuthenticationContext); } \
	FORCEINLINE static uint32 __PPO__RequestJsonObj() { return STRUCT_OFFSET(UPlayFabEconomyAPI, RequestJsonObj); } \
	FORCEINLINE static uint32 __PPO__ResponseJsonObj() { return STRUCT_OFFSET(UPlayFabEconomyAPI, ResponseJsonObj); }


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabEconomyAPI_h_26_PROLOG
#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabEconomyAPI_h_29_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabEconomyAPI_h_29_PRIVATE_PROPERTY_OFFSET \
	UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabEconomyAPI_h_29_SPARSE_DATA \
	UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabEconomyAPI_h_29_RPC_WRAPPERS \
	UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabEconomyAPI_h_29_INCLASS \
	UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabEconomyAPI_h_29_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabEconomyAPI_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabEconomyAPI_h_29_PRIVATE_PROPERTY_OFFSET \
	UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabEconomyAPI_h_29_SPARSE_DATA \
	UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabEconomyAPI_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabEconomyAPI_h_29_INCLASS_NO_PURE_DECLS \
	UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabEconomyAPI_h_29_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class PlayFabEconomyAPI."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PLAYFAB_API UClass* StaticClass<class UPlayFabEconomyAPI>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabEconomyAPI_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
