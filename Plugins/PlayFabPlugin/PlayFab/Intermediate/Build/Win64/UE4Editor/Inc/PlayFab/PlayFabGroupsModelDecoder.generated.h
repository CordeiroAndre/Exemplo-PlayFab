// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPlayFabJsonObject;
struct FGroupsUpdateGroupRoleResponse;
struct FGroupsUpdateGroupResponse;
struct FGroupsListMembershipOpportunitiesResponse;
struct FGroupsListMembershipResponse;
struct FGroupsListGroupMembersResponse;
struct FGroupsListGroupInvitationsResponse;
struct FGroupsListGroupBlocksResponse;
struct FGroupsListGroupApplicationsResponse;
struct FGroupsIsMemberResponse;
struct FGroupsInviteToGroupResponse;
struct FGroupsGetGroupResponse;
struct FGroupsCreateGroupRoleResponse;
struct FGroupsCreateGroupResponse;
struct FGroupsApplyToGroupResponse;
struct FGroupsEmptyResponse;
#ifdef PLAYFAB_PlayFabGroupsModelDecoder_generated_h
#error "PlayFabGroupsModelDecoder.generated.h already included, missing '#pragma once' in PlayFabGroupsModelDecoder.h"
#endif
#define PLAYFAB_PlayFabGroupsModelDecoder_generated_h

#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabGroupsModelDecoder_h_26_SPARSE_DATA
#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabGroupsModelDecoder_h_26_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execdecodeUpdateGroupRoleResponseResponse); \
	DECLARE_FUNCTION(execdecodeUpdateGroupResponseResponse); \
	DECLARE_FUNCTION(execdecodeListMembershipOpportunitiesResponseResponse); \
	DECLARE_FUNCTION(execdecodeListMembershipResponseResponse); \
	DECLARE_FUNCTION(execdecodeListGroupMembersResponseResponse); \
	DECLARE_FUNCTION(execdecodeListGroupInvitationsResponseResponse); \
	DECLARE_FUNCTION(execdecodeListGroupBlocksResponseResponse); \
	DECLARE_FUNCTION(execdecodeListGroupApplicationsResponseResponse); \
	DECLARE_FUNCTION(execdecodeIsMemberResponseResponse); \
	DECLARE_FUNCTION(execdecodeInviteToGroupResponseResponse); \
	DECLARE_FUNCTION(execdecodeGetGroupResponseResponse); \
	DECLARE_FUNCTION(execdecodeCreateGroupRoleResponseResponse); \
	DECLARE_FUNCTION(execdecodeCreateGroupResponseResponse); \
	DECLARE_FUNCTION(execdecodeApplyToGroupResponseResponse); \
	DECLARE_FUNCTION(execdecodeEmptyResponseResponse);


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabGroupsModelDecoder_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execdecodeUpdateGroupRoleResponseResponse); \
	DECLARE_FUNCTION(execdecodeUpdateGroupResponseResponse); \
	DECLARE_FUNCTION(execdecodeListMembershipOpportunitiesResponseResponse); \
	DECLARE_FUNCTION(execdecodeListMembershipResponseResponse); \
	DECLARE_FUNCTION(execdecodeListGroupMembersResponseResponse); \
	DECLARE_FUNCTION(execdecodeListGroupInvitationsResponseResponse); \
	DECLARE_FUNCTION(execdecodeListGroupBlocksResponseResponse); \
	DECLARE_FUNCTION(execdecodeListGroupApplicationsResponseResponse); \
	DECLARE_FUNCTION(execdecodeIsMemberResponseResponse); \
	DECLARE_FUNCTION(execdecodeInviteToGroupResponseResponse); \
	DECLARE_FUNCTION(execdecodeGetGroupResponseResponse); \
	DECLARE_FUNCTION(execdecodeCreateGroupRoleResponseResponse); \
	DECLARE_FUNCTION(execdecodeCreateGroupResponseResponse); \
	DECLARE_FUNCTION(execdecodeApplyToGroupResponseResponse); \
	DECLARE_FUNCTION(execdecodeEmptyResponseResponse);


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabGroupsModelDecoder_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlayFabGroupsModelDecoder(); \
	friend struct Z_Construct_UClass_UPlayFabGroupsModelDecoder_Statics; \
public: \
	DECLARE_CLASS(UPlayFabGroupsModelDecoder, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PlayFab"), NO_API) \
	DECLARE_SERIALIZER(UPlayFabGroupsModelDecoder)


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabGroupsModelDecoder_h_26_INCLASS \
private: \
	static void StaticRegisterNativesUPlayFabGroupsModelDecoder(); \
	friend struct Z_Construct_UClass_UPlayFabGroupsModelDecoder_Statics; \
public: \
	DECLARE_CLASS(UPlayFabGroupsModelDecoder, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PlayFab"), NO_API) \
	DECLARE_SERIALIZER(UPlayFabGroupsModelDecoder)


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabGroupsModelDecoder_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayFabGroupsModelDecoder(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayFabGroupsModelDecoder) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayFabGroupsModelDecoder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayFabGroupsModelDecoder); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayFabGroupsModelDecoder(UPlayFabGroupsModelDecoder&&); \
	NO_API UPlayFabGroupsModelDecoder(const UPlayFabGroupsModelDecoder&); \
public:


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabGroupsModelDecoder_h_26_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayFabGroupsModelDecoder(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayFabGroupsModelDecoder(UPlayFabGroupsModelDecoder&&); \
	NO_API UPlayFabGroupsModelDecoder(const UPlayFabGroupsModelDecoder&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayFabGroupsModelDecoder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayFabGroupsModelDecoder); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayFabGroupsModelDecoder)


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabGroupsModelDecoder_h_26_PRIVATE_PROPERTY_OFFSET
#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabGroupsModelDecoder_h_23_PROLOG
#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabGroupsModelDecoder_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabGroupsModelDecoder_h_26_PRIVATE_PROPERTY_OFFSET \
	UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabGroupsModelDecoder_h_26_SPARSE_DATA \
	UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabGroupsModelDecoder_h_26_RPC_WRAPPERS \
	UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabGroupsModelDecoder_h_26_INCLASS \
	UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabGroupsModelDecoder_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabGroupsModelDecoder_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabGroupsModelDecoder_h_26_PRIVATE_PROPERTY_OFFSET \
	UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabGroupsModelDecoder_h_26_SPARSE_DATA \
	UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabGroupsModelDecoder_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabGroupsModelDecoder_h_26_INCLASS_NO_PURE_DECLS \
	UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabGroupsModelDecoder_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PLAYFAB_API UClass* StaticClass<class UPlayFabGroupsModelDecoder>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabGroupsModelDecoder_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
