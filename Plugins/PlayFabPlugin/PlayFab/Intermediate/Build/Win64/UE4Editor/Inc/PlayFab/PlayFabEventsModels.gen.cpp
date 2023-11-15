// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Classes/PlayFabEventsModels.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayFabEventsModels() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FEventsWriteEventsResponse();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabResultCommon();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FEventsWriteEventsRequest();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabRequestCommon();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FEventsSetTelemetryKeyActiveResponse();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FEventsSetTelemetryKeyActiveRequest();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FEventsListTelemetryKeysResponse();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FEventsListTelemetryKeysRequest();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FEventsGetTelemetryKeyResponse();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FEventsGetTelemetryKeyRequest();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FEventsDeleteTelemetryKeyResponse();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FEventsDeleteTelemetryKeyRequest();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FEventsCreateTelemetryKeyResponse();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FEventsCreateTelemetryKeyRequest();
// End Cross Module References

static_assert(std::is_polymorphic<FEventsWriteEventsResponse>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FEventsWriteEventsResponse cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

class UScriptStruct* FEventsWriteEventsResponse::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FEventsWriteEventsResponse_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEventsWriteEventsResponse, Z_Construct_UPackage__Script_PlayFab(), TEXT("EventsWriteEventsResponse"), sizeof(FEventsWriteEventsResponse), Get_Z_Construct_UScriptStruct_FEventsWriteEventsResponse_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FEventsWriteEventsResponse>()
{
	return FEventsWriteEventsResponse::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEventsWriteEventsResponse(FEventsWriteEventsResponse::StaticStruct, TEXT("/Script/PlayFab"), TEXT("EventsWriteEventsResponse"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFEventsWriteEventsResponse
{
	FScriptStruct_PlayFab_StaticRegisterNativesFEventsWriteEventsResponse()
	{
		UScriptStruct::DeferCppStructOps<FEventsWriteEventsResponse>(FName(TEXT("EventsWriteEventsResponse")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFEventsWriteEventsResponse;
	struct Z_Construct_UScriptStruct_FEventsWriteEventsResponse_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssignedEventIds_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AssignedEventIds;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEventsWriteEventsResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabEventsModels.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEventsWriteEventsResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEventsWriteEventsResponse>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEventsWriteEventsResponse_Statics::NewProp_AssignedEventIds_MetaData[] = {
		{ "Category", "PlayFab | Events | PlayStream Events Models" },
		{ "Comment", "/**\n     * The unique identifiers assigned by the server to the events, in the same order as the events in the request. Only\n     * returned if FlushToPlayStream option is true.\n     */" },
		{ "ModuleRelativePath", "Classes/PlayFabEventsModels.h" },
		{ "ToolTip", "The unique identifiers assigned by the server to the events, in the same order as the events in the request. Only\nreturned if FlushToPlayStream option is true." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEventsWriteEventsResponse_Statics::NewProp_AssignedEventIds = { "AssignedEventIds", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEventsWriteEventsResponse, AssignedEventIds), METADATA_PARAMS(Z_Construct_UScriptStruct_FEventsWriteEventsResponse_Statics::NewProp_AssignedEventIds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEventsWriteEventsResponse_Statics::NewProp_AssignedEventIds_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEventsWriteEventsResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEventsWriteEventsResponse_Statics::NewProp_AssignedEventIds,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEventsWriteEventsResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"EventsWriteEventsResponse",
		sizeof(FEventsWriteEventsResponse),
		alignof(FEventsWriteEventsResponse),
		Z_Construct_UScriptStruct_FEventsWriteEventsResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEventsWriteEventsResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEventsWriteEventsResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEventsWriteEventsResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEventsWriteEventsResponse()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEventsWriteEventsResponse_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EventsWriteEventsResponse"), sizeof(FEventsWriteEventsResponse), Get_Z_Construct_UScriptStruct_FEventsWriteEventsResponse_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEventsWriteEventsResponse_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEventsWriteEventsResponse_Hash() { return 3517599118U; }

static_assert(std::is_polymorphic<FEventsWriteEventsRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FEventsWriteEventsRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FEventsWriteEventsRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FEventsWriteEventsRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEventsWriteEventsRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("EventsWriteEventsRequest"), sizeof(FEventsWriteEventsRequest), Get_Z_Construct_UScriptStruct_FEventsWriteEventsRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FEventsWriteEventsRequest>()
{
	return FEventsWriteEventsRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEventsWriteEventsRequest(FEventsWriteEventsRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("EventsWriteEventsRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFEventsWriteEventsRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFEventsWriteEventsRequest()
	{
		UScriptStruct::DeferCppStructOps<FEventsWriteEventsRequest>(FName(TEXT("EventsWriteEventsRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFEventsWriteEventsRequest;
	struct Z_Construct_UScriptStruct_FEventsWriteEventsRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CustomTags;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Events_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Events_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Events;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEventsWriteEventsRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabEventsModels.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEventsWriteEventsRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEventsWriteEventsRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEventsWriteEventsRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | Events | PlayStream Events Models" },
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
		{ "ModuleRelativePath", "Classes/PlayFabEventsModels.h" },
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FEventsWriteEventsRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEventsWriteEventsRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FEventsWriteEventsRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEventsWriteEventsRequest_Statics::NewProp_CustomTags_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FEventsWriteEventsRequest_Statics::NewProp_Events_Inner = { "Events", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEventsWriteEventsRequest_Statics::NewProp_Events_MetaData[] = {
		{ "Category", "PlayFab | Events | PlayStream Events Models" },
		{ "Comment", "/** The collection of events to write. Up to 200 events can be written per request. */" },
		{ "ModuleRelativePath", "Classes/PlayFabEventsModels.h" },
		{ "ToolTip", "The collection of events to write. Up to 200 events can be written per request." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FEventsWriteEventsRequest_Statics::NewProp_Events = { "Events", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEventsWriteEventsRequest, Events), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FEventsWriteEventsRequest_Statics::NewProp_Events_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEventsWriteEventsRequest_Statics::NewProp_Events_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEventsWriteEventsRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEventsWriteEventsRequest_Statics::NewProp_CustomTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEventsWriteEventsRequest_Statics::NewProp_Events_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEventsWriteEventsRequest_Statics::NewProp_Events,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEventsWriteEventsRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"EventsWriteEventsRequest",
		sizeof(FEventsWriteEventsRequest),
		alignof(FEventsWriteEventsRequest),
		Z_Construct_UScriptStruct_FEventsWriteEventsRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEventsWriteEventsRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEventsWriteEventsRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEventsWriteEventsRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEventsWriteEventsRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEventsWriteEventsRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EventsWriteEventsRequest"), sizeof(FEventsWriteEventsRequest), Get_Z_Construct_UScriptStruct_FEventsWriteEventsRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEventsWriteEventsRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEventsWriteEventsRequest_Hash() { return 802260383U; }

static_assert(std::is_polymorphic<FEventsSetTelemetryKeyActiveResponse>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FEventsSetTelemetryKeyActiveResponse cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

class UScriptStruct* FEventsSetTelemetryKeyActiveResponse::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FEventsSetTelemetryKeyActiveResponse_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEventsSetTelemetryKeyActiveResponse, Z_Construct_UPackage__Script_PlayFab(), TEXT("EventsSetTelemetryKeyActiveResponse"), sizeof(FEventsSetTelemetryKeyActiveResponse), Get_Z_Construct_UScriptStruct_FEventsSetTelemetryKeyActiveResponse_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FEventsSetTelemetryKeyActiveResponse>()
{
	return FEventsSetTelemetryKeyActiveResponse::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEventsSetTelemetryKeyActiveResponse(FEventsSetTelemetryKeyActiveResponse::StaticStruct, TEXT("/Script/PlayFab"), TEXT("EventsSetTelemetryKeyActiveResponse"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFEventsSetTelemetryKeyActiveResponse
{
	FScriptStruct_PlayFab_StaticRegisterNativesFEventsSetTelemetryKeyActiveResponse()
	{
		UScriptStruct::DeferCppStructOps<FEventsSetTelemetryKeyActiveResponse>(FName(TEXT("EventsSetTelemetryKeyActiveResponse")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFEventsSetTelemetryKeyActiveResponse;
	struct Z_Construct_UScriptStruct_FEventsSetTelemetryKeyActiveResponse_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeyDetails_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_KeyDetails;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WasKeyUpdated_MetaData[];
#endif
		static void NewProp_WasKeyUpdated_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_WasKeyUpdated;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEventsSetTelemetryKeyActiveResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabEventsModels.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEventsSetTelemetryKeyActiveResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEventsSetTelemetryKeyActiveResponse>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEventsSetTelemetryKeyActiveResponse_Statics::NewProp_KeyDetails_MetaData[] = {
		{ "Category", "PlayFab | Events | PlayStream Events Models" },
		{ "Comment", "/** The most current details about the telemetry key that was to be updated. */" },
		{ "ModuleRelativePath", "Classes/PlayFabEventsModels.h" },
		{ "ToolTip", "The most current details about the telemetry key that was to be updated." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FEventsSetTelemetryKeyActiveResponse_Statics::NewProp_KeyDetails = { "KeyDetails", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEventsSetTelemetryKeyActiveResponse, KeyDetails), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FEventsSetTelemetryKeyActiveResponse_Statics::NewProp_KeyDetails_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEventsSetTelemetryKeyActiveResponse_Statics::NewProp_KeyDetails_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEventsSetTelemetryKeyActiveResponse_Statics::NewProp_WasKeyUpdated_MetaData[] = {
		{ "Category", "PlayFab | Events | PlayStream Events Models" },
		{ "Comment", "/** Indicates whether or not the key was updated. If false, the key was already in the desired state. */" },
		{ "ModuleRelativePath", "Classes/PlayFabEventsModels.h" },
		{ "ToolTip", "Indicates whether or not the key was updated. If false, the key was already in the desired state." },
	};
#endif
	void Z_Construct_UScriptStruct_FEventsSetTelemetryKeyActiveResponse_Statics::NewProp_WasKeyUpdated_SetBit(void* Obj)
	{
		((FEventsSetTelemetryKeyActiveResponse*)Obj)->WasKeyUpdated = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEventsSetTelemetryKeyActiveResponse_Statics::NewProp_WasKeyUpdated = { "WasKeyUpdated", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FEventsSetTelemetryKeyActiveResponse), &Z_Construct_UScriptStruct_FEventsSetTelemetryKeyActiveResponse_Statics::NewProp_WasKeyUpdated_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FEventsSetTelemetryKeyActiveResponse_Statics::NewProp_WasKeyUpdated_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEventsSetTelemetryKeyActiveResponse_Statics::NewProp_WasKeyUpdated_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEventsSetTelemetryKeyActiveResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEventsSetTelemetryKeyActiveResponse_Statics::NewProp_KeyDetails,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEventsSetTelemetryKeyActiveResponse_Statics::NewProp_WasKeyUpdated,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEventsSetTelemetryKeyActiveResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"EventsSetTelemetryKeyActiveResponse",
		sizeof(FEventsSetTelemetryKeyActiveResponse),
		alignof(FEventsSetTelemetryKeyActiveResponse),
		Z_Construct_UScriptStruct_FEventsSetTelemetryKeyActiveResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEventsSetTelemetryKeyActiveResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEventsSetTelemetryKeyActiveResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEventsSetTelemetryKeyActiveResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEventsSetTelemetryKeyActiveResponse()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEventsSetTelemetryKeyActiveResponse_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EventsSetTelemetryKeyActiveResponse"), sizeof(FEventsSetTelemetryKeyActiveResponse), Get_Z_Construct_UScriptStruct_FEventsSetTelemetryKeyActiveResponse_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEventsSetTelemetryKeyActiveResponse_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEventsSetTelemetryKeyActiveResponse_Hash() { return 1372420239U; }

static_assert(std::is_polymorphic<FEventsSetTelemetryKeyActiveRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FEventsSetTelemetryKeyActiveRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FEventsSetTelemetryKeyActiveRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FEventsSetTelemetryKeyActiveRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEventsSetTelemetryKeyActiveRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("EventsSetTelemetryKeyActiveRequest"), sizeof(FEventsSetTelemetryKeyActiveRequest), Get_Z_Construct_UScriptStruct_FEventsSetTelemetryKeyActiveRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FEventsSetTelemetryKeyActiveRequest>()
{
	return FEventsSetTelemetryKeyActiveRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEventsSetTelemetryKeyActiveRequest(FEventsSetTelemetryKeyActiveRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("EventsSetTelemetryKeyActiveRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFEventsSetTelemetryKeyActiveRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFEventsSetTelemetryKeyActiveRequest()
	{
		UScriptStruct::DeferCppStructOps<FEventsSetTelemetryKeyActiveRequest>(FName(TEXT("EventsSetTelemetryKeyActiveRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFEventsSetTelemetryKeyActiveRequest;
	struct Z_Construct_UScriptStruct_FEventsSetTelemetryKeyActiveRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Active_MetaData[];
#endif
		static void NewProp_Active_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Active;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CustomTags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Entity_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Entity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeyName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_KeyName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEventsSetTelemetryKeyActiveRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabEventsModels.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEventsSetTelemetryKeyActiveRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEventsSetTelemetryKeyActiveRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEventsSetTelemetryKeyActiveRequest_Statics::NewProp_Active_MetaData[] = {
		{ "Category", "PlayFab | Events | PlayStream Events Models" },
		{ "Comment", "/** Whether to set the key to active (true) or deactivated (false). */" },
		{ "ModuleRelativePath", "Classes/PlayFabEventsModels.h" },
		{ "ToolTip", "Whether to set the key to active (true) or deactivated (false)." },
	};
#endif
	void Z_Construct_UScriptStruct_FEventsSetTelemetryKeyActiveRequest_Statics::NewProp_Active_SetBit(void* Obj)
	{
		((FEventsSetTelemetryKeyActiveRequest*)Obj)->Active = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEventsSetTelemetryKeyActiveRequest_Statics::NewProp_Active = { "Active", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FEventsSetTelemetryKeyActiveRequest), &Z_Construct_UScriptStruct_FEventsSetTelemetryKeyActiveRequest_Statics::NewProp_Active_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FEventsSetTelemetryKeyActiveRequest_Statics::NewProp_Active_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEventsSetTelemetryKeyActiveRequest_Statics::NewProp_Active_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEventsSetTelemetryKeyActiveRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | Events | PlayStream Events Models" },
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
		{ "ModuleRelativePath", "Classes/PlayFabEventsModels.h" },
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FEventsSetTelemetryKeyActiveRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEventsSetTelemetryKeyActiveRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FEventsSetTelemetryKeyActiveRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEventsSetTelemetryKeyActiveRequest_Statics::NewProp_CustomTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEventsSetTelemetryKeyActiveRequest_Statics::NewProp_Entity_MetaData[] = {
		{ "Category", "PlayFab | Events | PlayStream Events Models" },
		{ "Comment", "/** The optional entity to perform this action on. Defaults to the currently logged in entity. */" },
		{ "ModuleRelativePath", "Classes/PlayFabEventsModels.h" },
		{ "ToolTip", "The optional entity to perform this action on. Defaults to the currently logged in entity." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FEventsSetTelemetryKeyActiveRequest_Statics::NewProp_Entity = { "Entity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEventsSetTelemetryKeyActiveRequest, Entity), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FEventsSetTelemetryKeyActiveRequest_Statics::NewProp_Entity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEventsSetTelemetryKeyActiveRequest_Statics::NewProp_Entity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEventsSetTelemetryKeyActiveRequest_Statics::NewProp_KeyName_MetaData[] = {
		{ "Category", "PlayFab | Events | PlayStream Events Models" },
		{ "Comment", "/** The name of the key to update. */" },
		{ "ModuleRelativePath", "Classes/PlayFabEventsModels.h" },
		{ "ToolTip", "The name of the key to update." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEventsSetTelemetryKeyActiveRequest_Statics::NewProp_KeyName = { "KeyName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEventsSetTelemetryKeyActiveRequest, KeyName), METADATA_PARAMS(Z_Construct_UScriptStruct_FEventsSetTelemetryKeyActiveRequest_Statics::NewProp_KeyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEventsSetTelemetryKeyActiveRequest_Statics::NewProp_KeyName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEventsSetTelemetryKeyActiveRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEventsSetTelemetryKeyActiveRequest_Statics::NewProp_Active,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEventsSetTelemetryKeyActiveRequest_Statics::NewProp_CustomTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEventsSetTelemetryKeyActiveRequest_Statics::NewProp_Entity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEventsSetTelemetryKeyActiveRequest_Statics::NewProp_KeyName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEventsSetTelemetryKeyActiveRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"EventsSetTelemetryKeyActiveRequest",
		sizeof(FEventsSetTelemetryKeyActiveRequest),
		alignof(FEventsSetTelemetryKeyActiveRequest),
		Z_Construct_UScriptStruct_FEventsSetTelemetryKeyActiveRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEventsSetTelemetryKeyActiveRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEventsSetTelemetryKeyActiveRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEventsSetTelemetryKeyActiveRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEventsSetTelemetryKeyActiveRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEventsSetTelemetryKeyActiveRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EventsSetTelemetryKeyActiveRequest"), sizeof(FEventsSetTelemetryKeyActiveRequest), Get_Z_Construct_UScriptStruct_FEventsSetTelemetryKeyActiveRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEventsSetTelemetryKeyActiveRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEventsSetTelemetryKeyActiveRequest_Hash() { return 452572620U; }

static_assert(std::is_polymorphic<FEventsListTelemetryKeysResponse>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FEventsListTelemetryKeysResponse cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

class UScriptStruct* FEventsListTelemetryKeysResponse::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FEventsListTelemetryKeysResponse_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEventsListTelemetryKeysResponse, Z_Construct_UPackage__Script_PlayFab(), TEXT("EventsListTelemetryKeysResponse"), sizeof(FEventsListTelemetryKeysResponse), Get_Z_Construct_UScriptStruct_FEventsListTelemetryKeysResponse_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FEventsListTelemetryKeysResponse>()
{
	return FEventsListTelemetryKeysResponse::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEventsListTelemetryKeysResponse(FEventsListTelemetryKeysResponse::StaticStruct, TEXT("/Script/PlayFab"), TEXT("EventsListTelemetryKeysResponse"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFEventsListTelemetryKeysResponse
{
	FScriptStruct_PlayFab_StaticRegisterNativesFEventsListTelemetryKeysResponse()
	{
		UScriptStruct::DeferCppStructOps<FEventsListTelemetryKeysResponse>(FName(TEXT("EventsListTelemetryKeysResponse")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFEventsListTelemetryKeysResponse;
	struct Z_Construct_UScriptStruct_FEventsListTelemetryKeysResponse_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_KeyDetails_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeyDetails_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_KeyDetails;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEventsListTelemetryKeysResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabEventsModels.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEventsListTelemetryKeysResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEventsListTelemetryKeysResponse>();
	}
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FEventsListTelemetryKeysResponse_Statics::NewProp_KeyDetails_Inner = { "KeyDetails", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEventsListTelemetryKeysResponse_Statics::NewProp_KeyDetails_MetaData[] = {
		{ "Category", "PlayFab | Events | PlayStream Events Models" },
		{ "Comment", "/** The telemetry keys configured for the title. */" },
		{ "ModuleRelativePath", "Classes/PlayFabEventsModels.h" },
		{ "ToolTip", "The telemetry keys configured for the title." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FEventsListTelemetryKeysResponse_Statics::NewProp_KeyDetails = { "KeyDetails", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEventsListTelemetryKeysResponse, KeyDetails), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FEventsListTelemetryKeysResponse_Statics::NewProp_KeyDetails_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEventsListTelemetryKeysResponse_Statics::NewProp_KeyDetails_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEventsListTelemetryKeysResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEventsListTelemetryKeysResponse_Statics::NewProp_KeyDetails_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEventsListTelemetryKeysResponse_Statics::NewProp_KeyDetails,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEventsListTelemetryKeysResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"EventsListTelemetryKeysResponse",
		sizeof(FEventsListTelemetryKeysResponse),
		alignof(FEventsListTelemetryKeysResponse),
		Z_Construct_UScriptStruct_FEventsListTelemetryKeysResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEventsListTelemetryKeysResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEventsListTelemetryKeysResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEventsListTelemetryKeysResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEventsListTelemetryKeysResponse()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEventsListTelemetryKeysResponse_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EventsListTelemetryKeysResponse"), sizeof(FEventsListTelemetryKeysResponse), Get_Z_Construct_UScriptStruct_FEventsListTelemetryKeysResponse_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEventsListTelemetryKeysResponse_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEventsListTelemetryKeysResponse_Hash() { return 3552065727U; }

static_assert(std::is_polymorphic<FEventsListTelemetryKeysRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FEventsListTelemetryKeysRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FEventsListTelemetryKeysRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FEventsListTelemetryKeysRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEventsListTelemetryKeysRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("EventsListTelemetryKeysRequest"), sizeof(FEventsListTelemetryKeysRequest), Get_Z_Construct_UScriptStruct_FEventsListTelemetryKeysRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FEventsListTelemetryKeysRequest>()
{
	return FEventsListTelemetryKeysRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEventsListTelemetryKeysRequest(FEventsListTelemetryKeysRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("EventsListTelemetryKeysRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFEventsListTelemetryKeysRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFEventsListTelemetryKeysRequest()
	{
		UScriptStruct::DeferCppStructOps<FEventsListTelemetryKeysRequest>(FName(TEXT("EventsListTelemetryKeysRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFEventsListTelemetryKeysRequest;
	struct Z_Construct_UScriptStruct_FEventsListTelemetryKeysRequest_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEventsListTelemetryKeysRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabEventsModels.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEventsListTelemetryKeysRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEventsListTelemetryKeysRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEventsListTelemetryKeysRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | Events | PlayStream Events Models" },
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
		{ "ModuleRelativePath", "Classes/PlayFabEventsModels.h" },
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FEventsListTelemetryKeysRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEventsListTelemetryKeysRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FEventsListTelemetryKeysRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEventsListTelemetryKeysRequest_Statics::NewProp_CustomTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEventsListTelemetryKeysRequest_Statics::NewProp_Entity_MetaData[] = {
		{ "Category", "PlayFab | Events | PlayStream Events Models" },
		{ "Comment", "/** The optional entity to perform this action on. Defaults to the currently logged in entity. */" },
		{ "ModuleRelativePath", "Classes/PlayFabEventsModels.h" },
		{ "ToolTip", "The optional entity to perform this action on. Defaults to the currently logged in entity." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FEventsListTelemetryKeysRequest_Statics::NewProp_Entity = { "Entity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEventsListTelemetryKeysRequest, Entity), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FEventsListTelemetryKeysRequest_Statics::NewProp_Entity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEventsListTelemetryKeysRequest_Statics::NewProp_Entity_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEventsListTelemetryKeysRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEventsListTelemetryKeysRequest_Statics::NewProp_CustomTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEventsListTelemetryKeysRequest_Statics::NewProp_Entity,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEventsListTelemetryKeysRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"EventsListTelemetryKeysRequest",
		sizeof(FEventsListTelemetryKeysRequest),
		alignof(FEventsListTelemetryKeysRequest),
		Z_Construct_UScriptStruct_FEventsListTelemetryKeysRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEventsListTelemetryKeysRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEventsListTelemetryKeysRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEventsListTelemetryKeysRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEventsListTelemetryKeysRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEventsListTelemetryKeysRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EventsListTelemetryKeysRequest"), sizeof(FEventsListTelemetryKeysRequest), Get_Z_Construct_UScriptStruct_FEventsListTelemetryKeysRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEventsListTelemetryKeysRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEventsListTelemetryKeysRequest_Hash() { return 537152491U; }

static_assert(std::is_polymorphic<FEventsGetTelemetryKeyResponse>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FEventsGetTelemetryKeyResponse cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

class UScriptStruct* FEventsGetTelemetryKeyResponse::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FEventsGetTelemetryKeyResponse_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEventsGetTelemetryKeyResponse, Z_Construct_UPackage__Script_PlayFab(), TEXT("EventsGetTelemetryKeyResponse"), sizeof(FEventsGetTelemetryKeyResponse), Get_Z_Construct_UScriptStruct_FEventsGetTelemetryKeyResponse_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FEventsGetTelemetryKeyResponse>()
{
	return FEventsGetTelemetryKeyResponse::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEventsGetTelemetryKeyResponse(FEventsGetTelemetryKeyResponse::StaticStruct, TEXT("/Script/PlayFab"), TEXT("EventsGetTelemetryKeyResponse"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFEventsGetTelemetryKeyResponse
{
	FScriptStruct_PlayFab_StaticRegisterNativesFEventsGetTelemetryKeyResponse()
	{
		UScriptStruct::DeferCppStructOps<FEventsGetTelemetryKeyResponse>(FName(TEXT("EventsGetTelemetryKeyResponse")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFEventsGetTelemetryKeyResponse;
	struct Z_Construct_UScriptStruct_FEventsGetTelemetryKeyResponse_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeyDetails_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_KeyDetails;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEventsGetTelemetryKeyResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabEventsModels.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEventsGetTelemetryKeyResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEventsGetTelemetryKeyResponse>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEventsGetTelemetryKeyResponse_Statics::NewProp_KeyDetails_MetaData[] = {
		{ "Category", "PlayFab | Events | PlayStream Events Models" },
		{ "Comment", "/** Details about the requested telemetry key. */" },
		{ "ModuleRelativePath", "Classes/PlayFabEventsModels.h" },
		{ "ToolTip", "Details about the requested telemetry key." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FEventsGetTelemetryKeyResponse_Statics::NewProp_KeyDetails = { "KeyDetails", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEventsGetTelemetryKeyResponse, KeyDetails), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FEventsGetTelemetryKeyResponse_Statics::NewProp_KeyDetails_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEventsGetTelemetryKeyResponse_Statics::NewProp_KeyDetails_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEventsGetTelemetryKeyResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEventsGetTelemetryKeyResponse_Statics::NewProp_KeyDetails,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEventsGetTelemetryKeyResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"EventsGetTelemetryKeyResponse",
		sizeof(FEventsGetTelemetryKeyResponse),
		alignof(FEventsGetTelemetryKeyResponse),
		Z_Construct_UScriptStruct_FEventsGetTelemetryKeyResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEventsGetTelemetryKeyResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEventsGetTelemetryKeyResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEventsGetTelemetryKeyResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEventsGetTelemetryKeyResponse()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEventsGetTelemetryKeyResponse_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EventsGetTelemetryKeyResponse"), sizeof(FEventsGetTelemetryKeyResponse), Get_Z_Construct_UScriptStruct_FEventsGetTelemetryKeyResponse_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEventsGetTelemetryKeyResponse_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEventsGetTelemetryKeyResponse_Hash() { return 1191327696U; }

static_assert(std::is_polymorphic<FEventsGetTelemetryKeyRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FEventsGetTelemetryKeyRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FEventsGetTelemetryKeyRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FEventsGetTelemetryKeyRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEventsGetTelemetryKeyRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("EventsGetTelemetryKeyRequest"), sizeof(FEventsGetTelemetryKeyRequest), Get_Z_Construct_UScriptStruct_FEventsGetTelemetryKeyRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FEventsGetTelemetryKeyRequest>()
{
	return FEventsGetTelemetryKeyRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEventsGetTelemetryKeyRequest(FEventsGetTelemetryKeyRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("EventsGetTelemetryKeyRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFEventsGetTelemetryKeyRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFEventsGetTelemetryKeyRequest()
	{
		UScriptStruct::DeferCppStructOps<FEventsGetTelemetryKeyRequest>(FName(TEXT("EventsGetTelemetryKeyRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFEventsGetTelemetryKeyRequest;
	struct Z_Construct_UScriptStruct_FEventsGetTelemetryKeyRequest_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeyName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_KeyName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEventsGetTelemetryKeyRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabEventsModels.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEventsGetTelemetryKeyRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEventsGetTelemetryKeyRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEventsGetTelemetryKeyRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | Events | PlayStream Events Models" },
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
		{ "ModuleRelativePath", "Classes/PlayFabEventsModels.h" },
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FEventsGetTelemetryKeyRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEventsGetTelemetryKeyRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FEventsGetTelemetryKeyRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEventsGetTelemetryKeyRequest_Statics::NewProp_CustomTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEventsGetTelemetryKeyRequest_Statics::NewProp_Entity_MetaData[] = {
		{ "Category", "PlayFab | Events | PlayStream Events Models" },
		{ "Comment", "/** The optional entity to perform this action on. Defaults to the currently logged in entity. */" },
		{ "ModuleRelativePath", "Classes/PlayFabEventsModels.h" },
		{ "ToolTip", "The optional entity to perform this action on. Defaults to the currently logged in entity." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FEventsGetTelemetryKeyRequest_Statics::NewProp_Entity = { "Entity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEventsGetTelemetryKeyRequest, Entity), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FEventsGetTelemetryKeyRequest_Statics::NewProp_Entity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEventsGetTelemetryKeyRequest_Statics::NewProp_Entity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEventsGetTelemetryKeyRequest_Statics::NewProp_KeyName_MetaData[] = {
		{ "Category", "PlayFab | Events | PlayStream Events Models" },
		{ "Comment", "/** The name of the key to retrieve. */" },
		{ "ModuleRelativePath", "Classes/PlayFabEventsModels.h" },
		{ "ToolTip", "The name of the key to retrieve." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEventsGetTelemetryKeyRequest_Statics::NewProp_KeyName = { "KeyName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEventsGetTelemetryKeyRequest, KeyName), METADATA_PARAMS(Z_Construct_UScriptStruct_FEventsGetTelemetryKeyRequest_Statics::NewProp_KeyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEventsGetTelemetryKeyRequest_Statics::NewProp_KeyName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEventsGetTelemetryKeyRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEventsGetTelemetryKeyRequest_Statics::NewProp_CustomTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEventsGetTelemetryKeyRequest_Statics::NewProp_Entity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEventsGetTelemetryKeyRequest_Statics::NewProp_KeyName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEventsGetTelemetryKeyRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"EventsGetTelemetryKeyRequest",
		sizeof(FEventsGetTelemetryKeyRequest),
		alignof(FEventsGetTelemetryKeyRequest),
		Z_Construct_UScriptStruct_FEventsGetTelemetryKeyRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEventsGetTelemetryKeyRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEventsGetTelemetryKeyRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEventsGetTelemetryKeyRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEventsGetTelemetryKeyRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEventsGetTelemetryKeyRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EventsGetTelemetryKeyRequest"), sizeof(FEventsGetTelemetryKeyRequest), Get_Z_Construct_UScriptStruct_FEventsGetTelemetryKeyRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEventsGetTelemetryKeyRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEventsGetTelemetryKeyRequest_Hash() { return 4228961293U; }

static_assert(std::is_polymorphic<FEventsDeleteTelemetryKeyResponse>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FEventsDeleteTelemetryKeyResponse cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

class UScriptStruct* FEventsDeleteTelemetryKeyResponse::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FEventsDeleteTelemetryKeyResponse_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEventsDeleteTelemetryKeyResponse, Z_Construct_UPackage__Script_PlayFab(), TEXT("EventsDeleteTelemetryKeyResponse"), sizeof(FEventsDeleteTelemetryKeyResponse), Get_Z_Construct_UScriptStruct_FEventsDeleteTelemetryKeyResponse_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FEventsDeleteTelemetryKeyResponse>()
{
	return FEventsDeleteTelemetryKeyResponse::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEventsDeleteTelemetryKeyResponse(FEventsDeleteTelemetryKeyResponse::StaticStruct, TEXT("/Script/PlayFab"), TEXT("EventsDeleteTelemetryKeyResponse"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFEventsDeleteTelemetryKeyResponse
{
	FScriptStruct_PlayFab_StaticRegisterNativesFEventsDeleteTelemetryKeyResponse()
	{
		UScriptStruct::DeferCppStructOps<FEventsDeleteTelemetryKeyResponse>(FName(TEXT("EventsDeleteTelemetryKeyResponse")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFEventsDeleteTelemetryKeyResponse;
	struct Z_Construct_UScriptStruct_FEventsDeleteTelemetryKeyResponse_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WasKeyDeleted_MetaData[];
#endif
		static void NewProp_WasKeyDeleted_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_WasKeyDeleted;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEventsDeleteTelemetryKeyResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabEventsModels.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEventsDeleteTelemetryKeyResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEventsDeleteTelemetryKeyResponse>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEventsDeleteTelemetryKeyResponse_Statics::NewProp_WasKeyDeleted_MetaData[] = {
		{ "Category", "PlayFab | Events | PlayStream Events Models" },
		{ "Comment", "/** Indicates whether or not the key was deleted. If false, no key with that name existed. */" },
		{ "ModuleRelativePath", "Classes/PlayFabEventsModels.h" },
		{ "ToolTip", "Indicates whether or not the key was deleted. If false, no key with that name existed." },
	};
#endif
	void Z_Construct_UScriptStruct_FEventsDeleteTelemetryKeyResponse_Statics::NewProp_WasKeyDeleted_SetBit(void* Obj)
	{
		((FEventsDeleteTelemetryKeyResponse*)Obj)->WasKeyDeleted = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEventsDeleteTelemetryKeyResponse_Statics::NewProp_WasKeyDeleted = { "WasKeyDeleted", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FEventsDeleteTelemetryKeyResponse), &Z_Construct_UScriptStruct_FEventsDeleteTelemetryKeyResponse_Statics::NewProp_WasKeyDeleted_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FEventsDeleteTelemetryKeyResponse_Statics::NewProp_WasKeyDeleted_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEventsDeleteTelemetryKeyResponse_Statics::NewProp_WasKeyDeleted_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEventsDeleteTelemetryKeyResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEventsDeleteTelemetryKeyResponse_Statics::NewProp_WasKeyDeleted,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEventsDeleteTelemetryKeyResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"EventsDeleteTelemetryKeyResponse",
		sizeof(FEventsDeleteTelemetryKeyResponse),
		alignof(FEventsDeleteTelemetryKeyResponse),
		Z_Construct_UScriptStruct_FEventsDeleteTelemetryKeyResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEventsDeleteTelemetryKeyResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEventsDeleteTelemetryKeyResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEventsDeleteTelemetryKeyResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEventsDeleteTelemetryKeyResponse()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEventsDeleteTelemetryKeyResponse_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EventsDeleteTelemetryKeyResponse"), sizeof(FEventsDeleteTelemetryKeyResponse), Get_Z_Construct_UScriptStruct_FEventsDeleteTelemetryKeyResponse_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEventsDeleteTelemetryKeyResponse_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEventsDeleteTelemetryKeyResponse_Hash() { return 1625268537U; }

static_assert(std::is_polymorphic<FEventsDeleteTelemetryKeyRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FEventsDeleteTelemetryKeyRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FEventsDeleteTelemetryKeyRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FEventsDeleteTelemetryKeyRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEventsDeleteTelemetryKeyRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("EventsDeleteTelemetryKeyRequest"), sizeof(FEventsDeleteTelemetryKeyRequest), Get_Z_Construct_UScriptStruct_FEventsDeleteTelemetryKeyRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FEventsDeleteTelemetryKeyRequest>()
{
	return FEventsDeleteTelemetryKeyRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEventsDeleteTelemetryKeyRequest(FEventsDeleteTelemetryKeyRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("EventsDeleteTelemetryKeyRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFEventsDeleteTelemetryKeyRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFEventsDeleteTelemetryKeyRequest()
	{
		UScriptStruct::DeferCppStructOps<FEventsDeleteTelemetryKeyRequest>(FName(TEXT("EventsDeleteTelemetryKeyRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFEventsDeleteTelemetryKeyRequest;
	struct Z_Construct_UScriptStruct_FEventsDeleteTelemetryKeyRequest_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeyName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_KeyName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEventsDeleteTelemetryKeyRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabEventsModels.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEventsDeleteTelemetryKeyRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEventsDeleteTelemetryKeyRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEventsDeleteTelemetryKeyRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | Events | PlayStream Events Models" },
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
		{ "ModuleRelativePath", "Classes/PlayFabEventsModels.h" },
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FEventsDeleteTelemetryKeyRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEventsDeleteTelemetryKeyRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FEventsDeleteTelemetryKeyRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEventsDeleteTelemetryKeyRequest_Statics::NewProp_CustomTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEventsDeleteTelemetryKeyRequest_Statics::NewProp_Entity_MetaData[] = {
		{ "Category", "PlayFab | Events | PlayStream Events Models" },
		{ "Comment", "/** The optional entity to perform this action on. Defaults to the currently logged in entity. */" },
		{ "ModuleRelativePath", "Classes/PlayFabEventsModels.h" },
		{ "ToolTip", "The optional entity to perform this action on. Defaults to the currently logged in entity." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FEventsDeleteTelemetryKeyRequest_Statics::NewProp_Entity = { "Entity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEventsDeleteTelemetryKeyRequest, Entity), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FEventsDeleteTelemetryKeyRequest_Statics::NewProp_Entity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEventsDeleteTelemetryKeyRequest_Statics::NewProp_Entity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEventsDeleteTelemetryKeyRequest_Statics::NewProp_KeyName_MetaData[] = {
		{ "Category", "PlayFab | Events | PlayStream Events Models" },
		{ "Comment", "/** The name of the key to delete. */" },
		{ "ModuleRelativePath", "Classes/PlayFabEventsModels.h" },
		{ "ToolTip", "The name of the key to delete." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEventsDeleteTelemetryKeyRequest_Statics::NewProp_KeyName = { "KeyName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEventsDeleteTelemetryKeyRequest, KeyName), METADATA_PARAMS(Z_Construct_UScriptStruct_FEventsDeleteTelemetryKeyRequest_Statics::NewProp_KeyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEventsDeleteTelemetryKeyRequest_Statics::NewProp_KeyName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEventsDeleteTelemetryKeyRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEventsDeleteTelemetryKeyRequest_Statics::NewProp_CustomTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEventsDeleteTelemetryKeyRequest_Statics::NewProp_Entity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEventsDeleteTelemetryKeyRequest_Statics::NewProp_KeyName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEventsDeleteTelemetryKeyRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"EventsDeleteTelemetryKeyRequest",
		sizeof(FEventsDeleteTelemetryKeyRequest),
		alignof(FEventsDeleteTelemetryKeyRequest),
		Z_Construct_UScriptStruct_FEventsDeleteTelemetryKeyRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEventsDeleteTelemetryKeyRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEventsDeleteTelemetryKeyRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEventsDeleteTelemetryKeyRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEventsDeleteTelemetryKeyRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEventsDeleteTelemetryKeyRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EventsDeleteTelemetryKeyRequest"), sizeof(FEventsDeleteTelemetryKeyRequest), Get_Z_Construct_UScriptStruct_FEventsDeleteTelemetryKeyRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEventsDeleteTelemetryKeyRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEventsDeleteTelemetryKeyRequest_Hash() { return 3530659311U; }

static_assert(std::is_polymorphic<FEventsCreateTelemetryKeyResponse>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FEventsCreateTelemetryKeyResponse cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

class UScriptStruct* FEventsCreateTelemetryKeyResponse::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FEventsCreateTelemetryKeyResponse_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEventsCreateTelemetryKeyResponse, Z_Construct_UPackage__Script_PlayFab(), TEXT("EventsCreateTelemetryKeyResponse"), sizeof(FEventsCreateTelemetryKeyResponse), Get_Z_Construct_UScriptStruct_FEventsCreateTelemetryKeyResponse_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FEventsCreateTelemetryKeyResponse>()
{
	return FEventsCreateTelemetryKeyResponse::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEventsCreateTelemetryKeyResponse(FEventsCreateTelemetryKeyResponse::StaticStruct, TEXT("/Script/PlayFab"), TEXT("EventsCreateTelemetryKeyResponse"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFEventsCreateTelemetryKeyResponse
{
	FScriptStruct_PlayFab_StaticRegisterNativesFEventsCreateTelemetryKeyResponse()
	{
		UScriptStruct::DeferCppStructOps<FEventsCreateTelemetryKeyResponse>(FName(TEXT("EventsCreateTelemetryKeyResponse")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFEventsCreateTelemetryKeyResponse;
	struct Z_Construct_UScriptStruct_FEventsCreateTelemetryKeyResponse_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewKeyDetails_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewKeyDetails;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEventsCreateTelemetryKeyResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabEventsModels.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEventsCreateTelemetryKeyResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEventsCreateTelemetryKeyResponse>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEventsCreateTelemetryKeyResponse_Statics::NewProp_NewKeyDetails_MetaData[] = {
		{ "Category", "PlayFab | Events | PlayStream Events Models" },
		{ "Comment", "/** Details about the newly created telemetry key. */" },
		{ "ModuleRelativePath", "Classes/PlayFabEventsModels.h" },
		{ "ToolTip", "Details about the newly created telemetry key." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FEventsCreateTelemetryKeyResponse_Statics::NewProp_NewKeyDetails = { "NewKeyDetails", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEventsCreateTelemetryKeyResponse, NewKeyDetails), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FEventsCreateTelemetryKeyResponse_Statics::NewProp_NewKeyDetails_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEventsCreateTelemetryKeyResponse_Statics::NewProp_NewKeyDetails_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEventsCreateTelemetryKeyResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEventsCreateTelemetryKeyResponse_Statics::NewProp_NewKeyDetails,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEventsCreateTelemetryKeyResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"EventsCreateTelemetryKeyResponse",
		sizeof(FEventsCreateTelemetryKeyResponse),
		alignof(FEventsCreateTelemetryKeyResponse),
		Z_Construct_UScriptStruct_FEventsCreateTelemetryKeyResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEventsCreateTelemetryKeyResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEventsCreateTelemetryKeyResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEventsCreateTelemetryKeyResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEventsCreateTelemetryKeyResponse()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEventsCreateTelemetryKeyResponse_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EventsCreateTelemetryKeyResponse"), sizeof(FEventsCreateTelemetryKeyResponse), Get_Z_Construct_UScriptStruct_FEventsCreateTelemetryKeyResponse_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEventsCreateTelemetryKeyResponse_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEventsCreateTelemetryKeyResponse_Hash() { return 1036965540U; }

static_assert(std::is_polymorphic<FEventsCreateTelemetryKeyRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FEventsCreateTelemetryKeyRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FEventsCreateTelemetryKeyRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FEventsCreateTelemetryKeyRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEventsCreateTelemetryKeyRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("EventsCreateTelemetryKeyRequest"), sizeof(FEventsCreateTelemetryKeyRequest), Get_Z_Construct_UScriptStruct_FEventsCreateTelemetryKeyRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FEventsCreateTelemetryKeyRequest>()
{
	return FEventsCreateTelemetryKeyRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEventsCreateTelemetryKeyRequest(FEventsCreateTelemetryKeyRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("EventsCreateTelemetryKeyRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFEventsCreateTelemetryKeyRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFEventsCreateTelemetryKeyRequest()
	{
		UScriptStruct::DeferCppStructOps<FEventsCreateTelemetryKeyRequest>(FName(TEXT("EventsCreateTelemetryKeyRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFEventsCreateTelemetryKeyRequest;
	struct Z_Construct_UScriptStruct_FEventsCreateTelemetryKeyRequest_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeyName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_KeyName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEventsCreateTelemetryKeyRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "///////////////////////////////////////////////////////\n// PlayStream Events\n//////////////////////////////////////////////////////\n" },
		{ "ModuleRelativePath", "Classes/PlayFabEventsModels.h" },
		{ "ToolTip", "/\n PlayStream Events" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEventsCreateTelemetryKeyRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEventsCreateTelemetryKeyRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEventsCreateTelemetryKeyRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | Events | PlayStream Events Models" },
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
		{ "ModuleRelativePath", "Classes/PlayFabEventsModels.h" },
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FEventsCreateTelemetryKeyRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEventsCreateTelemetryKeyRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FEventsCreateTelemetryKeyRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEventsCreateTelemetryKeyRequest_Statics::NewProp_CustomTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEventsCreateTelemetryKeyRequest_Statics::NewProp_Entity_MetaData[] = {
		{ "Category", "PlayFab | Events | PlayStream Events Models" },
		{ "Comment", "/** The optional entity to perform this action on. Defaults to the currently logged in entity. */" },
		{ "ModuleRelativePath", "Classes/PlayFabEventsModels.h" },
		{ "ToolTip", "The optional entity to perform this action on. Defaults to the currently logged in entity." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FEventsCreateTelemetryKeyRequest_Statics::NewProp_Entity = { "Entity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEventsCreateTelemetryKeyRequest, Entity), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FEventsCreateTelemetryKeyRequest_Statics::NewProp_Entity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEventsCreateTelemetryKeyRequest_Statics::NewProp_Entity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEventsCreateTelemetryKeyRequest_Statics::NewProp_KeyName_MetaData[] = {
		{ "Category", "PlayFab | Events | PlayStream Events Models" },
		{ "Comment", "/** The name of the new key. Telemetry key names must be unique within the scope of the title. */" },
		{ "ModuleRelativePath", "Classes/PlayFabEventsModels.h" },
		{ "ToolTip", "The name of the new key. Telemetry key names must be unique within the scope of the title." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEventsCreateTelemetryKeyRequest_Statics::NewProp_KeyName = { "KeyName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEventsCreateTelemetryKeyRequest, KeyName), METADATA_PARAMS(Z_Construct_UScriptStruct_FEventsCreateTelemetryKeyRequest_Statics::NewProp_KeyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEventsCreateTelemetryKeyRequest_Statics::NewProp_KeyName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEventsCreateTelemetryKeyRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEventsCreateTelemetryKeyRequest_Statics::NewProp_CustomTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEventsCreateTelemetryKeyRequest_Statics::NewProp_Entity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEventsCreateTelemetryKeyRequest_Statics::NewProp_KeyName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEventsCreateTelemetryKeyRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"EventsCreateTelemetryKeyRequest",
		sizeof(FEventsCreateTelemetryKeyRequest),
		alignof(FEventsCreateTelemetryKeyRequest),
		Z_Construct_UScriptStruct_FEventsCreateTelemetryKeyRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEventsCreateTelemetryKeyRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEventsCreateTelemetryKeyRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEventsCreateTelemetryKeyRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEventsCreateTelemetryKeyRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEventsCreateTelemetryKeyRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EventsCreateTelemetryKeyRequest"), sizeof(FEventsCreateTelemetryKeyRequest), Get_Z_Construct_UScriptStruct_FEventsCreateTelemetryKeyRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEventsCreateTelemetryKeyRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEventsCreateTelemetryKeyRequest_Hash() { return 1574045289U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
