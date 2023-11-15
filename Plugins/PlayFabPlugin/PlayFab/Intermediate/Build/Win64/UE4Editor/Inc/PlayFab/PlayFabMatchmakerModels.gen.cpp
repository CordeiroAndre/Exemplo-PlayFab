// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Classes/PlayFabMatchmakerModels.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayFabMatchmakerModels() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FMatchmakerUserInfoResponse();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabResultCommon();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FMatchmakerUserInfoRequest();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabRequestCommon();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FMatchmakerPlayerLeftResponse();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FMatchmakerPlayerLeftRequest();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FMatchmakerPlayerJoinedResponse();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FMatchmakerPlayerJoinedRequest();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FMatchmakerAuthUserResponse();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FMatchmakerAuthUserRequest();
// End Cross Module References

static_assert(std::is_polymorphic<FMatchmakerUserInfoResponse>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FMatchmakerUserInfoResponse cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

class UScriptStruct* FMatchmakerUserInfoResponse::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FMatchmakerUserInfoResponse_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMatchmakerUserInfoResponse, Z_Construct_UPackage__Script_PlayFab(), TEXT("MatchmakerUserInfoResponse"), sizeof(FMatchmakerUserInfoResponse), Get_Z_Construct_UScriptStruct_FMatchmakerUserInfoResponse_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FMatchmakerUserInfoResponse>()
{
	return FMatchmakerUserInfoResponse::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMatchmakerUserInfoResponse(FMatchmakerUserInfoResponse::StaticStruct, TEXT("/Script/PlayFab"), TEXT("MatchmakerUserInfoResponse"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFMatchmakerUserInfoResponse
{
	FScriptStruct_PlayFab_StaticRegisterNativesFMatchmakerUserInfoResponse()
	{
		UScriptStruct::DeferCppStructOps<FMatchmakerUserInfoResponse>(FName(TEXT("MatchmakerUserInfoResponse")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFMatchmakerUserInfoResponse;
	struct Z_Construct_UScriptStruct_FMatchmakerUserInfoResponse_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Inventory_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Inventory_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Inventory;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsDeveloper_MetaData[];
#endif
		static void NewProp_IsDeveloper_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsDeveloper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayFabId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PlayFabId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteamId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SteamId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TitleDisplayName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TitleDisplayName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Username_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Username;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VirtualCurrency_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VirtualCurrency;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VirtualCurrencyRechargeTimes_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VirtualCurrencyRechargeTimes;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchmakerUserInfoResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabMatchmakerModels.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMatchmakerUserInfoResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMatchmakerUserInfoResponse>();
	}
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMatchmakerUserInfoResponse_Statics::NewProp_Inventory_Inner = { "Inventory", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchmakerUserInfoResponse_Statics::NewProp_Inventory_MetaData[] = {
		{ "Category", "PlayFab | Matchmaker | Matchmaking Models" },
		{ "Comment", "/** Array of inventory items in the user's current inventory. */" },
		{ "ModuleRelativePath", "Classes/PlayFabMatchmakerModels.h" },
		{ "ToolTip", "Array of inventory items in the user's current inventory." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMatchmakerUserInfoResponse_Statics::NewProp_Inventory = { "Inventory", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMatchmakerUserInfoResponse, Inventory), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchmakerUserInfoResponse_Statics::NewProp_Inventory_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchmakerUserInfoResponse_Statics::NewProp_Inventory_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchmakerUserInfoResponse_Statics::NewProp_IsDeveloper_MetaData[] = {
		{ "Category", "PlayFab | Matchmaker | Matchmaking Models" },
		{ "Comment", "/** Boolean indicating whether the user is a developer. */" },
		{ "ModuleRelativePath", "Classes/PlayFabMatchmakerModels.h" },
		{ "ToolTip", "Boolean indicating whether the user is a developer." },
	};
#endif
	void Z_Construct_UScriptStruct_FMatchmakerUserInfoResponse_Statics::NewProp_IsDeveloper_SetBit(void* Obj)
	{
		((FMatchmakerUserInfoResponse*)Obj)->IsDeveloper = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMatchmakerUserInfoResponse_Statics::NewProp_IsDeveloper = { "IsDeveloper", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FMatchmakerUserInfoResponse), &Z_Construct_UScriptStruct_FMatchmakerUserInfoResponse_Statics::NewProp_IsDeveloper_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchmakerUserInfoResponse_Statics::NewProp_IsDeveloper_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchmakerUserInfoResponse_Statics::NewProp_IsDeveloper_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchmakerUserInfoResponse_Statics::NewProp_PlayFabId_MetaData[] = {
		{ "Category", "PlayFab | Matchmaker | Matchmaking Models" },
		{ "Comment", "/** PlayFab unique identifier of the user whose information was requested. */" },
		{ "ModuleRelativePath", "Classes/PlayFabMatchmakerModels.h" },
		{ "ToolTip", "PlayFab unique identifier of the user whose information was requested." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMatchmakerUserInfoResponse_Statics::NewProp_PlayFabId = { "PlayFabId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMatchmakerUserInfoResponse, PlayFabId), METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchmakerUserInfoResponse_Statics::NewProp_PlayFabId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchmakerUserInfoResponse_Statics::NewProp_PlayFabId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchmakerUserInfoResponse_Statics::NewProp_SteamId_MetaData[] = {
		{ "Category", "PlayFab | Matchmaker | Matchmaking Models" },
		{ "Comment", "/** Steam unique identifier, if the user has an associated Steam account. */" },
		{ "ModuleRelativePath", "Classes/PlayFabMatchmakerModels.h" },
		{ "ToolTip", "Steam unique identifier, if the user has an associated Steam account." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMatchmakerUserInfoResponse_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMatchmakerUserInfoResponse, SteamId), METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchmakerUserInfoResponse_Statics::NewProp_SteamId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchmakerUserInfoResponse_Statics::NewProp_SteamId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchmakerUserInfoResponse_Statics::NewProp_TitleDisplayName_MetaData[] = {
		{ "Category", "PlayFab | Matchmaker | Matchmaking Models" },
		{ "Comment", "/** Title specific display name, if set. */" },
		{ "ModuleRelativePath", "Classes/PlayFabMatchmakerModels.h" },
		{ "ToolTip", "Title specific display name, if set." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMatchmakerUserInfoResponse_Statics::NewProp_TitleDisplayName = { "TitleDisplayName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMatchmakerUserInfoResponse, TitleDisplayName), METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchmakerUserInfoResponse_Statics::NewProp_TitleDisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchmakerUserInfoResponse_Statics::NewProp_TitleDisplayName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchmakerUserInfoResponse_Statics::NewProp_Username_MetaData[] = {
		{ "Category", "PlayFab | Matchmaker | Matchmaking Models" },
		{ "Comment", "/** PlayFab unique user name. */" },
		{ "ModuleRelativePath", "Classes/PlayFabMatchmakerModels.h" },
		{ "ToolTip", "PlayFab unique user name." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMatchmakerUserInfoResponse_Statics::NewProp_Username = { "Username", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMatchmakerUserInfoResponse, Username), METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchmakerUserInfoResponse_Statics::NewProp_Username_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchmakerUserInfoResponse_Statics::NewProp_Username_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchmakerUserInfoResponse_Statics::NewProp_VirtualCurrency_MetaData[] = {
		{ "Category", "PlayFab | Matchmaker | Matchmaking Models" },
		{ "Comment", "/** Array of virtual currency balance(s) belonging to the user. */" },
		{ "ModuleRelativePath", "Classes/PlayFabMatchmakerModels.h" },
		{ "ToolTip", "Array of virtual currency balance(s) belonging to the user." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMatchmakerUserInfoResponse_Statics::NewProp_VirtualCurrency = { "VirtualCurrency", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMatchmakerUserInfoResponse, VirtualCurrency), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchmakerUserInfoResponse_Statics::NewProp_VirtualCurrency_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchmakerUserInfoResponse_Statics::NewProp_VirtualCurrency_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchmakerUserInfoResponse_Statics::NewProp_VirtualCurrencyRechargeTimes_MetaData[] = {
		{ "Category", "PlayFab | Matchmaker | Matchmaking Models" },
		{ "Comment", "/** Array of remaining times and timestamps for virtual currencies. */" },
		{ "ModuleRelativePath", "Classes/PlayFabMatchmakerModels.h" },
		{ "ToolTip", "Array of remaining times and timestamps for virtual currencies." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMatchmakerUserInfoResponse_Statics::NewProp_VirtualCurrencyRechargeTimes = { "VirtualCurrencyRechargeTimes", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMatchmakerUserInfoResponse, VirtualCurrencyRechargeTimes), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchmakerUserInfoResponse_Statics::NewProp_VirtualCurrencyRechargeTimes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchmakerUserInfoResponse_Statics::NewProp_VirtualCurrencyRechargeTimes_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMatchmakerUserInfoResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchmakerUserInfoResponse_Statics::NewProp_Inventory_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchmakerUserInfoResponse_Statics::NewProp_Inventory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchmakerUserInfoResponse_Statics::NewProp_IsDeveloper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchmakerUserInfoResponse_Statics::NewProp_PlayFabId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchmakerUserInfoResponse_Statics::NewProp_SteamId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchmakerUserInfoResponse_Statics::NewProp_TitleDisplayName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchmakerUserInfoResponse_Statics::NewProp_Username,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchmakerUserInfoResponse_Statics::NewProp_VirtualCurrency,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchmakerUserInfoResponse_Statics::NewProp_VirtualCurrencyRechargeTimes,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMatchmakerUserInfoResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"MatchmakerUserInfoResponse",
		sizeof(FMatchmakerUserInfoResponse),
		alignof(FMatchmakerUserInfoResponse),
		Z_Construct_UScriptStruct_FMatchmakerUserInfoResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchmakerUserInfoResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchmakerUserInfoResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchmakerUserInfoResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMatchmakerUserInfoResponse()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMatchmakerUserInfoResponse_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MatchmakerUserInfoResponse"), sizeof(FMatchmakerUserInfoResponse), Get_Z_Construct_UScriptStruct_FMatchmakerUserInfoResponse_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMatchmakerUserInfoResponse_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMatchmakerUserInfoResponse_Hash() { return 1137572566U; }

static_assert(std::is_polymorphic<FMatchmakerUserInfoRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FMatchmakerUserInfoRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FMatchmakerUserInfoRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FMatchmakerUserInfoRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMatchmakerUserInfoRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("MatchmakerUserInfoRequest"), sizeof(FMatchmakerUserInfoRequest), Get_Z_Construct_UScriptStruct_FMatchmakerUserInfoRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FMatchmakerUserInfoRequest>()
{
	return FMatchmakerUserInfoRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMatchmakerUserInfoRequest(FMatchmakerUserInfoRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("MatchmakerUserInfoRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFMatchmakerUserInfoRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFMatchmakerUserInfoRequest()
	{
		UScriptStruct::DeferCppStructOps<FMatchmakerUserInfoRequest>(FName(TEXT("MatchmakerUserInfoRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFMatchmakerUserInfoRequest;
	struct Z_Construct_UScriptStruct_FMatchmakerUserInfoRequest_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinCatalogVersion_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MinCatalogVersion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayFabId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PlayFabId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchmakerUserInfoRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabMatchmakerModels.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMatchmakerUserInfoRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMatchmakerUserInfoRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchmakerUserInfoRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | Matchmaker | Matchmaking Models" },
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
		{ "ModuleRelativePath", "Classes/PlayFabMatchmakerModels.h" },
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMatchmakerUserInfoRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMatchmakerUserInfoRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchmakerUserInfoRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchmakerUserInfoRequest_Statics::NewProp_CustomTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchmakerUserInfoRequest_Statics::NewProp_MinCatalogVersion_MetaData[] = {
		{ "Category", "PlayFab | Matchmaker | Matchmaking Models" },
		{ "Comment", "/**\n     * Minimum catalog version for which data is requested (filters the results to only contain inventory items which have a\n     * catalog version of this or higher).\n     */" },
		{ "ModuleRelativePath", "Classes/PlayFabMatchmakerModels.h" },
		{ "ToolTip", "Minimum catalog version for which data is requested (filters the results to only contain inventory items which have a\ncatalog version of this or higher)." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMatchmakerUserInfoRequest_Statics::NewProp_MinCatalogVersion = { "MinCatalogVersion", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMatchmakerUserInfoRequest, MinCatalogVersion), METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchmakerUserInfoRequest_Statics::NewProp_MinCatalogVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchmakerUserInfoRequest_Statics::NewProp_MinCatalogVersion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchmakerUserInfoRequest_Statics::NewProp_PlayFabId_MetaData[] = {
		{ "Category", "PlayFab | Matchmaker | Matchmaking Models" },
		{ "Comment", "/** PlayFab unique identifier of the user whose information is being requested. */" },
		{ "ModuleRelativePath", "Classes/PlayFabMatchmakerModels.h" },
		{ "ToolTip", "PlayFab unique identifier of the user whose information is being requested." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMatchmakerUserInfoRequest_Statics::NewProp_PlayFabId = { "PlayFabId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMatchmakerUserInfoRequest, PlayFabId), METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchmakerUserInfoRequest_Statics::NewProp_PlayFabId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchmakerUserInfoRequest_Statics::NewProp_PlayFabId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMatchmakerUserInfoRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchmakerUserInfoRequest_Statics::NewProp_CustomTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchmakerUserInfoRequest_Statics::NewProp_MinCatalogVersion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchmakerUserInfoRequest_Statics::NewProp_PlayFabId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMatchmakerUserInfoRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"MatchmakerUserInfoRequest",
		sizeof(FMatchmakerUserInfoRequest),
		alignof(FMatchmakerUserInfoRequest),
		Z_Construct_UScriptStruct_FMatchmakerUserInfoRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchmakerUserInfoRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchmakerUserInfoRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchmakerUserInfoRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMatchmakerUserInfoRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMatchmakerUserInfoRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MatchmakerUserInfoRequest"), sizeof(FMatchmakerUserInfoRequest), Get_Z_Construct_UScriptStruct_FMatchmakerUserInfoRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMatchmakerUserInfoRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMatchmakerUserInfoRequest_Hash() { return 54273554U; }

static_assert(std::is_polymorphic<FMatchmakerPlayerLeftResponse>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FMatchmakerPlayerLeftResponse cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

class UScriptStruct* FMatchmakerPlayerLeftResponse::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FMatchmakerPlayerLeftResponse_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMatchmakerPlayerLeftResponse, Z_Construct_UPackage__Script_PlayFab(), TEXT("MatchmakerPlayerLeftResponse"), sizeof(FMatchmakerPlayerLeftResponse), Get_Z_Construct_UScriptStruct_FMatchmakerPlayerLeftResponse_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FMatchmakerPlayerLeftResponse>()
{
	return FMatchmakerPlayerLeftResponse::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMatchmakerPlayerLeftResponse(FMatchmakerPlayerLeftResponse::StaticStruct, TEXT("/Script/PlayFab"), TEXT("MatchmakerPlayerLeftResponse"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFMatchmakerPlayerLeftResponse
{
	FScriptStruct_PlayFab_StaticRegisterNativesFMatchmakerPlayerLeftResponse()
	{
		UScriptStruct::DeferCppStructOps<FMatchmakerPlayerLeftResponse>(FName(TEXT("MatchmakerPlayerLeftResponse")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFMatchmakerPlayerLeftResponse;
	struct Z_Construct_UScriptStruct_FMatchmakerPlayerLeftResponse_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchmakerPlayerLeftResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabMatchmakerModels.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMatchmakerPlayerLeftResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMatchmakerPlayerLeftResponse>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMatchmakerPlayerLeftResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"MatchmakerPlayerLeftResponse",
		sizeof(FMatchmakerPlayerLeftResponse),
		alignof(FMatchmakerPlayerLeftResponse),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchmakerPlayerLeftResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchmakerPlayerLeftResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMatchmakerPlayerLeftResponse()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMatchmakerPlayerLeftResponse_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MatchmakerPlayerLeftResponse"), sizeof(FMatchmakerPlayerLeftResponse), Get_Z_Construct_UScriptStruct_FMatchmakerPlayerLeftResponse_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMatchmakerPlayerLeftResponse_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMatchmakerPlayerLeftResponse_Hash() { return 1743731787U; }

static_assert(std::is_polymorphic<FMatchmakerPlayerLeftRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FMatchmakerPlayerLeftRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FMatchmakerPlayerLeftRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FMatchmakerPlayerLeftRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMatchmakerPlayerLeftRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("MatchmakerPlayerLeftRequest"), sizeof(FMatchmakerPlayerLeftRequest), Get_Z_Construct_UScriptStruct_FMatchmakerPlayerLeftRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FMatchmakerPlayerLeftRequest>()
{
	return FMatchmakerPlayerLeftRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMatchmakerPlayerLeftRequest(FMatchmakerPlayerLeftRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("MatchmakerPlayerLeftRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFMatchmakerPlayerLeftRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFMatchmakerPlayerLeftRequest()
	{
		UScriptStruct::DeferCppStructOps<FMatchmakerPlayerLeftRequest>(FName(TEXT("MatchmakerPlayerLeftRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFMatchmakerPlayerLeftRequest;
	struct Z_Construct_UScriptStruct_FMatchmakerPlayerLeftRequest_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LobbyId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LobbyId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayFabId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PlayFabId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchmakerPlayerLeftRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabMatchmakerModels.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMatchmakerPlayerLeftRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMatchmakerPlayerLeftRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchmakerPlayerLeftRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | Matchmaker | Matchmaking Models" },
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
		{ "ModuleRelativePath", "Classes/PlayFabMatchmakerModels.h" },
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMatchmakerPlayerLeftRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMatchmakerPlayerLeftRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchmakerPlayerLeftRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchmakerPlayerLeftRequest_Statics::NewProp_CustomTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchmakerPlayerLeftRequest_Statics::NewProp_LobbyId_MetaData[] = {
		{ "Category", "PlayFab | Matchmaker | Matchmaking Models" },
		{ "Comment", "/**\n     * Unique identifier of the Game Server Instance the user is leaving. This must be a Game Server Instance started with the\n     * Matchmaker/StartGame API.\n     */" },
		{ "ModuleRelativePath", "Classes/PlayFabMatchmakerModels.h" },
		{ "ToolTip", "Unique identifier of the Game Server Instance the user is leaving. This must be a Game Server Instance started with the\nMatchmaker/StartGame API." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMatchmakerPlayerLeftRequest_Statics::NewProp_LobbyId = { "LobbyId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMatchmakerPlayerLeftRequest, LobbyId), METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchmakerPlayerLeftRequest_Statics::NewProp_LobbyId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchmakerPlayerLeftRequest_Statics::NewProp_LobbyId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchmakerPlayerLeftRequest_Statics::NewProp_PlayFabId_MetaData[] = {
		{ "Category", "PlayFab | Matchmaker | Matchmaking Models" },
		{ "Comment", "/** PlayFab unique identifier for the player leaving. */" },
		{ "ModuleRelativePath", "Classes/PlayFabMatchmakerModels.h" },
		{ "ToolTip", "PlayFab unique identifier for the player leaving." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMatchmakerPlayerLeftRequest_Statics::NewProp_PlayFabId = { "PlayFabId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMatchmakerPlayerLeftRequest, PlayFabId), METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchmakerPlayerLeftRequest_Statics::NewProp_PlayFabId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchmakerPlayerLeftRequest_Statics::NewProp_PlayFabId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMatchmakerPlayerLeftRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchmakerPlayerLeftRequest_Statics::NewProp_CustomTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchmakerPlayerLeftRequest_Statics::NewProp_LobbyId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchmakerPlayerLeftRequest_Statics::NewProp_PlayFabId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMatchmakerPlayerLeftRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"MatchmakerPlayerLeftRequest",
		sizeof(FMatchmakerPlayerLeftRequest),
		alignof(FMatchmakerPlayerLeftRequest),
		Z_Construct_UScriptStruct_FMatchmakerPlayerLeftRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchmakerPlayerLeftRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchmakerPlayerLeftRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchmakerPlayerLeftRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMatchmakerPlayerLeftRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMatchmakerPlayerLeftRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MatchmakerPlayerLeftRequest"), sizeof(FMatchmakerPlayerLeftRequest), Get_Z_Construct_UScriptStruct_FMatchmakerPlayerLeftRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMatchmakerPlayerLeftRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMatchmakerPlayerLeftRequest_Hash() { return 4190847084U; }

static_assert(std::is_polymorphic<FMatchmakerPlayerJoinedResponse>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FMatchmakerPlayerJoinedResponse cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

class UScriptStruct* FMatchmakerPlayerJoinedResponse::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FMatchmakerPlayerJoinedResponse_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMatchmakerPlayerJoinedResponse, Z_Construct_UPackage__Script_PlayFab(), TEXT("MatchmakerPlayerJoinedResponse"), sizeof(FMatchmakerPlayerJoinedResponse), Get_Z_Construct_UScriptStruct_FMatchmakerPlayerJoinedResponse_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FMatchmakerPlayerJoinedResponse>()
{
	return FMatchmakerPlayerJoinedResponse::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMatchmakerPlayerJoinedResponse(FMatchmakerPlayerJoinedResponse::StaticStruct, TEXT("/Script/PlayFab"), TEXT("MatchmakerPlayerJoinedResponse"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFMatchmakerPlayerJoinedResponse
{
	FScriptStruct_PlayFab_StaticRegisterNativesFMatchmakerPlayerJoinedResponse()
	{
		UScriptStruct::DeferCppStructOps<FMatchmakerPlayerJoinedResponse>(FName(TEXT("MatchmakerPlayerJoinedResponse")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFMatchmakerPlayerJoinedResponse;
	struct Z_Construct_UScriptStruct_FMatchmakerPlayerJoinedResponse_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchmakerPlayerJoinedResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabMatchmakerModels.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMatchmakerPlayerJoinedResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMatchmakerPlayerJoinedResponse>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMatchmakerPlayerJoinedResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"MatchmakerPlayerJoinedResponse",
		sizeof(FMatchmakerPlayerJoinedResponse),
		alignof(FMatchmakerPlayerJoinedResponse),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchmakerPlayerJoinedResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchmakerPlayerJoinedResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMatchmakerPlayerJoinedResponse()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMatchmakerPlayerJoinedResponse_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MatchmakerPlayerJoinedResponse"), sizeof(FMatchmakerPlayerJoinedResponse), Get_Z_Construct_UScriptStruct_FMatchmakerPlayerJoinedResponse_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMatchmakerPlayerJoinedResponse_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMatchmakerPlayerJoinedResponse_Hash() { return 1208402470U; }

static_assert(std::is_polymorphic<FMatchmakerPlayerJoinedRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FMatchmakerPlayerJoinedRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FMatchmakerPlayerJoinedRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FMatchmakerPlayerJoinedRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMatchmakerPlayerJoinedRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("MatchmakerPlayerJoinedRequest"), sizeof(FMatchmakerPlayerJoinedRequest), Get_Z_Construct_UScriptStruct_FMatchmakerPlayerJoinedRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FMatchmakerPlayerJoinedRequest>()
{
	return FMatchmakerPlayerJoinedRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMatchmakerPlayerJoinedRequest(FMatchmakerPlayerJoinedRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("MatchmakerPlayerJoinedRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFMatchmakerPlayerJoinedRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFMatchmakerPlayerJoinedRequest()
	{
		UScriptStruct::DeferCppStructOps<FMatchmakerPlayerJoinedRequest>(FName(TEXT("MatchmakerPlayerJoinedRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFMatchmakerPlayerJoinedRequest;
	struct Z_Construct_UScriptStruct_FMatchmakerPlayerJoinedRequest_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LobbyId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LobbyId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayFabId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PlayFabId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchmakerPlayerJoinedRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabMatchmakerModels.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMatchmakerPlayerJoinedRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMatchmakerPlayerJoinedRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchmakerPlayerJoinedRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | Matchmaker | Matchmaking Models" },
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
		{ "ModuleRelativePath", "Classes/PlayFabMatchmakerModels.h" },
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMatchmakerPlayerJoinedRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMatchmakerPlayerJoinedRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchmakerPlayerJoinedRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchmakerPlayerJoinedRequest_Statics::NewProp_CustomTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchmakerPlayerJoinedRequest_Statics::NewProp_LobbyId_MetaData[] = {
		{ "Category", "PlayFab | Matchmaker | Matchmaking Models" },
		{ "Comment", "/**\n     * Unique identifier of the Game Server Instance the user is joining. This must be a Game Server Instance started with the\n     * Matchmaker/StartGame API.\n     */" },
		{ "ModuleRelativePath", "Classes/PlayFabMatchmakerModels.h" },
		{ "ToolTip", "Unique identifier of the Game Server Instance the user is joining. This must be a Game Server Instance started with the\nMatchmaker/StartGame API." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMatchmakerPlayerJoinedRequest_Statics::NewProp_LobbyId = { "LobbyId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMatchmakerPlayerJoinedRequest, LobbyId), METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchmakerPlayerJoinedRequest_Statics::NewProp_LobbyId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchmakerPlayerJoinedRequest_Statics::NewProp_LobbyId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchmakerPlayerJoinedRequest_Statics::NewProp_PlayFabId_MetaData[] = {
		{ "Category", "PlayFab | Matchmaker | Matchmaking Models" },
		{ "Comment", "/** PlayFab unique identifier for the player joining. */" },
		{ "ModuleRelativePath", "Classes/PlayFabMatchmakerModels.h" },
		{ "ToolTip", "PlayFab unique identifier for the player joining." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMatchmakerPlayerJoinedRequest_Statics::NewProp_PlayFabId = { "PlayFabId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMatchmakerPlayerJoinedRequest, PlayFabId), METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchmakerPlayerJoinedRequest_Statics::NewProp_PlayFabId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchmakerPlayerJoinedRequest_Statics::NewProp_PlayFabId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMatchmakerPlayerJoinedRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchmakerPlayerJoinedRequest_Statics::NewProp_CustomTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchmakerPlayerJoinedRequest_Statics::NewProp_LobbyId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchmakerPlayerJoinedRequest_Statics::NewProp_PlayFabId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMatchmakerPlayerJoinedRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"MatchmakerPlayerJoinedRequest",
		sizeof(FMatchmakerPlayerJoinedRequest),
		alignof(FMatchmakerPlayerJoinedRequest),
		Z_Construct_UScriptStruct_FMatchmakerPlayerJoinedRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchmakerPlayerJoinedRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchmakerPlayerJoinedRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchmakerPlayerJoinedRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMatchmakerPlayerJoinedRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMatchmakerPlayerJoinedRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MatchmakerPlayerJoinedRequest"), sizeof(FMatchmakerPlayerJoinedRequest), Get_Z_Construct_UScriptStruct_FMatchmakerPlayerJoinedRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMatchmakerPlayerJoinedRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMatchmakerPlayerJoinedRequest_Hash() { return 2639898005U; }

static_assert(std::is_polymorphic<FMatchmakerAuthUserResponse>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FMatchmakerAuthUserResponse cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

class UScriptStruct* FMatchmakerAuthUserResponse::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FMatchmakerAuthUserResponse_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMatchmakerAuthUserResponse, Z_Construct_UPackage__Script_PlayFab(), TEXT("MatchmakerAuthUserResponse"), sizeof(FMatchmakerAuthUserResponse), Get_Z_Construct_UScriptStruct_FMatchmakerAuthUserResponse_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FMatchmakerAuthUserResponse>()
{
	return FMatchmakerAuthUserResponse::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMatchmakerAuthUserResponse(FMatchmakerAuthUserResponse::StaticStruct, TEXT("/Script/PlayFab"), TEXT("MatchmakerAuthUserResponse"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFMatchmakerAuthUserResponse
{
	FScriptStruct_PlayFab_StaticRegisterNativesFMatchmakerAuthUserResponse()
	{
		UScriptStruct::DeferCppStructOps<FMatchmakerAuthUserResponse>(FName(TEXT("MatchmakerAuthUserResponse")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFMatchmakerAuthUserResponse;
	struct Z_Construct_UScriptStruct_FMatchmakerAuthUserResponse_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Authorized_MetaData[];
#endif
		static void NewProp_Authorized_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Authorized;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayFabId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PlayFabId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchmakerAuthUserResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabMatchmakerModels.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMatchmakerAuthUserResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMatchmakerAuthUserResponse>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchmakerAuthUserResponse_Statics::NewProp_Authorized_MetaData[] = {
		{ "Category", "PlayFab | Matchmaker | Matchmaking Models" },
		{ "Comment", "/** Boolean indicating if the user has been authorized to use the external match-making service. */" },
		{ "ModuleRelativePath", "Classes/PlayFabMatchmakerModels.h" },
		{ "ToolTip", "Boolean indicating if the user has been authorized to use the external match-making service." },
	};
#endif
	void Z_Construct_UScriptStruct_FMatchmakerAuthUserResponse_Statics::NewProp_Authorized_SetBit(void* Obj)
	{
		((FMatchmakerAuthUserResponse*)Obj)->Authorized = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMatchmakerAuthUserResponse_Statics::NewProp_Authorized = { "Authorized", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FMatchmakerAuthUserResponse), &Z_Construct_UScriptStruct_FMatchmakerAuthUserResponse_Statics::NewProp_Authorized_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchmakerAuthUserResponse_Statics::NewProp_Authorized_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchmakerAuthUserResponse_Statics::NewProp_Authorized_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchmakerAuthUserResponse_Statics::NewProp_PlayFabId_MetaData[] = {
		{ "Category", "PlayFab | Matchmaker | Matchmaking Models" },
		{ "Comment", "/** PlayFab unique identifier of the account that has been authorized. */" },
		{ "ModuleRelativePath", "Classes/PlayFabMatchmakerModels.h" },
		{ "ToolTip", "PlayFab unique identifier of the account that has been authorized." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMatchmakerAuthUserResponse_Statics::NewProp_PlayFabId = { "PlayFabId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMatchmakerAuthUserResponse, PlayFabId), METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchmakerAuthUserResponse_Statics::NewProp_PlayFabId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchmakerAuthUserResponse_Statics::NewProp_PlayFabId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMatchmakerAuthUserResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchmakerAuthUserResponse_Statics::NewProp_Authorized,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchmakerAuthUserResponse_Statics::NewProp_PlayFabId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMatchmakerAuthUserResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"MatchmakerAuthUserResponse",
		sizeof(FMatchmakerAuthUserResponse),
		alignof(FMatchmakerAuthUserResponse),
		Z_Construct_UScriptStruct_FMatchmakerAuthUserResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchmakerAuthUserResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchmakerAuthUserResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchmakerAuthUserResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMatchmakerAuthUserResponse()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMatchmakerAuthUserResponse_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MatchmakerAuthUserResponse"), sizeof(FMatchmakerAuthUserResponse), Get_Z_Construct_UScriptStruct_FMatchmakerAuthUserResponse_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMatchmakerAuthUserResponse_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMatchmakerAuthUserResponse_Hash() { return 2864073570U; }

static_assert(std::is_polymorphic<FMatchmakerAuthUserRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FMatchmakerAuthUserRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FMatchmakerAuthUserRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FMatchmakerAuthUserRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMatchmakerAuthUserRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("MatchmakerAuthUserRequest"), sizeof(FMatchmakerAuthUserRequest), Get_Z_Construct_UScriptStruct_FMatchmakerAuthUserRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FMatchmakerAuthUserRequest>()
{
	return FMatchmakerAuthUserRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMatchmakerAuthUserRequest(FMatchmakerAuthUserRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("MatchmakerAuthUserRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFMatchmakerAuthUserRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFMatchmakerAuthUserRequest()
	{
		UScriptStruct::DeferCppStructOps<FMatchmakerAuthUserRequest>(FName(TEXT("MatchmakerAuthUserRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFMatchmakerAuthUserRequest;
	struct Z_Construct_UScriptStruct_FMatchmakerAuthUserRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AuthorizationTicket_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AuthorizationTicket;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchmakerAuthUserRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * This API allows the external match-making service to confirm that the user has a valid Session Ticket for the title, in\n * order to securely enable match-making. The client passes the user's Session Ticket to the external match-making service,\n * which then passes the Session Ticket in as the AuthorizationTicket in this call.\n */" },
		{ "ModuleRelativePath", "Classes/PlayFabMatchmakerModels.h" },
		{ "ToolTip", "This API allows the external match-making service to confirm that the user has a valid Session Ticket for the title, in\norder to securely enable match-making. The client passes the user's Session Ticket to the external match-making service,\nwhich then passes the Session Ticket in as the AuthorizationTicket in this call." },
	};
#endif
	void* Z_Construct_UScriptStruct_FMatchmakerAuthUserRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMatchmakerAuthUserRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchmakerAuthUserRequest_Statics::NewProp_AuthorizationTicket_MetaData[] = {
		{ "Category", "PlayFab | Matchmaker | Matchmaking Models" },
		{ "Comment", "/** Session Ticket provided by the client. */" },
		{ "ModuleRelativePath", "Classes/PlayFabMatchmakerModels.h" },
		{ "ToolTip", "Session Ticket provided by the client." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMatchmakerAuthUserRequest_Statics::NewProp_AuthorizationTicket = { "AuthorizationTicket", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMatchmakerAuthUserRequest, AuthorizationTicket), METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchmakerAuthUserRequest_Statics::NewProp_AuthorizationTicket_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchmakerAuthUserRequest_Statics::NewProp_AuthorizationTicket_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMatchmakerAuthUserRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchmakerAuthUserRequest_Statics::NewProp_AuthorizationTicket,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMatchmakerAuthUserRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"MatchmakerAuthUserRequest",
		sizeof(FMatchmakerAuthUserRequest),
		alignof(FMatchmakerAuthUserRequest),
		Z_Construct_UScriptStruct_FMatchmakerAuthUserRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchmakerAuthUserRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchmakerAuthUserRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchmakerAuthUserRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMatchmakerAuthUserRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMatchmakerAuthUserRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MatchmakerAuthUserRequest"), sizeof(FMatchmakerAuthUserRequest), Get_Z_Construct_UScriptStruct_FMatchmakerAuthUserRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMatchmakerAuthUserRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMatchmakerAuthUserRequest_Hash() { return 1723473474U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
