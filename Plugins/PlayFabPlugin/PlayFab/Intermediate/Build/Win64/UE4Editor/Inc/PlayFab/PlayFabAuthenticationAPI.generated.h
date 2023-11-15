// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAuthenticationValidateEntityTokenResponse;
class UObject;
struct FAuthenticationGetEntityTokenResponse;
struct FAuthenticationEmptyResponse;
struct FAuthenticationAuthenticateCustomIdResult;
struct FPlayFabError;
struct FPlayFabBaseModel;
struct FAuthenticationValidateEntityTokenRequest;
class UPlayFabAuthenticationAPI;
struct FAuthenticationGetEntityTokenRequest;
struct FAuthenticationDeleteRequest;
struct FAuthenticationAuthenticateCustomIdRequest;
#ifdef PLAYFAB_PlayFabAuthenticationAPI_generated_h
#error "PlayFabAuthenticationAPI.generated.h already included, missing '#pragma once' in PlayFabAuthenticationAPI.h"
#endif
#define PLAYFAB_PlayFabAuthenticationAPI_generated_h

#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAuthenticationAPI_h_104_DELEGATE \
struct PlayFabAuthenticationAPI_eventDelegateOnSuccessValidateEntityToken_Parms \
{ \
	FAuthenticationValidateEntityTokenResponse result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessValidateEntityToken_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessValidateEntityToken, FAuthenticationValidateEntityTokenResponse result, UObject* customData) \
{ \
	PlayFabAuthenticationAPI_eventDelegateOnSuccessValidateEntityToken_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessValidateEntityToken.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAuthenticationAPI_h_88_DELEGATE \
struct PlayFabAuthenticationAPI_eventDelegateOnSuccessGetEntityToken_Parms \
{ \
	FAuthenticationGetEntityTokenResponse result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetEntityToken_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetEntityToken, FAuthenticationGetEntityTokenResponse result, UObject* customData) \
{ \
	PlayFabAuthenticationAPI_eventDelegateOnSuccessGetEntityToken_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetEntityToken.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAuthenticationAPI_h_75_DELEGATE \
struct PlayFabAuthenticationAPI_eventDelegateOnSuccessDelete_Parms \
{ \
	FAuthenticationEmptyResponse result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessDelete_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessDelete, FAuthenticationEmptyResponse result, UObject* customData) \
{ \
	PlayFabAuthenticationAPI_eventDelegateOnSuccessDelete_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessDelete.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAuthenticationAPI_h_62_DELEGATE \
struct PlayFabAuthenticationAPI_eventDelegateOnSuccessAuthenticateGameServerWithCustomId_Parms \
{ \
	FAuthenticationAuthenticateCustomIdResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessAuthenticateGameServerWithCustomId_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessAuthenticateGameServerWithCustomId, FAuthenticationAuthenticateCustomIdResult result, UObject* customData) \
{ \
	PlayFabAuthenticationAPI_eventDelegateOnSuccessAuthenticateGameServerWithCustomId_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessAuthenticateGameServerWithCustomId.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAuthenticationAPI_h_32_DELEGATE \
struct PlayFabAuthenticationAPI_eventDelegateOnFailurePlayFabError_Parms \
{ \
	FPlayFabError error; \
	UObject* customData; \
}; \
static inline void FDelegateOnFailurePlayFabError_DelegateWrapper(const FScriptDelegate& DelegateOnFailurePlayFabError, FPlayFabError error, UObject* customData) \
{ \
	PlayFabAuthenticationAPI_eventDelegateOnFailurePlayFabError_Parms Parms; \
	Parms.error=error; \
	Parms.customData=customData; \
	DelegateOnFailurePlayFabError.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAuthenticationAPI_h_24_DELEGATE \
struct _Script_PlayFab_eventOnPlayFabAuthenticationRequestCompleted_Parms \
{ \
	FPlayFabBaseModel response; \
	UObject* customData; \
	bool successful; \
}; \
static inline void FOnPlayFabAuthenticationRequestCompleted_DelegateWrapper(const FMulticastScriptDelegate& OnPlayFabAuthenticationRequestCompleted, FPlayFabBaseModel response, UObject* customData, bool successful) \
{ \
	_Script_PlayFab_eventOnPlayFabAuthenticationRequestCompleted_Parms Parms; \
	Parms.response=response; \
	Parms.customData=customData; \
	Parms.successful=successful ? true : false; \
	OnPlayFabAuthenticationRequestCompleted.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAuthenticationAPI_h_29_SPARSE_DATA
#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAuthenticationAPI_h_29_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHelperValidateEntityToken); \
	DECLARE_FUNCTION(execValidateEntityToken); \
	DECLARE_FUNCTION(execHelperGetEntityToken); \
	DECLARE_FUNCTION(execGetEntityToken); \
	DECLARE_FUNCTION(execHelperDelete); \
	DECLARE_FUNCTION(execDelete); \
	DECLARE_FUNCTION(execHelperAuthenticateGameServerWithCustomId); \
	DECLARE_FUNCTION(execAuthenticateGameServerWithCustomId);


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAuthenticationAPI_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHelperValidateEntityToken); \
	DECLARE_FUNCTION(execValidateEntityToken); \
	DECLARE_FUNCTION(execHelperGetEntityToken); \
	DECLARE_FUNCTION(execGetEntityToken); \
	DECLARE_FUNCTION(execHelperDelete); \
	DECLARE_FUNCTION(execDelete); \
	DECLARE_FUNCTION(execHelperAuthenticateGameServerWithCustomId); \
	DECLARE_FUNCTION(execAuthenticateGameServerWithCustomId);


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAuthenticationAPI_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlayFabAuthenticationAPI(); \
	friend struct Z_Construct_UClass_UPlayFabAuthenticationAPI_Statics; \
public: \
	DECLARE_CLASS(UPlayFabAuthenticationAPI, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PlayFab"), NO_API) \
	DECLARE_SERIALIZER(UPlayFabAuthenticationAPI)


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAuthenticationAPI_h_29_INCLASS \
private: \
	static void StaticRegisterNativesUPlayFabAuthenticationAPI(); \
	friend struct Z_Construct_UClass_UPlayFabAuthenticationAPI_Statics; \
public: \
	DECLARE_CLASS(UPlayFabAuthenticationAPI, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PlayFab"), NO_API) \
	DECLARE_SERIALIZER(UPlayFabAuthenticationAPI)


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAuthenticationAPI_h_29_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayFabAuthenticationAPI(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayFabAuthenticationAPI) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayFabAuthenticationAPI); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayFabAuthenticationAPI); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayFabAuthenticationAPI(UPlayFabAuthenticationAPI&&); \
	NO_API UPlayFabAuthenticationAPI(const UPlayFabAuthenticationAPI&); \
public:


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAuthenticationAPI_h_29_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayFabAuthenticationAPI(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayFabAuthenticationAPI(UPlayFabAuthenticationAPI&&); \
	NO_API UPlayFabAuthenticationAPI(const UPlayFabAuthenticationAPI&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayFabAuthenticationAPI); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayFabAuthenticationAPI); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayFabAuthenticationAPI)


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAuthenticationAPI_h_29_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CallAuthenticationContext() { return STRUCT_OFFSET(UPlayFabAuthenticationAPI, CallAuthenticationContext); } \
	FORCEINLINE static uint32 __PPO__RequestJsonObj() { return STRUCT_OFFSET(UPlayFabAuthenticationAPI, RequestJsonObj); } \
	FORCEINLINE static uint32 __PPO__ResponseJsonObj() { return STRUCT_OFFSET(UPlayFabAuthenticationAPI, ResponseJsonObj); }


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAuthenticationAPI_h_26_PROLOG
#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAuthenticationAPI_h_29_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAuthenticationAPI_h_29_PRIVATE_PROPERTY_OFFSET \
	UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAuthenticationAPI_h_29_SPARSE_DATA \
	UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAuthenticationAPI_h_29_RPC_WRAPPERS \
	UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAuthenticationAPI_h_29_INCLASS \
	UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAuthenticationAPI_h_29_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAuthenticationAPI_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAuthenticationAPI_h_29_PRIVATE_PROPERTY_OFFSET \
	UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAuthenticationAPI_h_29_SPARSE_DATA \
	UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAuthenticationAPI_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAuthenticationAPI_h_29_INCLASS_NO_PURE_DECLS \
	UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAuthenticationAPI_h_29_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class PlayFabAuthenticationAPI."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PLAYFAB_API UClass* StaticClass<class UPlayFabAuthenticationAPI>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabAuthenticationAPI_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
