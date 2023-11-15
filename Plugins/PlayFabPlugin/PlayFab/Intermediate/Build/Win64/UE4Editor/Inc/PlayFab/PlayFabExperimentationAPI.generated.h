// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FExperimentationEmptyResponse;
class UObject;
struct FExperimentationGetTreatmentAssignmentResult;
struct FExperimentationGetLatestScorecardResult;
struct FExperimentationGetExperimentsResult;
struct FExperimentationGetExclusionGroupTrafficResult;
struct FExperimentationGetExclusionGroupsResult;
struct FExperimentationCreateExperimentResult;
struct FExperimentationCreateExclusionGroupResult;
struct FPlayFabError;
struct FPlayFabBaseModel;
struct FExperimentationUpdateExperimentRequest;
class UPlayFabExperimentationAPI;
struct FExperimentationUpdateExclusionGroupRequest;
struct FExperimentationStopExperimentRequest;
struct FExperimentationStartExperimentRequest;
struct FExperimentationGetTreatmentAssignmentRequest;
struct FExperimentationGetLatestScorecardRequest;
struct FExperimentationGetExperimentsRequest;
struct FExperimentationGetExclusionGroupTrafficRequest;
struct FExperimentationGetExclusionGroupsRequest;
struct FExperimentationDeleteExperimentRequest;
struct FExperimentationDeleteExclusionGroupRequest;
struct FExperimentationCreateExperimentRequest;
struct FExperimentationCreateExclusionGroupRequest;
#ifdef PLAYFAB_PlayFabExperimentationAPI_generated_h
#error "PlayFabExperimentationAPI.generated.h already included, missing '#pragma once' in PlayFabExperimentationAPI.h"
#endif
#define PLAYFAB_PlayFabExperimentationAPI_generated_h

