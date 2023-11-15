// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Classes/PlayFabEconomyModelDecoder.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayFabEconomyModelDecoder() {}
// Cross Module References
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabEconomyModelDecoder_NoRegister();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabEconomyModelDecoder();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FEconomyAddInventoryItemsResponse();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FEconomyCreateDraftItemResponse();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FEconomyCreateUploadUrlsResponse();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FEconomyDeleteEntityItemReviewsResponse();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FEconomyDeleteInventoryCollectionResponse();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FEconomyDeleteInventoryItemsResponse();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FEconomyDeleteItemResponse();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FEconomyExecuteInventoryOperationsResponse();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FEconomyGetCatalogConfigResponse();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FEconomyGetDraftItemResponse();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FEconomyGetDraftItemsResponse();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FEconomyGetEntityDraftItemsResponse();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FEconomyGetEntityItemReviewResponse();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FEconomyGetInventoryCollectionIdsResponse();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FEconomyGetInventoryItemsResponse();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FEconomyGetItemContainersResponse();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FEconomyGetItemModerationStateResponse();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FEconomyGetItemPublishStatusResponse();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FEconomyGetItemResponse();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FEconomyGetItemReviewsResponse();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FEconomyGetItemReviewSummaryResponse();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FEconomyGetItemsResponse();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FEconomyGetMicrosoftStoreAccessTokensResponse();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FEconomyGetTransactionHistoryResponse();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FEconomyPublishDraftItemResponse();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FEconomyPurchaseInventoryItemsResponse();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FEconomyRedeemAppleAppStoreInventoryItemsResponse();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FEconomyRedeemGooglePlayInventoryItemsResponse();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FEconomyRedeemMicrosoftStoreInventoryItemsResponse();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FEconomyRedeemNintendoEShopInventoryItemsResponse();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FEconomyRedeemPlayStationStoreInventoryItemsResponse();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FEconomyRedeemSteamInventoryItemsResponse();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FEconomyReportItemResponse();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FEconomyReportItemReviewResponse();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FEconomyReviewItemResponse();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FEconomySearchItemsResponse();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FEconomySetItemModerationStateResponse();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FEconomySubmitItemReviewVoteResponse();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FEconomySubtractInventoryItemsResponse();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FEconomyTakedownItemReviewsResponse();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FEconomyTransferInventoryItemsResponse();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FEconomyUpdateCatalogConfigResponse();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FEconomyUpdateDraftItemResponse();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FEconomyUpdateInventoryItemsResponse();
// End Cross Module References
	DEFINE_FUNCTION(UPlayFabEconomyModelDecoder::execdecodeUpdateInventoryItemsResponseResponse)
	{
		P_GET_OBJECT(UPlayFabJsonObject,Z_Param_response);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FEconomyUpdateInventoryItemsResponse*)Z_Param__Result=UPlayFabEconomyModelDecoder::decodeUpdateInventoryItemsResponseResponse(Z_Param_response);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabEconomyModelDecoder::execdecodeTransferInventoryItemsResponseResponse)
	{
		P_GET_OBJECT(UPlayFabJsonObject,Z_Param_response);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FEconomyTransferInventoryItemsResponse*)Z_Param__Result=UPlayFabEconomyModelDecoder::decodeTransferInventoryItemsResponseResponse(Z_Param_response);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabEconomyModelDecoder::execdecodeSubtractInventoryItemsResponseResponse)
	{
		P_GET_OBJECT(UPlayFabJsonObject,Z_Param_response);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FEconomySubtractInventoryItemsResponse*)Z_Param__Result=UPlayFabEconomyModelDecoder::decodeSubtractInventoryItemsResponseResponse(Z_Param_response);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabEconomyModelDecoder::execdecodeRedeemSteamInventoryItemsResponseResponse)
	{
		P_GET_OBJECT(UPlayFabJsonObject,Z_Param_response);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FEconomyRedeemSteamInventoryItemsResponse*)Z_Param__Result=UPlayFabEconomyModelDecoder::decodeRedeemSteamInventoryItemsResponseResponse(Z_Param_response);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabEconomyModelDecoder::execdecodeRedeemPlayStationStoreInventoryItemsResponseResponse)
	{
		P_GET_OBJECT(UPlayFabJsonObject,Z_Param_response);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FEconomyRedeemPlayStationStoreInventoryItemsResponse*)Z_Param__Result=UPlayFabEconomyModelDecoder::decodeRedeemPlayStationStoreInventoryItemsResponseResponse(Z_Param_response);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabEconomyModelDecoder::execdecodeRedeemNintendoEShopInventoryItemsResponseResponse)
	{
		P_GET_OBJECT(UPlayFabJsonObject,Z_Param_response);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FEconomyRedeemNintendoEShopInventoryItemsResponse*)Z_Param__Result=UPlayFabEconomyModelDecoder::decodeRedeemNintendoEShopInventoryItemsResponseResponse(Z_Param_response);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabEconomyModelDecoder::execdecodeRedeemMicrosoftStoreInventoryItemsResponseResponse)
	{
		P_GET_OBJECT(UPlayFabJsonObject,Z_Param_response);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FEconomyRedeemMicrosoftStoreInventoryItemsResponse*)Z_Param__Result=UPlayFabEconomyModelDecoder::decodeRedeemMicrosoftStoreInventoryItemsResponseResponse(Z_Param_response);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabEconomyModelDecoder::execdecodeRedeemGooglePlayInventoryItemsResponseResponse)
	{
		P_GET_OBJECT(UPlayFabJsonObject,Z_Param_response);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FEconomyRedeemGooglePlayInventoryItemsResponse*)Z_Param__Result=UPlayFabEconomyModelDecoder::decodeRedeemGooglePlayInventoryItemsResponseResponse(Z_Param_response);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabEconomyModelDecoder::execdecodeRedeemAppleAppStoreInventoryItemsResponseResponse)
	{
		P_GET_OBJECT(UPlayFabJsonObject,Z_Param_response);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FEconomyRedeemAppleAppStoreInventoryItemsResponse*)Z_Param__Result=UPlayFabEconomyModelDecoder::decodeRedeemAppleAppStoreInventoryItemsResponseResponse(Z_Param_response);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabEconomyModelDecoder::execdecodePurchaseInventoryItemsResponseResponse)
	{
		P_GET_OBJECT(UPlayFabJsonObject,Z_Param_response);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FEconomyPurchaseInventoryItemsResponse*)Z_Param__Result=UPlayFabEconomyModelDecoder::decodePurchaseInventoryItemsResponseResponse(Z_Param_response);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabEconomyModelDecoder::execdecodeGetTransactionHistoryResponseResponse)
	{
		P_GET_OBJECT(UPlayFabJsonObject,Z_Param_response);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FEconomyGetTransactionHistoryResponse*)Z_Param__Result=UPlayFabEconomyModelDecoder::decodeGetTransactionHistoryResponseResponse(Z_Param_response);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabEconomyModelDecoder::execdecodeGetMicrosoftStoreAccessTokensResponseResponse)
	{
		P_GET_OBJECT(UPlayFabJsonObject,Z_Param_response);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FEconomyGetMicrosoftStoreAccessTokensResponse*)Z_Param__Result=UPlayFabEconomyModelDecoder::decodeGetMicrosoftStoreAccessTokensResponseResponse(Z_Param_response);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabEconomyModelDecoder::execdecodeGetInventoryItemsResponseResponse)
	{
		P_GET_OBJECT(UPlayFabJsonObject,Z_Param_response);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FEconomyGetInventoryItemsResponse*)Z_Param__Result=UPlayFabEconomyModelDecoder::decodeGetInventoryItemsResponseResponse(Z_Param_response);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabEconomyModelDecoder::execdecodeGetInventoryCollectionIdsResponseResponse)
	{
		P_GET_OBJECT(UPlayFabJsonObject,Z_Param_response);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FEconomyGetInventoryCollectionIdsResponse*)Z_Param__Result=UPlayFabEconomyModelDecoder::decodeGetInventoryCollectionIdsResponseResponse(Z_Param_response);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabEconomyModelDecoder::execdecodeExecuteInventoryOperationsResponseResponse)
	{
		P_GET_OBJECT(UPlayFabJsonObject,Z_Param_response);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FEconomyExecuteInventoryOperationsResponse*)Z_Param__Result=UPlayFabEconomyModelDecoder::decodeExecuteInventoryOperationsResponseResponse(Z_Param_response);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabEconomyModelDecoder::execdecodeDeleteInventoryItemsResponseResponse)
	{
		P_GET_OBJECT(UPlayFabJsonObject,Z_Param_response);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FEconomyDeleteInventoryItemsResponse*)Z_Param__Result=UPlayFabEconomyModelDecoder::decodeDeleteInventoryItemsResponseResponse(Z_Param_response);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabEconomyModelDecoder::execdecodeDeleteInventoryCollectionResponseResponse)
	{
		P_GET_OBJECT(UPlayFabJsonObject,Z_Param_response);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FEconomyDeleteInventoryCollectionResponse*)Z_Param__Result=UPlayFabEconomyModelDecoder::decodeDeleteInventoryCollectionResponseResponse(Z_Param_response);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabEconomyModelDecoder::execdecodeAddInventoryItemsResponseResponse)
	{
		P_GET_OBJECT(UPlayFabJsonObject,Z_Param_response);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FEconomyAddInventoryItemsResponse*)Z_Param__Result=UPlayFabEconomyModelDecoder::decodeAddInventoryItemsResponseResponse(Z_Param_response);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabEconomyModelDecoder::execdecodeUpdateDraftItemResponseResponse)
	{
		P_GET_OBJECT(UPlayFabJsonObject,Z_Param_response);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FEconomyUpdateDraftItemResponse*)Z_Param__Result=UPlayFabEconomyModelDecoder::decodeUpdateDraftItemResponseResponse(Z_Param_response);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabEconomyModelDecoder::execdecodeUpdateCatalogConfigResponseResponse)
	{
		P_GET_OBJECT(UPlayFabJsonObject,Z_Param_response);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FEconomyUpdateCatalogConfigResponse*)Z_Param__Result=UPlayFabEconomyModelDecoder::decodeUpdateCatalogConfigResponseResponse(Z_Param_response);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabEconomyModelDecoder::execdecodeTakedownItemReviewsResponseResponse)
	{
		P_GET_OBJECT(UPlayFabJsonObject,Z_Param_response);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FEconomyTakedownItemReviewsResponse*)Z_Param__Result=UPlayFabEconomyModelDecoder::decodeTakedownItemReviewsResponseResponse(Z_Param_response);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabEconomyModelDecoder::execdecodeSubmitItemReviewVoteResponseResponse)
	{
		P_GET_OBJECT(UPlayFabJsonObject,Z_Param_response);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FEconomySubmitItemReviewVoteResponse*)Z_Param__Result=UPlayFabEconomyModelDecoder::decodeSubmitItemReviewVoteResponseResponse(Z_Param_response);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabEconomyModelDecoder::execdecodeSetItemModerationStateResponseResponse)
	{
		P_GET_OBJECT(UPlayFabJsonObject,Z_Param_response);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FEconomySetItemModerationStateResponse*)Z_Param__Result=UPlayFabEconomyModelDecoder::decodeSetItemModerationStateResponseResponse(Z_Param_response);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabEconomyModelDecoder::execdecodeSearchItemsResponseResponse)
	{
		P_GET_OBJECT(UPlayFabJsonObject,Z_Param_response);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FEconomySearchItemsResponse*)Z_Param__Result=UPlayFabEconomyModelDecoder::decodeSearchItemsResponseResponse(Z_Param_response);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabEconomyModelDecoder::execdecodeReviewItemResponseResponse)
	{
		P_GET_OBJECT(UPlayFabJsonObject,Z_Param_response);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FEconomyReviewItemResponse*)Z_Param__Result=UPlayFabEconomyModelDecoder::decodeReviewItemResponseResponse(Z_Param_response);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabEconomyModelDecoder::execdecodeReportItemReviewResponseResponse)
	{
		P_GET_OBJECT(UPlayFabJsonObject,Z_Param_response);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FEconomyReportItemReviewResponse*)Z_Param__Result=UPlayFabEconomyModelDecoder::decodeReportItemReviewResponseResponse(Z_Param_response);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabEconomyModelDecoder::execdecodeReportItemResponseResponse)
	{
		P_GET_OBJECT(UPlayFabJsonObject,Z_Param_response);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FEconomyReportItemResponse*)Z_Param__Result=UPlayFabEconomyModelDecoder::decodeReportItemResponseResponse(Z_Param_response);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabEconomyModelDecoder::execdecodePublishDraftItemResponseResponse)
	{
		P_GET_OBJECT(UPlayFabJsonObject,Z_Param_response);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FEconomyPublishDraftItemResponse*)Z_Param__Result=UPlayFabEconomyModelDecoder::decodePublishDraftItemResponseResponse(Z_Param_response);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabEconomyModelDecoder::execdecodeGetItemsResponseResponse)
	{
		P_GET_OBJECT(UPlayFabJsonObject,Z_Param_response);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FEconomyGetItemsResponse*)Z_Param__Result=UPlayFabEconomyModelDecoder::decodeGetItemsResponseResponse(Z_Param_response);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabEconomyModelDecoder::execdecodeGetItemReviewSummaryResponseResponse)
	{
		P_GET_OBJECT(UPlayFabJsonObject,Z_Param_response);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FEconomyGetItemReviewSummaryResponse*)Z_Param__Result=UPlayFabEconomyModelDecoder::decodeGetItemReviewSummaryResponseResponse(Z_Param_response);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabEconomyModelDecoder::execdecodeGetItemReviewsResponseResponse)
	{
		P_GET_OBJECT(UPlayFabJsonObject,Z_Param_response);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FEconomyGetItemReviewsResponse*)Z_Param__Result=UPlayFabEconomyModelDecoder::decodeGetItemReviewsResponseResponse(Z_Param_response);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabEconomyModelDecoder::execdecodeGetItemPublishStatusResponseResponse)
	{
		P_GET_OBJECT(UPlayFabJsonObject,Z_Param_response);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FEconomyGetItemPublishStatusResponse*)Z_Param__Result=UPlayFabEconomyModelDecoder::decodeGetItemPublishStatusResponseResponse(Z_Param_response);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabEconomyModelDecoder::execdecodeGetItemModerationStateResponseResponse)
	{
		P_GET_OBJECT(UPlayFabJsonObject,Z_Param_response);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FEconomyGetItemModerationStateResponse*)Z_Param__Result=UPlayFabEconomyModelDecoder::decodeGetItemModerationStateResponseResponse(Z_Param_response);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabEconomyModelDecoder::execdecodeGetItemContainersResponseResponse)
	{
		P_GET_OBJECT(UPlayFabJsonObject,Z_Param_response);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FEconomyGetItemContainersResponse*)Z_Param__Result=UPlayFabEconomyModelDecoder::decodeGetItemContainersResponseResponse(Z_Param_response);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabEconomyModelDecoder::execdecodeGetItemResponseResponse)
	{
		P_GET_OBJECT(UPlayFabJsonObject,Z_Param_response);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FEconomyGetItemResponse*)Z_Param__Result=UPlayFabEconomyModelDecoder::decodeGetItemResponseResponse(Z_Param_response);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabEconomyModelDecoder::execdecodeGetEntityItemReviewResponseResponse)
	{
		P_GET_OBJECT(UPlayFabJsonObject,Z_Param_response);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FEconomyGetEntityItemReviewResponse*)Z_Param__Result=UPlayFabEconomyModelDecoder::decodeGetEntityItemReviewResponseResponse(Z_Param_response);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabEconomyModelDecoder::execdecodeGetEntityDraftItemsResponseResponse)
	{
		P_GET_OBJECT(UPlayFabJsonObject,Z_Param_response);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FEconomyGetEntityDraftItemsResponse*)Z_Param__Result=UPlayFabEconomyModelDecoder::decodeGetEntityDraftItemsResponseResponse(Z_Param_response);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabEconomyModelDecoder::execdecodeGetDraftItemsResponseResponse)
	{
		P_GET_OBJECT(UPlayFabJsonObject,Z_Param_response);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FEconomyGetDraftItemsResponse*)Z_Param__Result=UPlayFabEconomyModelDecoder::decodeGetDraftItemsResponseResponse(Z_Param_response);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabEconomyModelDecoder::execdecodeGetDraftItemResponseResponse)
	{
		P_GET_OBJECT(UPlayFabJsonObject,Z_Param_response);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FEconomyGetDraftItemResponse*)Z_Param__Result=UPlayFabEconomyModelDecoder::decodeGetDraftItemResponseResponse(Z_Param_response);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabEconomyModelDecoder::execdecodeGetCatalogConfigResponseResponse)
	{
		P_GET_OBJECT(UPlayFabJsonObject,Z_Param_response);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FEconomyGetCatalogConfigResponse*)Z_Param__Result=UPlayFabEconomyModelDecoder::decodeGetCatalogConfigResponseResponse(Z_Param_response);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabEconomyModelDecoder::execdecodeDeleteItemResponseResponse)
	{
		P_GET_OBJECT(UPlayFabJsonObject,Z_Param_response);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FEconomyDeleteItemResponse*)Z_Param__Result=UPlayFabEconomyModelDecoder::decodeDeleteItemResponseResponse(Z_Param_response);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabEconomyModelDecoder::execdecodeDeleteEntityItemReviewsResponseResponse)
	{
		P_GET_OBJECT(UPlayFabJsonObject,Z_Param_response);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FEconomyDeleteEntityItemReviewsResponse*)Z_Param__Result=UPlayFabEconomyModelDecoder::decodeDeleteEntityItemReviewsResponseResponse(Z_Param_response);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabEconomyModelDecoder::execdecodeCreateUploadUrlsResponseResponse)
	{
		P_GET_OBJECT(UPlayFabJsonObject,Z_Param_response);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FEconomyCreateUploadUrlsResponse*)Z_Param__Result=UPlayFabEconomyModelDecoder::decodeCreateUploadUrlsResponseResponse(Z_Param_response);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabEconomyModelDecoder::execdecodeCreateDraftItemResponseResponse)
	{
		P_GET_OBJECT(UPlayFabJsonObject,Z_Param_response);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FEconomyCreateDraftItemResponse*)Z_Param__Result=UPlayFabEconomyModelDecoder::decodeCreateDraftItemResponseResponse(Z_Param_response);
		P_NATIVE_END;
	}
	void UPlayFabEconomyModelDecoder::StaticRegisterNativesUPlayFabEconomyModelDecoder()
	{
		UClass* Class = UPlayFabEconomyModelDecoder::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "decodeAddInventoryItemsResponseResponse", &UPlayFabEconomyModelDecoder::execdecodeAddInventoryItemsResponseResponse },
			{ "decodeCreateDraftItemResponseResponse", &UPlayFabEconomyModelDecoder::execdecodeCreateDraftItemResponseResponse },
			{ "decodeCreateUploadUrlsResponseResponse", &UPlayFabEconomyModelDecoder::execdecodeCreateUploadUrlsResponseResponse },
			{ "decodeDeleteEntityItemReviewsResponseResponse", &UPlayFabEconomyModelDecoder::execdecodeDeleteEntityItemReviewsResponseResponse },
			{ "decodeDeleteInventoryCollectionResponseResponse", &UPlayFabEconomyModelDecoder::execdecodeDeleteInventoryCollectionResponseResponse },
			{ "decodeDeleteInventoryItemsResponseResponse", &UPlayFabEconomyModelDecoder::execdecodeDeleteInventoryItemsResponseResponse },
			{ "decodeDeleteItemResponseResponse", &UPlayFabEconomyModelDecoder::execdecodeDeleteItemResponseResponse },
			{ "decodeExecuteInventoryOperationsResponseResponse", &UPlayFabEconomyModelDecoder::execdecodeExecuteInventoryOperationsResponseResponse },
			{ "decodeGetCatalogConfigResponseResponse", &UPlayFabEconomyModelDecoder::execdecodeGetCatalogConfigResponseResponse },
			{ "decodeGetDraftItemResponseResponse", &UPlayFabEconomyModelDecoder::execdecodeGetDraftItemResponseResponse },
			{ "decodeGetDraftItemsResponseResponse", &UPlayFabEconomyModelDecoder::execdecodeGetDraftItemsResponseResponse },
			{ "decodeGetEntityDraftItemsResponseResponse", &UPlayFabEconomyModelDecoder::execdecodeGetEntityDraftItemsResponseResponse },
			{ "decodeGetEntityItemReviewResponseResponse", &UPlayFabEconomyModelDecoder::execdecodeGetEntityItemReviewResponseResponse },
			{ "decodeGetInventoryCollectionIdsResponseResponse", &UPlayFabEconomyModelDecoder::execdecodeGetInventoryCollectionIdsResponseResponse },
			{ "decodeGetInventoryItemsResponseResponse", &UPlayFabEconomyModelDecoder::execdecodeGetInventoryItemsResponseResponse },
			{ "decodeGetItemContainersResponseResponse", &UPlayFabEconomyModelDecoder::execdecodeGetItemContainersResponseResponse },
			{ "decodeGetItemModerationStateResponseResponse", &UPlayFabEconomyModelDecoder::execdecodeGetItemModerationStateResponseResponse },
			{ "decodeGetItemPublishStatusResponseResponse", &UPlayFabEconomyModelDecoder::execdecodeGetItemPublishStatusResponseResponse },
			{ "decodeGetItemResponseResponse", &UPlayFabEconomyModelDecoder::execdecodeGetItemResponseResponse },
			{ "decodeGetItemReviewsResponseResponse", &UPlayFabEconomyModelDecoder::execdecodeGetItemReviewsResponseResponse },
			{ "decodeGetItemReviewSummaryResponseResponse", &UPlayFabEconomyModelDecoder::execdecodeGetItemReviewSummaryResponseResponse },
			{ "decodeGetItemsResponseResponse", &UPlayFabEconomyModelDecoder::execdecodeGetItemsResponseResponse },
			{ "decodeGetMicrosoftStoreAccessTokensResponseResponse", &UPlayFabEconomyModelDecoder::execdecodeGetMicrosoftStoreAccessTokensResponseResponse },
			{ "decodeGetTransactionHistoryResponseResponse", &UPlayFabEconomyModelDecoder::execdecodeGetTransactionHistoryResponseResponse },
			{ "decodePublishDraftItemResponseResponse", &UPlayFabEconomyModelDecoder::execdecodePublishDraftItemResponseResponse },
			{ "decodePurchaseInventoryItemsResponseResponse", &UPlayFabEconomyModelDecoder::execdecodePurchaseInventoryItemsResponseResponse },
			{ "decodeRedeemAppleAppStoreInventoryItemsResponseResponse", &UPlayFabEconomyModelDecoder::execdecodeRedeemAppleAppStoreInventoryItemsResponseResponse },
			{ "decodeRedeemGooglePlayInventoryItemsResponseResponse", &UPlayFabEconomyModelDecoder::execdecodeRedeemGooglePlayInventoryItemsResponseResponse },
			{ "decodeRedeemMicrosoftStoreInventoryItemsResponseResponse", &UPlayFabEconomyModelDecoder::execdecodeRedeemMicrosoftStoreInventoryItemsResponseResponse },
			{ "decodeRedeemNintendoEShopInventoryItemsResponseResponse", &UPlayFabEconomyModelDecoder::execdecodeRedeemNintendoEShopInventoryItemsResponseResponse },
			{ "decodeRedeemPlayStationStoreInventoryItemsResponseResponse", &UPlayFabEconomyModelDecoder::execdecodeRedeemPlayStationStoreInventoryItemsResponseResponse },
			{ "decodeRedeemSteamInventoryItemsResponseResponse", &UPlayFabEconomyModelDecoder::execdecodeRedeemSteamInventoryItemsResponseResponse },
			{ "decodeReportItemResponseResponse", &UPlayFabEconomyModelDecoder::execdecodeReportItemResponseResponse },
			{ "decodeReportItemReviewResponseResponse", &UPlayFabEconomyModelDecoder::execdecodeReportItemReviewResponseResponse },
			{ "decodeReviewItemResponseResponse", &UPlayFabEconomyModelDecoder::execdecodeReviewItemResponseResponse },
			{ "decodeSearchItemsResponseResponse", &UPlayFabEconomyModelDecoder::execdecodeSearchItemsResponseResponse },
			{ "decodeSetItemModerationStateResponseResponse", &UPlayFabEconomyModelDecoder::execdecodeSetItemModerationStateResponseResponse },
			{ "decodeSubmitItemReviewVoteResponseResponse", &UPlayFabEconomyModelDecoder::execdecodeSubmitItemReviewVoteResponseResponse },
			{ "decodeSubtractInventoryItemsResponseResponse", &UPlayFabEconomyModelDecoder::execdecodeSubtractInventoryItemsResponseResponse },
			{ "decodeTakedownItemReviewsResponseResponse", &UPlayFabEconomyModelDecoder::execdecodeTakedownItemReviewsResponseResponse },
			{ "decodeTransferInventoryItemsResponseResponse", &UPlayFabEconomyModelDecoder::execdecodeTransferInventoryItemsResponseResponse },
			{ "decodeUpdateCatalogConfigResponseResponse", &UPlayFabEconomyModelDecoder::execdecodeUpdateCatalogConfigResponseResponse },
			{ "decodeUpdateDraftItemResponseResponse", &UPlayFabEconomyModelDecoder::execdecodeUpdateDraftItemResponseResponse },
			{ "decodeUpdateInventoryItemsResponseResponse", &UPlayFabEconomyModelDecoder::execdecodeUpdateInventoryItemsResponseResponse },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeAddInventoryItemsResponseResponse_Statics
	{
		struct PlayFabEconomyModelDecoder_eventdecodeAddInventoryItemsResponseResponse_Parms
		{
			UPlayFabJsonObject* response;
			FEconomyAddInventoryItemsResponse ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_response;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeAddInventoryItemsResponseResponse_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabEconomyModelDecoder_eventdecodeAddInventoryItemsResponseResponse_Parms, response), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeAddInventoryItemsResponseResponse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabEconomyModelDecoder_eventdecodeAddInventoryItemsResponseResponse_Parms, ReturnValue), Z_Construct_UScriptStruct_FEconomyAddInventoryItemsResponse, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeAddInventoryItemsResponseResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeAddInventoryItemsResponseResponse_Statics::NewProp_response,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeAddInventoryItemsResponseResponse_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeAddInventoryItemsResponseResponse_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Economy | Inventory Models" },
		{ "Comment", "/** Decode the AddInventoryItemsResponse response object*/" },
		{ "ModuleRelativePath", "Classes/PlayFabEconomyModelDecoder.h" },
		{ "ToolTip", "Decode the AddInventoryItemsResponse response object" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeAddInventoryItemsResponseResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabEconomyModelDecoder, nullptr, "decodeAddInventoryItemsResponseResponse", nullptr, nullptr, sizeof(PlayFabEconomyModelDecoder_eventdecodeAddInventoryItemsResponseResponse_Parms), Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeAddInventoryItemsResponseResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeAddInventoryItemsResponseResponse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeAddInventoryItemsResponseResponse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeAddInventoryItemsResponseResponse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeAddInventoryItemsResponseResponse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeAddInventoryItemsResponseResponse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeCreateDraftItemResponseResponse_Statics
	{
		struct PlayFabEconomyModelDecoder_eventdecodeCreateDraftItemResponseResponse_Parms
		{
			UPlayFabJsonObject* response;
			FEconomyCreateDraftItemResponse ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_response;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeCreateDraftItemResponseResponse_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabEconomyModelDecoder_eventdecodeCreateDraftItemResponseResponse_Parms, response), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeCreateDraftItemResponseResponse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabEconomyModelDecoder_eventdecodeCreateDraftItemResponseResponse_Parms, ReturnValue), Z_Construct_UScriptStruct_FEconomyCreateDraftItemResponse, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeCreateDraftItemResponseResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeCreateDraftItemResponseResponse_Statics::NewProp_response,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeCreateDraftItemResponseResponse_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeCreateDraftItemResponseResponse_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Economy | Catalog Models" },
		{ "Comment", "/** Decode the CreateDraftItemResponse response object*/" },
		{ "ModuleRelativePath", "Classes/PlayFabEconomyModelDecoder.h" },
		{ "ToolTip", "Decode the CreateDraftItemResponse response object" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeCreateDraftItemResponseResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabEconomyModelDecoder, nullptr, "decodeCreateDraftItemResponseResponse", nullptr, nullptr, sizeof(PlayFabEconomyModelDecoder_eventdecodeCreateDraftItemResponseResponse_Parms), Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeCreateDraftItemResponseResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeCreateDraftItemResponseResponse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeCreateDraftItemResponseResponse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeCreateDraftItemResponseResponse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeCreateDraftItemResponseResponse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeCreateDraftItemResponseResponse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeCreateUploadUrlsResponseResponse_Statics
	{
		struct PlayFabEconomyModelDecoder_eventdecodeCreateUploadUrlsResponseResponse_Parms
		{
			UPlayFabJsonObject* response;
			FEconomyCreateUploadUrlsResponse ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_response;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeCreateUploadUrlsResponseResponse_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabEconomyModelDecoder_eventdecodeCreateUploadUrlsResponseResponse_Parms, response), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeCreateUploadUrlsResponseResponse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabEconomyModelDecoder_eventdecodeCreateUploadUrlsResponseResponse_Parms, ReturnValue), Z_Construct_UScriptStruct_FEconomyCreateUploadUrlsResponse, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeCreateUploadUrlsResponseResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeCreateUploadUrlsResponseResponse_Statics::NewProp_response,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeCreateUploadUrlsResponseResponse_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeCreateUploadUrlsResponseResponse_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Economy | Catalog Models" },
		{ "Comment", "/** Decode the CreateUploadUrlsResponse response object*/" },
		{ "ModuleRelativePath", "Classes/PlayFabEconomyModelDecoder.h" },
		{ "ToolTip", "Decode the CreateUploadUrlsResponse response object" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeCreateUploadUrlsResponseResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabEconomyModelDecoder, nullptr, "decodeCreateUploadUrlsResponseResponse", nullptr, nullptr, sizeof(PlayFabEconomyModelDecoder_eventdecodeCreateUploadUrlsResponseResponse_Parms), Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeCreateUploadUrlsResponseResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeCreateUploadUrlsResponseResponse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeCreateUploadUrlsResponseResponse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeCreateUploadUrlsResponseResponse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeCreateUploadUrlsResponseResponse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeCreateUploadUrlsResponseResponse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeDeleteEntityItemReviewsResponseResponse_Statics
	{
		struct PlayFabEconomyModelDecoder_eventdecodeDeleteEntityItemReviewsResponseResponse_Parms
		{
			UPlayFabJsonObject* response;
			FEconomyDeleteEntityItemReviewsResponse ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_response;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeDeleteEntityItemReviewsResponseResponse_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabEconomyModelDecoder_eventdecodeDeleteEntityItemReviewsResponseResponse_Parms, response), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeDeleteEntityItemReviewsResponseResponse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabEconomyModelDecoder_eventdecodeDeleteEntityItemReviewsResponseResponse_Parms, ReturnValue), Z_Construct_UScriptStruct_FEconomyDeleteEntityItemReviewsResponse, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeDeleteEntityItemReviewsResponseResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeDeleteEntityItemReviewsResponseResponse_Statics::NewProp_response,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeDeleteEntityItemReviewsResponseResponse_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeDeleteEntityItemReviewsResponseResponse_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Economy | Catalog Models" },
		{ "Comment", "/** Decode the DeleteEntityItemReviewsResponse response object*/" },
		{ "ModuleRelativePath", "Classes/PlayFabEconomyModelDecoder.h" },
		{ "ToolTip", "Decode the DeleteEntityItemReviewsResponse response object" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeDeleteEntityItemReviewsResponseResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabEconomyModelDecoder, nullptr, "decodeDeleteEntityItemReviewsResponseResponse", nullptr, nullptr, sizeof(PlayFabEconomyModelDecoder_eventdecodeDeleteEntityItemReviewsResponseResponse_Parms), Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeDeleteEntityItemReviewsResponseResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeDeleteEntityItemReviewsResponseResponse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeDeleteEntityItemReviewsResponseResponse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeDeleteEntityItemReviewsResponseResponse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeDeleteEntityItemReviewsResponseResponse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeDeleteEntityItemReviewsResponseResponse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeDeleteInventoryCollectionResponseResponse_Statics
	{
		struct PlayFabEconomyModelDecoder_eventdecodeDeleteInventoryCollectionResponseResponse_Parms
		{
			UPlayFabJsonObject* response;
			FEconomyDeleteInventoryCollectionResponse ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_response;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeDeleteInventoryCollectionResponseResponse_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabEconomyModelDecoder_eventdecodeDeleteInventoryCollectionResponseResponse_Parms, response), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeDeleteInventoryCollectionResponseResponse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabEconomyModelDecoder_eventdecodeDeleteInventoryCollectionResponseResponse_Parms, ReturnValue), Z_Construct_UScriptStruct_FEconomyDeleteInventoryCollectionResponse, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeDeleteInventoryCollectionResponseResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeDeleteInventoryCollectionResponseResponse_Statics::NewProp_response,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeDeleteInventoryCollectionResponseResponse_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeDeleteInventoryCollectionResponseResponse_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Economy | Inventory Models" },
		{ "Comment", "/** Decode the DeleteInventoryCollectionResponse response object*/" },
		{ "ModuleRelativePath", "Classes/PlayFabEconomyModelDecoder.h" },
		{ "ToolTip", "Decode the DeleteInventoryCollectionResponse response object" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeDeleteInventoryCollectionResponseResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabEconomyModelDecoder, nullptr, "decodeDeleteInventoryCollectionResponseResponse", nullptr, nullptr, sizeof(PlayFabEconomyModelDecoder_eventdecodeDeleteInventoryCollectionResponseResponse_Parms), Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeDeleteInventoryCollectionResponseResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeDeleteInventoryCollectionResponseResponse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeDeleteInventoryCollectionResponseResponse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeDeleteInventoryCollectionResponseResponse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeDeleteInventoryCollectionResponseResponse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeDeleteInventoryCollectionResponseResponse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeDeleteInventoryItemsResponseResponse_Statics
	{
		struct PlayFabEconomyModelDecoder_eventdecodeDeleteInventoryItemsResponseResponse_Parms
		{
			UPlayFabJsonObject* response;
			FEconomyDeleteInventoryItemsResponse ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_response;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeDeleteInventoryItemsResponseResponse_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabEconomyModelDecoder_eventdecodeDeleteInventoryItemsResponseResponse_Parms, response), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeDeleteInventoryItemsResponseResponse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabEconomyModelDecoder_eventdecodeDeleteInventoryItemsResponseResponse_Parms, ReturnValue), Z_Construct_UScriptStruct_FEconomyDeleteInventoryItemsResponse, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeDeleteInventoryItemsResponseResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeDeleteInventoryItemsResponseResponse_Statics::NewProp_response,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeDeleteInventoryItemsResponseResponse_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeDeleteInventoryItemsResponseResponse_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Economy | Inventory Models" },
		{ "Comment", "/** Decode the DeleteInventoryItemsResponse response object*/" },
		{ "ModuleRelativePath", "Classes/PlayFabEconomyModelDecoder.h" },
		{ "ToolTip", "Decode the DeleteInventoryItemsResponse response object" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeDeleteInventoryItemsResponseResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabEconomyModelDecoder, nullptr, "decodeDeleteInventoryItemsResponseResponse", nullptr, nullptr, sizeof(PlayFabEconomyModelDecoder_eventdecodeDeleteInventoryItemsResponseResponse_Parms), Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeDeleteInventoryItemsResponseResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeDeleteInventoryItemsResponseResponse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeDeleteInventoryItemsResponseResponse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeDeleteInventoryItemsResponseResponse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeDeleteInventoryItemsResponseResponse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeDeleteInventoryItemsResponseResponse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeDeleteItemResponseResponse_Statics
	{
		struct PlayFabEconomyModelDecoder_eventdecodeDeleteItemResponseResponse_Parms
		{
			UPlayFabJsonObject* response;
			FEconomyDeleteItemResponse ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_response;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeDeleteItemResponseResponse_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabEconomyModelDecoder_eventdecodeDeleteItemResponseResponse_Parms, response), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeDeleteItemResponseResponse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabEconomyModelDecoder_eventdecodeDeleteItemResponseResponse_Parms, ReturnValue), Z_Construct_UScriptStruct_FEconomyDeleteItemResponse, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeDeleteItemResponseResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeDeleteItemResponseResponse_Statics::NewProp_response,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeDeleteItemResponseResponse_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeDeleteItemResponseResponse_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Economy | Catalog Models" },
		{ "Comment", "/** Decode the DeleteItemResponse response object*/" },
		{ "ModuleRelativePath", "Classes/PlayFabEconomyModelDecoder.h" },
		{ "ToolTip", "Decode the DeleteItemResponse response object" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeDeleteItemResponseResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabEconomyModelDecoder, nullptr, "decodeDeleteItemResponseResponse", nullptr, nullptr, sizeof(PlayFabEconomyModelDecoder_eventdecodeDeleteItemResponseResponse_Parms), Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeDeleteItemResponseResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeDeleteItemResponseResponse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeDeleteItemResponseResponse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeDeleteItemResponseResponse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeDeleteItemResponseResponse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeDeleteItemResponseResponse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeExecuteInventoryOperationsResponseResponse_Statics
	{
		struct PlayFabEconomyModelDecoder_eventdecodeExecuteInventoryOperationsResponseResponse_Parms
		{
			UPlayFabJsonObject* response;
			FEconomyExecuteInventoryOperationsResponse ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_response;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeExecuteInventoryOperationsResponseResponse_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabEconomyModelDecoder_eventdecodeExecuteInventoryOperationsResponseResponse_Parms, response), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeExecuteInventoryOperationsResponseResponse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabEconomyModelDecoder_eventdecodeExecuteInventoryOperationsResponseResponse_Parms, ReturnValue), Z_Construct_UScriptStruct_FEconomyExecuteInventoryOperationsResponse, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeExecuteInventoryOperationsResponseResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeExecuteInventoryOperationsResponseResponse_Statics::NewProp_response,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeExecuteInventoryOperationsResponseResponse_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeExecuteInventoryOperationsResponseResponse_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Economy | Inventory Models" },
		{ "Comment", "/** Decode the ExecuteInventoryOperationsResponse response object*/" },
		{ "ModuleRelativePath", "Classes/PlayFabEconomyModelDecoder.h" },
		{ "ToolTip", "Decode the ExecuteInventoryOperationsResponse response object" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeExecuteInventoryOperationsResponseResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabEconomyModelDecoder, nullptr, "decodeExecuteInventoryOperationsResponseResponse", nullptr, nullptr, sizeof(PlayFabEconomyModelDecoder_eventdecodeExecuteInventoryOperationsResponseResponse_Parms), Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeExecuteInventoryOperationsResponseResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeExecuteInventoryOperationsResponseResponse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeExecuteInventoryOperationsResponseResponse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeExecuteInventoryOperationsResponseResponse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeExecuteInventoryOperationsResponseResponse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeExecuteInventoryOperationsResponseResponse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetCatalogConfigResponseResponse_Statics
	{
		struct PlayFabEconomyModelDecoder_eventdecodeGetCatalogConfigResponseResponse_Parms
		{
			UPlayFabJsonObject* response;
			FEconomyGetCatalogConfigResponse ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_response;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetCatalogConfigResponseResponse_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabEconomyModelDecoder_eventdecodeGetCatalogConfigResponseResponse_Parms, response), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetCatalogConfigResponseResponse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabEconomyModelDecoder_eventdecodeGetCatalogConfigResponseResponse_Parms, ReturnValue), Z_Construct_UScriptStruct_FEconomyGetCatalogConfigResponse, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetCatalogConfigResponseResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetCatalogConfigResponseResponse_Statics::NewProp_response,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetCatalogConfigResponseResponse_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetCatalogConfigResponseResponse_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Economy | Catalog Models" },
		{ "Comment", "/** Decode the GetCatalogConfigResponse response object*/" },
		{ "ModuleRelativePath", "Classes/PlayFabEconomyModelDecoder.h" },
		{ "ToolTip", "Decode the GetCatalogConfigResponse response object" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetCatalogConfigResponseResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabEconomyModelDecoder, nullptr, "decodeGetCatalogConfigResponseResponse", nullptr, nullptr, sizeof(PlayFabEconomyModelDecoder_eventdecodeGetCatalogConfigResponseResponse_Parms), Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetCatalogConfigResponseResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetCatalogConfigResponseResponse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetCatalogConfigResponseResponse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetCatalogConfigResponseResponse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetCatalogConfigResponseResponse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetCatalogConfigResponseResponse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetDraftItemResponseResponse_Statics
	{
		struct PlayFabEconomyModelDecoder_eventdecodeGetDraftItemResponseResponse_Parms
		{
			UPlayFabJsonObject* response;
			FEconomyGetDraftItemResponse ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_response;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetDraftItemResponseResponse_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabEconomyModelDecoder_eventdecodeGetDraftItemResponseResponse_Parms, response), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetDraftItemResponseResponse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabEconomyModelDecoder_eventdecodeGetDraftItemResponseResponse_Parms, ReturnValue), Z_Construct_UScriptStruct_FEconomyGetDraftItemResponse, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetDraftItemResponseResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetDraftItemResponseResponse_Statics::NewProp_response,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetDraftItemResponseResponse_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetDraftItemResponseResponse_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Economy | Catalog Models" },
		{ "Comment", "/** Decode the GetDraftItemResponse response object*/" },
		{ "ModuleRelativePath", "Classes/PlayFabEconomyModelDecoder.h" },
		{ "ToolTip", "Decode the GetDraftItemResponse response object" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetDraftItemResponseResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabEconomyModelDecoder, nullptr, "decodeGetDraftItemResponseResponse", nullptr, nullptr, sizeof(PlayFabEconomyModelDecoder_eventdecodeGetDraftItemResponseResponse_Parms), Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetDraftItemResponseResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetDraftItemResponseResponse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetDraftItemResponseResponse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetDraftItemResponseResponse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetDraftItemResponseResponse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetDraftItemResponseResponse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetDraftItemsResponseResponse_Statics
	{
		struct PlayFabEconomyModelDecoder_eventdecodeGetDraftItemsResponseResponse_Parms
		{
			UPlayFabJsonObject* response;
			FEconomyGetDraftItemsResponse ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_response;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetDraftItemsResponseResponse_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabEconomyModelDecoder_eventdecodeGetDraftItemsResponseResponse_Parms, response), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetDraftItemsResponseResponse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabEconomyModelDecoder_eventdecodeGetDraftItemsResponseResponse_Parms, ReturnValue), Z_Construct_UScriptStruct_FEconomyGetDraftItemsResponse, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetDraftItemsResponseResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetDraftItemsResponseResponse_Statics::NewProp_response,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetDraftItemsResponseResponse_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetDraftItemsResponseResponse_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Economy | Catalog Models" },
		{ "Comment", "/** Decode the GetDraftItemsResponse response object*/" },
		{ "ModuleRelativePath", "Classes/PlayFabEconomyModelDecoder.h" },
		{ "ToolTip", "Decode the GetDraftItemsResponse response object" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetDraftItemsResponseResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabEconomyModelDecoder, nullptr, "decodeGetDraftItemsResponseResponse", nullptr, nullptr, sizeof(PlayFabEconomyModelDecoder_eventdecodeGetDraftItemsResponseResponse_Parms), Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetDraftItemsResponseResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetDraftItemsResponseResponse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetDraftItemsResponseResponse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetDraftItemsResponseResponse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetDraftItemsResponseResponse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetDraftItemsResponseResponse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetEntityDraftItemsResponseResponse_Statics
	{
		struct PlayFabEconomyModelDecoder_eventdecodeGetEntityDraftItemsResponseResponse_Parms
		{
			UPlayFabJsonObject* response;
			FEconomyGetEntityDraftItemsResponse ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_response;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetEntityDraftItemsResponseResponse_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabEconomyModelDecoder_eventdecodeGetEntityDraftItemsResponseResponse_Parms, response), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetEntityDraftItemsResponseResponse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabEconomyModelDecoder_eventdecodeGetEntityDraftItemsResponseResponse_Parms, ReturnValue), Z_Construct_UScriptStruct_FEconomyGetEntityDraftItemsResponse, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetEntityDraftItemsResponseResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetEntityDraftItemsResponseResponse_Statics::NewProp_response,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetEntityDraftItemsResponseResponse_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetEntityDraftItemsResponseResponse_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Economy | Catalog Models" },
		{ "Comment", "/** Decode the GetEntityDraftItemsResponse response object*/" },
		{ "ModuleRelativePath", "Classes/PlayFabEconomyModelDecoder.h" },
		{ "ToolTip", "Decode the GetEntityDraftItemsResponse response object" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetEntityDraftItemsResponseResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabEconomyModelDecoder, nullptr, "decodeGetEntityDraftItemsResponseResponse", nullptr, nullptr, sizeof(PlayFabEconomyModelDecoder_eventdecodeGetEntityDraftItemsResponseResponse_Parms), Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetEntityDraftItemsResponseResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetEntityDraftItemsResponseResponse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetEntityDraftItemsResponseResponse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetEntityDraftItemsResponseResponse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetEntityDraftItemsResponseResponse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetEntityDraftItemsResponseResponse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetEntityItemReviewResponseResponse_Statics
	{
		struct PlayFabEconomyModelDecoder_eventdecodeGetEntityItemReviewResponseResponse_Parms
		{
			UPlayFabJsonObject* response;
			FEconomyGetEntityItemReviewResponse ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_response;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetEntityItemReviewResponseResponse_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabEconomyModelDecoder_eventdecodeGetEntityItemReviewResponseResponse_Parms, response), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetEntityItemReviewResponseResponse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabEconomyModelDecoder_eventdecodeGetEntityItemReviewResponseResponse_Parms, ReturnValue), Z_Construct_UScriptStruct_FEconomyGetEntityItemReviewResponse, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetEntityItemReviewResponseResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetEntityItemReviewResponseResponse_Statics::NewProp_response,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetEntityItemReviewResponseResponse_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetEntityItemReviewResponseResponse_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Economy | Catalog Models" },
		{ "Comment", "/** Decode the GetEntityItemReviewResponse response object*/" },
		{ "ModuleRelativePath", "Classes/PlayFabEconomyModelDecoder.h" },
		{ "ToolTip", "Decode the GetEntityItemReviewResponse response object" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetEntityItemReviewResponseResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabEconomyModelDecoder, nullptr, "decodeGetEntityItemReviewResponseResponse", nullptr, nullptr, sizeof(PlayFabEconomyModelDecoder_eventdecodeGetEntityItemReviewResponseResponse_Parms), Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetEntityItemReviewResponseResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetEntityItemReviewResponseResponse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetEntityItemReviewResponseResponse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetEntityItemReviewResponseResponse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetEntityItemReviewResponseResponse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetEntityItemReviewResponseResponse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetInventoryCollectionIdsResponseResponse_Statics
	{
		struct PlayFabEconomyModelDecoder_eventdecodeGetInventoryCollectionIdsResponseResponse_Parms
		{
			UPlayFabJsonObject* response;
			FEconomyGetInventoryCollectionIdsResponse ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_response;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetInventoryCollectionIdsResponseResponse_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabEconomyModelDecoder_eventdecodeGetInventoryCollectionIdsResponseResponse_Parms, response), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetInventoryCollectionIdsResponseResponse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabEconomyModelDecoder_eventdecodeGetInventoryCollectionIdsResponseResponse_Parms, ReturnValue), Z_Construct_UScriptStruct_FEconomyGetInventoryCollectionIdsResponse, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetInventoryCollectionIdsResponseResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetInventoryCollectionIdsResponseResponse_Statics::NewProp_response,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetInventoryCollectionIdsResponseResponse_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetInventoryCollectionIdsResponseResponse_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Economy | Inventory Models" },
		{ "Comment", "/** Decode the GetInventoryCollectionIdsResponse response object*/" },
		{ "ModuleRelativePath", "Classes/PlayFabEconomyModelDecoder.h" },
		{ "ToolTip", "Decode the GetInventoryCollectionIdsResponse response object" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetInventoryCollectionIdsResponseResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabEconomyModelDecoder, nullptr, "decodeGetInventoryCollectionIdsResponseResponse", nullptr, nullptr, sizeof(PlayFabEconomyModelDecoder_eventdecodeGetInventoryCollectionIdsResponseResponse_Parms), Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetInventoryCollectionIdsResponseResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetInventoryCollectionIdsResponseResponse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetInventoryCollectionIdsResponseResponse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetInventoryCollectionIdsResponseResponse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetInventoryCollectionIdsResponseResponse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetInventoryCollectionIdsResponseResponse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetInventoryItemsResponseResponse_Statics
	{
		struct PlayFabEconomyModelDecoder_eventdecodeGetInventoryItemsResponseResponse_Parms
		{
			UPlayFabJsonObject* response;
			FEconomyGetInventoryItemsResponse ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_response;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetInventoryItemsResponseResponse_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabEconomyModelDecoder_eventdecodeGetInventoryItemsResponseResponse_Parms, response), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetInventoryItemsResponseResponse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabEconomyModelDecoder_eventdecodeGetInventoryItemsResponseResponse_Parms, ReturnValue), Z_Construct_UScriptStruct_FEconomyGetInventoryItemsResponse, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetInventoryItemsResponseResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetInventoryItemsResponseResponse_Statics::NewProp_response,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetInventoryItemsResponseResponse_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetInventoryItemsResponseResponse_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Economy | Inventory Models" },
		{ "Comment", "/** Decode the GetInventoryItemsResponse response object*/" },
		{ "ModuleRelativePath", "Classes/PlayFabEconomyModelDecoder.h" },
		{ "ToolTip", "Decode the GetInventoryItemsResponse response object" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetInventoryItemsResponseResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabEconomyModelDecoder, nullptr, "decodeGetInventoryItemsResponseResponse", nullptr, nullptr, sizeof(PlayFabEconomyModelDecoder_eventdecodeGetInventoryItemsResponseResponse_Parms), Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetInventoryItemsResponseResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetInventoryItemsResponseResponse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetInventoryItemsResponseResponse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetInventoryItemsResponseResponse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetInventoryItemsResponseResponse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetInventoryItemsResponseResponse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetItemContainersResponseResponse_Statics
	{
		struct PlayFabEconomyModelDecoder_eventdecodeGetItemContainersResponseResponse_Parms
		{
			UPlayFabJsonObject* response;
			FEconomyGetItemContainersResponse ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_response;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetItemContainersResponseResponse_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabEconomyModelDecoder_eventdecodeGetItemContainersResponseResponse_Parms, response), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetItemContainersResponseResponse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabEconomyModelDecoder_eventdecodeGetItemContainersResponseResponse_Parms, ReturnValue), Z_Construct_UScriptStruct_FEconomyGetItemContainersResponse, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetItemContainersResponseResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetItemContainersResponseResponse_Statics::NewProp_response,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetItemContainersResponseResponse_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetItemContainersResponseResponse_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Economy | Catalog Models" },
		{ "Comment", "/** Decode the GetItemContainersResponse response object*/" },
		{ "ModuleRelativePath", "Classes/PlayFabEconomyModelDecoder.h" },
		{ "ToolTip", "Decode the GetItemContainersResponse response object" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetItemContainersResponseResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabEconomyModelDecoder, nullptr, "decodeGetItemContainersResponseResponse", nullptr, nullptr, sizeof(PlayFabEconomyModelDecoder_eventdecodeGetItemContainersResponseResponse_Parms), Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetItemContainersResponseResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetItemContainersResponseResponse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetItemContainersResponseResponse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetItemContainersResponseResponse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetItemContainersResponseResponse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetItemContainersResponseResponse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetItemModerationStateResponseResponse_Statics
	{
		struct PlayFabEconomyModelDecoder_eventdecodeGetItemModerationStateResponseResponse_Parms
		{
			UPlayFabJsonObject* response;
			FEconomyGetItemModerationStateResponse ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_response;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetItemModerationStateResponseResponse_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabEconomyModelDecoder_eventdecodeGetItemModerationStateResponseResponse_Parms, response), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetItemModerationStateResponseResponse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabEconomyModelDecoder_eventdecodeGetItemModerationStateResponseResponse_Parms, ReturnValue), Z_Construct_UScriptStruct_FEconomyGetItemModerationStateResponse, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetItemModerationStateResponseResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetItemModerationStateResponseResponse_Statics::NewProp_response,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetItemModerationStateResponseResponse_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetItemModerationStateResponseResponse_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Economy | Catalog Models" },
		{ "Comment", "/** Decode the GetItemModerationStateResponse response object*/" },
		{ "ModuleRelativePath", "Classes/PlayFabEconomyModelDecoder.h" },
		{ "ToolTip", "Decode the GetItemModerationStateResponse response object" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetItemModerationStateResponseResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabEconomyModelDecoder, nullptr, "decodeGetItemModerationStateResponseResponse", nullptr, nullptr, sizeof(PlayFabEconomyModelDecoder_eventdecodeGetItemModerationStateResponseResponse_Parms), Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetItemModerationStateResponseResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetItemModerationStateResponseResponse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetItemModerationStateResponseResponse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetItemModerationStateResponseResponse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetItemModerationStateResponseResponse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetItemModerationStateResponseResponse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetItemPublishStatusResponseResponse_Statics
	{
		struct PlayFabEconomyModelDecoder_eventdecodeGetItemPublishStatusResponseResponse_Parms
		{
			UPlayFabJsonObject* response;
			FEconomyGetItemPublishStatusResponse ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_response;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetItemPublishStatusResponseResponse_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabEconomyModelDecoder_eventdecodeGetItemPublishStatusResponseResponse_Parms, response), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetItemPublishStatusResponseResponse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabEconomyModelDecoder_eventdecodeGetItemPublishStatusResponseResponse_Parms, ReturnValue), Z_Construct_UScriptStruct_FEconomyGetItemPublishStatusResponse, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetItemPublishStatusResponseResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetItemPublishStatusResponseResponse_Statics::NewProp_response,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetItemPublishStatusResponseResponse_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetItemPublishStatusResponseResponse_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Economy | Catalog Models" },
		{ "Comment", "/** Decode the GetItemPublishStatusResponse response object*/" },
		{ "ModuleRelativePath", "Classes/PlayFabEconomyModelDecoder.h" },
		{ "ToolTip", "Decode the GetItemPublishStatusResponse response object" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetItemPublishStatusResponseResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabEconomyModelDecoder, nullptr, "decodeGetItemPublishStatusResponseResponse", nullptr, nullptr, sizeof(PlayFabEconomyModelDecoder_eventdecodeGetItemPublishStatusResponseResponse_Parms), Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetItemPublishStatusResponseResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetItemPublishStatusResponseResponse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetItemPublishStatusResponseResponse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetItemPublishStatusResponseResponse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetItemPublishStatusResponseResponse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetItemPublishStatusResponseResponse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetItemResponseResponse_Statics
	{
		struct PlayFabEconomyModelDecoder_eventdecodeGetItemResponseResponse_Parms
		{
			UPlayFabJsonObject* response;
			FEconomyGetItemResponse ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_response;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetItemResponseResponse_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabEconomyModelDecoder_eventdecodeGetItemResponseResponse_Parms, response), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetItemResponseResponse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabEconomyModelDecoder_eventdecodeGetItemResponseResponse_Parms, ReturnValue), Z_Construct_UScriptStruct_FEconomyGetItemResponse, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetItemResponseResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetItemResponseResponse_Statics::NewProp_response,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetItemResponseResponse_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetItemResponseResponse_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Economy | Catalog Models" },
		{ "Comment", "/** Decode the GetItemResponse response object*/" },
		{ "ModuleRelativePath", "Classes/PlayFabEconomyModelDecoder.h" },
		{ "ToolTip", "Decode the GetItemResponse response object" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetItemResponseResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabEconomyModelDecoder, nullptr, "decodeGetItemResponseResponse", nullptr, nullptr, sizeof(PlayFabEconomyModelDecoder_eventdecodeGetItemResponseResponse_Parms), Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetItemResponseResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetItemResponseResponse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetItemResponseResponse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetItemResponseResponse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetItemResponseResponse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetItemResponseResponse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetItemReviewsResponseResponse_Statics
	{
		struct PlayFabEconomyModelDecoder_eventdecodeGetItemReviewsResponseResponse_Parms
		{
			UPlayFabJsonObject* response;
			FEconomyGetItemReviewsResponse ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_response;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetItemReviewsResponseResponse_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabEconomyModelDecoder_eventdecodeGetItemReviewsResponseResponse_Parms, response), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetItemReviewsResponseResponse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabEconomyModelDecoder_eventdecodeGetItemReviewsResponseResponse_Parms, ReturnValue), Z_Construct_UScriptStruct_FEconomyGetItemReviewsResponse, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetItemReviewsResponseResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetItemReviewsResponseResponse_Statics::NewProp_response,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetItemReviewsResponseResponse_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetItemReviewsResponseResponse_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Economy | Catalog Models" },
		{ "Comment", "/** Decode the GetItemReviewsResponse response object*/" },
		{ "ModuleRelativePath", "Classes/PlayFabEconomyModelDecoder.h" },
		{ "ToolTip", "Decode the GetItemReviewsResponse response object" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetItemReviewsResponseResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabEconomyModelDecoder, nullptr, "decodeGetItemReviewsResponseResponse", nullptr, nullptr, sizeof(PlayFabEconomyModelDecoder_eventdecodeGetItemReviewsResponseResponse_Parms), Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetItemReviewsResponseResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetItemReviewsResponseResponse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetItemReviewsResponseResponse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetItemReviewsResponseResponse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetItemReviewsResponseResponse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetItemReviewsResponseResponse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetItemReviewSummaryResponseResponse_Statics
	{
		struct PlayFabEconomyModelDecoder_eventdecodeGetItemReviewSummaryResponseResponse_Parms
		{
			UPlayFabJsonObject* response;
			FEconomyGetItemReviewSummaryResponse ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_response;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetItemReviewSummaryResponseResponse_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabEconomyModelDecoder_eventdecodeGetItemReviewSummaryResponseResponse_Parms, response), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetItemReviewSummaryResponseResponse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabEconomyModelDecoder_eventdecodeGetItemReviewSummaryResponseResponse_Parms, ReturnValue), Z_Construct_UScriptStruct_FEconomyGetItemReviewSummaryResponse, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetItemReviewSummaryResponseResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetItemReviewSummaryResponseResponse_Statics::NewProp_response,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetItemReviewSummaryResponseResponse_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetItemReviewSummaryResponseResponse_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Economy | Catalog Models" },
		{ "Comment", "/** Decode the GetItemReviewSummaryResponse response object*/" },
		{ "ModuleRelativePath", "Classes/PlayFabEconomyModelDecoder.h" },
		{ "ToolTip", "Decode the GetItemReviewSummaryResponse response object" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetItemReviewSummaryResponseResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabEconomyModelDecoder, nullptr, "decodeGetItemReviewSummaryResponseResponse", nullptr, nullptr, sizeof(PlayFabEconomyModelDecoder_eventdecodeGetItemReviewSummaryResponseResponse_Parms), Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetItemReviewSummaryResponseResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetItemReviewSummaryResponseResponse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetItemReviewSummaryResponseResponse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetItemReviewSummaryResponseResponse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetItemReviewSummaryResponseResponse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetItemReviewSummaryResponseResponse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetItemsResponseResponse_Statics
	{
		struct PlayFabEconomyModelDecoder_eventdecodeGetItemsResponseResponse_Parms
		{
			UPlayFabJsonObject* response;
			FEconomyGetItemsResponse ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_response;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetItemsResponseResponse_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabEconomyModelDecoder_eventdecodeGetItemsResponseResponse_Parms, response), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetItemsResponseResponse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabEconomyModelDecoder_eventdecodeGetItemsResponseResponse_Parms, ReturnValue), Z_Construct_UScriptStruct_FEconomyGetItemsResponse, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetItemsResponseResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetItemsResponseResponse_Statics::NewProp_response,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetItemsResponseResponse_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetItemsResponseResponse_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Economy | Catalog Models" },
		{ "Comment", "/** Decode the GetItemsResponse response object*/" },
		{ "ModuleRelativePath", "Classes/PlayFabEconomyModelDecoder.h" },
		{ "ToolTip", "Decode the GetItemsResponse response object" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetItemsResponseResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabEconomyModelDecoder, nullptr, "decodeGetItemsResponseResponse", nullptr, nullptr, sizeof(PlayFabEconomyModelDecoder_eventdecodeGetItemsResponseResponse_Parms), Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetItemsResponseResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetItemsResponseResponse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetItemsResponseResponse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetItemsResponseResponse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetItemsResponseResponse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetItemsResponseResponse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetMicrosoftStoreAccessTokensResponseResponse_Statics
	{
		struct PlayFabEconomyModelDecoder_eventdecodeGetMicrosoftStoreAccessTokensResponseResponse_Parms
		{
			UPlayFabJsonObject* response;
			FEconomyGetMicrosoftStoreAccessTokensResponse ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_response;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetMicrosoftStoreAccessTokensResponseResponse_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabEconomyModelDecoder_eventdecodeGetMicrosoftStoreAccessTokensResponseResponse_Parms, response), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetMicrosoftStoreAccessTokensResponseResponse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabEconomyModelDecoder_eventdecodeGetMicrosoftStoreAccessTokensResponseResponse_Parms, ReturnValue), Z_Construct_UScriptStruct_FEconomyGetMicrosoftStoreAccessTokensResponse, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetMicrosoftStoreAccessTokensResponseResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetMicrosoftStoreAccessTokensResponseResponse_Statics::NewProp_response,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetMicrosoftStoreAccessTokensResponseResponse_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetMicrosoftStoreAccessTokensResponseResponse_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Economy | Inventory Models" },
		{ "Comment", "/** Decode the GetMicrosoftStoreAccessTokensResponse response object*/" },
		{ "ModuleRelativePath", "Classes/PlayFabEconomyModelDecoder.h" },
		{ "ToolTip", "Decode the GetMicrosoftStoreAccessTokensResponse response object" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetMicrosoftStoreAccessTokensResponseResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabEconomyModelDecoder, nullptr, "decodeGetMicrosoftStoreAccessTokensResponseResponse", nullptr, nullptr, sizeof(PlayFabEconomyModelDecoder_eventdecodeGetMicrosoftStoreAccessTokensResponseResponse_Parms), Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetMicrosoftStoreAccessTokensResponseResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetMicrosoftStoreAccessTokensResponseResponse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetMicrosoftStoreAccessTokensResponseResponse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetMicrosoftStoreAccessTokensResponseResponse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetMicrosoftStoreAccessTokensResponseResponse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetMicrosoftStoreAccessTokensResponseResponse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetTransactionHistoryResponseResponse_Statics
	{
		struct PlayFabEconomyModelDecoder_eventdecodeGetTransactionHistoryResponseResponse_Parms
		{
			UPlayFabJsonObject* response;
			FEconomyGetTransactionHistoryResponse ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_response;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetTransactionHistoryResponseResponse_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabEconomyModelDecoder_eventdecodeGetTransactionHistoryResponseResponse_Parms, response), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetTransactionHistoryResponseResponse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabEconomyModelDecoder_eventdecodeGetTransactionHistoryResponseResponse_Parms, ReturnValue), Z_Construct_UScriptStruct_FEconomyGetTransactionHistoryResponse, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetTransactionHistoryResponseResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetTransactionHistoryResponseResponse_Statics::NewProp_response,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetTransactionHistoryResponseResponse_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetTransactionHistoryResponseResponse_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Economy | Inventory Models" },
		{ "Comment", "/** Decode the GetTransactionHistoryResponse response object*/" },
		{ "ModuleRelativePath", "Classes/PlayFabEconomyModelDecoder.h" },
		{ "ToolTip", "Decode the GetTransactionHistoryResponse response object" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetTransactionHistoryResponseResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabEconomyModelDecoder, nullptr, "decodeGetTransactionHistoryResponseResponse", nullptr, nullptr, sizeof(PlayFabEconomyModelDecoder_eventdecodeGetTransactionHistoryResponseResponse_Parms), Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetTransactionHistoryResponseResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetTransactionHistoryResponseResponse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetTransactionHistoryResponseResponse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetTransactionHistoryResponseResponse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetTransactionHistoryResponseResponse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetTransactionHistoryResponseResponse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodePublishDraftItemResponseResponse_Statics
	{
		struct PlayFabEconomyModelDecoder_eventdecodePublishDraftItemResponseResponse_Parms
		{
			UPlayFabJsonObject* response;
			FEconomyPublishDraftItemResponse ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_response;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodePublishDraftItemResponseResponse_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabEconomyModelDecoder_eventdecodePublishDraftItemResponseResponse_Parms, response), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodePublishDraftItemResponseResponse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabEconomyModelDecoder_eventdecodePublishDraftItemResponseResponse_Parms, ReturnValue), Z_Construct_UScriptStruct_FEconomyPublishDraftItemResponse, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodePublishDraftItemResponseResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodePublishDraftItemResponseResponse_Statics::NewProp_response,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodePublishDraftItemResponseResponse_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodePublishDraftItemResponseResponse_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Economy | Catalog Models" },
		{ "Comment", "/** Decode the PublishDraftItemResponse response object*/" },
		{ "ModuleRelativePath", "Classes/PlayFabEconomyModelDecoder.h" },
		{ "ToolTip", "Decode the PublishDraftItemResponse response object" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodePublishDraftItemResponseResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabEconomyModelDecoder, nullptr, "decodePublishDraftItemResponseResponse", nullptr, nullptr, sizeof(PlayFabEconomyModelDecoder_eventdecodePublishDraftItemResponseResponse_Parms), Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodePublishDraftItemResponseResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodePublishDraftItemResponseResponse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodePublishDraftItemResponseResponse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodePublishDraftItemResponseResponse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodePublishDraftItemResponseResponse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodePublishDraftItemResponseResponse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodePurchaseInventoryItemsResponseResponse_Statics
	{
		struct PlayFabEconomyModelDecoder_eventdecodePurchaseInventoryItemsResponseResponse_Parms
		{
			UPlayFabJsonObject* response;
			FEconomyPurchaseInventoryItemsResponse ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_response;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodePurchaseInventoryItemsResponseResponse_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabEconomyModelDecoder_eventdecodePurchaseInventoryItemsResponseResponse_Parms, response), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodePurchaseInventoryItemsResponseResponse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabEconomyModelDecoder_eventdecodePurchaseInventoryItemsResponseResponse_Parms, ReturnValue), Z_Construct_UScriptStruct_FEconomyPurchaseInventoryItemsResponse, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodePurchaseInventoryItemsResponseResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodePurchaseInventoryItemsResponseResponse_Statics::NewProp_response,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodePurchaseInventoryItemsResponseResponse_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodePurchaseInventoryItemsResponseResponse_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Economy | Inventory Models" },
		{ "Comment", "/** Decode the PurchaseInventoryItemsResponse response object*/" },
		{ "ModuleRelativePath", "Classes/PlayFabEconomyModelDecoder.h" },
		{ "ToolTip", "Decode the PurchaseInventoryItemsResponse response object" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodePurchaseInventoryItemsResponseResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabEconomyModelDecoder, nullptr, "decodePurchaseInventoryItemsResponseResponse", nullptr, nullptr, sizeof(PlayFabEconomyModelDecoder_eventdecodePurchaseInventoryItemsResponseResponse_Parms), Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodePurchaseInventoryItemsResponseResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodePurchaseInventoryItemsResponseResponse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodePurchaseInventoryItemsResponseResponse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodePurchaseInventoryItemsResponseResponse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodePurchaseInventoryItemsResponseResponse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodePurchaseInventoryItemsResponseResponse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeRedeemAppleAppStoreInventoryItemsResponseResponse_Statics
	{
		struct PlayFabEconomyModelDecoder_eventdecodeRedeemAppleAppStoreInventoryItemsResponseResponse_Parms
		{
			UPlayFabJsonObject* response;
			FEconomyRedeemAppleAppStoreInventoryItemsResponse ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_response;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeRedeemAppleAppStoreInventoryItemsResponseResponse_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabEconomyModelDecoder_eventdecodeRedeemAppleAppStoreInventoryItemsResponseResponse_Parms, response), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeRedeemAppleAppStoreInventoryItemsResponseResponse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabEconomyModelDecoder_eventdecodeRedeemAppleAppStoreInventoryItemsResponseResponse_Parms, ReturnValue), Z_Construct_UScriptStruct_FEconomyRedeemAppleAppStoreInventoryItemsResponse, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeRedeemAppleAppStoreInventoryItemsResponseResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeRedeemAppleAppStoreInventoryItemsResponseResponse_Statics::NewProp_response,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeRedeemAppleAppStoreInventoryItemsResponseResponse_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeRedeemAppleAppStoreInventoryItemsResponseResponse_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Economy | Inventory Models" },
		{ "Comment", "/** Decode the RedeemAppleAppStoreInventoryItemsResponse response object*/" },
		{ "ModuleRelativePath", "Classes/PlayFabEconomyModelDecoder.h" },
		{ "ToolTip", "Decode the RedeemAppleAppStoreInventoryItemsResponse response object" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeRedeemAppleAppStoreInventoryItemsResponseResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabEconomyModelDecoder, nullptr, "decodeRedeemAppleAppStoreInventoryItemsResponseResponse", nullptr, nullptr, sizeof(PlayFabEconomyModelDecoder_eventdecodeRedeemAppleAppStoreInventoryItemsResponseResponse_Parms), Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeRedeemAppleAppStoreInventoryItemsResponseResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeRedeemAppleAppStoreInventoryItemsResponseResponse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeRedeemAppleAppStoreInventoryItemsResponseResponse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeRedeemAppleAppStoreInventoryItemsResponseResponse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeRedeemAppleAppStoreInventoryItemsResponseResponse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeRedeemAppleAppStoreInventoryItemsResponseResponse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeRedeemGooglePlayInventoryItemsResponseResponse_Statics
	{
		struct PlayFabEconomyModelDecoder_eventdecodeRedeemGooglePlayInventoryItemsResponseResponse_Parms
		{
			UPlayFabJsonObject* response;
			FEconomyRedeemGooglePlayInventoryItemsResponse ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_response;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeRedeemGooglePlayInventoryItemsResponseResponse_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabEconomyModelDecoder_eventdecodeRedeemGooglePlayInventoryItemsResponseResponse_Parms, response), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeRedeemGooglePlayInventoryItemsResponseResponse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabEconomyModelDecoder_eventdecodeRedeemGooglePlayInventoryItemsResponseResponse_Parms, ReturnValue), Z_Construct_UScriptStruct_FEconomyRedeemGooglePlayInventoryItemsResponse, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeRedeemGooglePlayInventoryItemsResponseResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeRedeemGooglePlayInventoryItemsResponseResponse_Statics::NewProp_response,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeRedeemGooglePlayInventoryItemsResponseResponse_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeRedeemGooglePlayInventoryItemsResponseResponse_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Economy | Inventory Models" },
		{ "Comment", "/** Decode the RedeemGooglePlayInventoryItemsResponse response object*/" },
		{ "ModuleRelativePath", "Classes/PlayFabEconomyModelDecoder.h" },
		{ "ToolTip", "Decode the RedeemGooglePlayInventoryItemsResponse response object" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeRedeemGooglePlayInventoryItemsResponseResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabEconomyModelDecoder, nullptr, "decodeRedeemGooglePlayInventoryItemsResponseResponse", nullptr, nullptr, sizeof(PlayFabEconomyModelDecoder_eventdecodeRedeemGooglePlayInventoryItemsResponseResponse_Parms), Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeRedeemGooglePlayInventoryItemsResponseResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeRedeemGooglePlayInventoryItemsResponseResponse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeRedeemGooglePlayInventoryItemsResponseResponse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeRedeemGooglePlayInventoryItemsResponseResponse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeRedeemGooglePlayInventoryItemsResponseResponse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeRedeemGooglePlayInventoryItemsResponseResponse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeRedeemMicrosoftStoreInventoryItemsResponseResponse_Statics
	{
		struct PlayFabEconomyModelDecoder_eventdecodeRedeemMicrosoftStoreInventoryItemsResponseResponse_Parms
		{
			UPlayFabJsonObject* response;
			FEconomyRedeemMicrosoftStoreInventoryItemsResponse ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_response;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeRedeemMicrosoftStoreInventoryItemsResponseResponse_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabEconomyModelDecoder_eventdecodeRedeemMicrosoftStoreInventoryItemsResponseResponse_Parms, response), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeRedeemMicrosoftStoreInventoryItemsResponseResponse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabEconomyModelDecoder_eventdecodeRedeemMicrosoftStoreInventoryItemsResponseResponse_Parms, ReturnValue), Z_Construct_UScriptStruct_FEconomyRedeemMicrosoftStoreInventoryItemsResponse, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeRedeemMicrosoftStoreInventoryItemsResponseResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeRedeemMicrosoftStoreInventoryItemsResponseResponse_Statics::NewProp_response,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeRedeemMicrosoftStoreInventoryItemsResponseResponse_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeRedeemMicrosoftStoreInventoryItemsResponseResponse_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Economy | Inventory Models" },
		{ "Comment", "/** Decode the RedeemMicrosoftStoreInventoryItemsResponse response object*/" },
		{ "ModuleRelativePath", "Classes/PlayFabEconomyModelDecoder.h" },
		{ "ToolTip", "Decode the RedeemMicrosoftStoreInventoryItemsResponse response object" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeRedeemMicrosoftStoreInventoryItemsResponseResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabEconomyModelDecoder, nullptr, "decodeRedeemMicrosoftStoreInventoryItemsResponseResponse", nullptr, nullptr, sizeof(PlayFabEconomyModelDecoder_eventdecodeRedeemMicrosoftStoreInventoryItemsResponseResponse_Parms), Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeRedeemMicrosoftStoreInventoryItemsResponseResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeRedeemMicrosoftStoreInventoryItemsResponseResponse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeRedeemMicrosoftStoreInventoryItemsResponseResponse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeRedeemMicrosoftStoreInventoryItemsResponseResponse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeRedeemMicrosoftStoreInventoryItemsResponseResponse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeRedeemMicrosoftStoreInventoryItemsResponseResponse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeRedeemNintendoEShopInventoryItemsResponseResponse_Statics
	{
		struct PlayFabEconomyModelDecoder_eventdecodeRedeemNintendoEShopInventoryItemsResponseResponse_Parms
		{
			UPlayFabJsonObject* response;
			FEconomyRedeemNintendoEShopInventoryItemsResponse ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_response;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeRedeemNintendoEShopInventoryItemsResponseResponse_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabEconomyModelDecoder_eventdecodeRedeemNintendoEShopInventoryItemsResponseResponse_Parms, response), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeRedeemNintendoEShopInventoryItemsResponseResponse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabEconomyModelDecoder_eventdecodeRedeemNintendoEShopInventoryItemsResponseResponse_Parms, ReturnValue), Z_Construct_UScriptStruct_FEconomyRedeemNintendoEShopInventoryItemsResponse, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeRedeemNintendoEShopInventoryItemsResponseResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeRedeemNintendoEShopInventoryItemsResponseResponse_Statics::NewProp_response,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeRedeemNintendoEShopInventoryItemsResponseResponse_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeRedeemNintendoEShopInventoryItemsResponseResponse_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Economy | Inventory Models" },
		{ "Comment", "/** Decode the RedeemNintendoEShopInventoryItemsResponse response object*/" },
		{ "ModuleRelativePath", "Classes/PlayFabEconomyModelDecoder.h" },
		{ "ToolTip", "Decode the RedeemNintendoEShopInventoryItemsResponse response object" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeRedeemNintendoEShopInventoryItemsResponseResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabEconomyModelDecoder, nullptr, "decodeRedeemNintendoEShopInventoryItemsResponseResponse", nullptr, nullptr, sizeof(PlayFabEconomyModelDecoder_eventdecodeRedeemNintendoEShopInventoryItemsResponseResponse_Parms), Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeRedeemNintendoEShopInventoryItemsResponseResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeRedeemNintendoEShopInventoryItemsResponseResponse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeRedeemNintendoEShopInventoryItemsResponseResponse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeRedeemNintendoEShopInventoryItemsResponseResponse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeRedeemNintendoEShopInventoryItemsResponseResponse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeRedeemNintendoEShopInventoryItemsResponseResponse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeRedeemPlayStationStoreInventoryItemsResponseResponse_Statics
	{
		struct PlayFabEconomyModelDecoder_eventdecodeRedeemPlayStationStoreInventoryItemsResponseResponse_Parms
		{
			UPlayFabJsonObject* response;
			FEconomyRedeemPlayStationStoreInventoryItemsResponse ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_response;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeRedeemPlayStationStoreInventoryItemsResponseResponse_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabEconomyModelDecoder_eventdecodeRedeemPlayStationStoreInventoryItemsResponseResponse_Parms, response), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeRedeemPlayStationStoreInventoryItemsResponseResponse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabEconomyModelDecoder_eventdecodeRedeemPlayStationStoreInventoryItemsResponseResponse_Parms, ReturnValue), Z_Construct_UScriptStruct_FEconomyRedeemPlayStationStoreInventoryItemsResponse, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeRedeemPlayStationStoreInventoryItemsResponseResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeRedeemPlayStationStoreInventoryItemsResponseResponse_Statics::NewProp_response,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeRedeemPlayStationStoreInventoryItemsResponseResponse_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeRedeemPlayStationStoreInventoryItemsResponseResponse_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Economy | Inventory Models" },
		{ "Comment", "/** Decode the RedeemPlayStationStoreInventoryItemsResponse response object*/" },
		{ "ModuleRelativePath", "Classes/PlayFabEconomyModelDecoder.h" },
		{ "ToolTip", "Decode the RedeemPlayStationStoreInventoryItemsResponse response object" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeRedeemPlayStationStoreInventoryItemsResponseResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabEconomyModelDecoder, nullptr, "decodeRedeemPlayStationStoreInventoryItemsResponseResponse", nullptr, nullptr, sizeof(PlayFabEconomyModelDecoder_eventdecodeRedeemPlayStationStoreInventoryItemsResponseResponse_Parms), Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeRedeemPlayStationStoreInventoryItemsResponseResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeRedeemPlayStationStoreInventoryItemsResponseResponse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeRedeemPlayStationStoreInventoryItemsResponseResponse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeRedeemPlayStationStoreInventoryItemsResponseResponse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeRedeemPlayStationStoreInventoryItemsResponseResponse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeRedeemPlayStationStoreInventoryItemsResponseResponse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeRedeemSteamInventoryItemsResponseResponse_Statics
	{
		struct PlayFabEconomyModelDecoder_eventdecodeRedeemSteamInventoryItemsResponseResponse_Parms
		{
			UPlayFabJsonObject* response;
			FEconomyRedeemSteamInventoryItemsResponse ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_response;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeRedeemSteamInventoryItemsResponseResponse_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabEconomyModelDecoder_eventdecodeRedeemSteamInventoryItemsResponseResponse_Parms, response), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeRedeemSteamInventoryItemsResponseResponse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabEconomyModelDecoder_eventdecodeRedeemSteamInventoryItemsResponseResponse_Parms, ReturnValue), Z_Construct_UScriptStruct_FEconomyRedeemSteamInventoryItemsResponse, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeRedeemSteamInventoryItemsResponseResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeRedeemSteamInventoryItemsResponseResponse_Statics::NewProp_response,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeRedeemSteamInventoryItemsResponseResponse_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeRedeemSteamInventoryItemsResponseResponse_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Economy | Inventory Models" },
		{ "Comment", "/** Decode the RedeemSteamInventoryItemsResponse response object*/" },
		{ "ModuleRelativePath", "Classes/PlayFabEconomyModelDecoder.h" },
		{ "ToolTip", "Decode the RedeemSteamInventoryItemsResponse response object" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeRedeemSteamInventoryItemsResponseResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabEconomyModelDecoder, nullptr, "decodeRedeemSteamInventoryItemsResponseResponse", nullptr, nullptr, sizeof(PlayFabEconomyModelDecoder_eventdecodeRedeemSteamInventoryItemsResponseResponse_Parms), Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeRedeemSteamInventoryItemsResponseResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeRedeemSteamInventoryItemsResponseResponse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeRedeemSteamInventoryItemsResponseResponse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeRedeemSteamInventoryItemsResponseResponse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeRedeemSteamInventoryItemsResponseResponse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeRedeemSteamInventoryItemsResponseResponse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeReportItemResponseResponse_Statics
	{
		struct PlayFabEconomyModelDecoder_eventdecodeReportItemResponseResponse_Parms
		{
			UPlayFabJsonObject* response;
			FEconomyReportItemResponse ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_response;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeReportItemResponseResponse_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabEconomyModelDecoder_eventdecodeReportItemResponseResponse_Parms, response), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeReportItemResponseResponse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabEconomyModelDecoder_eventdecodeReportItemResponseResponse_Parms, ReturnValue), Z_Construct_UScriptStruct_FEconomyReportItemResponse, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeReportItemResponseResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeReportItemResponseResponse_Statics::NewProp_response,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeReportItemResponseResponse_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeReportItemResponseResponse_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Economy | Catalog Models" },
		{ "Comment", "/** Decode the ReportItemResponse response object*/" },
		{ "ModuleRelativePath", "Classes/PlayFabEconomyModelDecoder.h" },
		{ "ToolTip", "Decode the ReportItemResponse response object" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeReportItemResponseResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabEconomyModelDecoder, nullptr, "decodeReportItemResponseResponse", nullptr, nullptr, sizeof(PlayFabEconomyModelDecoder_eventdecodeReportItemResponseResponse_Parms), Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeReportItemResponseResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeReportItemResponseResponse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeReportItemResponseResponse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeReportItemResponseResponse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeReportItemResponseResponse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeReportItemResponseResponse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeReportItemReviewResponseResponse_Statics
	{
		struct PlayFabEconomyModelDecoder_eventdecodeReportItemReviewResponseResponse_Parms
		{
			UPlayFabJsonObject* response;
			FEconomyReportItemReviewResponse ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_response;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeReportItemReviewResponseResponse_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabEconomyModelDecoder_eventdecodeReportItemReviewResponseResponse_Parms, response), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeReportItemReviewResponseResponse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabEconomyModelDecoder_eventdecodeReportItemReviewResponseResponse_Parms, ReturnValue), Z_Construct_UScriptStruct_FEconomyReportItemReviewResponse, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeReportItemReviewResponseResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeReportItemReviewResponseResponse_Statics::NewProp_response,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeReportItemReviewResponseResponse_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeReportItemReviewResponseResponse_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Economy | Catalog Models" },
		{ "Comment", "/** Decode the ReportItemReviewResponse response object*/" },
		{ "ModuleRelativePath", "Classes/PlayFabEconomyModelDecoder.h" },
		{ "ToolTip", "Decode the ReportItemReviewResponse response object" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeReportItemReviewResponseResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabEconomyModelDecoder, nullptr, "decodeReportItemReviewResponseResponse", nullptr, nullptr, sizeof(PlayFabEconomyModelDecoder_eventdecodeReportItemReviewResponseResponse_Parms), Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeReportItemReviewResponseResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeReportItemReviewResponseResponse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeReportItemReviewResponseResponse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeReportItemReviewResponseResponse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeReportItemReviewResponseResponse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeReportItemReviewResponseResponse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeReviewItemResponseResponse_Statics
	{
		struct PlayFabEconomyModelDecoder_eventdecodeReviewItemResponseResponse_Parms
		{
			UPlayFabJsonObject* response;
			FEconomyReviewItemResponse ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_response;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeReviewItemResponseResponse_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabEconomyModelDecoder_eventdecodeReviewItemResponseResponse_Parms, response), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeReviewItemResponseResponse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabEconomyModelDecoder_eventdecodeReviewItemResponseResponse_Parms, ReturnValue), Z_Construct_UScriptStruct_FEconomyReviewItemResponse, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeReviewItemResponseResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeReviewItemResponseResponse_Statics::NewProp_response,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeReviewItemResponseResponse_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeReviewItemResponseResponse_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Economy | Catalog Models" },
		{ "Comment", "/** Decode the ReviewItemResponse response object*/" },
		{ "ModuleRelativePath", "Classes/PlayFabEconomyModelDecoder.h" },
		{ "ToolTip", "Decode the ReviewItemResponse response object" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeReviewItemResponseResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabEconomyModelDecoder, nullptr, "decodeReviewItemResponseResponse", nullptr, nullptr, sizeof(PlayFabEconomyModelDecoder_eventdecodeReviewItemResponseResponse_Parms), Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeReviewItemResponseResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeReviewItemResponseResponse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeReviewItemResponseResponse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeReviewItemResponseResponse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeReviewItemResponseResponse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeReviewItemResponseResponse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeSearchItemsResponseResponse_Statics
	{
		struct PlayFabEconomyModelDecoder_eventdecodeSearchItemsResponseResponse_Parms
		{
			UPlayFabJsonObject* response;
			FEconomySearchItemsResponse ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_response;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeSearchItemsResponseResponse_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabEconomyModelDecoder_eventdecodeSearchItemsResponseResponse_Parms, response), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeSearchItemsResponseResponse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabEconomyModelDecoder_eventdecodeSearchItemsResponseResponse_Parms, ReturnValue), Z_Construct_UScriptStruct_FEconomySearchItemsResponse, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeSearchItemsResponseResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeSearchItemsResponseResponse_Statics::NewProp_response,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeSearchItemsResponseResponse_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeSearchItemsResponseResponse_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Economy | Catalog Models" },
		{ "Comment", "/** Decode the SearchItemsResponse response object*/" },
		{ "ModuleRelativePath", "Classes/PlayFabEconomyModelDecoder.h" },
		{ "ToolTip", "Decode the SearchItemsResponse response object" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeSearchItemsResponseResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabEconomyModelDecoder, nullptr, "decodeSearchItemsResponseResponse", nullptr, nullptr, sizeof(PlayFabEconomyModelDecoder_eventdecodeSearchItemsResponseResponse_Parms), Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeSearchItemsResponseResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeSearchItemsResponseResponse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeSearchItemsResponseResponse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeSearchItemsResponseResponse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeSearchItemsResponseResponse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeSearchItemsResponseResponse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeSetItemModerationStateResponseResponse_Statics
	{
		struct PlayFabEconomyModelDecoder_eventdecodeSetItemModerationStateResponseResponse_Parms
		{
			UPlayFabJsonObject* response;
			FEconomySetItemModerationStateResponse ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_response;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeSetItemModerationStateResponseResponse_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabEconomyModelDecoder_eventdecodeSetItemModerationStateResponseResponse_Parms, response), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeSetItemModerationStateResponseResponse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabEconomyModelDecoder_eventdecodeSetItemModerationStateResponseResponse_Parms, ReturnValue), Z_Construct_UScriptStruct_FEconomySetItemModerationStateResponse, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeSetItemModerationStateResponseResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeSetItemModerationStateResponseResponse_Statics::NewProp_response,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeSetItemModerationStateResponseResponse_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeSetItemModerationStateResponseResponse_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Economy | Catalog Models" },
		{ "Comment", "/** Decode the SetItemModerationStateResponse response object*/" },
		{ "ModuleRelativePath", "Classes/PlayFabEconomyModelDecoder.h" },
		{ "ToolTip", "Decode the SetItemModerationStateResponse response object" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeSetItemModerationStateResponseResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabEconomyModelDecoder, nullptr, "decodeSetItemModerationStateResponseResponse", nullptr, nullptr, sizeof(PlayFabEconomyModelDecoder_eventdecodeSetItemModerationStateResponseResponse_Parms), Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeSetItemModerationStateResponseResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeSetItemModerationStateResponseResponse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeSetItemModerationStateResponseResponse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeSetItemModerationStateResponseResponse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeSetItemModerationStateResponseResponse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeSetItemModerationStateResponseResponse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeSubmitItemReviewVoteResponseResponse_Statics
	{
		struct PlayFabEconomyModelDecoder_eventdecodeSubmitItemReviewVoteResponseResponse_Parms
		{
			UPlayFabJsonObject* response;
			FEconomySubmitItemReviewVoteResponse ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_response;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeSubmitItemReviewVoteResponseResponse_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabEconomyModelDecoder_eventdecodeSubmitItemReviewVoteResponseResponse_Parms, response), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeSubmitItemReviewVoteResponseResponse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabEconomyModelDecoder_eventdecodeSubmitItemReviewVoteResponseResponse_Parms, ReturnValue), Z_Construct_UScriptStruct_FEconomySubmitItemReviewVoteResponse, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeSubmitItemReviewVoteResponseResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeSubmitItemReviewVoteResponseResponse_Statics::NewProp_response,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeSubmitItemReviewVoteResponseResponse_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeSubmitItemReviewVoteResponseResponse_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Economy | Catalog Models" },
		{ "Comment", "/** Decode the SubmitItemReviewVoteResponse response object*/" },
		{ "ModuleRelativePath", "Classes/PlayFabEconomyModelDecoder.h" },
		{ "ToolTip", "Decode the SubmitItemReviewVoteResponse response object" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeSubmitItemReviewVoteResponseResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabEconomyModelDecoder, nullptr, "decodeSubmitItemReviewVoteResponseResponse", nullptr, nullptr, sizeof(PlayFabEconomyModelDecoder_eventdecodeSubmitItemReviewVoteResponseResponse_Parms), Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeSubmitItemReviewVoteResponseResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeSubmitItemReviewVoteResponseResponse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeSubmitItemReviewVoteResponseResponse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeSubmitItemReviewVoteResponseResponse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeSubmitItemReviewVoteResponseResponse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeSubmitItemReviewVoteResponseResponse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeSubtractInventoryItemsResponseResponse_Statics
	{
		struct PlayFabEconomyModelDecoder_eventdecodeSubtractInventoryItemsResponseResponse_Parms
		{
			UPlayFabJsonObject* response;
			FEconomySubtractInventoryItemsResponse ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_response;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeSubtractInventoryItemsResponseResponse_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabEconomyModelDecoder_eventdecodeSubtractInventoryItemsResponseResponse_Parms, response), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeSubtractInventoryItemsResponseResponse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabEconomyModelDecoder_eventdecodeSubtractInventoryItemsResponseResponse_Parms, ReturnValue), Z_Construct_UScriptStruct_FEconomySubtractInventoryItemsResponse, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeSubtractInventoryItemsResponseResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeSubtractInventoryItemsResponseResponse_Statics::NewProp_response,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeSubtractInventoryItemsResponseResponse_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeSubtractInventoryItemsResponseResponse_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Economy | Inventory Models" },
		{ "Comment", "/** Decode the SubtractInventoryItemsResponse response object*/" },
		{ "ModuleRelativePath", "Classes/PlayFabEconomyModelDecoder.h" },
		{ "ToolTip", "Decode the SubtractInventoryItemsResponse response object" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeSubtractInventoryItemsResponseResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabEconomyModelDecoder, nullptr, "decodeSubtractInventoryItemsResponseResponse", nullptr, nullptr, sizeof(PlayFabEconomyModelDecoder_eventdecodeSubtractInventoryItemsResponseResponse_Parms), Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeSubtractInventoryItemsResponseResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeSubtractInventoryItemsResponseResponse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeSubtractInventoryItemsResponseResponse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeSubtractInventoryItemsResponseResponse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeSubtractInventoryItemsResponseResponse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeSubtractInventoryItemsResponseResponse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeTakedownItemReviewsResponseResponse_Statics
	{
		struct PlayFabEconomyModelDecoder_eventdecodeTakedownItemReviewsResponseResponse_Parms
		{
			UPlayFabJsonObject* response;
			FEconomyTakedownItemReviewsResponse ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_response;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeTakedownItemReviewsResponseResponse_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabEconomyModelDecoder_eventdecodeTakedownItemReviewsResponseResponse_Parms, response), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeTakedownItemReviewsResponseResponse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabEconomyModelDecoder_eventdecodeTakedownItemReviewsResponseResponse_Parms, ReturnValue), Z_Construct_UScriptStruct_FEconomyTakedownItemReviewsResponse, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeTakedownItemReviewsResponseResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeTakedownItemReviewsResponseResponse_Statics::NewProp_response,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeTakedownItemReviewsResponseResponse_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeTakedownItemReviewsResponseResponse_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Economy | Catalog Models" },
		{ "Comment", "/** Decode the TakedownItemReviewsResponse response object*/" },
		{ "ModuleRelativePath", "Classes/PlayFabEconomyModelDecoder.h" },
		{ "ToolTip", "Decode the TakedownItemReviewsResponse response object" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeTakedownItemReviewsResponseResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabEconomyModelDecoder, nullptr, "decodeTakedownItemReviewsResponseResponse", nullptr, nullptr, sizeof(PlayFabEconomyModelDecoder_eventdecodeTakedownItemReviewsResponseResponse_Parms), Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeTakedownItemReviewsResponseResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeTakedownItemReviewsResponseResponse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeTakedownItemReviewsResponseResponse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeTakedownItemReviewsResponseResponse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeTakedownItemReviewsResponseResponse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeTakedownItemReviewsResponseResponse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeTransferInventoryItemsResponseResponse_Statics
	{
		struct PlayFabEconomyModelDecoder_eventdecodeTransferInventoryItemsResponseResponse_Parms
		{
			UPlayFabJsonObject* response;
			FEconomyTransferInventoryItemsResponse ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_response;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeTransferInventoryItemsResponseResponse_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabEconomyModelDecoder_eventdecodeTransferInventoryItemsResponseResponse_Parms, response), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeTransferInventoryItemsResponseResponse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabEconomyModelDecoder_eventdecodeTransferInventoryItemsResponseResponse_Parms, ReturnValue), Z_Construct_UScriptStruct_FEconomyTransferInventoryItemsResponse, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeTransferInventoryItemsResponseResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeTransferInventoryItemsResponseResponse_Statics::NewProp_response,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeTransferInventoryItemsResponseResponse_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeTransferInventoryItemsResponseResponse_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Economy | Inventory Models" },
		{ "Comment", "/** Decode the TransferInventoryItemsResponse response object*/" },
		{ "ModuleRelativePath", "Classes/PlayFabEconomyModelDecoder.h" },
		{ "ToolTip", "Decode the TransferInventoryItemsResponse response object" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeTransferInventoryItemsResponseResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabEconomyModelDecoder, nullptr, "decodeTransferInventoryItemsResponseResponse", nullptr, nullptr, sizeof(PlayFabEconomyModelDecoder_eventdecodeTransferInventoryItemsResponseResponse_Parms), Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeTransferInventoryItemsResponseResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeTransferInventoryItemsResponseResponse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeTransferInventoryItemsResponseResponse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeTransferInventoryItemsResponseResponse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeTransferInventoryItemsResponseResponse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeTransferInventoryItemsResponseResponse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeUpdateCatalogConfigResponseResponse_Statics
	{
		struct PlayFabEconomyModelDecoder_eventdecodeUpdateCatalogConfigResponseResponse_Parms
		{
			UPlayFabJsonObject* response;
			FEconomyUpdateCatalogConfigResponse ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_response;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeUpdateCatalogConfigResponseResponse_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabEconomyModelDecoder_eventdecodeUpdateCatalogConfigResponseResponse_Parms, response), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeUpdateCatalogConfigResponseResponse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabEconomyModelDecoder_eventdecodeUpdateCatalogConfigResponseResponse_Parms, ReturnValue), Z_Construct_UScriptStruct_FEconomyUpdateCatalogConfigResponse, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeUpdateCatalogConfigResponseResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeUpdateCatalogConfigResponseResponse_Statics::NewProp_response,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeUpdateCatalogConfigResponseResponse_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeUpdateCatalogConfigResponseResponse_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Economy | Catalog Models" },
		{ "Comment", "/** Decode the UpdateCatalogConfigResponse response object*/" },
		{ "ModuleRelativePath", "Classes/PlayFabEconomyModelDecoder.h" },
		{ "ToolTip", "Decode the UpdateCatalogConfigResponse response object" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeUpdateCatalogConfigResponseResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabEconomyModelDecoder, nullptr, "decodeUpdateCatalogConfigResponseResponse", nullptr, nullptr, sizeof(PlayFabEconomyModelDecoder_eventdecodeUpdateCatalogConfigResponseResponse_Parms), Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeUpdateCatalogConfigResponseResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeUpdateCatalogConfigResponseResponse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeUpdateCatalogConfigResponseResponse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeUpdateCatalogConfigResponseResponse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeUpdateCatalogConfigResponseResponse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeUpdateCatalogConfigResponseResponse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeUpdateDraftItemResponseResponse_Statics
	{
		struct PlayFabEconomyModelDecoder_eventdecodeUpdateDraftItemResponseResponse_Parms
		{
			UPlayFabJsonObject* response;
			FEconomyUpdateDraftItemResponse ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_response;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeUpdateDraftItemResponseResponse_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabEconomyModelDecoder_eventdecodeUpdateDraftItemResponseResponse_Parms, response), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeUpdateDraftItemResponseResponse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabEconomyModelDecoder_eventdecodeUpdateDraftItemResponseResponse_Parms, ReturnValue), Z_Construct_UScriptStruct_FEconomyUpdateDraftItemResponse, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeUpdateDraftItemResponseResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeUpdateDraftItemResponseResponse_Statics::NewProp_response,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeUpdateDraftItemResponseResponse_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeUpdateDraftItemResponseResponse_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Economy | Catalog Models" },
		{ "Comment", "/** Decode the UpdateDraftItemResponse response object*/" },
		{ "ModuleRelativePath", "Classes/PlayFabEconomyModelDecoder.h" },
		{ "ToolTip", "Decode the UpdateDraftItemResponse response object" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeUpdateDraftItemResponseResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabEconomyModelDecoder, nullptr, "decodeUpdateDraftItemResponseResponse", nullptr, nullptr, sizeof(PlayFabEconomyModelDecoder_eventdecodeUpdateDraftItemResponseResponse_Parms), Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeUpdateDraftItemResponseResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeUpdateDraftItemResponseResponse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeUpdateDraftItemResponseResponse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeUpdateDraftItemResponseResponse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeUpdateDraftItemResponseResponse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeUpdateDraftItemResponseResponse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeUpdateInventoryItemsResponseResponse_Statics
	{
		struct PlayFabEconomyModelDecoder_eventdecodeUpdateInventoryItemsResponseResponse_Parms
		{
			UPlayFabJsonObject* response;
			FEconomyUpdateInventoryItemsResponse ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_response;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeUpdateInventoryItemsResponseResponse_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabEconomyModelDecoder_eventdecodeUpdateInventoryItemsResponseResponse_Parms, response), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeUpdateInventoryItemsResponseResponse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabEconomyModelDecoder_eventdecodeUpdateInventoryItemsResponseResponse_Parms, ReturnValue), Z_Construct_UScriptStruct_FEconomyUpdateInventoryItemsResponse, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeUpdateInventoryItemsResponseResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeUpdateInventoryItemsResponseResponse_Statics::NewProp_response,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeUpdateInventoryItemsResponseResponse_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeUpdateInventoryItemsResponseResponse_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Economy | Inventory Models" },
		{ "Comment", "/** Decode the UpdateInventoryItemsResponse response object*/" },
		{ "ModuleRelativePath", "Classes/PlayFabEconomyModelDecoder.h" },
		{ "ToolTip", "Decode the UpdateInventoryItemsResponse response object" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeUpdateInventoryItemsResponseResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabEconomyModelDecoder, nullptr, "decodeUpdateInventoryItemsResponseResponse", nullptr, nullptr, sizeof(PlayFabEconomyModelDecoder_eventdecodeUpdateInventoryItemsResponseResponse_Parms), Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeUpdateInventoryItemsResponseResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeUpdateInventoryItemsResponseResponse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeUpdateInventoryItemsResponseResponse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeUpdateInventoryItemsResponseResponse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeUpdateInventoryItemsResponseResponse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeUpdateInventoryItemsResponseResponse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPlayFabEconomyModelDecoder_NoRegister()
	{
		return UPlayFabEconomyModelDecoder::StaticClass();
	}
	struct Z_Construct_UClass_UPlayFabEconomyModelDecoder_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlayFabEconomyModelDecoder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPlayFabEconomyModelDecoder_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeAddInventoryItemsResponseResponse, "decodeAddInventoryItemsResponseResponse" }, // 2777721237
		{ &Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeCreateDraftItemResponseResponse, "decodeCreateDraftItemResponseResponse" }, // 2296145725
		{ &Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeCreateUploadUrlsResponseResponse, "decodeCreateUploadUrlsResponseResponse" }, // 12848681
		{ &Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeDeleteEntityItemReviewsResponseResponse, "decodeDeleteEntityItemReviewsResponseResponse" }, // 2636979778
		{ &Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeDeleteInventoryCollectionResponseResponse, "decodeDeleteInventoryCollectionResponseResponse" }, // 3859787133
		{ &Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeDeleteInventoryItemsResponseResponse, "decodeDeleteInventoryItemsResponseResponse" }, // 1887963305
		{ &Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeDeleteItemResponseResponse, "decodeDeleteItemResponseResponse" }, // 935148455
		{ &Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeExecuteInventoryOperationsResponseResponse, "decodeExecuteInventoryOperationsResponseResponse" }, // 1322960502
		{ &Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetCatalogConfigResponseResponse, "decodeGetCatalogConfigResponseResponse" }, // 3566655240
		{ &Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetDraftItemResponseResponse, "decodeGetDraftItemResponseResponse" }, // 4258355065
		{ &Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetDraftItemsResponseResponse, "decodeGetDraftItemsResponseResponse" }, // 737038353
		{ &Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetEntityDraftItemsResponseResponse, "decodeGetEntityDraftItemsResponseResponse" }, // 1982418552
		{ &Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetEntityItemReviewResponseResponse, "decodeGetEntityItemReviewResponseResponse" }, // 4159005885
		{ &Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetInventoryCollectionIdsResponseResponse, "decodeGetInventoryCollectionIdsResponseResponse" }, // 193136995
		{ &Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetInventoryItemsResponseResponse, "decodeGetInventoryItemsResponseResponse" }, // 2137784905
		{ &Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetItemContainersResponseResponse, "decodeGetItemContainersResponseResponse" }, // 668651984
		{ &Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetItemModerationStateResponseResponse, "decodeGetItemModerationStateResponseResponse" }, // 3954879119
		{ &Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetItemPublishStatusResponseResponse, "decodeGetItemPublishStatusResponseResponse" }, // 3959842913
		{ &Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetItemResponseResponse, "decodeGetItemResponseResponse" }, // 366117630
		{ &Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetItemReviewsResponseResponse, "decodeGetItemReviewsResponseResponse" }, // 914384130
		{ &Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetItemReviewSummaryResponseResponse, "decodeGetItemReviewSummaryResponseResponse" }, // 133390867
		{ &Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetItemsResponseResponse, "decodeGetItemsResponseResponse" }, // 312137141
		{ &Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetMicrosoftStoreAccessTokensResponseResponse, "decodeGetMicrosoftStoreAccessTokensResponseResponse" }, // 967191739
		{ &Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeGetTransactionHistoryResponseResponse, "decodeGetTransactionHistoryResponseResponse" }, // 1245813868
		{ &Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodePublishDraftItemResponseResponse, "decodePublishDraftItemResponseResponse" }, // 1920044325
		{ &Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodePurchaseInventoryItemsResponseResponse, "decodePurchaseInventoryItemsResponseResponse" }, // 268976745
		{ &Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeRedeemAppleAppStoreInventoryItemsResponseResponse, "decodeRedeemAppleAppStoreInventoryItemsResponseResponse" }, // 1351382805
		{ &Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeRedeemGooglePlayInventoryItemsResponseResponse, "decodeRedeemGooglePlayInventoryItemsResponseResponse" }, // 3516535948
		{ &Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeRedeemMicrosoftStoreInventoryItemsResponseResponse, "decodeRedeemMicrosoftStoreInventoryItemsResponseResponse" }, // 3747486610
		{ &Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeRedeemNintendoEShopInventoryItemsResponseResponse, "decodeRedeemNintendoEShopInventoryItemsResponseResponse" }, // 408240480
		{ &Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeRedeemPlayStationStoreInventoryItemsResponseResponse, "decodeRedeemPlayStationStoreInventoryItemsResponseResponse" }, // 2734382987
		{ &Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeRedeemSteamInventoryItemsResponseResponse, "decodeRedeemSteamInventoryItemsResponseResponse" }, // 1265602505
		{ &Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeReportItemResponseResponse, "decodeReportItemResponseResponse" }, // 266803492
		{ &Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeReportItemReviewResponseResponse, "decodeReportItemReviewResponseResponse" }, // 3556195089
		{ &Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeReviewItemResponseResponse, "decodeReviewItemResponseResponse" }, // 4010865271
		{ &Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeSearchItemsResponseResponse, "decodeSearchItemsResponseResponse" }, // 3203487612
		{ &Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeSetItemModerationStateResponseResponse, "decodeSetItemModerationStateResponseResponse" }, // 3247284441
		{ &Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeSubmitItemReviewVoteResponseResponse, "decodeSubmitItemReviewVoteResponseResponse" }, // 110989494
		{ &Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeSubtractInventoryItemsResponseResponse, "decodeSubtractInventoryItemsResponseResponse" }, // 1460315321
		{ &Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeTakedownItemReviewsResponseResponse, "decodeTakedownItemReviewsResponseResponse" }, // 392837248
		{ &Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeTransferInventoryItemsResponseResponse, "decodeTransferInventoryItemsResponseResponse" }, // 3949009823
		{ &Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeUpdateCatalogConfigResponseResponse, "decodeUpdateCatalogConfigResponseResponse" }, // 2855468333
		{ &Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeUpdateDraftItemResponseResponse, "decodeUpdateDraftItemResponseResponse" }, // 3250393550
		{ &Z_Construct_UFunction_UPlayFabEconomyModelDecoder_decodeUpdateInventoryItemsResponseResponse, "decodeUpdateInventoryItemsResponseResponse" }, // 210397102
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayFabEconomyModelDecoder_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PlayFabEconomyModelDecoder.h" },
		{ "ModuleRelativePath", "Classes/PlayFabEconomyModelDecoder.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlayFabEconomyModelDecoder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayFabEconomyModelDecoder>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPlayFabEconomyModelDecoder_Statics::ClassParams = {
		&UPlayFabEconomyModelDecoder::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPlayFabEconomyModelDecoder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayFabEconomyModelDecoder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlayFabEconomyModelDecoder()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPlayFabEconomyModelDecoder_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPlayFabEconomyModelDecoder, 2121981978);
	template<> PLAYFAB_API UClass* StaticClass<UPlayFabEconomyModelDecoder>()
	{
		return UPlayFabEconomyModelDecoder::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPlayFabEconomyModelDecoder(Z_Construct_UClass_UPlayFabEconomyModelDecoder, &UPlayFabEconomyModelDecoder::StaticClass, TEXT("/Script/PlayFab"), TEXT("UPlayFabEconomyModelDecoder"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayFabEconomyModelDecoder);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
