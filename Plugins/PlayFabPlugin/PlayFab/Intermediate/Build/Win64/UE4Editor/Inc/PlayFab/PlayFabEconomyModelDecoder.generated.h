// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPlayFabJsonObject;
struct FEconomyUpdateInventoryItemsResponse;
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
#ifdef PLAYFAB_PlayFabEconomyModelDecoder_generated_h
#error "PlayFabEconomyModelDecoder.generated.h already included, missing '#pragma once' in PlayFabEconomyModelDecoder.h"
#endif
#define PLAYFAB_PlayFabEconomyModelDecoder_generated_h

#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabEconomyModelDecoder_h_26_SPARSE_DATA
#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabEconomyModelDecoder_h_26_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execdecodeUpdateInventoryItemsResponseResponse); \
	DECLARE_FUNCTION(execdecodeTransferInventoryItemsResponseResponse); \
	DECLARE_FUNCTION(execdecodeSubtractInventoryItemsResponseResponse); \
	DECLARE_FUNCTION(execdecodeRedeemSteamInventoryItemsResponseResponse); \
	DECLARE_FUNCTION(execdecodeRedeemPlayStationStoreInventoryItemsResponseResponse); \
	DECLARE_FUNCTION(execdecodeRedeemNintendoEShopInventoryItemsResponseResponse); \
	DECLARE_FUNCTION(execdecodeRedeemMicrosoftStoreInventoryItemsResponseResponse); \
	DECLARE_FUNCTION(execdecodeRedeemGooglePlayInventoryItemsResponseResponse); \
	DECLARE_FUNCTION(execdecodeRedeemAppleAppStoreInventoryItemsResponseResponse); \
	DECLARE_FUNCTION(execdecodePurchaseInventoryItemsResponseResponse); \
	DECLARE_FUNCTION(execdecodeGetTransactionHistoryResponseResponse); \
	DECLARE_FUNCTION(execdecodeGetMicrosoftStoreAccessTokensResponseResponse); \
	DECLARE_FUNCTION(execdecodeGetInventoryItemsResponseResponse); \
	DECLARE_FUNCTION(execdecodeGetInventoryCollectionIdsResponseResponse); \
	DECLARE_FUNCTION(execdecodeExecuteInventoryOperationsResponseResponse); \
	DECLARE_FUNCTION(execdecodeDeleteInventoryItemsResponseResponse); \
	DECLARE_FUNCTION(execdecodeDeleteInventoryCollectionResponseResponse); \
	DECLARE_FUNCTION(execdecodeAddInventoryItemsResponseResponse); \
	DECLARE_FUNCTION(execdecodeUpdateDraftItemResponseResponse); \
	DECLARE_FUNCTION(execdecodeUpdateCatalogConfigResponseResponse); \
	DECLARE_FUNCTION(execdecodeTakedownItemReviewsResponseResponse); \
	DECLARE_FUNCTION(execdecodeSubmitItemReviewVoteResponseResponse); \
	DECLARE_FUNCTION(execdecodeSetItemModerationStateResponseResponse); \
	DECLARE_FUNCTION(execdecodeSearchItemsResponseResponse); \
	DECLARE_FUNCTION(execdecodeReviewItemResponseResponse); \
	DECLARE_FUNCTION(execdecodeReportItemReviewResponseResponse); \
	DECLARE_FUNCTION(execdecodeReportItemResponseResponse); \
	DECLARE_FUNCTION(execdecodePublishDraftItemResponseResponse); \
	DECLARE_FUNCTION(execdecodeGetItemsResponseResponse); \
	DECLARE_FUNCTION(execdecodeGetItemReviewSummaryResponseResponse); \
	DECLARE_FUNCTION(execdecodeGetItemReviewsResponseResponse); \
	DECLARE_FUNCTION(execdecodeGetItemPublishStatusResponseResponse); \
	DECLARE_FUNCTION(execdecodeGetItemModerationStateResponseResponse); \
	DECLARE_FUNCTION(execdecodeGetItemContainersResponseResponse); \
	DECLARE_FUNCTION(execdecodeGetItemResponseResponse); \
	DECLARE_FUNCTION(execdecodeGetEntityItemReviewResponseResponse); \
	DECLARE_FUNCTION(execdecodeGetEntityDraftItemsResponseResponse); \
	DECLARE_FUNCTION(execdecodeGetDraftItemsResponseResponse); \
	DECLARE_FUNCTION(execdecodeGetDraftItemResponseResponse); \
	DECLARE_FUNCTION(execdecodeGetCatalogConfigResponseResponse); \
	DECLARE_FUNCTION(execdecodeDeleteItemResponseResponse); \
	DECLARE_FUNCTION(execdecodeDeleteEntityItemReviewsResponseResponse); \
	DECLARE_FUNCTION(execdecodeCreateUploadUrlsResponseResponse); \
	DECLARE_FUNCTION(execdecodeCreateDraftItemResponseResponse);


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabEconomyModelDecoder_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execdecodeUpdateInventoryItemsResponseResponse); \
	DECLARE_FUNCTION(execdecodeTransferInventoryItemsResponseResponse); \
	DECLARE_FUNCTION(execdecodeSubtractInventoryItemsResponseResponse); \
	DECLARE_FUNCTION(execdecodeRedeemSteamInventoryItemsResponseResponse); \
	DECLARE_FUNCTION(execdecodeRedeemPlayStationStoreInventoryItemsResponseResponse); \
	DECLARE_FUNCTION(execdecodeRedeemNintendoEShopInventoryItemsResponseResponse); \
	DECLARE_FUNCTION(execdecodeRedeemMicrosoftStoreInventoryItemsResponseResponse); \
	DECLARE_FUNCTION(execdecodeRedeemGooglePlayInventoryItemsResponseResponse); \
	DECLARE_FUNCTION(execdecodeRedeemAppleAppStoreInventoryItemsResponseResponse); \
	DECLARE_FUNCTION(execdecodePurchaseInventoryItemsResponseResponse); \
	DECLARE_FUNCTION(execdecodeGetTransactionHistoryResponseResponse); \
	DECLARE_FUNCTION(execdecodeGetMicrosoftStoreAccessTokensResponseResponse); \
	DECLARE_FUNCTION(execdecodeGetInventoryItemsResponseResponse); \
	DECLARE_FUNCTION(execdecodeGetInventoryCollectionIdsResponseResponse); \
	DECLARE_FUNCTION(execdecodeExecuteInventoryOperationsResponseResponse); \
	DECLARE_FUNCTION(execdecodeDeleteInventoryItemsResponseResponse); \
	DECLARE_FUNCTION(execdecodeDeleteInventoryCollectionResponseResponse); \
	DECLARE_FUNCTION(execdecodeAddInventoryItemsResponseResponse); \
	DECLARE_FUNCTION(execdecodeUpdateDraftItemResponseResponse); \
	DECLARE_FUNCTION(execdecodeUpdateCatalogConfigResponseResponse); \
	DECLARE_FUNCTION(execdecodeTakedownItemReviewsResponseResponse); \
	DECLARE_FUNCTION(execdecodeSubmitItemReviewVoteResponseResponse); \
	DECLARE_FUNCTION(execdecodeSetItemModerationStateResponseResponse); \
	DECLARE_FUNCTION(execdecodeSearchItemsResponseResponse); \
	DECLARE_FUNCTION(execdecodeReviewItemResponseResponse); \
	DECLARE_FUNCTION(execdecodeReportItemReviewResponseResponse); \
	DECLARE_FUNCTION(execdecodeReportItemResponseResponse); \
	DECLARE_FUNCTION(execdecodePublishDraftItemResponseResponse); \
	DECLARE_FUNCTION(execdecodeGetItemsResponseResponse); \
	DECLARE_FUNCTION(execdecodeGetItemReviewSummaryResponseResponse); \
	DECLARE_FUNCTION(execdecodeGetItemReviewsResponseResponse); \
	DECLARE_FUNCTION(execdecodeGetItemPublishStatusResponseResponse); \
	DECLARE_FUNCTION(execdecodeGetItemModerationStateResponseResponse); \
	DECLARE_FUNCTION(execdecodeGetItemContainersResponseResponse); \
	DECLARE_FUNCTION(execdecodeGetItemResponseResponse); \
	DECLARE_FUNCTION(execdecodeGetEntityItemReviewResponseResponse); \
	DECLARE_FUNCTION(execdecodeGetEntityDraftItemsResponseResponse); \
	DECLARE_FUNCTION(execdecodeGetDraftItemsResponseResponse); \
	DECLARE_FUNCTION(execdecodeGetDraftItemResponseResponse); \
	DECLARE_FUNCTION(execdecodeGetCatalogConfigResponseResponse); \
	DECLARE_FUNCTION(execdecodeDeleteItemResponseResponse); \
	DECLARE_FUNCTION(execdecodeDeleteEntityItemReviewsResponseResponse); \
	DECLARE_FUNCTION(execdecodeCreateUploadUrlsResponseResponse); \
	DECLARE_FUNCTION(execdecodeCreateDraftItemResponseResponse);


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabEconomyModelDecoder_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlayFabEconomyModelDecoder(); \
	friend struct Z_Construct_UClass_UPlayFabEconomyModelDecoder_Statics; \
