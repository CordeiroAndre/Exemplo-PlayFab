// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FProfilesSetEntityProfilePolicyResponse;
class UObject;
struct FProfilesSetProfileLanguageResponse;
struct FProfilesSetGlobalPolicyResponse;
struct FProfilesGetTitlePlayersFromProviderIDsResponse;
struct FProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse;
struct FProfilesGetEntityProfilesResponse;
struct FProfilesGetEntityProfileResponse;
struct FProfilesGetGlobalPolicyResponse;
struct FPlayFabError;
struct FPlayFabBaseModel;
struct FProfilesSetEntityProfilePolicyRequest;
class UPlayFabProfilesAPI;
struct FProfilesSetProfileLanguageRequest;
struct FProfilesSetGlobalPolicyRequest;
struct FProfilesGetTitlePlayersFromXboxLiveIDsRequest;
struct FProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest;
struct FProfilesGetEntityProfilesRequest;
struct FProfilesGetEntityProfileRequest;
struct FProfilesGetGlobalPolicyRequest;
#ifdef PLAYFAB_PlayFabProfilesAPI_generated_h
#error "PlayFabProfilesAPI.generated.h already included, missing '#pragma once' in PlayFabProfilesAPI.h"
#endif
#define PLAYFAB_PlayFabProfilesAPI_generated_h

