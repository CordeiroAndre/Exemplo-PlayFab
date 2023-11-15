// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Classes/PlayFabCloudScriptModels.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayFabCloudScriptModels() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FCloudScriptUnregisterFunctionRequest();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabRequestCommon();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FCloudScriptRegisterQueuedFunctionRequest();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FCloudScriptRegisterHttpFunctionRequest();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForScheduledTaskRequest();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForPlayerTriggeredActionRequest();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForFunctionExecutionRequest();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForEntityTriggeredActionRequest();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FCloudScriptEmptyResult();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabResultCommon();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FCloudScriptListQueuedFunctionsResult();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FCloudScriptListHttpFunctionsResult();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FCloudScriptListFunctionsResult();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FCloudScriptListFunctionsRequest();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FCloudScriptGetFunctionResult();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FCloudScriptGetFunctionRequest();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionResult();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionRequest();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FCloudScriptExecuteEntityCloudScriptRequest();
	PLAYFAB_API UEnum* Z_Construct_UEnum_PlayFab_ECloudScriptRevisionOption();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FCloudScriptExecuteCloudScriptResult();
// End Cross Module References

static_assert(std::is_polymorphic<FCloudScriptUnregisterFunctionRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FCloudScriptUnregisterFunctionRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FCloudScriptUnregisterFunctionRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FCloudScriptUnregisterFunctionRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCloudScriptUnregisterFunctionRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("CloudScriptUnregisterFunctionRequest"), sizeof(FCloudScriptUnregisterFunctionRequest), Get_Z_Construct_UScriptStruct_FCloudScriptUnregisterFunctionRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FCloudScriptUnregisterFunctionRequest>()
{
	return FCloudScriptUnregisterFunctionRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCloudScriptUnregisterFunctionRequest(FCloudScriptUnregisterFunctionRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("CloudScriptUnregisterFunctionRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFCloudScriptUnregisterFunctionRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFCloudScriptUnregisterFunctionRequest()
	{
		UScriptStruct::DeferCppStructOps<FCloudScriptUnregisterFunctionRequest>(FName(TEXT("CloudScriptUnregisterFunctionRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFCloudScriptUnregisterFunctionRequest;
	struct Z_Construct_UScriptStruct_FCloudScriptUnregisterFunctionRequest_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FunctionName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FunctionName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCloudScriptUnregisterFunctionRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabCloudScriptModels.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCloudScriptUnregisterFunctionRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCloudScriptUnregisterFunctionRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCloudScriptUnregisterFunctionRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | CloudScript | Server-Side Cloud Script Models" },
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
		{ "ModuleRelativePath", "Classes/PlayFabCloudScriptModels.h" },
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCloudScriptUnregisterFunctionRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCloudScriptUnregisterFunctionRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FCloudScriptUnregisterFunctionRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloudScriptUnregisterFunctionRequest_Statics::NewProp_CustomTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCloudScriptUnregisterFunctionRequest_Statics::NewProp_FunctionName_MetaData[] = {
		{ "Category", "PlayFab | CloudScript | Server-Side Cloud Script Models" },
		{ "Comment", "/** The name of the function to register */" },
		{ "ModuleRelativePath", "Classes/PlayFabCloudScriptModels.h" },
		{ "ToolTip", "The name of the function to register" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCloudScriptUnregisterFunctionRequest_Statics::NewProp_FunctionName = { "FunctionName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCloudScriptUnregisterFunctionRequest, FunctionName), METADATA_PARAMS(Z_Construct_UScriptStruct_FCloudScriptUnregisterFunctionRequest_Statics::NewProp_FunctionName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloudScriptUnregisterFunctionRequest_Statics::NewProp_FunctionName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCloudScriptUnregisterFunctionRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCloudScriptUnregisterFunctionRequest_Statics::NewProp_CustomTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCloudScriptUnregisterFunctionRequest_Statics::NewProp_FunctionName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCloudScriptUnregisterFunctionRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"CloudScriptUnregisterFunctionRequest",
		sizeof(FCloudScriptUnregisterFunctionRequest),
		alignof(FCloudScriptUnregisterFunctionRequest),
		Z_Construct_UScriptStruct_FCloudScriptUnregisterFunctionRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloudScriptUnregisterFunctionRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCloudScriptUnregisterFunctionRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloudScriptUnregisterFunctionRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCloudScriptUnregisterFunctionRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCloudScriptUnregisterFunctionRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CloudScriptUnregisterFunctionRequest"), sizeof(FCloudScriptUnregisterFunctionRequest), Get_Z_Construct_UScriptStruct_FCloudScriptUnregisterFunctionRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCloudScriptUnregisterFunctionRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCloudScriptUnregisterFunctionRequest_Hash() { return 2526137844U; }

static_assert(std::is_polymorphic<FCloudScriptRegisterQueuedFunctionRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FCloudScriptRegisterQueuedFunctionRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FCloudScriptRegisterQueuedFunctionRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FCloudScriptRegisterQueuedFunctionRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCloudScriptRegisterQueuedFunctionRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("CloudScriptRegisterQueuedFunctionRequest"), sizeof(FCloudScriptRegisterQueuedFunctionRequest), Get_Z_Construct_UScriptStruct_FCloudScriptRegisterQueuedFunctionRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FCloudScriptRegisterQueuedFunctionRequest>()
{
	return FCloudScriptRegisterQueuedFunctionRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCloudScriptRegisterQueuedFunctionRequest(FCloudScriptRegisterQueuedFunctionRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("CloudScriptRegisterQueuedFunctionRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFCloudScriptRegisterQueuedFunctionRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFCloudScriptRegisterQueuedFunctionRequest()
	{
		UScriptStruct::DeferCppStructOps<FCloudScriptRegisterQueuedFunctionRequest>(FName(TEXT("CloudScriptRegisterQueuedFunctionRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFCloudScriptRegisterQueuedFunctionRequest;
	struct Z_Construct_UScriptStruct_FCloudScriptRegisterQueuedFunctionRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConnectionString_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ConnectionString;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CustomTags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FunctionName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FunctionName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QueueName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_QueueName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCloudScriptRegisterQueuedFunctionRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * A title can have many functions, RegisterQueuedFunction associates a function name with a queue name and connection\n * string.\n */" },
		{ "ModuleRelativePath", "Classes/PlayFabCloudScriptModels.h" },
		{ "ToolTip", "A title can have many functions, RegisterQueuedFunction associates a function name with a queue name and connection\nstring." },
	};
#endif
	void* Z_Construct_UScriptStruct_FCloudScriptRegisterQueuedFunctionRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCloudScriptRegisterQueuedFunctionRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCloudScriptRegisterQueuedFunctionRequest_Statics::NewProp_ConnectionString_MetaData[] = {
		{ "Category", "PlayFab | CloudScript | Server-Side Cloud Script Models" },
		{ "Comment", "/** A connection string for the storage account that hosts the queue for the Azure Function. */" },
		{ "ModuleRelativePath", "Classes/PlayFabCloudScriptModels.h" },
		{ "ToolTip", "A connection string for the storage account that hosts the queue for the Azure Function." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCloudScriptRegisterQueuedFunctionRequest_Statics::NewProp_ConnectionString = { "ConnectionString", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCloudScriptRegisterQueuedFunctionRequest, ConnectionString), METADATA_PARAMS(Z_Construct_UScriptStruct_FCloudScriptRegisterQueuedFunctionRequest_Statics::NewProp_ConnectionString_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloudScriptRegisterQueuedFunctionRequest_Statics::NewProp_ConnectionString_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCloudScriptRegisterQueuedFunctionRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | CloudScript | Server-Side Cloud Script Models" },
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
		{ "ModuleRelativePath", "Classes/PlayFabCloudScriptModels.h" },
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCloudScriptRegisterQueuedFunctionRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCloudScriptRegisterQueuedFunctionRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FCloudScriptRegisterQueuedFunctionRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloudScriptRegisterQueuedFunctionRequest_Statics::NewProp_CustomTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCloudScriptRegisterQueuedFunctionRequest_Statics::NewProp_FunctionName_MetaData[] = {
		{ "Category", "PlayFab | CloudScript | Server-Side Cloud Script Models" },
		{ "Comment", "/** The name of the function to register */" },
		{ "ModuleRelativePath", "Classes/PlayFabCloudScriptModels.h" },
		{ "ToolTip", "The name of the function to register" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCloudScriptRegisterQueuedFunctionRequest_Statics::NewProp_FunctionName = { "FunctionName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCloudScriptRegisterQueuedFunctionRequest, FunctionName), METADATA_PARAMS(Z_Construct_UScriptStruct_FCloudScriptRegisterQueuedFunctionRequest_Statics::NewProp_FunctionName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloudScriptRegisterQueuedFunctionRequest_Statics::NewProp_FunctionName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCloudScriptRegisterQueuedFunctionRequest_Statics::NewProp_QueueName_MetaData[] = {
		{ "Category", "PlayFab | CloudScript | Server-Side Cloud Script Models" },
		{ "Comment", "/** The name of the queue for the Azure Function. */" },
		{ "ModuleRelativePath", "Classes/PlayFabCloudScriptModels.h" },
		{ "ToolTip", "The name of the queue for the Azure Function." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCloudScriptRegisterQueuedFunctionRequest_Statics::NewProp_QueueName = { "QueueName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCloudScriptRegisterQueuedFunctionRequest, QueueName), METADATA_PARAMS(Z_Construct_UScriptStruct_FCloudScriptRegisterQueuedFunctionRequest_Statics::NewProp_QueueName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloudScriptRegisterQueuedFunctionRequest_Statics::NewProp_QueueName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCloudScriptRegisterQueuedFunctionRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCloudScriptRegisterQueuedFunctionRequest_Statics::NewProp_ConnectionString,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCloudScriptRegisterQueuedFunctionRequest_Statics::NewProp_CustomTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCloudScriptRegisterQueuedFunctionRequest_Statics::NewProp_FunctionName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCloudScriptRegisterQueuedFunctionRequest_Statics::NewProp_QueueName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCloudScriptRegisterQueuedFunctionRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"CloudScriptRegisterQueuedFunctionRequest",
		sizeof(FCloudScriptRegisterQueuedFunctionRequest),
		alignof(FCloudScriptRegisterQueuedFunctionRequest),
		Z_Construct_UScriptStruct_FCloudScriptRegisterQueuedFunctionRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloudScriptRegisterQueuedFunctionRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCloudScriptRegisterQueuedFunctionRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloudScriptRegisterQueuedFunctionRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCloudScriptRegisterQueuedFunctionRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCloudScriptRegisterQueuedFunctionRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CloudScriptRegisterQueuedFunctionRequest"), sizeof(FCloudScriptRegisterQueuedFunctionRequest), Get_Z_Construct_UScriptStruct_FCloudScriptRegisterQueuedFunctionRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCloudScriptRegisterQueuedFunctionRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCloudScriptRegisterQueuedFunctionRequest_Hash() { return 4259787184U; }

static_assert(std::is_polymorphic<FCloudScriptRegisterHttpFunctionRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FCloudScriptRegisterHttpFunctionRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FCloudScriptRegisterHttpFunctionRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FCloudScriptRegisterHttpFunctionRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCloudScriptRegisterHttpFunctionRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("CloudScriptRegisterHttpFunctionRequest"), sizeof(FCloudScriptRegisterHttpFunctionRequest), Get_Z_Construct_UScriptStruct_FCloudScriptRegisterHttpFunctionRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FCloudScriptRegisterHttpFunctionRequest>()
{
	return FCloudScriptRegisterHttpFunctionRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCloudScriptRegisterHttpFunctionRequest(FCloudScriptRegisterHttpFunctionRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("CloudScriptRegisterHttpFunctionRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFCloudScriptRegisterHttpFunctionRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFCloudScriptRegisterHttpFunctionRequest()
	{
		UScriptStruct::DeferCppStructOps<FCloudScriptRegisterHttpFunctionRequest>(FName(TEXT("CloudScriptRegisterHttpFunctionRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFCloudScriptRegisterHttpFunctionRequest;
	struct Z_Construct_UScriptStruct_FCloudScriptRegisterHttpFunctionRequest_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FunctionName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FunctionName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FunctionUrl_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FunctionUrl;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCloudScriptRegisterHttpFunctionRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabCloudScriptModels.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCloudScriptRegisterHttpFunctionRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCloudScriptRegisterHttpFunctionRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCloudScriptRegisterHttpFunctionRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | CloudScript | Server-Side Cloud Script Models" },
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
		{ "ModuleRelativePath", "Classes/PlayFabCloudScriptModels.h" },
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCloudScriptRegisterHttpFunctionRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCloudScriptRegisterHttpFunctionRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FCloudScriptRegisterHttpFunctionRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloudScriptRegisterHttpFunctionRequest_Statics::NewProp_CustomTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCloudScriptRegisterHttpFunctionRequest_Statics::NewProp_FunctionName_MetaData[] = {
		{ "Category", "PlayFab | CloudScript | Server-Side Cloud Script Models" },
		{ "Comment", "/** The name of the function to register */" },
		{ "ModuleRelativePath", "Classes/PlayFabCloudScriptModels.h" },
		{ "ToolTip", "The name of the function to register" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCloudScriptRegisterHttpFunctionRequest_Statics::NewProp_FunctionName = { "FunctionName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCloudScriptRegisterHttpFunctionRequest, FunctionName), METADATA_PARAMS(Z_Construct_UScriptStruct_FCloudScriptRegisterHttpFunctionRequest_Statics::NewProp_FunctionName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloudScriptRegisterHttpFunctionRequest_Statics::NewProp_FunctionName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCloudScriptRegisterHttpFunctionRequest_Statics::NewProp_FunctionUrl_MetaData[] = {
		{ "Category", "PlayFab | CloudScript | Server-Side Cloud Script Models" },
		{ "Comment", "/** Full URL for Azure Function that implements the function. */" },
		{ "ModuleRelativePath", "Classes/PlayFabCloudScriptModels.h" },
		{ "ToolTip", "Full URL for Azure Function that implements the function." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCloudScriptRegisterHttpFunctionRequest_Statics::NewProp_FunctionUrl = { "FunctionUrl", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCloudScriptRegisterHttpFunctionRequest, FunctionUrl), METADATA_PARAMS(Z_Construct_UScriptStruct_FCloudScriptRegisterHttpFunctionRequest_Statics::NewProp_FunctionUrl_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloudScriptRegisterHttpFunctionRequest_Statics::NewProp_FunctionUrl_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCloudScriptRegisterHttpFunctionRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCloudScriptRegisterHttpFunctionRequest_Statics::NewProp_CustomTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCloudScriptRegisterHttpFunctionRequest_Statics::NewProp_FunctionName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCloudScriptRegisterHttpFunctionRequest_Statics::NewProp_FunctionUrl,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCloudScriptRegisterHttpFunctionRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"CloudScriptRegisterHttpFunctionRequest",
		sizeof(FCloudScriptRegisterHttpFunctionRequest),
		alignof(FCloudScriptRegisterHttpFunctionRequest),
		Z_Construct_UScriptStruct_FCloudScriptRegisterHttpFunctionRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloudScriptRegisterHttpFunctionRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCloudScriptRegisterHttpFunctionRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloudScriptRegisterHttpFunctionRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCloudScriptRegisterHttpFunctionRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCloudScriptRegisterHttpFunctionRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CloudScriptRegisterHttpFunctionRequest"), sizeof(FCloudScriptRegisterHttpFunctionRequest), Get_Z_Construct_UScriptStruct_FCloudScriptRegisterHttpFunctionRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCloudScriptRegisterHttpFunctionRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCloudScriptRegisterHttpFunctionRequest_Hash() { return 3341662909U; }

static_assert(std::is_polymorphic<FCloudScriptPostFunctionResultForScheduledTaskRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FCloudScriptPostFunctionResultForScheduledTaskRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FCloudScriptPostFunctionResultForScheduledTaskRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForScheduledTaskRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForScheduledTaskRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("CloudScriptPostFunctionResultForScheduledTaskRequest"), sizeof(FCloudScriptPostFunctionResultForScheduledTaskRequest), Get_Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForScheduledTaskRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FCloudScriptPostFunctionResultForScheduledTaskRequest>()
{
	return FCloudScriptPostFunctionResultForScheduledTaskRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCloudScriptPostFunctionResultForScheduledTaskRequest(FCloudScriptPostFunctionResultForScheduledTaskRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("CloudScriptPostFunctionResultForScheduledTaskRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFCloudScriptPostFunctionResultForScheduledTaskRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFCloudScriptPostFunctionResultForScheduledTaskRequest()
	{
		UScriptStruct::DeferCppStructOps<FCloudScriptPostFunctionResultForScheduledTaskRequest>(FName(TEXT("CloudScriptPostFunctionResultForScheduledTaskRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFCloudScriptPostFunctionResultForScheduledTaskRequest;
	struct Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForScheduledTaskRequest_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FunctionResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FunctionResult;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScheduledTaskId_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ScheduledTaskId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForScheduledTaskRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabCloudScriptModels.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForScheduledTaskRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCloudScriptPostFunctionResultForScheduledTaskRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForScheduledTaskRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | CloudScript | Server-Side Cloud Script Models" },
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
		{ "ModuleRelativePath", "Classes/PlayFabCloudScriptModels.h" },
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForScheduledTaskRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCloudScriptPostFunctionResultForScheduledTaskRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForScheduledTaskRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForScheduledTaskRequest_Statics::NewProp_CustomTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForScheduledTaskRequest_Statics::NewProp_FunctionResult_MetaData[] = {
		{ "Category", "PlayFab | CloudScript | Server-Side Cloud Script Models" },
		{ "Comment", "/** The result of the function execution */" },
		{ "ModuleRelativePath", "Classes/PlayFabCloudScriptModels.h" },
		{ "ToolTip", "The result of the function execution" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForScheduledTaskRequest_Statics::NewProp_FunctionResult = { "FunctionResult", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCloudScriptPostFunctionResultForScheduledTaskRequest, FunctionResult), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForScheduledTaskRequest_Statics::NewProp_FunctionResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForScheduledTaskRequest_Statics::NewProp_FunctionResult_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForScheduledTaskRequest_Statics::NewProp_ScheduledTaskId_MetaData[] = {
		{ "Category", "PlayFab | CloudScript | Server-Side Cloud Script Models" },
		{ "Comment", "/** The id of the scheduled task that invoked the function. */" },
		{ "ModuleRelativePath", "Classes/PlayFabCloudScriptModels.h" },
		{ "ToolTip", "The id of the scheduled task that invoked the function." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForScheduledTaskRequest_Statics::NewProp_ScheduledTaskId = { "ScheduledTaskId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCloudScriptPostFunctionResultForScheduledTaskRequest, ScheduledTaskId), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForScheduledTaskRequest_Statics::NewProp_ScheduledTaskId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForScheduledTaskRequest_Statics::NewProp_ScheduledTaskId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForScheduledTaskRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForScheduledTaskRequest_Statics::NewProp_CustomTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForScheduledTaskRequest_Statics::NewProp_FunctionResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForScheduledTaskRequest_Statics::NewProp_ScheduledTaskId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForScheduledTaskRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"CloudScriptPostFunctionResultForScheduledTaskRequest",
		sizeof(FCloudScriptPostFunctionResultForScheduledTaskRequest),
		alignof(FCloudScriptPostFunctionResultForScheduledTaskRequest),
		Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForScheduledTaskRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForScheduledTaskRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForScheduledTaskRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForScheduledTaskRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForScheduledTaskRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForScheduledTaskRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CloudScriptPostFunctionResultForScheduledTaskRequest"), sizeof(FCloudScriptPostFunctionResultForScheduledTaskRequest), Get_Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForScheduledTaskRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForScheduledTaskRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForScheduledTaskRequest_Hash() { return 859211686U; }

static_assert(std::is_polymorphic<FCloudScriptPostFunctionResultForPlayerTriggeredActionRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FCloudScriptPostFunctionResultForPlayerTriggeredActionRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FCloudScriptPostFunctionResultForPlayerTriggeredActionRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForPlayerTriggeredActionRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForPlayerTriggeredActionRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("CloudScriptPostFunctionResultForPlayerTriggeredActionRequest"), sizeof(FCloudScriptPostFunctionResultForPlayerTriggeredActionRequest), Get_Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForPlayerTriggeredActionRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FCloudScriptPostFunctionResultForPlayerTriggeredActionRequest>()
{
	return FCloudScriptPostFunctionResultForPlayerTriggeredActionRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCloudScriptPostFunctionResultForPlayerTriggeredActionRequest(FCloudScriptPostFunctionResultForPlayerTriggeredActionRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("CloudScriptPostFunctionResultForPlayerTriggeredActionRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFCloudScriptPostFunctionResultForPlayerTriggeredActionRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFCloudScriptPostFunctionResultForPlayerTriggeredActionRequest()
	{
		UScriptStruct::DeferCppStructOps<FCloudScriptPostFunctionResultForPlayerTriggeredActionRequest>(FName(TEXT("CloudScriptPostFunctionResultForPlayerTriggeredActionRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFCloudScriptPostFunctionResultForPlayerTriggeredActionRequest;
	struct Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForPlayerTriggeredActionRequest_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FunctionResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FunctionResult;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerProfile_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerProfile;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayStreamEventEnvelope_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayStreamEventEnvelope;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForPlayerTriggeredActionRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabCloudScriptModels.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForPlayerTriggeredActionRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCloudScriptPostFunctionResultForPlayerTriggeredActionRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForPlayerTriggeredActionRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | CloudScript | Server-Side Cloud Script Models" },
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
		{ "ModuleRelativePath", "Classes/PlayFabCloudScriptModels.h" },
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForPlayerTriggeredActionRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCloudScriptPostFunctionResultForPlayerTriggeredActionRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForPlayerTriggeredActionRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForPlayerTriggeredActionRequest_Statics::NewProp_CustomTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForPlayerTriggeredActionRequest_Statics::NewProp_FunctionResult_MetaData[] = {
		{ "Category", "PlayFab | CloudScript | Server-Side Cloud Script Models" },
		{ "Comment", "/** The result of the function execution. */" },
		{ "ModuleRelativePath", "Classes/PlayFabCloudScriptModels.h" },
		{ "ToolTip", "The result of the function execution." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForPlayerTriggeredActionRequest_Statics::NewProp_FunctionResult = { "FunctionResult", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCloudScriptPostFunctionResultForPlayerTriggeredActionRequest, FunctionResult), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForPlayerTriggeredActionRequest_Statics::NewProp_FunctionResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForPlayerTriggeredActionRequest_Statics::NewProp_FunctionResult_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForPlayerTriggeredActionRequest_Statics::NewProp_PlayerProfile_MetaData[] = {
		{ "Category", "PlayFab | CloudScript | Server-Side Cloud Script Models" },
		{ "Comment", "/** The player profile the function was invoked with. */" },
		{ "ModuleRelativePath", "Classes/PlayFabCloudScriptModels.h" },
		{ "ToolTip", "The player profile the function was invoked with." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForPlayerTriggeredActionRequest_Statics::NewProp_PlayerProfile = { "PlayerProfile", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCloudScriptPostFunctionResultForPlayerTriggeredActionRequest, PlayerProfile), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForPlayerTriggeredActionRequest_Statics::NewProp_PlayerProfile_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForPlayerTriggeredActionRequest_Statics::NewProp_PlayerProfile_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForPlayerTriggeredActionRequest_Statics::NewProp_PlayStreamEventEnvelope_MetaData[] = {
		{ "Category", "PlayFab | CloudScript | Server-Side Cloud Script Models" },
		{ "Comment", "/** The triggering PlayStream event, if any, that caused the function to be invoked. */" },
		{ "ModuleRelativePath", "Classes/PlayFabCloudScriptModels.h" },
		{ "ToolTip", "The triggering PlayStream event, if any, that caused the function to be invoked." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForPlayerTriggeredActionRequest_Statics::NewProp_PlayStreamEventEnvelope = { "PlayStreamEventEnvelope", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCloudScriptPostFunctionResultForPlayerTriggeredActionRequest, PlayStreamEventEnvelope), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForPlayerTriggeredActionRequest_Statics::NewProp_PlayStreamEventEnvelope_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForPlayerTriggeredActionRequest_Statics::NewProp_PlayStreamEventEnvelope_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForPlayerTriggeredActionRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForPlayerTriggeredActionRequest_Statics::NewProp_CustomTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForPlayerTriggeredActionRequest_Statics::NewProp_FunctionResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForPlayerTriggeredActionRequest_Statics::NewProp_PlayerProfile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForPlayerTriggeredActionRequest_Statics::NewProp_PlayStreamEventEnvelope,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForPlayerTriggeredActionRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"CloudScriptPostFunctionResultForPlayerTriggeredActionRequest",
		sizeof(FCloudScriptPostFunctionResultForPlayerTriggeredActionRequest),
		alignof(FCloudScriptPostFunctionResultForPlayerTriggeredActionRequest),
		Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForPlayerTriggeredActionRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForPlayerTriggeredActionRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForPlayerTriggeredActionRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForPlayerTriggeredActionRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForPlayerTriggeredActionRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForPlayerTriggeredActionRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CloudScriptPostFunctionResultForPlayerTriggeredActionRequest"), sizeof(FCloudScriptPostFunctionResultForPlayerTriggeredActionRequest), Get_Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForPlayerTriggeredActionRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForPlayerTriggeredActionRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForPlayerTriggeredActionRequest_Hash() { return 3460890082U; }

static_assert(std::is_polymorphic<FCloudScriptPostFunctionResultForFunctionExecutionRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FCloudScriptPostFunctionResultForFunctionExecutionRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FCloudScriptPostFunctionResultForFunctionExecutionRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForFunctionExecutionRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForFunctionExecutionRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("CloudScriptPostFunctionResultForFunctionExecutionRequest"), sizeof(FCloudScriptPostFunctionResultForFunctionExecutionRequest), Get_Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForFunctionExecutionRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FCloudScriptPostFunctionResultForFunctionExecutionRequest>()
{
	return FCloudScriptPostFunctionResultForFunctionExecutionRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCloudScriptPostFunctionResultForFunctionExecutionRequest(FCloudScriptPostFunctionResultForFunctionExecutionRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("CloudScriptPostFunctionResultForFunctionExecutionRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFCloudScriptPostFunctionResultForFunctionExecutionRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFCloudScriptPostFunctionResultForFunctionExecutionRequest()
	{
		UScriptStruct::DeferCppStructOps<FCloudScriptPostFunctionResultForFunctionExecutionRequest>(FName(TEXT("CloudScriptPostFunctionResultForFunctionExecutionRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFCloudScriptPostFunctionResultForFunctionExecutionRequest;
	struct Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForFunctionExecutionRequest_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FunctionResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FunctionResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForFunctionExecutionRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabCloudScriptModels.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForFunctionExecutionRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCloudScriptPostFunctionResultForFunctionExecutionRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForFunctionExecutionRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | CloudScript | Server-Side Cloud Script Models" },
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
		{ "ModuleRelativePath", "Classes/PlayFabCloudScriptModels.h" },
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForFunctionExecutionRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCloudScriptPostFunctionResultForFunctionExecutionRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForFunctionExecutionRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForFunctionExecutionRequest_Statics::NewProp_CustomTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForFunctionExecutionRequest_Statics::NewProp_Entity_MetaData[] = {
		{ "Category", "PlayFab | CloudScript | Server-Side Cloud Script Models" },
		{ "Comment", "/** The entity to perform this action on. */" },
		{ "ModuleRelativePath", "Classes/PlayFabCloudScriptModels.h" },
		{ "ToolTip", "The entity to perform this action on." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForFunctionExecutionRequest_Statics::NewProp_Entity = { "Entity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCloudScriptPostFunctionResultForFunctionExecutionRequest, Entity), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForFunctionExecutionRequest_Statics::NewProp_Entity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForFunctionExecutionRequest_Statics::NewProp_Entity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForFunctionExecutionRequest_Statics::NewProp_FunctionResult_MetaData[] = {
		{ "Category", "PlayFab | CloudScript | Server-Side Cloud Script Models" },
		{ "Comment", "/** The result of the function execution. */" },
		{ "ModuleRelativePath", "Classes/PlayFabCloudScriptModels.h" },
		{ "ToolTip", "The result of the function execution." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForFunctionExecutionRequest_Statics::NewProp_FunctionResult = { "FunctionResult", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCloudScriptPostFunctionResultForFunctionExecutionRequest, FunctionResult), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForFunctionExecutionRequest_Statics::NewProp_FunctionResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForFunctionExecutionRequest_Statics::NewProp_FunctionResult_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForFunctionExecutionRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForFunctionExecutionRequest_Statics::NewProp_CustomTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForFunctionExecutionRequest_Statics::NewProp_Entity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForFunctionExecutionRequest_Statics::NewProp_FunctionResult,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForFunctionExecutionRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"CloudScriptPostFunctionResultForFunctionExecutionRequest",
		sizeof(FCloudScriptPostFunctionResultForFunctionExecutionRequest),
		alignof(FCloudScriptPostFunctionResultForFunctionExecutionRequest),
		Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForFunctionExecutionRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForFunctionExecutionRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForFunctionExecutionRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForFunctionExecutionRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForFunctionExecutionRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForFunctionExecutionRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CloudScriptPostFunctionResultForFunctionExecutionRequest"), sizeof(FCloudScriptPostFunctionResultForFunctionExecutionRequest), Get_Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForFunctionExecutionRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForFunctionExecutionRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForFunctionExecutionRequest_Hash() { return 3371554343U; }

static_assert(std::is_polymorphic<FCloudScriptPostFunctionResultForEntityTriggeredActionRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FCloudScriptPostFunctionResultForEntityTriggeredActionRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FCloudScriptPostFunctionResultForEntityTriggeredActionRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForEntityTriggeredActionRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForEntityTriggeredActionRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("CloudScriptPostFunctionResultForEntityTriggeredActionRequest"), sizeof(FCloudScriptPostFunctionResultForEntityTriggeredActionRequest), Get_Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForEntityTriggeredActionRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FCloudScriptPostFunctionResultForEntityTriggeredActionRequest>()
{
	return FCloudScriptPostFunctionResultForEntityTriggeredActionRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCloudScriptPostFunctionResultForEntityTriggeredActionRequest(FCloudScriptPostFunctionResultForEntityTriggeredActionRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("CloudScriptPostFunctionResultForEntityTriggeredActionRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFCloudScriptPostFunctionResultForEntityTriggeredActionRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFCloudScriptPostFunctionResultForEntityTriggeredActionRequest()
	{
		UScriptStruct::DeferCppStructOps<FCloudScriptPostFunctionResultForEntityTriggeredActionRequest>(FName(TEXT("CloudScriptPostFunctionResultForEntityTriggeredActionRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFCloudScriptPostFunctionResultForEntityTriggeredActionRequest;
	struct Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForEntityTriggeredActionRequest_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FunctionResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FunctionResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForEntityTriggeredActionRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabCloudScriptModels.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForEntityTriggeredActionRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCloudScriptPostFunctionResultForEntityTriggeredActionRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForEntityTriggeredActionRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | CloudScript | Server-Side Cloud Script Models" },
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
		{ "ModuleRelativePath", "Classes/PlayFabCloudScriptModels.h" },
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForEntityTriggeredActionRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCloudScriptPostFunctionResultForEntityTriggeredActionRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForEntityTriggeredActionRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForEntityTriggeredActionRequest_Statics::NewProp_CustomTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForEntityTriggeredActionRequest_Statics::NewProp_Entity_MetaData[] = {
		{ "Category", "PlayFab | CloudScript | Server-Side Cloud Script Models" },
		{ "Comment", "/** The entity to perform this action on. */" },
		{ "ModuleRelativePath", "Classes/PlayFabCloudScriptModels.h" },
		{ "ToolTip", "The entity to perform this action on." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForEntityTriggeredActionRequest_Statics::NewProp_Entity = { "Entity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCloudScriptPostFunctionResultForEntityTriggeredActionRequest, Entity), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForEntityTriggeredActionRequest_Statics::NewProp_Entity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForEntityTriggeredActionRequest_Statics::NewProp_Entity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForEntityTriggeredActionRequest_Statics::NewProp_FunctionResult_MetaData[] = {
		{ "Category", "PlayFab | CloudScript | Server-Side Cloud Script Models" },
		{ "Comment", "/** The result of the function execution. */" },
		{ "ModuleRelativePath", "Classes/PlayFabCloudScriptModels.h" },
		{ "ToolTip", "The result of the function execution." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForEntityTriggeredActionRequest_Statics::NewProp_FunctionResult = { "FunctionResult", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCloudScriptPostFunctionResultForEntityTriggeredActionRequest, FunctionResult), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForEntityTriggeredActionRequest_Statics::NewProp_FunctionResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForEntityTriggeredActionRequest_Statics::NewProp_FunctionResult_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForEntityTriggeredActionRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForEntityTriggeredActionRequest_Statics::NewProp_CustomTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForEntityTriggeredActionRequest_Statics::NewProp_Entity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForEntityTriggeredActionRequest_Statics::NewProp_FunctionResult,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForEntityTriggeredActionRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"CloudScriptPostFunctionResultForEntityTriggeredActionRequest",
		sizeof(FCloudScriptPostFunctionResultForEntityTriggeredActionRequest),
		alignof(FCloudScriptPostFunctionResultForEntityTriggeredActionRequest),
		Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForEntityTriggeredActionRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForEntityTriggeredActionRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForEntityTriggeredActionRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForEntityTriggeredActionRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForEntityTriggeredActionRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForEntityTriggeredActionRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CloudScriptPostFunctionResultForEntityTriggeredActionRequest"), sizeof(FCloudScriptPostFunctionResultForEntityTriggeredActionRequest), Get_Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForEntityTriggeredActionRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForEntityTriggeredActionRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForEntityTriggeredActionRequest_Hash() { return 2996333420U; }

static_assert(std::is_polymorphic<FCloudScriptEmptyResult>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FCloudScriptEmptyResult cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

class UScriptStruct* FCloudScriptEmptyResult::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FCloudScriptEmptyResult_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCloudScriptEmptyResult, Z_Construct_UPackage__Script_PlayFab(), TEXT("CloudScriptEmptyResult"), sizeof(FCloudScriptEmptyResult), Get_Z_Construct_UScriptStruct_FCloudScriptEmptyResult_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FCloudScriptEmptyResult>()
{
	return FCloudScriptEmptyResult::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCloudScriptEmptyResult(FCloudScriptEmptyResult::StaticStruct, TEXT("/Script/PlayFab"), TEXT("CloudScriptEmptyResult"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFCloudScriptEmptyResult
{
	FScriptStruct_PlayFab_StaticRegisterNativesFCloudScriptEmptyResult()
	{
		UScriptStruct::DeferCppStructOps<FCloudScriptEmptyResult>(FName(TEXT("CloudScriptEmptyResult")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFCloudScriptEmptyResult;
	struct Z_Construct_UScriptStruct_FCloudScriptEmptyResult_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCloudScriptEmptyResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabCloudScriptModels.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCloudScriptEmptyResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCloudScriptEmptyResult>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCloudScriptEmptyResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"CloudScriptEmptyResult",
		sizeof(FCloudScriptEmptyResult),
		alignof(FCloudScriptEmptyResult),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCloudScriptEmptyResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloudScriptEmptyResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCloudScriptEmptyResult()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCloudScriptEmptyResult_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CloudScriptEmptyResult"), sizeof(FCloudScriptEmptyResult), Get_Z_Construct_UScriptStruct_FCloudScriptEmptyResult_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCloudScriptEmptyResult_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCloudScriptEmptyResult_Hash() { return 2822035924U; }

static_assert(std::is_polymorphic<FCloudScriptListQueuedFunctionsResult>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FCloudScriptListQueuedFunctionsResult cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

class UScriptStruct* FCloudScriptListQueuedFunctionsResult::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FCloudScriptListQueuedFunctionsResult_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCloudScriptListQueuedFunctionsResult, Z_Construct_UPackage__Script_PlayFab(), TEXT("CloudScriptListQueuedFunctionsResult"), sizeof(FCloudScriptListQueuedFunctionsResult), Get_Z_Construct_UScriptStruct_FCloudScriptListQueuedFunctionsResult_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FCloudScriptListQueuedFunctionsResult>()
{
	return FCloudScriptListQueuedFunctionsResult::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCloudScriptListQueuedFunctionsResult(FCloudScriptListQueuedFunctionsResult::StaticStruct, TEXT("/Script/PlayFab"), TEXT("CloudScriptListQueuedFunctionsResult"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFCloudScriptListQueuedFunctionsResult
{
	FScriptStruct_PlayFab_StaticRegisterNativesFCloudScriptListQueuedFunctionsResult()
	{
		UScriptStruct::DeferCppStructOps<FCloudScriptListQueuedFunctionsResult>(FName(TEXT("CloudScriptListQueuedFunctionsResult")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFCloudScriptListQueuedFunctionsResult;
	struct Z_Construct_UScriptStruct_FCloudScriptListQueuedFunctionsResult_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Functions_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Functions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Functions;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCloudScriptListQueuedFunctionsResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabCloudScriptModels.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCloudScriptListQueuedFunctionsResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCloudScriptListQueuedFunctionsResult>();
	}
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCloudScriptListQueuedFunctionsResult_Statics::NewProp_Functions_Inner = { "Functions", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCloudScriptListQueuedFunctionsResult_Statics::NewProp_Functions_MetaData[] = {
		{ "Category", "PlayFab | CloudScript | Server-Side Cloud Script Models" },
		{ "Comment", "/** The list of Queue triggered functions that are currently registered for the title. */" },
		{ "ModuleRelativePath", "Classes/PlayFabCloudScriptModels.h" },
		{ "ToolTip", "The list of Queue triggered functions that are currently registered for the title." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCloudScriptListQueuedFunctionsResult_Statics::NewProp_Functions = { "Functions", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCloudScriptListQueuedFunctionsResult, Functions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCloudScriptListQueuedFunctionsResult_Statics::NewProp_Functions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloudScriptListQueuedFunctionsResult_Statics::NewProp_Functions_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCloudScriptListQueuedFunctionsResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCloudScriptListQueuedFunctionsResult_Statics::NewProp_Functions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCloudScriptListQueuedFunctionsResult_Statics::NewProp_Functions,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCloudScriptListQueuedFunctionsResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"CloudScriptListQueuedFunctionsResult",
		sizeof(FCloudScriptListQueuedFunctionsResult),
		alignof(FCloudScriptListQueuedFunctionsResult),
		Z_Construct_UScriptStruct_FCloudScriptListQueuedFunctionsResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloudScriptListQueuedFunctionsResult_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCloudScriptListQueuedFunctionsResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloudScriptListQueuedFunctionsResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCloudScriptListQueuedFunctionsResult()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCloudScriptListQueuedFunctionsResult_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CloudScriptListQueuedFunctionsResult"), sizeof(FCloudScriptListQueuedFunctionsResult), Get_Z_Construct_UScriptStruct_FCloudScriptListQueuedFunctionsResult_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCloudScriptListQueuedFunctionsResult_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCloudScriptListQueuedFunctionsResult_Hash() { return 4150339289U; }

static_assert(std::is_polymorphic<FCloudScriptListHttpFunctionsResult>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FCloudScriptListHttpFunctionsResult cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

class UScriptStruct* FCloudScriptListHttpFunctionsResult::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FCloudScriptListHttpFunctionsResult_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCloudScriptListHttpFunctionsResult, Z_Construct_UPackage__Script_PlayFab(), TEXT("CloudScriptListHttpFunctionsResult"), sizeof(FCloudScriptListHttpFunctionsResult), Get_Z_Construct_UScriptStruct_FCloudScriptListHttpFunctionsResult_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FCloudScriptListHttpFunctionsResult>()
{
	return FCloudScriptListHttpFunctionsResult::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCloudScriptListHttpFunctionsResult(FCloudScriptListHttpFunctionsResult::StaticStruct, TEXT("/Script/PlayFab"), TEXT("CloudScriptListHttpFunctionsResult"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFCloudScriptListHttpFunctionsResult
{
	FScriptStruct_PlayFab_StaticRegisterNativesFCloudScriptListHttpFunctionsResult()
	{
		UScriptStruct::DeferCppStructOps<FCloudScriptListHttpFunctionsResult>(FName(TEXT("CloudScriptListHttpFunctionsResult")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFCloudScriptListHttpFunctionsResult;
	struct Z_Construct_UScriptStruct_FCloudScriptListHttpFunctionsResult_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Functions_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Functions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Functions;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCloudScriptListHttpFunctionsResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabCloudScriptModels.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCloudScriptListHttpFunctionsResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCloudScriptListHttpFunctionsResult>();
	}
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCloudScriptListHttpFunctionsResult_Statics::NewProp_Functions_Inner = { "Functions", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCloudScriptListHttpFunctionsResult_Statics::NewProp_Functions_MetaData[] = {
		{ "Category", "PlayFab | CloudScript | Server-Side Cloud Script Models" },
		{ "Comment", "/** The list of HTTP triggered functions that are currently registered for the title. */" },
		{ "ModuleRelativePath", "Classes/PlayFabCloudScriptModels.h" },
		{ "ToolTip", "The list of HTTP triggered functions that are currently registered for the title." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCloudScriptListHttpFunctionsResult_Statics::NewProp_Functions = { "Functions", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCloudScriptListHttpFunctionsResult, Functions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCloudScriptListHttpFunctionsResult_Statics::NewProp_Functions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloudScriptListHttpFunctionsResult_Statics::NewProp_Functions_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCloudScriptListHttpFunctionsResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCloudScriptListHttpFunctionsResult_Statics::NewProp_Functions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCloudScriptListHttpFunctionsResult_Statics::NewProp_Functions,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCloudScriptListHttpFunctionsResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"CloudScriptListHttpFunctionsResult",
		sizeof(FCloudScriptListHttpFunctionsResult),
		alignof(FCloudScriptListHttpFunctionsResult),
		Z_Construct_UScriptStruct_FCloudScriptListHttpFunctionsResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloudScriptListHttpFunctionsResult_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCloudScriptListHttpFunctionsResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloudScriptListHttpFunctionsResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCloudScriptListHttpFunctionsResult()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCloudScriptListHttpFunctionsResult_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CloudScriptListHttpFunctionsResult"), sizeof(FCloudScriptListHttpFunctionsResult), Get_Z_Construct_UScriptStruct_FCloudScriptListHttpFunctionsResult_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCloudScriptListHttpFunctionsResult_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCloudScriptListHttpFunctionsResult_Hash() { return 2056369813U; }

static_assert(std::is_polymorphic<FCloudScriptListFunctionsResult>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FCloudScriptListFunctionsResult cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

class UScriptStruct* FCloudScriptListFunctionsResult::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FCloudScriptListFunctionsResult_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCloudScriptListFunctionsResult, Z_Construct_UPackage__Script_PlayFab(), TEXT("CloudScriptListFunctionsResult"), sizeof(FCloudScriptListFunctionsResult), Get_Z_Construct_UScriptStruct_FCloudScriptListFunctionsResult_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FCloudScriptListFunctionsResult>()
{
	return FCloudScriptListFunctionsResult::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCloudScriptListFunctionsResult(FCloudScriptListFunctionsResult::StaticStruct, TEXT("/Script/PlayFab"), TEXT("CloudScriptListFunctionsResult"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFCloudScriptListFunctionsResult
{
	FScriptStruct_PlayFab_StaticRegisterNativesFCloudScriptListFunctionsResult()
	{
		UScriptStruct::DeferCppStructOps<FCloudScriptListFunctionsResult>(FName(TEXT("CloudScriptListFunctionsResult")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFCloudScriptListFunctionsResult;
	struct Z_Construct_UScriptStruct_FCloudScriptListFunctionsResult_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Functions_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Functions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Functions;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCloudScriptListFunctionsResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabCloudScriptModels.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCloudScriptListFunctionsResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCloudScriptListFunctionsResult>();
	}
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCloudScriptListFunctionsResult_Statics::NewProp_Functions_Inner = { "Functions", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCloudScriptListFunctionsResult_Statics::NewProp_Functions_MetaData[] = {
		{ "Category", "PlayFab | CloudScript | Server-Side Cloud Script Models" },
		{ "Comment", "/** The list of functions that are currently registered for the title. */" },
		{ "ModuleRelativePath", "Classes/PlayFabCloudScriptModels.h" },
		{ "ToolTip", "The list of functions that are currently registered for the title." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCloudScriptListFunctionsResult_Statics::NewProp_Functions = { "Functions", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCloudScriptListFunctionsResult, Functions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCloudScriptListFunctionsResult_Statics::NewProp_Functions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloudScriptListFunctionsResult_Statics::NewProp_Functions_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCloudScriptListFunctionsResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCloudScriptListFunctionsResult_Statics::NewProp_Functions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCloudScriptListFunctionsResult_Statics::NewProp_Functions,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCloudScriptListFunctionsResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"CloudScriptListFunctionsResult",
		sizeof(FCloudScriptListFunctionsResult),
		alignof(FCloudScriptListFunctionsResult),
		Z_Construct_UScriptStruct_FCloudScriptListFunctionsResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloudScriptListFunctionsResult_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCloudScriptListFunctionsResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloudScriptListFunctionsResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCloudScriptListFunctionsResult()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCloudScriptListFunctionsResult_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CloudScriptListFunctionsResult"), sizeof(FCloudScriptListFunctionsResult), Get_Z_Construct_UScriptStruct_FCloudScriptListFunctionsResult_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCloudScriptListFunctionsResult_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCloudScriptListFunctionsResult_Hash() { return 2633830164U; }

static_assert(std::is_polymorphic<FCloudScriptListFunctionsRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FCloudScriptListFunctionsRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FCloudScriptListFunctionsRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FCloudScriptListFunctionsRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCloudScriptListFunctionsRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("CloudScriptListFunctionsRequest"), sizeof(FCloudScriptListFunctionsRequest), Get_Z_Construct_UScriptStruct_FCloudScriptListFunctionsRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FCloudScriptListFunctionsRequest>()
{
	return FCloudScriptListFunctionsRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCloudScriptListFunctionsRequest(FCloudScriptListFunctionsRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("CloudScriptListFunctionsRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFCloudScriptListFunctionsRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFCloudScriptListFunctionsRequest()
	{
		UScriptStruct::DeferCppStructOps<FCloudScriptListFunctionsRequest>(FName(TEXT("CloudScriptListFunctionsRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFCloudScriptListFunctionsRequest;
	struct Z_Construct_UScriptStruct_FCloudScriptListFunctionsRequest_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCloudScriptListFunctionsRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * A title can have many functions, ListHttpFunctions will return a list of all the currently registered HTTP triggered\n * functions for a given title.\n */" },
		{ "ModuleRelativePath", "Classes/PlayFabCloudScriptModels.h" },
		{ "ToolTip", "A title can have many functions, ListHttpFunctions will return a list of all the currently registered HTTP triggered\nfunctions for a given title." },
	};
#endif
	void* Z_Construct_UScriptStruct_FCloudScriptListFunctionsRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCloudScriptListFunctionsRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCloudScriptListFunctionsRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | CloudScript | Server-Side Cloud Script Models" },
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
		{ "ModuleRelativePath", "Classes/PlayFabCloudScriptModels.h" },
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCloudScriptListFunctionsRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCloudScriptListFunctionsRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FCloudScriptListFunctionsRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloudScriptListFunctionsRequest_Statics::NewProp_CustomTags_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCloudScriptListFunctionsRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCloudScriptListFunctionsRequest_Statics::NewProp_CustomTags,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCloudScriptListFunctionsRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"CloudScriptListFunctionsRequest",
		sizeof(FCloudScriptListFunctionsRequest),
		alignof(FCloudScriptListFunctionsRequest),
		Z_Construct_UScriptStruct_FCloudScriptListFunctionsRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloudScriptListFunctionsRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCloudScriptListFunctionsRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloudScriptListFunctionsRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCloudScriptListFunctionsRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCloudScriptListFunctionsRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CloudScriptListFunctionsRequest"), sizeof(FCloudScriptListFunctionsRequest), Get_Z_Construct_UScriptStruct_FCloudScriptListFunctionsRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCloudScriptListFunctionsRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCloudScriptListFunctionsRequest_Hash() { return 940384112U; }

static_assert(std::is_polymorphic<FCloudScriptGetFunctionResult>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FCloudScriptGetFunctionResult cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

class UScriptStruct* FCloudScriptGetFunctionResult::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FCloudScriptGetFunctionResult_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCloudScriptGetFunctionResult, Z_Construct_UPackage__Script_PlayFab(), TEXT("CloudScriptGetFunctionResult"), sizeof(FCloudScriptGetFunctionResult), Get_Z_Construct_UScriptStruct_FCloudScriptGetFunctionResult_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FCloudScriptGetFunctionResult>()
{
	return FCloudScriptGetFunctionResult::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCloudScriptGetFunctionResult(FCloudScriptGetFunctionResult::StaticStruct, TEXT("/Script/PlayFab"), TEXT("CloudScriptGetFunctionResult"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFCloudScriptGetFunctionResult
{
	FScriptStruct_PlayFab_StaticRegisterNativesFCloudScriptGetFunctionResult()
	{
		UScriptStruct::DeferCppStructOps<FCloudScriptGetFunctionResult>(FName(TEXT("CloudScriptGetFunctionResult")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFCloudScriptGetFunctionResult;
	struct Z_Construct_UScriptStruct_FCloudScriptGetFunctionResult_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConnectionString_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ConnectionString;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FunctionUrl_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FunctionUrl;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QueueName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_QueueName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TriggerType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TriggerType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCloudScriptGetFunctionResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabCloudScriptModels.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCloudScriptGetFunctionResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCloudScriptGetFunctionResult>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCloudScriptGetFunctionResult_Statics::NewProp_ConnectionString_MetaData[] = {
		{ "Category", "PlayFab | CloudScript | Server-Side Cloud Script Models" },
		{ "Comment", "/** The connection string for the storage account containing the queue for a queue trigger Azure Function. */" },
		{ "ModuleRelativePath", "Classes/PlayFabCloudScriptModels.h" },
		{ "ToolTip", "The connection string for the storage account containing the queue for a queue trigger Azure Function." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCloudScriptGetFunctionResult_Statics::NewProp_ConnectionString = { "ConnectionString", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCloudScriptGetFunctionResult, ConnectionString), METADATA_PARAMS(Z_Construct_UScriptStruct_FCloudScriptGetFunctionResult_Statics::NewProp_ConnectionString_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloudScriptGetFunctionResult_Statics::NewProp_ConnectionString_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCloudScriptGetFunctionResult_Statics::NewProp_FunctionUrl_MetaData[] = {
		{ "Category", "PlayFab | CloudScript | Server-Side Cloud Script Models" },
		{ "Comment", "/** The URL to be invoked to execute an HTTP triggered function. */" },
		{ "ModuleRelativePath", "Classes/PlayFabCloudScriptModels.h" },
		{ "ToolTip", "The URL to be invoked to execute an HTTP triggered function." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCloudScriptGetFunctionResult_Statics::NewProp_FunctionUrl = { "FunctionUrl", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCloudScriptGetFunctionResult, FunctionUrl), METADATA_PARAMS(Z_Construct_UScriptStruct_FCloudScriptGetFunctionResult_Statics::NewProp_FunctionUrl_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloudScriptGetFunctionResult_Statics::NewProp_FunctionUrl_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCloudScriptGetFunctionResult_Statics::NewProp_QueueName_MetaData[] = {
		{ "Category", "PlayFab | CloudScript | Server-Side Cloud Script Models" },
		{ "Comment", "/** The name of the queue for a queue trigger Azure Function. */" },
		{ "ModuleRelativePath", "Classes/PlayFabCloudScriptModels.h" },
		{ "ToolTip", "The name of the queue for a queue trigger Azure Function." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCloudScriptGetFunctionResult_Statics::NewProp_QueueName = { "QueueName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCloudScriptGetFunctionResult, QueueName), METADATA_PARAMS(Z_Construct_UScriptStruct_FCloudScriptGetFunctionResult_Statics::NewProp_QueueName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloudScriptGetFunctionResult_Statics::NewProp_QueueName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCloudScriptGetFunctionResult_Statics::NewProp_TriggerType_MetaData[] = {
		{ "Category", "PlayFab | CloudScript | Server-Side Cloud Script Models" },
		{ "Comment", "/** The trigger type for the function. */" },
		{ "ModuleRelativePath", "Classes/PlayFabCloudScriptModels.h" },
		{ "ToolTip", "The trigger type for the function." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCloudScriptGetFunctionResult_Statics::NewProp_TriggerType = { "TriggerType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCloudScriptGetFunctionResult, TriggerType), METADATA_PARAMS(Z_Construct_UScriptStruct_FCloudScriptGetFunctionResult_Statics::NewProp_TriggerType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloudScriptGetFunctionResult_Statics::NewProp_TriggerType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCloudScriptGetFunctionResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCloudScriptGetFunctionResult_Statics::NewProp_ConnectionString,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCloudScriptGetFunctionResult_Statics::NewProp_FunctionUrl,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCloudScriptGetFunctionResult_Statics::NewProp_QueueName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCloudScriptGetFunctionResult_Statics::NewProp_TriggerType,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCloudScriptGetFunctionResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"CloudScriptGetFunctionResult",
		sizeof(FCloudScriptGetFunctionResult),
		alignof(FCloudScriptGetFunctionResult),
		Z_Construct_UScriptStruct_FCloudScriptGetFunctionResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloudScriptGetFunctionResult_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCloudScriptGetFunctionResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloudScriptGetFunctionResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCloudScriptGetFunctionResult()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCloudScriptGetFunctionResult_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CloudScriptGetFunctionResult"), sizeof(FCloudScriptGetFunctionResult), Get_Z_Construct_UScriptStruct_FCloudScriptGetFunctionResult_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCloudScriptGetFunctionResult_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCloudScriptGetFunctionResult_Hash() { return 8117900U; }

static_assert(std::is_polymorphic<FCloudScriptGetFunctionRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FCloudScriptGetFunctionRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FCloudScriptGetFunctionRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FCloudScriptGetFunctionRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCloudScriptGetFunctionRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("CloudScriptGetFunctionRequest"), sizeof(FCloudScriptGetFunctionRequest), Get_Z_Construct_UScriptStruct_FCloudScriptGetFunctionRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FCloudScriptGetFunctionRequest>()
{
	return FCloudScriptGetFunctionRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCloudScriptGetFunctionRequest(FCloudScriptGetFunctionRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("CloudScriptGetFunctionRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFCloudScriptGetFunctionRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFCloudScriptGetFunctionRequest()
	{
		UScriptStruct::DeferCppStructOps<FCloudScriptGetFunctionRequest>(FName(TEXT("CloudScriptGetFunctionRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFCloudScriptGetFunctionRequest;
	struct Z_Construct_UScriptStruct_FCloudScriptGetFunctionRequest_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FunctionName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FunctionName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCloudScriptGetFunctionRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabCloudScriptModels.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCloudScriptGetFunctionRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCloudScriptGetFunctionRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCloudScriptGetFunctionRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | CloudScript | Server-Side Cloud Script Models" },
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
		{ "ModuleRelativePath", "Classes/PlayFabCloudScriptModels.h" },
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCloudScriptGetFunctionRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCloudScriptGetFunctionRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FCloudScriptGetFunctionRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloudScriptGetFunctionRequest_Statics::NewProp_CustomTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCloudScriptGetFunctionRequest_Statics::NewProp_FunctionName_MetaData[] = {
		{ "Category", "PlayFab | CloudScript | Server-Side Cloud Script Models" },
		{ "Comment", "/** The name of the function to register */" },
		{ "ModuleRelativePath", "Classes/PlayFabCloudScriptModels.h" },
		{ "ToolTip", "The name of the function to register" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCloudScriptGetFunctionRequest_Statics::NewProp_FunctionName = { "FunctionName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCloudScriptGetFunctionRequest, FunctionName), METADATA_PARAMS(Z_Construct_UScriptStruct_FCloudScriptGetFunctionRequest_Statics::NewProp_FunctionName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloudScriptGetFunctionRequest_Statics::NewProp_FunctionName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCloudScriptGetFunctionRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCloudScriptGetFunctionRequest_Statics::NewProp_CustomTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCloudScriptGetFunctionRequest_Statics::NewProp_FunctionName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCloudScriptGetFunctionRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"CloudScriptGetFunctionRequest",
		sizeof(FCloudScriptGetFunctionRequest),
		alignof(FCloudScriptGetFunctionRequest),
		Z_Construct_UScriptStruct_FCloudScriptGetFunctionRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloudScriptGetFunctionRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCloudScriptGetFunctionRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloudScriptGetFunctionRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCloudScriptGetFunctionRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCloudScriptGetFunctionRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CloudScriptGetFunctionRequest"), sizeof(FCloudScriptGetFunctionRequest), Get_Z_Construct_UScriptStruct_FCloudScriptGetFunctionRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCloudScriptGetFunctionRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCloudScriptGetFunctionRequest_Hash() { return 4163007295U; }

static_assert(std::is_polymorphic<FCloudScriptExecuteFunctionResult>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FCloudScriptExecuteFunctionResult cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

class UScriptStruct* FCloudScriptExecuteFunctionResult::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionResult_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionResult, Z_Construct_UPackage__Script_PlayFab(), TEXT("CloudScriptExecuteFunctionResult"), sizeof(FCloudScriptExecuteFunctionResult), Get_Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionResult_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FCloudScriptExecuteFunctionResult>()
{
	return FCloudScriptExecuteFunctionResult::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCloudScriptExecuteFunctionResult(FCloudScriptExecuteFunctionResult::StaticStruct, TEXT("/Script/PlayFab"), TEXT("CloudScriptExecuteFunctionResult"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFCloudScriptExecuteFunctionResult
{
	FScriptStruct_PlayFab_StaticRegisterNativesFCloudScriptExecuteFunctionResult()
	{
		UScriptStruct::DeferCppStructOps<FCloudScriptExecuteFunctionResult>(FName(TEXT("CloudScriptExecuteFunctionResult")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFCloudScriptExecuteFunctionResult;
	struct Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionResult_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Error_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Error;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExecutionTimeMilliseconds_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ExecutionTimeMilliseconds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FunctionName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FunctionName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FunctionResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FunctionResult;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FunctionResultTooLarge_MetaData[];
#endif
		static void NewProp_FunctionResultTooLarge_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_FunctionResultTooLarge;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabCloudScriptModels.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCloudScriptExecuteFunctionResult>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionResult_Statics::NewProp_Error_MetaData[] = {
		{ "Category", "PlayFab | CloudScript | Server-Side Cloud Script Models" },
		{ "Comment", "/** Error from the CloudScript Azure Function. */" },
		{ "ModuleRelativePath", "Classes/PlayFabCloudScriptModels.h" },
		{ "ToolTip", "Error from the CloudScript Azure Function." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionResult_Statics::NewProp_Error = { "Error", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCloudScriptExecuteFunctionResult, Error), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionResult_Statics::NewProp_Error_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionResult_Statics::NewProp_Error_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionResult_Statics::NewProp_ExecutionTimeMilliseconds_MetaData[] = {
		{ "Category", "PlayFab | CloudScript | Server-Side Cloud Script Models" },
		{ "Comment", "/** The amount of time the function took to execute */" },
		{ "ModuleRelativePath", "Classes/PlayFabCloudScriptModels.h" },
		{ "ToolTip", "The amount of time the function took to execute" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionResult_Statics::NewProp_ExecutionTimeMilliseconds = { "ExecutionTimeMilliseconds", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCloudScriptExecuteFunctionResult, ExecutionTimeMilliseconds), METADATA_PARAMS(Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionResult_Statics::NewProp_ExecutionTimeMilliseconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionResult_Statics::NewProp_ExecutionTimeMilliseconds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionResult_Statics::NewProp_FunctionName_MetaData[] = {
		{ "Category", "PlayFab | CloudScript | Server-Side Cloud Script Models" },
		{ "Comment", "/** The name of the function that executed */" },
		{ "ModuleRelativePath", "Classes/PlayFabCloudScriptModels.h" },
		{ "ToolTip", "The name of the function that executed" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionResult_Statics::NewProp_FunctionName = { "FunctionName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCloudScriptExecuteFunctionResult, FunctionName), METADATA_PARAMS(Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionResult_Statics::NewProp_FunctionName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionResult_Statics::NewProp_FunctionName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionResult_Statics::NewProp_FunctionResult_MetaData[] = {
		{ "Category", "PlayFab | CloudScript | Server-Side Cloud Script Models" },
		{ "Comment", "/** The object returned from the function, if any */" },
		{ "ModuleRelativePath", "Classes/PlayFabCloudScriptModels.h" },
		{ "ToolTip", "The object returned from the function, if any" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionResult_Statics::NewProp_FunctionResult = { "FunctionResult", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCloudScriptExecuteFunctionResult, FunctionResult), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionResult_Statics::NewProp_FunctionResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionResult_Statics::NewProp_FunctionResult_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionResult_Statics::NewProp_FunctionResultTooLarge_MetaData[] = {
		{ "Category", "PlayFab | CloudScript | Server-Side Cloud Script Models" },
		{ "Comment", "/** Flag indicating if the FunctionResult was too large and was subsequently dropped from this event. */" },
		{ "ModuleRelativePath", "Classes/PlayFabCloudScriptModels.h" },
		{ "ToolTip", "Flag indicating if the FunctionResult was too large and was subsequently dropped from this event." },
	};
#endif
	void Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionResult_Statics::NewProp_FunctionResultTooLarge_SetBit(void* Obj)
	{
		((FCloudScriptExecuteFunctionResult*)Obj)->FunctionResultTooLarge = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionResult_Statics::NewProp_FunctionResultTooLarge = { "FunctionResultTooLarge", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCloudScriptExecuteFunctionResult), &Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionResult_Statics::NewProp_FunctionResultTooLarge_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionResult_Statics::NewProp_FunctionResultTooLarge_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionResult_Statics::NewProp_FunctionResultTooLarge_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionResult_Statics::NewProp_Error,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionResult_Statics::NewProp_ExecutionTimeMilliseconds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionResult_Statics::NewProp_FunctionName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionResult_Statics::NewProp_FunctionResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionResult_Statics::NewProp_FunctionResultTooLarge,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"CloudScriptExecuteFunctionResult",
		sizeof(FCloudScriptExecuteFunctionResult),
		alignof(FCloudScriptExecuteFunctionResult),
		Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionResult_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionResult()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionResult_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CloudScriptExecuteFunctionResult"), sizeof(FCloudScriptExecuteFunctionResult), Get_Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionResult_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionResult_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionResult_Hash() { return 1157593326U; }

static_assert(std::is_polymorphic<FCloudScriptExecuteFunctionRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FCloudScriptExecuteFunctionRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FCloudScriptExecuteFunctionRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("CloudScriptExecuteFunctionRequest"), sizeof(FCloudScriptExecuteFunctionRequest), Get_Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FCloudScriptExecuteFunctionRequest>()
{
	return FCloudScriptExecuteFunctionRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCloudScriptExecuteFunctionRequest(FCloudScriptExecuteFunctionRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("CloudScriptExecuteFunctionRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFCloudScriptExecuteFunctionRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFCloudScriptExecuteFunctionRequest()
	{
		UScriptStruct::DeferCppStructOps<FCloudScriptExecuteFunctionRequest>(FName(TEXT("CloudScriptExecuteFunctionRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFCloudScriptExecuteFunctionRequest;
	struct Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionRequest_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FunctionName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FunctionName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FunctionParameter_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FunctionParameter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GeneratePlayStreamEvent_MetaData[];
#endif
		static void NewProp_GeneratePlayStreamEvent_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_GeneratePlayStreamEvent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Executes an Azure Function with the profile of the entity that is defined in the request. */" },
		{ "ModuleRelativePath", "Classes/PlayFabCloudScriptModels.h" },
		{ "ToolTip", "Executes an Azure Function with the profile of the entity that is defined in the request." },
	};
#endif
	void* Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCloudScriptExecuteFunctionRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | CloudScript | Server-Side Cloud Script Models" },
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
		{ "ModuleRelativePath", "Classes/PlayFabCloudScriptModels.h" },
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCloudScriptExecuteFunctionRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionRequest_Statics::NewProp_CustomTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionRequest_Statics::NewProp_Entity_MetaData[] = {
		{ "Category", "PlayFab | CloudScript | Server-Side Cloud Script Models" },
		{ "Comment", "/** The optional entity to perform this action on. Defaults to the currently logged in entity. */" },
		{ "ModuleRelativePath", "Classes/PlayFabCloudScriptModels.h" },
		{ "ToolTip", "The optional entity to perform this action on. Defaults to the currently logged in entity." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionRequest_Statics::NewProp_Entity = { "Entity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCloudScriptExecuteFunctionRequest, Entity), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionRequest_Statics::NewProp_Entity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionRequest_Statics::NewProp_Entity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionRequest_Statics::NewProp_FunctionName_MetaData[] = {
		{ "Category", "PlayFab | CloudScript | Server-Side Cloud Script Models" },
		{ "Comment", "/** The name of the CloudScript function to execute */" },
		{ "ModuleRelativePath", "Classes/PlayFabCloudScriptModels.h" },
		{ "ToolTip", "The name of the CloudScript function to execute" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionRequest_Statics::NewProp_FunctionName = { "FunctionName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCloudScriptExecuteFunctionRequest, FunctionName), METADATA_PARAMS(Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionRequest_Statics::NewProp_FunctionName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionRequest_Statics::NewProp_FunctionName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionRequest_Statics::NewProp_FunctionParameter_MetaData[] = {
		{ "Category", "PlayFab | CloudScript | Server-Side Cloud Script Models" },
		{ "Comment", "/** Object that is passed in to the function as the FunctionArgument field of the FunctionExecutionContext data structure */" },
		{ "ModuleRelativePath", "Classes/PlayFabCloudScriptModels.h" },
		{ "ToolTip", "Object that is passed in to the function as the FunctionArgument field of the FunctionExecutionContext data structure" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionRequest_Statics::NewProp_FunctionParameter = { "FunctionParameter", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCloudScriptExecuteFunctionRequest, FunctionParameter), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionRequest_Statics::NewProp_FunctionParameter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionRequest_Statics::NewProp_FunctionParameter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionRequest_Statics::NewProp_GeneratePlayStreamEvent_MetaData[] = {
		{ "Category", "PlayFab | CloudScript | Server-Side Cloud Script Models" },
		{ "Comment", "/**\n     * Generate a 'entity_executed_cloudscript_function' PlayStream event containing the results of the function execution and\n     * other contextual information. This event will show up in the PlayStream debugger console for the player in Game Manager.\n     */" },
		{ "ModuleRelativePath", "Classes/PlayFabCloudScriptModels.h" },
		{ "ToolTip", "Generate a 'entity_executed_cloudscript_function' PlayStream event containing the results of the function execution and\nother contextual information. This event will show up in the PlayStream debugger console for the player in Game Manager." },
	};
#endif
	void Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionRequest_Statics::NewProp_GeneratePlayStreamEvent_SetBit(void* Obj)
	{
		((FCloudScriptExecuteFunctionRequest*)Obj)->GeneratePlayStreamEvent = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionRequest_Statics::NewProp_GeneratePlayStreamEvent = { "GeneratePlayStreamEvent", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCloudScriptExecuteFunctionRequest), &Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionRequest_Statics::NewProp_GeneratePlayStreamEvent_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionRequest_Statics::NewProp_GeneratePlayStreamEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionRequest_Statics::NewProp_GeneratePlayStreamEvent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionRequest_Statics::NewProp_CustomTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionRequest_Statics::NewProp_Entity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionRequest_Statics::NewProp_FunctionName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionRequest_Statics::NewProp_FunctionParameter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionRequest_Statics::NewProp_GeneratePlayStreamEvent,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"CloudScriptExecuteFunctionRequest",
		sizeof(FCloudScriptExecuteFunctionRequest),
		alignof(FCloudScriptExecuteFunctionRequest),
		Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CloudScriptExecuteFunctionRequest"), sizeof(FCloudScriptExecuteFunctionRequest), Get_Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionRequest_Hash() { return 1949848019U; }

static_assert(std::is_polymorphic<FCloudScriptExecuteEntityCloudScriptRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FCloudScriptExecuteEntityCloudScriptRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FCloudScriptExecuteEntityCloudScriptRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FCloudScriptExecuteEntityCloudScriptRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCloudScriptExecuteEntityCloudScriptRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("CloudScriptExecuteEntityCloudScriptRequest"), sizeof(FCloudScriptExecuteEntityCloudScriptRequest), Get_Z_Construct_UScriptStruct_FCloudScriptExecuteEntityCloudScriptRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FCloudScriptExecuteEntityCloudScriptRequest>()
{
	return FCloudScriptExecuteEntityCloudScriptRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCloudScriptExecuteEntityCloudScriptRequest(FCloudScriptExecuteEntityCloudScriptRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("CloudScriptExecuteEntityCloudScriptRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFCloudScriptExecuteEntityCloudScriptRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFCloudScriptExecuteEntityCloudScriptRequest()
	{
		UScriptStruct::DeferCppStructOps<FCloudScriptExecuteEntityCloudScriptRequest>(FName(TEXT("CloudScriptExecuteEntityCloudScriptRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFCloudScriptExecuteEntityCloudScriptRequest;
	struct Z_Construct_UScriptStruct_FCloudScriptExecuteEntityCloudScriptRequest_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FunctionName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FunctionName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FunctionParameter_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FunctionParameter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GeneratePlayStreamEvent_MetaData[];
#endif
		static void NewProp_GeneratePlayStreamEvent_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_GeneratePlayStreamEvent;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RevisionSelection_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RevisionSelection_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_RevisionSelection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpecificRevision_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SpecificRevision;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCloudScriptExecuteEntityCloudScriptRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Executes CloudScript with the entity profile that is defined in the request. */" },
		{ "ModuleRelativePath", "Classes/PlayFabCloudScriptModels.h" },
		{ "ToolTip", "Executes CloudScript with the entity profile that is defined in the request." },
	};
#endif
	void* Z_Construct_UScriptStruct_FCloudScriptExecuteEntityCloudScriptRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCloudScriptExecuteEntityCloudScriptRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCloudScriptExecuteEntityCloudScriptRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | CloudScript | Server-Side Cloud Script Models" },
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
		{ "ModuleRelativePath", "Classes/PlayFabCloudScriptModels.h" },
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCloudScriptExecuteEntityCloudScriptRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCloudScriptExecuteEntityCloudScriptRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FCloudScriptExecuteEntityCloudScriptRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloudScriptExecuteEntityCloudScriptRequest_Statics::NewProp_CustomTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCloudScriptExecuteEntityCloudScriptRequest_Statics::NewProp_Entity_MetaData[] = {
		{ "Category", "PlayFab | CloudScript | Server-Side Cloud Script Models" },
		{ "Comment", "/** The optional entity to perform this action on. Defaults to the currently logged in entity. */" },
		{ "ModuleRelativePath", "Classes/PlayFabCloudScriptModels.h" },
		{ "ToolTip", "The optional entity to perform this action on. Defaults to the currently logged in entity." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCloudScriptExecuteEntityCloudScriptRequest_Statics::NewProp_Entity = { "Entity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCloudScriptExecuteEntityCloudScriptRequest, Entity), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FCloudScriptExecuteEntityCloudScriptRequest_Statics::NewProp_Entity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloudScriptExecuteEntityCloudScriptRequest_Statics::NewProp_Entity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCloudScriptExecuteEntityCloudScriptRequest_Statics::NewProp_FunctionName_MetaData[] = {
		{ "Category", "PlayFab | CloudScript | Server-Side Cloud Script Models" },
		{ "Comment", "/** The name of the CloudScript function to execute */" },
		{ "ModuleRelativePath", "Classes/PlayFabCloudScriptModels.h" },
		{ "ToolTip", "The name of the CloudScript function to execute" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCloudScriptExecuteEntityCloudScriptRequest_Statics::NewProp_FunctionName = { "FunctionName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCloudScriptExecuteEntityCloudScriptRequest, FunctionName), METADATA_PARAMS(Z_Construct_UScriptStruct_FCloudScriptExecuteEntityCloudScriptRequest_Statics::NewProp_FunctionName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloudScriptExecuteEntityCloudScriptRequest_Statics::NewProp_FunctionName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCloudScriptExecuteEntityCloudScriptRequest_Statics::NewProp_FunctionParameter_MetaData[] = {
		{ "Category", "PlayFab | CloudScript | Server-Side Cloud Script Models" },
		{ "Comment", "/** Object that is passed in to the function as the first argument */" },
		{ "ModuleRelativePath", "Classes/PlayFabCloudScriptModels.h" },
		{ "ToolTip", "Object that is passed in to the function as the first argument" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCloudScriptExecuteEntityCloudScriptRequest_Statics::NewProp_FunctionParameter = { "FunctionParameter", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCloudScriptExecuteEntityCloudScriptRequest, FunctionParameter), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FCloudScriptExecuteEntityCloudScriptRequest_Statics::NewProp_FunctionParameter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloudScriptExecuteEntityCloudScriptRequest_Statics::NewProp_FunctionParameter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCloudScriptExecuteEntityCloudScriptRequest_Statics::NewProp_GeneratePlayStreamEvent_MetaData[] = {
		{ "Category", "PlayFab | CloudScript | Server-Side Cloud Script Models" },
		{ "Comment", "/**\n     * Generate a 'entity_executed_cloudscript' PlayStream event containing the results of the function execution and other\n     * contextual information. This event will show up in the PlayStream debugger console for the player in Game Manager.\n     */" },
		{ "ModuleRelativePath", "Classes/PlayFabCloudScriptModels.h" },
		{ "ToolTip", "Generate a 'entity_executed_cloudscript' PlayStream event containing the results of the function execution and other\ncontextual information. This event will show up in the PlayStream debugger console for the player in Game Manager." },
	};
#endif
	void Z_Construct_UScriptStruct_FCloudScriptExecuteEntityCloudScriptRequest_Statics::NewProp_GeneratePlayStreamEvent_SetBit(void* Obj)
	{
		((FCloudScriptExecuteEntityCloudScriptRequest*)Obj)->GeneratePlayStreamEvent = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCloudScriptExecuteEntityCloudScriptRequest_Statics::NewProp_GeneratePlayStreamEvent = { "GeneratePlayStreamEvent", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCloudScriptExecuteEntityCloudScriptRequest), &Z_Construct_UScriptStruct_FCloudScriptExecuteEntityCloudScriptRequest_Statics::NewProp_GeneratePlayStreamEvent_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCloudScriptExecuteEntityCloudScriptRequest_Statics::NewProp_GeneratePlayStreamEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloudScriptExecuteEntityCloudScriptRequest_Statics::NewProp_GeneratePlayStreamEvent_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCloudScriptExecuteEntityCloudScriptRequest_Statics::NewProp_RevisionSelection_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCloudScriptExecuteEntityCloudScriptRequest_Statics::NewProp_RevisionSelection_MetaData[] = {
		{ "Category", "PlayFab | CloudScript | Server-Side Cloud Script Models" },
		{ "Comment", "/**\n     * Option for which revision of the CloudScript to execute. 'Latest' executes the most recently created revision, 'Live'\n     * executes the current live, published revision, and 'Specific' executes the specified revision. The default value is\n     * 'Specific', if the SpecificRevision parameter is specified, otherwise it is 'Live'.\n     */" },
		{ "ModuleRelativePath", "Classes/PlayFabCloudScriptModels.h" },
		{ "ToolTip", "Option for which revision of the CloudScript to execute. 'Latest' executes the most recently created revision, 'Live'\nexecutes the current live, published revision, and 'Specific' executes the specified revision. The default value is\n'Specific', if the SpecificRevision parameter is specified, otherwise it is 'Live'." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCloudScriptExecuteEntityCloudScriptRequest_Statics::NewProp_RevisionSelection = { "RevisionSelection", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCloudScriptExecuteEntityCloudScriptRequest, RevisionSelection), Z_Construct_UEnum_PlayFab_ECloudScriptRevisionOption, METADATA_PARAMS(Z_Construct_UScriptStruct_FCloudScriptExecuteEntityCloudScriptRequest_Statics::NewProp_RevisionSelection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloudScriptExecuteEntityCloudScriptRequest_Statics::NewProp_RevisionSelection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCloudScriptExecuteEntityCloudScriptRequest_Statics::NewProp_SpecificRevision_MetaData[] = {
		{ "Category", "PlayFab | CloudScript | Server-Side Cloud Script Models" },
		{ "Comment", "/** The specific revision to execute, when RevisionSelection is set to 'Specific' */" },
		{ "ModuleRelativePath", "Classes/PlayFabCloudScriptModels.h" },
		{ "ToolTip", "The specific revision to execute, when RevisionSelection is set to 'Specific'" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCloudScriptExecuteEntityCloudScriptRequest_Statics::NewProp_SpecificRevision = { "SpecificRevision", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCloudScriptExecuteEntityCloudScriptRequest, SpecificRevision), METADATA_PARAMS(Z_Construct_UScriptStruct_FCloudScriptExecuteEntityCloudScriptRequest_Statics::NewProp_SpecificRevision_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloudScriptExecuteEntityCloudScriptRequest_Statics::NewProp_SpecificRevision_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCloudScriptExecuteEntityCloudScriptRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCloudScriptExecuteEntityCloudScriptRequest_Statics::NewProp_CustomTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCloudScriptExecuteEntityCloudScriptRequest_Statics::NewProp_Entity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCloudScriptExecuteEntityCloudScriptRequest_Statics::NewProp_FunctionName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCloudScriptExecuteEntityCloudScriptRequest_Statics::NewProp_FunctionParameter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCloudScriptExecuteEntityCloudScriptRequest_Statics::NewProp_GeneratePlayStreamEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCloudScriptExecuteEntityCloudScriptRequest_Statics::NewProp_RevisionSelection_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCloudScriptExecuteEntityCloudScriptRequest_Statics::NewProp_RevisionSelection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCloudScriptExecuteEntityCloudScriptRequest_Statics::NewProp_SpecificRevision,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCloudScriptExecuteEntityCloudScriptRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"CloudScriptExecuteEntityCloudScriptRequest",
		sizeof(FCloudScriptExecuteEntityCloudScriptRequest),
		alignof(FCloudScriptExecuteEntityCloudScriptRequest),
		Z_Construct_UScriptStruct_FCloudScriptExecuteEntityCloudScriptRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloudScriptExecuteEntityCloudScriptRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCloudScriptExecuteEntityCloudScriptRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloudScriptExecuteEntityCloudScriptRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCloudScriptExecuteEntityCloudScriptRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCloudScriptExecuteEntityCloudScriptRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CloudScriptExecuteEntityCloudScriptRequest"), sizeof(FCloudScriptExecuteEntityCloudScriptRequest), Get_Z_Construct_UScriptStruct_FCloudScriptExecuteEntityCloudScriptRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCloudScriptExecuteEntityCloudScriptRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCloudScriptExecuteEntityCloudScriptRequest_Hash() { return 3558623844U; }

static_assert(std::is_polymorphic<FCloudScriptExecuteCloudScriptResult>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FCloudScriptExecuteCloudScriptResult cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

class UScriptStruct* FCloudScriptExecuteCloudScriptResult::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FCloudScriptExecuteCloudScriptResult_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCloudScriptExecuteCloudScriptResult, Z_Construct_UPackage__Script_PlayFab(), TEXT("CloudScriptExecuteCloudScriptResult"), sizeof(FCloudScriptExecuteCloudScriptResult), Get_Z_Construct_UScriptStruct_FCloudScriptExecuteCloudScriptResult_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FCloudScriptExecuteCloudScriptResult>()
{
	return FCloudScriptExecuteCloudScriptResult::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCloudScriptExecuteCloudScriptResult(FCloudScriptExecuteCloudScriptResult::StaticStruct, TEXT("/Script/PlayFab"), TEXT("CloudScriptExecuteCloudScriptResult"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFCloudScriptExecuteCloudScriptResult
{
	FScriptStruct_PlayFab_StaticRegisterNativesFCloudScriptExecuteCloudScriptResult()
	{
		UScriptStruct::DeferCppStructOps<FCloudScriptExecuteCloudScriptResult>(FName(TEXT("CloudScriptExecuteCloudScriptResult")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFCloudScriptExecuteCloudScriptResult;
	struct Z_Construct_UScriptStruct_FCloudScriptExecuteCloudScriptResult_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_APIRequestsIssued_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_APIRequestsIssued;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Error_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Error;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExecutionTimeSeconds_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ExecutionTimeSeconds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FunctionName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FunctionName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FunctionResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FunctionResult;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FunctionResultTooLarge_MetaData[];
#endif
		static void NewProp_FunctionResultTooLarge_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_FunctionResultTooLarge;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HttpRequestsIssued_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_HttpRequestsIssued;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Logs_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Logs_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Logs;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LogsTooLarge_MetaData[];
#endif
		static void NewProp_LogsTooLarge_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_LogsTooLarge;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MemoryConsumedBytes_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MemoryConsumedBytes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProcessorTimeSeconds_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ProcessorTimeSeconds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Revision_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Revision;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCloudScriptExecuteCloudScriptResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "///////////////////////////////////////////////////////\n// Server-Side Cloud Script\n//////////////////////////////////////////////////////\n" },
		{ "ModuleRelativePath", "Classes/PlayFabCloudScriptModels.h" },
		{ "ToolTip", "/\n Server-Side Cloud Script" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCloudScriptExecuteCloudScriptResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCloudScriptExecuteCloudScriptResult>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCloudScriptExecuteCloudScriptResult_Statics::NewProp_APIRequestsIssued_MetaData[] = {
		{ "Category", "PlayFab | CloudScript | Server-Side Cloud Script Models" },
		{ "Comment", "/** Number of PlayFab API requests issued by the CloudScript function */" },
		{ "ModuleRelativePath", "Classes/PlayFabCloudScriptModels.h" },
		{ "ToolTip", "Number of PlayFab API requests issued by the CloudScript function" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCloudScriptExecuteCloudScriptResult_Statics::NewProp_APIRequestsIssued = { "APIRequestsIssued", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCloudScriptExecuteCloudScriptResult, APIRequestsIssued), METADATA_PARAMS(Z_Construct_UScriptStruct_FCloudScriptExecuteCloudScriptResult_Statics::NewProp_APIRequestsIssued_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloudScriptExecuteCloudScriptResult_Statics::NewProp_APIRequestsIssued_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCloudScriptExecuteCloudScriptResult_Statics::NewProp_Error_MetaData[] = {
		{ "Category", "PlayFab | CloudScript | Server-Side Cloud Script Models" },
		{ "Comment", "/** Information about the error, if any, that occurred during execution */" },
		{ "ModuleRelativePath", "Classes/PlayFabCloudScriptModels.h" },
		{ "ToolTip", "Information about the error, if any, that occurred during execution" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCloudScriptExecuteCloudScriptResult_Statics::NewProp_Error = { "Error", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCloudScriptExecuteCloudScriptResult, Error), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FCloudScriptExecuteCloudScriptResult_Statics::NewProp_Error_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloudScriptExecuteCloudScriptResult_Statics::NewProp_Error_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCloudScriptExecuteCloudScriptResult_Statics::NewProp_ExecutionTimeSeconds_MetaData[] = {
		{ "Category", "PlayFab | CloudScript | Server-Side Cloud Script Models" },
		{ "ModuleRelativePath", "Classes/PlayFabCloudScriptModels.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCloudScriptExecuteCloudScriptResult_Statics::NewProp_ExecutionTimeSeconds = { "ExecutionTimeSeconds", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCloudScriptExecuteCloudScriptResult, ExecutionTimeSeconds), METADATA_PARAMS(Z_Construct_UScriptStruct_FCloudScriptExecuteCloudScriptResult_Statics::NewProp_ExecutionTimeSeconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloudScriptExecuteCloudScriptResult_Statics::NewProp_ExecutionTimeSeconds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCloudScriptExecuteCloudScriptResult_Statics::NewProp_FunctionName_MetaData[] = {
		{ "Category", "PlayFab | CloudScript | Server-Side Cloud Script Models" },
		{ "Comment", "/** The name of the function that executed */" },
		{ "ModuleRelativePath", "Classes/PlayFabCloudScriptModels.h" },
		{ "ToolTip", "The name of the function that executed" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCloudScriptExecuteCloudScriptResult_Statics::NewProp_FunctionName = { "FunctionName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCloudScriptExecuteCloudScriptResult, FunctionName), METADATA_PARAMS(Z_Construct_UScriptStruct_FCloudScriptExecuteCloudScriptResult_Statics::NewProp_FunctionName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloudScriptExecuteCloudScriptResult_Statics::NewProp_FunctionName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCloudScriptExecuteCloudScriptResult_Statics::NewProp_FunctionResult_MetaData[] = {
		{ "Category", "PlayFab | CloudScript | Server-Side Cloud Script Models" },
		{ "Comment", "/** The object returned from the CloudScript function, if any */" },
		{ "ModuleRelativePath", "Classes/PlayFabCloudScriptModels.h" },
		{ "ToolTip", "The object returned from the CloudScript function, if any" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCloudScriptExecuteCloudScriptResult_Statics::NewProp_FunctionResult = { "FunctionResult", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCloudScriptExecuteCloudScriptResult, FunctionResult), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FCloudScriptExecuteCloudScriptResult_Statics::NewProp_FunctionResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloudScriptExecuteCloudScriptResult_Statics::NewProp_FunctionResult_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCloudScriptExecuteCloudScriptResult_Statics::NewProp_FunctionResultTooLarge_MetaData[] = {
		{ "Category", "PlayFab | CloudScript | Server-Side Cloud Script Models" },
		{ "Comment", "/**\n     * Flag indicating if the FunctionResult was too large and was subsequently dropped from this event. This only occurs if\n     * the total event size is larger than 350KB.\n     */" },
		{ "ModuleRelativePath", "Classes/PlayFabCloudScriptModels.h" },
		{ "ToolTip", "Flag indicating if the FunctionResult was too large and was subsequently dropped from this event. This only occurs if\nthe total event size is larger than 350KB." },
	};
#endif
	void Z_Construct_UScriptStruct_FCloudScriptExecuteCloudScriptResult_Statics::NewProp_FunctionResultTooLarge_SetBit(void* Obj)
	{
		((FCloudScriptExecuteCloudScriptResult*)Obj)->FunctionResultTooLarge = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCloudScriptExecuteCloudScriptResult_Statics::NewProp_FunctionResultTooLarge = { "FunctionResultTooLarge", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCloudScriptExecuteCloudScriptResult), &Z_Construct_UScriptStruct_FCloudScriptExecuteCloudScriptResult_Statics::NewProp_FunctionResultTooLarge_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCloudScriptExecuteCloudScriptResult_Statics::NewProp_FunctionResultTooLarge_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloudScriptExecuteCloudScriptResult_Statics::NewProp_FunctionResultTooLarge_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCloudScriptExecuteCloudScriptResult_Statics::NewProp_HttpRequestsIssued_MetaData[] = {
		{ "Category", "PlayFab | CloudScript | Server-Side Cloud Script Models" },
		{ "Comment", "/** Number of external HTTP requests issued by the CloudScript function */" },
		{ "ModuleRelativePath", "Classes/PlayFabCloudScriptModels.h" },
		{ "ToolTip", "Number of external HTTP requests issued by the CloudScript function" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCloudScriptExecuteCloudScriptResult_Statics::NewProp_HttpRequestsIssued = { "HttpRequestsIssued", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCloudScriptExecuteCloudScriptResult, HttpRequestsIssued), METADATA_PARAMS(Z_Construct_UScriptStruct_FCloudScriptExecuteCloudScriptResult_Statics::NewProp_HttpRequestsIssued_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloudScriptExecuteCloudScriptResult_Statics::NewProp_HttpRequestsIssued_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCloudScriptExecuteCloudScriptResult_Statics::NewProp_Logs_Inner = { "Logs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCloudScriptExecuteCloudScriptResult_Statics::NewProp_Logs_MetaData[] = {
		{ "Category", "PlayFab | CloudScript | Server-Side Cloud Script Models" },
		{ "Comment", "/**\n     * Entries logged during the function execution. These include both entries logged in the function code using log.info()\n     * and log.error() and error entries for API and HTTP request failures.\n     */" },
		{ "ModuleRelativePath", "Classes/PlayFabCloudScriptModels.h" },
		{ "ToolTip", "Entries logged during the function execution. These include both entries logged in the function code using log.info()\nand log.error() and error entries for API and HTTP request failures." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCloudScriptExecuteCloudScriptResult_Statics::NewProp_Logs = { "Logs", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCloudScriptExecuteCloudScriptResult, Logs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCloudScriptExecuteCloudScriptResult_Statics::NewProp_Logs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloudScriptExecuteCloudScriptResult_Statics::NewProp_Logs_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCloudScriptExecuteCloudScriptResult_Statics::NewProp_LogsTooLarge_MetaData[] = {
		{ "Category", "PlayFab | CloudScript | Server-Side Cloud Script Models" },
		{ "Comment", "/**\n     * Flag indicating if the logs were too large and were subsequently dropped from this event. This only occurs if the total\n     * event size is larger than 350KB after the FunctionResult was removed.\n     */" },
		{ "ModuleRelativePath", "Classes/PlayFabCloudScriptModels.h" },
		{ "ToolTip", "Flag indicating if the logs were too large and were subsequently dropped from this event. This only occurs if the total\nevent size is larger than 350KB after the FunctionResult was removed." },
	};
#endif
	void Z_Construct_UScriptStruct_FCloudScriptExecuteCloudScriptResult_Statics::NewProp_LogsTooLarge_SetBit(void* Obj)
	{
		((FCloudScriptExecuteCloudScriptResult*)Obj)->LogsTooLarge = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCloudScriptExecuteCloudScriptResult_Statics::NewProp_LogsTooLarge = { "LogsTooLarge", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCloudScriptExecuteCloudScriptResult), &Z_Construct_UScriptStruct_FCloudScriptExecuteCloudScriptResult_Statics::NewProp_LogsTooLarge_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCloudScriptExecuteCloudScriptResult_Statics::NewProp_LogsTooLarge_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloudScriptExecuteCloudScriptResult_Statics::NewProp_LogsTooLarge_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCloudScriptExecuteCloudScriptResult_Statics::NewProp_MemoryConsumedBytes_MetaData[] = {
		{ "Category", "PlayFab | CloudScript | Server-Side Cloud Script Models" },
		{ "ModuleRelativePath", "Classes/PlayFabCloudScriptModels.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCloudScriptExecuteCloudScriptResult_Statics::NewProp_MemoryConsumedBytes = { "MemoryConsumedBytes", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCloudScriptExecuteCloudScriptResult, MemoryConsumedBytes), METADATA_PARAMS(Z_Construct_UScriptStruct_FCloudScriptExecuteCloudScriptResult_Statics::NewProp_MemoryConsumedBytes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloudScriptExecuteCloudScriptResult_Statics::NewProp_MemoryConsumedBytes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCloudScriptExecuteCloudScriptResult_Statics::NewProp_ProcessorTimeSeconds_MetaData[] = {
		{ "Category", "PlayFab | CloudScript | Server-Side Cloud Script Models" },
		{ "Comment", "/**\n     * Processor time consumed while executing the function. This does not include time spent waiting on API calls or HTTP\n     * requests.\n     */" },
		{ "ModuleRelativePath", "Classes/PlayFabCloudScriptModels.h" },
		{ "ToolTip", "Processor time consumed while executing the function. This does not include time spent waiting on API calls or HTTP\nrequests." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCloudScriptExecuteCloudScriptResult_Statics::NewProp_ProcessorTimeSeconds = { "ProcessorTimeSeconds", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCloudScriptExecuteCloudScriptResult, ProcessorTimeSeconds), METADATA_PARAMS(Z_Construct_UScriptStruct_FCloudScriptExecuteCloudScriptResult_Statics::NewProp_ProcessorTimeSeconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloudScriptExecuteCloudScriptResult_Statics::NewProp_ProcessorTimeSeconds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCloudScriptExecuteCloudScriptResult_Statics::NewProp_Revision_MetaData[] = {
		{ "Category", "PlayFab | CloudScript | Server-Side Cloud Script Models" },
		{ "Comment", "/** The revision of the CloudScript that executed */" },
		{ "ModuleRelativePath", "Classes/PlayFabCloudScriptModels.h" },
		{ "ToolTip", "The revision of the CloudScript that executed" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCloudScriptExecuteCloudScriptResult_Statics::NewProp_Revision = { "Revision", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCloudScriptExecuteCloudScriptResult, Revision), METADATA_PARAMS(Z_Construct_UScriptStruct_FCloudScriptExecuteCloudScriptResult_Statics::NewProp_Revision_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloudScriptExecuteCloudScriptResult_Statics::NewProp_Revision_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCloudScriptExecuteCloudScriptResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCloudScriptExecuteCloudScriptResult_Statics::NewProp_APIRequestsIssued,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCloudScriptExecuteCloudScriptResult_Statics::NewProp_Error,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCloudScriptExecuteCloudScriptResult_Statics::NewProp_ExecutionTimeSeconds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCloudScriptExecuteCloudScriptResult_Statics::NewProp_FunctionName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCloudScriptExecuteCloudScriptResult_Statics::NewProp_FunctionResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCloudScriptExecuteCloudScriptResult_Statics::NewProp_FunctionResultTooLarge,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCloudScriptExecuteCloudScriptResult_Statics::NewProp_HttpRequestsIssued,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCloudScriptExecuteCloudScriptResult_Statics::NewProp_Logs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCloudScriptExecuteCloudScriptResult_Statics::NewProp_Logs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCloudScriptExecuteCloudScriptResult_Statics::NewProp_LogsTooLarge,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCloudScriptExecuteCloudScriptResult_Statics::NewProp_MemoryConsumedBytes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCloudScriptExecuteCloudScriptResult_Statics::NewProp_ProcessorTimeSeconds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCloudScriptExecuteCloudScriptResult_Statics::NewProp_Revision,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCloudScriptExecuteCloudScriptResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"CloudScriptExecuteCloudScriptResult",
		sizeof(FCloudScriptExecuteCloudScriptResult),
		alignof(FCloudScriptExecuteCloudScriptResult),
		Z_Construct_UScriptStruct_FCloudScriptExecuteCloudScriptResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloudScriptExecuteCloudScriptResult_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCloudScriptExecuteCloudScriptResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloudScriptExecuteCloudScriptResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCloudScriptExecuteCloudScriptResult()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCloudScriptExecuteCloudScriptResult_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CloudScriptExecuteCloudScriptResult"), sizeof(FCloudScriptExecuteCloudScriptResult), Get_Z_Construct_UScriptStruct_FCloudScriptExecuteCloudScriptResult_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCloudScriptExecuteCloudScriptResult_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCloudScriptExecuteCloudScriptResult_Hash() { return 3917706458U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