public: \
	DECLARE_CLASS(UPlayFabEconomyModelDecoder, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PlayFab"), NO_API) \
	DECLARE_SERIALIZER(UPlayFabEconomyModelDecoder)


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabEconomyModelDecoder_h_26_INCLASS \
private: \
	static void StaticRegisterNativesUPlayFabEconomyModelDecoder(); \
	friend struct Z_Construct_UClass_UPlayFabEconomyModelDecoder_Statics; \
public: \
	DECLARE_CLASS(UPlayFabEconomyModelDecoder, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PlayFab"), NO_API) \
	DECLARE_SERIALIZER(UPlayFabEconomyModelDecoder)


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabEconomyModelDecoder_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayFabEconomyModelDecoder(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayFabEconomyModelDecoder) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayFabEconomyModelDecoder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayFabEconomyModelDecoder); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayFabEconomyModelDecoder(UPlayFabEconomyModelDecoder&&); \
	NO_API UPlayFabEconomyModelDecoder(const UPlayFabEconomyModelDecoder&); \
public:


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabEconomyModelDecoder_h_26_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayFabEconomyModelDecoder(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayFabEconomyModelDecoder(UPlayFabEconomyModelDecoder&&); \
	NO_API UPlayFabEconomyModelDecoder(const UPlayFabEconomyModelDecoder&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayFabEconomyModelDecoder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayFabEconomyModelDecoder); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayFabEconomyModelDecoder)


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabEconomyModelDecoder_h_26_PRIVATE_PROPERTY_OFFSET
#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabEconomyModelDecoder_h_23_PROLOG
#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabEconomyModelDecoder_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabEconomyModelDecoder_h_26_PRIVATE_PROPERTY_OFFSET \
	UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabEconomyModelDecoder_h_26_SPARSE_DATA \
	UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabEconomyModelDecoder_h_26_RPC_WRAPPERS \
	UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabEconomyModelDecoder_h_26_INCLASS \
	UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabEconomyModelDecoder_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabEconomyModelDecoder_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabEconomyModelDecoder_h_26_PRIVATE_PROPERTY_OFFSET \
	UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabEconomyModelDecoder_h_26_SPARSE_DATA \
	UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabEconomyModelDecoder_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabEconomyModelDecoder_h_26_INCLASS_NO_PURE_DECLS \
	UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabEconomyModelDecoder_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PLAYFAB_API UClass* StaticClass<class UPlayFabEconomyModelDecoder>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabEconomyModelDecoder_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
