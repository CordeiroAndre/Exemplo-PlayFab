// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FLocalizationGetLanguageListResponse;
class UObject;
struct FPlayFabError;
struct FPlayFabBaseModel;
struct FLocalizationGetLanguageListRequest;
class UPlayFabLocalizationAPI;
#ifdef PLAYFAB_PlayFabLocalizationAPI_generated_h
#error "PlayFabLocalizationAPI.generated.h already included, missing '#pragma once' in PlayFabLocalizationAPI.h"
#endif
#define PLAYFAB_PlayFabLocalizationAPI_generated_h

#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabLocalizationAPI_h_62_DELEGATE \
struct PlayFabLocalizationAPI_eventDelegateOnSuccessGetLanguageList_Parms \
{ \
	FLocalizationGetLanguageListResponse result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetLanguageList_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetLanguageList, FLocalizationGetLanguageListResponse result, UObject* customData) \
{ \
	PlayFabLocalizationAPI_eventDelegateOnSuccessGetLanguageList_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetLanguageList.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabLocalizationAPI_h_32_DELEGATE \
struct PlayFabLocalizationAPI_eventDelegateOnFailurePlayFabError_Parms \
{ \
	FPlayFabError error; \
	UObject* customData; \
}; \
static inline void FDelegateOnFailurePlayFabError_DelegateWrapper(const FScriptDelegate& DelegateOnFailurePlayFabError, FPlayFabError error, UObject* customData) \
{ \
	PlayFabLocalizationAPI_eventDelegateOnFailurePlayFabError_Parms Parms; \
	Parms.error=error; \
	Parms.customData=customData; \
	DelegateOnFailurePlayFabError.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabLocalizationAPI_h_24_DELEGATE \
struct _Script_PlayFab_eventOnPlayFabLocalizationRequestCompleted_Parms \
{ \
	FPlayFabBaseModel response; \
	UObject* customData; \
	bool successful; \
}; \
static inline void FOnPlayFabLocalizationRequestCompleted_DelegateWrapper(const FMulticastScriptDelegate& OnPlayFabLocalizationRequestCompleted, FPlayFabBaseModel response, UObject* customData, bool successful) \
{ \
	_Script_PlayFab_eventOnPlayFabLocalizationRequestCompleted_Parms Parms; \
	Parms.response=response; \
	Parms.customData=customData; \
	Parms.successful=successful ? true : false; \
	OnPlayFabLocalizationRequestCompleted.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabLocalizationAPI_h_29_SPARSE_DATA
#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabLocalizationAPI_h_29_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHelperGetLanguageList); \
	DECLARE_FUNCTION(execGetLanguageList);


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabLocalizationAPI_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHelperGetLanguageList); \
	DECLARE_FUNCTION(execGetLanguageList);


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabLocalizationAPI_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlayFabLocalizationAPI(); \
	friend struct Z_Construct_UClass_UPlayFabLocalizationAPI_Statics; \
public: \
	DECLARE_CLASS(UPlayFabLocalizationAPI, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PlayFab"), NO_API) \
	DECLARE_SERIALIZER(UPlayFabLocalizationAPI)


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabLocalizationAPI_h_29_INCLASS \
private: \
	static void StaticRegisterNativesUPlayFabLocalizationAPI(); \
	friend struct Z_Construct_UClass_UPlayFabLocalizationAPI_Statics; \
public: \
	DECLARE_CLASS(UPlayFabLocalizationAPI, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PlayFab"), NO_API) \
	DECLARE_SERIALIZER(UPlayFabLocalizationAPI)


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabLocalizationAPI_h_29_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayFabLocalizationAPI(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayFabLocalizationAPI) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayFabLocalizationAPI); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayFabLocalizationAPI); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayFabLocalizationAPI(UPlayFabLocalizationAPI&&); \
	NO_API UPlayFabLocalizationAPI(const UPlayFabLocalizationAPI&); \
public:


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabLocalizationAPI_h_29_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayFabLocalizationAPI(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayFabLocalizationAPI(UPlayFabLocalizationAPI&&); \
	NO_API UPlayFabLocalizationAPI(const UPlayFabLocalizationAPI&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayFabLocalizationAPI); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayFabLocalizationAPI); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayFabLocalizationAPI)


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabLocalizationAPI_h_29_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CallAuthenticationContext() { return STRUCT_OFFSET(UPlayFabLocalizationAPI, CallAuthenticationContext); } \
	FORCEINLINE static uint32 __PPO__RequestJsonObj() { return STRUCT_OFFSET(UPlayFabLocalizationAPI, RequestJsonObj); } \
	FORCEINLINE static uint32 __PPO__ResponseJsonObj() { return STRUCT_OFFSET(UPlayFabLocalizationAPI, ResponseJsonObj); }


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabLocalizationAPI_h_26_PROLOG
#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabLocalizationAPI_h_29_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabLocalizationAPI_h_29_PRIVATE_PROPERTY_OFFSET \
	UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabLocalizationAPI_h_29_SPARSE_DATA \
	UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabLocalizationAPI_h_29_RPC_WRAPPERS \
	UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabLocalizationAPI_h_29_INCLASS \
	UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabLocalizationAPI_h_29_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabLocalizationAPI_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabLocalizationAPI_h_29_PRIVATE_PROPERTY_OFFSET \
	UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabLocalizationAPI_h_29_SPARSE_DATA \
	UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabLocalizationAPI_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabLocalizationAPI_h_29_INCLASS_NO_PURE_DECLS \
	UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabLocalizationAPI_h_29_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class PlayFabLocalizationAPI."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PLAYFAB_API UClass* StaticClass<class UPlayFabLocalizationAPI>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabLocalizationAPI_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
