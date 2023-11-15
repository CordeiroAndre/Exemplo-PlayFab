// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FMatchmakerUserInfoResponse;
class UObject;
struct FMatchmakerPlayerLeftResponse;
struct FMatchmakerPlayerJoinedResponse;
struct FMatchmakerAuthUserResponse;
struct FPlayFabError;
struct FPlayFabBaseModel;
struct FMatchmakerUserInfoRequest;
class UPlayFabMatchmakerAPI;
struct FMatchmakerPlayerLeftRequest;
struct FMatchmakerPlayerJoinedRequest;
struct FMatchmakerAuthUserRequest;
#ifdef PLAYFAB_PlayFabMatchmakerAPI_generated_h
#error "PlayFabMatchmakerAPI.generated.h already included, missing '#pragma once' in PlayFabMatchmakerAPI.h"
#endif
#define PLAYFAB_PlayFabMatchmakerAPI_generated_h

#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabMatchmakerAPI_h_101_DELEGATE \
struct PlayFabMatchmakerAPI_eventDelegateOnSuccessUserInfo_Parms \
{ \
	FMatchmakerUserInfoResponse result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessUserInfo_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessUserInfo, FMatchmakerUserInfoResponse result, UObject* customData) \
{ \
	PlayFabMatchmakerAPI_eventDelegateOnSuccessUserInfo_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessUserInfo.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabMatchmakerAPI_h_88_DELEGATE \
struct PlayFabMatchmakerAPI_eventDelegateOnSuccessPlayerLeft_Parms \
{ \
	FMatchmakerPlayerLeftResponse result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessPlayerLeft_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessPlayerLeft, FMatchmakerPlayerLeftResponse result, UObject* customData) \
{ \
	PlayFabMatchmakerAPI_eventDelegateOnSuccessPlayerLeft_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessPlayerLeft.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabMatchmakerAPI_h_75_DELEGATE \
struct PlayFabMatchmakerAPI_eventDelegateOnSuccessPlayerJoined_Parms \
{ \
	FMatchmakerPlayerJoinedResponse result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessPlayerJoined_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessPlayerJoined, FMatchmakerPlayerJoinedResponse result, UObject* customData) \
{ \
	PlayFabMatchmakerAPI_eventDelegateOnSuccessPlayerJoined_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessPlayerJoined.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabMatchmakerAPI_h_62_DELEGATE \
struct PlayFabMatchmakerAPI_eventDelegateOnSuccessAuthUser_Parms \
{ \
	FMatchmakerAuthUserResponse result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessAuthUser_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessAuthUser, FMatchmakerAuthUserResponse result, UObject* customData) \
{ \
	PlayFabMatchmakerAPI_eventDelegateOnSuccessAuthUser_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessAuthUser.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabMatchmakerAPI_h_32_DELEGATE \
struct PlayFabMatchmakerAPI_eventDelegateOnFailurePlayFabError_Parms \
{ \
	FPlayFabError error; \
	UObject* customData; \
}; \
static inline void FDelegateOnFailurePlayFabError_DelegateWrapper(const FScriptDelegate& DelegateOnFailurePlayFabError, FPlayFabError error, UObject* customData) \
{ \
	PlayFabMatchmakerAPI_eventDelegateOnFailurePlayFabError_Parms Parms; \
	Parms.error=error; \
	Parms.customData=customData; \
	DelegateOnFailurePlayFabError.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabMatchmakerAPI_h_24_DELEGATE \
struct _Script_PlayFab_eventOnPlayFabMatchmakerRequestCompleted_Parms \
{ \
	FPlayFabBaseModel response; \
	UObject* customData; \
	bool successful; \
}; \
static inline void FOnPlayFabMatchmakerRequestCompleted_DelegateWrapper(const FMulticastScriptDelegate& OnPlayFabMatchmakerRequestCompleted, FPlayFabBaseModel response, UObject* customData, bool successful) \
{ \
	_Script_PlayFab_eventOnPlayFabMatchmakerRequestCompleted_Parms Parms; \
	Parms.response=response; \
	Parms.customData=customData; \
	Parms.successful=successful ? true : false; \
	OnPlayFabMatchmakerRequestCompleted.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabMatchmakerAPI_h_29_SPARSE_DATA
#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabMatchmakerAPI_h_29_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHelperUserInfo); \
	DECLARE_FUNCTION(execUserInfo); \
	DECLARE_FUNCTION(execHelperPlayerLeft); \
	DECLARE_FUNCTION(execPlayerLeft); \
	DECLARE_FUNCTION(execHelperPlayerJoined); \
	DECLARE_FUNCTION(execPlayerJoined); \
	DECLARE_FUNCTION(execHelperAuthUser); \
	DECLARE_FUNCTION(execAuthUser);


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabMatchmakerAPI_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHelperUserInfo); \
	DECLARE_FUNCTION(execUserInfo); \
	DECLARE_FUNCTION(execHelperPlayerLeft); \
	DECLARE_FUNCTION(execPlayerLeft); \
	DECLARE_FUNCTION(execHelperPlayerJoined); \
	DECLARE_FUNCTION(execPlayerJoined); \
	DECLARE_FUNCTION(execHelperAuthUser); \
	DECLARE_FUNCTION(execAuthUser);


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabMatchmakerAPI_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlayFabMatchmakerAPI(); \
	friend struct Z_Construct_UClass_UPlayFabMatchmakerAPI_Statics; \
public: \
	DECLARE_CLASS(UPlayFabMatchmakerAPI, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PlayFab"), NO_API) \
	DECLARE_SERIALIZER(UPlayFabMatchmakerAPI)


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabMatchmakerAPI_h_29_INCLASS \
private: \
	static void StaticRegisterNativesUPlayFabMatchmakerAPI(); \
	friend struct Z_Construct_UClass_UPlayFabMatchmakerAPI_Statics; \
public: \
	DECLARE_CLASS(UPlayFabMatchmakerAPI, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PlayFab"), NO_API) \
	DECLARE_SERIALIZER(UPlayFabMatchmakerAPI)


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabMatchmakerAPI_h_29_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayFabMatchmakerAPI(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayFabMatchmakerAPI) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayFabMatchmakerAPI); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayFabMatchmakerAPI); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayFabMatchmakerAPI(UPlayFabMatchmakerAPI&&); \
	NO_API UPlayFabMatchmakerAPI(const UPlayFabMatchmakerAPI&); \
public:


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabMatchmakerAPI_h_29_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayFabMatchmakerAPI(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayFabMatchmakerAPI(UPlayFabMatchmakerAPI&&); \
	NO_API UPlayFabMatchmakerAPI(const UPlayFabMatchmakerAPI&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayFabMatchmakerAPI); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayFabMatchmakerAPI); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayFabMatchmakerAPI)


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabMatchmakerAPI_h_29_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CallAuthenticationContext() { return STRUCT_OFFSET(UPlayFabMatchmakerAPI, CallAuthenticationContext); } \
	FORCEINLINE static uint32 __PPO__RequestJsonObj() { return STRUCT_OFFSET(UPlayFabMatchmakerAPI, RequestJsonObj); } \
	FORCEINLINE static uint32 __PPO__ResponseJsonObj() { return STRUCT_OFFSET(UPlayFabMatchmakerAPI, ResponseJsonObj); }


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabMatchmakerAPI_h_26_PROLOG
#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabMatchmakerAPI_h_29_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabMatchmakerAPI_h_29_PRIVATE_PROPERTY_OFFSET \
	UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabMatchmakerAPI_h_29_SPARSE_DATA \
	UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabMatchmakerAPI_h_29_RPC_WRAPPERS \
	UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabMatchmakerAPI_h_29_INCLASS \
	UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabMatchmakerAPI_h_29_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabMatchmakerAPI_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabMatchmakerAPI_h_29_PRIVATE_PROPERTY_OFFSET \
	UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabMatchmakerAPI_h_29_SPARSE_DATA \
	UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabMatchmakerAPI_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabMatchmakerAPI_h_29_INCLASS_NO_PURE_DECLS \
	UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabMatchmakerAPI_h_29_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class PlayFabMatchmakerAPI."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PLAYFAB_API UClass* StaticClass<class UPlayFabMatchmakerAPI>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabMatchmakerAPI_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
