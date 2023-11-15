// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FDataSetObjectsResponse;
class UObject;
struct FDataGetObjectsResponse;
struct FDataInitiateFileUploadsResponse;
struct FDataGetFilesResponse;
struct FDataFinalizeFileUploadsResponse;
struct FDataDeleteFilesResponse;
struct FDataAbortFileUploadsResponse;
struct FPlayFabError;
struct FPlayFabBaseModel;
struct FDataSetObjectsRequest;
class UPlayFabDataAPI;
struct FDataGetObjectsRequest;
struct FDataInitiateFileUploadsRequest;
struct FDataGetFilesRequest;
struct FDataFinalizeFileUploadsRequest;
struct FDataDeleteFilesRequest;
struct FDataAbortFileUploadsRequest;
#ifdef PLAYFAB_PlayFabDataAPI_generated_h
#error "PlayFabDataAPI.generated.h already included, missing '#pragma once' in PlayFabDataAPI.h"
#endif
#define PLAYFAB_PlayFabDataAPI_generated_h

#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabDataAPI_h_144_DELEGATE \
struct PlayFabDataAPI_eventDelegateOnSuccessSetObjects_Parms \
{ \
	FDataSetObjectsResponse result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessSetObjects_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessSetObjects, FDataSetObjectsResponse result, UObject* customData) \
{ \
	PlayFabDataAPI_eventDelegateOnSuccessSetObjects_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessSetObjects.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabDataAPI_h_131_DELEGATE \
struct PlayFabDataAPI_eventDelegateOnSuccessGetObjects_Parms \
{ \
	FDataGetObjectsResponse result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetObjects_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetObjects, FDataGetObjectsResponse result, UObject* customData) \
{ \
	PlayFabDataAPI_eventDelegateOnSuccessGetObjects_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetObjects.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabDataAPI_h_114_DELEGATE \
struct PlayFabDataAPI_eventDelegateOnSuccessInitiateFileUploads_Parms \
{ \
	FDataInitiateFileUploadsResponse result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessInitiateFileUploads_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessInitiateFileUploads, FDataInitiateFileUploadsResponse result, UObject* customData) \
{ \
	PlayFabDataAPI_eventDelegateOnSuccessInitiateFileUploads_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessInitiateFileUploads.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabDataAPI_h_101_DELEGATE \
struct PlayFabDataAPI_eventDelegateOnSuccessGetFiles_Parms \
{ \
	FDataGetFilesResponse result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetFiles_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetFiles, FDataGetFilesResponse result, UObject* customData) \
{ \
	PlayFabDataAPI_eventDelegateOnSuccessGetFiles_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetFiles.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabDataAPI_h_88_DELEGATE \
struct PlayFabDataAPI_eventDelegateOnSuccessFinalizeFileUploads_Parms \
{ \
	FDataFinalizeFileUploadsResponse result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessFinalizeFileUploads_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessFinalizeFileUploads, FDataFinalizeFileUploadsResponse result, UObject* customData) \
{ \
	PlayFabDataAPI_eventDelegateOnSuccessFinalizeFileUploads_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessFinalizeFileUploads.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabDataAPI_h_75_DELEGATE \
struct PlayFabDataAPI_eventDelegateOnSuccessDeleteFiles_Parms \
{ \
	FDataDeleteFilesResponse result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessDeleteFiles_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessDeleteFiles, FDataDeleteFilesResponse result, UObject* customData) \
{ \
	PlayFabDataAPI_eventDelegateOnSuccessDeleteFiles_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessDeleteFiles.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabDataAPI_h_62_DELEGATE \
struct PlayFabDataAPI_eventDelegateOnSuccessAbortFileUploads_Parms \
{ \
	FDataAbortFileUploadsResponse result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessAbortFileUploads_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessAbortFileUploads, FDataAbortFileUploadsResponse result, UObject* customData) \
{ \
	PlayFabDataAPI_eventDelegateOnSuccessAbortFileUploads_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessAbortFileUploads.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabDataAPI_h_32_DELEGATE \
struct PlayFabDataAPI_eventDelegateOnFailurePlayFabError_Parms \
{ \
	FPlayFabError error; \
	UObject* customData; \
}; \
static inline void FDelegateOnFailurePlayFabError_DelegateWrapper(const FScriptDelegate& DelegateOnFailurePlayFabError, FPlayFabError error, UObject* customData) \
{ \
	PlayFabDataAPI_eventDelegateOnFailurePlayFabError_Parms Parms; \
	Parms.error=error; \
	Parms.customData=customData; \
	DelegateOnFailurePlayFabError.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabDataAPI_h_24_DELEGATE \
struct _Script_PlayFab_eventOnPlayFabDataRequestCompleted_Parms \
{ \
	FPlayFabBaseModel response; \
	UObject* customData; \
	bool successful; \
}; \
static inline void FOnPlayFabDataRequestCompleted_DelegateWrapper(const FMulticastScriptDelegate& OnPlayFabDataRequestCompleted, FPlayFabBaseModel response, UObject* customData, bool successful) \
{ \
	_Script_PlayFab_eventOnPlayFabDataRequestCompleted_Parms Parms; \
	Parms.response=response; \
	Parms.customData=customData; \
	Parms.successful=successful ? true : false; \
	OnPlayFabDataRequestCompleted.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabDataAPI_h_29_SPARSE_DATA
#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabDataAPI_h_29_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHelperSetObjects); \
	DECLARE_FUNCTION(execSetObjects); \
	DECLARE_FUNCTION(execHelperGetObjects); \
	DECLARE_FUNCTION(execGetObjects); \
	DECLARE_FUNCTION(execHelperInitiateFileUploads); \
	DECLARE_FUNCTION(execInitiateFileUploads); \
	DECLARE_FUNCTION(execHelperGetFiles); \
	DECLARE_FUNCTION(execGetFiles); \
	DECLARE_FUNCTION(execHelperFinalizeFileUploads); \
	DECLARE_FUNCTION(execFinalizeFileUploads); \
	DECLARE_FUNCTION(execHelperDeleteFiles); \
	DECLARE_FUNCTION(execDeleteFiles); \
	DECLARE_FUNCTION(execHelperAbortFileUploads); \
	DECLARE_FUNCTION(execAbortFileUploads);


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabDataAPI_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHelperSetObjects); \
	DECLARE_FUNCTION(execSetObjects); \
	DECLARE_FUNCTION(execHelperGetObjects); \
	DECLARE_FUNCTION(execGetObjects); \
	DECLARE_FUNCTION(execHelperInitiateFileUploads); \
	DECLARE_FUNCTION(execInitiateFileUploads); \
	DECLARE_FUNCTION(execHelperGetFiles); \
	DECLARE_FUNCTION(execGetFiles); \
	DECLARE_FUNCTION(execHelperFinalizeFileUploads); \
	DECLARE_FUNCTION(execFinalizeFileUploads); \
	DECLARE_FUNCTION(execHelperDeleteFiles); \
	DECLARE_FUNCTION(execDeleteFiles); \
	DECLARE_FUNCTION(execHelperAbortFileUploads); \
	DECLARE_FUNCTION(execAbortFileUploads);


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabDataAPI_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlayFabDataAPI(); \
	friend struct Z_Construct_UClass_UPlayFabDataAPI_Statics; \
public: \
	DECLARE_CLASS(UPlayFabDataAPI, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PlayFab"), NO_API) \
	DECLARE_SERIALIZER(UPlayFabDataAPI)


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabDataAPI_h_29_INCLASS \
private: \
	static void StaticRegisterNativesUPlayFabDataAPI(); \
	friend struct Z_Construct_UClass_UPlayFabDataAPI_Statics; \
public: \
	DECLARE_CLASS(UPlayFabDataAPI, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PlayFab"), NO_API) \
	DECLARE_SERIALIZER(UPlayFabDataAPI)


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabDataAPI_h_29_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayFabDataAPI(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayFabDataAPI) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayFabDataAPI); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayFabDataAPI); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayFabDataAPI(UPlayFabDataAPI&&); \
	NO_API UPlayFabDataAPI(const UPlayFabDataAPI&); \
public:


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabDataAPI_h_29_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayFabDataAPI(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayFabDataAPI(UPlayFabDataAPI&&); \
	NO_API UPlayFabDataAPI(const UPlayFabDataAPI&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayFabDataAPI); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayFabDataAPI); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayFabDataAPI)


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabDataAPI_h_29_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CallAuthenticationContext() { return STRUCT_OFFSET(UPlayFabDataAPI, CallAuthenticationContext); } \
	FORCEINLINE static uint32 __PPO__RequestJsonObj() { return STRUCT_OFFSET(UPlayFabDataAPI, RequestJsonObj); } \
	FORCEINLINE static uint32 __PPO__ResponseJsonObj() { return STRUCT_OFFSET(UPlayFabDataAPI, ResponseJsonObj); }


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabDataAPI_h_26_PROLOG
#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabDataAPI_h_29_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabDataAPI_h_29_PRIVATE_PROPERTY_OFFSET \
	UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabDataAPI_h_29_SPARSE_DATA \
	UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabDataAPI_h_29_RPC_WRAPPERS \
	UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabDataAPI_h_29_INCLASS \
	UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabDataAPI_h_29_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabDataAPI_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabDataAPI_h_29_PRIVATE_PROPERTY_OFFSET \
	UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabDataAPI_h_29_SPARSE_DATA \
	UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabDataAPI_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabDataAPI_h_29_INCLASS_NO_PURE_DECLS \
	UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabDataAPI_h_29_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class PlayFabDataAPI."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PLAYFAB_API UClass* StaticClass<class UPlayFabDataAPI>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabDataAPI_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
