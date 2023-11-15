// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Classes/PlayFabEventsModelDecoder.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayFabEventsModelDecoder() {}
// Cross Module References
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabEventsModelDecoder_NoRegister();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabEventsModelDecoder();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FEventsCreateTelemetryKeyResponse();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FEventsDeleteTelemetryKeyResponse();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FEventsGetTelemetryKeyResponse();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FEventsListTelemetryKeysResponse();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FEventsSetTelemetryKeyActiveResponse();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FEventsWriteEventsResponse();
// End Cross Module References
	DEFINE_FUNCTION(UPlayFabEventsModelDecoder::execdecodeWriteEventsResponseResponse)
	{
		P_GET_OBJECT(UPlayFabJsonObject,Z_Param_response);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FEventsWriteEventsResponse*)Z_Param__Result=UPlayFabEventsModelDecoder::decodeWriteEventsResponseResponse(Z_Param_response);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabEventsModelDecoder::execdecodeSetTelemetryKeyActiveResponseResponse)
	{
		P_GET_OBJECT(UPlayFabJsonObject,Z_Param_response);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FEventsSetTelemetryKeyActiveResponse*)Z_Param__Result=UPlayFabEventsModelDecoder::decodeSetTelemetryKeyActiveResponseResponse(Z_Param_response);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabEventsModelDecoder::execdecodeListTelemetryKeysResponseResponse)
	{
		P_GET_OBJECT(UPlayFabJsonObject,Z_Param_response);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FEventsListTelemetryKeysResponse*)Z_Param__Result=UPlayFabEventsModelDecoder::decodeListTelemetryKeysResponseResponse(Z_Param_response);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabEventsModelDecoder::execdecodeGetTelemetryKeyResponseResponse)
	{
		P_GET_OBJECT(UPlayFabJsonObject,Z_Param_response);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FEventsGetTelemetryKeyResponse*)Z_Param__Result=UPlayFabEventsModelDecoder::decodeGetTelemetryKeyResponseResponse(Z_Param_response);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabEventsModelDecoder::execdecodeDeleteTelemetryKeyResponseResponse)
	{
		P_GET_OBJECT(UPlayFabJsonObject,Z_Param_response);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FEventsDeleteTelemetryKeyResponse*)Z_Param__Result=UPlayFabEventsModelDecoder::decodeDeleteTelemetryKeyResponseResponse(Z_Param_response);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabEventsModelDecoder::execdecodeCreateTelemetryKeyResponseResponse)
	{
		P_GET_OBJECT(UPlayFabJsonObject,Z_Param_response);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FEventsCreateTelemetryKeyResponse*)Z_Param__Result=UPlayFabEventsModelDecoder::decodeCreateTelemetryKeyResponseResponse(Z_Param_response);
		P_NATIVE_END;
	}
	void UPlayFabEventsModelDecoder::StaticRegisterNativesUPlayFabEventsModelDecoder()
	{
		UClass* Class = UPlayFabEventsModelDecoder::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "decodeCreateTelemetryKeyResponseResponse", &UPlayFabEventsModelDecoder::execdecodeCreateTelemetryKeyResponseResponse },
			{ "decodeDeleteTelemetryKeyResponseResponse", &UPlayFabEventsModelDecoder::execdecodeDeleteTelemetryKeyResponseResponse },
			{ "decodeGetTelemetryKeyResponseResponse", &UPlayFabEventsModelDecoder::execdecodeGetTelemetryKeyResponseResponse },
			{ "decodeListTelemetryKeysResponseResponse", &UPlayFabEventsModelDecoder::execdecodeListTelemetryKeysResponseResponse },
			{ "decodeSetTelemetryKeyActiveResponseResponse", &UPlayFabEventsModelDecoder::execdecodeSetTelemetryKeyActiveResponseResponse },
			{ "decodeWriteEventsResponseResponse", &UPlayFabEventsModelDecoder::execdecodeWriteEventsResponseResponse },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPlayFabEventsModelDecoder_decodeCreateTelemetryKeyResponseResponse_Statics
	{
		struct PlayFabEventsModelDecoder_eventdecodeCreateTelemetryKeyResponseResponse_Parms
		{
			UPlayFabJsonObject* response;
			FEventsCreateTelemetryKeyResponse ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_response;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabEventsModelDecoder_decodeCreateTelemetryKeyResponseResponse_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabEventsModelDecoder_eventdecodeCreateTelemetryKeyResponseResponse_Parms, response), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabEventsModelDecoder_decodeCreateTelemetryKeyResponseResponse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabEventsModelDecoder_eventdecodeCreateTelemetryKeyResponseResponse_Parms, ReturnValue), Z_Construct_UScriptStruct_FEventsCreateTelemetryKeyResponse, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabEventsModelDecoder_decodeCreateTelemetryKeyResponseResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEventsModelDecoder_decodeCreateTelemetryKeyResponseResponse_Statics::NewProp_response,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEventsModelDecoder_decodeCreateTelemetryKeyResponseResponse_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabEventsModelDecoder_decodeCreateTelemetryKeyResponseResponse_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Events | PlayStream Events Models" },
		{ "Comment", "/** Decode the CreateTelemetryKeyResponse response object*/" },
		{ "ModuleRelativePath", "Classes/PlayFabEventsModelDecoder.h" },
		{ "ToolTip", "Decode the CreateTelemetryKeyResponse response object" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabEventsModelDecoder_decodeCreateTelemetryKeyResponseResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabEventsModelDecoder, nullptr, "decodeCreateTelemetryKeyResponseResponse", nullptr, nullptr, sizeof(PlayFabEventsModelDecoder_eventdecodeCreateTelemetryKeyResponseResponse_Parms), Z_Construct_UFunction_UPlayFabEventsModelDecoder_decodeCreateTelemetryKeyResponseResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabEventsModelDecoder_decodeCreateTelemetryKeyResponseResponse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabEventsModelDecoder_decodeCreateTelemetryKeyResponseResponse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabEventsModelDecoder_decodeCreateTelemetryKeyResponseResponse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabEventsModelDecoder_decodeCreateTelemetryKeyResponseResponse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayFabEventsModelDecoder_decodeCreateTelemetryKeyResponseResponse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabEventsModelDecoder_decodeDeleteTelemetryKeyResponseResponse_Statics
	{
		struct PlayFabEventsModelDecoder_eventdecodeDeleteTelemetryKeyResponseResponse_Parms
		{
			UPlayFabJsonObject* response;
			FEventsDeleteTelemetryKeyResponse ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_response;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabEventsModelDecoder_decodeDeleteTelemetryKeyResponseResponse_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabEventsModelDecoder_eventdecodeDeleteTelemetryKeyResponseResponse_Parms, response), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabEventsModelDecoder_decodeDeleteTelemetryKeyResponseResponse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabEventsModelDecoder_eventdecodeDeleteTelemetryKeyResponseResponse_Parms, ReturnValue), Z_Construct_UScriptStruct_FEventsDeleteTelemetryKeyResponse, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabEventsModelDecoder_decodeDeleteTelemetryKeyResponseResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEventsModelDecoder_decodeDeleteTelemetryKeyResponseResponse_Statics::NewProp_response,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEventsModelDecoder_decodeDeleteTelemetryKeyResponseResponse_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabEventsModelDecoder_decodeDeleteTelemetryKeyResponseResponse_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Events | PlayStream Events Models" },
		{ "Comment", "/** Decode the DeleteTelemetryKeyResponse response object*/" },
		{ "ModuleRelativePath", "Classes/PlayFabEventsModelDecoder.h" },
		{ "ToolTip", "Decode the DeleteTelemetryKeyResponse response object" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabEventsModelDecoder_decodeDeleteTelemetryKeyResponseResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabEventsModelDecoder, nullptr, "decodeDeleteTelemetryKeyResponseResponse", nullptr, nullptr, sizeof(PlayFabEventsModelDecoder_eventdecodeDeleteTelemetryKeyResponseResponse_Parms), Z_Construct_UFunction_UPlayFabEventsModelDecoder_decodeDeleteTelemetryKeyResponseResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabEventsModelDecoder_decodeDeleteTelemetryKeyResponseResponse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabEventsModelDecoder_decodeDeleteTelemetryKeyResponseResponse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabEventsModelDecoder_decodeDeleteTelemetryKeyResponseResponse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabEventsModelDecoder_decodeDeleteTelemetryKeyResponseResponse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayFabEventsModelDecoder_decodeDeleteTelemetryKeyResponseResponse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabEventsModelDecoder_decodeGetTelemetryKeyResponseResponse_Statics
	{
		struct PlayFabEventsModelDecoder_eventdecodeGetTelemetryKeyResponseResponse_Parms
		{
			UPlayFabJsonObject* response;
			FEventsGetTelemetryKeyResponse ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_response;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabEventsModelDecoder_decodeGetTelemetryKeyResponseResponse_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabEventsModelDecoder_eventdecodeGetTelemetryKeyResponseResponse_Parms, response), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabEventsModelDecoder_decodeGetTelemetryKeyResponseResponse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabEventsModelDecoder_eventdecodeGetTelemetryKeyResponseResponse_Parms, ReturnValue), Z_Construct_UScriptStruct_FEventsGetTelemetryKeyResponse, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabEventsModelDecoder_decodeGetTelemetryKeyResponseResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEventsModelDecoder_decodeGetTelemetryKeyResponseResponse_Statics::NewProp_response,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEventsModelDecoder_decodeGetTelemetryKeyResponseResponse_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabEventsModelDecoder_decodeGetTelemetryKeyResponseResponse_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Events | PlayStream Events Models" },
		{ "Comment", "/** Decode the GetTelemetryKeyResponse response object*/" },
		{ "ModuleRelativePath", "Classes/PlayFabEventsModelDecoder.h" },
		{ "ToolTip", "Decode the GetTelemetryKeyResponse response object" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabEventsModelDecoder_decodeGetTelemetryKeyResponseResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabEventsModelDecoder, nullptr, "decodeGetTelemetryKeyResponseResponse", nullptr, nullptr, sizeof(PlayFabEventsModelDecoder_eventdecodeGetTelemetryKeyResponseResponse_Parms), Z_Construct_UFunction_UPlayFabEventsModelDecoder_decodeGetTelemetryKeyResponseResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabEventsModelDecoder_decodeGetTelemetryKeyResponseResponse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabEventsModelDecoder_decodeGetTelemetryKeyResponseResponse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabEventsModelDecoder_decodeGetTelemetryKeyResponseResponse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabEventsModelDecoder_decodeGetTelemetryKeyResponseResponse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayFabEventsModelDecoder_decodeGetTelemetryKeyResponseResponse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabEventsModelDecoder_decodeListTelemetryKeysResponseResponse_Statics
	{
		struct PlayFabEventsModelDecoder_eventdecodeListTelemetryKeysResponseResponse_Parms
		{
			UPlayFabJsonObject* response;
			FEventsListTelemetryKeysResponse ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_response;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabEventsModelDecoder_decodeListTelemetryKeysResponseResponse_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabEventsModelDecoder_eventdecodeListTelemetryKeysResponseResponse_Parms, response), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabEventsModelDecoder_decodeListTelemetryKeysResponseResponse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabEventsModelDecoder_eventdecodeListTelemetryKeysResponseResponse_Parms, ReturnValue), Z_Construct_UScriptStruct_FEventsListTelemetryKeysResponse, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabEventsModelDecoder_decodeListTelemetryKeysResponseResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEventsModelDecoder_decodeListTelemetryKeysResponseResponse_Statics::NewProp_response,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEventsModelDecoder_decodeListTelemetryKeysResponseResponse_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabEventsModelDecoder_decodeListTelemetryKeysResponseResponse_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Events | PlayStream Events Models" },
		{ "Comment", "/** Decode the ListTelemetryKeysResponse response object*/" },
		{ "ModuleRelativePath", "Classes/PlayFabEventsModelDecoder.h" },
		{ "ToolTip", "Decode the ListTelemetryKeysResponse response object" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabEventsModelDecoder_decodeListTelemetryKeysResponseResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabEventsModelDecoder, nullptr, "decodeListTelemetryKeysResponseResponse", nullptr, nullptr, sizeof(PlayFabEventsModelDecoder_eventdecodeListTelemetryKeysResponseResponse_Parms), Z_Construct_UFunction_UPlayFabEventsModelDecoder_decodeListTelemetryKeysResponseResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabEventsModelDecoder_decodeListTelemetryKeysResponseResponse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabEventsModelDecoder_decodeListTelemetryKeysResponseResponse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabEventsModelDecoder_decodeListTelemetryKeysResponseResponse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabEventsModelDecoder_decodeListTelemetryKeysResponseResponse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayFabEventsModelDecoder_decodeListTelemetryKeysResponseResponse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabEventsModelDecoder_decodeSetTelemetryKeyActiveResponseResponse_Statics
	{
		struct PlayFabEventsModelDecoder_eventdecodeSetTelemetryKeyActiveResponseResponse_Parms
		{
			UPlayFabJsonObject* response;
			FEventsSetTelemetryKeyActiveResponse ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_response;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabEventsModelDecoder_decodeSetTelemetryKeyActiveResponseResponse_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabEventsModelDecoder_eventdecodeSetTelemetryKeyActiveResponseResponse_Parms, response), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabEventsModelDecoder_decodeSetTelemetryKeyActiveResponseResponse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabEventsModelDecoder_eventdecodeSetTelemetryKeyActiveResponseResponse_Parms, ReturnValue), Z_Construct_UScriptStruct_FEventsSetTelemetryKeyActiveResponse, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabEventsModelDecoder_decodeSetTelemetryKeyActiveResponseResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEventsModelDecoder_decodeSetTelemetryKeyActiveResponseResponse_Statics::NewProp_response,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEventsModelDecoder_decodeSetTelemetryKeyActiveResponseResponse_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabEventsModelDecoder_decodeSetTelemetryKeyActiveResponseResponse_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Events | PlayStream Events Models" },
		{ "Comment", "/** Decode the SetTelemetryKeyActiveResponse response object*/" },
		{ "ModuleRelativePath", "Classes/PlayFabEventsModelDecoder.h" },
		{ "ToolTip", "Decode the SetTelemetryKeyActiveResponse response object" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabEventsModelDecoder_decodeSetTelemetryKeyActiveResponseResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabEventsModelDecoder, nullptr, "decodeSetTelemetryKeyActiveResponseResponse", nullptr, nullptr, sizeof(PlayFabEventsModelDecoder_eventdecodeSetTelemetryKeyActiveResponseResponse_Parms), Z_Construct_UFunction_UPlayFabEventsModelDecoder_decodeSetTelemetryKeyActiveResponseResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabEventsModelDecoder_decodeSetTelemetryKeyActiveResponseResponse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabEventsModelDecoder_decodeSetTelemetryKeyActiveResponseResponse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabEventsModelDecoder_decodeSetTelemetryKeyActiveResponseResponse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabEventsModelDecoder_decodeSetTelemetryKeyActiveResponseResponse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayFabEventsModelDecoder_decodeSetTelemetryKeyActiveResponseResponse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabEventsModelDecoder_decodeWriteEventsResponseResponse_Statics
	{
		struct PlayFabEventsModelDecoder_eventdecodeWriteEventsResponseResponse_Parms
		{
			UPlayFabJsonObject* response;
			FEventsWriteEventsResponse ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_response;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabEventsModelDecoder_decodeWriteEventsResponseResponse_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabEventsModelDecoder_eventdecodeWriteEventsResponseResponse_Parms, response), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabEventsModelDecoder_decodeWriteEventsResponseResponse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabEventsModelDecoder_eventdecodeWriteEventsResponseResponse_Parms, ReturnValue), Z_Construct_UScriptStruct_FEventsWriteEventsResponse, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabEventsModelDecoder_decodeWriteEventsResponseResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEventsModelDecoder_decodeWriteEventsResponseResponse_Statics::NewProp_response,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabEventsModelDecoder_decodeWriteEventsResponseResponse_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabEventsModelDecoder_decodeWriteEventsResponseResponse_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Events | PlayStream Events Models" },
		{ "Comment", "/** Decode the WriteEventsResponse response object*/" },
		{ "ModuleRelativePath", "Classes/PlayFabEventsModelDecoder.h" },
		{ "ToolTip", "Decode the WriteEventsResponse response object" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabEventsModelDecoder_decodeWriteEventsResponseResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabEventsModelDecoder, nullptr, "decodeWriteEventsResponseResponse", nullptr, nullptr, sizeof(PlayFabEventsModelDecoder_eventdecodeWriteEventsResponseResponse_Parms), Z_Construct_UFunction_UPlayFabEventsModelDecoder_decodeWriteEventsResponseResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabEventsModelDecoder_decodeWriteEventsResponseResponse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabEventsModelDecoder_decodeWriteEventsResponseResponse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabEventsModelDecoder_decodeWriteEventsResponseResponse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabEventsModelDecoder_decodeWriteEventsResponseResponse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayFabEventsModelDecoder_decodeWriteEventsResponseResponse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPlayFabEventsModelDecoder_NoRegister()
	{
		return UPlayFabEventsModelDecoder::StaticClass();
	}
	struct Z_Construct_UClass_UPlayFabEventsModelDecoder_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlayFabEventsModelDecoder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPlayFabEventsModelDecoder_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPlayFabEventsModelDecoder_decodeCreateTelemetryKeyResponseResponse, "decodeCreateTelemetryKeyResponseResponse" }, // 1518707291
		{ &Z_Construct_UFunction_UPlayFabEventsModelDecoder_decodeDeleteTelemetryKeyResponseResponse, "decodeDeleteTelemetryKeyResponseResponse" }, // 629165067
		{ &Z_Construct_UFunction_UPlayFabEventsModelDecoder_decodeGetTelemetryKeyResponseResponse, "decodeGetTelemetryKeyResponseResponse" }, // 58039371
		{ &Z_Construct_UFunction_UPlayFabEventsModelDecoder_decodeListTelemetryKeysResponseResponse, "decodeListTelemetryKeysResponseResponse" }, // 3964004182
		{ &Z_Construct_UFunction_UPlayFabEventsModelDecoder_decodeSetTelemetryKeyActiveResponseResponse, "decodeSetTelemetryKeyActiveResponseResponse" }, // 1702551173
		{ &Z_Construct_UFunction_UPlayFabEventsModelDecoder_decodeWriteEventsResponseResponse, "decodeWriteEventsResponseResponse" }, // 3225990931
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayFabEventsModelDecoder_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PlayFabEventsModelDecoder.h" },
		{ "ModuleRelativePath", "Classes/PlayFabEventsModelDecoder.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlayFabEventsModelDecoder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayFabEventsModelDecoder>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPlayFabEventsModelDecoder_Statics::ClassParams = {
		&UPlayFabEventsModelDecoder::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPlayFabEventsModelDecoder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayFabEventsModelDecoder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlayFabEventsModelDecoder()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPlayFabEventsModelDecoder_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPlayFabEventsModelDecoder, 1510891853);
	template<> PLAYFAB_API UClass* StaticClass<UPlayFabEventsModelDecoder>()
	{
		return UPlayFabEventsModelDecoder::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPlayFabEventsModelDecoder(Z_Construct_UClass_UPlayFabEventsModelDecoder, &UPlayFabEventsModelDecoder::StaticClass, TEXT("/Script/PlayFab"), TEXT("UPlayFabEventsModelDecoder"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayFabEventsModelDecoder);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
