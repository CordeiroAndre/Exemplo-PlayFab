// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Classes/PlayFabProfilesModels.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayFabProfilesModels() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FProfilesSetEntityProfilePolicyResponse();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabResultCommon();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FProfilesSetEntityProfilePolicyRequest();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabRequestCommon();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FProfilesSetProfileLanguageResponse();
	PLAYFAB_API UEnum* Z_Construct_UEnum_PlayFab_EOperationTypes();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FProfilesSetProfileLanguageRequest();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FProfilesSetGlobalPolicyResponse();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FProfilesSetGlobalPolicyRequest();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromXboxLiveIDsRequest();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromProviderIDsResponse();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FProfilesGetEntityProfilesResponse();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FProfilesGetEntityProfilesRequest();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FProfilesGetEntityProfileResponse();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FProfilesGetEntityProfileRequest();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FProfilesGetGlobalPolicyResponse();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FProfilesGetGlobalPolicyRequest();
// End Cross Module References

static_assert(std::is_polymorphic<FProfilesSetEntityProfilePolicyResponse>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FProfilesSetEntityProfilePolicyResponse cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

class UScriptStruct* FProfilesSetEntityProfilePolicyResponse::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FProfilesSetEntityProfilePolicyResponse_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FProfilesSetEntityProfilePolicyResponse, Z_Construct_UPackage__Script_PlayFab(), TEXT("ProfilesSetEntityProfilePolicyResponse"), sizeof(FProfilesSetEntityProfilePolicyResponse), Get_Z_Construct_UScriptStruct_FProfilesSetEntityProfilePolicyResponse_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FProfilesSetEntityProfilePolicyResponse>()
{
	return FProfilesSetEntityProfilePolicyResponse::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FProfilesSetEntityProfilePolicyResponse(FProfilesSetEntityProfilePolicyResponse::StaticStruct, TEXT("/Script/PlayFab"), TEXT("ProfilesSetEntityProfilePolicyResponse"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFProfilesSetEntityProfilePolicyResponse
{
	FScriptStruct_PlayFab_StaticRegisterNativesFProfilesSetEntityProfilePolicyResponse()
	{
		UScriptStruct::DeferCppStructOps<FProfilesSetEntityProfilePolicyResponse>(FName(TEXT("ProfilesSetEntityProfilePolicyResponse")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFProfilesSetEntityProfilePolicyResponse;
	struct Z_Construct_UScriptStruct_FProfilesSetEntityProfilePolicyResponse_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Permissions_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Permissions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Permissions;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfilesSetEntityProfilePolicyResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabProfilesModels.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FProfilesSetEntityProfilePolicyResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProfilesSetEntityProfilePolicyResponse>();
	}
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FProfilesSetEntityProfilePolicyResponse_Statics::NewProp_Permissions_Inner = { "Permissions", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfilesSetEntityProfilePolicyResponse_Statics::NewProp_Permissions_MetaData[] = {
		{ "Category", "PlayFab | Profiles | Account Management Models" },
		{ "Comment", "/**\n     * The permissions that govern access to this entity profile and its properties. Only includes permissions set on this\n     * profile, not global statements from titles and namespaces.\n     */" },
		{ "ModuleRelativePath", "Classes/PlayFabProfilesModels.h" },
		{ "ToolTip", "The permissions that govern access to this entity profile and its properties. Only includes permissions set on this\nprofile, not global statements from titles and namespaces." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FProfilesSetEntityProfilePolicyResponse_Statics::NewProp_Permissions = { "Permissions", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProfilesSetEntityProfilePolicyResponse, Permissions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FProfilesSetEntityProfilePolicyResponse_Statics::NewProp_Permissions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilesSetEntityProfilePolicyResponse_Statics::NewProp_Permissions_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProfilesSetEntityProfilePolicyResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfilesSetEntityProfilePolicyResponse_Statics::NewProp_Permissions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfilesSetEntityProfilePolicyResponse_Statics::NewProp_Permissions,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProfilesSetEntityProfilePolicyResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"ProfilesSetEntityProfilePolicyResponse",
		sizeof(FProfilesSetEntityProfilePolicyResponse),
		alignof(FProfilesSetEntityProfilePolicyResponse),
		Z_Construct_UScriptStruct_FProfilesSetEntityProfilePolicyResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilesSetEntityProfilePolicyResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FProfilesSetEntityProfilePolicyResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilesSetEntityProfilePolicyResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FProfilesSetEntityProfilePolicyResponse()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FProfilesSetEntityProfilePolicyResponse_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ProfilesSetEntityProfilePolicyResponse"), sizeof(FProfilesSetEntityProfilePolicyResponse), Get_Z_Construct_UScriptStruct_FProfilesSetEntityProfilePolicyResponse_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FProfilesSetEntityProfilePolicyResponse_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FProfilesSetEntityProfilePolicyResponse_Hash() { return 664525906U; }

static_assert(std::is_polymorphic<FProfilesSetEntityProfilePolicyRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FProfilesSetEntityProfilePolicyRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FProfilesSetEntityProfilePolicyRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FProfilesSetEntityProfilePolicyRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FProfilesSetEntityProfilePolicyRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("ProfilesSetEntityProfilePolicyRequest"), sizeof(FProfilesSetEntityProfilePolicyRequest), Get_Z_Construct_UScriptStruct_FProfilesSetEntityProfilePolicyRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FProfilesSetEntityProfilePolicyRequest>()
{
	return FProfilesSetEntityProfilePolicyRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FProfilesSetEntityProfilePolicyRequest(FProfilesSetEntityProfilePolicyRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("ProfilesSetEntityProfilePolicyRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFProfilesSetEntityProfilePolicyRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFProfilesSetEntityProfilePolicyRequest()
	{
		UScriptStruct::DeferCppStructOps<FProfilesSetEntityProfilePolicyRequest>(FName(TEXT("ProfilesSetEntityProfilePolicyRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFProfilesSetEntityProfilePolicyRequest;
	struct Z_Construct_UScriptStruct_FProfilesSetEntityProfilePolicyRequest_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Entity_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Entity;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Statements_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Statements_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Statements;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfilesSetEntityProfilePolicyRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * This will set the access policy statements on the given entity profile. This is not additive, any existing statements\n * will be replaced with the statements in this request.\n */" },
		{ "ModuleRelativePath", "Classes/PlayFabProfilesModels.h" },
		{ "ToolTip", "This will set the access policy statements on the given entity profile. This is not additive, any existing statements\nwill be replaced with the statements in this request." },
	};
#endif
	void* Z_Construct_UScriptStruct_FProfilesSetEntityProfilePolicyRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProfilesSetEntityProfilePolicyRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfilesSetEntityProfilePolicyRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | Profiles | Account Management Models" },
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
		{ "ModuleRelativePath", "Classes/PlayFabProfilesModels.h" },
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FProfilesSetEntityProfilePolicyRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProfilesSetEntityProfilePolicyRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FProfilesSetEntityProfilePolicyRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilesSetEntityProfilePolicyRequest_Statics::NewProp_CustomTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfilesSetEntityProfilePolicyRequest_Statics::NewProp_Entity_MetaData[] = {
		{ "Category", "PlayFab | Profiles | Account Management Models" },
		{ "Comment", "/** The entity to perform this action on. */" },
		{ "ModuleRelativePath", "Classes/PlayFabProfilesModels.h" },
		{ "ToolTip", "The entity to perform this action on." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FProfilesSetEntityProfilePolicyRequest_Statics::NewProp_Entity = { "Entity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProfilesSetEntityProfilePolicyRequest, Entity), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FProfilesSetEntityProfilePolicyRequest_Statics::NewProp_Entity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilesSetEntityProfilePolicyRequest_Statics::NewProp_Entity_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FProfilesSetEntityProfilePolicyRequest_Statics::NewProp_Statements_Inner = { "Statements", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfilesSetEntityProfilePolicyRequest_Statics::NewProp_Statements_MetaData[] = {
		{ "Category", "PlayFab | Profiles | Account Management Models" },
		{ "Comment", "/** The statements to include in the access policy. */" },
		{ "ModuleRelativePath", "Classes/PlayFabProfilesModels.h" },
		{ "ToolTip", "The statements to include in the access policy." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FProfilesSetEntityProfilePolicyRequest_Statics::NewProp_Statements = { "Statements", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProfilesSetEntityProfilePolicyRequest, Statements), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FProfilesSetEntityProfilePolicyRequest_Statics::NewProp_Statements_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilesSetEntityProfilePolicyRequest_Statics::NewProp_Statements_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProfilesSetEntityProfilePolicyRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfilesSetEntityProfilePolicyRequest_Statics::NewProp_CustomTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfilesSetEntityProfilePolicyRequest_Statics::NewProp_Entity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfilesSetEntityProfilePolicyRequest_Statics::NewProp_Statements_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfilesSetEntityProfilePolicyRequest_Statics::NewProp_Statements,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProfilesSetEntityProfilePolicyRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"ProfilesSetEntityProfilePolicyRequest",
		sizeof(FProfilesSetEntityProfilePolicyRequest),
		alignof(FProfilesSetEntityProfilePolicyRequest),
		Z_Construct_UScriptStruct_FProfilesSetEntityProfilePolicyRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilesSetEntityProfilePolicyRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FProfilesSetEntityProfilePolicyRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilesSetEntityProfilePolicyRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FProfilesSetEntityProfilePolicyRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FProfilesSetEntityProfilePolicyRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ProfilesSetEntityProfilePolicyRequest"), sizeof(FProfilesSetEntityProfilePolicyRequest), Get_Z_Construct_UScriptStruct_FProfilesSetEntityProfilePolicyRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FProfilesSetEntityProfilePolicyRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FProfilesSetEntityProfilePolicyRequest_Hash() { return 2796179789U; }

static_assert(std::is_polymorphic<FProfilesSetProfileLanguageResponse>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FProfilesSetProfileLanguageResponse cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

class UScriptStruct* FProfilesSetProfileLanguageResponse::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FProfilesSetProfileLanguageResponse_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FProfilesSetProfileLanguageResponse, Z_Construct_UPackage__Script_PlayFab(), TEXT("ProfilesSetProfileLanguageResponse"), sizeof(FProfilesSetProfileLanguageResponse), Get_Z_Construct_UScriptStruct_FProfilesSetProfileLanguageResponse_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FProfilesSetProfileLanguageResponse>()
{
	return FProfilesSetProfileLanguageResponse::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FProfilesSetProfileLanguageResponse(FProfilesSetProfileLanguageResponse::StaticStruct, TEXT("/Script/PlayFab"), TEXT("ProfilesSetProfileLanguageResponse"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFProfilesSetProfileLanguageResponse
{
	FScriptStruct_PlayFab_StaticRegisterNativesFProfilesSetProfileLanguageResponse()
	{
		UScriptStruct::DeferCppStructOps<FProfilesSetProfileLanguageResponse>(FName(TEXT("ProfilesSetProfileLanguageResponse")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFProfilesSetProfileLanguageResponse;
	struct Z_Construct_UScriptStruct_FProfilesSetProfileLanguageResponse_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OperationResult_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OperationResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_OperationResult;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VersionNumber_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_VersionNumber;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfilesSetProfileLanguageResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabProfilesModels.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FProfilesSetProfileLanguageResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProfilesSetProfileLanguageResponse>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FProfilesSetProfileLanguageResponse_Statics::NewProp_OperationResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfilesSetProfileLanguageResponse_Statics::NewProp_OperationResult_MetaData[] = {
		{ "Category", "PlayFab | Profiles | Account Management Models" },
		{ "Comment", "/** The type of operation that occured on the profile's language */" },
		{ "ModuleRelativePath", "Classes/PlayFabProfilesModels.h" },
		{ "ToolTip", "The type of operation that occured on the profile's language" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FProfilesSetProfileLanguageResponse_Statics::NewProp_OperationResult = { "OperationResult", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProfilesSetProfileLanguageResponse, OperationResult), Z_Construct_UEnum_PlayFab_EOperationTypes, METADATA_PARAMS(Z_Construct_UScriptStruct_FProfilesSetProfileLanguageResponse_Statics::NewProp_OperationResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilesSetProfileLanguageResponse_Statics::NewProp_OperationResult_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfilesSetProfileLanguageResponse_Statics::NewProp_VersionNumber_MetaData[] = {
		{ "Category", "PlayFab | Profiles | Account Management Models" },
		{ "Comment", "/** The updated version of the profile after the language update */" },
		{ "ModuleRelativePath", "Classes/PlayFabProfilesModels.h" },
		{ "ToolTip", "The updated version of the profile after the language update" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FProfilesSetProfileLanguageResponse_Statics::NewProp_VersionNumber = { "VersionNumber", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProfilesSetProfileLanguageResponse, VersionNumber), METADATA_PARAMS(Z_Construct_UScriptStruct_FProfilesSetProfileLanguageResponse_Statics::NewProp_VersionNumber_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilesSetProfileLanguageResponse_Statics::NewProp_VersionNumber_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProfilesSetProfileLanguageResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfilesSetProfileLanguageResponse_Statics::NewProp_OperationResult_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfilesSetProfileLanguageResponse_Statics::NewProp_OperationResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfilesSetProfileLanguageResponse_Statics::NewProp_VersionNumber,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProfilesSetProfileLanguageResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"ProfilesSetProfileLanguageResponse",
		sizeof(FProfilesSetProfileLanguageResponse),
		alignof(FProfilesSetProfileLanguageResponse),
		Z_Construct_UScriptStruct_FProfilesSetProfileLanguageResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilesSetProfileLanguageResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FProfilesSetProfileLanguageResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilesSetProfileLanguageResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FProfilesSetProfileLanguageResponse()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FProfilesSetProfileLanguageResponse_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ProfilesSetProfileLanguageResponse"), sizeof(FProfilesSetProfileLanguageResponse), Get_Z_Construct_UScriptStruct_FProfilesSetProfileLanguageResponse_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FProfilesSetProfileLanguageResponse_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FProfilesSetProfileLanguageResponse_Hash() { return 2872829868U; }

static_assert(std::is_polymorphic<FProfilesSetProfileLanguageRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FProfilesSetProfileLanguageRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FProfilesSetProfileLanguageRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FProfilesSetProfileLanguageRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FProfilesSetProfileLanguageRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("ProfilesSetProfileLanguageRequest"), sizeof(FProfilesSetProfileLanguageRequest), Get_Z_Construct_UScriptStruct_FProfilesSetProfileLanguageRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FProfilesSetProfileLanguageRequest>()
{
	return FProfilesSetProfileLanguageRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FProfilesSetProfileLanguageRequest(FProfilesSetProfileLanguageRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("ProfilesSetProfileLanguageRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFProfilesSetProfileLanguageRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFProfilesSetProfileLanguageRequest()
	{
		UScriptStruct::DeferCppStructOps<FProfilesSetProfileLanguageRequest>(FName(TEXT("ProfilesSetProfileLanguageRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFProfilesSetProfileLanguageRequest;
	struct Z_Construct_UScriptStruct_FProfilesSetProfileLanguageRequest_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Entity_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Entity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExpectedVersion_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ExpectedVersion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Language_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Language;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfilesSetProfileLanguageRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Given an entity profile, will update its language to the one passed in if the profile's version is equal to the one\n * passed in.\n */" },
		{ "ModuleRelativePath", "Classes/PlayFabProfilesModels.h" },
		{ "ToolTip", "Given an entity profile, will update its language to the one passed in if the profile's version is equal to the one\npassed in." },
	};
#endif
	void* Z_Construct_UScriptStruct_FProfilesSetProfileLanguageRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProfilesSetProfileLanguageRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfilesSetProfileLanguageRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | Profiles | Account Management Models" },
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
		{ "ModuleRelativePath", "Classes/PlayFabProfilesModels.h" },
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FProfilesSetProfileLanguageRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProfilesSetProfileLanguageRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FProfilesSetProfileLanguageRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilesSetProfileLanguageRequest_Statics::NewProp_CustomTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfilesSetProfileLanguageRequest_Statics::NewProp_Entity_MetaData[] = {
		{ "Category", "PlayFab | Profiles | Account Management Models" },
		{ "Comment", "/** The optional entity to perform this action on. Defaults to the currently logged in entity. */" },
		{ "ModuleRelativePath", "Classes/PlayFabProfilesModels.h" },
		{ "ToolTip", "The optional entity to perform this action on. Defaults to the currently logged in entity." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FProfilesSetProfileLanguageRequest_Statics::NewProp_Entity = { "Entity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProfilesSetProfileLanguageRequest, Entity), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FProfilesSetProfileLanguageRequest_Statics::NewProp_Entity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilesSetProfileLanguageRequest_Statics::NewProp_Entity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfilesSetProfileLanguageRequest_Statics::NewProp_ExpectedVersion_MetaData[] = {
		{ "Category", "PlayFab | Profiles | Account Management Models" },
		{ "Comment", "/** The expected version of a profile to perform this update on */" },
		{ "ModuleRelativePath", "Classes/PlayFabProfilesModels.h" },
		{ "ToolTip", "The expected version of a profile to perform this update on" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FProfilesSetProfileLanguageRequest_Statics::NewProp_ExpectedVersion = { "ExpectedVersion", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProfilesSetProfileLanguageRequest, ExpectedVersion), METADATA_PARAMS(Z_Construct_UScriptStruct_FProfilesSetProfileLanguageRequest_Statics::NewProp_ExpectedVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilesSetProfileLanguageRequest_Statics::NewProp_ExpectedVersion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfilesSetProfileLanguageRequest_Statics::NewProp_Language_MetaData[] = {
		{ "Category", "PlayFab | Profiles | Account Management Models" },
		{ "Comment", "/** The language to set on the given entity. Deletes the profile's language if passed in a null string. */" },
		{ "ModuleRelativePath", "Classes/PlayFabProfilesModels.h" },
		{ "ToolTip", "The language to set on the given entity. Deletes the profile's language if passed in a null string." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FProfilesSetProfileLanguageRequest_Statics::NewProp_Language = { "Language", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProfilesSetProfileLanguageRequest, Language), METADATA_PARAMS(Z_Construct_UScriptStruct_FProfilesSetProfileLanguageRequest_Statics::NewProp_Language_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilesSetProfileLanguageRequest_Statics::NewProp_Language_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProfilesSetProfileLanguageRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfilesSetProfileLanguageRequest_Statics::NewProp_CustomTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfilesSetProfileLanguageRequest_Statics::NewProp_Entity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfilesSetProfileLanguageRequest_Statics::NewProp_ExpectedVersion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfilesSetProfileLanguageRequest_Statics::NewProp_Language,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProfilesSetProfileLanguageRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"ProfilesSetProfileLanguageRequest",
		sizeof(FProfilesSetProfileLanguageRequest),
		alignof(FProfilesSetProfileLanguageRequest),
		Z_Construct_UScriptStruct_FProfilesSetProfileLanguageRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilesSetProfileLanguageRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FProfilesSetProfileLanguageRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilesSetProfileLanguageRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FProfilesSetProfileLanguageRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FProfilesSetProfileLanguageRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ProfilesSetProfileLanguageRequest"), sizeof(FProfilesSetProfileLanguageRequest), Get_Z_Construct_UScriptStruct_FProfilesSetProfileLanguageRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FProfilesSetProfileLanguageRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FProfilesSetProfileLanguageRequest_Hash() { return 1584681960U; }

static_assert(std::is_polymorphic<FProfilesSetGlobalPolicyResponse>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FProfilesSetGlobalPolicyResponse cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

class UScriptStruct* FProfilesSetGlobalPolicyResponse::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FProfilesSetGlobalPolicyResponse_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FProfilesSetGlobalPolicyResponse, Z_Construct_UPackage__Script_PlayFab(), TEXT("ProfilesSetGlobalPolicyResponse"), sizeof(FProfilesSetGlobalPolicyResponse), Get_Z_Construct_UScriptStruct_FProfilesSetGlobalPolicyResponse_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FProfilesSetGlobalPolicyResponse>()
{
	return FProfilesSetGlobalPolicyResponse::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FProfilesSetGlobalPolicyResponse(FProfilesSetGlobalPolicyResponse::StaticStruct, TEXT("/Script/PlayFab"), TEXT("ProfilesSetGlobalPolicyResponse"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFProfilesSetGlobalPolicyResponse
{
	FScriptStruct_PlayFab_StaticRegisterNativesFProfilesSetGlobalPolicyResponse()
	{
		UScriptStruct::DeferCppStructOps<FProfilesSetGlobalPolicyResponse>(FName(TEXT("ProfilesSetGlobalPolicyResponse")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFProfilesSetGlobalPolicyResponse;
	struct Z_Construct_UScriptStruct_FProfilesSetGlobalPolicyResponse_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfilesSetGlobalPolicyResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabProfilesModels.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FProfilesSetGlobalPolicyResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProfilesSetGlobalPolicyResponse>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProfilesSetGlobalPolicyResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"ProfilesSetGlobalPolicyResponse",
		sizeof(FProfilesSetGlobalPolicyResponse),
		alignof(FProfilesSetGlobalPolicyResponse),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FProfilesSetGlobalPolicyResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilesSetGlobalPolicyResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FProfilesSetGlobalPolicyResponse()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FProfilesSetGlobalPolicyResponse_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ProfilesSetGlobalPolicyResponse"), sizeof(FProfilesSetGlobalPolicyResponse), Get_Z_Construct_UScriptStruct_FProfilesSetGlobalPolicyResponse_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FProfilesSetGlobalPolicyResponse_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FProfilesSetGlobalPolicyResponse_Hash() { return 217731830U; }

static_assert(std::is_polymorphic<FProfilesSetGlobalPolicyRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FProfilesSetGlobalPolicyRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FProfilesSetGlobalPolicyRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FProfilesSetGlobalPolicyRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FProfilesSetGlobalPolicyRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("ProfilesSetGlobalPolicyRequest"), sizeof(FProfilesSetGlobalPolicyRequest), Get_Z_Construct_UScriptStruct_FProfilesSetGlobalPolicyRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FProfilesSetGlobalPolicyRequest>()
{
	return FProfilesSetGlobalPolicyRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FProfilesSetGlobalPolicyRequest(FProfilesSetGlobalPolicyRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("ProfilesSetGlobalPolicyRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFProfilesSetGlobalPolicyRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFProfilesSetGlobalPolicyRequest()
	{
		UScriptStruct::DeferCppStructOps<FProfilesSetGlobalPolicyRequest>(FName(TEXT("ProfilesSetGlobalPolicyRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFProfilesSetGlobalPolicyRequest;
	struct Z_Construct_UScriptStruct_FProfilesSetGlobalPolicyRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CustomTags;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Permissions_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Permissions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Permissions;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfilesSetGlobalPolicyRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Updates the title access policy that is used before the profile's policy is inspected during a request. Policies are\n * compiled and cached for several minutes so an update here may not be reflected in behavior for a short time.\n */" },
		{ "ModuleRelativePath", "Classes/PlayFabProfilesModels.h" },
		{ "ToolTip", "Updates the title access policy that is used before the profile's policy is inspected during a request. Policies are\ncompiled and cached for several minutes so an update here may not be reflected in behavior for a short time." },
	};
#endif
	void* Z_Construct_UScriptStruct_FProfilesSetGlobalPolicyRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProfilesSetGlobalPolicyRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfilesSetGlobalPolicyRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | Profiles | Account Management Models" },
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
		{ "ModuleRelativePath", "Classes/PlayFabProfilesModels.h" },
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FProfilesSetGlobalPolicyRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProfilesSetGlobalPolicyRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FProfilesSetGlobalPolicyRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilesSetGlobalPolicyRequest_Statics::NewProp_CustomTags_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FProfilesSetGlobalPolicyRequest_Statics::NewProp_Permissions_Inner = { "Permissions", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfilesSetGlobalPolicyRequest_Statics::NewProp_Permissions_MetaData[] = {
		{ "Category", "PlayFab | Profiles | Account Management Models" },
		{ "Comment", "/** The permissions that govern access to all entities under this title or namespace. */" },
		{ "ModuleRelativePath", "Classes/PlayFabProfilesModels.h" },
		{ "ToolTip", "The permissions that govern access to all entities under this title or namespace." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FProfilesSetGlobalPolicyRequest_Statics::NewProp_Permissions = { "Permissions", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProfilesSetGlobalPolicyRequest, Permissions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FProfilesSetGlobalPolicyRequest_Statics::NewProp_Permissions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilesSetGlobalPolicyRequest_Statics::NewProp_Permissions_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProfilesSetGlobalPolicyRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfilesSetGlobalPolicyRequest_Statics::NewProp_CustomTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfilesSetGlobalPolicyRequest_Statics::NewProp_Permissions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfilesSetGlobalPolicyRequest_Statics::NewProp_Permissions,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProfilesSetGlobalPolicyRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"ProfilesSetGlobalPolicyRequest",
		sizeof(FProfilesSetGlobalPolicyRequest),
		alignof(FProfilesSetGlobalPolicyRequest),
		Z_Construct_UScriptStruct_FProfilesSetGlobalPolicyRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilesSetGlobalPolicyRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FProfilesSetGlobalPolicyRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilesSetGlobalPolicyRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FProfilesSetGlobalPolicyRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FProfilesSetGlobalPolicyRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ProfilesSetGlobalPolicyRequest"), sizeof(FProfilesSetGlobalPolicyRequest), Get_Z_Construct_UScriptStruct_FProfilesSetGlobalPolicyRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FProfilesSetGlobalPolicyRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FProfilesSetGlobalPolicyRequest_Hash() { return 4227245725U; }

static_assert(std::is_polymorphic<FProfilesGetTitlePlayersFromXboxLiveIDsRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FProfilesGetTitlePlayersFromXboxLiveIDsRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FProfilesGetTitlePlayersFromXboxLiveIDsRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromXboxLiveIDsRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromXboxLiveIDsRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("ProfilesGetTitlePlayersFromXboxLiveIDsRequest"), sizeof(FProfilesGetTitlePlayersFromXboxLiveIDsRequest), Get_Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromXboxLiveIDsRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FProfilesGetTitlePlayersFromXboxLiveIDsRequest>()
{
	return FProfilesGetTitlePlayersFromXboxLiveIDsRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FProfilesGetTitlePlayersFromXboxLiveIDsRequest(FProfilesGetTitlePlayersFromXboxLiveIDsRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("ProfilesGetTitlePlayersFromXboxLiveIDsRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFProfilesGetTitlePlayersFromXboxLiveIDsRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFProfilesGetTitlePlayersFromXboxLiveIDsRequest()
	{
		UScriptStruct::DeferCppStructOps<FProfilesGetTitlePlayersFromXboxLiveIDsRequest>(FName(TEXT("ProfilesGetTitlePlayersFromXboxLiveIDsRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFProfilesGetTitlePlayersFromXboxLiveIDsRequest;
	struct Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromXboxLiveIDsRequest_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Sandbox_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Sandbox;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_XboxLiveIds_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_XboxLiveIds;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromXboxLiveIDsRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Given a collection of Xbox IDs (XUIDs), returns all title player accounts. */" },
		{ "ModuleRelativePath", "Classes/PlayFabProfilesModels.h" },
		{ "ToolTip", "Given a collection of Xbox IDs (XUIDs), returns all title player accounts." },
	};
#endif
	void* Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromXboxLiveIDsRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProfilesGetTitlePlayersFromXboxLiveIDsRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromXboxLiveIDsRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | Profiles | Account Management Models" },
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
		{ "ModuleRelativePath", "Classes/PlayFabProfilesModels.h" },
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromXboxLiveIDsRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProfilesGetTitlePlayersFromXboxLiveIDsRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromXboxLiveIDsRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromXboxLiveIDsRequest_Statics::NewProp_CustomTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromXboxLiveIDsRequest_Statics::NewProp_Sandbox_MetaData[] = {
		{ "Category", "PlayFab | Profiles | Account Management Models" },
		{ "Comment", "/** Xbox Sandbox the players had on their Xbox tokens. */" },
		{ "ModuleRelativePath", "Classes/PlayFabProfilesModels.h" },
		{ "ToolTip", "Xbox Sandbox the players had on their Xbox tokens." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromXboxLiveIDsRequest_Statics::NewProp_Sandbox = { "Sandbox", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProfilesGetTitlePlayersFromXboxLiveIDsRequest, Sandbox), METADATA_PARAMS(Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromXboxLiveIDsRequest_Statics::NewProp_Sandbox_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromXboxLiveIDsRequest_Statics::NewProp_Sandbox_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromXboxLiveIDsRequest_Statics::NewProp_XboxLiveIds_MetaData[] = {
		{ "Category", "PlayFab | Profiles | Account Management Models" },
		{ "Comment", "/** List of Xbox Live XUIDs */" },
		{ "ModuleRelativePath", "Classes/PlayFabProfilesModels.h" },
		{ "ToolTip", "List of Xbox Live XUIDs" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromXboxLiveIDsRequest_Statics::NewProp_XboxLiveIds = { "XboxLiveIds", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProfilesGetTitlePlayersFromXboxLiveIDsRequest, XboxLiveIds), METADATA_PARAMS(Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromXboxLiveIDsRequest_Statics::NewProp_XboxLiveIds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromXboxLiveIDsRequest_Statics::NewProp_XboxLiveIds_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromXboxLiveIDsRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromXboxLiveIDsRequest_Statics::NewProp_CustomTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromXboxLiveIDsRequest_Statics::NewProp_Sandbox,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromXboxLiveIDsRequest_Statics::NewProp_XboxLiveIds,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromXboxLiveIDsRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"ProfilesGetTitlePlayersFromXboxLiveIDsRequest",
		sizeof(FProfilesGetTitlePlayersFromXboxLiveIDsRequest),
		alignof(FProfilesGetTitlePlayersFromXboxLiveIDsRequest),
		Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromXboxLiveIDsRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromXboxLiveIDsRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromXboxLiveIDsRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromXboxLiveIDsRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromXboxLiveIDsRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromXboxLiveIDsRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ProfilesGetTitlePlayersFromXboxLiveIDsRequest"), sizeof(FProfilesGetTitlePlayersFromXboxLiveIDsRequest), Get_Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromXboxLiveIDsRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromXboxLiveIDsRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromXboxLiveIDsRequest_Hash() { return 978637432U; }

static_assert(std::is_polymorphic<FProfilesGetTitlePlayersFromProviderIDsResponse>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FProfilesGetTitlePlayersFromProviderIDsResponse cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

class UScriptStruct* FProfilesGetTitlePlayersFromProviderIDsResponse::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromProviderIDsResponse_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromProviderIDsResponse, Z_Construct_UPackage__Script_PlayFab(), TEXT("ProfilesGetTitlePlayersFromProviderIDsResponse"), sizeof(FProfilesGetTitlePlayersFromProviderIDsResponse), Get_Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromProviderIDsResponse_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FProfilesGetTitlePlayersFromProviderIDsResponse>()
{
	return FProfilesGetTitlePlayersFromProviderIDsResponse::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FProfilesGetTitlePlayersFromProviderIDsResponse(FProfilesGetTitlePlayersFromProviderIDsResponse::StaticStruct, TEXT("/Script/PlayFab"), TEXT("ProfilesGetTitlePlayersFromProviderIDsResponse"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFProfilesGetTitlePlayersFromProviderIDsResponse
{
	FScriptStruct_PlayFab_StaticRegisterNativesFProfilesGetTitlePlayersFromProviderIDsResponse()
	{
		UScriptStruct::DeferCppStructOps<FProfilesGetTitlePlayersFromProviderIDsResponse>(FName(TEXT("ProfilesGetTitlePlayersFromProviderIDsResponse")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFProfilesGetTitlePlayersFromProviderIDsResponse;
	struct Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromProviderIDsResponse_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TitlePlayerAccounts_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TitlePlayerAccounts;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromProviderIDsResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabProfilesModels.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromProviderIDsResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProfilesGetTitlePlayersFromProviderIDsResponse>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromProviderIDsResponse_Statics::NewProp_TitlePlayerAccounts_MetaData[] = {
		{ "Category", "PlayFab | Profiles | Account Management Models" },
		{ "Comment", "/**\n     * Dictionary of provider identifiers mapped to title_player_account lineage. Missing lineage indicates the player either\n     * doesn't exist or doesn't play the requested title.\n     */" },
		{ "ModuleRelativePath", "Classes/PlayFabProfilesModels.h" },
		{ "ToolTip", "Dictionary of provider identifiers mapped to title_player_account lineage. Missing lineage indicates the player either\ndoesn't exist or doesn't play the requested title." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromProviderIDsResponse_Statics::NewProp_TitlePlayerAccounts = { "TitlePlayerAccounts", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProfilesGetTitlePlayersFromProviderIDsResponse, TitlePlayerAccounts), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromProviderIDsResponse_Statics::NewProp_TitlePlayerAccounts_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromProviderIDsResponse_Statics::NewProp_TitlePlayerAccounts_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromProviderIDsResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromProviderIDsResponse_Statics::NewProp_TitlePlayerAccounts,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromProviderIDsResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"ProfilesGetTitlePlayersFromProviderIDsResponse",
		sizeof(FProfilesGetTitlePlayersFromProviderIDsResponse),
		alignof(FProfilesGetTitlePlayersFromProviderIDsResponse),
		Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromProviderIDsResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromProviderIDsResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromProviderIDsResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromProviderIDsResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromProviderIDsResponse()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromProviderIDsResponse_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ProfilesGetTitlePlayersFromProviderIDsResponse"), sizeof(FProfilesGetTitlePlayersFromProviderIDsResponse), Get_Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromProviderIDsResponse_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromProviderIDsResponse_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromProviderIDsResponse_Hash() { return 2063024911U; }

static_assert(std::is_polymorphic<FProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

class UScriptStruct* FProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse, Z_Construct_UPackage__Script_PlayFab(), TEXT("ProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse"), sizeof(FProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse), Get_Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse>()
{
	return FProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse(FProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse::StaticStruct, TEXT("/Script/PlayFab"), TEXT("ProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse
{
	FScriptStruct_PlayFab_StaticRegisterNativesFProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse()
	{
		UScriptStruct::DeferCppStructOps<FProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse>(FName(TEXT("ProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse;
	struct Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TitleId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TitleId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TitlePlayerAccounts_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TitlePlayerAccounts;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabProfilesModels.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse_Statics::NewProp_TitleId_MetaData[] = {
		{ "Category", "PlayFab | Profiles | Account Management Models" },
		{ "Comment", "/** Optional id of title to get players from, required if calling using a master_player_account. */" },
		{ "ModuleRelativePath", "Classes/PlayFabProfilesModels.h" },
		{ "ToolTip", "Optional id of title to get players from, required if calling using a master_player_account." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse_Statics::NewProp_TitleId = { "TitleId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse, TitleId), METADATA_PARAMS(Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse_Statics::NewProp_TitleId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse_Statics::NewProp_TitleId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse_Statics::NewProp_TitlePlayerAccounts_MetaData[] = {
		{ "Category", "PlayFab | Profiles | Account Management Models" },
		{ "Comment", "/** Dictionary of master player ids mapped to title player entity keys and id pairs */" },
		{ "ModuleRelativePath", "Classes/PlayFabProfilesModels.h" },
		{ "ToolTip", "Dictionary of master player ids mapped to title player entity keys and id pairs" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse_Statics::NewProp_TitlePlayerAccounts = { "TitlePlayerAccounts", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse, TitlePlayerAccounts), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse_Statics::NewProp_TitlePlayerAccounts_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse_Statics::NewProp_TitlePlayerAccounts_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse_Statics::NewProp_TitleId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse_Statics::NewProp_TitlePlayerAccounts,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"ProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse",
		sizeof(FProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse),
		alignof(FProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse),
		Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse"), sizeof(FProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse), Get_Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse_Hash() { return 1184040573U; }

static_assert(std::is_polymorphic<FProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("ProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest"), sizeof(FProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest), Get_Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest>()
{
	return FProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest(FProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("ProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest()
	{
		UScriptStruct::DeferCppStructOps<FProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest>(FName(TEXT("ProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest;
	struct Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MasterPlayerAccountIds_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MasterPlayerAccountIds;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Given a master player account id (PlayFab ID), returns all title player accounts associated with it. */" },
		{ "ModuleRelativePath", "Classes/PlayFabProfilesModels.h" },
		{ "ToolTip", "Given a master player account id (PlayFab ID), returns all title player accounts associated with it." },
	};
#endif
	void* Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | Profiles | Account Management Models" },
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
		{ "ModuleRelativePath", "Classes/PlayFabProfilesModels.h" },
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest_Statics::NewProp_CustomTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest_Statics::NewProp_MasterPlayerAccountIds_MetaData[] = {
		{ "Category", "PlayFab | Profiles | Account Management Models" },
		{ "Comment", "/** Master player account ids. */" },
		{ "ModuleRelativePath", "Classes/PlayFabProfilesModels.h" },
		{ "ToolTip", "Master player account ids." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest_Statics::NewProp_MasterPlayerAccountIds = { "MasterPlayerAccountIds", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest, MasterPlayerAccountIds), METADATA_PARAMS(Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest_Statics::NewProp_MasterPlayerAccountIds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest_Statics::NewProp_MasterPlayerAccountIds_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest_Statics::NewProp_CustomTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest_Statics::NewProp_MasterPlayerAccountIds,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"ProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest",
		sizeof(FProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest),
		alignof(FProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest),
		Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest"), sizeof(FProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest), Get_Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest_Hash() { return 1449859614U; }

static_assert(std::is_polymorphic<FProfilesGetEntityProfilesResponse>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FProfilesGetEntityProfilesResponse cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

class UScriptStruct* FProfilesGetEntityProfilesResponse::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FProfilesGetEntityProfilesResponse_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FProfilesGetEntityProfilesResponse, Z_Construct_UPackage__Script_PlayFab(), TEXT("ProfilesGetEntityProfilesResponse"), sizeof(FProfilesGetEntityProfilesResponse), Get_Z_Construct_UScriptStruct_FProfilesGetEntityProfilesResponse_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FProfilesGetEntityProfilesResponse>()
{
	return FProfilesGetEntityProfilesResponse::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FProfilesGetEntityProfilesResponse(FProfilesGetEntityProfilesResponse::StaticStruct, TEXT("/Script/PlayFab"), TEXT("ProfilesGetEntityProfilesResponse"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFProfilesGetEntityProfilesResponse
{
	FScriptStruct_PlayFab_StaticRegisterNativesFProfilesGetEntityProfilesResponse()
	{
		UScriptStruct::DeferCppStructOps<FProfilesGetEntityProfilesResponse>(FName(TEXT("ProfilesGetEntityProfilesResponse")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFProfilesGetEntityProfilesResponse;
	struct Z_Construct_UScriptStruct_FProfilesGetEntityProfilesResponse_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Profiles_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Profiles_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Profiles;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfilesGetEntityProfilesResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabProfilesModels.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FProfilesGetEntityProfilesResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProfilesGetEntityProfilesResponse>();
	}
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FProfilesGetEntityProfilesResponse_Statics::NewProp_Profiles_Inner = { "Profiles", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfilesGetEntityProfilesResponse_Statics::NewProp_Profiles_MetaData[] = {
		{ "Category", "PlayFab | Profiles | Account Management Models" },
		{ "Comment", "/** Entity profiles */" },
		{ "ModuleRelativePath", "Classes/PlayFabProfilesModels.h" },
		{ "ToolTip", "Entity profiles" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FProfilesGetEntityProfilesResponse_Statics::NewProp_Profiles = { "Profiles", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProfilesGetEntityProfilesResponse, Profiles), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FProfilesGetEntityProfilesResponse_Statics::NewProp_Profiles_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilesGetEntityProfilesResponse_Statics::NewProp_Profiles_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProfilesGetEntityProfilesResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfilesGetEntityProfilesResponse_Statics::NewProp_Profiles_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfilesGetEntityProfilesResponse_Statics::NewProp_Profiles,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProfilesGetEntityProfilesResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"ProfilesGetEntityProfilesResponse",
		sizeof(FProfilesGetEntityProfilesResponse),
		alignof(FProfilesGetEntityProfilesResponse),
		Z_Construct_UScriptStruct_FProfilesGetEntityProfilesResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilesGetEntityProfilesResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FProfilesGetEntityProfilesResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilesGetEntityProfilesResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FProfilesGetEntityProfilesResponse()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FProfilesGetEntityProfilesResponse_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ProfilesGetEntityProfilesResponse"), sizeof(FProfilesGetEntityProfilesResponse), Get_Z_Construct_UScriptStruct_FProfilesGetEntityProfilesResponse_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FProfilesGetEntityProfilesResponse_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FProfilesGetEntityProfilesResponse_Hash() { return 546891161U; }

static_assert(std::is_polymorphic<FProfilesGetEntityProfilesRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FProfilesGetEntityProfilesRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FProfilesGetEntityProfilesRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FProfilesGetEntityProfilesRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FProfilesGetEntityProfilesRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("ProfilesGetEntityProfilesRequest"), sizeof(FProfilesGetEntityProfilesRequest), Get_Z_Construct_UScriptStruct_FProfilesGetEntityProfilesRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FProfilesGetEntityProfilesRequest>()
{
	return FProfilesGetEntityProfilesRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FProfilesGetEntityProfilesRequest(FProfilesGetEntityProfilesRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("ProfilesGetEntityProfilesRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFProfilesGetEntityProfilesRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFProfilesGetEntityProfilesRequest()
	{
		UScriptStruct::DeferCppStructOps<FProfilesGetEntityProfilesRequest>(FName(TEXT("ProfilesGetEntityProfilesRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFProfilesGetEntityProfilesRequest;
	struct Z_Construct_UScriptStruct_FProfilesGetEntityProfilesRequest_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DataAsObject_MetaData[];
#endif
		static void NewProp_DataAsObject_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DataAsObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Entities_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Entities_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Entities;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfilesGetEntityProfilesRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Given a set of entity types and entity identifiers will retrieve all readable profiles properties for the caller.\n * Profiles that the caller is not allowed to read will silently not be included in the results.\n */" },
		{ "ModuleRelativePath", "Classes/PlayFabProfilesModels.h" },
		{ "ToolTip", "Given a set of entity types and entity identifiers will retrieve all readable profiles properties for the caller.\nProfiles that the caller is not allowed to read will silently not be included in the results." },
	};
#endif
	void* Z_Construct_UScriptStruct_FProfilesGetEntityProfilesRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProfilesGetEntityProfilesRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfilesGetEntityProfilesRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | Profiles | Account Management Models" },
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
		{ "ModuleRelativePath", "Classes/PlayFabProfilesModels.h" },
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FProfilesGetEntityProfilesRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProfilesGetEntityProfilesRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FProfilesGetEntityProfilesRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilesGetEntityProfilesRequest_Statics::NewProp_CustomTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfilesGetEntityProfilesRequest_Statics::NewProp_DataAsObject_MetaData[] = {
		{ "Category", "PlayFab | Profiles | Account Management Models" },
		{ "Comment", "/**\n     * Determines whether the objects will be returned as an escaped JSON string or as a un-escaped JSON object. Default is\n     * JSON string.\n     */" },
		{ "ModuleRelativePath", "Classes/PlayFabProfilesModels.h" },
		{ "ToolTip", "Determines whether the objects will be returned as an escaped JSON string or as a un-escaped JSON object. Default is\nJSON string." },
	};
#endif
	void Z_Construct_UScriptStruct_FProfilesGetEntityProfilesRequest_Statics::NewProp_DataAsObject_SetBit(void* Obj)
	{
		((FProfilesGetEntityProfilesRequest*)Obj)->DataAsObject = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FProfilesGetEntityProfilesRequest_Statics::NewProp_DataAsObject = { "DataAsObject", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FProfilesGetEntityProfilesRequest), &Z_Construct_UScriptStruct_FProfilesGetEntityProfilesRequest_Statics::NewProp_DataAsObject_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FProfilesGetEntityProfilesRequest_Statics::NewProp_DataAsObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilesGetEntityProfilesRequest_Statics::NewProp_DataAsObject_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FProfilesGetEntityProfilesRequest_Statics::NewProp_Entities_Inner = { "Entities", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfilesGetEntityProfilesRequest_Statics::NewProp_Entities_MetaData[] = {
		{ "Category", "PlayFab | Profiles | Account Management Models" },
		{ "Comment", "/** Entity keys of the profiles to load. Must be between 1 and 25 */" },
		{ "ModuleRelativePath", "Classes/PlayFabProfilesModels.h" },
		{ "ToolTip", "Entity keys of the profiles to load. Must be between 1 and 25" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FProfilesGetEntityProfilesRequest_Statics::NewProp_Entities = { "Entities", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProfilesGetEntityProfilesRequest, Entities), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FProfilesGetEntityProfilesRequest_Statics::NewProp_Entities_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilesGetEntityProfilesRequest_Statics::NewProp_Entities_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProfilesGetEntityProfilesRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfilesGetEntityProfilesRequest_Statics::NewProp_CustomTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfilesGetEntityProfilesRequest_Statics::NewProp_DataAsObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfilesGetEntityProfilesRequest_Statics::NewProp_Entities_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfilesGetEntityProfilesRequest_Statics::NewProp_Entities,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProfilesGetEntityProfilesRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"ProfilesGetEntityProfilesRequest",
		sizeof(FProfilesGetEntityProfilesRequest),
		alignof(FProfilesGetEntityProfilesRequest),
		Z_Construct_UScriptStruct_FProfilesGetEntityProfilesRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilesGetEntityProfilesRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FProfilesGetEntityProfilesRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilesGetEntityProfilesRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FProfilesGetEntityProfilesRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FProfilesGetEntityProfilesRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ProfilesGetEntityProfilesRequest"), sizeof(FProfilesGetEntityProfilesRequest), Get_Z_Construct_UScriptStruct_FProfilesGetEntityProfilesRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FProfilesGetEntityProfilesRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FProfilesGetEntityProfilesRequest_Hash() { return 2881203124U; }

static_assert(std::is_polymorphic<FProfilesGetEntityProfileResponse>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FProfilesGetEntityProfileResponse cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

class UScriptStruct* FProfilesGetEntityProfileResponse::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FProfilesGetEntityProfileResponse_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FProfilesGetEntityProfileResponse, Z_Construct_UPackage__Script_PlayFab(), TEXT("ProfilesGetEntityProfileResponse"), sizeof(FProfilesGetEntityProfileResponse), Get_Z_Construct_UScriptStruct_FProfilesGetEntityProfileResponse_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FProfilesGetEntityProfileResponse>()
{
	return FProfilesGetEntityProfileResponse::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FProfilesGetEntityProfileResponse(FProfilesGetEntityProfileResponse::StaticStruct, TEXT("/Script/PlayFab"), TEXT("ProfilesGetEntityProfileResponse"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFProfilesGetEntityProfileResponse
{
	FScriptStruct_PlayFab_StaticRegisterNativesFProfilesGetEntityProfileResponse()
	{
		UScriptStruct::DeferCppStructOps<FProfilesGetEntityProfileResponse>(FName(TEXT("ProfilesGetEntityProfileResponse")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFProfilesGetEntityProfileResponse;
	struct Z_Construct_UScriptStruct_FProfilesGetEntityProfileResponse_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Profile_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Profile;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfilesGetEntityProfileResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabProfilesModels.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FProfilesGetEntityProfileResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProfilesGetEntityProfileResponse>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfilesGetEntityProfileResponse_Statics::NewProp_Profile_MetaData[] = {
		{ "Category", "PlayFab | Profiles | Account Management Models" },
		{ "Comment", "/** Entity profile */" },
		{ "ModuleRelativePath", "Classes/PlayFabProfilesModels.h" },
		{ "ToolTip", "Entity profile" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FProfilesGetEntityProfileResponse_Statics::NewProp_Profile = { "Profile", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProfilesGetEntityProfileResponse, Profile), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FProfilesGetEntityProfileResponse_Statics::NewProp_Profile_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilesGetEntityProfileResponse_Statics::NewProp_Profile_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProfilesGetEntityProfileResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfilesGetEntityProfileResponse_Statics::NewProp_Profile,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProfilesGetEntityProfileResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"ProfilesGetEntityProfileResponse",
		sizeof(FProfilesGetEntityProfileResponse),
		alignof(FProfilesGetEntityProfileResponse),
		Z_Construct_UScriptStruct_FProfilesGetEntityProfileResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilesGetEntityProfileResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FProfilesGetEntityProfileResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilesGetEntityProfileResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FProfilesGetEntityProfileResponse()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FProfilesGetEntityProfileResponse_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ProfilesGetEntityProfileResponse"), sizeof(FProfilesGetEntityProfileResponse), Get_Z_Construct_UScriptStruct_FProfilesGetEntityProfileResponse_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FProfilesGetEntityProfileResponse_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FProfilesGetEntityProfileResponse_Hash() { return 1796562538U; }

static_assert(std::is_polymorphic<FProfilesGetEntityProfileRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FProfilesGetEntityProfileRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FProfilesGetEntityProfileRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FProfilesGetEntityProfileRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FProfilesGetEntityProfileRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("ProfilesGetEntityProfileRequest"), sizeof(FProfilesGetEntityProfileRequest), Get_Z_Construct_UScriptStruct_FProfilesGetEntityProfileRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FProfilesGetEntityProfileRequest>()
{
	return FProfilesGetEntityProfileRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FProfilesGetEntityProfileRequest(FProfilesGetEntityProfileRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("ProfilesGetEntityProfileRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFProfilesGetEntityProfileRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFProfilesGetEntityProfileRequest()
	{
		UScriptStruct::DeferCppStructOps<FProfilesGetEntityProfileRequest>(FName(TEXT("ProfilesGetEntityProfileRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFProfilesGetEntityProfileRequest;
	struct Z_Construct_UScriptStruct_FProfilesGetEntityProfileRequest_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DataAsObject_MetaData[];
#endif
		static void NewProp_DataAsObject_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DataAsObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Entity_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Entity;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfilesGetEntityProfileRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Given an entity type and entity identifier will retrieve the profile from the entity store. If the profile being\n * retrieved is the caller's, then the read operation is consistent, if not it is an inconsistent read. An inconsistent\n * read means that we do not guarantee all committed writes have occurred before reading the profile, allowing for a stale\n * read. If consistency is important the Version Number on the result can be used to compare which version of the profile\n * any reader has.\n */" },
		{ "ModuleRelativePath", "Classes/PlayFabProfilesModels.h" },
		{ "ToolTip", "Given an entity type and entity identifier will retrieve the profile from the entity store. If the profile being\nretrieved is the caller's, then the read operation is consistent, if not it is an inconsistent read. An inconsistent\nread means that we do not guarantee all committed writes have occurred before reading the profile, allowing for a stale\nread. If consistency is important the Version Number on the result can be used to compare which version of the profile\nany reader has." },
	};
#endif
	void* Z_Construct_UScriptStruct_FProfilesGetEntityProfileRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProfilesGetEntityProfileRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfilesGetEntityProfileRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | Profiles | Account Management Models" },
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
		{ "ModuleRelativePath", "Classes/PlayFabProfilesModels.h" },
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FProfilesGetEntityProfileRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProfilesGetEntityProfileRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FProfilesGetEntityProfileRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilesGetEntityProfileRequest_Statics::NewProp_CustomTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfilesGetEntityProfileRequest_Statics::NewProp_DataAsObject_MetaData[] = {
		{ "Category", "PlayFab | Profiles | Account Management Models" },
		{ "Comment", "/**\n     * Determines whether the objects will be returned as an escaped JSON string or as a un-escaped JSON object. Default is\n     * JSON string.\n     */" },
		{ "ModuleRelativePath", "Classes/PlayFabProfilesModels.h" },
		{ "ToolTip", "Determines whether the objects will be returned as an escaped JSON string or as a un-escaped JSON object. Default is\nJSON string." },
	};
#endif
	void Z_Construct_UScriptStruct_FProfilesGetEntityProfileRequest_Statics::NewProp_DataAsObject_SetBit(void* Obj)
	{
		((FProfilesGetEntityProfileRequest*)Obj)->DataAsObject = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FProfilesGetEntityProfileRequest_Statics::NewProp_DataAsObject = { "DataAsObject", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FProfilesGetEntityProfileRequest), &Z_Construct_UScriptStruct_FProfilesGetEntityProfileRequest_Statics::NewProp_DataAsObject_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FProfilesGetEntityProfileRequest_Statics::NewProp_DataAsObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilesGetEntityProfileRequest_Statics::NewProp_DataAsObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfilesGetEntityProfileRequest_Statics::NewProp_Entity_MetaData[] = {
		{ "Category", "PlayFab | Profiles | Account Management Models" },
		{ "Comment", "/** The optional entity to perform this action on. Defaults to the currently logged in entity. */" },
		{ "ModuleRelativePath", "Classes/PlayFabProfilesModels.h" },
		{ "ToolTip", "The optional entity to perform this action on. Defaults to the currently logged in entity." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FProfilesGetEntityProfileRequest_Statics::NewProp_Entity = { "Entity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProfilesGetEntityProfileRequest, Entity), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FProfilesGetEntityProfileRequest_Statics::NewProp_Entity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilesGetEntityProfileRequest_Statics::NewProp_Entity_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProfilesGetEntityProfileRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfilesGetEntityProfileRequest_Statics::NewProp_CustomTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfilesGetEntityProfileRequest_Statics::NewProp_DataAsObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfilesGetEntityProfileRequest_Statics::NewProp_Entity,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProfilesGetEntityProfileRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"ProfilesGetEntityProfileRequest",
		sizeof(FProfilesGetEntityProfileRequest),
		alignof(FProfilesGetEntityProfileRequest),
		Z_Construct_UScriptStruct_FProfilesGetEntityProfileRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilesGetEntityProfileRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FProfilesGetEntityProfileRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilesGetEntityProfileRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FProfilesGetEntityProfileRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FProfilesGetEntityProfileRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ProfilesGetEntityProfileRequest"), sizeof(FProfilesGetEntityProfileRequest), Get_Z_Construct_UScriptStruct_FProfilesGetEntityProfileRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FProfilesGetEntityProfileRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FProfilesGetEntityProfileRequest_Hash() { return 1690173167U; }

static_assert(std::is_polymorphic<FProfilesGetGlobalPolicyResponse>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FProfilesGetGlobalPolicyResponse cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

class UScriptStruct* FProfilesGetGlobalPolicyResponse::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FProfilesGetGlobalPolicyResponse_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FProfilesGetGlobalPolicyResponse, Z_Construct_UPackage__Script_PlayFab(), TEXT("ProfilesGetGlobalPolicyResponse"), sizeof(FProfilesGetGlobalPolicyResponse), Get_Z_Construct_UScriptStruct_FProfilesGetGlobalPolicyResponse_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FProfilesGetGlobalPolicyResponse>()
{
	return FProfilesGetGlobalPolicyResponse::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FProfilesGetGlobalPolicyResponse(FProfilesGetGlobalPolicyResponse::StaticStruct, TEXT("/Script/PlayFab"), TEXT("ProfilesGetGlobalPolicyResponse"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFProfilesGetGlobalPolicyResponse
{
	FScriptStruct_PlayFab_StaticRegisterNativesFProfilesGetGlobalPolicyResponse()
	{
		UScriptStruct::DeferCppStructOps<FProfilesGetGlobalPolicyResponse>(FName(TEXT("ProfilesGetGlobalPolicyResponse")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFProfilesGetGlobalPolicyResponse;
	struct Z_Construct_UScriptStruct_FProfilesGetGlobalPolicyResponse_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Permissions_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Permissions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Permissions;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfilesGetGlobalPolicyResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabProfilesModels.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FProfilesGetGlobalPolicyResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProfilesGetGlobalPolicyResponse>();
	}
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FProfilesGetGlobalPolicyResponse_Statics::NewProp_Permissions_Inner = { "Permissions", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfilesGetGlobalPolicyResponse_Statics::NewProp_Permissions_MetaData[] = {
		{ "Category", "PlayFab | Profiles | Account Management Models" },
		{ "Comment", "/** The permissions that govern access to all entities under this title or namespace. */" },
		{ "ModuleRelativePath", "Classes/PlayFabProfilesModels.h" },
		{ "ToolTip", "The permissions that govern access to all entities under this title or namespace." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FProfilesGetGlobalPolicyResponse_Statics::NewProp_Permissions = { "Permissions", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProfilesGetGlobalPolicyResponse, Permissions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FProfilesGetGlobalPolicyResponse_Statics::NewProp_Permissions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilesGetGlobalPolicyResponse_Statics::NewProp_Permissions_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProfilesGetGlobalPolicyResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfilesGetGlobalPolicyResponse_Statics::NewProp_Permissions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfilesGetGlobalPolicyResponse_Statics::NewProp_Permissions,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProfilesGetGlobalPolicyResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"ProfilesGetGlobalPolicyResponse",
		sizeof(FProfilesGetGlobalPolicyResponse),
		alignof(FProfilesGetGlobalPolicyResponse),
		Z_Construct_UScriptStruct_FProfilesGetGlobalPolicyResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilesGetGlobalPolicyResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FProfilesGetGlobalPolicyResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilesGetGlobalPolicyResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FProfilesGetGlobalPolicyResponse()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FProfilesGetGlobalPolicyResponse_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ProfilesGetGlobalPolicyResponse"), sizeof(FProfilesGetGlobalPolicyResponse), Get_Z_Construct_UScriptStruct_FProfilesGetGlobalPolicyResponse_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FProfilesGetGlobalPolicyResponse_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FProfilesGetGlobalPolicyResponse_Hash() { return 224245488U; }

static_assert(std::is_polymorphic<FProfilesGetGlobalPolicyRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FProfilesGetGlobalPolicyRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FProfilesGetGlobalPolicyRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FProfilesGetGlobalPolicyRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FProfilesGetGlobalPolicyRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("ProfilesGetGlobalPolicyRequest"), sizeof(FProfilesGetGlobalPolicyRequest), Get_Z_Construct_UScriptStruct_FProfilesGetGlobalPolicyRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FProfilesGetGlobalPolicyRequest>()
{
	return FProfilesGetGlobalPolicyRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FProfilesGetGlobalPolicyRequest(FProfilesGetGlobalPolicyRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("ProfilesGetGlobalPolicyRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFProfilesGetGlobalPolicyRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFProfilesGetGlobalPolicyRequest()
	{
		UScriptStruct::DeferCppStructOps<FProfilesGetGlobalPolicyRequest>(FName(TEXT("ProfilesGetGlobalPolicyRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFProfilesGetGlobalPolicyRequest;
	struct Z_Construct_UScriptStruct_FProfilesGetGlobalPolicyRequest_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Entity_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Entity;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfilesGetGlobalPolicyRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Retrieves the title access policy that is used before the profile's policy is inspected during a request. If never\n * customized this will return the default starter policy built by PlayFab.\n */" },
		{ "ModuleRelativePath", "Classes/PlayFabProfilesModels.h" },
		{ "ToolTip", "Retrieves the title access policy that is used before the profile's policy is inspected during a request. If never\ncustomized this will return the default starter policy built by PlayFab." },
	};
#endif
	void* Z_Construct_UScriptStruct_FProfilesGetGlobalPolicyRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProfilesGetGlobalPolicyRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfilesGetGlobalPolicyRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | Profiles | Account Management Models" },
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
		{ "ModuleRelativePath", "Classes/PlayFabProfilesModels.h" },
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FProfilesGetGlobalPolicyRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProfilesGetGlobalPolicyRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FProfilesGetGlobalPolicyRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilesGetGlobalPolicyRequest_Statics::NewProp_CustomTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfilesGetGlobalPolicyRequest_Statics::NewProp_Entity_MetaData[] = {
		{ "Category", "PlayFab | Profiles | Account Management Models" },
		{ "Comment", "/** The optional entity to perform this action on. Defaults to the currently logged in entity. */" },
		{ "ModuleRelativePath", "Classes/PlayFabProfilesModels.h" },
		{ "ToolTip", "The optional entity to perform this action on. Defaults to the currently logged in entity." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FProfilesGetGlobalPolicyRequest_Statics::NewProp_Entity = { "Entity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProfilesGetGlobalPolicyRequest, Entity), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FProfilesGetGlobalPolicyRequest_Statics::NewProp_Entity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilesGetGlobalPolicyRequest_Statics::NewProp_Entity_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProfilesGetGlobalPolicyRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfilesGetGlobalPolicyRequest_Statics::NewProp_CustomTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfilesGetGlobalPolicyRequest_Statics::NewProp_Entity,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProfilesGetGlobalPolicyRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"ProfilesGetGlobalPolicyRequest",
		sizeof(FProfilesGetGlobalPolicyRequest),
		alignof(FProfilesGetGlobalPolicyRequest),
		Z_Construct_UScriptStruct_FProfilesGetGlobalPolicyRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilesGetGlobalPolicyRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FProfilesGetGlobalPolicyRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilesGetGlobalPolicyRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FProfilesGetGlobalPolicyRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FProfilesGetGlobalPolicyRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ProfilesGetGlobalPolicyRequest"), sizeof(FProfilesGetGlobalPolicyRequest), Get_Z_Construct_UScriptStruct_FProfilesGetGlobalPolicyRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FProfilesGetGlobalPolicyRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FProfilesGetGlobalPolicyRequest_Hash() { return 3712105424U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
