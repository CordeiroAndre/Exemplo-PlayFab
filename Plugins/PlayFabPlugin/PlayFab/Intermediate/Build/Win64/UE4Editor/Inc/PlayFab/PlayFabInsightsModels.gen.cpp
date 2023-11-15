// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Classes/PlayFabInsightsModels.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayFabInsightsModels() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FInsightsInsightsSetStorageRetentionRequest();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabRequestCommon();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FInsightsInsightsSetPerformanceRequest();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FInsightsInsightsOperationResponse();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabResultCommon();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FInsightsInsightsGetPendingOperationsResponse();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FInsightsInsightsGetPendingOperationsRequest();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusResponse();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusRequest();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FInsightsInsightsGetLimitsResponse();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FInsightsInsightsGetDetailsResponse();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FInsightsInsightsEmptyRequest();
// End Cross Module References

static_assert(std::is_polymorphic<FInsightsInsightsSetStorageRetentionRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FInsightsInsightsSetStorageRetentionRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FInsightsInsightsSetStorageRetentionRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FInsightsInsightsSetStorageRetentionRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FInsightsInsightsSetStorageRetentionRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("InsightsInsightsSetStorageRetentionRequest"), sizeof(FInsightsInsightsSetStorageRetentionRequest), Get_Z_Construct_UScriptStruct_FInsightsInsightsSetStorageRetentionRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FInsightsInsightsSetStorageRetentionRequest>()
{
	return FInsightsInsightsSetStorageRetentionRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FInsightsInsightsSetStorageRetentionRequest(FInsightsInsightsSetStorageRetentionRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("InsightsInsightsSetStorageRetentionRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFInsightsInsightsSetStorageRetentionRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFInsightsInsightsSetStorageRetentionRequest()
	{
		UScriptStruct::DeferCppStructOps<FInsightsInsightsSetStorageRetentionRequest>(FName(TEXT("InsightsInsightsSetStorageRetentionRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFInsightsInsightsSetStorageRetentionRequest;
	struct Z_Construct_UScriptStruct_FInsightsInsightsSetStorageRetentionRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CustomTags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RetentionDays_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RetentionDays;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInsightsInsightsSetStorageRetentionRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Sets the data storage retention to the requested value. Use the GetLimits method to get the range of allowed values. */" },
		{ "ModuleRelativePath", "Classes/PlayFabInsightsModels.h" },
		{ "ToolTip", "Sets the data storage retention to the requested value. Use the GetLimits method to get the range of allowed values." },
	};
#endif
	void* Z_Construct_UScriptStruct_FInsightsInsightsSetStorageRetentionRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInsightsInsightsSetStorageRetentionRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInsightsInsightsSetStorageRetentionRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | Insights | Analytics Models" },
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
		{ "ModuleRelativePath", "Classes/PlayFabInsightsModels.h" },
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FInsightsInsightsSetStorageRetentionRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInsightsInsightsSetStorageRetentionRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FInsightsInsightsSetStorageRetentionRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInsightsInsightsSetStorageRetentionRequest_Statics::NewProp_CustomTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInsightsInsightsSetStorageRetentionRequest_Statics::NewProp_RetentionDays_MetaData[] = {
		{ "Category", "PlayFab | Insights | Analytics Models" },
		{ "Comment", "/** The Insights data storage retention value (in days) to apply to the title. */" },
		{ "ModuleRelativePath", "Classes/PlayFabInsightsModels.h" },
		{ "ToolTip", "The Insights data storage retention value (in days) to apply to the title." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FInsightsInsightsSetStorageRetentionRequest_Statics::NewProp_RetentionDays = { "RetentionDays", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInsightsInsightsSetStorageRetentionRequest, RetentionDays), METADATA_PARAMS(Z_Construct_UScriptStruct_FInsightsInsightsSetStorageRetentionRequest_Statics::NewProp_RetentionDays_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInsightsInsightsSetStorageRetentionRequest_Statics::NewProp_RetentionDays_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInsightsInsightsSetStorageRetentionRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInsightsInsightsSetStorageRetentionRequest_Statics::NewProp_CustomTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInsightsInsightsSetStorageRetentionRequest_Statics::NewProp_RetentionDays,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInsightsInsightsSetStorageRetentionRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"InsightsInsightsSetStorageRetentionRequest",
		sizeof(FInsightsInsightsSetStorageRetentionRequest),
		alignof(FInsightsInsightsSetStorageRetentionRequest),
		Z_Construct_UScriptStruct_FInsightsInsightsSetStorageRetentionRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInsightsInsightsSetStorageRetentionRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInsightsInsightsSetStorageRetentionRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInsightsInsightsSetStorageRetentionRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInsightsInsightsSetStorageRetentionRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FInsightsInsightsSetStorageRetentionRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("InsightsInsightsSetStorageRetentionRequest"), sizeof(FInsightsInsightsSetStorageRetentionRequest), Get_Z_Construct_UScriptStruct_FInsightsInsightsSetStorageRetentionRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FInsightsInsightsSetStorageRetentionRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FInsightsInsightsSetStorageRetentionRequest_Hash() { return 1077069709U; }

static_assert(std::is_polymorphic<FInsightsInsightsSetPerformanceRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FInsightsInsightsSetPerformanceRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FInsightsInsightsSetPerformanceRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FInsightsInsightsSetPerformanceRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FInsightsInsightsSetPerformanceRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("InsightsInsightsSetPerformanceRequest"), sizeof(FInsightsInsightsSetPerformanceRequest), Get_Z_Construct_UScriptStruct_FInsightsInsightsSetPerformanceRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FInsightsInsightsSetPerformanceRequest>()
{
	return FInsightsInsightsSetPerformanceRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FInsightsInsightsSetPerformanceRequest(FInsightsInsightsSetPerformanceRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("InsightsInsightsSetPerformanceRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFInsightsInsightsSetPerformanceRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFInsightsInsightsSetPerformanceRequest()
	{
		UScriptStruct::DeferCppStructOps<FInsightsInsightsSetPerformanceRequest>(FName(TEXT("InsightsInsightsSetPerformanceRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFInsightsInsightsSetPerformanceRequest;
	struct Z_Construct_UScriptStruct_FInsightsInsightsSetPerformanceRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CustomTags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PerformanceLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PerformanceLevel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInsightsInsightsSetPerformanceRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Sets the performance level to the requested value. Use the GetLimits method to get the allowed values. */" },
		{ "ModuleRelativePath", "Classes/PlayFabInsightsModels.h" },
		{ "ToolTip", "Sets the performance level to the requested value. Use the GetLimits method to get the allowed values." },
	};
#endif
	void* Z_Construct_UScriptStruct_FInsightsInsightsSetPerformanceRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInsightsInsightsSetPerformanceRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInsightsInsightsSetPerformanceRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | Insights | Analytics Models" },
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
		{ "ModuleRelativePath", "Classes/PlayFabInsightsModels.h" },
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FInsightsInsightsSetPerformanceRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInsightsInsightsSetPerformanceRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FInsightsInsightsSetPerformanceRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInsightsInsightsSetPerformanceRequest_Statics::NewProp_CustomTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInsightsInsightsSetPerformanceRequest_Statics::NewProp_PerformanceLevel_MetaData[] = {
		{ "Category", "PlayFab | Insights | Analytics Models" },
		{ "Comment", "/** The Insights performance level to apply to the title. */" },
		{ "ModuleRelativePath", "Classes/PlayFabInsightsModels.h" },
		{ "ToolTip", "The Insights performance level to apply to the title." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FInsightsInsightsSetPerformanceRequest_Statics::NewProp_PerformanceLevel = { "PerformanceLevel", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInsightsInsightsSetPerformanceRequest, PerformanceLevel), METADATA_PARAMS(Z_Construct_UScriptStruct_FInsightsInsightsSetPerformanceRequest_Statics::NewProp_PerformanceLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInsightsInsightsSetPerformanceRequest_Statics::NewProp_PerformanceLevel_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInsightsInsightsSetPerformanceRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInsightsInsightsSetPerformanceRequest_Statics::NewProp_CustomTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInsightsInsightsSetPerformanceRequest_Statics::NewProp_PerformanceLevel,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInsightsInsightsSetPerformanceRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"InsightsInsightsSetPerformanceRequest",
		sizeof(FInsightsInsightsSetPerformanceRequest),
		alignof(FInsightsInsightsSetPerformanceRequest),
		Z_Construct_UScriptStruct_FInsightsInsightsSetPerformanceRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInsightsInsightsSetPerformanceRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInsightsInsightsSetPerformanceRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInsightsInsightsSetPerformanceRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInsightsInsightsSetPerformanceRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FInsightsInsightsSetPerformanceRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("InsightsInsightsSetPerformanceRequest"), sizeof(FInsightsInsightsSetPerformanceRequest), Get_Z_Construct_UScriptStruct_FInsightsInsightsSetPerformanceRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FInsightsInsightsSetPerformanceRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FInsightsInsightsSetPerformanceRequest_Hash() { return 3227193768U; }

static_assert(std::is_polymorphic<FInsightsInsightsOperationResponse>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FInsightsInsightsOperationResponse cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

class UScriptStruct* FInsightsInsightsOperationResponse::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FInsightsInsightsOperationResponse_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FInsightsInsightsOperationResponse, Z_Construct_UPackage__Script_PlayFab(), TEXT("InsightsInsightsOperationResponse"), sizeof(FInsightsInsightsOperationResponse), Get_Z_Construct_UScriptStruct_FInsightsInsightsOperationResponse_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FInsightsInsightsOperationResponse>()
{
	return FInsightsInsightsOperationResponse::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FInsightsInsightsOperationResponse(FInsightsInsightsOperationResponse::StaticStruct, TEXT("/Script/PlayFab"), TEXT("InsightsInsightsOperationResponse"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFInsightsInsightsOperationResponse
{
	FScriptStruct_PlayFab_StaticRegisterNativesFInsightsInsightsOperationResponse()
	{
		UScriptStruct::DeferCppStructOps<FInsightsInsightsOperationResponse>(FName(TEXT("InsightsInsightsOperationResponse")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFInsightsInsightsOperationResponse;
	struct Z_Construct_UScriptStruct_FInsightsInsightsOperationResponse_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Message;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OperationId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OperationId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OperationType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OperationType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInsightsInsightsOperationResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabInsightsModels.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInsightsInsightsOperationResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInsightsInsightsOperationResponse>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInsightsInsightsOperationResponse_Statics::NewProp_Message_MetaData[] = {
		{ "Category", "PlayFab | Insights | Analytics Models" },
		{ "Comment", "/** Optional message related to the operation details. */" },
		{ "ModuleRelativePath", "Classes/PlayFabInsightsModels.h" },
		{ "ToolTip", "Optional message related to the operation details." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInsightsInsightsOperationResponse_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInsightsInsightsOperationResponse, Message), METADATA_PARAMS(Z_Construct_UScriptStruct_FInsightsInsightsOperationResponse_Statics::NewProp_Message_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInsightsInsightsOperationResponse_Statics::NewProp_Message_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInsightsInsightsOperationResponse_Statics::NewProp_OperationId_MetaData[] = {
		{ "Category", "PlayFab | Insights | Analytics Models" },
		{ "Comment", "/** Id of the Insights operation. */" },
		{ "ModuleRelativePath", "Classes/PlayFabInsightsModels.h" },
		{ "ToolTip", "Id of the Insights operation." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInsightsInsightsOperationResponse_Statics::NewProp_OperationId = { "OperationId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInsightsInsightsOperationResponse, OperationId), METADATA_PARAMS(Z_Construct_UScriptStruct_FInsightsInsightsOperationResponse_Statics::NewProp_OperationId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInsightsInsightsOperationResponse_Statics::NewProp_OperationId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInsightsInsightsOperationResponse_Statics::NewProp_OperationType_MetaData[] = {
		{ "Category", "PlayFab | Insights | Analytics Models" },
		{ "Comment", "/** The type of operation, SetPerformance or SetStorageRetention. */" },
		{ "ModuleRelativePath", "Classes/PlayFabInsightsModels.h" },
		{ "ToolTip", "The type of operation, SetPerformance or SetStorageRetention." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInsightsInsightsOperationResponse_Statics::NewProp_OperationType = { "OperationType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInsightsInsightsOperationResponse, OperationType), METADATA_PARAMS(Z_Construct_UScriptStruct_FInsightsInsightsOperationResponse_Statics::NewProp_OperationType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInsightsInsightsOperationResponse_Statics::NewProp_OperationType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInsightsInsightsOperationResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInsightsInsightsOperationResponse_Statics::NewProp_Message,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInsightsInsightsOperationResponse_Statics::NewProp_OperationId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInsightsInsightsOperationResponse_Statics::NewProp_OperationType,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInsightsInsightsOperationResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"InsightsInsightsOperationResponse",
		sizeof(FInsightsInsightsOperationResponse),
		alignof(FInsightsInsightsOperationResponse),
		Z_Construct_UScriptStruct_FInsightsInsightsOperationResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInsightsInsightsOperationResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInsightsInsightsOperationResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInsightsInsightsOperationResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInsightsInsightsOperationResponse()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FInsightsInsightsOperationResponse_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("InsightsInsightsOperationResponse"), sizeof(FInsightsInsightsOperationResponse), Get_Z_Construct_UScriptStruct_FInsightsInsightsOperationResponse_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FInsightsInsightsOperationResponse_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FInsightsInsightsOperationResponse_Hash() { return 1908164157U; }

static_assert(std::is_polymorphic<FInsightsInsightsGetPendingOperationsResponse>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FInsightsInsightsGetPendingOperationsResponse cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

class UScriptStruct* FInsightsInsightsGetPendingOperationsResponse::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FInsightsInsightsGetPendingOperationsResponse_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FInsightsInsightsGetPendingOperationsResponse, Z_Construct_UPackage__Script_PlayFab(), TEXT("InsightsInsightsGetPendingOperationsResponse"), sizeof(FInsightsInsightsGetPendingOperationsResponse), Get_Z_Construct_UScriptStruct_FInsightsInsightsGetPendingOperationsResponse_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FInsightsInsightsGetPendingOperationsResponse>()
{
	return FInsightsInsightsGetPendingOperationsResponse::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FInsightsInsightsGetPendingOperationsResponse(FInsightsInsightsGetPendingOperationsResponse::StaticStruct, TEXT("/Script/PlayFab"), TEXT("InsightsInsightsGetPendingOperationsResponse"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFInsightsInsightsGetPendingOperationsResponse
{
	FScriptStruct_PlayFab_StaticRegisterNativesFInsightsInsightsGetPendingOperationsResponse()
	{
		UScriptStruct::DeferCppStructOps<FInsightsInsightsGetPendingOperationsResponse>(FName(TEXT("InsightsInsightsGetPendingOperationsResponse")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFInsightsInsightsGetPendingOperationsResponse;
	struct Z_Construct_UScriptStruct_FInsightsInsightsGetPendingOperationsResponse_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PendingOperations_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PendingOperations_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PendingOperations;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInsightsInsightsGetPendingOperationsResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabInsightsModels.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInsightsInsightsGetPendingOperationsResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInsightsInsightsGetPendingOperationsResponse>();
	}
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FInsightsInsightsGetPendingOperationsResponse_Statics::NewProp_PendingOperations_Inner = { "PendingOperations", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInsightsInsightsGetPendingOperationsResponse_Statics::NewProp_PendingOperations_MetaData[] = {
		{ "Category", "PlayFab | Insights | Analytics Models" },
		{ "Comment", "/** List of pending Insights operations. */" },
		{ "ModuleRelativePath", "Classes/PlayFabInsightsModels.h" },
		{ "ToolTip", "List of pending Insights operations." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FInsightsInsightsGetPendingOperationsResponse_Statics::NewProp_PendingOperations = { "PendingOperations", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInsightsInsightsGetPendingOperationsResponse, PendingOperations), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FInsightsInsightsGetPendingOperationsResponse_Statics::NewProp_PendingOperations_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInsightsInsightsGetPendingOperationsResponse_Statics::NewProp_PendingOperations_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInsightsInsightsGetPendingOperationsResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInsightsInsightsGetPendingOperationsResponse_Statics::NewProp_PendingOperations_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInsightsInsightsGetPendingOperationsResponse_Statics::NewProp_PendingOperations,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInsightsInsightsGetPendingOperationsResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"InsightsInsightsGetPendingOperationsResponse",
		sizeof(FInsightsInsightsGetPendingOperationsResponse),
		alignof(FInsightsInsightsGetPendingOperationsResponse),
		Z_Construct_UScriptStruct_FInsightsInsightsGetPendingOperationsResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInsightsInsightsGetPendingOperationsResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInsightsInsightsGetPendingOperationsResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInsightsInsightsGetPendingOperationsResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInsightsInsightsGetPendingOperationsResponse()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FInsightsInsightsGetPendingOperationsResponse_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("InsightsInsightsGetPendingOperationsResponse"), sizeof(FInsightsInsightsGetPendingOperationsResponse), Get_Z_Construct_UScriptStruct_FInsightsInsightsGetPendingOperationsResponse_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FInsightsInsightsGetPendingOperationsResponse_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FInsightsInsightsGetPendingOperationsResponse_Hash() { return 585352591U; }

static_assert(std::is_polymorphic<FInsightsInsightsGetPendingOperationsRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FInsightsInsightsGetPendingOperationsRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FInsightsInsightsGetPendingOperationsRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FInsightsInsightsGetPendingOperationsRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FInsightsInsightsGetPendingOperationsRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("InsightsInsightsGetPendingOperationsRequest"), sizeof(FInsightsInsightsGetPendingOperationsRequest), Get_Z_Construct_UScriptStruct_FInsightsInsightsGetPendingOperationsRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FInsightsInsightsGetPendingOperationsRequest>()
{
	return FInsightsInsightsGetPendingOperationsRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FInsightsInsightsGetPendingOperationsRequest(FInsightsInsightsGetPendingOperationsRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("InsightsInsightsGetPendingOperationsRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFInsightsInsightsGetPendingOperationsRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFInsightsInsightsGetPendingOperationsRequest()
	{
		UScriptStruct::DeferCppStructOps<FInsightsInsightsGetPendingOperationsRequest>(FName(TEXT("InsightsInsightsGetPendingOperationsRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFInsightsInsightsGetPendingOperationsRequest;
	struct Z_Construct_UScriptStruct_FInsightsInsightsGetPendingOperationsRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CustomTags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OperationType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OperationType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInsightsInsightsGetPendingOperationsRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Returns a list of operations that are in the pending state for the requested operation type. */" },
		{ "ModuleRelativePath", "Classes/PlayFabInsightsModels.h" },
		{ "ToolTip", "Returns a list of operations that are in the pending state for the requested operation type." },
	};
#endif
	void* Z_Construct_UScriptStruct_FInsightsInsightsGetPendingOperationsRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInsightsInsightsGetPendingOperationsRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInsightsInsightsGetPendingOperationsRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | Insights | Analytics Models" },
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
		{ "ModuleRelativePath", "Classes/PlayFabInsightsModels.h" },
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FInsightsInsightsGetPendingOperationsRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInsightsInsightsGetPendingOperationsRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FInsightsInsightsGetPendingOperationsRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInsightsInsightsGetPendingOperationsRequest_Statics::NewProp_CustomTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInsightsInsightsGetPendingOperationsRequest_Statics::NewProp_OperationType_MetaData[] = {
		{ "Category", "PlayFab | Insights | Analytics Models" },
		{ "Comment", "/** The type of pending operations requested, or blank for all operation types. */" },
		{ "ModuleRelativePath", "Classes/PlayFabInsightsModels.h" },
		{ "ToolTip", "The type of pending operations requested, or blank for all operation types." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInsightsInsightsGetPendingOperationsRequest_Statics::NewProp_OperationType = { "OperationType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInsightsInsightsGetPendingOperationsRequest, OperationType), METADATA_PARAMS(Z_Construct_UScriptStruct_FInsightsInsightsGetPendingOperationsRequest_Statics::NewProp_OperationType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInsightsInsightsGetPendingOperationsRequest_Statics::NewProp_OperationType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInsightsInsightsGetPendingOperationsRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInsightsInsightsGetPendingOperationsRequest_Statics::NewProp_CustomTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInsightsInsightsGetPendingOperationsRequest_Statics::NewProp_OperationType,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInsightsInsightsGetPendingOperationsRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"InsightsInsightsGetPendingOperationsRequest",
		sizeof(FInsightsInsightsGetPendingOperationsRequest),
		alignof(FInsightsInsightsGetPendingOperationsRequest),
		Z_Construct_UScriptStruct_FInsightsInsightsGetPendingOperationsRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInsightsInsightsGetPendingOperationsRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInsightsInsightsGetPendingOperationsRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInsightsInsightsGetPendingOperationsRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInsightsInsightsGetPendingOperationsRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FInsightsInsightsGetPendingOperationsRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("InsightsInsightsGetPendingOperationsRequest"), sizeof(FInsightsInsightsGetPendingOperationsRequest), Get_Z_Construct_UScriptStruct_FInsightsInsightsGetPendingOperationsRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FInsightsInsightsGetPendingOperationsRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FInsightsInsightsGetPendingOperationsRequest_Hash() { return 257690818U; }

static_assert(std::is_polymorphic<FInsightsInsightsGetOperationStatusResponse>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FInsightsInsightsGetOperationStatusResponse cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

class UScriptStruct* FInsightsInsightsGetOperationStatusResponse::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusResponse_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusResponse, Z_Construct_UPackage__Script_PlayFab(), TEXT("InsightsInsightsGetOperationStatusResponse"), sizeof(FInsightsInsightsGetOperationStatusResponse), Get_Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusResponse_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FInsightsInsightsGetOperationStatusResponse>()
{
	return FInsightsInsightsGetOperationStatusResponse::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FInsightsInsightsGetOperationStatusResponse(FInsightsInsightsGetOperationStatusResponse::StaticStruct, TEXT("/Script/PlayFab"), TEXT("InsightsInsightsGetOperationStatusResponse"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFInsightsInsightsGetOperationStatusResponse
{
	FScriptStruct_PlayFab_StaticRegisterNativesFInsightsInsightsGetOperationStatusResponse()
	{
		UScriptStruct::DeferCppStructOps<FInsightsInsightsGetOperationStatusResponse>(FName(TEXT("InsightsInsightsGetOperationStatusResponse")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFInsightsInsightsGetOperationStatusResponse;
	struct Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusResponse_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Message;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OperationCompletedTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OperationCompletedTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OperationId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OperationId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OperationLastUpdated_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OperationLastUpdated;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OperationStartedTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OperationStartedTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OperationType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OperationType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OperationValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OperationValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Status_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Status;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabInsightsModels.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInsightsInsightsGetOperationStatusResponse>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusResponse_Statics::NewProp_Message_MetaData[] = {
		{ "Category", "PlayFab | Insights | Analytics Models" },
		{ "Comment", "/** Optional message related to the operation details. */" },
		{ "ModuleRelativePath", "Classes/PlayFabInsightsModels.h" },
		{ "ToolTip", "Optional message related to the operation details." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusResponse_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInsightsInsightsGetOperationStatusResponse, Message), METADATA_PARAMS(Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusResponse_Statics::NewProp_Message_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusResponse_Statics::NewProp_Message_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusResponse_Statics::NewProp_OperationCompletedTime_MetaData[] = {
		{ "Category", "PlayFab | Insights | Analytics Models" },
		{ "Comment", "/** Time the operation was completed. */" },
		{ "ModuleRelativePath", "Classes/PlayFabInsightsModels.h" },
		{ "ToolTip", "Time the operation was completed." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusResponse_Statics::NewProp_OperationCompletedTime = { "OperationCompletedTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInsightsInsightsGetOperationStatusResponse, OperationCompletedTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusResponse_Statics::NewProp_OperationCompletedTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusResponse_Statics::NewProp_OperationCompletedTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusResponse_Statics::NewProp_OperationId_MetaData[] = {
		{ "Category", "PlayFab | Insights | Analytics Models" },
		{ "Comment", "/** Id of the Insights operation. */" },
		{ "ModuleRelativePath", "Classes/PlayFabInsightsModels.h" },
		{ "ToolTip", "Id of the Insights operation." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusResponse_Statics::NewProp_OperationId = { "OperationId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInsightsInsightsGetOperationStatusResponse, OperationId), METADATA_PARAMS(Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusResponse_Statics::NewProp_OperationId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusResponse_Statics::NewProp_OperationId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusResponse_Statics::NewProp_OperationLastUpdated_MetaData[] = {
		{ "Category", "PlayFab | Insights | Analytics Models" },
		{ "Comment", "/** Time the operation status was last updated. */" },
		{ "ModuleRelativePath", "Classes/PlayFabInsightsModels.h" },
		{ "ToolTip", "Time the operation status was last updated." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusResponse_Statics::NewProp_OperationLastUpdated = { "OperationLastUpdated", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInsightsInsightsGetOperationStatusResponse, OperationLastUpdated), METADATA_PARAMS(Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusResponse_Statics::NewProp_OperationLastUpdated_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusResponse_Statics::NewProp_OperationLastUpdated_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusResponse_Statics::NewProp_OperationStartedTime_MetaData[] = {
		{ "Category", "PlayFab | Insights | Analytics Models" },
		{ "Comment", "/** Time the operation started. */" },
		{ "ModuleRelativePath", "Classes/PlayFabInsightsModels.h" },
		{ "ToolTip", "Time the operation started." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusResponse_Statics::NewProp_OperationStartedTime = { "OperationStartedTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInsightsInsightsGetOperationStatusResponse, OperationStartedTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusResponse_Statics::NewProp_OperationStartedTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusResponse_Statics::NewProp_OperationStartedTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusResponse_Statics::NewProp_OperationType_MetaData[] = {
		{ "Category", "PlayFab | Insights | Analytics Models" },
		{ "Comment", "/** The type of operation, SetPerformance or SetStorageRetention. */" },
		{ "ModuleRelativePath", "Classes/PlayFabInsightsModels.h" },
		{ "ToolTip", "The type of operation, SetPerformance or SetStorageRetention." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusResponse_Statics::NewProp_OperationType = { "OperationType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInsightsInsightsGetOperationStatusResponse, OperationType), METADATA_PARAMS(Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusResponse_Statics::NewProp_OperationType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusResponse_Statics::NewProp_OperationType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusResponse_Statics::NewProp_OperationValue_MetaData[] = {
		{ "Category", "PlayFab | Insights | Analytics Models" },
		{ "Comment", "/** The value requested for the operation. */" },
		{ "ModuleRelativePath", "Classes/PlayFabInsightsModels.h" },
		{ "ToolTip", "The value requested for the operation." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusResponse_Statics::NewProp_OperationValue = { "OperationValue", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInsightsInsightsGetOperationStatusResponse, OperationValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusResponse_Statics::NewProp_OperationValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusResponse_Statics::NewProp_OperationValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusResponse_Statics::NewProp_Status_MetaData[] = {
		{ "Category", "PlayFab | Insights | Analytics Models" },
		{ "Comment", "/** Current status of the operation. */" },
		{ "ModuleRelativePath", "Classes/PlayFabInsightsModels.h" },
		{ "ToolTip", "Current status of the operation." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusResponse_Statics::NewProp_Status = { "Status", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInsightsInsightsGetOperationStatusResponse, Status), METADATA_PARAMS(Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusResponse_Statics::NewProp_Status_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusResponse_Statics::NewProp_Status_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusResponse_Statics::NewProp_Message,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusResponse_Statics::NewProp_OperationCompletedTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusResponse_Statics::NewProp_OperationId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusResponse_Statics::NewProp_OperationLastUpdated,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusResponse_Statics::NewProp_OperationStartedTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusResponse_Statics::NewProp_OperationType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusResponse_Statics::NewProp_OperationValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusResponse_Statics::NewProp_Status,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"InsightsInsightsGetOperationStatusResponse",
		sizeof(FInsightsInsightsGetOperationStatusResponse),
		alignof(FInsightsInsightsGetOperationStatusResponse),
		Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusResponse()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusResponse_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("InsightsInsightsGetOperationStatusResponse"), sizeof(FInsightsInsightsGetOperationStatusResponse), Get_Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusResponse_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusResponse_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusResponse_Hash() { return 1617348936U; }

static_assert(std::is_polymorphic<FInsightsInsightsGetOperationStatusRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FInsightsInsightsGetOperationStatusRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FInsightsInsightsGetOperationStatusRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("InsightsInsightsGetOperationStatusRequest"), sizeof(FInsightsInsightsGetOperationStatusRequest), Get_Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FInsightsInsightsGetOperationStatusRequest>()
{
	return FInsightsInsightsGetOperationStatusRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FInsightsInsightsGetOperationStatusRequest(FInsightsInsightsGetOperationStatusRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("InsightsInsightsGetOperationStatusRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFInsightsInsightsGetOperationStatusRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFInsightsInsightsGetOperationStatusRequest()
	{
		UScriptStruct::DeferCppStructOps<FInsightsInsightsGetOperationStatusRequest>(FName(TEXT("InsightsInsightsGetOperationStatusRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFInsightsInsightsGetOperationStatusRequest;
	struct Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CustomTags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OperationId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OperationId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Returns the current status for the requested operation id. */" },
		{ "ModuleRelativePath", "Classes/PlayFabInsightsModels.h" },
		{ "ToolTip", "Returns the current status for the requested operation id." },
	};
#endif
	void* Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInsightsInsightsGetOperationStatusRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | Insights | Analytics Models" },
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
		{ "ModuleRelativePath", "Classes/PlayFabInsightsModels.h" },
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInsightsInsightsGetOperationStatusRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusRequest_Statics::NewProp_CustomTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusRequest_Statics::NewProp_OperationId_MetaData[] = {
		{ "Category", "PlayFab | Insights | Analytics Models" },
		{ "Comment", "/** Id of the Insights operation. */" },
		{ "ModuleRelativePath", "Classes/PlayFabInsightsModels.h" },
		{ "ToolTip", "Id of the Insights operation." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusRequest_Statics::NewProp_OperationId = { "OperationId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInsightsInsightsGetOperationStatusRequest, OperationId), METADATA_PARAMS(Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusRequest_Statics::NewProp_OperationId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusRequest_Statics::NewProp_OperationId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusRequest_Statics::NewProp_CustomTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusRequest_Statics::NewProp_OperationId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"InsightsInsightsGetOperationStatusRequest",
		sizeof(FInsightsInsightsGetOperationStatusRequest),
		alignof(FInsightsInsightsGetOperationStatusRequest),
		Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("InsightsInsightsGetOperationStatusRequest"), sizeof(FInsightsInsightsGetOperationStatusRequest), Get_Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusRequest_Hash() { return 1979812149U; }

static_assert(std::is_polymorphic<FInsightsInsightsGetLimitsResponse>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FInsightsInsightsGetLimitsResponse cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

class UScriptStruct* FInsightsInsightsGetLimitsResponse::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FInsightsInsightsGetLimitsResponse_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FInsightsInsightsGetLimitsResponse, Z_Construct_UPackage__Script_PlayFab(), TEXT("InsightsInsightsGetLimitsResponse"), sizeof(FInsightsInsightsGetLimitsResponse), Get_Z_Construct_UScriptStruct_FInsightsInsightsGetLimitsResponse_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FInsightsInsightsGetLimitsResponse>()
{
	return FInsightsInsightsGetLimitsResponse::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FInsightsInsightsGetLimitsResponse(FInsightsInsightsGetLimitsResponse::StaticStruct, TEXT("/Script/PlayFab"), TEXT("InsightsInsightsGetLimitsResponse"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFInsightsInsightsGetLimitsResponse
{
	FScriptStruct_PlayFab_StaticRegisterNativesFInsightsInsightsGetLimitsResponse()
	{
		UScriptStruct::DeferCppStructOps<FInsightsInsightsGetLimitsResponse>(FName(TEXT("InsightsInsightsGetLimitsResponse")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFInsightsInsightsGetLimitsResponse;
	struct Z_Construct_UScriptStruct_FInsightsInsightsGetLimitsResponse_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultPerformanceLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DefaultPerformanceLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultStorageRetentionDays_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DefaultStorageRetentionDays;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StorageMaxRetentionDays_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StorageMaxRetentionDays;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StorageMinRetentionDays_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StorageMinRetentionDays;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SubMeters_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubMeters_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SubMeters;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInsightsInsightsGetLimitsResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabInsightsModels.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInsightsInsightsGetLimitsResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInsightsInsightsGetLimitsResponse>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInsightsInsightsGetLimitsResponse_Statics::NewProp_DefaultPerformanceLevel_MetaData[] = {
		{ "Category", "PlayFab | Insights | Analytics Models" },
		{ "Comment", "/** Default Insights performance level. */" },
		{ "ModuleRelativePath", "Classes/PlayFabInsightsModels.h" },
		{ "ToolTip", "Default Insights performance level." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FInsightsInsightsGetLimitsResponse_Statics::NewProp_DefaultPerformanceLevel = { "DefaultPerformanceLevel", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInsightsInsightsGetLimitsResponse, DefaultPerformanceLevel), METADATA_PARAMS(Z_Construct_UScriptStruct_FInsightsInsightsGetLimitsResponse_Statics::NewProp_DefaultPerformanceLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInsightsInsightsGetLimitsResponse_Statics::NewProp_DefaultPerformanceLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInsightsInsightsGetLimitsResponse_Statics::NewProp_DefaultStorageRetentionDays_MetaData[] = {
		{ "Category", "PlayFab | Insights | Analytics Models" },
		{ "Comment", "/** Default Insights data storage retention days. */" },
		{ "ModuleRelativePath", "Classes/PlayFabInsightsModels.h" },
		{ "ToolTip", "Default Insights data storage retention days." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FInsightsInsightsGetLimitsResponse_Statics::NewProp_DefaultStorageRetentionDays = { "DefaultStorageRetentionDays", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInsightsInsightsGetLimitsResponse, DefaultStorageRetentionDays), METADATA_PARAMS(Z_Construct_UScriptStruct_FInsightsInsightsGetLimitsResponse_Statics::NewProp_DefaultStorageRetentionDays_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInsightsInsightsGetLimitsResponse_Statics::NewProp_DefaultStorageRetentionDays_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInsightsInsightsGetLimitsResponse_Statics::NewProp_StorageMaxRetentionDays_MetaData[] = {
		{ "Category", "PlayFab | Insights | Analytics Models" },
		{ "Comment", "/** Maximum allowed data storage retention days. */" },
		{ "ModuleRelativePath", "Classes/PlayFabInsightsModels.h" },
		{ "ToolTip", "Maximum allowed data storage retention days." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FInsightsInsightsGetLimitsResponse_Statics::NewProp_StorageMaxRetentionDays = { "StorageMaxRetentionDays", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInsightsInsightsGetLimitsResponse, StorageMaxRetentionDays), METADATA_PARAMS(Z_Construct_UScriptStruct_FInsightsInsightsGetLimitsResponse_Statics::NewProp_StorageMaxRetentionDays_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInsightsInsightsGetLimitsResponse_Statics::NewProp_StorageMaxRetentionDays_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInsightsInsightsGetLimitsResponse_Statics::NewProp_StorageMinRetentionDays_MetaData[] = {
		{ "Category", "PlayFab | Insights | Analytics Models" },
		{ "Comment", "/** Minimum allowed data storage retention days. */" },
		{ "ModuleRelativePath", "Classes/PlayFabInsightsModels.h" },
		{ "ToolTip", "Minimum allowed data storage retention days." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FInsightsInsightsGetLimitsResponse_Statics::NewProp_StorageMinRetentionDays = { "StorageMinRetentionDays", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInsightsInsightsGetLimitsResponse, StorageMinRetentionDays), METADATA_PARAMS(Z_Construct_UScriptStruct_FInsightsInsightsGetLimitsResponse_Statics::NewProp_StorageMinRetentionDays_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInsightsInsightsGetLimitsResponse_Statics::NewProp_StorageMinRetentionDays_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FInsightsInsightsGetLimitsResponse_Statics::NewProp_SubMeters_Inner = { "SubMeters", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInsightsInsightsGetLimitsResponse_Statics::NewProp_SubMeters_MetaData[] = {
		{ "Category", "PlayFab | Insights | Analytics Models" },
		{ "Comment", "/** List of Insights submeter limits for the allowed performance levels. */" },
		{ "ModuleRelativePath", "Classes/PlayFabInsightsModels.h" },
		{ "ToolTip", "List of Insights submeter limits for the allowed performance levels." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FInsightsInsightsGetLimitsResponse_Statics::NewProp_SubMeters = { "SubMeters", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInsightsInsightsGetLimitsResponse, SubMeters), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FInsightsInsightsGetLimitsResponse_Statics::NewProp_SubMeters_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInsightsInsightsGetLimitsResponse_Statics::NewProp_SubMeters_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInsightsInsightsGetLimitsResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInsightsInsightsGetLimitsResponse_Statics::NewProp_DefaultPerformanceLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInsightsInsightsGetLimitsResponse_Statics::NewProp_DefaultStorageRetentionDays,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInsightsInsightsGetLimitsResponse_Statics::NewProp_StorageMaxRetentionDays,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInsightsInsightsGetLimitsResponse_Statics::NewProp_StorageMinRetentionDays,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInsightsInsightsGetLimitsResponse_Statics::NewProp_SubMeters_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInsightsInsightsGetLimitsResponse_Statics::NewProp_SubMeters,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInsightsInsightsGetLimitsResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"InsightsInsightsGetLimitsResponse",
		sizeof(FInsightsInsightsGetLimitsResponse),
		alignof(FInsightsInsightsGetLimitsResponse),
		Z_Construct_UScriptStruct_FInsightsInsightsGetLimitsResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInsightsInsightsGetLimitsResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInsightsInsightsGetLimitsResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInsightsInsightsGetLimitsResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInsightsInsightsGetLimitsResponse()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FInsightsInsightsGetLimitsResponse_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("InsightsInsightsGetLimitsResponse"), sizeof(FInsightsInsightsGetLimitsResponse), Get_Z_Construct_UScriptStruct_FInsightsInsightsGetLimitsResponse_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FInsightsInsightsGetLimitsResponse_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FInsightsInsightsGetLimitsResponse_Hash() { return 3342425999U; }

static_assert(std::is_polymorphic<FInsightsInsightsGetDetailsResponse>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FInsightsInsightsGetDetailsResponse cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

class UScriptStruct* FInsightsInsightsGetDetailsResponse::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FInsightsInsightsGetDetailsResponse_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FInsightsInsightsGetDetailsResponse, Z_Construct_UPackage__Script_PlayFab(), TEXT("InsightsInsightsGetDetailsResponse"), sizeof(FInsightsInsightsGetDetailsResponse), Get_Z_Construct_UScriptStruct_FInsightsInsightsGetDetailsResponse_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FInsightsInsightsGetDetailsResponse>()
{
	return FInsightsInsightsGetDetailsResponse::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FInsightsInsightsGetDetailsResponse(FInsightsInsightsGetDetailsResponse::StaticStruct, TEXT("/Script/PlayFab"), TEXT("InsightsInsightsGetDetailsResponse"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFInsightsInsightsGetDetailsResponse
{
	FScriptStruct_PlayFab_StaticRegisterNativesFInsightsInsightsGetDetailsResponse()
	{
		UScriptStruct::DeferCppStructOps<FInsightsInsightsGetDetailsResponse>(FName(TEXT("InsightsInsightsGetDetailsResponse")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFInsightsInsightsGetDetailsResponse;
	struct Z_Construct_UScriptStruct_FInsightsInsightsGetDetailsResponse_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DataUsageMb_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DataUsageMb;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ErrorMessage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ErrorMessage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Limits_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Limits;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PendingOperations_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PendingOperations_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PendingOperations;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PerformanceLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PerformanceLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RetentionDays_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RetentionDays;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInsightsInsightsGetDetailsResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabInsightsModels.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInsightsInsightsGetDetailsResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInsightsInsightsGetDetailsResponse>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInsightsInsightsGetDetailsResponse_Statics::NewProp_DataUsageMb_MetaData[] = {
		{ "Category", "PlayFab | Insights | Analytics Models" },
		{ "Comment", "/** Amount of data (in MB) currently used by Insights. */" },
		{ "ModuleRelativePath", "Classes/PlayFabInsightsModels.h" },
		{ "ToolTip", "Amount of data (in MB) currently used by Insights." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FInsightsInsightsGetDetailsResponse_Statics::NewProp_DataUsageMb = { "DataUsageMb", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInsightsInsightsGetDetailsResponse, DataUsageMb), METADATA_PARAMS(Z_Construct_UScriptStruct_FInsightsInsightsGetDetailsResponse_Statics::NewProp_DataUsageMb_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInsightsInsightsGetDetailsResponse_Statics::NewProp_DataUsageMb_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInsightsInsightsGetDetailsResponse_Statics::NewProp_ErrorMessage_MetaData[] = {
		{ "Category", "PlayFab | Insights | Analytics Models" },
		{ "Comment", "/** Details of any error that occurred while retrieving Insights details. */" },
		{ "ModuleRelativePath", "Classes/PlayFabInsightsModels.h" },
		{ "ToolTip", "Details of any error that occurred while retrieving Insights details." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInsightsInsightsGetDetailsResponse_Statics::NewProp_ErrorMessage = { "ErrorMessage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInsightsInsightsGetDetailsResponse, ErrorMessage), METADATA_PARAMS(Z_Construct_UScriptStruct_FInsightsInsightsGetDetailsResponse_Statics::NewProp_ErrorMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInsightsInsightsGetDetailsResponse_Statics::NewProp_ErrorMessage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInsightsInsightsGetDetailsResponse_Statics::NewProp_Limits_MetaData[] = {
		{ "Category", "PlayFab | Insights | Analytics Models" },
		{ "Comment", "/** Allowed range of values for performance level and data storage retention. */" },
		{ "ModuleRelativePath", "Classes/PlayFabInsightsModels.h" },
		{ "ToolTip", "Allowed range of values for performance level and data storage retention." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FInsightsInsightsGetDetailsResponse_Statics::NewProp_Limits = { "Limits", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInsightsInsightsGetDetailsResponse, Limits), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FInsightsInsightsGetDetailsResponse_Statics::NewProp_Limits_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInsightsInsightsGetDetailsResponse_Statics::NewProp_Limits_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FInsightsInsightsGetDetailsResponse_Statics::NewProp_PendingOperations_Inner = { "PendingOperations", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInsightsInsightsGetDetailsResponse_Statics::NewProp_PendingOperations_MetaData[] = {
		{ "Category", "PlayFab | Insights | Analytics Models" },
		{ "Comment", "/** List of pending Insights operations for the title. */" },
		{ "ModuleRelativePath", "Classes/PlayFabInsightsModels.h" },
		{ "ToolTip", "List of pending Insights operations for the title." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FInsightsInsightsGetDetailsResponse_Statics::NewProp_PendingOperations = { "PendingOperations", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInsightsInsightsGetDetailsResponse, PendingOperations), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FInsightsInsightsGetDetailsResponse_Statics::NewProp_PendingOperations_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInsightsInsightsGetDetailsResponse_Statics::NewProp_PendingOperations_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInsightsInsightsGetDetailsResponse_Statics::NewProp_PerformanceLevel_MetaData[] = {
		{ "Category", "PlayFab | Insights | Analytics Models" },
		{ "Comment", "/** Current Insights performance level setting. */" },
		{ "ModuleRelativePath", "Classes/PlayFabInsightsModels.h" },
		{ "ToolTip", "Current Insights performance level setting." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FInsightsInsightsGetDetailsResponse_Statics::NewProp_PerformanceLevel = { "PerformanceLevel", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInsightsInsightsGetDetailsResponse, PerformanceLevel), METADATA_PARAMS(Z_Construct_UScriptStruct_FInsightsInsightsGetDetailsResponse_Statics::NewProp_PerformanceLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInsightsInsightsGetDetailsResponse_Statics::NewProp_PerformanceLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInsightsInsightsGetDetailsResponse_Statics::NewProp_RetentionDays_MetaData[] = {
		{ "Category", "PlayFab | Insights | Analytics Models" },
		{ "Comment", "/** Current Insights data storage retention value in days. */" },
		{ "ModuleRelativePath", "Classes/PlayFabInsightsModels.h" },
		{ "ToolTip", "Current Insights data storage retention value in days." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FInsightsInsightsGetDetailsResponse_Statics::NewProp_RetentionDays = { "RetentionDays", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInsightsInsightsGetDetailsResponse, RetentionDays), METADATA_PARAMS(Z_Construct_UScriptStruct_FInsightsInsightsGetDetailsResponse_Statics::NewProp_RetentionDays_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInsightsInsightsGetDetailsResponse_Statics::NewProp_RetentionDays_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInsightsInsightsGetDetailsResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInsightsInsightsGetDetailsResponse_Statics::NewProp_DataUsageMb,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInsightsInsightsGetDetailsResponse_Statics::NewProp_ErrorMessage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInsightsInsightsGetDetailsResponse_Statics::NewProp_Limits,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInsightsInsightsGetDetailsResponse_Statics::NewProp_PendingOperations_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInsightsInsightsGetDetailsResponse_Statics::NewProp_PendingOperations,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInsightsInsightsGetDetailsResponse_Statics::NewProp_PerformanceLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInsightsInsightsGetDetailsResponse_Statics::NewProp_RetentionDays,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInsightsInsightsGetDetailsResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"InsightsInsightsGetDetailsResponse",
		sizeof(FInsightsInsightsGetDetailsResponse),
		alignof(FInsightsInsightsGetDetailsResponse),
		Z_Construct_UScriptStruct_FInsightsInsightsGetDetailsResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInsightsInsightsGetDetailsResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInsightsInsightsGetDetailsResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInsightsInsightsGetDetailsResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInsightsInsightsGetDetailsResponse()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FInsightsInsightsGetDetailsResponse_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("InsightsInsightsGetDetailsResponse"), sizeof(FInsightsInsightsGetDetailsResponse), Get_Z_Construct_UScriptStruct_FInsightsInsightsGetDetailsResponse_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FInsightsInsightsGetDetailsResponse_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FInsightsInsightsGetDetailsResponse_Hash() { return 1147267498U; }

static_assert(std::is_polymorphic<FInsightsInsightsEmptyRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FInsightsInsightsEmptyRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FInsightsInsightsEmptyRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FInsightsInsightsEmptyRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FInsightsInsightsEmptyRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("InsightsInsightsEmptyRequest"), sizeof(FInsightsInsightsEmptyRequest), Get_Z_Construct_UScriptStruct_FInsightsInsightsEmptyRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FInsightsInsightsEmptyRequest>()
{
	return FInsightsInsightsEmptyRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FInsightsInsightsEmptyRequest(FInsightsInsightsEmptyRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("InsightsInsightsEmptyRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFInsightsInsightsEmptyRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFInsightsInsightsEmptyRequest()
	{
		UScriptStruct::DeferCppStructOps<FInsightsInsightsEmptyRequest>(FName(TEXT("InsightsInsightsEmptyRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFInsightsInsightsEmptyRequest;
	struct Z_Construct_UScriptStruct_FInsightsInsightsEmptyRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CustomTags;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInsightsInsightsEmptyRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "///////////////////////////////////////////////////////\n// Analytics\n//////////////////////////////////////////////////////\n" },
		{ "ModuleRelativePath", "Classes/PlayFabInsightsModels.h" },
		{ "ToolTip", "/\n Analytics" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInsightsInsightsEmptyRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInsightsInsightsEmptyRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInsightsInsightsEmptyRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | Insights | Analytics Models" },
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
		{ "ModuleRelativePath", "Classes/PlayFabInsightsModels.h" },
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FInsightsInsightsEmptyRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInsightsInsightsEmptyRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FInsightsInsightsEmptyRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInsightsInsightsEmptyRequest_Statics::NewProp_CustomTags_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInsightsInsightsEmptyRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInsightsInsightsEmptyRequest_Statics::NewProp_CustomTags,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInsightsInsightsEmptyRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"InsightsInsightsEmptyRequest",
		sizeof(FInsightsInsightsEmptyRequest),
		alignof(FInsightsInsightsEmptyRequest),
		Z_Construct_UScriptStruct_FInsightsInsightsEmptyRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInsightsInsightsEmptyRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInsightsInsightsEmptyRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInsightsInsightsEmptyRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInsightsInsightsEmptyRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FInsightsInsightsEmptyRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("InsightsInsightsEmptyRequest"), sizeof(FInsightsInsightsEmptyRequest), Get_Z_Construct_UScriptStruct_FInsightsInsightsEmptyRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FInsightsInsightsEmptyRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FInsightsInsightsEmptyRequest_Hash() { return 3264473881U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
