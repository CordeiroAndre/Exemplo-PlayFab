// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FCloudScriptEmptyResult;
class UObject;
struct FCloudScriptListQueuedFunctionsResult;
struct FCloudScriptListHttpFunctionsResult;
struct FCloudScriptListFunctionsResult;
struct FCloudScriptGetFunctionResult;
struct FCloudScriptExecuteFunctionResult;
struct FCloudScriptExecuteCloudScriptResult;
struct FPlayFabError;
struct FPlayFabBaseModel;
struct FCloudScriptUnregisterFunctionRequest;
class UPlayFabCloudScriptAPI;
struct FCloudScriptRegisterQueuedFunctionRequest;
struct FCloudScriptRegisterHttpFunctionRequest;
struct FCloudScriptPostFunctionResultForScheduledTaskRequest;
struct FCloudScriptPostFunctionResultForPlayerTriggeredActionRequest;
struct FCloudScriptPostFunctionResultForFunctionExecutionRequest;
struct FCloudScriptPostFunctionResultForEntityTriggeredActionRequest;
struct FCloudScriptListFunctionsRequest;
struct FCloudScriptGetFunctionRequest;
struct FCloudScriptExecuteFunctionRequest;
struct FCloudScriptExecuteEntityCloudScriptRequest;
#ifdef PLAYFAB_PlayFabCloudScriptAPI_generated_h
#error "PlayFabCloudScriptAPI.generated.h already included, missing '#pragma once' in PlayFabCloudScriptAPI.h"
#endif
#define PLAYFAB_PlayFabCloudScriptAPI_generated_h

