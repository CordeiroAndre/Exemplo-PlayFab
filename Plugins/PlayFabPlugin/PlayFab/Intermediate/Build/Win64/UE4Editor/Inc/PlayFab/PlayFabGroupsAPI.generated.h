// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGroupsUpdateGroupRoleResponse;
class UObject;
struct FGroupsUpdateGroupResponse;
struct FGroupsEmptyResponse;
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
struct FPlayFabError;
struct FPlayFabBaseModel;
struct FGroupsUpdateGroupRoleRequest;
class UPlayFabGroupsAPI;
struct FGroupsUpdateGroupRequest;
struct FGroupsUnblockEntityRequest;
struct FGroupsRemoveMembersRequest;
struct FGroupsRemoveGroupInvitationRequest;
struct FGroupsRemoveGroupApplicationRequest;
struct FGroupsListMembershipOpportunitiesRequest;
struct FGroupsListMembershipRequest;
struct FGroupsListGroupMembersRequest;
struct FGroupsListGroupInvitationsRequest;
struct FGroupsListGroupBlocksRequest;
struct FGroupsListGroupApplicationsRequest;
struct FGroupsIsMemberRequest;
struct FGroupsInviteToGroupRequest;
struct FGroupsGetGroupRequest;
struct FGroupsDeleteRoleRequest;
struct FGroupsDeleteGroupRequest;
struct FGroupsCreateGroupRoleRequest;
struct FGroupsCreateGroupRequest;
struct FGroupsChangeMemberRoleRequest;
struct FGroupsBlockEntityRequest;
struct FGroupsApplyToGroupRequest;
struct FGroupsAddMembersRequest;
struct FGroupsAcceptGroupInvitationRequest;
struct FGroupsAcceptGroupApplicationRequest;
#ifdef PLAYFAB_PlayFabGroupsAPI_generated_h
#error "PlayFabGroupsAPI.generated.h already included, missing '#pragma once' in PlayFabGroupsAPI.h"
#endif
#define PLAYFAB_PlayFabGroupsAPI_generated_h

