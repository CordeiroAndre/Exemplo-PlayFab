// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Classes/PlayFabAuthenticationAPI.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayFabAuthenticationAPI() {}
// Cross Module References
	PLAYFAB_API UFunction* Z_Construct_UDelegateFunction_UPlayFabAuthenticationAPI_DelegateOnSuccessValidateEntityToken__DelegateSignature();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabAuthenticationAPI();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FAuthenticationValidateEntityTokenResponse();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	PLAYFAB_API UFunction* Z_Construct_UDelegateFunction_UPlayFabAuthenticationAPI_DelegateOnSuccessGetEntityToken__DelegateSignature();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FAuthenticationGetEntityTokenResponse();
	PLAYFAB_API UFunction* Z_Construct_UDelegateFunction_UPlayFabAuthenticationAPI_DelegateOnSuccessDelete__DelegateSignature();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FAuthenticationEmptyResponse();
	PLAYFAB_API UFunction* Z_Construct_UDelegateFunction_UPlayFabAuthenticationAPI_DelegateOnSuccessAuthenticateGameServerWithCustomId__DelegateSignature();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FAuthenticationAuthenticateCustomIdResult();
	PLAYFAB_API UFunction* Z_Construct_UDelegateFunction_UPlayFabAuthenticationAPI_DelegateOnFailurePlayFabError__DelegateSignature();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabError();
	PLAYFAB_API UFunction* Z_Construct_UDelegateFunction_PlayFab_OnPlayFabAuthenticationRequestCompleted__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabBaseModel();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabAuthenticationAPI_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UOnlineBlueprintCallProxyBase();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FAuthenticationAuthenticateCustomIdRequest();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FAuthenticationDeleteRequest();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FAuthenticationGetEntityTokenRequest();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FAuthenticationValidateEntityTokenRequest();
	PLAYFABCOMMON_API UClass* Z_Construct_UClass_UPlayFabAuthenticationContext_NoRegister();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UPlayFabAuthenticationAPI_DelegateOnSuccessValidateEntityToken__DelegateSignature_Statics
	{
		struct PlayFabAuthenticationAPI_eventDelegateOnSuccessValidateEntityToken_Parms
		{
			FAuthenticationValidateEntityTokenResponse result;
			UObject* customData;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_result;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_customData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UPlayFabAuthenticationAPI_DelegateOnSuccessValidateEntityToken__DelegateSignature_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabAuthenticationAPI_eventDelegateOnSuccessValidateEntityToken_Parms, result), Z_Construct_UScriptStruct_FAuthenticationValidateEntityTokenResponse, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UPlayFabAuthenticationAPI_DelegateOnSuccessValidateEntityToken__DelegateSignature_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabAuthenticationAPI_eventDelegateOnSuccessValidateEntityToken_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UPlayFabAuthenticationAPI_DelegateOnSuccessValidateEntityToken__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabAuthenticationAPI_DelegateOnSuccessValidateEntityToken__DelegateSignature_Statics::NewProp_result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabAuthenticationAPI_DelegateOnSuccessValidateEntityToken__DelegateSignature_Statics::NewProp_customData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UPlayFabAuthenticationAPI_DelegateOnSuccessValidateEntityToken__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// callbacks\n" },
		{ "ModuleRelativePath", "Classes/PlayFabAuthenticationAPI.h" },
		{ "ToolTip", "callbacks" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UPlayFabAuthenticationAPI_DelegateOnSuccessValidateEntityToken__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabAuthenticationAPI, nullptr, "DelegateOnSuccessValidateEntityToken__DelegateSignature", nullptr, nullptr, sizeof(PlayFabAuthenticationAPI_eventDelegateOnSuccessValidateEntityToken_Parms), Z_Construct_UDelegateFunction_UPlayFabAuthenticationAPI_DelegateOnSuccessValidateEntityToken__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabAuthenticationAPI_DelegateOnSuccessValidateEntityToken__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UPlayFabAuthenticationAPI_DelegateOnSuccessValidateEntityToken__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabAuthenticationAPI_DelegateOnSuccessValidateEntityToken__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UPlayFabAuthenticationAPI_DelegateOnSuccessValidateEntityToken__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UPlayFabAuthenticationAPI_DelegateOnSuccessValidateEntityToken__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_UPlayFabAuthenticationAPI_DelegateOnSuccessGetEntityToken__DelegateSignature_Statics
	{
		struct PlayFabAuthenticationAPI_eventDelegateOnSuccessGetEntityToken_Parms
		{
			FAuthenticationGetEntityTokenResponse result;
			UObject* customData;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_result;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_customData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UPlayFabAuthenticationAPI_DelegateOnSuccessGetEntityToken__DelegateSignature_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabAuthenticationAPI_eventDelegateOnSuccessGetEntityToken_Parms, result), Z_Construct_UScriptStruct_FAuthenticationGetEntityTokenResponse, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UPlayFabAuthenticationAPI_DelegateOnSuccessGetEntityToken__DelegateSignature_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabAuthenticationAPI_eventDelegateOnSuccessGetEntityToken_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UPlayFabAuthenticationAPI_DelegateOnSuccessGetEntityToken__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabAuthenticationAPI_DelegateOnSuccessGetEntityToken__DelegateSignature_Statics::NewProp_result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabAuthenticationAPI_DelegateOnSuccessGetEntityToken__DelegateSignature_Statics::NewProp_customData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UPlayFabAuthenticationAPI_DelegateOnSuccessGetEntityToken__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// callbacks\n" },
		{ "ModuleRelativePath", "Classes/PlayFabAuthenticationAPI.h" },
		{ "ToolTip", "callbacks" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UPlayFabAuthenticationAPI_DelegateOnSuccessGetEntityToken__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabAuthenticationAPI, nullptr, "DelegateOnSuccessGetEntityToken__DelegateSignature", nullptr, nullptr, sizeof(PlayFabAuthenticationAPI_eventDelegateOnSuccessGetEntityToken_Parms), Z_Construct_UDelegateFunction_UPlayFabAuthenticationAPI_DelegateOnSuccessGetEntityToken__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabAuthenticationAPI_DelegateOnSuccessGetEntityToken__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UPlayFabAuthenticationAPI_DelegateOnSuccessGetEntityToken__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabAuthenticationAPI_DelegateOnSuccessGetEntityToken__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UPlayFabAuthenticationAPI_DelegateOnSuccessGetEntityToken__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UPlayFabAuthenticationAPI_DelegateOnSuccessGetEntityToken__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_UPlayFabAuthenticationAPI_DelegateOnSuccessDelete__DelegateSignature_Statics
	{
		struct PlayFabAuthenticationAPI_eventDelegateOnSuccessDelete_Parms
		{
			FAuthenticationEmptyResponse result;
			UObject* customData;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_result;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_customData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UPlayFabAuthenticationAPI_DelegateOnSuccessDelete__DelegateSignature_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabAuthenticationAPI_eventDelegateOnSuccessDelete_Parms, result), Z_Construct_UScriptStruct_FAuthenticationEmptyResponse, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UPlayFabAuthenticationAPI_DelegateOnSuccessDelete__DelegateSignature_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabAuthenticationAPI_eventDelegateOnSuccessDelete_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UPlayFabAuthenticationAPI_DelegateOnSuccessDelete__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabAuthenticationAPI_DelegateOnSuccessDelete__DelegateSignature_Statics::NewProp_result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabAuthenticationAPI_DelegateOnSuccessDelete__DelegateSignature_Statics::NewProp_customData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UPlayFabAuthenticationAPI_DelegateOnSuccessDelete__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// callbacks\n" },
		{ "ModuleRelativePath", "Classes/PlayFabAuthenticationAPI.h" },
		{ "ToolTip", "callbacks" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UPlayFabAuthenticationAPI_DelegateOnSuccessDelete__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabAuthenticationAPI, nullptr, "DelegateOnSuccessDelete__DelegateSignature", nullptr, nullptr, sizeof(PlayFabAuthenticationAPI_eventDelegateOnSuccessDelete_Parms), Z_Construct_UDelegateFunction_UPlayFabAuthenticationAPI_DelegateOnSuccessDelete__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabAuthenticationAPI_DelegateOnSuccessDelete__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UPlayFabAuthenticationAPI_DelegateOnSuccessDelete__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabAuthenticationAPI_DelegateOnSuccessDelete__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UPlayFabAuthenticationAPI_DelegateOnSuccessDelete__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UPlayFabAuthenticationAPI_DelegateOnSuccessDelete__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_UPlayFabAuthenticationAPI_DelegateOnSuccessAuthenticateGameServerWithCustomId__DelegateSignature_Statics
	{
		struct PlayFabAuthenticationAPI_eventDelegateOnSuccessAuthenticateGameServerWithCustomId_Parms
		{
			FAuthenticationAuthenticateCustomIdResult result;
			UObject* customData;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_result;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_customData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UPlayFabAuthenticationAPI_DelegateOnSuccessAuthenticateGameServerWithCustomId__DelegateSignature_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabAuthenticationAPI_eventDelegateOnSuccessAuthenticateGameServerWithCustomId_Parms, result), Z_Construct_UScriptStruct_FAuthenticationAuthenticateCustomIdResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UPlayFabAuthenticationAPI_DelegateOnSuccessAuthenticateGameServerWithCustomId__DelegateSignature_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabAuthenticationAPI_eventDelegateOnSuccessAuthenticateGameServerWithCustomId_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UPlayFabAuthenticationAPI_DelegateOnSuccessAuthenticateGameServerWithCustomId__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabAuthenticationAPI_DelegateOnSuccessAuthenticateGameServerWithCustomId__DelegateSignature_Statics::NewProp_result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabAuthenticationAPI_DelegateOnSuccessAuthenticateGameServerWithCustomId__DelegateSignature_Statics::NewProp_customData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UPlayFabAuthenticationAPI_DelegateOnSuccessAuthenticateGameServerWithCustomId__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "///////////////////////////////////////////////////////\n// Authentication\n//////////////////////////////////////////////////////\n// callbacks\n" },
		{ "ModuleRelativePath", "Classes/PlayFabAuthenticationAPI.h" },
		{ "ToolTip", "/\n Authentication\n\n callbacks" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UPlayFabAuthenticationAPI_DelegateOnSuccessAuthenticateGameServerWithCustomId__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabAuthenticationAPI, nullptr, "DelegateOnSuccessAuthenticateGameServerWithCustomId__DelegateSignature", nullptr, nullptr, sizeof(PlayFabAuthenticationAPI_eventDelegateOnSuccessAuthenticateGameServerWithCustomId_Parms), Z_Construct_UDelegateFunction_UPlayFabAuthenticationAPI_DelegateOnSuccessAuthenticateGameServerWithCustomId__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabAuthenticationAPI_DelegateOnSuccessAuthenticateGameServerWithCustomId__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UPlayFabAuthenticationAPI_DelegateOnSuccessAuthenticateGameServerWithCustomId__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabAuthenticationAPI_DelegateOnSuccessAuthenticateGameServerWithCustomId__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UPlayFabAuthenticationAPI_DelegateOnSuccessAuthenticateGameServerWithCustomId__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UPlayFabAuthenticationAPI_DelegateOnSuccessAuthenticateGameServerWithCustomId__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_UPlayFabAuthenticationAPI_DelegateOnFailurePlayFabError__DelegateSignature_Statics
	{
		struct PlayFabAuthenticationAPI_eventDelegateOnFailurePlayFabError_Parms
		{
			FPlayFabError error;
			UObject* customData;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_error;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_customData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UPlayFabAuthenticationAPI_DelegateOnFailurePlayFabError__DelegateSignature_Statics::NewProp_error = { "error", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabAuthenticationAPI_eventDelegateOnFailurePlayFabError_Parms, error), Z_Construct_UScriptStruct_FPlayFabError, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UPlayFabAuthenticationAPI_DelegateOnFailurePlayFabError__DelegateSignature_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabAuthenticationAPI_eventDelegateOnFailurePlayFabError_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UPlayFabAuthenticationAPI_DelegateOnFailurePlayFabError__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabAuthenticationAPI_DelegateOnFailurePlayFabError__DelegateSignature_Statics::NewProp_error,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPlayFabAuthenticationAPI_DelegateOnFailurePlayFabError__DelegateSignature_Statics::NewProp_customData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UPlayFabAuthenticationAPI_DelegateOnFailurePlayFabError__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/PlayFabAuthenticationAPI.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UPlayFabAuthenticationAPI_DelegateOnFailurePlayFabError__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabAuthenticationAPI, nullptr, "DelegateOnFailurePlayFabError__DelegateSignature", nullptr, nullptr, sizeof(PlayFabAuthenticationAPI_eventDelegateOnFailurePlayFabError_Parms), Z_Construct_UDelegateFunction_UPlayFabAuthenticationAPI_DelegateOnFailurePlayFabError__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabAuthenticationAPI_DelegateOnFailurePlayFabError__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UPlayFabAuthenticationAPI_DelegateOnFailurePlayFabError__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayFabAuthenticationAPI_DelegateOnFailurePlayFabError__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UPlayFabAuthenticationAPI_DelegateOnFailurePlayFabError__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UPlayFabAuthenticationAPI_DelegateOnFailurePlayFabError__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_PlayFab_OnPlayFabAuthenticationRequestCompleted__DelegateSignature_Statics
	{
		struct _Script_PlayFab_eventOnPlayFabAuthenticationRequestCompleted_Parms
		{
			FPlayFabBaseModel response;
			UObject* customData;
			bool successful;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_response;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_customData;
		static void NewProp_successful_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_successful;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_PlayFab_OnPlayFabAuthenticationRequestCompleted__DelegateSignature_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_PlayFab_eventOnPlayFabAuthenticationRequestCompleted_Parms, response), Z_Construct_UScriptStruct_FPlayFabBaseModel, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_PlayFab_OnPlayFabAuthenticationRequestCompleted__DelegateSignature_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_PlayFab_eventOnPlayFabAuthenticationRequestCompleted_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UDelegateFunction_PlayFab_OnPlayFabAuthenticationRequestCompleted__DelegateSignature_Statics::NewProp_successful_SetBit(void* Obj)
	{
		((_Script_PlayFab_eventOnPlayFabAuthenticationRequestCompleted_Parms*)Obj)->successful = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_PlayFab_OnPlayFabAuthenticationRequestCompleted__DelegateSignature_Statics::NewProp_successful = { "successful", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_PlayFab_eventOnPlayFabAuthenticationRequestCompleted_Parms), &Z_Construct_UDelegateFunction_PlayFab_OnPlayFabAuthenticationRequestCompleted__DelegateSignature_Statics::NewProp_successful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_PlayFab_OnPlayFabAuthenticationRequestCompleted__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PlayFab_OnPlayFabAuthenticationRequestCompleted__DelegateSignature_Statics::NewProp_response,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PlayFab_OnPlayFabAuthenticationRequestCompleted__DelegateSignature_Statics::NewProp_customData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PlayFab_OnPlayFabAuthenticationRequestCompleted__DelegateSignature_Statics::NewProp_successful,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_PlayFab_OnPlayFabAuthenticationRequestCompleted__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/PlayFabAuthenticationAPI.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_PlayFab_OnPlayFabAuthenticationRequestCompleted__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_PlayFab, nullptr, "OnPlayFabAuthenticationRequestCompleted__DelegateSignature", nullptr, nullptr, sizeof(_Script_PlayFab_eventOnPlayFabAuthenticationRequestCompleted_Parms), Z_Construct_UDelegateFunction_PlayFab_OnPlayFabAuthenticationRequestCompleted__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PlayFab_OnPlayFabAuthenticationRequestCompleted__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_PlayFab_OnPlayFabAuthenticationRequestCompleted__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PlayFab_OnPlayFabAuthenticationRequestCompleted__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_PlayFab_OnPlayFabAuthenticationRequestCompleted__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_PlayFab_OnPlayFabAuthenticationRequestCompleted__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UPlayFabAuthenticationAPI::execHelperValidateEntityToken)
	{
		P_GET_STRUCT(FPlayFabBaseModel,Z_Param_response);
		P_GET_OBJECT(UObject,Z_Param_customData);
		P_GET_UBOOL(Z_Param_successful);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HelperValidateEntityToken(Z_Param_response,Z_Param_customData,Z_Param_successful);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabAuthenticationAPI::execValidateEntityToken)
	{
		P_GET_STRUCT(FAuthenticationValidateEntityTokenRequest,Z_Param_request);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_onSuccess);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_onFailure);
		P_GET_OBJECT(UObject,Z_Param_customData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPlayFabAuthenticationAPI**)Z_Param__Result=UPlayFabAuthenticationAPI::ValidateEntityToken(Z_Param_request,FDelegateOnSuccessValidateEntityToken(Z_Param_onSuccess),FDelegateOnFailurePlayFabError(Z_Param_onFailure),Z_Param_customData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabAuthenticationAPI::execHelperGetEntityToken)
	{
		P_GET_STRUCT(FPlayFabBaseModel,Z_Param_response);
		P_GET_OBJECT(UObject,Z_Param_customData);
		P_GET_UBOOL(Z_Param_successful);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HelperGetEntityToken(Z_Param_response,Z_Param_customData,Z_Param_successful);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabAuthenticationAPI::execGetEntityToken)
	{
		P_GET_STRUCT(FAuthenticationGetEntityTokenRequest,Z_Param_request);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_onSuccess);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_onFailure);
		P_GET_OBJECT(UObject,Z_Param_customData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPlayFabAuthenticationAPI**)Z_Param__Result=UPlayFabAuthenticationAPI::GetEntityToken(Z_Param_request,FDelegateOnSuccessGetEntityToken(Z_Param_onSuccess),FDelegateOnFailurePlayFabError(Z_Param_onFailure),Z_Param_customData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabAuthenticationAPI::execHelperDelete)
	{
		P_GET_STRUCT(FPlayFabBaseModel,Z_Param_response);
		P_GET_OBJECT(UObject,Z_Param_customData);
		P_GET_UBOOL(Z_Param_successful);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HelperDelete(Z_Param_response,Z_Param_customData,Z_Param_successful);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabAuthenticationAPI::execDelete)
	{
		P_GET_STRUCT(FAuthenticationDeleteRequest,Z_Param_request);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_onSuccess);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_onFailure);
		P_GET_OBJECT(UObject,Z_Param_customData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPlayFabAuthenticationAPI**)Z_Param__Result=UPlayFabAuthenticationAPI::Delete(Z_Param_request,FDelegateOnSuccessDelete(Z_Param_onSuccess),FDelegateOnFailurePlayFabError(Z_Param_onFailure),Z_Param_customData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabAuthenticationAPI::execHelperAuthenticateGameServerWithCustomId)
	{
		P_GET_STRUCT(FPlayFabBaseModel,Z_Param_response);
		P_GET_OBJECT(UObject,Z_Param_customData);
		P_GET_UBOOL(Z_Param_successful);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HelperAuthenticateGameServerWithCustomId(Z_Param_response,Z_Param_customData,Z_Param_successful);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayFabAuthenticationAPI::execAuthenticateGameServerWithCustomId)
	{
		P_GET_STRUCT(FAuthenticationAuthenticateCustomIdRequest,Z_Param_request);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_onSuccess);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_onFailure);
		P_GET_OBJECT(UObject,Z_Param_customData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPlayFabAuthenticationAPI**)Z_Param__Result=UPlayFabAuthenticationAPI::AuthenticateGameServerWithCustomId(Z_Param_request,FDelegateOnSuccessAuthenticateGameServerWithCustomId(Z_Param_onSuccess),FDelegateOnFailurePlayFabError(Z_Param_onFailure),Z_Param_customData);
		P_NATIVE_END;
	}
	void UPlayFabAuthenticationAPI::StaticRegisterNativesUPlayFabAuthenticationAPI()
	{
		UClass* Class = UPlayFabAuthenticationAPI::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AuthenticateGameServerWithCustomId", &UPlayFabAuthenticationAPI::execAuthenticateGameServerWithCustomId },
			{ "Delete", &UPlayFabAuthenticationAPI::execDelete },
			{ "GetEntityToken", &UPlayFabAuthenticationAPI::execGetEntityToken },
			{ "HelperAuthenticateGameServerWithCustomId", &UPlayFabAuthenticationAPI::execHelperAuthenticateGameServerWithCustomId },
			{ "HelperDelete", &UPlayFabAuthenticationAPI::execHelperDelete },
			{ "HelperGetEntityToken", &UPlayFabAuthenticationAPI::execHelperGetEntityToken },
			{ "HelperValidateEntityToken", &UPlayFabAuthenticationAPI::execHelperValidateEntityToken },
			{ "ValidateEntityToken", &UPlayFabAuthenticationAPI::execValidateEntityToken },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPlayFabAuthenticationAPI_AuthenticateGameServerWithCustomId_Statics
	{
		struct PlayFabAuthenticationAPI_eventAuthenticateGameServerWithCustomId_Parms
		{
			FAuthenticationAuthenticateCustomIdRequest request;
			FScriptDelegate onSuccess;
			FScriptDelegate onFailure;
			UObject* customData;
			UPlayFabAuthenticationAPI* ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_request;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_onSuccess;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_onFailure;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_customData;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabAuthenticationAPI_AuthenticateGameServerWithCustomId_Statics::NewProp_request = { "request", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabAuthenticationAPI_eventAuthenticateGameServerWithCustomId_Parms, request), Z_Construct_UScriptStruct_FAuthenticationAuthenticateCustomIdRequest, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabAuthenticationAPI_AuthenticateGameServerWithCustomId_Statics::NewProp_onSuccess = { "onSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabAuthenticationAPI_eventAuthenticateGameServerWithCustomId_Parms, onSuccess), Z_Construct_UDelegateFunction_UPlayFabAuthenticationAPI_DelegateOnSuccessAuthenticateGameServerWithCustomId__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabAuthenticationAPI_AuthenticateGameServerWithCustomId_Statics::NewProp_onFailure = { "onFailure", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabAuthenticationAPI_eventAuthenticateGameServerWithCustomId_Parms, onFailure), Z_Construct_UDelegateFunction_UPlayFabAuthenticationAPI_DelegateOnFailurePlayFabError__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabAuthenticationAPI_AuthenticateGameServerWithCustomId_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabAuthenticationAPI_eventAuthenticateGameServerWithCustomId_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabAuthenticationAPI_AuthenticateGameServerWithCustomId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabAuthenticationAPI_eventAuthenticateGameServerWithCustomId_Parms, ReturnValue), Z_Construct_UClass_UPlayFabAuthenticationAPI_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabAuthenticationAPI_AuthenticateGameServerWithCustomId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabAuthenticationAPI_AuthenticateGameServerWithCustomId_Statics::NewProp_request,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabAuthenticationAPI_AuthenticateGameServerWithCustomId_Statics::NewProp_onSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabAuthenticationAPI_AuthenticateGameServerWithCustomId_Statics::NewProp_onFailure,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabAuthenticationAPI_AuthenticateGameServerWithCustomId_Statics::NewProp_customData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabAuthenticationAPI_AuthenticateGameServerWithCustomId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabAuthenticationAPI_AuthenticateGameServerWithCustomId_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "PlayFab | Authentication | Authentication" },
		{ "Comment", "/** Create a game_server entity token and return a new or existing game_server entity. */" },
		{ "ModuleRelativePath", "Classes/PlayFabAuthenticationAPI.h" },
		{ "ToolTip", "Create a game_server entity token and return a new or existing game_server entity." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabAuthenticationAPI_AuthenticateGameServerWithCustomId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabAuthenticationAPI, nullptr, "AuthenticateGameServerWithCustomId", nullptr, nullptr, sizeof(PlayFabAuthenticationAPI_eventAuthenticateGameServerWithCustomId_Parms), Z_Construct_UFunction_UPlayFabAuthenticationAPI_AuthenticateGameServerWithCustomId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabAuthenticationAPI_AuthenticateGameServerWithCustomId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabAuthenticationAPI_AuthenticateGameServerWithCustomId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabAuthenticationAPI_AuthenticateGameServerWithCustomId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabAuthenticationAPI_AuthenticateGameServerWithCustomId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayFabAuthenticationAPI_AuthenticateGameServerWithCustomId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabAuthenticationAPI_Delete_Statics
	{
		struct PlayFabAuthenticationAPI_eventDelete_Parms
		{
			FAuthenticationDeleteRequest request;
			FScriptDelegate onSuccess;
			FScriptDelegate onFailure;
			UObject* customData;
			UPlayFabAuthenticationAPI* ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_request;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_onSuccess;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_onFailure;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_customData;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabAuthenticationAPI_Delete_Statics::NewProp_request = { "request", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabAuthenticationAPI_eventDelete_Parms, request), Z_Construct_UScriptStruct_FAuthenticationDeleteRequest, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabAuthenticationAPI_Delete_Statics::NewProp_onSuccess = { "onSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabAuthenticationAPI_eventDelete_Parms, onSuccess), Z_Construct_UDelegateFunction_UPlayFabAuthenticationAPI_DelegateOnSuccessDelete__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabAuthenticationAPI_Delete_Statics::NewProp_onFailure = { "onFailure", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabAuthenticationAPI_eventDelete_Parms, onFailure), Z_Construct_UDelegateFunction_UPlayFabAuthenticationAPI_DelegateOnFailurePlayFabError__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabAuthenticationAPI_Delete_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabAuthenticationAPI_eventDelete_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabAuthenticationAPI_Delete_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabAuthenticationAPI_eventDelete_Parms, ReturnValue), Z_Construct_UClass_UPlayFabAuthenticationAPI_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabAuthenticationAPI_Delete_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabAuthenticationAPI_Delete_Statics::NewProp_request,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabAuthenticationAPI_Delete_Statics::NewProp_onSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabAuthenticationAPI_Delete_Statics::NewProp_onFailure,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabAuthenticationAPI_Delete_Statics::NewProp_customData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabAuthenticationAPI_Delete_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabAuthenticationAPI_Delete_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "PlayFab | Authentication | Authentication" },
		{ "Comment", "/** Delete a game_server entity. */" },
		{ "ModuleRelativePath", "Classes/PlayFabAuthenticationAPI.h" },
		{ "ToolTip", "Delete a game_server entity." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabAuthenticationAPI_Delete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabAuthenticationAPI, nullptr, "Delete", nullptr, nullptr, sizeof(PlayFabAuthenticationAPI_eventDelete_Parms), Z_Construct_UFunction_UPlayFabAuthenticationAPI_Delete_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabAuthenticationAPI_Delete_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabAuthenticationAPI_Delete_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabAuthenticationAPI_Delete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabAuthenticationAPI_Delete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayFabAuthenticationAPI_Delete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabAuthenticationAPI_GetEntityToken_Statics
	{
		struct PlayFabAuthenticationAPI_eventGetEntityToken_Parms
		{
			FAuthenticationGetEntityTokenRequest request;
			FScriptDelegate onSuccess;
			FScriptDelegate onFailure;
			UObject* customData;
			UPlayFabAuthenticationAPI* ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_request;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_onSuccess;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_onFailure;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_customData;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabAuthenticationAPI_GetEntityToken_Statics::NewProp_request = { "request", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabAuthenticationAPI_eventGetEntityToken_Parms, request), Z_Construct_UScriptStruct_FAuthenticationGetEntityTokenRequest, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabAuthenticationAPI_GetEntityToken_Statics::NewProp_onSuccess = { "onSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabAuthenticationAPI_eventGetEntityToken_Parms, onSuccess), Z_Construct_UDelegateFunction_UPlayFabAuthenticationAPI_DelegateOnSuccessGetEntityToken__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabAuthenticationAPI_GetEntityToken_Statics::NewProp_onFailure = { "onFailure", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabAuthenticationAPI_eventGetEntityToken_Parms, onFailure), Z_Construct_UDelegateFunction_UPlayFabAuthenticationAPI_DelegateOnFailurePlayFabError__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabAuthenticationAPI_GetEntityToken_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabAuthenticationAPI_eventGetEntityToken_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabAuthenticationAPI_GetEntityToken_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabAuthenticationAPI_eventGetEntityToken_Parms, ReturnValue), Z_Construct_UClass_UPlayFabAuthenticationAPI_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabAuthenticationAPI_GetEntityToken_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabAuthenticationAPI_GetEntityToken_Statics::NewProp_request,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabAuthenticationAPI_GetEntityToken_Statics::NewProp_onSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabAuthenticationAPI_GetEntityToken_Statics::NewProp_onFailure,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabAuthenticationAPI_GetEntityToken_Statics::NewProp_customData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabAuthenticationAPI_GetEntityToken_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabAuthenticationAPI_GetEntityToken_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "PlayFab | Authentication | Authentication" },
		{ "Comment", "/**\n     * Method to exchange a legacy AuthenticationTicket or title SecretKey for an Entity Token or to refresh a still valid\n     * Entity Token.\n     */" },
		{ "ModuleRelativePath", "Classes/PlayFabAuthenticationAPI.h" },
		{ "ToolTip", "Method to exchange a legacy AuthenticationTicket or title SecretKey for an Entity Token or to refresh a still valid\nEntity Token." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabAuthenticationAPI_GetEntityToken_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabAuthenticationAPI, nullptr, "GetEntityToken", nullptr, nullptr, sizeof(PlayFabAuthenticationAPI_eventGetEntityToken_Parms), Z_Construct_UFunction_UPlayFabAuthenticationAPI_GetEntityToken_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabAuthenticationAPI_GetEntityToken_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabAuthenticationAPI_GetEntityToken_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabAuthenticationAPI_GetEntityToken_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabAuthenticationAPI_GetEntityToken()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayFabAuthenticationAPI_GetEntityToken_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabAuthenticationAPI_HelperAuthenticateGameServerWithCustomId_Statics
	{
		struct PlayFabAuthenticationAPI_eventHelperAuthenticateGameServerWithCustomId_Parms
		{
			FPlayFabBaseModel response;
			UObject* customData;
			bool successful;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_response;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_customData;
		static void NewProp_successful_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_successful;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabAuthenticationAPI_HelperAuthenticateGameServerWithCustomId_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabAuthenticationAPI_eventHelperAuthenticateGameServerWithCustomId_Parms, response), Z_Construct_UScriptStruct_FPlayFabBaseModel, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabAuthenticationAPI_HelperAuthenticateGameServerWithCustomId_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabAuthenticationAPI_eventHelperAuthenticateGameServerWithCustomId_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPlayFabAuthenticationAPI_HelperAuthenticateGameServerWithCustomId_Statics::NewProp_successful_SetBit(void* Obj)
	{
		((PlayFabAuthenticationAPI_eventHelperAuthenticateGameServerWithCustomId_Parms*)Obj)->successful = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlayFabAuthenticationAPI_HelperAuthenticateGameServerWithCustomId_Statics::NewProp_successful = { "successful", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PlayFabAuthenticationAPI_eventHelperAuthenticateGameServerWithCustomId_Parms), &Z_Construct_UFunction_UPlayFabAuthenticationAPI_HelperAuthenticateGameServerWithCustomId_Statics::NewProp_successful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabAuthenticationAPI_HelperAuthenticateGameServerWithCustomId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabAuthenticationAPI_HelperAuthenticateGameServerWithCustomId_Statics::NewProp_response,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabAuthenticationAPI_HelperAuthenticateGameServerWithCustomId_Statics::NewProp_customData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabAuthenticationAPI_HelperAuthenticateGameServerWithCustomId_Statics::NewProp_successful,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabAuthenticationAPI_HelperAuthenticateGameServerWithCustomId_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "PlayFab | Authentication | Authentication" },
		{ "Comment", "// Implements FOnPlayFabAuthenticationRequestCompleted\n" },
		{ "ModuleRelativePath", "Classes/PlayFabAuthenticationAPI.h" },
		{ "ToolTip", "Implements FOnPlayFabAuthenticationRequestCompleted" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabAuthenticationAPI_HelperAuthenticateGameServerWithCustomId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabAuthenticationAPI, nullptr, "HelperAuthenticateGameServerWithCustomId", nullptr, nullptr, sizeof(PlayFabAuthenticationAPI_eventHelperAuthenticateGameServerWithCustomId_Parms), Z_Construct_UFunction_UPlayFabAuthenticationAPI_HelperAuthenticateGameServerWithCustomId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabAuthenticationAPI_HelperAuthenticateGameServerWithCustomId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabAuthenticationAPI_HelperAuthenticateGameServerWithCustomId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabAuthenticationAPI_HelperAuthenticateGameServerWithCustomId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabAuthenticationAPI_HelperAuthenticateGameServerWithCustomId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayFabAuthenticationAPI_HelperAuthenticateGameServerWithCustomId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabAuthenticationAPI_HelperDelete_Statics
	{
		struct PlayFabAuthenticationAPI_eventHelperDelete_Parms
		{
			FPlayFabBaseModel response;
			UObject* customData;
			bool successful;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_response;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_customData;
		static void NewProp_successful_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_successful;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabAuthenticationAPI_HelperDelete_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabAuthenticationAPI_eventHelperDelete_Parms, response), Z_Construct_UScriptStruct_FPlayFabBaseModel, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabAuthenticationAPI_HelperDelete_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabAuthenticationAPI_eventHelperDelete_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPlayFabAuthenticationAPI_HelperDelete_Statics::NewProp_successful_SetBit(void* Obj)
	{
		((PlayFabAuthenticationAPI_eventHelperDelete_Parms*)Obj)->successful = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlayFabAuthenticationAPI_HelperDelete_Statics::NewProp_successful = { "successful", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PlayFabAuthenticationAPI_eventHelperDelete_Parms), &Z_Construct_UFunction_UPlayFabAuthenticationAPI_HelperDelete_Statics::NewProp_successful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabAuthenticationAPI_HelperDelete_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabAuthenticationAPI_HelperDelete_Statics::NewProp_response,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabAuthenticationAPI_HelperDelete_Statics::NewProp_customData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabAuthenticationAPI_HelperDelete_Statics::NewProp_successful,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabAuthenticationAPI_HelperDelete_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "PlayFab | Authentication | Authentication" },
		{ "Comment", "// Implements FOnPlayFabAuthenticationRequestCompleted\n" },
		{ "ModuleRelativePath", "Classes/PlayFabAuthenticationAPI.h" },
		{ "ToolTip", "Implements FOnPlayFabAuthenticationRequestCompleted" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabAuthenticationAPI_HelperDelete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabAuthenticationAPI, nullptr, "HelperDelete", nullptr, nullptr, sizeof(PlayFabAuthenticationAPI_eventHelperDelete_Parms), Z_Construct_UFunction_UPlayFabAuthenticationAPI_HelperDelete_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabAuthenticationAPI_HelperDelete_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabAuthenticationAPI_HelperDelete_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabAuthenticationAPI_HelperDelete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabAuthenticationAPI_HelperDelete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayFabAuthenticationAPI_HelperDelete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabAuthenticationAPI_HelperGetEntityToken_Statics
	{
		struct PlayFabAuthenticationAPI_eventHelperGetEntityToken_Parms
		{
			FPlayFabBaseModel response;
			UObject* customData;
			bool successful;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_response;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_customData;
		static void NewProp_successful_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_successful;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabAuthenticationAPI_HelperGetEntityToken_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabAuthenticationAPI_eventHelperGetEntityToken_Parms, response), Z_Construct_UScriptStruct_FPlayFabBaseModel, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabAuthenticationAPI_HelperGetEntityToken_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabAuthenticationAPI_eventHelperGetEntityToken_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPlayFabAuthenticationAPI_HelperGetEntityToken_Statics::NewProp_successful_SetBit(void* Obj)
	{
		((PlayFabAuthenticationAPI_eventHelperGetEntityToken_Parms*)Obj)->successful = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlayFabAuthenticationAPI_HelperGetEntityToken_Statics::NewProp_successful = { "successful", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PlayFabAuthenticationAPI_eventHelperGetEntityToken_Parms), &Z_Construct_UFunction_UPlayFabAuthenticationAPI_HelperGetEntityToken_Statics::NewProp_successful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabAuthenticationAPI_HelperGetEntityToken_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabAuthenticationAPI_HelperGetEntityToken_Statics::NewProp_response,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabAuthenticationAPI_HelperGetEntityToken_Statics::NewProp_customData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabAuthenticationAPI_HelperGetEntityToken_Statics::NewProp_successful,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabAuthenticationAPI_HelperGetEntityToken_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "PlayFab | Authentication | Authentication" },
		{ "Comment", "// Implements FOnPlayFabAuthenticationRequestCompleted\n" },
		{ "ModuleRelativePath", "Classes/PlayFabAuthenticationAPI.h" },
		{ "ToolTip", "Implements FOnPlayFabAuthenticationRequestCompleted" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabAuthenticationAPI_HelperGetEntityToken_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabAuthenticationAPI, nullptr, "HelperGetEntityToken", nullptr, nullptr, sizeof(PlayFabAuthenticationAPI_eventHelperGetEntityToken_Parms), Z_Construct_UFunction_UPlayFabAuthenticationAPI_HelperGetEntityToken_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabAuthenticationAPI_HelperGetEntityToken_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabAuthenticationAPI_HelperGetEntityToken_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabAuthenticationAPI_HelperGetEntityToken_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabAuthenticationAPI_HelperGetEntityToken()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayFabAuthenticationAPI_HelperGetEntityToken_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabAuthenticationAPI_HelperValidateEntityToken_Statics
	{
		struct PlayFabAuthenticationAPI_eventHelperValidateEntityToken_Parms
		{
			FPlayFabBaseModel response;
			UObject* customData;
			bool successful;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_response;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_customData;
		static void NewProp_successful_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_successful;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabAuthenticationAPI_HelperValidateEntityToken_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabAuthenticationAPI_eventHelperValidateEntityToken_Parms, response), Z_Construct_UScriptStruct_FPlayFabBaseModel, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabAuthenticationAPI_HelperValidateEntityToken_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabAuthenticationAPI_eventHelperValidateEntityToken_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPlayFabAuthenticationAPI_HelperValidateEntityToken_Statics::NewProp_successful_SetBit(void* Obj)
	{
		((PlayFabAuthenticationAPI_eventHelperValidateEntityToken_Parms*)Obj)->successful = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlayFabAuthenticationAPI_HelperValidateEntityToken_Statics::NewProp_successful = { "successful", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PlayFabAuthenticationAPI_eventHelperValidateEntityToken_Parms), &Z_Construct_UFunction_UPlayFabAuthenticationAPI_HelperValidateEntityToken_Statics::NewProp_successful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabAuthenticationAPI_HelperValidateEntityToken_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabAuthenticationAPI_HelperValidateEntityToken_Statics::NewProp_response,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabAuthenticationAPI_HelperValidateEntityToken_Statics::NewProp_customData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabAuthenticationAPI_HelperValidateEntityToken_Statics::NewProp_successful,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabAuthenticationAPI_HelperValidateEntityToken_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "PlayFab | Authentication | Authentication" },
		{ "Comment", "// Implements FOnPlayFabAuthenticationRequestCompleted\n" },
		{ "ModuleRelativePath", "Classes/PlayFabAuthenticationAPI.h" },
		{ "ToolTip", "Implements FOnPlayFabAuthenticationRequestCompleted" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabAuthenticationAPI_HelperValidateEntityToken_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabAuthenticationAPI, nullptr, "HelperValidateEntityToken", nullptr, nullptr, sizeof(PlayFabAuthenticationAPI_eventHelperValidateEntityToken_Parms), Z_Construct_UFunction_UPlayFabAuthenticationAPI_HelperValidateEntityToken_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabAuthenticationAPI_HelperValidateEntityToken_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabAuthenticationAPI_HelperValidateEntityToken_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabAuthenticationAPI_HelperValidateEntityToken_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabAuthenticationAPI_HelperValidateEntityToken()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayFabAuthenticationAPI_HelperValidateEntityToken_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayFabAuthenticationAPI_ValidateEntityToken_Statics
	{
		struct PlayFabAuthenticationAPI_eventValidateEntityToken_Parms
		{
			FAuthenticationValidateEntityTokenRequest request;
			FScriptDelegate onSuccess;
			FScriptDelegate onFailure;
			UObject* customData;
			UPlayFabAuthenticationAPI* ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_request;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_onSuccess;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_onFailure;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_customData;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayFabAuthenticationAPI_ValidateEntityToken_Statics::NewProp_request = { "request", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabAuthenticationAPI_eventValidateEntityToken_Parms, request), Z_Construct_UScriptStruct_FAuthenticationValidateEntityTokenRequest, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabAuthenticationAPI_ValidateEntityToken_Statics::NewProp_onSuccess = { "onSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabAuthenticationAPI_eventValidateEntityToken_Parms, onSuccess), Z_Construct_UDelegateFunction_UPlayFabAuthenticationAPI_DelegateOnSuccessValidateEntityToken__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPlayFabAuthenticationAPI_ValidateEntityToken_Statics::NewProp_onFailure = { "onFailure", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabAuthenticationAPI_eventValidateEntityToken_Parms, onFailure), Z_Construct_UDelegateFunction_UPlayFabAuthenticationAPI_DelegateOnFailurePlayFabError__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabAuthenticationAPI_ValidateEntityToken_Statics::NewProp_customData = { "customData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabAuthenticationAPI_eventValidateEntityToken_Parms, customData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayFabAuthenticationAPI_ValidateEntityToken_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayFabAuthenticationAPI_eventValidateEntityToken_Parms, ReturnValue), Z_Construct_UClass_UPlayFabAuthenticationAPI_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayFabAuthenticationAPI_ValidateEntityToken_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabAuthenticationAPI_ValidateEntityToken_Statics::NewProp_request,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabAuthenticationAPI_ValidateEntityToken_Statics::NewProp_onSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabAuthenticationAPI_ValidateEntityToken_Statics::NewProp_onFailure,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabAuthenticationAPI_ValidateEntityToken_Statics::NewProp_customData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayFabAuthenticationAPI_ValidateEntityToken_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayFabAuthenticationAPI_ValidateEntityToken_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "PlayFab | Authentication | Authentication" },
		{ "Comment", "/** Method for a server to validate a client provided EntityToken. Only callable by the title entity. */" },
		{ "ModuleRelativePath", "Classes/PlayFabAuthenticationAPI.h" },
		{ "ToolTip", "Method for a server to validate a client provided EntityToken. Only callable by the title entity." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayFabAuthenticationAPI_ValidateEntityToken_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayFabAuthenticationAPI, nullptr, "ValidateEntityToken", nullptr, nullptr, sizeof(PlayFabAuthenticationAPI_eventValidateEntityToken_Parms), Z_Construct_UFunction_UPlayFabAuthenticationAPI_ValidateEntityToken_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabAuthenticationAPI_ValidateEntityToken_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayFabAuthenticationAPI_ValidateEntityToken_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayFabAuthenticationAPI_ValidateEntityToken_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayFabAuthenticationAPI_ValidateEntityToken()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayFabAuthenticationAPI_ValidateEntityToken_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPlayFabAuthenticationAPI_NoRegister()
	{
		return UPlayFabAuthenticationAPI::StaticClass();
	}
	struct Z_Construct_UClass_UPlayFabAuthenticationAPI_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnPlayFabResponse_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPlayFabResponse;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CallAuthenticationContext_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CallAuthenticationContext;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RequestJsonObj_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RequestJsonObj;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResponseJsonObj_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ResponseJsonObj;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlayFabAuthenticationAPI_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UOnlineBlueprintCallProxyBase,
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPlayFabAuthenticationAPI_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPlayFabAuthenticationAPI_AuthenticateGameServerWithCustomId, "AuthenticateGameServerWithCustomId" }, // 4261707044
		{ &Z_Construct_UDelegateFunction_UPlayFabAuthenticationAPI_DelegateOnFailurePlayFabError__DelegateSignature, "DelegateOnFailurePlayFabError__DelegateSignature" }, // 1020413220
		{ &Z_Construct_UDelegateFunction_UPlayFabAuthenticationAPI_DelegateOnSuccessAuthenticateGameServerWithCustomId__DelegateSignature, "DelegateOnSuccessAuthenticateGameServerWithCustomId__DelegateSignature" }, // 73636453
		{ &Z_Construct_UDelegateFunction_UPlayFabAuthenticationAPI_DelegateOnSuccessDelete__DelegateSignature, "DelegateOnSuccessDelete__DelegateSignature" }, // 313877689
		{ &Z_Construct_UDelegateFunction_UPlayFabAuthenticationAPI_DelegateOnSuccessGetEntityToken__DelegateSignature, "DelegateOnSuccessGetEntityToken__DelegateSignature" }, // 2966156756
		{ &Z_Construct_UDelegateFunction_UPlayFabAuthenticationAPI_DelegateOnSuccessValidateEntityToken__DelegateSignature, "DelegateOnSuccessValidateEntityToken__DelegateSignature" }, // 786138336
		{ &Z_Construct_UFunction_UPlayFabAuthenticationAPI_Delete, "Delete" }, // 978032099
		{ &Z_Construct_UFunction_UPlayFabAuthenticationAPI_GetEntityToken, "GetEntityToken" }, // 1702772169
		{ &Z_Construct_UFunction_UPlayFabAuthenticationAPI_HelperAuthenticateGameServerWithCustomId, "HelperAuthenticateGameServerWithCustomId" }, // 1488197156
		{ &Z_Construct_UFunction_UPlayFabAuthenticationAPI_HelperDelete, "HelperDelete" }, // 1206331480
		{ &Z_Construct_UFunction_UPlayFabAuthenticationAPI_HelperGetEntityToken, "HelperGetEntityToken" }, // 632061949
		{ &Z_Construct_UFunction_UPlayFabAuthenticationAPI_HelperValidateEntityToken, "HelperValidateEntityToken" }, // 3931949542
		{ &Z_Construct_UFunction_UPlayFabAuthenticationAPI_ValidateEntityToken, "ValidateEntityToken" }, // 3940195409
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayFabAuthenticationAPI_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "PlayFabAuthenticationAPI.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabAuthenticationAPI.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayFabAuthenticationAPI_Statics::NewProp_OnPlayFabResponse_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PlayFabAuthenticationAPI.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPlayFabAuthenticationAPI_Statics::NewProp_OnPlayFabResponse = { "OnPlayFabResponse", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayFabAuthenticationAPI, OnPlayFabResponse), Z_Construct_UDelegateFunction_PlayFab_OnPlayFabAuthenticationRequestCompleted__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UPlayFabAuthenticationAPI_Statics::NewProp_OnPlayFabResponse_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayFabAuthenticationAPI_Statics::NewProp_OnPlayFabResponse_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayFabAuthenticationAPI_Statics::NewProp_CallAuthenticationContext_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PlayFabAuthenticationAPI.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayFabAuthenticationAPI_Statics::NewProp_CallAuthenticationContext = { "CallAuthenticationContext", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayFabAuthenticationAPI, CallAuthenticationContext), Z_Construct_UClass_UPlayFabAuthenticationContext_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlayFabAuthenticationAPI_Statics::NewProp_CallAuthenticationContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayFabAuthenticationAPI_Statics::NewProp_CallAuthenticationContext_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayFabAuthenticationAPI_Statics::NewProp_RequestJsonObj_MetaData[] = {
		{ "Comment", "/** Internal request data stored as JSON */" },
		{ "ModuleRelativePath", "Classes/PlayFabAuthenticationAPI.h" },
		{ "ToolTip", "Internal request data stored as JSON" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayFabAuthenticationAPI_Statics::NewProp_RequestJsonObj = { "RequestJsonObj", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayFabAuthenticationAPI, RequestJsonObj), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlayFabAuthenticationAPI_Statics::NewProp_RequestJsonObj_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayFabAuthenticationAPI_Statics::NewProp_RequestJsonObj_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayFabAuthenticationAPI_Statics::NewProp_ResponseJsonObj_MetaData[] = {
		{ "Comment", "/** Response data stored as JSON */" },
		{ "ModuleRelativePath", "Classes/PlayFabAuthenticationAPI.h" },
		{ "ToolTip", "Response data stored as JSON" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayFabAuthenticationAPI_Statics::NewProp_ResponseJsonObj = { "ResponseJsonObj", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayFabAuthenticationAPI, ResponseJsonObj), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlayFabAuthenticationAPI_Statics::NewProp_ResponseJsonObj_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayFabAuthenticationAPI_Statics::NewProp_ResponseJsonObj_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayFabAuthenticationAPI_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayFabAuthenticationAPI_Statics::NewProp_OnPlayFabResponse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayFabAuthenticationAPI_Statics::NewProp_CallAuthenticationContext,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayFabAuthenticationAPI_Statics::NewProp_RequestJsonObj,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayFabAuthenticationAPI_Statics::NewProp_ResponseJsonObj,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlayFabAuthenticationAPI_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayFabAuthenticationAPI>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPlayFabAuthenticationAPI_Statics::ClassParams = {
		&UPlayFabAuthenticationAPI::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPlayFabAuthenticationAPI_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPlayFabAuthenticationAPI_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPlayFabAuthenticationAPI_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayFabAuthenticationAPI_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlayFabAuthenticationAPI()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPlayFabAuthenticationAPI_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPlayFabAuthenticationAPI, 2787427471);
	template<> PLAYFAB_API UClass* StaticClass<UPlayFabAuthenticationAPI>()
	{
		return UPlayFabAuthenticationAPI::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPlayFabAuthenticationAPI(Z_Construct_UClass_UPlayFabAuthenticationAPI, &UPlayFabAuthenticationAPI::StaticClass, TEXT("/Script/PlayFab"), TEXT("UPlayFabAuthenticationAPI"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayFabAuthenticationAPI);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