#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabCloudScriptAPI_h_224_DELEGATE \
struct PlayFabCloudScriptAPI_eventDelegateOnSuccessUnregisterFunction_Parms \
{ \
	FCloudScriptEmptyResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessUnregisterFunction_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessUnregisterFunction, FCloudScriptEmptyResult result, UObject* customData) \
{ \
	PlayFabCloudScriptAPI_eventDelegateOnSuccessUnregisterFunction_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessUnregisterFunction.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabCloudScriptAPI_h_211_DELEGATE \
struct PlayFabCloudScriptAPI_eventDelegateOnSuccessRegisterQueuedFunction_Parms \
{ \
	FCloudScriptEmptyResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessRegisterQueuedFunction_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessRegisterQueuedFunction, FCloudScriptEmptyResult result, UObject* customData) \
{ \
	PlayFabCloudScriptAPI_eventDelegateOnSuccessRegisterQueuedFunction_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessRegisterQueuedFunction.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabCloudScriptAPI_h_198_DELEGATE \
struct PlayFabCloudScriptAPI_eventDelegateOnSuccessRegisterHttpFunction_Parms \
{ \
	FCloudScriptEmptyResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessRegisterHttpFunction_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessRegisterHttpFunction, FCloudScriptEmptyResult result, UObject* customData) \
{ \
	PlayFabCloudScriptAPI_eventDelegateOnSuccessRegisterHttpFunction_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessRegisterHttpFunction.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabCloudScriptAPI_h_185_DELEGATE \
struct PlayFabCloudScriptAPI_eventDelegateOnSuccessPostFunctionResultForScheduledTask_Parms \
{ \
	FCloudScriptEmptyResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessPostFunctionResultForScheduledTask_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessPostFunctionResultForScheduledTask, FCloudScriptEmptyResult result, UObject* customData) \
{ \
	PlayFabCloudScriptAPI_eventDelegateOnSuccessPostFunctionResultForScheduledTask_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessPostFunctionResultForScheduledTask.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabCloudScriptAPI_h_172_DELEGATE \
struct PlayFabCloudScriptAPI_eventDelegateOnSuccessPostFunctionResultForPlayerTriggeredAction_Parms \
{ \
	FCloudScriptEmptyResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessPostFunctionResultForPlayerTriggeredAction_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessPostFunctionResultForPlayerTriggeredAction, FCloudScriptEmptyResult result, UObject* customData) \
{ \
	PlayFabCloudScriptAPI_eventDelegateOnSuccessPostFunctionResultForPlayerTriggeredAction_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessPostFunctionResultForPlayerTriggeredAction.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabCloudScriptAPI_h_159_DELEGATE \
struct PlayFabCloudScriptAPI_eventDelegateOnSuccessPostFunctionResultForFunctionExecution_Parms \
{ \
	FCloudScriptEmptyResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessPostFunctionResultForFunctionExecution_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessPostFunctionResultForFunctionExecution, FCloudScriptEmptyResult result, UObject* customData) \
{ \
	PlayFabCloudScriptAPI_eventDelegateOnSuccessPostFunctionResultForFunctionExecution_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessPostFunctionResultForFunctionExecution.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabCloudScriptAPI_h_146_DELEGATE \
struct PlayFabCloudScriptAPI_eventDelegateOnSuccessPostFunctionResultForEntityTriggeredAction_Parms \
{ \
	FCloudScriptEmptyResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessPostFunctionResultForEntityTriggeredAction_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessPostFunctionResultForEntityTriggeredAction, FCloudScriptEmptyResult result, UObject* customData) \
{ \
	PlayFabCloudScriptAPI_eventDelegateOnSuccessPostFunctionResultForEntityTriggeredAction_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessPostFunctionResultForEntityTriggeredAction.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabCloudScriptAPI_h_133_DELEGATE \
struct PlayFabCloudScriptAPI_eventDelegateOnSuccessListQueuedFunctions_Parms \
{ \
	FCloudScriptListQueuedFunctionsResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessListQueuedFunctions_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessListQueuedFunctions, FCloudScriptListQueuedFunctionsResult result, UObject* customData) \
{ \
	PlayFabCloudScriptAPI_eventDelegateOnSuccessListQueuedFunctions_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessListQueuedFunctions.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabCloudScriptAPI_h_120_DELEGATE \
struct PlayFabCloudScriptAPI_eventDelegateOnSuccessListHttpFunctions_Parms \
{ \
	FCloudScriptListHttpFunctionsResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessListHttpFunctions_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessListHttpFunctions, FCloudScriptListHttpFunctionsResult result, UObject* customData) \
{ \
	PlayFabCloudScriptAPI_eventDelegateOnSuccessListHttpFunctions_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessListHttpFunctions.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabCloudScriptAPI_h_107_DELEGATE \
struct PlayFabCloudScriptAPI_eventDelegateOnSuccessListFunctions_Parms \
{ \
	FCloudScriptListFunctionsResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessListFunctions_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessListFunctions, FCloudScriptListFunctionsResult result, UObject* customData) \
{ \
	PlayFabCloudScriptAPI_eventDelegateOnSuccessListFunctions_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessListFunctions.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabCloudScriptAPI_h_94_DELEGATE \
struct PlayFabCloudScriptAPI_eventDelegateOnSuccessGetFunction_Parms \
{ \
	FCloudScriptGetFunctionResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetFunction_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetFunction, FCloudScriptGetFunctionResult result, UObject* customData) \
{ \
	PlayFabCloudScriptAPI_eventDelegateOnSuccessGetFunction_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetFunction.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabCloudScriptAPI_h_78_DELEGATE \
struct PlayFabCloudScriptAPI_eventDelegateOnSuccessExecuteFunction_Parms \
{ \
	FCloudScriptExecuteFunctionResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessExecuteFunction_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessExecuteFunction, FCloudScriptExecuteFunctionResult result, UObject* customData) \
{ \
	PlayFabCloudScriptAPI_eventDelegateOnSuccessExecuteFunction_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessExecuteFunction.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabCloudScriptAPI_h_62_DELEGATE \
struct PlayFabCloudScriptAPI_eventDelegateOnSuccessExecuteEntityCloudScript_Parms \
{ \
	FCloudScriptExecuteCloudScriptResult result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessExecuteEntityCloudScript_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessExecuteEntityCloudScript, FCloudScriptExecuteCloudScriptResult result, UObject* customData) \
{ \
	PlayFabCloudScriptAPI_eventDelegateOnSuccessExecuteEntityCloudScript_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessExecuteEntityCloudScript.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabCloudScriptAPI_h_32_DELEGATE \
struct PlayFabCloudScriptAPI_eventDelegateOnFailurePlayFabError_Parms \
{ \
	FPlayFabError error; \
	UObject* customData; \
}; \
static inline void FDelegateOnFailurePlayFabError_DelegateWrapper(const FScriptDelegate& DelegateOnFailurePlayFabError, FPlayFabError error, UObject* customData) \
{ \
	PlayFabCloudScriptAPI_eventDelegateOnFailurePlayFabError_Parms Parms; \
	Parms.error=error; \
	Parms.customData=customData; \
	DelegateOnFailurePlayFabError.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabCloudScriptAPI_h_24_DELEGATE \
struct _Script_PlayFab_eventOnPlayFabCloudScriptRequestCompleted_Parms \
{ \
	FPlayFabBaseModel response; \
	UObject* customData; \
	bool successful; \
}; \
static inline void FOnPlayFabCloudScriptRequestCompleted_DelegateWrapper(const FMulticastScriptDelegate& OnPlayFabCloudScriptRequestCompleted, FPlayFabBaseModel response, UObject* customData, bool successful) \
{ \
	_Script_PlayFab_eventOnPlayFabCloudScriptRequestCompleted_Parms Parms; \
	Parms.response=response; \
	Parms.customData=customData; \
	Parms.successful=successful ? true : false; \
	OnPlayFabCloudScriptRequestCompleted.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabCloudScriptAPI_h_29_SPARSE_DATA
#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabCloudScriptAPI_h_29_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHelperUnregisterFunction); \
	DECLARE_FUNCTION(execUnregisterFunction); \
	DECLARE_FUNCTION(execHelperRegisterQueuedFunction); \
	DECLARE_FUNCTION(execRegisterQueuedFunction); \
	DECLARE_FUNCTION(execHelperRegisterHttpFunction); \
	DECLARE_FUNCTION(execRegisterHttpFunction); \
	DECLARE_FUNCTION(execHelperPostFunctionResultForScheduledTask); \
	DECLARE_FUNCTION(execPostFunctionResultForScheduledTask); \
	DECLARE_FUNCTION(execHelperPostFunctionResultForPlayerTriggeredAction); \
	DECLARE_FUNCTION(execPostFunctionResultForPlayerTriggeredAction); \
	DECLARE_FUNCTION(execHelperPostFunctionResultForFunctionExecution); \
	DECLARE_FUNCTION(execPostFunctionResultForFunctionExecution); \
	DECLARE_FUNCTION(execHelperPostFunctionResultForEntityTriggeredAction); \
	DECLARE_FUNCTION(execPostFunctionResultForEntityTriggeredAction); \
	DECLARE_FUNCTION(execHelperListQueuedFunctions); \
	DECLARE_FUNCTION(execListQueuedFunctions); \
	DECLARE_FUNCTION(execHelperListHttpFunctions); \
	DECLARE_FUNCTION(execListHttpFunctions); \
	DECLARE_FUNCTION(execHelperListFunctions); \
	DECLARE_FUNCTION(execListFunctions); \
	DECLARE_FUNCTION(execHelperGetFunction); \
	DECLARE_FUNCTION(execGetFunction); \
	DECLARE_FUNCTION(execHelperExecuteFunction); \
	DECLARE_FUNCTION(execExecuteFunction); \
	DECLARE_FUNCTION(execHelperExecuteEntityCloudScript); \
	DECLARE_FUNCTION(execExecuteEntityCloudScript);


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabCloudScriptAPI_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHelperUnregisterFunction); \
	DECLARE_FUNCTION(execUnregisterFunction); \
	DECLARE_FUNCTION(execHelperRegisterQueuedFunction); \
	DECLARE_FUNCTION(execRegisterQueuedFunction); \
	DECLARE_FUNCTION(execHelperRegisterHttpFunction); \
	DECLARE_FUNCTION(execRegisterHttpFunction); \
	DECLARE_FUNCTION(execHelperPostFunctionResultForScheduledTask); \
	DECLARE_FUNCTION(execPostFunctionResultForScheduledTask); \
	DECLARE_FUNCTION(execHelperPostFunctionResultForPlayerTriggeredAction); \
	DECLARE_FUNCTION(execPostFunctionResultForPlayerTriggeredAction); \
	DECLARE_FUNCTION(execHelperPostFunctionResultForFunctionExecution); \
	DECLARE_FUNCTION(execPostFunctionResultForFunctionExecution); \
	DECLARE_FUNCTION(execHelperPostFunctionResultForEntityTriggeredAction); \
	DECLARE_FUNCTION(execPostFunctionResultForEntityTriggeredAction); \
	DECLARE_FUNCTION(execHelperListQueuedFunctions); \
	DECLARE_FUNCTION(execListQueuedFunctions); \
	DECLARE_FUNCTION(execHelperListHttpFunctions); \
	DECLARE_FUNCTION(execListHttpFunctions); \
	DECLARE_FUNCTION(execHelperListFunctions); \
	DECLARE_FUNCTION(execListFunctions); \
	DECLARE_FUNCTION(execHelperGetFunction); \
	DECLARE_FUNCTION(execGetFunction); \
	DECLARE_FUNCTION(execHelperExecuteFunction); \
	DECLARE_FUNCTION(execExecuteFunction); \
	DECLARE_FUNCTION(execHelperExecuteEntityCloudScript); \
	DECLARE_FUNCTION(execExecuteEntityCloudScript);


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabCloudScriptAPI_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlayFabCloudScriptAPI(); \
	friend struct Z_Construct_UClass_UPlayFabCloudScriptAPI_Statics; \
public: \
	DECLARE_CLASS(UPlayFabCloudScriptAPI, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PlayFab"), NO_API) \
	DECLARE_SERIALIZER(UPlayFabCloudScriptAPI)


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabCloudScriptAPI_h_29_INCLASS \
private: \
	static void StaticRegisterNativesUPlayFabCloudScriptAPI(); \
	friend struct Z_Construct_UClass_UPlayFabCloudScriptAPI_Statics; \
public: \
	DECLARE_CLASS(UPlayFabCloudScriptAPI, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PlayFab"), NO_API) \
	DECLARE_SERIALIZER(UPlayFabCloudScriptAPI)


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabCloudScriptAPI_h_29_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayFabCloudScriptAPI(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayFabCloudScriptAPI) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayFabCloudScriptAPI); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayFabCloudScriptAPI); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayFabCloudScriptAPI(UPlayFabCloudScriptAPI&&); \
	NO_API UPlayFabCloudScriptAPI(const UPlayFabCloudScriptAPI&); \
public:


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabCloudScriptAPI_h_29_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayFabCloudScriptAPI(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayFabCloudScriptAPI(UPlayFabCloudScriptAPI&&); \
	NO_API UPlayFabCloudScriptAPI(const UPlayFabCloudScriptAPI&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayFabCloudScriptAPI); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayFabCloudScriptAPI); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayFabCloudScriptAPI)


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabCloudScriptAPI_h_29_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CallAuthenticationContext() { return STRUCT_OFFSET(UPlayFabCloudScriptAPI, CallAuthenticationContext); } \
	FORCEINLINE static uint32 __PPO__RequestJsonObj() { return STRUCT_OFFSET(UPlayFabCloudScriptAPI, RequestJsonObj); } \
	FORCEINLINE static uint32 __PPO__ResponseJsonObj() { return STRUCT_OFFSET(UPlayFabCloudScriptAPI, ResponseJsonObj); }


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabCloudScriptAPI_h_26_PROLOG
#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabCloudScriptAPI_h_29_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabCloudScriptAPI_h_29_PRIVATE_PROPERTY_OFFSET \
	UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabCloudScriptAPI_h_29_SPARSE_DATA \
	UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabCloudScriptAPI_h_29_RPC_WRAPPERS \
	UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabCloudScriptAPI_h_29_INCLASS \
	UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabCloudScriptAPI_h_29_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabCloudScriptAPI_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabCloudScriptAPI_h_29_PRIVATE_PROPERTY_OFFSET \
	UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabCloudScriptAPI_h_29_SPARSE_DATA \
	UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabCloudScriptAPI_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabCloudScriptAPI_h_29_INCLASS_NO_PURE_DECLS \
	UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabCloudScriptAPI_h_29_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class PlayFabCloudScriptAPI."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PLAYFAB_API UClass* StaticClass<class UPlayFabCloudScriptAPI>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabCloudScriptAPI_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
