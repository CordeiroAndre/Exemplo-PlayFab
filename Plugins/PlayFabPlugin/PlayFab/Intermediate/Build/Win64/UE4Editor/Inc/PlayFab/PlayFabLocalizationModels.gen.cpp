// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Classes/PlayFabLocalizationModels.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayFabLocalizationModels() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FLocalizationGetLanguageListResponse();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabResultCommon();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FLocalizationGetLanguageListRequest();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabRequestCommon();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FLocalizationGetLanguageListResponse>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FLocalizationGetLanguageListResponse cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

class UScriptStruct* FLocalizationGetLanguageListResponse::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FLocalizationGetLanguageListResponse_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLocalizationGetLanguageListResponse, Z_Construct_UPackage__Script_PlayFab(), TEXT("LocalizationGetLanguageListResponse"), sizeof(FLocalizationGetLanguageListResponse), Get_Z_Construct_UScriptStruct_FLocalizationGetLanguageListResponse_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FLocalizationGetLanguageListResponse>()
{
	return FLocalizationGetLanguageListResponse::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLocalizationGetLanguageListResponse(FLocalizationGetLanguageListResponse::StaticStruct, TEXT("/Script/PlayFab"), TEXT("LocalizationGetLanguageListResponse"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFLocalizationGetLanguageListResponse
{
	FScriptStruct_PlayFab_StaticRegisterNativesFLocalizationGetLanguageListResponse()
	{
		UScriptStruct::DeferCppStructOps<FLocalizationGetLanguageListResponse>(FName(TEXT("LocalizationGetLanguageListResponse")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFLocalizationGetLanguageListResponse;
	struct Z_Construct_UScriptStruct_FLocalizationGetLanguageListResponse_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LanguageList_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LanguageList;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLocalizationGetLanguageListResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabLocalizationModels.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLocalizationGetLanguageListResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLocalizationGetLanguageListResponse>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLocalizationGetLanguageListResponse_Statics::NewProp_LanguageList_MetaData[] = {
		{ "Category", "PlayFab | Localization | Localization Models" },
		{ "Comment", "/** The list of allowed languages, in BCP47 two-letter format */" },
		{ "ModuleRelativePath", "Classes/PlayFabLocalizationModels.h" },
		{ "ToolTip", "The list of allowed languages, in BCP47 two-letter format" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLocalizationGetLanguageListResponse_Statics::NewProp_LanguageList = { "LanguageList", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLocalizationGetLanguageListResponse, LanguageList), METADATA_PARAMS(Z_Construct_UScriptStruct_FLocalizationGetLanguageListResponse_Statics::NewProp_LanguageList_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLocalizationGetLanguageListResponse_Statics::NewProp_LanguageList_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLocalizationGetLanguageListResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLocalizationGetLanguageListResponse_Statics::NewProp_LanguageList,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLocalizationGetLanguageListResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"LocalizationGetLanguageListResponse",
		sizeof(FLocalizationGetLanguageListResponse),
		alignof(FLocalizationGetLanguageListResponse),
		Z_Construct_UScriptStruct_FLocalizationGetLanguageListResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLocalizationGetLanguageListResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLocalizationGetLanguageListResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLocalizationGetLanguageListResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLocalizationGetLanguageListResponse()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLocalizationGetLanguageListResponse_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LocalizationGetLanguageListResponse"), sizeof(FLocalizationGetLanguageListResponse), Get_Z_Construct_UScriptStruct_FLocalizationGetLanguageListResponse_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLocalizationGetLanguageListResponse_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLocalizationGetLanguageListResponse_Hash() { return 1882157257U; }

static_assert(std::is_polymorphic<FLocalizationGetLanguageListRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FLocalizationGetLanguageListRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FLocalizationGetLanguageListRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FLocalizationGetLanguageListRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLocalizationGetLanguageListRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("LocalizationGetLanguageListRequest"), sizeof(FLocalizationGetLanguageListRequest), Get_Z_Construct_UScriptStruct_FLocalizationGetLanguageListRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FLocalizationGetLanguageListRequest>()
{
	return FLocalizationGetLanguageListRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLocalizationGetLanguageListRequest(FLocalizationGetLanguageListRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("LocalizationGetLanguageListRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFLocalizationGetLanguageListRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFLocalizationGetLanguageListRequest()
	{
		UScriptStruct::DeferCppStructOps<FLocalizationGetLanguageListRequest>(FName(TEXT("LocalizationGetLanguageListRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFLocalizationGetLanguageListRequest;
	struct Z_Construct_UScriptStruct_FLocalizationGetLanguageListRequest_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLocalizationGetLanguageListRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "///////////////////////////////////////////////////////\n// Localization\n//////////////////////////////////////////////////////\n" },
		{ "ModuleRelativePath", "Classes/PlayFabLocalizationModels.h" },
		{ "ToolTip", "/\n Localization" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLocalizationGetLanguageListRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLocalizationGetLanguageListRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLocalizationGetLanguageListRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | Localization | Localization Models" },
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
		{ "ModuleRelativePath", "Classes/PlayFabLocalizationModels.h" },
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLocalizationGetLanguageListRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLocalizationGetLanguageListRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FLocalizationGetLanguageListRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLocalizationGetLanguageListRequest_Statics::NewProp_CustomTags_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLocalizationGetLanguageListRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLocalizationGetLanguageListRequest_Statics::NewProp_CustomTags,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLocalizationGetLanguageListRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"LocalizationGetLanguageListRequest",
		sizeof(FLocalizationGetLanguageListRequest),
		alignof(FLocalizationGetLanguageListRequest),
		Z_Construct_UScriptStruct_FLocalizationGetLanguageListRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLocalizationGetLanguageListRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLocalizationGetLanguageListRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLocalizationGetLanguageListRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLocalizationGetLanguageListRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLocalizationGetLanguageListRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LocalizationGetLanguageListRequest"), sizeof(FLocalizationGetLanguageListRequest), Get_Z_Construct_UScriptStruct_FLocalizationGetLanguageListRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLocalizationGetLanguageListRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLocalizationGetLanguageListRequest_Hash() { return 814531557U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
