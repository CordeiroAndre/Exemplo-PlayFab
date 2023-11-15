// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Classes/PlayFabAuthenticationModels.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayFabAuthenticationModels() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FAuthenticationValidateEntityTokenResponse();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabResultCommon();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
	PLAYFAB_API UEnum* Z_Construct_UEnum_PlayFab_EIdentifiedDeviceType();
	PLAYFAB_API UEnum* Z_Construct_UEnum_PlayFab_ELoginIdentityProvider();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FAuthenticationValidateEntityTokenRequest();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabRequestCommon();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FAuthenticationGetEntityTokenResponse();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FAuthenticationGetEntityTokenRequest();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FAuthenticationEmptyResponse();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FAuthenticationDeleteRequest();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FAuthenticationAuthenticateCustomIdResult();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FAuthenticationAuthenticateCustomIdRequest();
// End Cross Module References

static_assert(std::is_polymorphic<FAuthenticationValidateEntityTokenResponse>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FAuthenticationValidateEntityTokenResponse cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

class UScriptStruct* FAuthenticationValidateEntityTokenResponse::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FAuthenticationValidateEntityTokenResponse_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAuthenticationValidateEntityTokenResponse, Z_Construct_UPackage__Script_PlayFab(), TEXT("AuthenticationValidateEntityTokenResponse"), sizeof(FAuthenticationValidateEntityTokenResponse), Get_Z_Construct_UScriptStruct_FAuthenticationValidateEntityTokenResponse_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FAuthenticationValidateEntityTokenResponse>()
{
	return FAuthenticationValidateEntityTokenResponse::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAuthenticationValidateEntityTokenResponse(FAuthenticationValidateEntityTokenResponse::StaticStruct, TEXT("/Script/PlayFab"), TEXT("AuthenticationValidateEntityTokenResponse"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFAuthenticationValidateEntityTokenResponse
{
	FScriptStruct_PlayFab_StaticRegisterNativesFAuthenticationValidateEntityTokenResponse()
	{
		UScriptStruct::DeferCppStructOps<FAuthenticationValidateEntityTokenResponse>(FName(TEXT("AuthenticationValidateEntityTokenResponse")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFAuthenticationValidateEntityTokenResponse;
	struct Z_Construct_UScriptStruct_FAuthenticationValidateEntityTokenResponse_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Entity_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Entity;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_IdentifiedDeviceType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IdentifiedDeviceType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_IdentifiedDeviceType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_IdentityProvider_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IdentityProvider_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_IdentityProvider;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IdentityProviderIssuedId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_IdentityProviderIssuedId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Lineage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Lineage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAuthenticationValidateEntityTokenResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabAuthenticationModels.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAuthenticationValidateEntityTokenResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAuthenticationValidateEntityTokenResponse>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAuthenticationValidateEntityTokenResponse_Statics::NewProp_Entity_MetaData[] = {
		{ "Category", "PlayFab | Authentication | Authentication Models" },
		{ "Comment", "/** The entity id and type. */" },
		{ "ModuleRelativePath", "Classes/PlayFabAuthenticationModels.h" },
		{ "ToolTip", "The entity id and type." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAuthenticationValidateEntityTokenResponse_Statics::NewProp_Entity = { "Entity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAuthenticationValidateEntityTokenResponse, Entity), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAuthenticationValidateEntityTokenResponse_Statics::NewProp_Entity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAuthenticationValidateEntityTokenResponse_Statics::NewProp_Entity_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAuthenticationValidateEntityTokenResponse_Statics::NewProp_IdentifiedDeviceType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAuthenticationValidateEntityTokenResponse_Statics::NewProp_IdentifiedDeviceType_MetaData[] = {
		{ "Category", "PlayFab | Authentication | Authentication Models" },
		{ "Comment", "/** The authenticated device for this entity, for the given login */" },
		{ "ModuleRelativePath", "Classes/PlayFabAuthenticationModels.h" },
		{ "ToolTip", "The authenticated device for this entity, for the given login" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAuthenticationValidateEntityTokenResponse_Statics::NewProp_IdentifiedDeviceType = { "IdentifiedDeviceType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAuthenticationValidateEntityTokenResponse, IdentifiedDeviceType), Z_Construct_UEnum_PlayFab_EIdentifiedDeviceType, METADATA_PARAMS(Z_Construct_UScriptStruct_FAuthenticationValidateEntityTokenResponse_Statics::NewProp_IdentifiedDeviceType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAuthenticationValidateEntityTokenResponse_Statics::NewProp_IdentifiedDeviceType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAuthenticationValidateEntityTokenResponse_Statics::NewProp_IdentityProvider_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAuthenticationValidateEntityTokenResponse_Statics::NewProp_IdentityProvider_MetaData[] = {
		{ "Category", "PlayFab | Authentication | Authentication Models" },
		{ "Comment", "/** The identity provider for this entity, for the given login */" },
		{ "ModuleRelativePath", "Classes/PlayFabAuthenticationModels.h" },
		{ "ToolTip", "The identity provider for this entity, for the given login" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAuthenticationValidateEntityTokenResponse_Statics::NewProp_IdentityProvider = { "IdentityProvider", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAuthenticationValidateEntityTokenResponse, IdentityProvider), Z_Construct_UEnum_PlayFab_ELoginIdentityProvider, METADATA_PARAMS(Z_Construct_UScriptStruct_FAuthenticationValidateEntityTokenResponse_Statics::NewProp_IdentityProvider_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAuthenticationValidateEntityTokenResponse_Statics::NewProp_IdentityProvider_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAuthenticationValidateEntityTokenResponse_Statics::NewProp_IdentityProviderIssuedId_MetaData[] = {
		{ "Category", "PlayFab | Authentication | Authentication Models" },
		{ "Comment", "/** The ID issued by the identity provider, e.g. a XUID on Xbox Live */" },
		{ "ModuleRelativePath", "Classes/PlayFabAuthenticationModels.h" },
		{ "ToolTip", "The ID issued by the identity provider, e.g. a XUID on Xbox Live" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAuthenticationValidateEntityTokenResponse_Statics::NewProp_IdentityProviderIssuedId = { "IdentityProviderIssuedId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAuthenticationValidateEntityTokenResponse, IdentityProviderIssuedId), METADATA_PARAMS(Z_Construct_UScriptStruct_FAuthenticationValidateEntityTokenResponse_Statics::NewProp_IdentityProviderIssuedId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAuthenticationValidateEntityTokenResponse_Statics::NewProp_IdentityProviderIssuedId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAuthenticationValidateEntityTokenResponse_Statics::NewProp_Lineage_MetaData[] = {
		{ "Category", "PlayFab | Authentication | Authentication Models" },
		{ "Comment", "/** The lineage of this profile. */" },
		{ "ModuleRelativePath", "Classes/PlayFabAuthenticationModels.h" },
		{ "ToolTip", "The lineage of this profile." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAuthenticationValidateEntityTokenResponse_Statics::NewProp_Lineage = { "Lineage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAuthenticationValidateEntityTokenResponse, Lineage), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAuthenticationValidateEntityTokenResponse_Statics::NewProp_Lineage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAuthenticationValidateEntityTokenResponse_Statics::NewProp_Lineage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAuthenticationValidateEntityTokenResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAuthenticationValidateEntityTokenResponse_Statics::NewProp_Entity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAuthenticationValidateEntityTokenResponse_Statics::NewProp_IdentifiedDeviceType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAuthenticationValidateEntityTokenResponse_Statics::NewProp_IdentifiedDeviceType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAuthenticationValidateEntityTokenResponse_Statics::NewProp_IdentityProvider_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAuthenticationValidateEntityTokenResponse_Statics::NewProp_IdentityProvider,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAuthenticationValidateEntityTokenResponse_Statics::NewProp_IdentityProviderIssuedId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAuthenticationValidateEntityTokenResponse_Statics::NewProp_Lineage,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAuthenticationValidateEntityTokenResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"AuthenticationValidateEntityTokenResponse",
		sizeof(FAuthenticationValidateEntityTokenResponse),
		alignof(FAuthenticationValidateEntityTokenResponse),
		Z_Construct_UScriptStruct_FAuthenticationValidateEntityTokenResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAuthenticationValidateEntityTokenResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAuthenticationValidateEntityTokenResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAuthenticationValidateEntityTokenResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAuthenticationValidateEntityTokenResponse()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAuthenticationValidateEntityTokenResponse_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AuthenticationValidateEntityTokenResponse"), sizeof(FAuthenticationValidateEntityTokenResponse), Get_Z_Construct_UScriptStruct_FAuthenticationValidateEntityTokenResponse_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAuthenticationValidateEntityTokenResponse_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAuthenticationValidateEntityTokenResponse_Hash() { return 3400058976U; }

static_assert(std::is_polymorphic<FAuthenticationValidateEntityTokenRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FAuthenticationValidateEntityTokenRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FAuthenticationValidateEntityTokenRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FAuthenticationValidateEntityTokenRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAuthenticationValidateEntityTokenRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("AuthenticationValidateEntityTokenRequest"), sizeof(FAuthenticationValidateEntityTokenRequest), Get_Z_Construct_UScriptStruct_FAuthenticationValidateEntityTokenRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FAuthenticationValidateEntityTokenRequest>()
{
	return FAuthenticationValidateEntityTokenRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAuthenticationValidateEntityTokenRequest(FAuthenticationValidateEntityTokenRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("AuthenticationValidateEntityTokenRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFAuthenticationValidateEntityTokenRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFAuthenticationValidateEntityTokenRequest()
	{
		UScriptStruct::DeferCppStructOps<FAuthenticationValidateEntityTokenRequest>(FName(TEXT("AuthenticationValidateEntityTokenRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFAuthenticationValidateEntityTokenRequest;
	struct Z_Construct_UScriptStruct_FAuthenticationValidateEntityTokenRequest_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EntityToken_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_EntityToken;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAuthenticationValidateEntityTokenRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Given an entity token, validates that it hasn't expired or been revoked and will return details of the owner. */" },
		{ "ModuleRelativePath", "Classes/PlayFabAuthenticationModels.h" },
		{ "ToolTip", "Given an entity token, validates that it hasn't expired or been revoked and will return details of the owner." },
	};
#endif
	void* Z_Construct_UScriptStruct_FAuthenticationValidateEntityTokenRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAuthenticationValidateEntityTokenRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAuthenticationValidateEntityTokenRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | Authentication | Authentication Models" },
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
		{ "ModuleRelativePath", "Classes/PlayFabAuthenticationModels.h" },
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAuthenticationValidateEntityTokenRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAuthenticationValidateEntityTokenRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAuthenticationValidateEntityTokenRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAuthenticationValidateEntityTokenRequest_Statics::NewProp_CustomTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAuthenticationValidateEntityTokenRequest_Statics::NewProp_EntityToken_MetaData[] = {
		{ "Category", "PlayFab | Authentication | Authentication Models" },
		{ "Comment", "/** Client EntityToken */" },
		{ "ModuleRelativePath", "Classes/PlayFabAuthenticationModels.h" },
		{ "ToolTip", "Client EntityToken" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAuthenticationValidateEntityTokenRequest_Statics::NewProp_EntityToken = { "EntityToken", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAuthenticationValidateEntityTokenRequest, EntityToken), METADATA_PARAMS(Z_Construct_UScriptStruct_FAuthenticationValidateEntityTokenRequest_Statics::NewProp_EntityToken_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAuthenticationValidateEntityTokenRequest_Statics::NewProp_EntityToken_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAuthenticationValidateEntityTokenRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAuthenticationValidateEntityTokenRequest_Statics::NewProp_CustomTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAuthenticationValidateEntityTokenRequest_Statics::NewProp_EntityToken,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAuthenticationValidateEntityTokenRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"AuthenticationValidateEntityTokenRequest",
		sizeof(FAuthenticationValidateEntityTokenRequest),
		alignof(FAuthenticationValidateEntityTokenRequest),
		Z_Construct_UScriptStruct_FAuthenticationValidateEntityTokenRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAuthenticationValidateEntityTokenRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAuthenticationValidateEntityTokenRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAuthenticationValidateEntityTokenRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAuthenticationValidateEntityTokenRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAuthenticationValidateEntityTokenRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AuthenticationValidateEntityTokenRequest"), sizeof(FAuthenticationValidateEntityTokenRequest), Get_Z_Construct_UScriptStruct_FAuthenticationValidateEntityTokenRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAuthenticationValidateEntityTokenRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAuthenticationValidateEntityTokenRequest_Hash() { return 2636267789U; }

static_assert(std::is_polymorphic<FAuthenticationGetEntityTokenResponse>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FAuthenticationGetEntityTokenResponse cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

class UScriptStruct* FAuthenticationGetEntityTokenResponse::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FAuthenticationGetEntityTokenResponse_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAuthenticationGetEntityTokenResponse, Z_Construct_UPackage__Script_PlayFab(), TEXT("AuthenticationGetEntityTokenResponse"), sizeof(FAuthenticationGetEntityTokenResponse), Get_Z_Construct_UScriptStruct_FAuthenticationGetEntityTokenResponse_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FAuthenticationGetEntityTokenResponse>()
{
	return FAuthenticationGetEntityTokenResponse::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAuthenticationGetEntityTokenResponse(FAuthenticationGetEntityTokenResponse::StaticStruct, TEXT("/Script/PlayFab"), TEXT("AuthenticationGetEntityTokenResponse"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFAuthenticationGetEntityTokenResponse
{
	FScriptStruct_PlayFab_StaticRegisterNativesFAuthenticationGetEntityTokenResponse()
	{
		UScriptStruct::DeferCppStructOps<FAuthenticationGetEntityTokenResponse>(FName(TEXT("AuthenticationGetEntityTokenResponse")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFAuthenticationGetEntityTokenResponse;
	struct Z_Construct_UScriptStruct_FAuthenticationGetEntityTokenResponse_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Entity_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Entity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EntityToken_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_EntityToken;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TokenExpiration_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TokenExpiration;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAuthenticationGetEntityTokenResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabAuthenticationModels.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAuthenticationGetEntityTokenResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAuthenticationGetEntityTokenResponse>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAuthenticationGetEntityTokenResponse_Statics::NewProp_Entity_MetaData[] = {
		{ "Category", "PlayFab | Authentication | Authentication Models" },
		{ "Comment", "/** The entity id and type. */" },
		{ "ModuleRelativePath", "Classes/PlayFabAuthenticationModels.h" },
		{ "ToolTip", "The entity id and type." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAuthenticationGetEntityTokenResponse_Statics::NewProp_Entity = { "Entity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAuthenticationGetEntityTokenResponse, Entity), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAuthenticationGetEntityTokenResponse_Statics::NewProp_Entity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAuthenticationGetEntityTokenResponse_Statics::NewProp_Entity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAuthenticationGetEntityTokenResponse_Statics::NewProp_EntityToken_MetaData[] = {
		{ "Category", "PlayFab | Authentication | Authentication Models" },
		{ "Comment", "/** The token used to set X-EntityToken for all entity based API calls. */" },
		{ "ModuleRelativePath", "Classes/PlayFabAuthenticationModels.h" },
		{ "ToolTip", "The token used to set X-EntityToken for all entity based API calls." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAuthenticationGetEntityTokenResponse_Statics::NewProp_EntityToken = { "EntityToken", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAuthenticationGetEntityTokenResponse, EntityToken), METADATA_PARAMS(Z_Construct_UScriptStruct_FAuthenticationGetEntityTokenResponse_Statics::NewProp_EntityToken_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAuthenticationGetEntityTokenResponse_Statics::NewProp_EntityToken_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAuthenticationGetEntityTokenResponse_Statics::NewProp_TokenExpiration_MetaData[] = {
		{ "Category", "PlayFab | Authentication | Authentication Models" },
		{ "Comment", "/** The time the token will expire, if it is an expiring token, in UTC. */" },
		{ "ModuleRelativePath", "Classes/PlayFabAuthenticationModels.h" },
		{ "ToolTip", "The time the token will expire, if it is an expiring token, in UTC." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAuthenticationGetEntityTokenResponse_Statics::NewProp_TokenExpiration = { "TokenExpiration", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAuthenticationGetEntityTokenResponse, TokenExpiration), METADATA_PARAMS(Z_Construct_UScriptStruct_FAuthenticationGetEntityTokenResponse_Statics::NewProp_TokenExpiration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAuthenticationGetEntityTokenResponse_Statics::NewProp_TokenExpiration_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAuthenticationGetEntityTokenResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAuthenticationGetEntityTokenResponse_Statics::NewProp_Entity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAuthenticationGetEntityTokenResponse_Statics::NewProp_EntityToken,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAuthenticationGetEntityTokenResponse_Statics::NewProp_TokenExpiration,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAuthenticationGetEntityTokenResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"AuthenticationGetEntityTokenResponse",
		sizeof(FAuthenticationGetEntityTokenResponse),
		alignof(FAuthenticationGetEntityTokenResponse),
		Z_Construct_UScriptStruct_FAuthenticationGetEntityTokenResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAuthenticationGetEntityTokenResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAuthenticationGetEntityTokenResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAuthenticationGetEntityTokenResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAuthenticationGetEntityTokenResponse()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAuthenticationGetEntityTokenResponse_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AuthenticationGetEntityTokenResponse"), sizeof(FAuthenticationGetEntityTokenResponse), Get_Z_Construct_UScriptStruct_FAuthenticationGetEntityTokenResponse_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAuthenticationGetEntityTokenResponse_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAuthenticationGetEntityTokenResponse_Hash() { return 3532109519U; }

static_assert(std::is_polymorphic<FAuthenticationGetEntityTokenRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FAuthenticationGetEntityTokenRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FAuthenticationGetEntityTokenRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FAuthenticationGetEntityTokenRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAuthenticationGetEntityTokenRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("AuthenticationGetEntityTokenRequest"), sizeof(FAuthenticationGetEntityTokenRequest), Get_Z_Construct_UScriptStruct_FAuthenticationGetEntityTokenRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FAuthenticationGetEntityTokenRequest>()
{
	return FAuthenticationGetEntityTokenRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAuthenticationGetEntityTokenRequest(FAuthenticationGetEntityTokenRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("AuthenticationGetEntityTokenRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFAuthenticationGetEntityTokenRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFAuthenticationGetEntityTokenRequest()
	{
		UScriptStruct::DeferCppStructOps<FAuthenticationGetEntityTokenRequest>(FName(TEXT("AuthenticationGetEntityTokenRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFAuthenticationGetEntityTokenRequest;
	struct Z_Construct_UScriptStruct_FAuthenticationGetEntityTokenRequest_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAuthenticationGetEntityTokenRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * This API must be called with X-SecretKey, X-Authentication or X-EntityToken headers. An optional EntityKey may be\n * included to attempt to set the resulting EntityToken to a specific entity, however the entity must be a relation of the\n * caller, such as the master_player_account of a character. If sending X-EntityToken the account will be marked as freshly\n * logged in and will issue a new token. If using X-Authentication or X-EntityToken the header must still be valid and\n * cannot be expired or revoked.\n */" },
		{ "ModuleRelativePath", "Classes/PlayFabAuthenticationModels.h" },
		{ "ToolTip", "This API must be called with X-SecretKey, X-Authentication or X-EntityToken headers. An optional EntityKey may be\nincluded to attempt to set the resulting EntityToken to a specific entity, however the entity must be a relation of the\ncaller, such as the master_player_account of a character. If sending X-EntityToken the account will be marked as freshly\nlogged in and will issue a new token. If using X-Authentication or X-EntityToken the header must still be valid and\ncannot be expired or revoked." },
	};
#endif
	void* Z_Construct_UScriptStruct_FAuthenticationGetEntityTokenRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAuthenticationGetEntityTokenRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAuthenticationGetEntityTokenRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | Authentication | Authentication Models" },
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
		{ "ModuleRelativePath", "Classes/PlayFabAuthenticationModels.h" },
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAuthenticationGetEntityTokenRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAuthenticationGetEntityTokenRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAuthenticationGetEntityTokenRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAuthenticationGetEntityTokenRequest_Statics::NewProp_CustomTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAuthenticationGetEntityTokenRequest_Statics::NewProp_Entity_MetaData[] = {
		{ "Category", "PlayFab | Authentication | Authentication Models" },
		{ "Comment", "/** The optional entity to perform this action on. Defaults to the currently logged in entity. */" },
		{ "ModuleRelativePath", "Classes/PlayFabAuthenticationModels.h" },
		{ "ToolTip", "The optional entity to perform this action on. Defaults to the currently logged in entity." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAuthenticationGetEntityTokenRequest_Statics::NewProp_Entity = { "Entity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAuthenticationGetEntityTokenRequest, Entity), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAuthenticationGetEntityTokenRequest_Statics::NewProp_Entity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAuthenticationGetEntityTokenRequest_Statics::NewProp_Entity_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAuthenticationGetEntityTokenRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAuthenticationGetEntityTokenRequest_Statics::NewProp_CustomTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAuthenticationGetEntityTokenRequest_Statics::NewProp_Entity,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAuthenticationGetEntityTokenRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"AuthenticationGetEntityTokenRequest",
		sizeof(FAuthenticationGetEntityTokenRequest),
		alignof(FAuthenticationGetEntityTokenRequest),
		Z_Construct_UScriptStruct_FAuthenticationGetEntityTokenRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAuthenticationGetEntityTokenRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAuthenticationGetEntityTokenRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAuthenticationGetEntityTokenRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAuthenticationGetEntityTokenRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAuthenticationGetEntityTokenRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AuthenticationGetEntityTokenRequest"), sizeof(FAuthenticationGetEntityTokenRequest), Get_Z_Construct_UScriptStruct_FAuthenticationGetEntityTokenRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAuthenticationGetEntityTokenRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAuthenticationGetEntityTokenRequest_Hash() { return 1682058357U; }

static_assert(std::is_polymorphic<FAuthenticationEmptyResponse>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FAuthenticationEmptyResponse cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

class UScriptStruct* FAuthenticationEmptyResponse::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FAuthenticationEmptyResponse_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAuthenticationEmptyResponse, Z_Construct_UPackage__Script_PlayFab(), TEXT("AuthenticationEmptyResponse"), sizeof(FAuthenticationEmptyResponse), Get_Z_Construct_UScriptStruct_FAuthenticationEmptyResponse_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FAuthenticationEmptyResponse>()
{
	return FAuthenticationEmptyResponse::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAuthenticationEmptyResponse(FAuthenticationEmptyResponse::StaticStruct, TEXT("/Script/PlayFab"), TEXT("AuthenticationEmptyResponse"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFAuthenticationEmptyResponse
{
	FScriptStruct_PlayFab_StaticRegisterNativesFAuthenticationEmptyResponse()
	{
		UScriptStruct::DeferCppStructOps<FAuthenticationEmptyResponse>(FName(TEXT("AuthenticationEmptyResponse")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFAuthenticationEmptyResponse;
	struct Z_Construct_UScriptStruct_FAuthenticationEmptyResponse_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAuthenticationEmptyResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabAuthenticationModels.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAuthenticationEmptyResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAuthenticationEmptyResponse>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAuthenticationEmptyResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"AuthenticationEmptyResponse",
		sizeof(FAuthenticationEmptyResponse),
		alignof(FAuthenticationEmptyResponse),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAuthenticationEmptyResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAuthenticationEmptyResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAuthenticationEmptyResponse()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAuthenticationEmptyResponse_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AuthenticationEmptyResponse"), sizeof(FAuthenticationEmptyResponse), Get_Z_Construct_UScriptStruct_FAuthenticationEmptyResponse_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAuthenticationEmptyResponse_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAuthenticationEmptyResponse_Hash() { return 2836857516U; }

static_assert(std::is_polymorphic<FAuthenticationDeleteRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FAuthenticationDeleteRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FAuthenticationDeleteRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FAuthenticationDeleteRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAuthenticationDeleteRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("AuthenticationDeleteRequest"), sizeof(FAuthenticationDeleteRequest), Get_Z_Construct_UScriptStruct_FAuthenticationDeleteRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FAuthenticationDeleteRequest>()
{
	return FAuthenticationDeleteRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAuthenticationDeleteRequest(FAuthenticationDeleteRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("AuthenticationDeleteRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFAuthenticationDeleteRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFAuthenticationDeleteRequest()
	{
		UScriptStruct::DeferCppStructOps<FAuthenticationDeleteRequest>(FName(TEXT("AuthenticationDeleteRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFAuthenticationDeleteRequest;
	struct Z_Construct_UScriptStruct_FAuthenticationDeleteRequest_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAuthenticationDeleteRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Delete a game_server entity. The caller can be the game_server entity attempting to delete itself. Or a title entity\n * attempting to delete game_server entities for this title.\n */" },
		{ "ModuleRelativePath", "Classes/PlayFabAuthenticationModels.h" },
		{ "ToolTip", "Delete a game_server entity. The caller can be the game_server entity attempting to delete itself. Or a title entity\nattempting to delete game_server entities for this title." },
	};
#endif
	void* Z_Construct_UScriptStruct_FAuthenticationDeleteRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAuthenticationDeleteRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAuthenticationDeleteRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | Authentication | Authentication Models" },
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
		{ "ModuleRelativePath", "Classes/PlayFabAuthenticationModels.h" },
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAuthenticationDeleteRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAuthenticationDeleteRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAuthenticationDeleteRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAuthenticationDeleteRequest_Statics::NewProp_CustomTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAuthenticationDeleteRequest_Statics::NewProp_Entity_MetaData[] = {
		{ "Category", "PlayFab | Authentication | Authentication Models" },
		{ "Comment", "/** The game_server entity to be removed. */" },
		{ "ModuleRelativePath", "Classes/PlayFabAuthenticationModels.h" },
		{ "ToolTip", "The game_server entity to be removed." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAuthenticationDeleteRequest_Statics::NewProp_Entity = { "Entity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAuthenticationDeleteRequest, Entity), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAuthenticationDeleteRequest_Statics::NewProp_Entity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAuthenticationDeleteRequest_Statics::NewProp_Entity_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAuthenticationDeleteRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAuthenticationDeleteRequest_Statics::NewProp_CustomTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAuthenticationDeleteRequest_Statics::NewProp_Entity,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAuthenticationDeleteRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"AuthenticationDeleteRequest",
		sizeof(FAuthenticationDeleteRequest),
		alignof(FAuthenticationDeleteRequest),
		Z_Construct_UScriptStruct_FAuthenticationDeleteRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAuthenticationDeleteRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAuthenticationDeleteRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAuthenticationDeleteRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAuthenticationDeleteRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAuthenticationDeleteRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AuthenticationDeleteRequest"), sizeof(FAuthenticationDeleteRequest), Get_Z_Construct_UScriptStruct_FAuthenticationDeleteRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAuthenticationDeleteRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAuthenticationDeleteRequest_Hash() { return 1024648109U; }

static_assert(std::is_polymorphic<FAuthenticationAuthenticateCustomIdResult>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FAuthenticationAuthenticateCustomIdResult cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

class UScriptStruct* FAuthenticationAuthenticateCustomIdResult::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FAuthenticationAuthenticateCustomIdResult_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAuthenticationAuthenticateCustomIdResult, Z_Construct_UPackage__Script_PlayFab(), TEXT("AuthenticationAuthenticateCustomIdResult"), sizeof(FAuthenticationAuthenticateCustomIdResult), Get_Z_Construct_UScriptStruct_FAuthenticationAuthenticateCustomIdResult_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FAuthenticationAuthenticateCustomIdResult>()
{
	return FAuthenticationAuthenticateCustomIdResult::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAuthenticationAuthenticateCustomIdResult(FAuthenticationAuthenticateCustomIdResult::StaticStruct, TEXT("/Script/PlayFab"), TEXT("AuthenticationAuthenticateCustomIdResult"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFAuthenticationAuthenticateCustomIdResult
{
	FScriptStruct_PlayFab_StaticRegisterNativesFAuthenticationAuthenticateCustomIdResult()
	{
		UScriptStruct::DeferCppStructOps<FAuthenticationAuthenticateCustomIdResult>(FName(TEXT("AuthenticationAuthenticateCustomIdResult")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFAuthenticationAuthenticateCustomIdResult;
	struct Z_Construct_UScriptStruct_FAuthenticationAuthenticateCustomIdResult_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EntityToken_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EntityToken;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewlyCreated_MetaData[];
#endif
		static void NewProp_NewlyCreated_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_NewlyCreated;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAuthenticationAuthenticateCustomIdResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabAuthenticationModels.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAuthenticationAuthenticateCustomIdResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAuthenticationAuthenticateCustomIdResult>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAuthenticationAuthenticateCustomIdResult_Statics::NewProp_EntityToken_MetaData[] = {
		{ "Category", "PlayFab | Authentication | Authentication Models" },
		{ "Comment", "/** The token generated used to set X-EntityToken for game_server calls. */" },
		{ "ModuleRelativePath", "Classes/PlayFabAuthenticationModels.h" },
		{ "ToolTip", "The token generated used to set X-EntityToken for game_server calls." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAuthenticationAuthenticateCustomIdResult_Statics::NewProp_EntityToken = { "EntityToken", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAuthenticationAuthenticateCustomIdResult, EntityToken), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAuthenticationAuthenticateCustomIdResult_Statics::NewProp_EntityToken_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAuthenticationAuthenticateCustomIdResult_Statics::NewProp_EntityToken_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAuthenticationAuthenticateCustomIdResult_Statics::NewProp_NewlyCreated_MetaData[] = {
		{ "Category", "PlayFab | Authentication | Authentication Models" },
		{ "Comment", "/** True if the account was newly created on this authentication. */" },
		{ "ModuleRelativePath", "Classes/PlayFabAuthenticationModels.h" },
		{ "ToolTip", "True if the account was newly created on this authentication." },
	};
#endif
	void Z_Construct_UScriptStruct_FAuthenticationAuthenticateCustomIdResult_Statics::NewProp_NewlyCreated_SetBit(void* Obj)
	{
		((FAuthenticationAuthenticateCustomIdResult*)Obj)->NewlyCreated = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAuthenticationAuthenticateCustomIdResult_Statics::NewProp_NewlyCreated = { "NewlyCreated", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAuthenticationAuthenticateCustomIdResult), &Z_Construct_UScriptStruct_FAuthenticationAuthenticateCustomIdResult_Statics::NewProp_NewlyCreated_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAuthenticationAuthenticateCustomIdResult_Statics::NewProp_NewlyCreated_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAuthenticationAuthenticateCustomIdResult_Statics::NewProp_NewlyCreated_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAuthenticationAuthenticateCustomIdResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAuthenticationAuthenticateCustomIdResult_Statics::NewProp_EntityToken,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAuthenticationAuthenticateCustomIdResult_Statics::NewProp_NewlyCreated,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAuthenticationAuthenticateCustomIdResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"AuthenticationAuthenticateCustomIdResult",
		sizeof(FAuthenticationAuthenticateCustomIdResult),
		alignof(FAuthenticationAuthenticateCustomIdResult),
		Z_Construct_UScriptStruct_FAuthenticationAuthenticateCustomIdResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAuthenticationAuthenticateCustomIdResult_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAuthenticationAuthenticateCustomIdResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAuthenticationAuthenticateCustomIdResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAuthenticationAuthenticateCustomIdResult()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAuthenticationAuthenticateCustomIdResult_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AuthenticationAuthenticateCustomIdResult"), sizeof(FAuthenticationAuthenticateCustomIdResult), Get_Z_Construct_UScriptStruct_FAuthenticationAuthenticateCustomIdResult_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAuthenticationAuthenticateCustomIdResult_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAuthenticationAuthenticateCustomIdResult_Hash() { return 1848639084U; }

static_assert(std::is_polymorphic<FAuthenticationAuthenticateCustomIdRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FAuthenticationAuthenticateCustomIdRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FAuthenticationAuthenticateCustomIdRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FAuthenticationAuthenticateCustomIdRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAuthenticationAuthenticateCustomIdRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("AuthenticationAuthenticateCustomIdRequest"), sizeof(FAuthenticationAuthenticateCustomIdRequest), Get_Z_Construct_UScriptStruct_FAuthenticationAuthenticateCustomIdRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FAuthenticationAuthenticateCustomIdRequest>()
{
	return FAuthenticationAuthenticateCustomIdRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAuthenticationAuthenticateCustomIdRequest(FAuthenticationAuthenticateCustomIdRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("AuthenticationAuthenticateCustomIdRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFAuthenticationAuthenticateCustomIdRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFAuthenticationAuthenticateCustomIdRequest()
	{
		UScriptStruct::DeferCppStructOps<FAuthenticationAuthenticateCustomIdRequest>(FName(TEXT("AuthenticationAuthenticateCustomIdRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFAuthenticationAuthenticateCustomIdRequest;
	struct Z_Construct_UScriptStruct_FAuthenticationAuthenticateCustomIdRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CustomId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CustomTags;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAuthenticationAuthenticateCustomIdRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Create or return a game_server entity token. Caller must be a title entity. */" },
		{ "ModuleRelativePath", "Classes/PlayFabAuthenticationModels.h" },
		{ "ToolTip", "Create or return a game_server entity token. Caller must be a title entity." },
	};
#endif
	void* Z_Construct_UScriptStruct_FAuthenticationAuthenticateCustomIdRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAuthenticationAuthenticateCustomIdRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAuthenticationAuthenticateCustomIdRequest_Statics::NewProp_CustomId_MetaData[] = {
		{ "Category", "PlayFab | Authentication | Authentication Models" },
		{ "Comment", "/**\n     * The customId used to create and retrieve game_server entity tokens. This is unique at the title level. CustomId must be\n     * between 32 and 100 characters.\n     */" },
		{ "ModuleRelativePath", "Classes/PlayFabAuthenticationModels.h" },
		{ "ToolTip", "The customId used to create and retrieve game_server entity tokens. This is unique at the title level. CustomId must be\nbetween 32 and 100 characters." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAuthenticationAuthenticateCustomIdRequest_Statics::NewProp_CustomId = { "CustomId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAuthenticationAuthenticateCustomIdRequest, CustomId), METADATA_PARAMS(Z_Construct_UScriptStruct_FAuthenticationAuthenticateCustomIdRequest_Statics::NewProp_CustomId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAuthenticationAuthenticateCustomIdRequest_Statics::NewProp_CustomId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAuthenticationAuthenticateCustomIdRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | Authentication | Authentication Models" },
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
		{ "ModuleRelativePath", "Classes/PlayFabAuthenticationModels.h" },
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAuthenticationAuthenticateCustomIdRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAuthenticationAuthenticateCustomIdRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAuthenticationAuthenticateCustomIdRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAuthenticationAuthenticateCustomIdRequest_Statics::NewProp_CustomTags_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAuthenticationAuthenticateCustomIdRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAuthenticationAuthenticateCustomIdRequest_Statics::NewProp_CustomId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAuthenticationAuthenticateCustomIdRequest_Statics::NewProp_CustomTags,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAuthenticationAuthenticateCustomIdRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"AuthenticationAuthenticateCustomIdRequest",
		sizeof(FAuthenticationAuthenticateCustomIdRequest),
		alignof(FAuthenticationAuthenticateCustomIdRequest),
		Z_Construct_UScriptStruct_FAuthenticationAuthenticateCustomIdRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAuthenticationAuthenticateCustomIdRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAuthenticationAuthenticateCustomIdRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAuthenticationAuthenticateCustomIdRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAuthenticationAuthenticateCustomIdRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAuthenticationAuthenticateCustomIdRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AuthenticationAuthenticateCustomIdRequest"), sizeof(FAuthenticationAuthenticateCustomIdRequest), Get_Z_Construct_UScriptStruct_FAuthenticationAuthenticateCustomIdRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAuthenticationAuthenticateCustomIdRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAuthenticationAuthenticateCustomIdRequest_Hash() { return 612968772U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
