// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FInsightsInsightsOperationResponse;
class UObject;
struct FInsightsInsightsGetPendingOperationsResponse;
struct FInsightsInsightsGetOperationStatusResponse;
struct FInsightsInsightsGetLimitsResponse;
struct FInsightsInsightsGetDetailsResponse;
struct FPlayFabError;
struct FPlayFabBaseModel;
struct FInsightsInsightsSetStorageRetentionRequest;
class UPlayFabInsightsAPI;
struct FInsightsInsightsSetPerformanceRequest;
struct FInsightsInsightsGetPendingOperationsRequest;
struct FInsightsInsightsGetOperationStatusRequest;
struct FInsightsInsightsEmptyRequest;
#ifdef PLAYFAB_PlayFabInsightsAPI_generated_h
#error "PlayFabInsightsAPI.generated.h already included, missing '#pragma once' in PlayFabInsightsAPI.h"
#endif
#define PLAYFAB_PlayFabInsightsAPI_generated_h

#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabInsightsAPI_h_133_DELEGATE \
struct PlayFabInsightsAPI_eventDelegateOnSuccessSetStorageRetention_Parms \
{ \
	FInsightsInsightsOperationResponse result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessSetStorageRetention_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessSetStorageRetention, FInsightsInsightsOperationResponse result, UObject* customData) \
{ \
	PlayFabInsightsAPI_eventDelegateOnSuccessSetStorageRetention_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessSetStorageRetention.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabInsightsAPI_h_120_DELEGATE \
struct PlayFabInsightsAPI_eventDelegateOnSuccessSetPerformance_Parms \
{ \
	FInsightsInsightsOperationResponse result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessSetPerformance_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessSetPerformance, FInsightsInsightsOperationResponse result, UObject* customData) \
{ \
	PlayFabInsightsAPI_eventDelegateOnSuccessSetPerformance_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessSetPerformance.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabInsightsAPI_h_107_DELEGATE \
struct PlayFabInsightsAPI_eventDelegateOnSuccessGetPendingOperations_Parms \
{ \
	FInsightsInsightsGetPendingOperationsResponse result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetPendingOperations_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetPendingOperations, FInsightsInsightsGetPendingOperationsResponse result, UObject* customData) \
{ \
	PlayFabInsightsAPI_eventDelegateOnSuccessGetPendingOperations_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetPendingOperations.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabInsightsAPI_h_94_DELEGATE \
struct PlayFabInsightsAPI_eventDelegateOnSuccessGetOperationStatus_Parms \
{ \
	FInsightsInsightsGetOperationStatusResponse result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetOperationStatus_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetOperationStatus, FInsightsInsightsGetOperationStatusResponse result, UObject* customData) \
{ \
	PlayFabInsightsAPI_eventDelegateOnSuccessGetOperationStatus_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetOperationStatus.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabInsightsAPI_h_78_DELEGATE \
struct PlayFabInsightsAPI_eventDelegateOnSuccessGetLimits_Parms \
{ \
	FInsightsInsightsGetLimitsResponse result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetLimits_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetLimits, FInsightsInsightsGetLimitsResponse result, UObject* customData) \
{ \
	PlayFabInsightsAPI_eventDelegateOnSuccessGetLimits_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetLimits.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabInsightsAPI_h_62_DELEGATE \
struct PlayFabInsightsAPI_eventDelegateOnSuccessGetDetails_Parms \
{ \
	FInsightsInsightsGetDetailsResponse result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetDetails_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetDetails, FInsightsInsightsGetDetailsResponse result, UObject* customData) \
{ \
	PlayFabInsightsAPI_eventDelegateOnSuccessGetDetails_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetDetails.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabInsightsAPI_h_32_DELEGATE \
struct PlayFabInsightsAPI_eventDelegateOnFailurePlayFabError_Parms \
{ \
	FPlayFabError error; \
	UObject* customData; \
}; \
static inline void FDelegateOnFailurePlayFabError_DelegateWrapper(const FScriptDelegate& DelegateOnFailurePlayFabError, FPlayFabError error, UObject* customData) \
{ \
	PlayFabInsightsAPI_eventDelegateOnFailurePlayFabError_Parms Parms; \
	Parms.error=error; \
	Parms.customData=customData; \
	DelegateOnFailurePlayFabError.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabInsightsAPI_h_24_DELEGATE \
struct _Script_PlayFab_eventOnPlayFabInsightsRequestCompleted_Parms \
{ \
	FPlayFabBaseModel response; \
	UObject* customData; \
	bool successful; \
}; \
static inline void FOnPlayFabInsightsRequestCompleted_DelegateWrapper(const FMulticastScriptDelegate& OnPlayFabInsightsRequestCompleted, FPlayFabBaseModel response, UObject* customData, bool successful) \
{ \
	_Script_PlayFab_eventOnPlayFabInsightsRequestCompleted_Parms Parms; \
	Parms.response=response; \
	Parms.customData=customData; \
	Parms.successful=successful ? true : false; \
	OnPlayFabInsightsRequestCompleted.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabInsightsAPI_h_29_SPARSE_DATA
#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabInsightsAPI_h_29_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHelperSetStorageRetention); \
	DECLARE_FUNCTION(execSetStorageRetention); \
	DECLARE_FUNCTION(execHelperSetPerformance); \
	DECLARE_FUNCTION(execSetPerformance); \
	DECLARE_FUNCTION(execHelperGetPendingOperations); \
	DECLARE_FUNCTION(execGetPendingOperations); \
	DECLARE_FUNCTION(execHelperGetOperationStatus); \
	DECLARE_FUNCTION(execGetOperationStatus); \
	DECLARE_FUNCTION(execHelperGetLimits); \
	DECLARE_FUNCTION(execGetLimits); \
	DECLARE_FUNCTION(execHelperGetDetails); \
	DECLARE_FUNCTION(execGetDetails);


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabInsightsAPI_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHelperSetStorageRetention); \
	DECLARE_FUNCTION(execSetStorageRetention); \
	DECLARE_FUNCTION(execHelperSetPerformance); \
	DECLARE_FUNCTION(execSetPerformance); \
	DECLARE_FUNCTION(execHelperGetPendingOperations); \
	DECLARE_FUNCTION(execGetPendingOperations); \
	DECLARE_FUNCTION(execHelperGetOperationStatus); \
	DECLARE_FUNCTION(execGetOperationStatus); \
	DECLARE_FUNCTION(execHelperGetLimits); \
	DECLARE_FUNCTION(execGetLimits); \
	DECLARE_FUNCTION(execHelperGetDetails); \
	DECLARE_FUNCTION(execGetDetails);


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabInsightsAPI_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlayFabInsightsAPI(); \
	friend struct Z_Construct_UClass_UPlayFabInsightsAPI_Statics; \
public: \
	DECLARE_CLASS(UPlayFabInsightsAPI, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PlayFab"), NO_API) \
	DECLARE_SERIALIZER(UPlayFabInsightsAPI)


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabInsightsAPI_h_29_INCLASS \
private: \
	static void StaticRegisterNativesUPlayFabInsightsAPI(); \
	friend struct Z_Construct_UClass_UPlayFabInsightsAPI_Statics; \
public: \
	DECLARE_CLASS(UPlayFabInsightsAPI, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PlayFab"), NO_API) \
	DECLARE_SERIALIZER(UPlayFabInsightsAPI)


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabInsightsAPI_h_29_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayFabInsightsAPI(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayFabInsightsAPI) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayFabInsightsAPI); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayFabInsightsAPI); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayFabInsightsAPI(UPlayFabInsightsAPI&&); \
	NO_API UPlayFabInsightsAPI(const UPlayFabInsightsAPI&); \
public:


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabInsightsAPI_h_29_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayFabInsightsAPI(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayFabInsightsAPI(UPlayFabInsightsAPI&&); \
	NO_API UPlayFabInsightsAPI(const UPlayFabInsightsAPI&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayFabInsightsAPI); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayFabInsightsAPI); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayFabInsightsAPI)


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabInsightsAPI_h_29_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CallAuthenticationContext() { return STRUCT_OFFSET(UPlayFabInsightsAPI, CallAuthenticationContext); } \
	FORCEINLINE static uint32 __PPO__RequestJsonObj() { return STRUCT_OFFSET(UPlayFabInsightsAPI, RequestJsonObj); } \
	FORCEINLINE static uint32 __PPO__ResponseJsonObj() { return STRUCT_OFFSET(UPlayFabInsightsAPI, ResponseJsonObj); }


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabInsightsAPI_h_26_PROLOG
#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabInsightsAPI_h_29_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabInsightsAPI_h_29_PRIVATE_PROPERTY_OFFSET \
	UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabInsightsAPI_h_29_SPARSE_DATA \
	UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabInsightsAPI_h_29_RPC_WRAPPERS \
	UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabInsightsAPI_h_29_INCLASS \
	UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabInsightsAPI_h_29_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabInsightsAPI_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabInsightsAPI_h_29_PRIVATE_PROPERTY_OFFSET \
	UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabInsightsAPI_h_29_SPARSE_DATA \
	UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabInsightsAPI_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabInsightsAPI_h_29_INCLASS_NO_PURE_DECLS \
	UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabInsightsAPI_h_29_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class PlayFabInsightsAPI."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PLAYFAB_API UClass* StaticClass<class UPlayFabInsightsAPI>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabInsightsAPI_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
