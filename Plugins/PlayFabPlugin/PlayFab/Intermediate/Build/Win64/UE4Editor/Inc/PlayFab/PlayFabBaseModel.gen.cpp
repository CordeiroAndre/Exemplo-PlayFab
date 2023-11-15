// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Classes/PlayFabBaseModel.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayFabBaseModel() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabBaseModel();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabError();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
// End Cross Module References
class UScriptStruct* FPlayFabBaseModel::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FPlayFabBaseModel_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPlayFabBaseModel, Z_Construct_UPackage__Script_PlayFab(), TEXT("PlayFabBaseModel"), sizeof(FPlayFabBaseModel), Get_Z_Construct_UScriptStruct_FPlayFabBaseModel_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FPlayFabBaseModel>()
{
	return FPlayFabBaseModel::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPlayFabBaseModel(FPlayFabBaseModel::StaticStruct, TEXT("/Script/PlayFab"), TEXT("PlayFabBaseModel"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFPlayFabBaseModel
{
	FScriptStruct_PlayFab_StaticRegisterNativesFPlayFabBaseModel()
	{
		UScriptStruct::DeferCppStructOps<FPlayFabBaseModel>(FName(TEXT("PlayFabBaseModel")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFPlayFabBaseModel;
	struct Z_Construct_UScriptStruct_FPlayFabBaseModel_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_responseError_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_responseError;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_responseData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_responseData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayFabBaseModel_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabBaseModel.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPlayFabBaseModel_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPlayFabBaseModel>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayFabBaseModel_Statics::NewProp_responseError_MetaData[] = {
		{ "Category", "PlayFab | Error | Models" },
		{ "Comment", "/** Holds the error USTRUCT recieved from playfab. */" },
		{ "ModuleRelativePath", "Classes/PlayFabBaseModel.h" },
		{ "ToolTip", "Holds the error USTRUCT recieved from playfab." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPlayFabBaseModel_Statics::NewProp_responseError = { "responseError", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayFabBaseModel, responseError), Z_Construct_UScriptStruct_FPlayFabError, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayFabBaseModel_Statics::NewProp_responseError_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayFabBaseModel_Statics::NewProp_responseError_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayFabBaseModel_Statics::NewProp_responseData_MetaData[] = {
		{ "Category", "PlayFab | Error | Models" },
		{ "Comment", "/** Holds the full JSON recieved from playfab. */" },
		{ "ModuleRelativePath", "Classes/PlayFabBaseModel.h" },
		{ "ToolTip", "Holds the full JSON recieved from playfab." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPlayFabBaseModel_Statics::NewProp_responseData = { "responseData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayFabBaseModel, responseData), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayFabBaseModel_Statics::NewProp_responseData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayFabBaseModel_Statics::NewProp_responseData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPlayFabBaseModel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayFabBaseModel_Statics::NewProp_responseError,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayFabBaseModel_Statics::NewProp_responseData,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPlayFabBaseModel_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		nullptr,
		&NewStructOps,
		"PlayFabBaseModel",
		sizeof(FPlayFabBaseModel),
		alignof(FPlayFabBaseModel),
		Z_Construct_UScriptStruct_FPlayFabBaseModel_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayFabBaseModel_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayFabBaseModel_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayFabBaseModel_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPlayFabBaseModel()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPlayFabBaseModel_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PlayFabBaseModel"), sizeof(FPlayFabBaseModel), Get_Z_Construct_UScriptStruct_FPlayFabBaseModel_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPlayFabBaseModel_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPlayFabBaseModel_Hash() { return 2856953867U; }
class UScriptStruct* FPlayFabError::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FPlayFabError_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPlayFabError, Z_Construct_UPackage__Script_PlayFab(), TEXT("PlayFabError"), sizeof(FPlayFabError), Get_Z_Construct_UScriptStruct_FPlayFabError_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FPlayFabError>()
{
	return FPlayFabError::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPlayFabError(FPlayFabError::StaticStruct, TEXT("/Script/PlayFab"), TEXT("PlayFabError"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFPlayFabError
{
	FScriptStruct_PlayFab_StaticRegisterNativesFPlayFabError()
	{
		UScriptStruct::DeferCppStructOps<FPlayFabError>(FName(TEXT("PlayFabError")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFPlayFabError;
	struct Z_Construct_UScriptStruct_FPlayFabError_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_hasError_MetaData[];
#endif
		static void NewProp_hasError_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_hasError;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ErrorCode_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ErrorCode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ErrorName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ErrorName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ErrorMessage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ErrorMessage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ErrorDetails_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ErrorDetails;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayFabError_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabBaseModel.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPlayFabError_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPlayFabError>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayFabError_Statics::NewProp_hasError_MetaData[] = {
		{ "Category", "PlayFab | Error | Models" },
		{ "Comment", "/** Is there an error */" },
		{ "ModuleRelativePath", "Classes/PlayFabBaseModel.h" },
		{ "ToolTip", "Is there an error" },
	};
#endif
	void Z_Construct_UScriptStruct_FPlayFabError_Statics::NewProp_hasError_SetBit(void* Obj)
	{
		((FPlayFabError*)Obj)->hasError = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPlayFabError_Statics::NewProp_hasError = { "hasError", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPlayFabError), &Z_Construct_UScriptStruct_FPlayFabError_Statics::NewProp_hasError_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayFabError_Statics::NewProp_hasError_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayFabError_Statics::NewProp_hasError_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayFabError_Statics::NewProp_ErrorCode_MetaData[] = {
		{ "Category", "PlayFab | Error | Models" },
		{ "Comment", "/** Holds the error code recieved from playfab. */" },
		{ "ModuleRelativePath", "Classes/PlayFabBaseModel.h" },
		{ "ToolTip", "Holds the error code recieved from playfab." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPlayFabError_Statics::NewProp_ErrorCode = { "ErrorCode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayFabError, ErrorCode), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayFabError_Statics::NewProp_ErrorCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayFabError_Statics::NewProp_ErrorCode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayFabError_Statics::NewProp_ErrorName_MetaData[] = {
		{ "Category", "PlayFab | Error | Models" },
		{ "Comment", "/** Holds the error name recieved from playfab. */" },
		{ "ModuleRelativePath", "Classes/PlayFabBaseModel.h" },
		{ "ToolTip", "Holds the error name recieved from playfab." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPlayFabError_Statics::NewProp_ErrorName = { "ErrorName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayFabError, ErrorName), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayFabError_Statics::NewProp_ErrorName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayFabError_Statics::NewProp_ErrorName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayFabError_Statics::NewProp_ErrorMessage_MetaData[] = {
		{ "Category", "PlayFab | Error | Models" },
		{ "Comment", "/** Holds the error message recieved from playfab. */" },
		{ "ModuleRelativePath", "Classes/PlayFabBaseModel.h" },
		{ "ToolTip", "Holds the error message recieved from playfab." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPlayFabError_Statics::NewProp_ErrorMessage = { "ErrorMessage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayFabError, ErrorMessage), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayFabError_Statics::NewProp_ErrorMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayFabError_Statics::NewProp_ErrorMessage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayFabError_Statics::NewProp_ErrorDetails_MetaData[] = {
		{ "Category", "PlayFab | Error | Models" },
		{ "Comment", "/** Holds the error details recieved from playfab. */" },
		{ "ModuleRelativePath", "Classes/PlayFabBaseModel.h" },
		{ "ToolTip", "Holds the error details recieved from playfab." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPlayFabError_Statics::NewProp_ErrorDetails = { "ErrorDetails", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayFabError, ErrorDetails), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayFabError_Statics::NewProp_ErrorDetails_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayFabError_Statics::NewProp_ErrorDetails_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPlayFabError_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayFabError_Statics::NewProp_hasError,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayFabError_Statics::NewProp_ErrorCode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayFabError_Statics::NewProp_ErrorName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayFabError_Statics::NewProp_ErrorMessage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayFabError_Statics::NewProp_ErrorDetails,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPlayFabError_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		nullptr,
		&NewStructOps,
		"PlayFabError",
		sizeof(FPlayFabError),
		alignof(FPlayFabError),
		Z_Construct_UScriptStruct_FPlayFabError_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayFabError_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayFabError_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayFabError_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPlayFabError()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPlayFabError_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PlayFabError"), sizeof(FPlayFabError), Get_Z_Construct_UScriptStruct_FPlayFabError_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPlayFabError_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPlayFabError_Hash() { return 586601948U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
