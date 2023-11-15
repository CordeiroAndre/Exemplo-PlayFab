// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FEventsWriteEventsResponse;
class UObject;
struct FEventsSetTelemetryKeyActiveResponse;
struct FEventsListTelemetryKeysResponse;
struct FEventsGetTelemetryKeyResponse;
struct FEventsDeleteTelemetryKeyResponse;
struct FEventsCreateTelemetryKeyResponse;
struct FPlayFabError;
struct FPlayFabBaseModel;
struct FEventsWriteEventsRequest;
class UPlayFabEventsAPI;
struct FEventsSetTelemetryKeyActiveRequest;
struct FEventsListTelemetryKeysRequest;
struct FEventsGetTelemetryKeyRequest;
struct FEventsDeleteTelemetryKeyRequest;
struct FEventsCreateTelemetryKeyRequest;
#ifdef PLAYFAB_PlayFabEventsAPI_generated_h
#error "PlayFabEventsAPI.generated.h already included, missing '#pragma once' in PlayFabEventsAPI.h"
#endif
#define PLAYFAB_PlayFabEventsAPI_generated_h

#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabEventsAPI_h_150_DELEGATE \
struct PlayFabEventsAPI_eventDelegateOnSuccessWriteTelemetryEvents_Parms \
{ \
	FEventsWriteEventsResponse result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessWriteTelemetryEvents_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessWriteTelemetryEvents, FEventsWriteEventsResponse result, UObject* customData) \
{ \
	PlayFabEventsAPI_eventDelegateOnSuccessWriteTelemetryEvents_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessWriteTelemetryEvents.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabEventsAPI_h_136_DELEGATE \
struct PlayFabEventsAPI_eventDelegateOnSuccessWriteEvents_Parms \
{ \
	FEventsWriteEventsResponse result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessWriteEvents_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessWriteEvents, FEventsWriteEventsResponse result, UObject* customData) \
{ \
	PlayFabEventsAPI_eventDelegateOnSuccessWriteEvents_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessWriteEvents.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabEventsAPI_h_122_DELEGATE \
struct PlayFabEventsAPI_eventDelegateOnSuccessSetTelemetryKeyActive_Parms \
{ \
	FEventsSetTelemetryKeyActiveResponse result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessSetTelemetryKeyActive_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessSetTelemetryKeyActive, FEventsSetTelemetryKeyActiveResponse result, UObject* customData) \
{ \
	PlayFabEventsAPI_eventDelegateOnSuccessSetTelemetryKeyActive_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessSetTelemetryKeyActive.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabEventsAPI_h_108_DELEGATE \
struct PlayFabEventsAPI_eventDelegateOnSuccessListTelemetryKeys_Parms \
{ \
	FEventsListTelemetryKeysResponse result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessListTelemetryKeys_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessListTelemetryKeys, FEventsListTelemetryKeysResponse result, UObject* customData) \
{ \
	PlayFabEventsAPI_eventDelegateOnSuccessListTelemetryKeys_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessListTelemetryKeys.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabEventsAPI_h_94_DELEGATE \
struct PlayFabEventsAPI_eventDelegateOnSuccessGetTelemetryKey_Parms \
{ \
	FEventsGetTelemetryKeyResponse result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetTelemetryKey_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetTelemetryKey, FEventsGetTelemetryKeyResponse result, UObject* customData) \
{ \
	PlayFabEventsAPI_eventDelegateOnSuccessGetTelemetryKey_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetTelemetryKey.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabEventsAPI_h_80_DELEGATE \
struct PlayFabEventsAPI_eventDelegateOnSuccessDeleteTelemetryKey_Parms \
{ \
	FEventsDeleteTelemetryKeyResponse result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessDeleteTelemetryKey_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessDeleteTelemetryKey, FEventsDeleteTelemetryKeyResponse result, UObject* customData) \
{ \
	PlayFabEventsAPI_eventDelegateOnSuccessDeleteTelemetryKey_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessDeleteTelemetryKey.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabEventsAPI_h_66_DELEGATE \
struct PlayFabEventsAPI_eventDelegateOnSuccessCreateTelemetryKey_Parms \
{ \
	FEventsCreateTelemetryKeyResponse result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessCreateTelemetryKey_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessCreateTelemetryKey, FEventsCreateTelemetryKeyResponse result, UObject* customData) \
{ \
	PlayFabEventsAPI_eventDelegateOnSuccessCreateTelemetryKey_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessCreateTelemetryKey.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabEventsAPI_h_32_DELEGATE \
struct PlayFabEventsAPI_eventDelegateOnFailurePlayFabError_Parms \
{ \
	FPlayFabError error; \
	UObject* customData; \
}; \
static inline void FDelegateOnFailurePlayFabError_DelegateWrapper(const FScriptDelegate& DelegateOnFailurePlayFabError, FPlayFabError error, UObject* customData) \
{ \
	PlayFabEventsAPI_eventDelegateOnFailurePlayFabError_Parms Parms; \
	Parms.error=error; \
	Parms.customData=customData; \
	DelegateOnFailurePlayFabError.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabEventsAPI_h_24_DELEGATE \
struct _Script_PlayFab_eventOnPlayFabEventsRequestCompleted_Parms \
{ \
	FPlayFabBaseModel response; \
	UObject* customData; \
	bool successful; \
}; \
static inline void FOnPlayFabEventsRequestCompleted_DelegateWrapper(const FMulticastScriptDelegate& OnPlayFabEventsRequestCompleted, FPlayFabBaseModel response, UObject* customData, bool successful) \
{ \
	_Script_PlayFab_eventOnPlayFabEventsRequestCompleted_Parms Parms; \
	Parms.response=response; \
	Parms.customData=customData; \
	Parms.successful=successful ? true : false; \
	OnPlayFabEventsRequestCompleted.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabEventsAPI_h_29_SPARSE_DATA
#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabEventsAPI_h_29_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHelperWriteTelemetryEvents); \
	DECLARE_FUNCTION(execWriteTelemetryEventsWithTelemetryKey); \
	DECLARE_FUNCTION(execWriteTelemetryEvents); \
	DECLARE_FUNCTION(execHelperWriteEvents); \
	DECLARE_FUNCTION(execWriteEvents); \
	DECLARE_FUNCTION(execHelperSetTelemetryKeyActive); \
	DECLARE_FUNCTION(execSetTelemetryKeyActive); \
	DECLARE_FUNCTION(execHelperListTelemetryKeys); \
	DECLARE_FUNCTION(execListTelemetryKeys); \
	DECLARE_FUNCTION(execHelperGetTelemetryKey); \
	DECLARE_FUNCTION(execGetTelemetryKey); \
	DECLARE_FUNCTION(execHelperDeleteTelemetryKey); \
	DECLARE_FUNCTION(execDeleteTelemetryKey); \
	DECLARE_FUNCTION(execHelperCreateTelemetryKey); \
	DECLARE_FUNCTION(execCreateTelemetryKey);


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabEventsAPI_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHelperWriteTelemetryEvents); \
	DECLARE_FUNCTION(execWriteTelemetryEventsWithTelemetryKey); \
	DECLARE_FUNCTION(execWriteTelemetryEvents); \
	DECLARE_FUNCTION(execHelperWriteEvents); \
	DECLARE_FUNCTION(execWriteEvents); \
	DECLARE_FUNCTION(execHelperSetTelemetryKeyActive); \
	DECLARE_FUNCTION(execSetTelemetryKeyActive); \
	DECLARE_FUNCTION(execHelperListTelemetryKeys); \
	DECLARE_FUNCTION(execListTelemetryKeys); \
	DECLARE_FUNCTION(execHelperGetTelemetryKey); \
	DECLARE_FUNCTION(execGetTelemetryKey); \
	DECLARE_FUNCTION(execHelperDeleteTelemetryKey); \
	DECLARE_FUNCTION(execDeleteTelemetryKey); \
	DECLARE_FUNCTION(execHelperCreateTelemetryKey); \
	DECLARE_FUNCTION(execCreateTelemetryKey);


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabEventsAPI_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlayFabEventsAPI(); \
	friend struct Z_Construct_UClass_UPlayFabEventsAPI_Statics; \
public: \
	DECLARE_CLASS(UPlayFabEventsAPI, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PlayFab"), NO_API) \
	DECLARE_SERIALIZER(UPlayFabEventsAPI)


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabEventsAPI_h_29_INCLASS \
private: \
	static void StaticRegisterNativesUPlayFabEventsAPI(); \
	friend struct Z_Construct_UClass_UPlayFabEventsAPI_Statics; \
public: \
	DECLARE_CLASS(UPlayFabEventsAPI, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PlayFab"), NO_API) \
	DECLARE_SERIALIZER(UPlayFabEventsAPI)


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabEventsAPI_h_29_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayFabEventsAPI(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayFabEventsAPI) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayFabEventsAPI); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayFabEventsAPI); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayFabEventsAPI(UPlayFabEventsAPI&&); \
	NO_API UPlayFabEventsAPI(const UPlayFabEventsAPI&); \
public:


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabEventsAPI_h_29_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayFabEventsAPI(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayFabEventsAPI(UPlayFabEventsAPI&&); \
	NO_API UPlayFabEventsAPI(const UPlayFabEventsAPI&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayFabEventsAPI); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayFabEventsAPI); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayFabEventsAPI)


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabEventsAPI_h_29_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CallAuthenticationContext() { return STRUCT_OFFSET(UPlayFabEventsAPI, CallAuthenticationContext); } \
	FORCEINLINE static uint32 __PPO__RequestJsonObj() { return STRUCT_OFFSET(UPlayFabEventsAPI, RequestJsonObj); } \
	FORCEINLINE static uint32 __PPO__ResponseJsonObj() { return STRUCT_OFFSET(UPlayFabEventsAPI, ResponseJsonObj); }


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabEventsAPI_h_26_PROLOG
#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabEventsAPI_h_29_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabEventsAPI_h_29_PRIVATE_PROPERTY_OFFSET \
	UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabEventsAPI_h_29_SPARSE_DATA \
	UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabEventsAPI_h_29_RPC_WRAPPERS \
	UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabEventsAPI_h_29_INCLASS \
	UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabEventsAPI_h_29_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabEventsAPI_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabEventsAPI_h_29_PRIVATE_PROPERTY_OFFSET \
	UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabEventsAPI_h_29_SPARSE_DATA \
	UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabEventsAPI_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabEventsAPI_h_29_INCLASS_NO_PURE_DECLS \
	UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabEventsAPI_h_29_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class PlayFabEventsAPI."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PLAYFAB_API UClass* StaticClass<class UPlayFabEventsAPI>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabEventsAPI_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
