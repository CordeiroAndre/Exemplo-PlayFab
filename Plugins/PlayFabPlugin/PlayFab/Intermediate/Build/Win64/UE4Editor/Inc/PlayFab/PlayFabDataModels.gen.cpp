// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Classes/PlayFabDataModels.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayFabDataModels() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FDataSetObjectsResponse();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabResultCommon();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FDataSetObjectsRequest();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabRequestCommon();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FDataGetObjectsResponse();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FDataGetObjectsRequest();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FDataInitiateFileUploadsResponse();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FDataInitiateFileUploadsRequest();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FDataGetFilesResponse();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FDataGetFilesRequest();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FDataFinalizeFileUploadsResponse();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FDataFinalizeFileUploadsRequest();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FDataDeleteFilesResponse();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FDataDeleteFilesRequest();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FDataAbortFileUploadsResponse();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FDataAbortFileUploadsRequest();
// End Cross Module References

static_assert(std::is_polymorphic<FDataSetObjectsResponse>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FDataSetObjectsResponse cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

class UScriptStruct* FDataSetObjectsResponse::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FDataSetObjectsResponse_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDataSetObjectsResponse, Z_Construct_UPackage__Script_PlayFab(), TEXT("DataSetObjectsResponse"), sizeof(FDataSetObjectsResponse), Get_Z_Construct_UScriptStruct_FDataSetObjectsResponse_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FDataSetObjectsResponse>()
{
	return FDataSetObjectsResponse::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDataSetObjectsResponse(FDataSetObjectsResponse::StaticStruct, TEXT("/Script/PlayFab"), TEXT("DataSetObjectsResponse"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFDataSetObjectsResponse
{
	FScriptStruct_PlayFab_StaticRegisterNativesFDataSetObjectsResponse()
	{
		UScriptStruct::DeferCppStructOps<FDataSetObjectsResponse>(FName(TEXT("DataSetObjectsResponse")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFDataSetObjectsResponse;
	struct Z_Construct_UScriptStruct_FDataSetObjectsResponse_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProfileVersion_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ProfileVersion;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SetResults_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SetResults_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SetResults;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataSetObjectsResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabDataModels.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDataSetObjectsResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDataSetObjectsResponse>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataSetObjectsResponse_Statics::NewProp_ProfileVersion_MetaData[] = {
		{ "Category", "PlayFab | Data | Object Models" },
		{ "Comment", "/** New version of the entity profile. */" },
		{ "ModuleRelativePath", "Classes/PlayFabDataModels.h" },
		{ "ToolTip", "New version of the entity profile." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDataSetObjectsResponse_Statics::NewProp_ProfileVersion = { "ProfileVersion", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDataSetObjectsResponse, ProfileVersion), METADATA_PARAMS(Z_Construct_UScriptStruct_FDataSetObjectsResponse_Statics::NewProp_ProfileVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataSetObjectsResponse_Statics::NewProp_ProfileVersion_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDataSetObjectsResponse_Statics::NewProp_SetResults_Inner = { "SetResults", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataSetObjectsResponse_Statics::NewProp_SetResults_MetaData[] = {
		{ "Category", "PlayFab | Data | Object Models" },
		{ "Comment", "/** New version of the entity profile. */" },
		{ "ModuleRelativePath", "Classes/PlayFabDataModels.h" },
		{ "ToolTip", "New version of the entity profile." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDataSetObjectsResponse_Statics::NewProp_SetResults = { "SetResults", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDataSetObjectsResponse, SetResults), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDataSetObjectsResponse_Statics::NewProp_SetResults_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataSetObjectsResponse_Statics::NewProp_SetResults_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDataSetObjectsResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataSetObjectsResponse_Statics::NewProp_ProfileVersion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataSetObjectsResponse_Statics::NewProp_SetResults_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataSetObjectsResponse_Statics::NewProp_SetResults,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDataSetObjectsResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"DataSetObjectsResponse",
		sizeof(FDataSetObjectsResponse),
		alignof(FDataSetObjectsResponse),
		Z_Construct_UScriptStruct_FDataSetObjectsResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataSetObjectsResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDataSetObjectsResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataSetObjectsResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDataSetObjectsResponse()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDataSetObjectsResponse_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DataSetObjectsResponse"), sizeof(FDataSetObjectsResponse), Get_Z_Construct_UScriptStruct_FDataSetObjectsResponse_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDataSetObjectsResponse_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDataSetObjectsResponse_Hash() { return 420133336U; }

static_assert(std::is_polymorphic<FDataSetObjectsRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FDataSetObjectsRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FDataSetObjectsRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FDataSetObjectsRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDataSetObjectsRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("DataSetObjectsRequest"), sizeof(FDataSetObjectsRequest), Get_Z_Construct_UScriptStruct_FDataSetObjectsRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FDataSetObjectsRequest>()
{
	return FDataSetObjectsRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDataSetObjectsRequest(FDataSetObjectsRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("DataSetObjectsRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFDataSetObjectsRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFDataSetObjectsRequest()
	{
		UScriptStruct::DeferCppStructOps<FDataSetObjectsRequest>(FName(TEXT("DataSetObjectsRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFDataSetObjectsRequest;
	struct Z_Construct_UScriptStruct_FDataSetObjectsRequest_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExpectedProfileVersion_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ExpectedProfileVersion;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Objects_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Objects_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Objects;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataSetObjectsRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Sets JSON objects on the requested entity profile. May include a version number to be used to perform optimistic\n * concurrency operations during update. If the current version differs from the version in the request the request will be\n * ignored. If no version is set on the request then the value will always be updated if the values differ. Using the\n * version value does not guarantee a write though, ConcurrentEditError may still occur if multiple clients are attempting\n * to update the same profile.\n */" },
		{ "ModuleRelativePath", "Classes/PlayFabDataModels.h" },
		{ "ToolTip", "Sets JSON objects on the requested entity profile. May include a version number to be used to perform optimistic\nconcurrency operations during update. If the current version differs from the version in the request the request will be\nignored. If no version is set on the request then the value will always be updated if the values differ. Using the\nversion value does not guarantee a write though, ConcurrentEditError may still occur if multiple clients are attempting\nto update the same profile." },
	};
#endif
	void* Z_Construct_UScriptStruct_FDataSetObjectsRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDataSetObjectsRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataSetObjectsRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | Data | Object Models" },
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
		{ "ModuleRelativePath", "Classes/PlayFabDataModels.h" },
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDataSetObjectsRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDataSetObjectsRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDataSetObjectsRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataSetObjectsRequest_Statics::NewProp_CustomTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataSetObjectsRequest_Statics::NewProp_Entity_MetaData[] = {
		{ "Category", "PlayFab | Data | Object Models" },
		{ "Comment", "/** The entity to perform this action on. */" },
		{ "ModuleRelativePath", "Classes/PlayFabDataModels.h" },
		{ "ToolTip", "The entity to perform this action on." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDataSetObjectsRequest_Statics::NewProp_Entity = { "Entity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDataSetObjectsRequest, Entity), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDataSetObjectsRequest_Statics::NewProp_Entity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataSetObjectsRequest_Statics::NewProp_Entity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataSetObjectsRequest_Statics::NewProp_ExpectedProfileVersion_MetaData[] = {
		{ "Category", "PlayFab | Data | Object Models" },
		{ "Comment", "/**\n     * Optional field used for concurrency control. By specifying the previously returned value of ProfileVersion from\n     * GetProfile API, you can ensure that the object set will only be performed if the profile has not been updated by any\n     * other clients since the version you last loaded.\n     */" },
		{ "ModuleRelativePath", "Classes/PlayFabDataModels.h" },
		{ "ToolTip", "Optional field used for concurrency control. By specifying the previously returned value of ProfileVersion from\nGetProfile API, you can ensure that the object set will only be performed if the profile has not been updated by any\nother clients since the version you last loaded." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDataSetObjectsRequest_Statics::NewProp_ExpectedProfileVersion = { "ExpectedProfileVersion", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDataSetObjectsRequest, ExpectedProfileVersion), METADATA_PARAMS(Z_Construct_UScriptStruct_FDataSetObjectsRequest_Statics::NewProp_ExpectedProfileVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataSetObjectsRequest_Statics::NewProp_ExpectedProfileVersion_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDataSetObjectsRequest_Statics::NewProp_Objects_Inner = { "Objects", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataSetObjectsRequest_Statics::NewProp_Objects_MetaData[] = {
		{ "Category", "PlayFab | Data | Object Models" },
		{ "Comment", "/** Collection of objects to set on the profile. */" },
		{ "ModuleRelativePath", "Classes/PlayFabDataModels.h" },
		{ "ToolTip", "Collection of objects to set on the profile." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDataSetObjectsRequest_Statics::NewProp_Objects = { "Objects", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDataSetObjectsRequest, Objects), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDataSetObjectsRequest_Statics::NewProp_Objects_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataSetObjectsRequest_Statics::NewProp_Objects_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDataSetObjectsRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataSetObjectsRequest_Statics::NewProp_CustomTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataSetObjectsRequest_Statics::NewProp_Entity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataSetObjectsRequest_Statics::NewProp_ExpectedProfileVersion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataSetObjectsRequest_Statics::NewProp_Objects_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataSetObjectsRequest_Statics::NewProp_Objects,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDataSetObjectsRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"DataSetObjectsRequest",
		sizeof(FDataSetObjectsRequest),
		alignof(FDataSetObjectsRequest),
		Z_Construct_UScriptStruct_FDataSetObjectsRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataSetObjectsRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDataSetObjectsRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataSetObjectsRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDataSetObjectsRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDataSetObjectsRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DataSetObjectsRequest"), sizeof(FDataSetObjectsRequest), Get_Z_Construct_UScriptStruct_FDataSetObjectsRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDataSetObjectsRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDataSetObjectsRequest_Hash() { return 262364400U; }

static_assert(std::is_polymorphic<FDataGetObjectsResponse>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FDataGetObjectsResponse cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

class UScriptStruct* FDataGetObjectsResponse::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FDataGetObjectsResponse_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDataGetObjectsResponse, Z_Construct_UPackage__Script_PlayFab(), TEXT("DataGetObjectsResponse"), sizeof(FDataGetObjectsResponse), Get_Z_Construct_UScriptStruct_FDataGetObjectsResponse_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FDataGetObjectsResponse>()
{
	return FDataGetObjectsResponse::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDataGetObjectsResponse(FDataGetObjectsResponse::StaticStruct, TEXT("/Script/PlayFab"), TEXT("DataGetObjectsResponse"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFDataGetObjectsResponse
{
	FScriptStruct_PlayFab_StaticRegisterNativesFDataGetObjectsResponse()
	{
		UScriptStruct::DeferCppStructOps<FDataGetObjectsResponse>(FName(TEXT("DataGetObjectsResponse")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFDataGetObjectsResponse;
	struct Z_Construct_UScriptStruct_FDataGetObjectsResponse_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Objects_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Objects;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProfileVersion_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ProfileVersion;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataGetObjectsResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabDataModels.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDataGetObjectsResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDataGetObjectsResponse>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataGetObjectsResponse_Statics::NewProp_Entity_MetaData[] = {
		{ "Category", "PlayFab | Data | Object Models" },
		{ "Comment", "/** The entity id and type. */" },
		{ "ModuleRelativePath", "Classes/PlayFabDataModels.h" },
		{ "ToolTip", "The entity id and type." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDataGetObjectsResponse_Statics::NewProp_Entity = { "Entity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDataGetObjectsResponse, Entity), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDataGetObjectsResponse_Statics::NewProp_Entity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataGetObjectsResponse_Statics::NewProp_Entity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataGetObjectsResponse_Statics::NewProp_Objects_MetaData[] = {
		{ "Category", "PlayFab | Data | Object Models" },
		{ "Comment", "/** Requested objects that the calling entity has access to */" },
		{ "ModuleRelativePath", "Classes/PlayFabDataModels.h" },
		{ "ToolTip", "Requested objects that the calling entity has access to" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDataGetObjectsResponse_Statics::NewProp_Objects = { "Objects", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDataGetObjectsResponse, Objects), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDataGetObjectsResponse_Statics::NewProp_Objects_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataGetObjectsResponse_Statics::NewProp_Objects_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataGetObjectsResponse_Statics::NewProp_ProfileVersion_MetaData[] = {
		{ "Category", "PlayFab | Data | Object Models" },
		{ "Comment", "/** The current version of the profile, can be used for concurrency control during updates. */" },
		{ "ModuleRelativePath", "Classes/PlayFabDataModels.h" },
		{ "ToolTip", "The current version of the profile, can be used for concurrency control during updates." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDataGetObjectsResponse_Statics::NewProp_ProfileVersion = { "ProfileVersion", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDataGetObjectsResponse, ProfileVersion), METADATA_PARAMS(Z_Construct_UScriptStruct_FDataGetObjectsResponse_Statics::NewProp_ProfileVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataGetObjectsResponse_Statics::NewProp_ProfileVersion_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDataGetObjectsResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataGetObjectsResponse_Statics::NewProp_Entity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataGetObjectsResponse_Statics::NewProp_Objects,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataGetObjectsResponse_Statics::NewProp_ProfileVersion,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDataGetObjectsResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"DataGetObjectsResponse",
		sizeof(FDataGetObjectsResponse),
		alignof(FDataGetObjectsResponse),
		Z_Construct_UScriptStruct_FDataGetObjectsResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataGetObjectsResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDataGetObjectsResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataGetObjectsResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDataGetObjectsResponse()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDataGetObjectsResponse_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DataGetObjectsResponse"), sizeof(FDataGetObjectsResponse), Get_Z_Construct_UScriptStruct_FDataGetObjectsResponse_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDataGetObjectsResponse_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDataGetObjectsResponse_Hash() { return 1912468256U; }

static_assert(std::is_polymorphic<FDataGetObjectsRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FDataGetObjectsRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FDataGetObjectsRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FDataGetObjectsRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDataGetObjectsRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("DataGetObjectsRequest"), sizeof(FDataGetObjectsRequest), Get_Z_Construct_UScriptStruct_FDataGetObjectsRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FDataGetObjectsRequest>()
{
	return FDataGetObjectsRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDataGetObjectsRequest(FDataGetObjectsRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("DataGetObjectsRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFDataGetObjectsRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFDataGetObjectsRequest()
	{
		UScriptStruct::DeferCppStructOps<FDataGetObjectsRequest>(FName(TEXT("DataGetObjectsRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFDataGetObjectsRequest;
	struct Z_Construct_UScriptStruct_FDataGetObjectsRequest_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EscapeObject_MetaData[];
#endif
		static void NewProp_EscapeObject_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_EscapeObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataGetObjectsRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Gets JSON objects from an entity profile and returns it. */" },
		{ "ModuleRelativePath", "Classes/PlayFabDataModels.h" },
		{ "ToolTip", "Gets JSON objects from an entity profile and returns it." },
	};
#endif
	void* Z_Construct_UScriptStruct_FDataGetObjectsRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDataGetObjectsRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataGetObjectsRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | Data | Object Models" },
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
		{ "ModuleRelativePath", "Classes/PlayFabDataModels.h" },
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDataGetObjectsRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDataGetObjectsRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDataGetObjectsRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataGetObjectsRequest_Statics::NewProp_CustomTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataGetObjectsRequest_Statics::NewProp_Entity_MetaData[] = {
		{ "Category", "PlayFab | Data | Object Models" },
		{ "Comment", "/** The entity to perform this action on. */" },
		{ "ModuleRelativePath", "Classes/PlayFabDataModels.h" },
		{ "ToolTip", "The entity to perform this action on." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDataGetObjectsRequest_Statics::NewProp_Entity = { "Entity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDataGetObjectsRequest, Entity), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDataGetObjectsRequest_Statics::NewProp_Entity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataGetObjectsRequest_Statics::NewProp_Entity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataGetObjectsRequest_Statics::NewProp_EscapeObject_MetaData[] = {
		{ "Category", "PlayFab | Data | Object Models" },
		{ "Comment", "/**\n     * Determines whether the object will be returned as an escaped JSON string or as a un-escaped JSON object. Default is JSON\n     * object.\n     */" },
		{ "ModuleRelativePath", "Classes/PlayFabDataModels.h" },
		{ "ToolTip", "Determines whether the object will be returned as an escaped JSON string or as a un-escaped JSON object. Default is JSON\nobject." },
	};
#endif
	void Z_Construct_UScriptStruct_FDataGetObjectsRequest_Statics::NewProp_EscapeObject_SetBit(void* Obj)
	{
		((FDataGetObjectsRequest*)Obj)->EscapeObject = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDataGetObjectsRequest_Statics::NewProp_EscapeObject = { "EscapeObject", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FDataGetObjectsRequest), &Z_Construct_UScriptStruct_FDataGetObjectsRequest_Statics::NewProp_EscapeObject_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDataGetObjectsRequest_Statics::NewProp_EscapeObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataGetObjectsRequest_Statics::NewProp_EscapeObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDataGetObjectsRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataGetObjectsRequest_Statics::NewProp_CustomTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataGetObjectsRequest_Statics::NewProp_Entity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataGetObjectsRequest_Statics::NewProp_EscapeObject,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDataGetObjectsRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"DataGetObjectsRequest",
		sizeof(FDataGetObjectsRequest),
		alignof(FDataGetObjectsRequest),
		Z_Construct_UScriptStruct_FDataGetObjectsRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataGetObjectsRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDataGetObjectsRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataGetObjectsRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDataGetObjectsRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDataGetObjectsRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DataGetObjectsRequest"), sizeof(FDataGetObjectsRequest), Get_Z_Construct_UScriptStruct_FDataGetObjectsRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDataGetObjectsRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDataGetObjectsRequest_Hash() { return 3359321766U; }

static_assert(std::is_polymorphic<FDataInitiateFileUploadsResponse>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FDataInitiateFileUploadsResponse cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

class UScriptStruct* FDataInitiateFileUploadsResponse::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FDataInitiateFileUploadsResponse_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDataInitiateFileUploadsResponse, Z_Construct_UPackage__Script_PlayFab(), TEXT("DataInitiateFileUploadsResponse"), sizeof(FDataInitiateFileUploadsResponse), Get_Z_Construct_UScriptStruct_FDataInitiateFileUploadsResponse_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FDataInitiateFileUploadsResponse>()
{
	return FDataInitiateFileUploadsResponse::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDataInitiateFileUploadsResponse(FDataInitiateFileUploadsResponse::StaticStruct, TEXT("/Script/PlayFab"), TEXT("DataInitiateFileUploadsResponse"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFDataInitiateFileUploadsResponse
{
	FScriptStruct_PlayFab_StaticRegisterNativesFDataInitiateFileUploadsResponse()
	{
		UScriptStruct::DeferCppStructOps<FDataInitiateFileUploadsResponse>(FName(TEXT("DataInitiateFileUploadsResponse")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFDataInitiateFileUploadsResponse;
	struct Z_Construct_UScriptStruct_FDataInitiateFileUploadsResponse_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProfileVersion_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ProfileVersion;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UploadDetails_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UploadDetails_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_UploadDetails;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataInitiateFileUploadsResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabDataModels.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDataInitiateFileUploadsResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDataInitiateFileUploadsResponse>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataInitiateFileUploadsResponse_Statics::NewProp_Entity_MetaData[] = {
		{ "Category", "PlayFab | Data | File Models" },
		{ "Comment", "/** The entity id and type. */" },
		{ "ModuleRelativePath", "Classes/PlayFabDataModels.h" },
		{ "ToolTip", "The entity id and type." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDataInitiateFileUploadsResponse_Statics::NewProp_Entity = { "Entity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDataInitiateFileUploadsResponse, Entity), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDataInitiateFileUploadsResponse_Statics::NewProp_Entity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataInitiateFileUploadsResponse_Statics::NewProp_Entity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataInitiateFileUploadsResponse_Statics::NewProp_ProfileVersion_MetaData[] = {
		{ "Category", "PlayFab | Data | File Models" },
		{ "Comment", "/** The current version of the profile, can be used for concurrency control during updates. */" },
		{ "ModuleRelativePath", "Classes/PlayFabDataModels.h" },
		{ "ToolTip", "The current version of the profile, can be used for concurrency control during updates." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDataInitiateFileUploadsResponse_Statics::NewProp_ProfileVersion = { "ProfileVersion", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDataInitiateFileUploadsResponse, ProfileVersion), METADATA_PARAMS(Z_Construct_UScriptStruct_FDataInitiateFileUploadsResponse_Statics::NewProp_ProfileVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataInitiateFileUploadsResponse_Statics::NewProp_ProfileVersion_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDataInitiateFileUploadsResponse_Statics::NewProp_UploadDetails_Inner = { "UploadDetails", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataInitiateFileUploadsResponse_Statics::NewProp_UploadDetails_MetaData[] = {
		{ "Category", "PlayFab | Data | File Models" },
		{ "Comment", "/** Collection of file names and upload urls */" },
		{ "ModuleRelativePath", "Classes/PlayFabDataModels.h" },
		{ "ToolTip", "Collection of file names and upload urls" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDataInitiateFileUploadsResponse_Statics::NewProp_UploadDetails = { "UploadDetails", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDataInitiateFileUploadsResponse, UploadDetails), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDataInitiateFileUploadsResponse_Statics::NewProp_UploadDetails_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataInitiateFileUploadsResponse_Statics::NewProp_UploadDetails_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDataInitiateFileUploadsResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataInitiateFileUploadsResponse_Statics::NewProp_Entity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataInitiateFileUploadsResponse_Statics::NewProp_ProfileVersion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataInitiateFileUploadsResponse_Statics::NewProp_UploadDetails_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataInitiateFileUploadsResponse_Statics::NewProp_UploadDetails,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDataInitiateFileUploadsResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"DataInitiateFileUploadsResponse",
		sizeof(FDataInitiateFileUploadsResponse),
		alignof(FDataInitiateFileUploadsResponse),
		Z_Construct_UScriptStruct_FDataInitiateFileUploadsResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataInitiateFileUploadsResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDataInitiateFileUploadsResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataInitiateFileUploadsResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDataInitiateFileUploadsResponse()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDataInitiateFileUploadsResponse_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DataInitiateFileUploadsResponse"), sizeof(FDataInitiateFileUploadsResponse), Get_Z_Construct_UScriptStruct_FDataInitiateFileUploadsResponse_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDataInitiateFileUploadsResponse_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDataInitiateFileUploadsResponse_Hash() { return 1863617501U; }

static_assert(std::is_polymorphic<FDataInitiateFileUploadsRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FDataInitiateFileUploadsRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FDataInitiateFileUploadsRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FDataInitiateFileUploadsRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDataInitiateFileUploadsRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("DataInitiateFileUploadsRequest"), sizeof(FDataInitiateFileUploadsRequest), Get_Z_Construct_UScriptStruct_FDataInitiateFileUploadsRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FDataInitiateFileUploadsRequest>()
{
	return FDataInitiateFileUploadsRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDataInitiateFileUploadsRequest(FDataInitiateFileUploadsRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("DataInitiateFileUploadsRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFDataInitiateFileUploadsRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFDataInitiateFileUploadsRequest()
	{
		UScriptStruct::DeferCppStructOps<FDataInitiateFileUploadsRequest>(FName(TEXT("DataInitiateFileUploadsRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFDataInitiateFileUploadsRequest;
	struct Z_Construct_UScriptStruct_FDataInitiateFileUploadsRequest_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FileNames_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FileNames;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProfileVersion_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ProfileVersion;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataInitiateFileUploadsRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Returns URLs that may be used to upload the files for a profile 5 minutes. After using the upload calls\n * FinalizeFileUploads must be called to move the file status from pending to live.\n */" },
		{ "ModuleRelativePath", "Classes/PlayFabDataModels.h" },
		{ "ToolTip", "Returns URLs that may be used to upload the files for a profile 5 minutes. After using the upload calls\nFinalizeFileUploads must be called to move the file status from pending to live." },
	};
#endif
	void* Z_Construct_UScriptStruct_FDataInitiateFileUploadsRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDataInitiateFileUploadsRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataInitiateFileUploadsRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | Data | File Models" },
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
		{ "ModuleRelativePath", "Classes/PlayFabDataModels.h" },
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDataInitiateFileUploadsRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDataInitiateFileUploadsRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDataInitiateFileUploadsRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataInitiateFileUploadsRequest_Statics::NewProp_CustomTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataInitiateFileUploadsRequest_Statics::NewProp_Entity_MetaData[] = {
		{ "Category", "PlayFab | Data | File Models" },
		{ "Comment", "/** The entity to perform this action on. */" },
		{ "ModuleRelativePath", "Classes/PlayFabDataModels.h" },
		{ "ToolTip", "The entity to perform this action on." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDataInitiateFileUploadsRequest_Statics::NewProp_Entity = { "Entity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDataInitiateFileUploadsRequest, Entity), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDataInitiateFileUploadsRequest_Statics::NewProp_Entity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataInitiateFileUploadsRequest_Statics::NewProp_Entity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataInitiateFileUploadsRequest_Statics::NewProp_FileNames_MetaData[] = {
		{ "Category", "PlayFab | Data | File Models" },
		{ "Comment", "/** Names of the files to be set. Restricted to a-Z, 0-9, '(', ')', '_', '-' and '.' */" },
		{ "ModuleRelativePath", "Classes/PlayFabDataModels.h" },
		{ "ToolTip", "Names of the files to be set. Restricted to a-Z, 0-9, '(', ')', '_', '-' and '.'" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDataInitiateFileUploadsRequest_Statics::NewProp_FileNames = { "FileNames", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDataInitiateFileUploadsRequest, FileNames), METADATA_PARAMS(Z_Construct_UScriptStruct_FDataInitiateFileUploadsRequest_Statics::NewProp_FileNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataInitiateFileUploadsRequest_Statics::NewProp_FileNames_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataInitiateFileUploadsRequest_Statics::NewProp_ProfileVersion_MetaData[] = {
		{ "Category", "PlayFab | Data | File Models" },
		{ "Comment", "/**\n     * The expected version of the profile, if set and doesn't match the current version of the profile the operation will not\n     * be performed.\n     */" },
		{ "ModuleRelativePath", "Classes/PlayFabDataModels.h" },
		{ "ToolTip", "The expected version of the profile, if set and doesn't match the current version of the profile the operation will not\nbe performed." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDataInitiateFileUploadsRequest_Statics::NewProp_ProfileVersion = { "ProfileVersion", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDataInitiateFileUploadsRequest, ProfileVersion), METADATA_PARAMS(Z_Construct_UScriptStruct_FDataInitiateFileUploadsRequest_Statics::NewProp_ProfileVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataInitiateFileUploadsRequest_Statics::NewProp_ProfileVersion_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDataInitiateFileUploadsRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataInitiateFileUploadsRequest_Statics::NewProp_CustomTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataInitiateFileUploadsRequest_Statics::NewProp_Entity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataInitiateFileUploadsRequest_Statics::NewProp_FileNames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataInitiateFileUploadsRequest_Statics::NewProp_ProfileVersion,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDataInitiateFileUploadsRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"DataInitiateFileUploadsRequest",
		sizeof(FDataInitiateFileUploadsRequest),
		alignof(FDataInitiateFileUploadsRequest),
		Z_Construct_UScriptStruct_FDataInitiateFileUploadsRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataInitiateFileUploadsRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDataInitiateFileUploadsRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataInitiateFileUploadsRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDataInitiateFileUploadsRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDataInitiateFileUploadsRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DataInitiateFileUploadsRequest"), sizeof(FDataInitiateFileUploadsRequest), Get_Z_Construct_UScriptStruct_FDataInitiateFileUploadsRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDataInitiateFileUploadsRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDataInitiateFileUploadsRequest_Hash() { return 1778259937U; }

static_assert(std::is_polymorphic<FDataGetFilesResponse>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FDataGetFilesResponse cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

class UScriptStruct* FDataGetFilesResponse::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FDataGetFilesResponse_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDataGetFilesResponse, Z_Construct_UPackage__Script_PlayFab(), TEXT("DataGetFilesResponse"), sizeof(FDataGetFilesResponse), Get_Z_Construct_UScriptStruct_FDataGetFilesResponse_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FDataGetFilesResponse>()
{
	return FDataGetFilesResponse::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDataGetFilesResponse(FDataGetFilesResponse::StaticStruct, TEXT("/Script/PlayFab"), TEXT("DataGetFilesResponse"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFDataGetFilesResponse
{
	FScriptStruct_PlayFab_StaticRegisterNativesFDataGetFilesResponse()
	{
		UScriptStruct::DeferCppStructOps<FDataGetFilesResponse>(FName(TEXT("DataGetFilesResponse")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFDataGetFilesResponse;
	struct Z_Construct_UScriptStruct_FDataGetFilesResponse_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Metadata_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Metadata;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProfileVersion_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ProfileVersion;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataGetFilesResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabDataModels.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDataGetFilesResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDataGetFilesResponse>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataGetFilesResponse_Statics::NewProp_Entity_MetaData[] = {
		{ "Category", "PlayFab | Data | File Models" },
		{ "Comment", "/** The entity id and type. */" },
		{ "ModuleRelativePath", "Classes/PlayFabDataModels.h" },
		{ "ToolTip", "The entity id and type." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDataGetFilesResponse_Statics::NewProp_Entity = { "Entity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDataGetFilesResponse, Entity), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDataGetFilesResponse_Statics::NewProp_Entity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataGetFilesResponse_Statics::NewProp_Entity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataGetFilesResponse_Statics::NewProp_Metadata_MetaData[] = {
		{ "Category", "PlayFab | Data | File Models" },
		{ "Comment", "/** Collection of metadata for the entity's files */" },
		{ "ModuleRelativePath", "Classes/PlayFabDataModels.h" },
		{ "ToolTip", "Collection of metadata for the entity's files" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDataGetFilesResponse_Statics::NewProp_Metadata = { "Metadata", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDataGetFilesResponse, Metadata), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDataGetFilesResponse_Statics::NewProp_Metadata_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataGetFilesResponse_Statics::NewProp_Metadata_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataGetFilesResponse_Statics::NewProp_ProfileVersion_MetaData[] = {
		{ "Category", "PlayFab | Data | File Models" },
		{ "Comment", "/** The current version of the profile, can be used for concurrency control during updates. */" },
		{ "ModuleRelativePath", "Classes/PlayFabDataModels.h" },
		{ "ToolTip", "The current version of the profile, can be used for concurrency control during updates." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDataGetFilesResponse_Statics::NewProp_ProfileVersion = { "ProfileVersion", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDataGetFilesResponse, ProfileVersion), METADATA_PARAMS(Z_Construct_UScriptStruct_FDataGetFilesResponse_Statics::NewProp_ProfileVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataGetFilesResponse_Statics::NewProp_ProfileVersion_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDataGetFilesResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataGetFilesResponse_Statics::NewProp_Entity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataGetFilesResponse_Statics::NewProp_Metadata,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataGetFilesResponse_Statics::NewProp_ProfileVersion,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDataGetFilesResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"DataGetFilesResponse",
		sizeof(FDataGetFilesResponse),
		alignof(FDataGetFilesResponse),
		Z_Construct_UScriptStruct_FDataGetFilesResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataGetFilesResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDataGetFilesResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataGetFilesResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDataGetFilesResponse()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDataGetFilesResponse_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DataGetFilesResponse"), sizeof(FDataGetFilesResponse), Get_Z_Construct_UScriptStruct_FDataGetFilesResponse_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDataGetFilesResponse_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDataGetFilesResponse_Hash() { return 1523629862U; }

static_assert(std::is_polymorphic<FDataGetFilesRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FDataGetFilesRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FDataGetFilesRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FDataGetFilesRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDataGetFilesRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("DataGetFilesRequest"), sizeof(FDataGetFilesRequest), Get_Z_Construct_UScriptStruct_FDataGetFilesRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FDataGetFilesRequest>()
{
	return FDataGetFilesRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDataGetFilesRequest(FDataGetFilesRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("DataGetFilesRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFDataGetFilesRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFDataGetFilesRequest()
	{
		UScriptStruct::DeferCppStructOps<FDataGetFilesRequest>(FName(TEXT("DataGetFilesRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFDataGetFilesRequest;
	struct Z_Construct_UScriptStruct_FDataGetFilesRequest_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataGetFilesRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Returns URLs that may be used to download the files for a profile for a limited length of time. Only returns files that\n * have been successfully uploaded, files that are still pending will either return the old value, if it exists, or\n * nothing.\n */" },
		{ "ModuleRelativePath", "Classes/PlayFabDataModels.h" },
		{ "ToolTip", "Returns URLs that may be used to download the files for a profile for a limited length of time. Only returns files that\nhave been successfully uploaded, files that are still pending will either return the old value, if it exists, or\nnothing." },
	};
#endif
	void* Z_Construct_UScriptStruct_FDataGetFilesRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDataGetFilesRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataGetFilesRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | Data | File Models" },
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
		{ "ModuleRelativePath", "Classes/PlayFabDataModels.h" },
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDataGetFilesRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDataGetFilesRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDataGetFilesRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataGetFilesRequest_Statics::NewProp_CustomTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataGetFilesRequest_Statics::NewProp_Entity_MetaData[] = {
		{ "Category", "PlayFab | Data | File Models" },
		{ "Comment", "/** The entity to perform this action on. */" },
		{ "ModuleRelativePath", "Classes/PlayFabDataModels.h" },
		{ "ToolTip", "The entity to perform this action on." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDataGetFilesRequest_Statics::NewProp_Entity = { "Entity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDataGetFilesRequest, Entity), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDataGetFilesRequest_Statics::NewProp_Entity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataGetFilesRequest_Statics::NewProp_Entity_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDataGetFilesRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataGetFilesRequest_Statics::NewProp_CustomTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataGetFilesRequest_Statics::NewProp_Entity,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDataGetFilesRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"DataGetFilesRequest",
		sizeof(FDataGetFilesRequest),
		alignof(FDataGetFilesRequest),
		Z_Construct_UScriptStruct_FDataGetFilesRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataGetFilesRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDataGetFilesRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataGetFilesRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDataGetFilesRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDataGetFilesRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DataGetFilesRequest"), sizeof(FDataGetFilesRequest), Get_Z_Construct_UScriptStruct_FDataGetFilesRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDataGetFilesRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDataGetFilesRequest_Hash() { return 2655733937U; }

static_assert(std::is_polymorphic<FDataFinalizeFileUploadsResponse>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FDataFinalizeFileUploadsResponse cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

class UScriptStruct* FDataFinalizeFileUploadsResponse::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FDataFinalizeFileUploadsResponse_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDataFinalizeFileUploadsResponse, Z_Construct_UPackage__Script_PlayFab(), TEXT("DataFinalizeFileUploadsResponse"), sizeof(FDataFinalizeFileUploadsResponse), Get_Z_Construct_UScriptStruct_FDataFinalizeFileUploadsResponse_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FDataFinalizeFileUploadsResponse>()
{
	return FDataFinalizeFileUploadsResponse::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDataFinalizeFileUploadsResponse(FDataFinalizeFileUploadsResponse::StaticStruct, TEXT("/Script/PlayFab"), TEXT("DataFinalizeFileUploadsResponse"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFDataFinalizeFileUploadsResponse
{
	FScriptStruct_PlayFab_StaticRegisterNativesFDataFinalizeFileUploadsResponse()
	{
		UScriptStruct::DeferCppStructOps<FDataFinalizeFileUploadsResponse>(FName(TEXT("DataFinalizeFileUploadsResponse")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFDataFinalizeFileUploadsResponse;
	struct Z_Construct_UScriptStruct_FDataFinalizeFileUploadsResponse_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Metadata_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Metadata;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProfileVersion_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ProfileVersion;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataFinalizeFileUploadsResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabDataModels.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDataFinalizeFileUploadsResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDataFinalizeFileUploadsResponse>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataFinalizeFileUploadsResponse_Statics::NewProp_Entity_MetaData[] = {
		{ "Category", "PlayFab | Data | File Models" },
		{ "Comment", "/** The entity id and type. */" },
		{ "ModuleRelativePath", "Classes/PlayFabDataModels.h" },
		{ "ToolTip", "The entity id and type." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDataFinalizeFileUploadsResponse_Statics::NewProp_Entity = { "Entity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDataFinalizeFileUploadsResponse, Entity), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDataFinalizeFileUploadsResponse_Statics::NewProp_Entity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataFinalizeFileUploadsResponse_Statics::NewProp_Entity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataFinalizeFileUploadsResponse_Statics::NewProp_Metadata_MetaData[] = {
		{ "Category", "PlayFab | Data | File Models" },
		{ "Comment", "/** Collection of metadata for the entity's files */" },
		{ "ModuleRelativePath", "Classes/PlayFabDataModels.h" },
		{ "ToolTip", "Collection of metadata for the entity's files" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDataFinalizeFileUploadsResponse_Statics::NewProp_Metadata = { "Metadata", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDataFinalizeFileUploadsResponse, Metadata), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDataFinalizeFileUploadsResponse_Statics::NewProp_Metadata_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataFinalizeFileUploadsResponse_Statics::NewProp_Metadata_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataFinalizeFileUploadsResponse_Statics::NewProp_ProfileVersion_MetaData[] = {
		{ "Category", "PlayFab | Data | File Models" },
		{ "Comment", "/** The current version of the profile, can be used for concurrency control during updates. */" },
		{ "ModuleRelativePath", "Classes/PlayFabDataModels.h" },
		{ "ToolTip", "The current version of the profile, can be used for concurrency control during updates." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDataFinalizeFileUploadsResponse_Statics::NewProp_ProfileVersion = { "ProfileVersion", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDataFinalizeFileUploadsResponse, ProfileVersion), METADATA_PARAMS(Z_Construct_UScriptStruct_FDataFinalizeFileUploadsResponse_Statics::NewProp_ProfileVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataFinalizeFileUploadsResponse_Statics::NewProp_ProfileVersion_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDataFinalizeFileUploadsResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataFinalizeFileUploadsResponse_Statics::NewProp_Entity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataFinalizeFileUploadsResponse_Statics::NewProp_Metadata,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataFinalizeFileUploadsResponse_Statics::NewProp_ProfileVersion,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDataFinalizeFileUploadsResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"DataFinalizeFileUploadsResponse",
		sizeof(FDataFinalizeFileUploadsResponse),
		alignof(FDataFinalizeFileUploadsResponse),
		Z_Construct_UScriptStruct_FDataFinalizeFileUploadsResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataFinalizeFileUploadsResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDataFinalizeFileUploadsResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataFinalizeFileUploadsResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDataFinalizeFileUploadsResponse()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDataFinalizeFileUploadsResponse_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DataFinalizeFileUploadsResponse"), sizeof(FDataFinalizeFileUploadsResponse), Get_Z_Construct_UScriptStruct_FDataFinalizeFileUploadsResponse_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDataFinalizeFileUploadsResponse_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDataFinalizeFileUploadsResponse_Hash() { return 75695061U; }

static_assert(std::is_polymorphic<FDataFinalizeFileUploadsRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FDataFinalizeFileUploadsRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FDataFinalizeFileUploadsRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FDataFinalizeFileUploadsRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDataFinalizeFileUploadsRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("DataFinalizeFileUploadsRequest"), sizeof(FDataFinalizeFileUploadsRequest), Get_Z_Construct_UScriptStruct_FDataFinalizeFileUploadsRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FDataFinalizeFileUploadsRequest>()
{
	return FDataFinalizeFileUploadsRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDataFinalizeFileUploadsRequest(FDataFinalizeFileUploadsRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("DataFinalizeFileUploadsRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFDataFinalizeFileUploadsRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFDataFinalizeFileUploadsRequest()
	{
		UScriptStruct::DeferCppStructOps<FDataFinalizeFileUploadsRequest>(FName(TEXT("DataFinalizeFileUploadsRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFDataFinalizeFileUploadsRequest;
	struct Z_Construct_UScriptStruct_FDataFinalizeFileUploadsRequest_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FileNames_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FileNames;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProfileVersion_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ProfileVersion;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataFinalizeFileUploadsRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Finalizes the upload of the requested files. Verifies that the files have been successfully uploaded and moves the file\n * pointers from pending to live.\n */" },
		{ "ModuleRelativePath", "Classes/PlayFabDataModels.h" },
		{ "ToolTip", "Finalizes the upload of the requested files. Verifies that the files have been successfully uploaded and moves the file\npointers from pending to live." },
	};
#endif
	void* Z_Construct_UScriptStruct_FDataFinalizeFileUploadsRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDataFinalizeFileUploadsRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataFinalizeFileUploadsRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | Data | File Models" },
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
		{ "ModuleRelativePath", "Classes/PlayFabDataModels.h" },
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDataFinalizeFileUploadsRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDataFinalizeFileUploadsRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDataFinalizeFileUploadsRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataFinalizeFileUploadsRequest_Statics::NewProp_CustomTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataFinalizeFileUploadsRequest_Statics::NewProp_Entity_MetaData[] = {
		{ "Category", "PlayFab | Data | File Models" },
		{ "Comment", "/** The entity to perform this action on. */" },
		{ "ModuleRelativePath", "Classes/PlayFabDataModels.h" },
		{ "ToolTip", "The entity to perform this action on." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDataFinalizeFileUploadsRequest_Statics::NewProp_Entity = { "Entity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDataFinalizeFileUploadsRequest, Entity), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDataFinalizeFileUploadsRequest_Statics::NewProp_Entity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataFinalizeFileUploadsRequest_Statics::NewProp_Entity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataFinalizeFileUploadsRequest_Statics::NewProp_FileNames_MetaData[] = {
		{ "Category", "PlayFab | Data | File Models" },
		{ "Comment", "/** Names of the files to be finalized. Restricted to a-Z, 0-9, '(', ')', '_', '-' and '.' */" },
		{ "ModuleRelativePath", "Classes/PlayFabDataModels.h" },
		{ "ToolTip", "Names of the files to be finalized. Restricted to a-Z, 0-9, '(', ')', '_', '-' and '.'" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDataFinalizeFileUploadsRequest_Statics::NewProp_FileNames = { "FileNames", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDataFinalizeFileUploadsRequest, FileNames), METADATA_PARAMS(Z_Construct_UScriptStruct_FDataFinalizeFileUploadsRequest_Statics::NewProp_FileNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataFinalizeFileUploadsRequest_Statics::NewProp_FileNames_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataFinalizeFileUploadsRequest_Statics::NewProp_ProfileVersion_MetaData[] = {
		{ "Category", "PlayFab | Data | File Models" },
		{ "Comment", "/** The current version of the profile, can be used for concurrency control during updates. */" },
		{ "ModuleRelativePath", "Classes/PlayFabDataModels.h" },
		{ "ToolTip", "The current version of the profile, can be used for concurrency control during updates." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDataFinalizeFileUploadsRequest_Statics::NewProp_ProfileVersion = { "ProfileVersion", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDataFinalizeFileUploadsRequest, ProfileVersion), METADATA_PARAMS(Z_Construct_UScriptStruct_FDataFinalizeFileUploadsRequest_Statics::NewProp_ProfileVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataFinalizeFileUploadsRequest_Statics::NewProp_ProfileVersion_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDataFinalizeFileUploadsRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataFinalizeFileUploadsRequest_Statics::NewProp_CustomTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataFinalizeFileUploadsRequest_Statics::NewProp_Entity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataFinalizeFileUploadsRequest_Statics::NewProp_FileNames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataFinalizeFileUploadsRequest_Statics::NewProp_ProfileVersion,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDataFinalizeFileUploadsRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"DataFinalizeFileUploadsRequest",
		sizeof(FDataFinalizeFileUploadsRequest),
		alignof(FDataFinalizeFileUploadsRequest),
		Z_Construct_UScriptStruct_FDataFinalizeFileUploadsRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataFinalizeFileUploadsRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDataFinalizeFileUploadsRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataFinalizeFileUploadsRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDataFinalizeFileUploadsRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDataFinalizeFileUploadsRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DataFinalizeFileUploadsRequest"), sizeof(FDataFinalizeFileUploadsRequest), Get_Z_Construct_UScriptStruct_FDataFinalizeFileUploadsRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDataFinalizeFileUploadsRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDataFinalizeFileUploadsRequest_Hash() { return 737631918U; }

static_assert(std::is_polymorphic<FDataDeleteFilesResponse>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FDataDeleteFilesResponse cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

class UScriptStruct* FDataDeleteFilesResponse::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FDataDeleteFilesResponse_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDataDeleteFilesResponse, Z_Construct_UPackage__Script_PlayFab(), TEXT("DataDeleteFilesResponse"), sizeof(FDataDeleteFilesResponse), Get_Z_Construct_UScriptStruct_FDataDeleteFilesResponse_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FDataDeleteFilesResponse>()
{
	return FDataDeleteFilesResponse::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDataDeleteFilesResponse(FDataDeleteFilesResponse::StaticStruct, TEXT("/Script/PlayFab"), TEXT("DataDeleteFilesResponse"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFDataDeleteFilesResponse
{
	FScriptStruct_PlayFab_StaticRegisterNativesFDataDeleteFilesResponse()
	{
		UScriptStruct::DeferCppStructOps<FDataDeleteFilesResponse>(FName(TEXT("DataDeleteFilesResponse")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFDataDeleteFilesResponse;
	struct Z_Construct_UScriptStruct_FDataDeleteFilesResponse_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProfileVersion_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ProfileVersion;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataDeleteFilesResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabDataModels.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDataDeleteFilesResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDataDeleteFilesResponse>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataDeleteFilesResponse_Statics::NewProp_Entity_MetaData[] = {
		{ "Category", "PlayFab | Data | File Models" },
		{ "Comment", "/** The entity id and type. */" },
		{ "ModuleRelativePath", "Classes/PlayFabDataModels.h" },
		{ "ToolTip", "The entity id and type." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDataDeleteFilesResponse_Statics::NewProp_Entity = { "Entity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDataDeleteFilesResponse, Entity), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDataDeleteFilesResponse_Statics::NewProp_Entity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataDeleteFilesResponse_Statics::NewProp_Entity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataDeleteFilesResponse_Statics::NewProp_ProfileVersion_MetaData[] = {
		{ "Category", "PlayFab | Data | File Models" },
		{ "Comment", "/** The current version of the profile, can be used for concurrency control during updates. */" },
		{ "ModuleRelativePath", "Classes/PlayFabDataModels.h" },
		{ "ToolTip", "The current version of the profile, can be used for concurrency control during updates." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDataDeleteFilesResponse_Statics::NewProp_ProfileVersion = { "ProfileVersion", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDataDeleteFilesResponse, ProfileVersion), METADATA_PARAMS(Z_Construct_UScriptStruct_FDataDeleteFilesResponse_Statics::NewProp_ProfileVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataDeleteFilesResponse_Statics::NewProp_ProfileVersion_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDataDeleteFilesResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataDeleteFilesResponse_Statics::NewProp_Entity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataDeleteFilesResponse_Statics::NewProp_ProfileVersion,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDataDeleteFilesResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"DataDeleteFilesResponse",
		sizeof(FDataDeleteFilesResponse),
		alignof(FDataDeleteFilesResponse),
		Z_Construct_UScriptStruct_FDataDeleteFilesResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataDeleteFilesResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDataDeleteFilesResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataDeleteFilesResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDataDeleteFilesResponse()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDataDeleteFilesResponse_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DataDeleteFilesResponse"), sizeof(FDataDeleteFilesResponse), Get_Z_Construct_UScriptStruct_FDataDeleteFilesResponse_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDataDeleteFilesResponse_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDataDeleteFilesResponse_Hash() { return 2688916787U; }

static_assert(std::is_polymorphic<FDataDeleteFilesRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FDataDeleteFilesRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FDataDeleteFilesRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FDataDeleteFilesRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDataDeleteFilesRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("DataDeleteFilesRequest"), sizeof(FDataDeleteFilesRequest), Get_Z_Construct_UScriptStruct_FDataDeleteFilesRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FDataDeleteFilesRequest>()
{
	return FDataDeleteFilesRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDataDeleteFilesRequest(FDataDeleteFilesRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("DataDeleteFilesRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFDataDeleteFilesRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFDataDeleteFilesRequest()
	{
		UScriptStruct::DeferCppStructOps<FDataDeleteFilesRequest>(FName(TEXT("DataDeleteFilesRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFDataDeleteFilesRequest;
	struct Z_Construct_UScriptStruct_FDataDeleteFilesRequest_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FileNames_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FileNames;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProfileVersion_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ProfileVersion;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataDeleteFilesRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Deletes the requested files from the entity's profile. */" },
		{ "ModuleRelativePath", "Classes/PlayFabDataModels.h" },
		{ "ToolTip", "Deletes the requested files from the entity's profile." },
	};
#endif
	void* Z_Construct_UScriptStruct_FDataDeleteFilesRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDataDeleteFilesRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataDeleteFilesRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | Data | File Models" },
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
		{ "ModuleRelativePath", "Classes/PlayFabDataModels.h" },
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDataDeleteFilesRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDataDeleteFilesRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDataDeleteFilesRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataDeleteFilesRequest_Statics::NewProp_CustomTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataDeleteFilesRequest_Statics::NewProp_Entity_MetaData[] = {
		{ "Category", "PlayFab | Data | File Models" },
		{ "Comment", "/** The entity to perform this action on. */" },
		{ "ModuleRelativePath", "Classes/PlayFabDataModels.h" },
		{ "ToolTip", "The entity to perform this action on." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDataDeleteFilesRequest_Statics::NewProp_Entity = { "Entity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDataDeleteFilesRequest, Entity), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDataDeleteFilesRequest_Statics::NewProp_Entity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataDeleteFilesRequest_Statics::NewProp_Entity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataDeleteFilesRequest_Statics::NewProp_FileNames_MetaData[] = {
		{ "Category", "PlayFab | Data | File Models" },
		{ "Comment", "/** Names of the files to be deleted. */" },
		{ "ModuleRelativePath", "Classes/PlayFabDataModels.h" },
		{ "ToolTip", "Names of the files to be deleted." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDataDeleteFilesRequest_Statics::NewProp_FileNames = { "FileNames", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDataDeleteFilesRequest, FileNames), METADATA_PARAMS(Z_Construct_UScriptStruct_FDataDeleteFilesRequest_Statics::NewProp_FileNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataDeleteFilesRequest_Statics::NewProp_FileNames_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataDeleteFilesRequest_Statics::NewProp_ProfileVersion_MetaData[] = {
		{ "Category", "PlayFab | Data | File Models" },
		{ "Comment", "/**\n     * The expected version of the profile, if set and doesn't match the current version of the profile the operation will not\n     * be performed.\n     */" },
		{ "ModuleRelativePath", "Classes/PlayFabDataModels.h" },
		{ "ToolTip", "The expected version of the profile, if set and doesn't match the current version of the profile the operation will not\nbe performed." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDataDeleteFilesRequest_Statics::NewProp_ProfileVersion = { "ProfileVersion", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDataDeleteFilesRequest, ProfileVersion), METADATA_PARAMS(Z_Construct_UScriptStruct_FDataDeleteFilesRequest_Statics::NewProp_ProfileVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataDeleteFilesRequest_Statics::NewProp_ProfileVersion_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDataDeleteFilesRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataDeleteFilesRequest_Statics::NewProp_CustomTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataDeleteFilesRequest_Statics::NewProp_Entity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataDeleteFilesRequest_Statics::NewProp_FileNames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataDeleteFilesRequest_Statics::NewProp_ProfileVersion,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDataDeleteFilesRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"DataDeleteFilesRequest",
		sizeof(FDataDeleteFilesRequest),
		alignof(FDataDeleteFilesRequest),
		Z_Construct_UScriptStruct_FDataDeleteFilesRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataDeleteFilesRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDataDeleteFilesRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataDeleteFilesRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDataDeleteFilesRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDataDeleteFilesRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DataDeleteFilesRequest"), sizeof(FDataDeleteFilesRequest), Get_Z_Construct_UScriptStruct_FDataDeleteFilesRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDataDeleteFilesRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDataDeleteFilesRequest_Hash() { return 136179132U; }

static_assert(std::is_polymorphic<FDataAbortFileUploadsResponse>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FDataAbortFileUploadsResponse cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

class UScriptStruct* FDataAbortFileUploadsResponse::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FDataAbortFileUploadsResponse_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDataAbortFileUploadsResponse, Z_Construct_UPackage__Script_PlayFab(), TEXT("DataAbortFileUploadsResponse"), sizeof(FDataAbortFileUploadsResponse), Get_Z_Construct_UScriptStruct_FDataAbortFileUploadsResponse_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FDataAbortFileUploadsResponse>()
{
	return FDataAbortFileUploadsResponse::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDataAbortFileUploadsResponse(FDataAbortFileUploadsResponse::StaticStruct, TEXT("/Script/PlayFab"), TEXT("DataAbortFileUploadsResponse"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFDataAbortFileUploadsResponse
{
	FScriptStruct_PlayFab_StaticRegisterNativesFDataAbortFileUploadsResponse()
	{
		UScriptStruct::DeferCppStructOps<FDataAbortFileUploadsResponse>(FName(TEXT("DataAbortFileUploadsResponse")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFDataAbortFileUploadsResponse;
	struct Z_Construct_UScriptStruct_FDataAbortFileUploadsResponse_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProfileVersion_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ProfileVersion;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataAbortFileUploadsResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabDataModels.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDataAbortFileUploadsResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDataAbortFileUploadsResponse>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataAbortFileUploadsResponse_Statics::NewProp_Entity_MetaData[] = {
		{ "Category", "PlayFab | Data | File Models" },
		{ "Comment", "/** The entity id and type. */" },
		{ "ModuleRelativePath", "Classes/PlayFabDataModels.h" },
		{ "ToolTip", "The entity id and type." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDataAbortFileUploadsResponse_Statics::NewProp_Entity = { "Entity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDataAbortFileUploadsResponse, Entity), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDataAbortFileUploadsResponse_Statics::NewProp_Entity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataAbortFileUploadsResponse_Statics::NewProp_Entity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataAbortFileUploadsResponse_Statics::NewProp_ProfileVersion_MetaData[] = {
		{ "Category", "PlayFab | Data | File Models" },
		{ "Comment", "/** The current version of the profile, can be used for concurrency control during updates. */" },
		{ "ModuleRelativePath", "Classes/PlayFabDataModels.h" },
		{ "ToolTip", "The current version of the profile, can be used for concurrency control during updates." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDataAbortFileUploadsResponse_Statics::NewProp_ProfileVersion = { "ProfileVersion", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDataAbortFileUploadsResponse, ProfileVersion), METADATA_PARAMS(Z_Construct_UScriptStruct_FDataAbortFileUploadsResponse_Statics::NewProp_ProfileVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataAbortFileUploadsResponse_Statics::NewProp_ProfileVersion_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDataAbortFileUploadsResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataAbortFileUploadsResponse_Statics::NewProp_Entity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataAbortFileUploadsResponse_Statics::NewProp_ProfileVersion,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDataAbortFileUploadsResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"DataAbortFileUploadsResponse",
		sizeof(FDataAbortFileUploadsResponse),
		alignof(FDataAbortFileUploadsResponse),
		Z_Construct_UScriptStruct_FDataAbortFileUploadsResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataAbortFileUploadsResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDataAbortFileUploadsResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataAbortFileUploadsResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDataAbortFileUploadsResponse()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDataAbortFileUploadsResponse_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DataAbortFileUploadsResponse"), sizeof(FDataAbortFileUploadsResponse), Get_Z_Construct_UScriptStruct_FDataAbortFileUploadsResponse_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDataAbortFileUploadsResponse_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDataAbortFileUploadsResponse_Hash() { return 3704248028U; }

static_assert(std::is_polymorphic<FDataAbortFileUploadsRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FDataAbortFileUploadsRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FDataAbortFileUploadsRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FDataAbortFileUploadsRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDataAbortFileUploadsRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("DataAbortFileUploadsRequest"), sizeof(FDataAbortFileUploadsRequest), Get_Z_Construct_UScriptStruct_FDataAbortFileUploadsRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FDataAbortFileUploadsRequest>()
{
	return FDataAbortFileUploadsRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDataAbortFileUploadsRequest(FDataAbortFileUploadsRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("DataAbortFileUploadsRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFDataAbortFileUploadsRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFDataAbortFileUploadsRequest()
	{
		UScriptStruct::DeferCppStructOps<FDataAbortFileUploadsRequest>(FName(TEXT("DataAbortFileUploadsRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFDataAbortFileUploadsRequest;
	struct Z_Construct_UScriptStruct_FDataAbortFileUploadsRequest_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FileNames_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FileNames;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProfileVersion_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ProfileVersion;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataAbortFileUploadsRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Aborts the pending upload of the requested files. */" },
		{ "ModuleRelativePath", "Classes/PlayFabDataModels.h" },
		{ "ToolTip", "Aborts the pending upload of the requested files." },
	};
#endif
	void* Z_Construct_UScriptStruct_FDataAbortFileUploadsRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDataAbortFileUploadsRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataAbortFileUploadsRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | Data | File Models" },
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
		{ "ModuleRelativePath", "Classes/PlayFabDataModels.h" },
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDataAbortFileUploadsRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDataAbortFileUploadsRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDataAbortFileUploadsRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataAbortFileUploadsRequest_Statics::NewProp_CustomTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataAbortFileUploadsRequest_Statics::NewProp_Entity_MetaData[] = {
		{ "Category", "PlayFab | Data | File Models" },
		{ "Comment", "/** The entity to perform this action on. */" },
		{ "ModuleRelativePath", "Classes/PlayFabDataModels.h" },
		{ "ToolTip", "The entity to perform this action on." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDataAbortFileUploadsRequest_Statics::NewProp_Entity = { "Entity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDataAbortFileUploadsRequest, Entity), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDataAbortFileUploadsRequest_Statics::NewProp_Entity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataAbortFileUploadsRequest_Statics::NewProp_Entity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataAbortFileUploadsRequest_Statics::NewProp_FileNames_MetaData[] = {
		{ "Category", "PlayFab | Data | File Models" },
		{ "Comment", "/** Names of the files to have their pending uploads aborted. */" },
		{ "ModuleRelativePath", "Classes/PlayFabDataModels.h" },
		{ "ToolTip", "Names of the files to have their pending uploads aborted." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDataAbortFileUploadsRequest_Statics::NewProp_FileNames = { "FileNames", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDataAbortFileUploadsRequest, FileNames), METADATA_PARAMS(Z_Construct_UScriptStruct_FDataAbortFileUploadsRequest_Statics::NewProp_FileNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataAbortFileUploadsRequest_Statics::NewProp_FileNames_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataAbortFileUploadsRequest_Statics::NewProp_ProfileVersion_MetaData[] = {
		{ "Category", "PlayFab | Data | File Models" },
		{ "Comment", "/**\n     * The expected version of the profile, if set and doesn't match the current version of the profile the operation will not\n     * be performed.\n     */" },
		{ "ModuleRelativePath", "Classes/PlayFabDataModels.h" },
		{ "ToolTip", "The expected version of the profile, if set and doesn't match the current version of the profile the operation will not\nbe performed." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDataAbortFileUploadsRequest_Statics::NewProp_ProfileVersion = { "ProfileVersion", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDataAbortFileUploadsRequest, ProfileVersion), METADATA_PARAMS(Z_Construct_UScriptStruct_FDataAbortFileUploadsRequest_Statics::NewProp_ProfileVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataAbortFileUploadsRequest_Statics::NewProp_ProfileVersion_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDataAbortFileUploadsRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataAbortFileUploadsRequest_Statics::NewProp_CustomTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataAbortFileUploadsRequest_Statics::NewProp_Entity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataAbortFileUploadsRequest_Statics::NewProp_FileNames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataAbortFileUploadsRequest_Statics::NewProp_ProfileVersion,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDataAbortFileUploadsRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"DataAbortFileUploadsRequest",
		sizeof(FDataAbortFileUploadsRequest),
		alignof(FDataAbortFileUploadsRequest),
		Z_Construct_UScriptStruct_FDataAbortFileUploadsRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataAbortFileUploadsRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDataAbortFileUploadsRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataAbortFileUploadsRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDataAbortFileUploadsRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDataAbortFileUploadsRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DataAbortFileUploadsRequest"), sizeof(FDataAbortFileUploadsRequest), Get_Z_Construct_UScriptStruct_FDataAbortFileUploadsRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDataAbortFileUploadsRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDataAbortFileUploadsRequest_Hash() { return 3058150063U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