#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabGroupsAPI_h_374_DELEGATE \
struct PlayFabGroupsAPI_eventDelegateOnSuccessUpdateRole_Parms \
{ \
	FGroupsUpdateGroupRoleResponse result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessUpdateRole_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessUpdateRole, FGroupsUpdateGroupRoleResponse result, UObject* customData) \
{ \
	PlayFabGroupsAPI_eventDelegateOnSuccessUpdateRole_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessUpdateRole.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabGroupsAPI_h_361_DELEGATE \
struct PlayFabGroupsAPI_eventDelegateOnSuccessUpdateGroup_Parms \
{ \
	FGroupsUpdateGroupResponse result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessUpdateGroup_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessUpdateGroup, FGroupsUpdateGroupResponse result, UObject* customData) \
{ \
	PlayFabGroupsAPI_eventDelegateOnSuccessUpdateGroup_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessUpdateGroup.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabGroupsAPI_h_348_DELEGATE \
struct PlayFabGroupsAPI_eventDelegateOnSuccessUnblockEntity_Parms \
{ \
	FGroupsEmptyResponse result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessUnblockEntity_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessUnblockEntity, FGroupsEmptyResponse result, UObject* customData) \
{ \
	PlayFabGroupsAPI_eventDelegateOnSuccessUnblockEntity_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessUnblockEntity.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabGroupsAPI_h_335_DELEGATE \
struct PlayFabGroupsAPI_eventDelegateOnSuccessRemoveMembers_Parms \
{ \
	FGroupsEmptyResponse result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessRemoveMembers_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessRemoveMembers, FGroupsEmptyResponse result, UObject* customData) \
{ \
	PlayFabGroupsAPI_eventDelegateOnSuccessRemoveMembers_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessRemoveMembers.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabGroupsAPI_h_322_DELEGATE \
struct PlayFabGroupsAPI_eventDelegateOnSuccessRemoveGroupInvitation_Parms \
{ \
	FGroupsEmptyResponse result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessRemoveGroupInvitation_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessRemoveGroupInvitation, FGroupsEmptyResponse result, UObject* customData) \
{ \
	PlayFabGroupsAPI_eventDelegateOnSuccessRemoveGroupInvitation_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessRemoveGroupInvitation.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabGroupsAPI_h_309_DELEGATE \
struct PlayFabGroupsAPI_eventDelegateOnSuccessRemoveGroupApplication_Parms \
{ \
	FGroupsEmptyResponse result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessRemoveGroupApplication_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessRemoveGroupApplication, FGroupsEmptyResponse result, UObject* customData) \
{ \
	PlayFabGroupsAPI_eventDelegateOnSuccessRemoveGroupApplication_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessRemoveGroupApplication.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabGroupsAPI_h_296_DELEGATE \
struct PlayFabGroupsAPI_eventDelegateOnSuccessListMembershipOpportunities_Parms \
{ \
	FGroupsListMembershipOpportunitiesResponse result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessListMembershipOpportunities_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessListMembershipOpportunities, FGroupsListMembershipOpportunitiesResponse result, UObject* customData) \
{ \
	PlayFabGroupsAPI_eventDelegateOnSuccessListMembershipOpportunities_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessListMembershipOpportunities.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabGroupsAPI_h_283_DELEGATE \
struct PlayFabGroupsAPI_eventDelegateOnSuccessListMembership_Parms \
{ \
	FGroupsListMembershipResponse result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessListMembership_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessListMembership, FGroupsListMembershipResponse result, UObject* customData) \
{ \
	PlayFabGroupsAPI_eventDelegateOnSuccessListMembership_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessListMembership.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabGroupsAPI_h_270_DELEGATE \
struct PlayFabGroupsAPI_eventDelegateOnSuccessListGroupMembers_Parms \
{ \
	FGroupsListGroupMembersResponse result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessListGroupMembers_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessListGroupMembers, FGroupsListGroupMembersResponse result, UObject* customData) \
{ \
	PlayFabGroupsAPI_eventDelegateOnSuccessListGroupMembers_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessListGroupMembers.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabGroupsAPI_h_257_DELEGATE \
struct PlayFabGroupsAPI_eventDelegateOnSuccessListGroupInvitations_Parms \
{ \
	FGroupsListGroupInvitationsResponse result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessListGroupInvitations_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessListGroupInvitations, FGroupsListGroupInvitationsResponse result, UObject* customData) \
{ \
	PlayFabGroupsAPI_eventDelegateOnSuccessListGroupInvitations_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessListGroupInvitations.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabGroupsAPI_h_244_DELEGATE \
struct PlayFabGroupsAPI_eventDelegateOnSuccessListGroupBlocks_Parms \
{ \
	FGroupsListGroupBlocksResponse result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessListGroupBlocks_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessListGroupBlocks, FGroupsListGroupBlocksResponse result, UObject* customData) \
{ \
	PlayFabGroupsAPI_eventDelegateOnSuccessListGroupBlocks_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessListGroupBlocks.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabGroupsAPI_h_231_DELEGATE \
struct PlayFabGroupsAPI_eventDelegateOnSuccessListGroupApplications_Parms \
{ \
	FGroupsListGroupApplicationsResponse result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessListGroupApplications_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessListGroupApplications, FGroupsListGroupApplicationsResponse result, UObject* customData) \
{ \
	PlayFabGroupsAPI_eventDelegateOnSuccessListGroupApplications_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessListGroupApplications.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabGroupsAPI_h_218_DELEGATE \
struct PlayFabGroupsAPI_eventDelegateOnSuccessIsMember_Parms \
{ \
	FGroupsIsMemberResponse result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessIsMember_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessIsMember, FGroupsIsMemberResponse result, UObject* customData) \
{ \
	PlayFabGroupsAPI_eventDelegateOnSuccessIsMember_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessIsMember.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabGroupsAPI_h_205_DELEGATE \
struct PlayFabGroupsAPI_eventDelegateOnSuccessInviteToGroup_Parms \
{ \
	FGroupsInviteToGroupResponse result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessInviteToGroup_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessInviteToGroup, FGroupsInviteToGroupResponse result, UObject* customData) \
{ \
	PlayFabGroupsAPI_eventDelegateOnSuccessInviteToGroup_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessInviteToGroup.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabGroupsAPI_h_192_DELEGATE \
struct PlayFabGroupsAPI_eventDelegateOnSuccessGetGroup_Parms \
{ \
	FGroupsGetGroupResponse result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessGetGroup_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetGroup, FGroupsGetGroupResponse result, UObject* customData) \
{ \
	PlayFabGroupsAPI_eventDelegateOnSuccessGetGroup_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessGetGroup.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabGroupsAPI_h_179_DELEGATE \
struct PlayFabGroupsAPI_eventDelegateOnSuccessDeleteRole_Parms \
{ \
	FGroupsEmptyResponse result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessDeleteRole_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessDeleteRole, FGroupsEmptyResponse result, UObject* customData) \
{ \
	PlayFabGroupsAPI_eventDelegateOnSuccessDeleteRole_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessDeleteRole.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabGroupsAPI_h_166_DELEGATE \
struct PlayFabGroupsAPI_eventDelegateOnSuccessDeleteGroup_Parms \
{ \
	FGroupsEmptyResponse result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessDeleteGroup_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessDeleteGroup, FGroupsEmptyResponse result, UObject* customData) \
{ \
	PlayFabGroupsAPI_eventDelegateOnSuccessDeleteGroup_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessDeleteGroup.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabGroupsAPI_h_153_DELEGATE \
struct PlayFabGroupsAPI_eventDelegateOnSuccessCreateRole_Parms \
{ \
	FGroupsCreateGroupRoleResponse result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessCreateRole_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessCreateRole, FGroupsCreateGroupRoleResponse result, UObject* customData) \
{ \
	PlayFabGroupsAPI_eventDelegateOnSuccessCreateRole_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessCreateRole.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabGroupsAPI_h_140_DELEGATE \
struct PlayFabGroupsAPI_eventDelegateOnSuccessCreateGroup_Parms \
{ \
	FGroupsCreateGroupResponse result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessCreateGroup_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessCreateGroup, FGroupsCreateGroupResponse result, UObject* customData) \
{ \
	PlayFabGroupsAPI_eventDelegateOnSuccessCreateGroup_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessCreateGroup.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabGroupsAPI_h_127_DELEGATE \
struct PlayFabGroupsAPI_eventDelegateOnSuccessChangeMemberRole_Parms \
{ \
	FGroupsEmptyResponse result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessChangeMemberRole_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessChangeMemberRole, FGroupsEmptyResponse result, UObject* customData) \
{ \
	PlayFabGroupsAPI_eventDelegateOnSuccessChangeMemberRole_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessChangeMemberRole.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabGroupsAPI_h_114_DELEGATE \
struct PlayFabGroupsAPI_eventDelegateOnSuccessBlockEntity_Parms \
{ \
	FGroupsEmptyResponse result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessBlockEntity_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessBlockEntity, FGroupsEmptyResponse result, UObject* customData) \
{ \
	PlayFabGroupsAPI_eventDelegateOnSuccessBlockEntity_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessBlockEntity.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabGroupsAPI_h_101_DELEGATE \
struct PlayFabGroupsAPI_eventDelegateOnSuccessApplyToGroup_Parms \
{ \
	FGroupsApplyToGroupResponse result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessApplyToGroup_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessApplyToGroup, FGroupsApplyToGroupResponse result, UObject* customData) \
{ \
	PlayFabGroupsAPI_eventDelegateOnSuccessApplyToGroup_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessApplyToGroup.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabGroupsAPI_h_88_DELEGATE \
struct PlayFabGroupsAPI_eventDelegateOnSuccessAddMembers_Parms \
{ \
	FGroupsEmptyResponse result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessAddMembers_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessAddMembers, FGroupsEmptyResponse result, UObject* customData) \
{ \
	PlayFabGroupsAPI_eventDelegateOnSuccessAddMembers_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessAddMembers.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabGroupsAPI_h_75_DELEGATE \
struct PlayFabGroupsAPI_eventDelegateOnSuccessAcceptGroupInvitation_Parms \
{ \
	FGroupsEmptyResponse result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessAcceptGroupInvitation_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessAcceptGroupInvitation, FGroupsEmptyResponse result, UObject* customData) \
{ \
	PlayFabGroupsAPI_eventDelegateOnSuccessAcceptGroupInvitation_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessAcceptGroupInvitation.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabGroupsAPI_h_62_DELEGATE \
struct PlayFabGroupsAPI_eventDelegateOnSuccessAcceptGroupApplication_Parms \
{ \
	FGroupsEmptyResponse result; \
	UObject* customData; \
}; \
static inline void FDelegateOnSuccessAcceptGroupApplication_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessAcceptGroupApplication, FGroupsEmptyResponse result, UObject* customData) \
{ \
	PlayFabGroupsAPI_eventDelegateOnSuccessAcceptGroupApplication_Parms Parms; \
	Parms.result=result; \
	Parms.customData=customData; \
	DelegateOnSuccessAcceptGroupApplication.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabGroupsAPI_h_32_DELEGATE \
struct PlayFabGroupsAPI_eventDelegateOnFailurePlayFabError_Parms \
{ \
	FPlayFabError error; \
	UObject* customData; \
}; \
static inline void FDelegateOnFailurePlayFabError_DelegateWrapper(const FScriptDelegate& DelegateOnFailurePlayFabError, FPlayFabError error, UObject* customData) \
{ \
	PlayFabGroupsAPI_eventDelegateOnFailurePlayFabError_Parms Parms; \
	Parms.error=error; \
	Parms.customData=customData; \
	DelegateOnFailurePlayFabError.ProcessDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabGroupsAPI_h_24_DELEGATE \
struct _Script_PlayFab_eventOnPlayFabGroupsRequestCompleted_Parms \
{ \
	FPlayFabBaseModel response; \
	UObject* customData; \
	bool successful; \
}; \
static inline void FOnPlayFabGroupsRequestCompleted_DelegateWrapper(const FMulticastScriptDelegate& OnPlayFabGroupsRequestCompleted, FPlayFabBaseModel response, UObject* customData, bool successful) \
{ \
	_Script_PlayFab_eventOnPlayFabGroupsRequestCompleted_Parms Parms; \
	Parms.response=response; \
	Parms.customData=customData; \
	Parms.successful=successful ? true : false; \
	OnPlayFabGroupsRequestCompleted.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabGroupsAPI_h_29_SPARSE_DATA
#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabGroupsAPI_h_29_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHelperUpdateRole); \
	DECLARE_FUNCTION(execUpdateRole); \
	DECLARE_FUNCTION(execHelperUpdateGroup); \
	DECLARE_FUNCTION(execUpdateGroup); \
	DECLARE_FUNCTION(execHelperUnblockEntity); \
	DECLARE_FUNCTION(execUnblockEntity); \
	DECLARE_FUNCTION(execHelperRemoveMembers); \
	DECLARE_FUNCTION(execRemoveMembers); \
	DECLARE_FUNCTION(execHelperRemoveGroupInvitation); \
	DECLARE_FUNCTION(execRemoveGroupInvitation); \
	DECLARE_FUNCTION(execHelperRemoveGroupApplication); \
	DECLARE_FUNCTION(execRemoveGroupApplication); \
	DECLARE_FUNCTION(execHelperListMembershipOpportunities); \
	DECLARE_FUNCTION(execListMembershipOpportunities); \
	DECLARE_FUNCTION(execHelperListMembership); \
	DECLARE_FUNCTION(execListMembership); \
	DECLARE_FUNCTION(execHelperListGroupMembers); \
	DECLARE_FUNCTION(execListGroupMembers); \
	DECLARE_FUNCTION(execHelperListGroupInvitations); \
	DECLARE_FUNCTION(execListGroupInvitations); \
	DECLARE_FUNCTION(execHelperListGroupBlocks); \
	DECLARE_FUNCTION(execListGroupBlocks); \
	DECLARE_FUNCTION(execHelperListGroupApplications); \
	DECLARE_FUNCTION(execListGroupApplications); \
	DECLARE_FUNCTION(execHelperIsMember); \
	DECLARE_FUNCTION(execIsMember); \
	DECLARE_FUNCTION(execHelperInviteToGroup); \
	DECLARE_FUNCTION(execInviteToGroup); \
	DECLARE_FUNCTION(execHelperGetGroup); \
	DECLARE_FUNCTION(execGetGroup); \
	DECLARE_FUNCTION(execHelperDeleteRole); \
	DECLARE_FUNCTION(execDeleteRole); \
	DECLARE_FUNCTION(execHelperDeleteGroup); \
	DECLARE_FUNCTION(execDeleteGroup); \
	DECLARE_FUNCTION(execHelperCreateRole); \
	DECLARE_FUNCTION(execCreateRole); \
	DECLARE_FUNCTION(execHelperCreateGroup); \
	DECLARE_FUNCTION(execCreateGroup); \
	DECLARE_FUNCTION(execHelperChangeMemberRole); \
	DECLARE_FUNCTION(execChangeMemberRole); \
	DECLARE_FUNCTION(execHelperBlockEntity); \
	DECLARE_FUNCTION(execBlockEntity); \
	DECLARE_FUNCTION(execHelperApplyToGroup); \
	DECLARE_FUNCTION(execApplyToGroup); \
	DECLARE_FUNCTION(execHelperAddMembers); \
	DECLARE_FUNCTION(execAddMembers); \
	DECLARE_FUNCTION(execHelperAcceptGroupInvitation); \
	DECLARE_FUNCTION(execAcceptGroupInvitation); \
	DECLARE_FUNCTION(execHelperAcceptGroupApplication); \
	DECLARE_FUNCTION(execAcceptGroupApplication);


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabGroupsAPI_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHelperUpdateRole); \
	DECLARE_FUNCTION(execUpdateRole); \
	DECLARE_FUNCTION(execHelperUpdateGroup); \
	DECLARE_FUNCTION(execUpdateGroup); \
	DECLARE_FUNCTION(execHelperUnblockEntity); \
	DECLARE_FUNCTION(execUnblockEntity); \
	DECLARE_FUNCTION(execHelperRemoveMembers); \
	DECLARE_FUNCTION(execRemoveMembers); \
	DECLARE_FUNCTION(execHelperRemoveGroupInvitation); \
	DECLARE_FUNCTION(execRemoveGroupInvitation); \
	DECLARE_FUNCTION(execHelperRemoveGroupApplication); \
	DECLARE_FUNCTION(execRemoveGroupApplication); \
	DECLARE_FUNCTION(execHelperListMembershipOpportunities); \
	DECLARE_FUNCTION(execListMembershipOpportunities); \
	DECLARE_FUNCTION(execHelperListMembership); \
	DECLARE_FUNCTION(execListMembership); \
	DECLARE_FUNCTION(execHelperListGroupMembers); \
	DECLARE_FUNCTION(execListGroupMembers); \
	DECLARE_FUNCTION(execHelperListGroupInvitations); \
	DECLARE_FUNCTION(execListGroupInvitations); \
	DECLARE_FUNCTION(execHelperListGroupBlocks); \
	DECLARE_FUNCTION(execListGroupBlocks); \
	DECLARE_FUNCTION(execHelperListGroupApplications); \
	DECLARE_FUNCTION(execListGroupApplications); \
	DECLARE_FUNCTION(execHelperIsMember); \
	DECLARE_FUNCTION(execIsMember); \
	DECLARE_FUNCTION(execHelperInviteToGroup); \
	DECLARE_FUNCTION(execInviteToGroup); \
	DECLARE_FUNCTION(execHelperGetGroup); \
	DECLARE_FUNCTION(execGetGroup); \
	DECLARE_FUNCTION(execHelperDeleteRole); \
	DECLARE_FUNCTION(execDeleteRole); \
	DECLARE_FUNCTION(execHelperDeleteGroup); \
	DECLARE_FUNCTION(execDeleteGroup); \
	DECLARE_FUNCTION(execHelperCreateRole); \
	DECLARE_FUNCTION(execCreateRole); \
	DECLARE_FUNCTION(execHelperCreateGroup); \
	DECLARE_FUNCTION(execCreateGroup); \
	DECLARE_FUNCTION(execHelperChangeMemberRole); \
	DECLARE_FUNCTION(execChangeMemberRole); \
	DECLARE_FUNCTION(execHelperBlockEntity); \
	DECLARE_FUNCTION(execBlockEntity); \
	DECLARE_FUNCTION(execHelperApplyToGroup); \
	DECLARE_FUNCTION(execApplyToGroup); \
	DECLARE_FUNCTION(execHelperAddMembers); \
	DECLARE_FUNCTION(execAddMembers); \
	DECLARE_FUNCTION(execHelperAcceptGroupInvitation); \
	DECLARE_FUNCTION(execAcceptGroupInvitation); \
	DECLARE_FUNCTION(execHelperAcceptGroupApplication); \
	DECLARE_FUNCTION(execAcceptGroupApplication);


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabGroupsAPI_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlayFabGroupsAPI(); \
	friend struct Z_Construct_UClass_UPlayFabGroupsAPI_Statics; \
public: \
	DECLARE_CLASS(UPlayFabGroupsAPI, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PlayFab"), NO_API) \
	DECLARE_SERIALIZER(UPlayFabGroupsAPI)


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabGroupsAPI_h_29_INCLASS \
private: \
	static void StaticRegisterNativesUPlayFabGroupsAPI(); \
	friend struct Z_Construct_UClass_UPlayFabGroupsAPI_Statics; \
public: \
	DECLARE_CLASS(UPlayFabGroupsAPI, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PlayFab"), NO_API) \
	DECLARE_SERIALIZER(UPlayFabGroupsAPI)


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabGroupsAPI_h_29_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayFabGroupsAPI(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayFabGroupsAPI) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayFabGroupsAPI); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayFabGroupsAPI); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayFabGroupsAPI(UPlayFabGroupsAPI&&); \
	NO_API UPlayFabGroupsAPI(const UPlayFabGroupsAPI&); \
public:


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabGroupsAPI_h_29_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayFabGroupsAPI(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayFabGroupsAPI(UPlayFabGroupsAPI&&); \
	NO_API UPlayFabGroupsAPI(const UPlayFabGroupsAPI&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayFabGroupsAPI); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayFabGroupsAPI); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayFabGroupsAPI)


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabGroupsAPI_h_29_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CallAuthenticationContext() { return STRUCT_OFFSET(UPlayFabGroupsAPI, CallAuthenticationContext); } \
	FORCEINLINE static uint32 __PPO__RequestJsonObj() { return STRUCT_OFFSET(UPlayFabGroupsAPI, RequestJsonObj); } \
	FORCEINLINE static uint32 __PPO__ResponseJsonObj() { return STRUCT_OFFSET(UPlayFabGroupsAPI, ResponseJsonObj); }


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabGroupsAPI_h_26_PROLOG
#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabGroupsAPI_h_29_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabGroupsAPI_h_29_PRIVATE_PROPERTY_OFFSET \
	UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabGroupsAPI_h_29_SPARSE_DATA \
	UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabGroupsAPI_h_29_RPC_WRAPPERS \
	UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabGroupsAPI_h_29_INCLASS \
	UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabGroupsAPI_h_29_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabGroupsAPI_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabGroupsAPI_h_29_PRIVATE_PROPERTY_OFFSET \
	UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabGroupsAPI_h_29_SPARSE_DATA \
	UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabGroupsAPI_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabGroupsAPI_h_29_INCLASS_NO_PURE_DECLS \
	UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabGroupsAPI_h_29_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class PlayFabGroupsAPI."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PLAYFAB_API UClass* StaticClass<class UPlayFabGroupsAPI>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UnrealTraining_Plugins_PlayFabPlugin_PlayFab_Source_PlayFab_Classes_PlayFabGroupsAPI_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