#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabExperimentationAPI_h_218_DELEGATE \
struct PlayFabExperimentationAPI_eventDelegateOnSuccessUpdateExperiment_Parms \
{ \
	FExperimentationEmptyResponse result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessUpdateExperiment_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessUpdateExperiment, FExperimentationEmptyResponse result, UObject* customData) \
{ \
	PlayFabExperimentationAPI_eventDelegateOnSuccessUpdateExperiment_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessUpdateExperiment.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabExperimentationAPI_h_205_DELEGATE \
struct PlayFabExperimentationAPI_eventDelegateOnSuccessUpdateExclusionGroup_Parms \
{ \
	FExperimentationEmptyResponse result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessUpdateExclusionGroup_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessUpdateExclusionGroup, FExperimentationEmptyResponse result, UObject* customData) \
{ \
	PlayFabExperimentationAPI_eventDelegateOnSuccessUpdateExclusionGroup_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessUpdateExclusionGroup.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabExperimentationAPI_h_192_DELEGATE \
struct PlayFabExperimentationAPI_eventDelegateOnSuccessStopExperiment_Parms \
{ \
	FExperimentationEmptyResponse result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessStopExperiment_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessStopExperiment, FExperimentationEmptyResponse result, UObject* customData) \
{ \
	PlayFabExperimentationAPI_eventDelegateOnSuccessStopExperiment_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessStopExperiment.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabExperimentationAPI_h_179_DELEGATE \
struct PlayFabExperimentationAPI_eventDelegateOnSuccessStartExperiment_Parms \
{ \
	FExperimentationEmptyResponse result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessStartExperiment_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessStartExperiment, FExperimentationEmptyResponse result, UObject* customData) \
{ \
	PlayFabExperimentationAPI_eventDelegateOnSuccessStartExperiment_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessStartExperiment.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabExperimentationAPI_h_166_DELEGATE \
struct PlayFabExperimentationAPI_eventDelegateOnSuccessGetTreatmentAssignment_Parms \
{ \
	FExperimentationGetTreatmentAssignmentResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetTreatmentAssignment_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetTreatmentAssignment, FExperimentationGetTreatmentAssignmentResult result, UObject* customData) \
{ \
	PlayFabExperimentationAPI_eventDelegateOnSuccessGetTreatmentAssignment_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetTreatmentAssignment.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabExperimentationAPI_h_153_DELEGATE \
struct PlayFabExperimentationAPI_eventDelegateOnSuccessGetLatestScorecard_Parms \
{ \
	FExperimentationGetLatestScorecardResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetLatestScorecard_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetLatestScorecard, FExperimentationGetLatestScorecardResult result, UObject* customData) \
{ \
	PlayFabExperimentationAPI_eventDelegateOnSuccessGetLatestScorecard_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetLatestScorecard.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabExperimentationAPI_h_140_DELEGATE \
struct PlayFabExperimentationAPI_eventDelegateOnSuccessGetExperiments_Parms \
{ \
	FExperimentationGetExperimentsResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetExperiments_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetExperiments, FExperimentationGetExperimentsResult result, UObject* customData) \
{ \
	PlayFabExperimentationAPI_eventDelegateOnSuccessGetExperiments_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetExperiments.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabExperimentationAPI_h_127_DELEGATE \
struct PlayFabExperimentationAPI_eventDelegateOnSuccessGetExclusionGroupTraffic_Parms \
{ \
	FExperimentationGetExclusionGroupTrafficResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetExclusionGroupTraffic_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetExclusionGroupTraffic, FExperimentationGetExclusionGroupTrafficResult result, UObject* customData) \
{ \
	PlayFabExperimentationAPI_eventDelegateOnSuccessGetExclusionGroupTraffic_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetExclusionGroupTraffic.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabExperimentationAPI_h_114_DELEGATE \
struct PlayFabExperimentationAPI_eventDelegateOnSuccessGetExclusionGroups_Parms \
{ \
	FExperimentationGetExclusionGroupsResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetExclusionGroups_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetExclusionGroups, FExperimentationGetExclusionGroupsResult result, UObject* customData) \
{ \
	PlayFabExperimentationAPI_eventDelegateOnSuccessGetExclusionGroups_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetExclusionGroups.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabExperimentationAPI_h_101_DELEGATE \
struct PlayFabExperimentationAPI_eventDelegateOnSuccessDeleteExperiment_Parms \
{ \
	FExperimentationEmptyResponse result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessDeleteExperiment_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessDeleteExperiment, FExperimentationEmptyResponse result, UObject* customData) \
{ \
	PlayFabExperimentationAPI_eventDelegateOnSuccessDeleteExperiment_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessDeleteExperiment.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabExperimentationAPI_h_88_DELEGATE \
struct PlayFabExperimentationAPI_eventDelegateOnSuccessDeleteExclusionGroup_Parms \
{ \
	FExperimentationEmptyResponse result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessDeleteExclusionGroup_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessDeleteExclusionGroup, FExperimentationEmptyResponse result, UObject* customData) \
{ \
	PlayFabExperimentationAPI_eventDelegateOnSuccessDeleteExclusionGroup_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessDeleteExclusionGroup.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabExperimentationAPI_h_75_DELEGATE \
struct PlayFabExperimentationAPI_eventDelegateOnSuccessCreateExperiment_Parms \
{ \
	FExperimentationCreateExperimentResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessCreateExperiment_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessCreateExperiment, FExperimentationCreateExperimentResult result, UObject* customData) \
{ \
	PlayFabExperimentationAPI_eventDelegateOnSuccessCreateExperiment_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessCreateExperiment.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabExperimentationAPI_h_62_DELEGATE \
struct PlayFabExperimentationAPI_eventDelegateOnSuccessCreateExclusionGroup_Parms \
{ \
	FExperimentationCreateExclusionGroupResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessCreateExclusionGroup_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessCreateExclusionGroup, FExperimentationCreateExclusionGroupResult result, UObject* customData) \
{ \
	PlayFabExperimentationAPI_eventDelegateOnSuccessCreateExclusionGroup_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessCreateExclusionGroup.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabExperimentationAPI_h_32_DELEGATE \
struct PlayFabExperimentationAPI_eventDelegateOnFailurePlayFabError_Parms \
{ \
	FPlayFabError error; \
	UObject* customData; \
}; \
static inline void FDelegateOnFailurePlayFabError_DelegateWrapper(const FScriptDelegate& DelegateOnFailurePlayFabError, FPlayFabError error, UObject* customData) \
{ \
	PlayFabExperimentationAPI_eventDelegateOnFailurePlayFabError_Parms Parms; \
	Parms.error=error; \
	Parms.customData=customData; \
	DelegateOnFailurePlayFabError.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabExperimentationAPI_h_24_DELEGATE \
struct _Script_PlayFab_eventOnPlayFabExperimentationRequestCompleted_Parms \
{ \
	FPlayFabBaseModel response; \
	UObject* customData; \
	bool successful; \
}; \
static inline void FOnPlayFabExperimentationRequestCompleted_DelegateWrapper(const FMulticastScriptDelegate& OnPlayFabExperimentationRequestCompleted, FPlayFabBaseModel response, UObject* customData, bool successful) \
{ \
	_Script_PlayFab_eventOnPlayFabExperimentationRequestCompleted_Parms Parms; \
	Parms.response=response; \
	Parms.customData=customData; \
	Parms.successful=successful ? true : false; \
	OnPlayFabExperimentationRequestCompleted.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabExperimentationAPI_h_29_SPARSE_DATA
#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabExperimentationAPI_h_29_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHelperUpdateExperiment); \
	DECLARE_FUNCTION(execUpdateExperiment); \
	DECLARE_FUNCTION(execHelperUpdateExclusionGroup); \
	DECLARE_FUNCTION(execUpdateExclusionGroup); \
	DECLARE_FUNCTION(execHelperStopExperiment); \
	DECLARE_FUNCTION(execStopExperiment); \
	DECLARE_FUNCTION(execHelperStartExperiment); \
	DECLARE_FUNCTION(execStartExperiment); \
	DECLARE_FUNCTION(execHelperGetTreatmentAssignment); \
	DECLARE_FUNCTION(execGetTreatmentAssignment); \
	DECLARE_FUNCTION(execHelperGetLatestScorecard); \
	DECLARE_FUNCTION(execGetLatestScorecard); \
	DECLARE_FUNCTION(execHelperGetExperiments); \
	DECLARE_FUNCTION(execGetExperiments); \
	DECLARE_FUNCTION(execHelperGetExclusionGroupTraffic); \
	DECLARE_FUNCTION(execGetExclusionGroupTraffic); \
	DECLARE_FUNCTION(execHelperGetExclusionGroups); \
	DECLARE_FUNCTION(execGetExclusionGroups); \
	DECLARE_FUNCTION(execHelperDeleteExperiment); \
	DECLARE_FUNCTION(execDeleteExperiment); \
	DECLARE_FUNCTION(execHelperDeleteExclusionGroup); \
	DECLARE_FUNCTION(execDeleteExclusionGroup); \
	DECLARE_FUNCTION(execHelperCreateExperiment); \
	DECLARE_FUNCTION(execCreateExperiment); \
	DECLARE_FUNCTION(execHelperCreateExclusionGroup); \
	DECLARE_FUNCTION(execCreateExclusionGroup);


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabExperimentationAPI_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHelperUpdateExperiment); \
	DECLARE_FUNCTION(execUpdateExperiment); \
	DECLARE_FUNCTION(execHelperUpdateExclusionGroup); \
	DECLARE_FUNCTION(execUpdateExclusionGroup); \
	DECLARE_FUNCTION(execHelperStopExperiment); \
	DECLARE_FUNCTION(execStopExperiment); \
	DECLARE_FUNCTION(execHelperStartExperiment); \
	DECLARE_FUNCTION(execStartExperiment); \
	DECLARE_FUNCTION(execHelperGetTreatmentAssignment); \
	DECLARE_FUNCTION(execGetTreatmentAssignment); \
	DECLARE_FUNCTION(execHelperGetLatestScorecard); \
	DECLARE_FUNCTION(execGetLatestScorecard); \
	DECLARE_FUNCTION(execHelperGetExperiments); \
	DECLARE_FUNCTION(execGetExperiments); \
	DECLARE_FUNCTION(execHelperGetExclusionGroupTraffic); \
	DECLARE_FUNCTION(execGetExclusionGroupTraffic); \
	DECLARE_FUNCTION(execHelperGetExclusionGroups); \
	DECLARE_FUNCTION(execGetExclusionGroups); \
	DECLARE_FUNCTION(execHelperDeleteExperiment); \
	DECLARE_FUNCTION(execDeleteExperiment); \
	DECLARE_FUNCTION(execHelperDeleteExclusionGroup); \
	DECLARE_FUNCTION(execDeleteExclusionGroup); \
	DECLARE_FUNCTION(execHelperCreateExperiment); \
	DECLARE_FUNCTION(execCreateExperiment); \
	DECLARE_FUNCTION(execHelperCreateExclusionGroup); \
	DECLARE_FUNCTION(execCreateExclusionGroup);


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabExperimentationAPI_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlayFabExperimentationAPI(); \
	friend struct Z_Construct_UClass_UPlayFabExperimentationAPI_Statics; \
public: \
	DECLARE_CLASS(UPlayFabExperimentationAPI, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PlayFab"), NO_API) \
	DECLARE_SERIALIZER(UPlayFabExperimentationAPI)


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabExperimentationAPI_h_29_INCLASS \
private: \
	static void StaticRegisterNativesUPlayFabExperimentationAPI(); \
	friend struct Z_Construct_UClass_UPlayFabExperimentationAPI_Statics; \
public: \
	DECLARE_CLASS(UPlayFabExperimentationAPI, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PlayFab"), NO_API) \
	DECLARE_SERIALIZER(UPlayFabExperimentationAPI)


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabExperimentationAPI_h_29_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayFabExperimentationAPI(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayFabExperimentationAPI) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayFabExperimentationAPI); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayFabExperimentationAPI); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayFabExperimentationAPI(UPlayFabExperimentationAPI&&); \
	NO_API UPlayFabExperimentationAPI(const UPlayFabExperimentationAPI&); \
public:


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabExperimentationAPI_h_29_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayFabExperimentationAPI(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayFabExperimentationAPI(UPlayFabExperimentationAPI&&); \
	NO_API UPlayFabExperimentationAPI(const UPlayFabExperimentationAPI&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayFabExperimentationAPI); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayFabExperimentationAPI); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayFabExperimentationAPI)


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabExperimentationAPI_h_29_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CallAuthenticationContext() { return STRUCT_OFFSET(UPlayFabExperimentationAPI, CallAuthenticationContext); } \
	FORCEINLINE static uint32 __PPO__RequestJsonObj() { return STRUCT_OFFSET(UPlayFabExperimentationAPI, RequestJsonObj); } \
	FORCEINLINE static uint32 __PPO__ResponseJsonObj() { return STRUCT_OFFSET(UPlayFabExperimentationAPI, ResponseJsonObj); }


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabExperimentationAPI_h_26_PROLOG
#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabExperimentationAPI_h_29_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabExperimentationAPI_h_29_PRIVATE_PROPERTY_OFFSET \
	UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabExperimentationAPI_h_29_SPARSE_DATA \
	UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabExperimentationAPI_h_29_RPC_WRAPPERS \
	UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabExperimentationAPI_h_29_INCLASS \
	UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabExperimentationAPI_h_29_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabExperimentationAPI_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabExperimentationAPI_h_29_PRIVATE_PROPERTY_OFFSET \
	UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabExperimentationAPI_h_29_SPARSE_DATA \
	UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabExperimentationAPI_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabExperimentationAPI_h_29_INCLASS_NO_PURE_DECLS \
	UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabExperimentationAPI_h_29_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class PlayFabExperimentationAPI."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PLAYFAB_API UClass* StaticClass<class UPlayFabExperimentationAPI>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabExperimentationAPI_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