#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabProfilesAPI_h_156_DELEGATE \
struct PlayFabProfilesAPI_eventDelegateOnSuccessSetProfilePolicy_Parms \
{ \
	FProfilesSetEntityProfilePolicyResponse result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessSetProfilePolicy_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessSetProfilePolicy, FProfilesSetEntityProfilePolicyResponse result, UObject* customData) \
{ \
	PlayFabProfilesAPI_eventDelegateOnSuccessSetProfilePolicy_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessSetProfilePolicy.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabProfilesAPI_h_140_DELEGATE \
struct PlayFabProfilesAPI_eventDelegateOnSuccessSetProfileLanguage_Parms \
{ \
	FProfilesSetProfileLanguageResponse result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessSetProfileLanguage_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessSetProfileLanguage, FProfilesSetProfileLanguageResponse result, UObject* customData) \
{ \
	PlayFabProfilesAPI_eventDelegateOnSuccessSetProfileLanguage_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessSetProfileLanguage.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabProfilesAPI_h_127_DELEGATE \
struct PlayFabProfilesAPI_eventDelegateOnSuccessSetGlobalPolicy_Parms \
{ \
	FProfilesSetGlobalPolicyResponse result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessSetGlobalPolicy_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessSetGlobalPolicy, FProfilesSetGlobalPolicyResponse result, UObject* customData) \
{ \
	PlayFabProfilesAPI_eventDelegateOnSuccessSetGlobalPolicy_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessSetGlobalPolicy.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabProfilesAPI_h_114_DELEGATE \
struct PlayFabProfilesAPI_eventDelegateOnSuccessGetTitlePlayersFromXboxLiveIDs_Parms \
{ \
	FProfilesGetTitlePlayersFromProviderIDsResponse result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetTitlePlayersFromXboxLiveIDs_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetTitlePlayersFromXboxLiveIDs, FProfilesGetTitlePlayersFromProviderIDsResponse result, UObject* customData) \
{ \
	PlayFabProfilesAPI_eventDelegateOnSuccessGetTitlePlayersFromXboxLiveIDs_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetTitlePlayersFromXboxLiveIDs.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabProfilesAPI_h_101_DELEGATE \
struct PlayFabProfilesAPI_eventDelegateOnSuccessGetTitlePlayersFromMasterPlayerAccountIds_Parms \
{ \
	FProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetTitlePlayersFromMasterPlayerAccountIds_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetTitlePlayersFromMasterPlayerAccountIds, FProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse result, UObject* customData) \
{ \
	PlayFabProfilesAPI_eventDelegateOnSuccessGetTitlePlayersFromMasterPlayerAccountIds_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetTitlePlayersFromMasterPlayerAccountIds.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabProfilesAPI_h_88_DELEGATE \
struct PlayFabProfilesAPI_eventDelegateOnSuccessGetProfiles_Parms \
{ \
	FProfilesGetEntityProfilesResponse result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetProfiles_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetProfiles, FProfilesGetEntityProfilesResponse result, UObject* customData) \
{ \
	PlayFabProfilesAPI_eventDelegateOnSuccessGetProfiles_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetProfiles.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabProfilesAPI_h_75_DELEGATE \
struct PlayFabProfilesAPI_eventDelegateOnSuccessGetProfile_Parms \
{ \
	FProfilesGetEntityProfileResponse result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetProfile_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetProfile, FProfilesGetEntityProfileResponse result, UObject* customData) \
{ \
	PlayFabProfilesAPI_eventDelegateOnSuccessGetProfile_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetProfile.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabProfilesAPI_h_62_DELEGATE \
struct PlayFabProfilesAPI_eventDelegateOnSuccessGetGlobalPolicy_Parms \
{ \
	FProfilesGetGlobalPolicyResponse result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetGlobalPolicy_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetGlobalPolicy, FProfilesGetGlobalPolicyResponse result, UObject* customData) \
{ \
	PlayFabProfilesAPI_eventDelegateOnSuccessGetGlobalPolicy_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetGlobalPolicy.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabProfilesAPI_h_32_DELEGATE \
struct PlayFabProfilesAPI_eventDelegateOnFailurePlayFabError_Parms \
{ \
	FPlayFabError error; \
	UObject* customData; \
}; \
static inline void FDelegateOnFailurePlayFabError_DelegateWrapper(const FScriptDelegate& DelegateOnFailurePlayFabError, FPlayFabError error, UObject* customData) \
{ \
	PlayFabProfilesAPI_eventDelegateOnFailurePlayFabError_Parms Parms; \
	Parms.error=error; \
	Parms.customData=customData; \
	DelegateOnFailurePlayFabError.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabProfilesAPI_h_24_DELEGATE \
struct _Script_PlayFab_eventOnPlayFabProfilesRequestCompleted_Parms \
{ \
	FPlayFabBaseModel response; \
	UObject* customData; \
	bool successful; \
}; \
static inline void FOnPlayFabProfilesRequestCompleted_DelegateWrapper(const FMulticastScriptDelegate& OnPlayFabProfilesRequestCompleted, FPlayFabBaseModel response, UObject* customData, bool successful) \
{ \
	_Script_PlayFab_eventOnPlayFabProfilesRequestCompleted_Parms Parms; \
	Parms.response=response; \
	Parms.customData=customData; \
	Parms.successful=successful ? true : false; \
	OnPlayFabProfilesRequestCompleted.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabProfilesAPI_h_29_SPARSE_DATA
#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabProfilesAPI_h_29_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHelperSetProfilePolicy); \
	DECLARE_FUNCTION(execSetProfilePolicy); \
	DECLARE_FUNCTION(execHelperSetProfileLanguage); \
	DECLARE_FUNCTION(execSetProfileLanguage); \
	DECLARE_FUNCTION(execHelperSetGlobalPolicy); \
	DECLARE_FUNCTION(execSetGlobalPolicy); \
	DECLARE_FUNCTION(execHelperGetTitlePlayersFromXboxLiveIDs); \
	DECLARE_FUNCTION(execGetTitlePlayersFromXboxLiveIDs); \
	DECLARE_FUNCTION(execHelperGetTitlePlayersFromMasterPlayerAccountIds); \
	DECLARE_FUNCTION(execGetTitlePlayersFromMasterPlayerAccountIds); \
	DECLARE_FUNCTION(execHelperGetProfiles); \
	DECLARE_FUNCTION(execGetProfiles); \
	DECLARE_FUNCTION(execHelperGetProfile); \
	DECLARE_FUNCTION(execGetProfile); \
	DECLARE_FUNCTION(execHelperGetGlobalPolicy); \
	DECLARE_FUNCTION(execGetGlobalPolicy);


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabProfilesAPI_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHelperSetProfilePolicy); \
	DECLARE_FUNCTION(execSetProfilePolicy); \
	DECLARE_FUNCTION(execHelperSetProfileLanguage); \
	DECLARE_FUNCTION(execSetProfileLanguage); \
	DECLARE_FUNCTION(execHelperSetGlobalPolicy); \
	DECLARE_FUNCTION(execSetGlobalPolicy); \
	DECLARE_FUNCTION(execHelperGetTitlePlayersFromXboxLiveIDs); \
	DECLARE_FUNCTION(execGetTitlePlayersFromXboxLiveIDs); \
	DECLARE_FUNCTION(execHelperGetTitlePlayersFromMasterPlayerAccountIds); \
	DECLARE_FUNCTION(execGetTitlePlayersFromMasterPlayerAccountIds); \
	DECLARE_FUNCTION(execHelperGetProfiles); \
	DECLARE_FUNCTION(execGetProfiles); \
	DECLARE_FUNCTION(execHelperGetProfile); \
	DECLARE_FUNCTION(execGetProfile); \
	DECLARE_FUNCTION(execHelperGetGlobalPolicy); \
	DECLARE_FUNCTION(execGetGlobalPolicy);


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabProfilesAPI_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlayFabProfilesAPI(); \
	friend struct Z_Construct_UClass_UPlayFabProfilesAPI_Statics; \
public: \
	DECLARE_CLASS(UPlayFabProfilesAPI, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PlayFab"), NO_API) \
	DECLARE_SERIALIZER(UPlayFabProfilesAPI)


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabProfilesAPI_h_29_INCLASS \
private: \
	static void StaticRegisterNativesUPlayFabProfilesAPI(); \
	friend struct Z_Construct_UClass_UPlayFabProfilesAPI_Statics; \
public: \
	DECLARE_CLASS(UPlayFabProfilesAPI, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PlayFab"), NO_API) \
	DECLARE_SERIALIZER(UPlayFabProfilesAPI)


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabProfilesAPI_h_29_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayFabProfilesAPI(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayFabProfilesAPI) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayFabProfilesAPI); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayFabProfilesAPI); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayFabProfilesAPI(UPlayFabProfilesAPI&&); \
	NO_API UPlayFabProfilesAPI(const UPlayFabProfilesAPI&); \
public:


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabProfilesAPI_h_29_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayFabProfilesAPI(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayFabProfilesAPI(UPlayFabProfilesAPI&&); \
	NO_API UPlayFabProfilesAPI(const UPlayFabProfilesAPI&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayFabProfilesAPI); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayFabProfilesAPI); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayFabProfilesAPI)


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabProfilesAPI_h_29_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CallAuthenticationContext() { return STRUCT_OFFSET(UPlayFabProfilesAPI, CallAuthenticationContext); } \
	FORCEINLINE static uint32 __PPO__RequestJsonObj() { return STRUCT_OFFSET(UPlayFabProfilesAPI, RequestJsonObj); } \
	FORCEINLINE static uint32 __PPO__ResponseJsonObj() { return STRUCT_OFFSET(UPlayFabProfilesAPI, ResponseJsonObj); }


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabProfilesAPI_h_26_PROLOG
#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabProfilesAPI_h_29_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabProfilesAPI_h_29_PRIVATE_PROPERTY_OFFSET \
	UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabProfilesAPI_h_29_SPARSE_DATA \
	UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabProfilesAPI_h_29_RPC_WRAPPERS \
	UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabProfilesAPI_h_29_INCLASS \
	UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabProfilesAPI_h_29_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabProfilesAPI_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabProfilesAPI_h_29_PRIVATE_PROPERTY_OFFSET \
	UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabProfilesAPI_h_29_SPARSE_DATA \
	UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabProfilesAPI_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabProfilesAPI_h_29_INCLASS_NO_PURE_DECLS \
	UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabProfilesAPI_h_29_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class PlayFabProfilesAPI."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PLAYFAB_API UClass* StaticClass<class UPlayFabProfilesAPI>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabProfilesAPI_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
