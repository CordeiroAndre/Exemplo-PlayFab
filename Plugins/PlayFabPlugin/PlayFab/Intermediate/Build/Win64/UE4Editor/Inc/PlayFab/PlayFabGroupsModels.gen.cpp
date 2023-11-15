// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Classes/PlayFabGroupsModels.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayFabGroupsModels() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleResponse();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabResultCommon();
	PLAYFAB_API UEnum* Z_Construct_UEnum_PlayFab_EOperationTypes();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleRequest();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabRequestCommon();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FGroupsUpdateGroupResponse();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FGroupsUpdateGroupRequest();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FGroupsUnblockEntityRequest();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FGroupsRemoveMembersRequest();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FGroupsRemoveGroupInvitationRequest();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FGroupsRemoveGroupApplicationRequest();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FGroupsListMembershipOpportunitiesResponse();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FGroupsListMembershipOpportunitiesRequest();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FGroupsListMembershipResponse();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FGroupsListMembershipRequest();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FGroupsListGroupMembersResponse();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FGroupsListGroupMembersRequest();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FGroupsListGroupInvitationsResponse();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FGroupsListGroupInvitationsRequest();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FGroupsListGroupBlocksResponse();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FGroupsListGroupBlocksRequest();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FGroupsListGroupApplicationsResponse();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FGroupsListGroupApplicationsRequest();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FGroupsIsMemberResponse();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FGroupsIsMemberRequest();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FGroupsInviteToGroupResponse();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FGroupsInviteToGroupRequest();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FGroupsGetGroupResponse();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FGroupsGetGroupRequest();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FGroupsDeleteRoleRequest();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FGroupsDeleteGroupRequest();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FGroupsCreateGroupRoleResponse();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FGroupsCreateGroupRoleRequest();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FGroupsCreateGroupResponse();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FGroupsCreateGroupRequest();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FGroupsChangeMemberRoleRequest();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FGroupsBlockEntityRequest();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FGroupsApplyToGroupResponse();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FGroupsApplyToGroupRequest();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FGroupsAddMembersRequest();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FGroupsAcceptGroupInvitationRequest();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FGroupsEmptyResponse();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FGroupsAcceptGroupApplicationRequest();
// End Cross Module References

static_assert(std::is_polymorphic<FGroupsUpdateGroupRoleResponse>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FGroupsUpdateGroupRoleResponse cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

class UScriptStruct* FGroupsUpdateGroupRoleResponse::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleResponse_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleResponse, Z_Construct_UPackage__Script_PlayFab(), TEXT("GroupsUpdateGroupRoleResponse"), sizeof(FGroupsUpdateGroupRoleResponse), Get_Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleResponse_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FGroupsUpdateGroupRoleResponse>()
{
	return FGroupsUpdateGroupRoleResponse::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGroupsUpdateGroupRoleResponse(FGroupsUpdateGroupRoleResponse::StaticStruct, TEXT("/Script/PlayFab"), TEXT("GroupsUpdateGroupRoleResponse"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFGroupsUpdateGroupRoleResponse
{
	FScriptStruct_PlayFab_StaticRegisterNativesFGroupsUpdateGroupRoleResponse()
	{
		UScriptStruct::DeferCppStructOps<FGroupsUpdateGroupRoleResponse>(FName(TEXT("GroupsUpdateGroupRoleResponse")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFGroupsUpdateGroupRoleResponse;
	struct Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleResponse_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OperationReason_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OperationReason;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProfileVersion_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ProfileVersion;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SetResult_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SetResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SetResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGroupsUpdateGroupRoleResponse>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleResponse_Statics::NewProp_OperationReason_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** Optional reason to explain why the operation was the result that it was. */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "Optional reason to explain why the operation was the result that it was." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleResponse_Statics::NewProp_OperationReason = { "OperationReason", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGroupsUpdateGroupRoleResponse, OperationReason), METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleResponse_Statics::NewProp_OperationReason_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleResponse_Statics::NewProp_OperationReason_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleResponse_Statics::NewProp_ProfileVersion_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** New version of the role data. */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "New version of the role data." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleResponse_Statics::NewProp_ProfileVersion = { "ProfileVersion", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGroupsUpdateGroupRoleResponse, ProfileVersion), METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleResponse_Statics::NewProp_ProfileVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleResponse_Statics::NewProp_ProfileVersion_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleResponse_Statics::NewProp_SetResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleResponse_Statics::NewProp_SetResult_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** Indicates which operation was completed, either Created, Updated, Deleted or None. */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "Indicates which operation was completed, either Created, Updated, Deleted or None." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleResponse_Statics::NewProp_SetResult = { "SetResult", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGroupsUpdateGroupRoleResponse, SetResult), Z_Construct_UEnum_PlayFab_EOperationTypes, METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleResponse_Statics::NewProp_SetResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleResponse_Statics::NewProp_SetResult_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleResponse_Statics::NewProp_OperationReason,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleResponse_Statics::NewProp_ProfileVersion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleResponse_Statics::NewProp_SetResult_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleResponse_Statics::NewProp_SetResult,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"GroupsUpdateGroupRoleResponse",
		sizeof(FGroupsUpdateGroupRoleResponse),
		alignof(FGroupsUpdateGroupRoleResponse),
		Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleResponse()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleResponse_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GroupsUpdateGroupRoleResponse"), sizeof(FGroupsUpdateGroupRoleResponse), Get_Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleResponse_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleResponse_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleResponse_Hash() { return 2181894287U; }

static_assert(std::is_polymorphic<FGroupsUpdateGroupRoleRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FGroupsUpdateGroupRoleRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FGroupsUpdateGroupRoleRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("GroupsUpdateGroupRoleRequest"), sizeof(FGroupsUpdateGroupRoleRequest), Get_Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FGroupsUpdateGroupRoleRequest>()
{
	return FGroupsUpdateGroupRoleRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGroupsUpdateGroupRoleRequest(FGroupsUpdateGroupRoleRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("GroupsUpdateGroupRoleRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFGroupsUpdateGroupRoleRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFGroupsUpdateGroupRoleRequest()
	{
		UScriptStruct::DeferCppStructOps<FGroupsUpdateGroupRoleRequest>(FName(TEXT("GroupsUpdateGroupRoleRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFGroupsUpdateGroupRoleRequest;
	struct Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CustomTags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExpectedProfileVersion_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ExpectedProfileVersion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Group_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Group;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RoleId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RoleId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RoleName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RoleName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Updates the role name. Returns information about whether the update was successful. */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "Updates the role name. Returns information about whether the update was successful." },
	};
#endif
	void* Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGroupsUpdateGroupRoleRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGroupsUpdateGroupRoleRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleRequest_Statics::NewProp_CustomTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleRequest_Statics::NewProp_ExpectedProfileVersion_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/**\n     * Optional field used for concurrency control. By specifying the previously returned value of ProfileVersion from the\n     * GetGroup API, you can ensure that the group data update will only be performed if the group has not been updated by any\n     * other clients since the version you last loaded.\n     */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "Optional field used for concurrency control. By specifying the previously returned value of ProfileVersion from the\nGetGroup API, you can ensure that the group data update will only be performed if the group has not been updated by any\nother clients since the version you last loaded." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleRequest_Statics::NewProp_ExpectedProfileVersion = { "ExpectedProfileVersion", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGroupsUpdateGroupRoleRequest, ExpectedProfileVersion), METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleRequest_Statics::NewProp_ExpectedProfileVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleRequest_Statics::NewProp_ExpectedProfileVersion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleRequest_Statics::NewProp_Group_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** The identifier of the group */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "The identifier of the group" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleRequest_Statics::NewProp_Group = { "Group", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGroupsUpdateGroupRoleRequest, Group), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleRequest_Statics::NewProp_Group_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleRequest_Statics::NewProp_Group_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleRequest_Statics::NewProp_RoleId_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** ID of the role to update. Role IDs must be between 1 and 64 characters long. */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "ID of the role to update. Role IDs must be between 1 and 64 characters long." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleRequest_Statics::NewProp_RoleId = { "RoleId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGroupsUpdateGroupRoleRequest, RoleId), METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleRequest_Statics::NewProp_RoleId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleRequest_Statics::NewProp_RoleId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleRequest_Statics::NewProp_RoleName_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** The new name of the role */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "The new name of the role" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleRequest_Statics::NewProp_RoleName = { "RoleName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGroupsUpdateGroupRoleRequest, RoleName), METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleRequest_Statics::NewProp_RoleName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleRequest_Statics::NewProp_RoleName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleRequest_Statics::NewProp_CustomTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleRequest_Statics::NewProp_ExpectedProfileVersion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleRequest_Statics::NewProp_Group,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleRequest_Statics::NewProp_RoleId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleRequest_Statics::NewProp_RoleName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"GroupsUpdateGroupRoleRequest",
		sizeof(FGroupsUpdateGroupRoleRequest),
		alignof(FGroupsUpdateGroupRoleRequest),
		Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GroupsUpdateGroupRoleRequest"), sizeof(FGroupsUpdateGroupRoleRequest), Get_Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleRequest_Hash() { return 1080699152U; }

static_assert(std::is_polymorphic<FGroupsUpdateGroupResponse>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FGroupsUpdateGroupResponse cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

class UScriptStruct* FGroupsUpdateGroupResponse::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FGroupsUpdateGroupResponse_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGroupsUpdateGroupResponse, Z_Construct_UPackage__Script_PlayFab(), TEXT("GroupsUpdateGroupResponse"), sizeof(FGroupsUpdateGroupResponse), Get_Z_Construct_UScriptStruct_FGroupsUpdateGroupResponse_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FGroupsUpdateGroupResponse>()
{
	return FGroupsUpdateGroupResponse::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGroupsUpdateGroupResponse(FGroupsUpdateGroupResponse::StaticStruct, TEXT("/Script/PlayFab"), TEXT("GroupsUpdateGroupResponse"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFGroupsUpdateGroupResponse
{
	FScriptStruct_PlayFab_StaticRegisterNativesFGroupsUpdateGroupResponse()
	{
		UScriptStruct::DeferCppStructOps<FGroupsUpdateGroupResponse>(FName(TEXT("GroupsUpdateGroupResponse")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFGroupsUpdateGroupResponse;
	struct Z_Construct_UScriptStruct_FGroupsUpdateGroupResponse_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OperationReason_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OperationReason;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProfileVersion_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ProfileVersion;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SetResult_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SetResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SetResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsUpdateGroupResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGroupsUpdateGroupResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGroupsUpdateGroupResponse>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsUpdateGroupResponse_Statics::NewProp_OperationReason_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** Optional reason to explain why the operation was the result that it was. */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "Optional reason to explain why the operation was the result that it was." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGroupsUpdateGroupResponse_Statics::NewProp_OperationReason = { "OperationReason", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGroupsUpdateGroupResponse, OperationReason), METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsUpdateGroupResponse_Statics::NewProp_OperationReason_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsUpdateGroupResponse_Statics::NewProp_OperationReason_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsUpdateGroupResponse_Statics::NewProp_ProfileVersion_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** New version of the group data. */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "New version of the group data." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGroupsUpdateGroupResponse_Statics::NewProp_ProfileVersion = { "ProfileVersion", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGroupsUpdateGroupResponse, ProfileVersion), METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsUpdateGroupResponse_Statics::NewProp_ProfileVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsUpdateGroupResponse_Statics::NewProp_ProfileVersion_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGroupsUpdateGroupResponse_Statics::NewProp_SetResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsUpdateGroupResponse_Statics::NewProp_SetResult_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** Indicates which operation was completed, either Created, Updated, Deleted or None. */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "Indicates which operation was completed, either Created, Updated, Deleted or None." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGroupsUpdateGroupResponse_Statics::NewProp_SetResult = { "SetResult", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGroupsUpdateGroupResponse, SetResult), Z_Construct_UEnum_PlayFab_EOperationTypes, METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsUpdateGroupResponse_Statics::NewProp_SetResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsUpdateGroupResponse_Statics::NewProp_SetResult_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGroupsUpdateGroupResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsUpdateGroupResponse_Statics::NewProp_OperationReason,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsUpdateGroupResponse_Statics::NewProp_ProfileVersion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsUpdateGroupResponse_Statics::NewProp_SetResult_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsUpdateGroupResponse_Statics::NewProp_SetResult,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGroupsUpdateGroupResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"GroupsUpdateGroupResponse",
		sizeof(FGroupsUpdateGroupResponse),
		alignof(FGroupsUpdateGroupResponse),
		Z_Construct_UScriptStruct_FGroupsUpdateGroupResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsUpdateGroupResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsUpdateGroupResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsUpdateGroupResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGroupsUpdateGroupResponse()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGroupsUpdateGroupResponse_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GroupsUpdateGroupResponse"), sizeof(FGroupsUpdateGroupResponse), Get_Z_Construct_UScriptStruct_FGroupsUpdateGroupResponse_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGroupsUpdateGroupResponse_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGroupsUpdateGroupResponse_Hash() { return 934943409U; }

static_assert(std::is_polymorphic<FGroupsUpdateGroupRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FGroupsUpdateGroupRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FGroupsUpdateGroupRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FGroupsUpdateGroupRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGroupsUpdateGroupRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("GroupsUpdateGroupRequest"), sizeof(FGroupsUpdateGroupRequest), Get_Z_Construct_UScriptStruct_FGroupsUpdateGroupRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FGroupsUpdateGroupRequest>()
{
	return FGroupsUpdateGroupRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGroupsUpdateGroupRequest(FGroupsUpdateGroupRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("GroupsUpdateGroupRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFGroupsUpdateGroupRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFGroupsUpdateGroupRequest()
	{
		UScriptStruct::DeferCppStructOps<FGroupsUpdateGroupRequest>(FName(TEXT("GroupsUpdateGroupRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFGroupsUpdateGroupRequest;
	struct Z_Construct_UScriptStruct_FGroupsUpdateGroupRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdminRoleId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AdminRoleId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CustomTags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExpectedProfileVersion_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ExpectedProfileVersion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Group_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Group;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GroupName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_GroupName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MemberRoleId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MemberRoleId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsUpdateGroupRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Updates data about a group, such as the name or default member role. Returns information about whether the update was\n * successful. Only title claimants may modify the administration role for a group.\n */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "Updates data about a group, such as the name or default member role. Returns information about whether the update was\nsuccessful. Only title claimants may modify the administration role for a group." },
	};
#endif
	void* Z_Construct_UScriptStruct_FGroupsUpdateGroupRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGroupsUpdateGroupRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsUpdateGroupRequest_Statics::NewProp_AdminRoleId_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** Optional: the ID of an existing role to set as the new administrator role for the group */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "Optional: the ID of an existing role to set as the new administrator role for the group" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGroupsUpdateGroupRequest_Statics::NewProp_AdminRoleId = { "AdminRoleId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGroupsUpdateGroupRequest, AdminRoleId), METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsUpdateGroupRequest_Statics::NewProp_AdminRoleId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsUpdateGroupRequest_Statics::NewProp_AdminRoleId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsUpdateGroupRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGroupsUpdateGroupRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGroupsUpdateGroupRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsUpdateGroupRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsUpdateGroupRequest_Statics::NewProp_CustomTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsUpdateGroupRequest_Statics::NewProp_ExpectedProfileVersion_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/**\n     * Optional field used for concurrency control. By specifying the previously returned value of ProfileVersion from the\n     * GetGroup API, you can ensure that the group data update will only be performed if the group has not been updated by any\n     * other clients since the version you last loaded.\n     */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "Optional field used for concurrency control. By specifying the previously returned value of ProfileVersion from the\nGetGroup API, you can ensure that the group data update will only be performed if the group has not been updated by any\nother clients since the version you last loaded." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGroupsUpdateGroupRequest_Statics::NewProp_ExpectedProfileVersion = { "ExpectedProfileVersion", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGroupsUpdateGroupRequest, ExpectedProfileVersion), METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsUpdateGroupRequest_Statics::NewProp_ExpectedProfileVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsUpdateGroupRequest_Statics::NewProp_ExpectedProfileVersion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsUpdateGroupRequest_Statics::NewProp_Group_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** The identifier of the group */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "The identifier of the group" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGroupsUpdateGroupRequest_Statics::NewProp_Group = { "Group", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGroupsUpdateGroupRequest, Group), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsUpdateGroupRequest_Statics::NewProp_Group_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsUpdateGroupRequest_Statics::NewProp_Group_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsUpdateGroupRequest_Statics::NewProp_GroupName_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** Optional: the new name of the group */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "Optional: the new name of the group" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGroupsUpdateGroupRequest_Statics::NewProp_GroupName = { "GroupName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGroupsUpdateGroupRequest, GroupName), METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsUpdateGroupRequest_Statics::NewProp_GroupName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsUpdateGroupRequest_Statics::NewProp_GroupName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsUpdateGroupRequest_Statics::NewProp_MemberRoleId_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** Optional: the ID of an existing role to set as the new member role for the group */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "Optional: the ID of an existing role to set as the new member role for the group" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGroupsUpdateGroupRequest_Statics::NewProp_MemberRoleId = { "MemberRoleId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGroupsUpdateGroupRequest, MemberRoleId), METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsUpdateGroupRequest_Statics::NewProp_MemberRoleId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsUpdateGroupRequest_Statics::NewProp_MemberRoleId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGroupsUpdateGroupRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsUpdateGroupRequest_Statics::NewProp_AdminRoleId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsUpdateGroupRequest_Statics::NewProp_CustomTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsUpdateGroupRequest_Statics::NewProp_ExpectedProfileVersion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsUpdateGroupRequest_Statics::NewProp_Group,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsUpdateGroupRequest_Statics::NewProp_GroupName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsUpdateGroupRequest_Statics::NewProp_MemberRoleId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGroupsUpdateGroupRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"GroupsUpdateGroupRequest",
		sizeof(FGroupsUpdateGroupRequest),
		alignof(FGroupsUpdateGroupRequest),
		Z_Construct_UScriptStruct_FGroupsUpdateGroupRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsUpdateGroupRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsUpdateGroupRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsUpdateGroupRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGroupsUpdateGroupRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGroupsUpdateGroupRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GroupsUpdateGroupRequest"), sizeof(FGroupsUpdateGroupRequest), Get_Z_Construct_UScriptStruct_FGroupsUpdateGroupRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGroupsUpdateGroupRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGroupsUpdateGroupRequest_Hash() { return 146305437U; }

static_assert(std::is_polymorphic<FGroupsUnblockEntityRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FGroupsUnblockEntityRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FGroupsUnblockEntityRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FGroupsUnblockEntityRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGroupsUnblockEntityRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("GroupsUnblockEntityRequest"), sizeof(FGroupsUnblockEntityRequest), Get_Z_Construct_UScriptStruct_FGroupsUnblockEntityRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FGroupsUnblockEntityRequest>()
{
	return FGroupsUnblockEntityRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGroupsUnblockEntityRequest(FGroupsUnblockEntityRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("GroupsUnblockEntityRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFGroupsUnblockEntityRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFGroupsUnblockEntityRequest()
	{
		UScriptStruct::DeferCppStructOps<FGroupsUnblockEntityRequest>(FName(TEXT("GroupsUnblockEntityRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFGroupsUnblockEntityRequest;
	struct Z_Construct_UScriptStruct_FGroupsUnblockEntityRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CustomTags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Entity_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Entity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Group_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Group;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsUnblockEntityRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Unblocks a list of entities from joining a group. No data is returned in the case of success. */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "Unblocks a list of entities from joining a group. No data is returned in the case of success." },
	};
#endif
	void* Z_Construct_UScriptStruct_FGroupsUnblockEntityRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGroupsUnblockEntityRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsUnblockEntityRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGroupsUnblockEntityRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGroupsUnblockEntityRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsUnblockEntityRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsUnblockEntityRequest_Statics::NewProp_CustomTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsUnblockEntityRequest_Statics::NewProp_Entity_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** The entity to perform this action on. */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "The entity to perform this action on." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGroupsUnblockEntityRequest_Statics::NewProp_Entity = { "Entity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGroupsUnblockEntityRequest, Entity), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsUnblockEntityRequest_Statics::NewProp_Entity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsUnblockEntityRequest_Statics::NewProp_Entity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsUnblockEntityRequest_Statics::NewProp_Group_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** The identifier of the group */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "The identifier of the group" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGroupsUnblockEntityRequest_Statics::NewProp_Group = { "Group", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGroupsUnblockEntityRequest, Group), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsUnblockEntityRequest_Statics::NewProp_Group_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsUnblockEntityRequest_Statics::NewProp_Group_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGroupsUnblockEntityRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsUnblockEntityRequest_Statics::NewProp_CustomTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsUnblockEntityRequest_Statics::NewProp_Entity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsUnblockEntityRequest_Statics::NewProp_Group,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGroupsUnblockEntityRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"GroupsUnblockEntityRequest",
		sizeof(FGroupsUnblockEntityRequest),
		alignof(FGroupsUnblockEntityRequest),
		Z_Construct_UScriptStruct_FGroupsUnblockEntityRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsUnblockEntityRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsUnblockEntityRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsUnblockEntityRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGroupsUnblockEntityRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGroupsUnblockEntityRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GroupsUnblockEntityRequest"), sizeof(FGroupsUnblockEntityRequest), Get_Z_Construct_UScriptStruct_FGroupsUnblockEntityRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGroupsUnblockEntityRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGroupsUnblockEntityRequest_Hash() { return 1437155553U; }

static_assert(std::is_polymorphic<FGroupsRemoveMembersRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FGroupsRemoveMembersRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FGroupsRemoveMembersRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FGroupsRemoveMembersRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGroupsRemoveMembersRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("GroupsRemoveMembersRequest"), sizeof(FGroupsRemoveMembersRequest), Get_Z_Construct_UScriptStruct_FGroupsRemoveMembersRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FGroupsRemoveMembersRequest>()
{
	return FGroupsRemoveMembersRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGroupsRemoveMembersRequest(FGroupsRemoveMembersRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("GroupsRemoveMembersRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFGroupsRemoveMembersRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFGroupsRemoveMembersRequest()
	{
		UScriptStruct::DeferCppStructOps<FGroupsRemoveMembersRequest>(FName(TEXT("GroupsRemoveMembersRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFGroupsRemoveMembersRequest;
	struct Z_Construct_UScriptStruct_FGroupsRemoveMembersRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CustomTags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Group_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Group;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Members_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Members_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Members;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RoleId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RoleId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsRemoveMembersRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Removes members from a group. A member can always remove themselves from a group, regardless of permissions. Returns\n * nothing if successful.\n */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "Removes members from a group. A member can always remove themselves from a group, regardless of permissions. Returns\nnothing if successful." },
	};
#endif
	void* Z_Construct_UScriptStruct_FGroupsRemoveMembersRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGroupsRemoveMembersRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsRemoveMembersRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGroupsRemoveMembersRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGroupsRemoveMembersRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsRemoveMembersRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsRemoveMembersRequest_Statics::NewProp_CustomTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsRemoveMembersRequest_Statics::NewProp_Group_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** The identifier of the group */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "The identifier of the group" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGroupsRemoveMembersRequest_Statics::NewProp_Group = { "Group", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGroupsRemoveMembersRequest, Group), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsRemoveMembersRequest_Statics::NewProp_Group_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsRemoveMembersRequest_Statics::NewProp_Group_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGroupsRemoveMembersRequest_Statics::NewProp_Members_Inner = { "Members", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsRemoveMembersRequest_Statics::NewProp_Members_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** List of entities to remove */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "List of entities to remove" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGroupsRemoveMembersRequest_Statics::NewProp_Members = { "Members", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGroupsRemoveMembersRequest, Members), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsRemoveMembersRequest_Statics::NewProp_Members_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsRemoveMembersRequest_Statics::NewProp_Members_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsRemoveMembersRequest_Statics::NewProp_RoleId_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** The ID of the role to remove the entities from. */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "The ID of the role to remove the entities from." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGroupsRemoveMembersRequest_Statics::NewProp_RoleId = { "RoleId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGroupsRemoveMembersRequest, RoleId), METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsRemoveMembersRequest_Statics::NewProp_RoleId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsRemoveMembersRequest_Statics::NewProp_RoleId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGroupsRemoveMembersRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsRemoveMembersRequest_Statics::NewProp_CustomTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsRemoveMembersRequest_Statics::NewProp_Group,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsRemoveMembersRequest_Statics::NewProp_Members_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsRemoveMembersRequest_Statics::NewProp_Members,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsRemoveMembersRequest_Statics::NewProp_RoleId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGroupsRemoveMembersRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"GroupsRemoveMembersRequest",
		sizeof(FGroupsRemoveMembersRequest),
		alignof(FGroupsRemoveMembersRequest),
		Z_Construct_UScriptStruct_FGroupsRemoveMembersRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsRemoveMembersRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsRemoveMembersRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsRemoveMembersRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGroupsRemoveMembersRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGroupsRemoveMembersRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GroupsRemoveMembersRequest"), sizeof(FGroupsRemoveMembersRequest), Get_Z_Construct_UScriptStruct_FGroupsRemoveMembersRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGroupsRemoveMembersRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGroupsRemoveMembersRequest_Hash() { return 1666927588U; }

static_assert(std::is_polymorphic<FGroupsRemoveGroupInvitationRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FGroupsRemoveGroupInvitationRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FGroupsRemoveGroupInvitationRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FGroupsRemoveGroupInvitationRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGroupsRemoveGroupInvitationRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("GroupsRemoveGroupInvitationRequest"), sizeof(FGroupsRemoveGroupInvitationRequest), Get_Z_Construct_UScriptStruct_FGroupsRemoveGroupInvitationRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FGroupsRemoveGroupInvitationRequest>()
{
	return FGroupsRemoveGroupInvitationRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGroupsRemoveGroupInvitationRequest(FGroupsRemoveGroupInvitationRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("GroupsRemoveGroupInvitationRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFGroupsRemoveGroupInvitationRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFGroupsRemoveGroupInvitationRequest()
	{
		UScriptStruct::DeferCppStructOps<FGroupsRemoveGroupInvitationRequest>(FName(TEXT("GroupsRemoveGroupInvitationRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFGroupsRemoveGroupInvitationRequest;
	struct Z_Construct_UScriptStruct_FGroupsRemoveGroupInvitationRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CustomTags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Entity_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Entity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Group_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Group;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsRemoveGroupInvitationRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Removes an existing invitation to join the group. This is used for both rejection of an invitation as well as rescinding\n * an invitation. The invited entity or a parent in its chain (e.g. title) may reject the invitation by calling this\n * method, and any caller with appropriate access in the group may rescind an invitation. No data is returned in the case\n * of success.\n */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "Removes an existing invitation to join the group. This is used for both rejection of an invitation as well as rescinding\nan invitation. The invited entity or a parent in its chain (e.g. title) may reject the invitation by calling this\nmethod, and any caller with appropriate access in the group may rescind an invitation. No data is returned in the case\nof success." },
	};
#endif
	void* Z_Construct_UScriptStruct_FGroupsRemoveGroupInvitationRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGroupsRemoveGroupInvitationRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsRemoveGroupInvitationRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGroupsRemoveGroupInvitationRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGroupsRemoveGroupInvitationRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsRemoveGroupInvitationRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsRemoveGroupInvitationRequest_Statics::NewProp_CustomTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsRemoveGroupInvitationRequest_Statics::NewProp_Entity_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** The entity to perform this action on. */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "The entity to perform this action on." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGroupsRemoveGroupInvitationRequest_Statics::NewProp_Entity = { "Entity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGroupsRemoveGroupInvitationRequest, Entity), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsRemoveGroupInvitationRequest_Statics::NewProp_Entity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsRemoveGroupInvitationRequest_Statics::NewProp_Entity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsRemoveGroupInvitationRequest_Statics::NewProp_Group_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** The identifier of the group */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "The identifier of the group" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGroupsRemoveGroupInvitationRequest_Statics::NewProp_Group = { "Group", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGroupsRemoveGroupInvitationRequest, Group), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsRemoveGroupInvitationRequest_Statics::NewProp_Group_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsRemoveGroupInvitationRequest_Statics::NewProp_Group_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGroupsRemoveGroupInvitationRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsRemoveGroupInvitationRequest_Statics::NewProp_CustomTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsRemoveGroupInvitationRequest_Statics::NewProp_Entity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsRemoveGroupInvitationRequest_Statics::NewProp_Group,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGroupsRemoveGroupInvitationRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"GroupsRemoveGroupInvitationRequest",
		sizeof(FGroupsRemoveGroupInvitationRequest),
		alignof(FGroupsRemoveGroupInvitationRequest),
		Z_Construct_UScriptStruct_FGroupsRemoveGroupInvitationRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsRemoveGroupInvitationRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsRemoveGroupInvitationRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsRemoveGroupInvitationRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGroupsRemoveGroupInvitationRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGroupsRemoveGroupInvitationRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GroupsRemoveGroupInvitationRequest"), sizeof(FGroupsRemoveGroupInvitationRequest), Get_Z_Construct_UScriptStruct_FGroupsRemoveGroupInvitationRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGroupsRemoveGroupInvitationRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGroupsRemoveGroupInvitationRequest_Hash() { return 2721016322U; }

static_assert(std::is_polymorphic<FGroupsRemoveGroupApplicationRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FGroupsRemoveGroupApplicationRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FGroupsRemoveGroupApplicationRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FGroupsRemoveGroupApplicationRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGroupsRemoveGroupApplicationRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("GroupsRemoveGroupApplicationRequest"), sizeof(FGroupsRemoveGroupApplicationRequest), Get_Z_Construct_UScriptStruct_FGroupsRemoveGroupApplicationRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FGroupsRemoveGroupApplicationRequest>()
{
	return FGroupsRemoveGroupApplicationRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGroupsRemoveGroupApplicationRequest(FGroupsRemoveGroupApplicationRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("GroupsRemoveGroupApplicationRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFGroupsRemoveGroupApplicationRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFGroupsRemoveGroupApplicationRequest()
	{
		UScriptStruct::DeferCppStructOps<FGroupsRemoveGroupApplicationRequest>(FName(TEXT("GroupsRemoveGroupApplicationRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFGroupsRemoveGroupApplicationRequest;
	struct Z_Construct_UScriptStruct_FGroupsRemoveGroupApplicationRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CustomTags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Entity_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Entity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Group_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Group;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsRemoveGroupApplicationRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Removes an existing application to join the group. This is used for both rejection of an application as well as\n * withdrawing an application. The applying entity or a parent in its chain (e.g. title) may withdraw the application, and\n * any caller with appropriate access in the group may reject an application. No data is returned in the case of success.\n */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "Removes an existing application to join the group. This is used for both rejection of an application as well as\nwithdrawing an application. The applying entity or a parent in its chain (e.g. title) may withdraw the application, and\nany caller with appropriate access in the group may reject an application. No data is returned in the case of success." },
	};
#endif
	void* Z_Construct_UScriptStruct_FGroupsRemoveGroupApplicationRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGroupsRemoveGroupApplicationRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsRemoveGroupApplicationRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGroupsRemoveGroupApplicationRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGroupsRemoveGroupApplicationRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsRemoveGroupApplicationRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsRemoveGroupApplicationRequest_Statics::NewProp_CustomTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsRemoveGroupApplicationRequest_Statics::NewProp_Entity_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** The entity to perform this action on. */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "The entity to perform this action on." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGroupsRemoveGroupApplicationRequest_Statics::NewProp_Entity = { "Entity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGroupsRemoveGroupApplicationRequest, Entity), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsRemoveGroupApplicationRequest_Statics::NewProp_Entity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsRemoveGroupApplicationRequest_Statics::NewProp_Entity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsRemoveGroupApplicationRequest_Statics::NewProp_Group_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** The identifier of the group */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "The identifier of the group" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGroupsRemoveGroupApplicationRequest_Statics::NewProp_Group = { "Group", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGroupsRemoveGroupApplicationRequest, Group), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsRemoveGroupApplicationRequest_Statics::NewProp_Group_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsRemoveGroupApplicationRequest_Statics::NewProp_Group_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGroupsRemoveGroupApplicationRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsRemoveGroupApplicationRequest_Statics::NewProp_CustomTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsRemoveGroupApplicationRequest_Statics::NewProp_Entity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsRemoveGroupApplicationRequest_Statics::NewProp_Group,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGroupsRemoveGroupApplicationRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"GroupsRemoveGroupApplicationRequest",
		sizeof(FGroupsRemoveGroupApplicationRequest),
		alignof(FGroupsRemoveGroupApplicationRequest),
		Z_Construct_UScriptStruct_FGroupsRemoveGroupApplicationRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsRemoveGroupApplicationRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsRemoveGroupApplicationRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsRemoveGroupApplicationRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGroupsRemoveGroupApplicationRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGroupsRemoveGroupApplicationRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GroupsRemoveGroupApplicationRequest"), sizeof(FGroupsRemoveGroupApplicationRequest), Get_Z_Construct_UScriptStruct_FGroupsRemoveGroupApplicationRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGroupsRemoveGroupApplicationRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGroupsRemoveGroupApplicationRequest_Hash() { return 1981534883U; }

static_assert(std::is_polymorphic<FGroupsListMembershipOpportunitiesResponse>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FGroupsListMembershipOpportunitiesResponse cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

class UScriptStruct* FGroupsListMembershipOpportunitiesResponse::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FGroupsListMembershipOpportunitiesResponse_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGroupsListMembershipOpportunitiesResponse, Z_Construct_UPackage__Script_PlayFab(), TEXT("GroupsListMembershipOpportunitiesResponse"), sizeof(FGroupsListMembershipOpportunitiesResponse), Get_Z_Construct_UScriptStruct_FGroupsListMembershipOpportunitiesResponse_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FGroupsListMembershipOpportunitiesResponse>()
{
	return FGroupsListMembershipOpportunitiesResponse::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGroupsListMembershipOpportunitiesResponse(FGroupsListMembershipOpportunitiesResponse::StaticStruct, TEXT("/Script/PlayFab"), TEXT("GroupsListMembershipOpportunitiesResponse"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFGroupsListMembershipOpportunitiesResponse
{
	FScriptStruct_PlayFab_StaticRegisterNativesFGroupsListMembershipOpportunitiesResponse()
	{
		UScriptStruct::DeferCppStructOps<FGroupsListMembershipOpportunitiesResponse>(FName(TEXT("GroupsListMembershipOpportunitiesResponse")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFGroupsListMembershipOpportunitiesResponse;
	struct Z_Construct_UScriptStruct_FGroupsListMembershipOpportunitiesResponse_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Applications_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Applications_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Applications;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Invitations_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Invitations_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Invitations;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsListMembershipOpportunitiesResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGroupsListMembershipOpportunitiesResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGroupsListMembershipOpportunitiesResponse>();
	}
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGroupsListMembershipOpportunitiesResponse_Statics::NewProp_Applications_Inner = { "Applications", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsListMembershipOpportunitiesResponse_Statics::NewProp_Applications_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** The requested list of group applications. */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "The requested list of group applications." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGroupsListMembershipOpportunitiesResponse_Statics::NewProp_Applications = { "Applications", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGroupsListMembershipOpportunitiesResponse, Applications), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsListMembershipOpportunitiesResponse_Statics::NewProp_Applications_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsListMembershipOpportunitiesResponse_Statics::NewProp_Applications_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGroupsListMembershipOpportunitiesResponse_Statics::NewProp_Invitations_Inner = { "Invitations", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsListMembershipOpportunitiesResponse_Statics::NewProp_Invitations_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** The requested list of group invitations. */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "The requested list of group invitations." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGroupsListMembershipOpportunitiesResponse_Statics::NewProp_Invitations = { "Invitations", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGroupsListMembershipOpportunitiesResponse, Invitations), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsListMembershipOpportunitiesResponse_Statics::NewProp_Invitations_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsListMembershipOpportunitiesResponse_Statics::NewProp_Invitations_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGroupsListMembershipOpportunitiesResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsListMembershipOpportunitiesResponse_Statics::NewProp_Applications_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsListMembershipOpportunitiesResponse_Statics::NewProp_Applications,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsListMembershipOpportunitiesResponse_Statics::NewProp_Invitations_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsListMembershipOpportunitiesResponse_Statics::NewProp_Invitations,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGroupsListMembershipOpportunitiesResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"GroupsListMembershipOpportunitiesResponse",
		sizeof(FGroupsListMembershipOpportunitiesResponse),
		alignof(FGroupsListMembershipOpportunitiesResponse),
		Z_Construct_UScriptStruct_FGroupsListMembershipOpportunitiesResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsListMembershipOpportunitiesResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsListMembershipOpportunitiesResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsListMembershipOpportunitiesResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGroupsListMembershipOpportunitiesResponse()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGroupsListMembershipOpportunitiesResponse_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GroupsListMembershipOpportunitiesResponse"), sizeof(FGroupsListMembershipOpportunitiesResponse), Get_Z_Construct_UScriptStruct_FGroupsListMembershipOpportunitiesResponse_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGroupsListMembershipOpportunitiesResponse_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGroupsListMembershipOpportunitiesResponse_Hash() { return 3226006533U; }

static_assert(std::is_polymorphic<FGroupsListMembershipOpportunitiesRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FGroupsListMembershipOpportunitiesRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FGroupsListMembershipOpportunitiesRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FGroupsListMembershipOpportunitiesRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGroupsListMembershipOpportunitiesRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("GroupsListMembershipOpportunitiesRequest"), sizeof(FGroupsListMembershipOpportunitiesRequest), Get_Z_Construct_UScriptStruct_FGroupsListMembershipOpportunitiesRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FGroupsListMembershipOpportunitiesRequest>()
{
	return FGroupsListMembershipOpportunitiesRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGroupsListMembershipOpportunitiesRequest(FGroupsListMembershipOpportunitiesRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("GroupsListMembershipOpportunitiesRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFGroupsListMembershipOpportunitiesRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFGroupsListMembershipOpportunitiesRequest()
	{
		UScriptStruct::DeferCppStructOps<FGroupsListMembershipOpportunitiesRequest>(FName(TEXT("GroupsListMembershipOpportunitiesRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFGroupsListMembershipOpportunitiesRequest;
	struct Z_Construct_UScriptStruct_FGroupsListMembershipOpportunitiesRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CustomTags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Entity_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Entity;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsListMembershipOpportunitiesRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Lists all outstanding group applications and invitations for an entity. Anyone may call this for any entity, but data\n * will only be returned for the entity or a parent of that entity. To list invitations or applications for a group to\n * check if a player is trying to join, use ListGroupInvitations and ListGroupApplications.\n */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "Lists all outstanding group applications and invitations for an entity. Anyone may call this for any entity, but data\nwill only be returned for the entity or a parent of that entity. To list invitations or applications for a group to\ncheck if a player is trying to join, use ListGroupInvitations and ListGroupApplications." },
	};
#endif
	void* Z_Construct_UScriptStruct_FGroupsListMembershipOpportunitiesRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGroupsListMembershipOpportunitiesRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsListMembershipOpportunitiesRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGroupsListMembershipOpportunitiesRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGroupsListMembershipOpportunitiesRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsListMembershipOpportunitiesRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsListMembershipOpportunitiesRequest_Statics::NewProp_CustomTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsListMembershipOpportunitiesRequest_Statics::NewProp_Entity_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** The optional entity to perform this action on. Defaults to the currently logged in entity. */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "The optional entity to perform this action on. Defaults to the currently logged in entity." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGroupsListMembershipOpportunitiesRequest_Statics::NewProp_Entity = { "Entity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGroupsListMembershipOpportunitiesRequest, Entity), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsListMembershipOpportunitiesRequest_Statics::NewProp_Entity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsListMembershipOpportunitiesRequest_Statics::NewProp_Entity_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGroupsListMembershipOpportunitiesRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsListMembershipOpportunitiesRequest_Statics::NewProp_CustomTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsListMembershipOpportunitiesRequest_Statics::NewProp_Entity,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGroupsListMembershipOpportunitiesRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"GroupsListMembershipOpportunitiesRequest",
		sizeof(FGroupsListMembershipOpportunitiesRequest),
		alignof(FGroupsListMembershipOpportunitiesRequest),
		Z_Construct_UScriptStruct_FGroupsListMembershipOpportunitiesRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsListMembershipOpportunitiesRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsListMembershipOpportunitiesRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsListMembershipOpportunitiesRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGroupsListMembershipOpportunitiesRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGroupsListMembershipOpportunitiesRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GroupsListMembershipOpportunitiesRequest"), sizeof(FGroupsListMembershipOpportunitiesRequest), Get_Z_Construct_UScriptStruct_FGroupsListMembershipOpportunitiesRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGroupsListMembershipOpportunitiesRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGroupsListMembershipOpportunitiesRequest_Hash() { return 1126837755U; }

static_assert(std::is_polymorphic<FGroupsListMembershipResponse>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FGroupsListMembershipResponse cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

class UScriptStruct* FGroupsListMembershipResponse::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FGroupsListMembershipResponse_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGroupsListMembershipResponse, Z_Construct_UPackage__Script_PlayFab(), TEXT("GroupsListMembershipResponse"), sizeof(FGroupsListMembershipResponse), Get_Z_Construct_UScriptStruct_FGroupsListMembershipResponse_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FGroupsListMembershipResponse>()
{
	return FGroupsListMembershipResponse::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGroupsListMembershipResponse(FGroupsListMembershipResponse::StaticStruct, TEXT("/Script/PlayFab"), TEXT("GroupsListMembershipResponse"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFGroupsListMembershipResponse
{
	FScriptStruct_PlayFab_StaticRegisterNativesFGroupsListMembershipResponse()
	{
		UScriptStruct::DeferCppStructOps<FGroupsListMembershipResponse>(FName(TEXT("GroupsListMembershipResponse")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFGroupsListMembershipResponse;
	struct Z_Construct_UScriptStruct_FGroupsListMembershipResponse_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Groups_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Groups_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Groups;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsListMembershipResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGroupsListMembershipResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGroupsListMembershipResponse>();
	}
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGroupsListMembershipResponse_Statics::NewProp_Groups_Inner = { "Groups", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsListMembershipResponse_Statics::NewProp_Groups_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** The list of groups */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "The list of groups" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGroupsListMembershipResponse_Statics::NewProp_Groups = { "Groups", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGroupsListMembershipResponse, Groups), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsListMembershipResponse_Statics::NewProp_Groups_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsListMembershipResponse_Statics::NewProp_Groups_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGroupsListMembershipResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsListMembershipResponse_Statics::NewProp_Groups_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsListMembershipResponse_Statics::NewProp_Groups,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGroupsListMembershipResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"GroupsListMembershipResponse",
		sizeof(FGroupsListMembershipResponse),
		alignof(FGroupsListMembershipResponse),
		Z_Construct_UScriptStruct_FGroupsListMembershipResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsListMembershipResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsListMembershipResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsListMembershipResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGroupsListMembershipResponse()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGroupsListMembershipResponse_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GroupsListMembershipResponse"), sizeof(FGroupsListMembershipResponse), Get_Z_Construct_UScriptStruct_FGroupsListMembershipResponse_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGroupsListMembershipResponse_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGroupsListMembershipResponse_Hash() { return 1620043029U; }

static_assert(std::is_polymorphic<FGroupsListMembershipRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FGroupsListMembershipRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FGroupsListMembershipRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FGroupsListMembershipRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGroupsListMembershipRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("GroupsListMembershipRequest"), sizeof(FGroupsListMembershipRequest), Get_Z_Construct_UScriptStruct_FGroupsListMembershipRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FGroupsListMembershipRequest>()
{
	return FGroupsListMembershipRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGroupsListMembershipRequest(FGroupsListMembershipRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("GroupsListMembershipRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFGroupsListMembershipRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFGroupsListMembershipRequest()
	{
		UScriptStruct::DeferCppStructOps<FGroupsListMembershipRequest>(FName(TEXT("GroupsListMembershipRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFGroupsListMembershipRequest;
	struct Z_Construct_UScriptStruct_FGroupsListMembershipRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CustomTags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Entity_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Entity;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsListMembershipRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Lists the groups and roles that an entity is a part of, checking to see if group and role metadata and memberships\n * should be visible to the caller. If the entity is not in any roles that are visible to the caller, the group is not\n * returned in the results, even if the caller otherwise has permission to see that the entity is a member of that group.\n */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "Lists the groups and roles that an entity is a part of, checking to see if group and role metadata and memberships\nshould be visible to the caller. If the entity is not in any roles that are visible to the caller, the group is not\nreturned in the results, even if the caller otherwise has permission to see that the entity is a member of that group." },
	};
#endif
	void* Z_Construct_UScriptStruct_FGroupsListMembershipRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGroupsListMembershipRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsListMembershipRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGroupsListMembershipRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGroupsListMembershipRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsListMembershipRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsListMembershipRequest_Statics::NewProp_CustomTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsListMembershipRequest_Statics::NewProp_Entity_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** The optional entity to perform this action on. Defaults to the currently logged in entity. */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "The optional entity to perform this action on. Defaults to the currently logged in entity." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGroupsListMembershipRequest_Statics::NewProp_Entity = { "Entity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGroupsListMembershipRequest, Entity), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsListMembershipRequest_Statics::NewProp_Entity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsListMembershipRequest_Statics::NewProp_Entity_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGroupsListMembershipRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsListMembershipRequest_Statics::NewProp_CustomTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsListMembershipRequest_Statics::NewProp_Entity,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGroupsListMembershipRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"GroupsListMembershipRequest",
		sizeof(FGroupsListMembershipRequest),
		alignof(FGroupsListMembershipRequest),
		Z_Construct_UScriptStruct_FGroupsListMembershipRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsListMembershipRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsListMembershipRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsListMembershipRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGroupsListMembershipRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGroupsListMembershipRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GroupsListMembershipRequest"), sizeof(FGroupsListMembershipRequest), Get_Z_Construct_UScriptStruct_FGroupsListMembershipRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGroupsListMembershipRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGroupsListMembershipRequest_Hash() { return 3612000054U; }

static_assert(std::is_polymorphic<FGroupsListGroupMembersResponse>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FGroupsListGroupMembersResponse cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

class UScriptStruct* FGroupsListGroupMembersResponse::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FGroupsListGroupMembersResponse_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGroupsListGroupMembersResponse, Z_Construct_UPackage__Script_PlayFab(), TEXT("GroupsListGroupMembersResponse"), sizeof(FGroupsListGroupMembersResponse), Get_Z_Construct_UScriptStruct_FGroupsListGroupMembersResponse_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FGroupsListGroupMembersResponse>()
{
	return FGroupsListGroupMembersResponse::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGroupsListGroupMembersResponse(FGroupsListGroupMembersResponse::StaticStruct, TEXT("/Script/PlayFab"), TEXT("GroupsListGroupMembersResponse"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFGroupsListGroupMembersResponse
{
	FScriptStruct_PlayFab_StaticRegisterNativesFGroupsListGroupMembersResponse()
	{
		UScriptStruct::DeferCppStructOps<FGroupsListGroupMembersResponse>(FName(TEXT("GroupsListGroupMembersResponse")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFGroupsListGroupMembersResponse;
	struct Z_Construct_UScriptStruct_FGroupsListGroupMembersResponse_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Members_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Members_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Members;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsListGroupMembersResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGroupsListGroupMembersResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGroupsListGroupMembersResponse>();
	}
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGroupsListGroupMembersResponse_Statics::NewProp_Members_Inner = { "Members", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsListGroupMembersResponse_Statics::NewProp_Members_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** The requested list of roles and member entity IDs. */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "The requested list of roles and member entity IDs." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGroupsListGroupMembersResponse_Statics::NewProp_Members = { "Members", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGroupsListGroupMembersResponse, Members), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsListGroupMembersResponse_Statics::NewProp_Members_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsListGroupMembersResponse_Statics::NewProp_Members_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGroupsListGroupMembersResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsListGroupMembersResponse_Statics::NewProp_Members_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsListGroupMembersResponse_Statics::NewProp_Members,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGroupsListGroupMembersResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"GroupsListGroupMembersResponse",
		sizeof(FGroupsListGroupMembersResponse),
		alignof(FGroupsListGroupMembersResponse),
		Z_Construct_UScriptStruct_FGroupsListGroupMembersResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsListGroupMembersResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsListGroupMembersResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsListGroupMembersResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGroupsListGroupMembersResponse()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGroupsListGroupMembersResponse_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GroupsListGroupMembersResponse"), sizeof(FGroupsListGroupMembersResponse), Get_Z_Construct_UScriptStruct_FGroupsListGroupMembersResponse_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGroupsListGroupMembersResponse_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGroupsListGroupMembersResponse_Hash() { return 1253940161U; }

static_assert(std::is_polymorphic<FGroupsListGroupMembersRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FGroupsListGroupMembersRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FGroupsListGroupMembersRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FGroupsListGroupMembersRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGroupsListGroupMembersRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("GroupsListGroupMembersRequest"), sizeof(FGroupsListGroupMembersRequest), Get_Z_Construct_UScriptStruct_FGroupsListGroupMembersRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FGroupsListGroupMembersRequest>()
{
	return FGroupsListGroupMembersRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGroupsListGroupMembersRequest(FGroupsListGroupMembersRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("GroupsListGroupMembersRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFGroupsListGroupMembersRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFGroupsListGroupMembersRequest()
	{
		UScriptStruct::DeferCppStructOps<FGroupsListGroupMembersRequest>(FName(TEXT("GroupsListGroupMembersRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFGroupsListGroupMembersRequest;
	struct Z_Construct_UScriptStruct_FGroupsListGroupMembersRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CustomTags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Group_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Group;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsListGroupMembersRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Gets a list of members and the roles they belong to within the group. If the caller does not have permission to view the\n * role, and the member is in no other role, the member is not displayed. Returns a list of entities that are members of\n * the group.\n */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "Gets a list of members and the roles they belong to within the group. If the caller does not have permission to view the\nrole, and the member is in no other role, the member is not displayed. Returns a list of entities that are members of\nthe group." },
	};
#endif
	void* Z_Construct_UScriptStruct_FGroupsListGroupMembersRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGroupsListGroupMembersRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsListGroupMembersRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGroupsListGroupMembersRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGroupsListGroupMembersRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsListGroupMembersRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsListGroupMembersRequest_Statics::NewProp_CustomTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsListGroupMembersRequest_Statics::NewProp_Group_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** ID of the group to list the members and roles for */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "ID of the group to list the members and roles for" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGroupsListGroupMembersRequest_Statics::NewProp_Group = { "Group", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGroupsListGroupMembersRequest, Group), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsListGroupMembersRequest_Statics::NewProp_Group_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsListGroupMembersRequest_Statics::NewProp_Group_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGroupsListGroupMembersRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsListGroupMembersRequest_Statics::NewProp_CustomTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsListGroupMembersRequest_Statics::NewProp_Group,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGroupsListGroupMembersRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"GroupsListGroupMembersRequest",
		sizeof(FGroupsListGroupMembersRequest),
		alignof(FGroupsListGroupMembersRequest),
		Z_Construct_UScriptStruct_FGroupsListGroupMembersRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsListGroupMembersRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsListGroupMembersRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsListGroupMembersRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGroupsListGroupMembersRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGroupsListGroupMembersRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GroupsListGroupMembersRequest"), sizeof(FGroupsListGroupMembersRequest), Get_Z_Construct_UScriptStruct_FGroupsListGroupMembersRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGroupsListGroupMembersRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGroupsListGroupMembersRequest_Hash() { return 3023962574U; }

static_assert(std::is_polymorphic<FGroupsListGroupInvitationsResponse>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FGroupsListGroupInvitationsResponse cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

class UScriptStruct* FGroupsListGroupInvitationsResponse::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FGroupsListGroupInvitationsResponse_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGroupsListGroupInvitationsResponse, Z_Construct_UPackage__Script_PlayFab(), TEXT("GroupsListGroupInvitationsResponse"), sizeof(FGroupsListGroupInvitationsResponse), Get_Z_Construct_UScriptStruct_FGroupsListGroupInvitationsResponse_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FGroupsListGroupInvitationsResponse>()
{
	return FGroupsListGroupInvitationsResponse::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGroupsListGroupInvitationsResponse(FGroupsListGroupInvitationsResponse::StaticStruct, TEXT("/Script/PlayFab"), TEXT("GroupsListGroupInvitationsResponse"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFGroupsListGroupInvitationsResponse
{
	FScriptStruct_PlayFab_StaticRegisterNativesFGroupsListGroupInvitationsResponse()
	{
		UScriptStruct::DeferCppStructOps<FGroupsListGroupInvitationsResponse>(FName(TEXT("GroupsListGroupInvitationsResponse")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFGroupsListGroupInvitationsResponse;
	struct Z_Construct_UScriptStruct_FGroupsListGroupInvitationsResponse_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Invitations_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Invitations_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Invitations;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsListGroupInvitationsResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGroupsListGroupInvitationsResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGroupsListGroupInvitationsResponse>();
	}
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGroupsListGroupInvitationsResponse_Statics::NewProp_Invitations_Inner = { "Invitations", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsListGroupInvitationsResponse_Statics::NewProp_Invitations_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** The requested list of group invitations. */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "The requested list of group invitations." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGroupsListGroupInvitationsResponse_Statics::NewProp_Invitations = { "Invitations", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGroupsListGroupInvitationsResponse, Invitations), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsListGroupInvitationsResponse_Statics::NewProp_Invitations_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsListGroupInvitationsResponse_Statics::NewProp_Invitations_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGroupsListGroupInvitationsResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsListGroupInvitationsResponse_Statics::NewProp_Invitations_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsListGroupInvitationsResponse_Statics::NewProp_Invitations,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGroupsListGroupInvitationsResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"GroupsListGroupInvitationsResponse",
		sizeof(FGroupsListGroupInvitationsResponse),
		alignof(FGroupsListGroupInvitationsResponse),
		Z_Construct_UScriptStruct_FGroupsListGroupInvitationsResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsListGroupInvitationsResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsListGroupInvitationsResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsListGroupInvitationsResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGroupsListGroupInvitationsResponse()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGroupsListGroupInvitationsResponse_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GroupsListGroupInvitationsResponse"), sizeof(FGroupsListGroupInvitationsResponse), Get_Z_Construct_UScriptStruct_FGroupsListGroupInvitationsResponse_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGroupsListGroupInvitationsResponse_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGroupsListGroupInvitationsResponse_Hash() { return 3747295328U; }

static_assert(std::is_polymorphic<FGroupsListGroupInvitationsRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FGroupsListGroupInvitationsRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FGroupsListGroupInvitationsRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FGroupsListGroupInvitationsRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGroupsListGroupInvitationsRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("GroupsListGroupInvitationsRequest"), sizeof(FGroupsListGroupInvitationsRequest), Get_Z_Construct_UScriptStruct_FGroupsListGroupInvitationsRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FGroupsListGroupInvitationsRequest>()
{
	return FGroupsListGroupInvitationsRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGroupsListGroupInvitationsRequest(FGroupsListGroupInvitationsRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("GroupsListGroupInvitationsRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFGroupsListGroupInvitationsRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFGroupsListGroupInvitationsRequest()
	{
		UScriptStruct::DeferCppStructOps<FGroupsListGroupInvitationsRequest>(FName(TEXT("GroupsListGroupInvitationsRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFGroupsListGroupInvitationsRequest;
	struct Z_Construct_UScriptStruct_FGroupsListGroupInvitationsRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CustomTags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Group_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Group;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsListGroupInvitationsRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Lists all outstanding invitations for a group. Returns a list of entities that have been invited, as well as when the\n * invitation will expire. To get the group invitations for a specific entity, use ListMembershipOpportunities.\n */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "Lists all outstanding invitations for a group. Returns a list of entities that have been invited, as well as when the\ninvitation will expire. To get the group invitations for a specific entity, use ListMembershipOpportunities." },
	};
#endif
	void* Z_Construct_UScriptStruct_FGroupsListGroupInvitationsRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGroupsListGroupInvitationsRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsListGroupInvitationsRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGroupsListGroupInvitationsRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGroupsListGroupInvitationsRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsListGroupInvitationsRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsListGroupInvitationsRequest_Statics::NewProp_CustomTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsListGroupInvitationsRequest_Statics::NewProp_Group_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** The identifier of the group */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "The identifier of the group" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGroupsListGroupInvitationsRequest_Statics::NewProp_Group = { "Group", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGroupsListGroupInvitationsRequest, Group), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsListGroupInvitationsRequest_Statics::NewProp_Group_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsListGroupInvitationsRequest_Statics::NewProp_Group_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGroupsListGroupInvitationsRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsListGroupInvitationsRequest_Statics::NewProp_CustomTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsListGroupInvitationsRequest_Statics::NewProp_Group,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGroupsListGroupInvitationsRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"GroupsListGroupInvitationsRequest",
		sizeof(FGroupsListGroupInvitationsRequest),
		alignof(FGroupsListGroupInvitationsRequest),
		Z_Construct_UScriptStruct_FGroupsListGroupInvitationsRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsListGroupInvitationsRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsListGroupInvitationsRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsListGroupInvitationsRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGroupsListGroupInvitationsRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGroupsListGroupInvitationsRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GroupsListGroupInvitationsRequest"), sizeof(FGroupsListGroupInvitationsRequest), Get_Z_Construct_UScriptStruct_FGroupsListGroupInvitationsRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGroupsListGroupInvitationsRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGroupsListGroupInvitationsRequest_Hash() { return 3841440615U; }

static_assert(std::is_polymorphic<FGroupsListGroupBlocksResponse>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FGroupsListGroupBlocksResponse cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

class UScriptStruct* FGroupsListGroupBlocksResponse::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FGroupsListGroupBlocksResponse_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGroupsListGroupBlocksResponse, Z_Construct_UPackage__Script_PlayFab(), TEXT("GroupsListGroupBlocksResponse"), sizeof(FGroupsListGroupBlocksResponse), Get_Z_Construct_UScriptStruct_FGroupsListGroupBlocksResponse_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FGroupsListGroupBlocksResponse>()
{
	return FGroupsListGroupBlocksResponse::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGroupsListGroupBlocksResponse(FGroupsListGroupBlocksResponse::StaticStruct, TEXT("/Script/PlayFab"), TEXT("GroupsListGroupBlocksResponse"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFGroupsListGroupBlocksResponse
{
	FScriptStruct_PlayFab_StaticRegisterNativesFGroupsListGroupBlocksResponse()
	{
		UScriptStruct::DeferCppStructOps<FGroupsListGroupBlocksResponse>(FName(TEXT("GroupsListGroupBlocksResponse")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFGroupsListGroupBlocksResponse;
	struct Z_Construct_UScriptStruct_FGroupsListGroupBlocksResponse_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BlockedEntities_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlockedEntities_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BlockedEntities;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsListGroupBlocksResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGroupsListGroupBlocksResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGroupsListGroupBlocksResponse>();
	}
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGroupsListGroupBlocksResponse_Statics::NewProp_BlockedEntities_Inner = { "BlockedEntities", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsListGroupBlocksResponse_Statics::NewProp_BlockedEntities_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** The requested list blocked entities. */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "The requested list blocked entities." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGroupsListGroupBlocksResponse_Statics::NewProp_BlockedEntities = { "BlockedEntities", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGroupsListGroupBlocksResponse, BlockedEntities), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsListGroupBlocksResponse_Statics::NewProp_BlockedEntities_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsListGroupBlocksResponse_Statics::NewProp_BlockedEntities_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGroupsListGroupBlocksResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsListGroupBlocksResponse_Statics::NewProp_BlockedEntities_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsListGroupBlocksResponse_Statics::NewProp_BlockedEntities,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGroupsListGroupBlocksResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"GroupsListGroupBlocksResponse",
		sizeof(FGroupsListGroupBlocksResponse),
		alignof(FGroupsListGroupBlocksResponse),
		Z_Construct_UScriptStruct_FGroupsListGroupBlocksResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsListGroupBlocksResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsListGroupBlocksResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsListGroupBlocksResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGroupsListGroupBlocksResponse()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGroupsListGroupBlocksResponse_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GroupsListGroupBlocksResponse"), sizeof(FGroupsListGroupBlocksResponse), Get_Z_Construct_UScriptStruct_FGroupsListGroupBlocksResponse_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGroupsListGroupBlocksResponse_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGroupsListGroupBlocksResponse_Hash() { return 3093607666U; }

static_assert(std::is_polymorphic<FGroupsListGroupBlocksRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FGroupsListGroupBlocksRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FGroupsListGroupBlocksRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FGroupsListGroupBlocksRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGroupsListGroupBlocksRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("GroupsListGroupBlocksRequest"), sizeof(FGroupsListGroupBlocksRequest), Get_Z_Construct_UScriptStruct_FGroupsListGroupBlocksRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FGroupsListGroupBlocksRequest>()
{
	return FGroupsListGroupBlocksRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGroupsListGroupBlocksRequest(FGroupsListGroupBlocksRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("GroupsListGroupBlocksRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFGroupsListGroupBlocksRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFGroupsListGroupBlocksRequest()
	{
		UScriptStruct::DeferCppStructOps<FGroupsListGroupBlocksRequest>(FName(TEXT("GroupsListGroupBlocksRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFGroupsListGroupBlocksRequest;
	struct Z_Construct_UScriptStruct_FGroupsListGroupBlocksRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CustomTags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Group_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Group;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsListGroupBlocksRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Lists all entities blocked from joining a group. A list of blocked entities is returned */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "Lists all entities blocked from joining a group. A list of blocked entities is returned" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGroupsListGroupBlocksRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGroupsListGroupBlocksRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsListGroupBlocksRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGroupsListGroupBlocksRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGroupsListGroupBlocksRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsListGroupBlocksRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsListGroupBlocksRequest_Statics::NewProp_CustomTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsListGroupBlocksRequest_Statics::NewProp_Group_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** The identifier of the group */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "The identifier of the group" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGroupsListGroupBlocksRequest_Statics::NewProp_Group = { "Group", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGroupsListGroupBlocksRequest, Group), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsListGroupBlocksRequest_Statics::NewProp_Group_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsListGroupBlocksRequest_Statics::NewProp_Group_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGroupsListGroupBlocksRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsListGroupBlocksRequest_Statics::NewProp_CustomTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsListGroupBlocksRequest_Statics::NewProp_Group,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGroupsListGroupBlocksRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"GroupsListGroupBlocksRequest",
		sizeof(FGroupsListGroupBlocksRequest),
		alignof(FGroupsListGroupBlocksRequest),
		Z_Construct_UScriptStruct_FGroupsListGroupBlocksRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsListGroupBlocksRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsListGroupBlocksRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsListGroupBlocksRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGroupsListGroupBlocksRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGroupsListGroupBlocksRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GroupsListGroupBlocksRequest"), sizeof(FGroupsListGroupBlocksRequest), Get_Z_Construct_UScriptStruct_FGroupsListGroupBlocksRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGroupsListGroupBlocksRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGroupsListGroupBlocksRequest_Hash() { return 2832616045U; }

static_assert(std::is_polymorphic<FGroupsListGroupApplicationsResponse>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FGroupsListGroupApplicationsResponse cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

class UScriptStruct* FGroupsListGroupApplicationsResponse::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FGroupsListGroupApplicationsResponse_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGroupsListGroupApplicationsResponse, Z_Construct_UPackage__Script_PlayFab(), TEXT("GroupsListGroupApplicationsResponse"), sizeof(FGroupsListGroupApplicationsResponse), Get_Z_Construct_UScriptStruct_FGroupsListGroupApplicationsResponse_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FGroupsListGroupApplicationsResponse>()
{
	return FGroupsListGroupApplicationsResponse::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGroupsListGroupApplicationsResponse(FGroupsListGroupApplicationsResponse::StaticStruct, TEXT("/Script/PlayFab"), TEXT("GroupsListGroupApplicationsResponse"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFGroupsListGroupApplicationsResponse
{
	FScriptStruct_PlayFab_StaticRegisterNativesFGroupsListGroupApplicationsResponse()
	{
		UScriptStruct::DeferCppStructOps<FGroupsListGroupApplicationsResponse>(FName(TEXT("GroupsListGroupApplicationsResponse")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFGroupsListGroupApplicationsResponse;
	struct Z_Construct_UScriptStruct_FGroupsListGroupApplicationsResponse_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Applications_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Applications_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Applications;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsListGroupApplicationsResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGroupsListGroupApplicationsResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGroupsListGroupApplicationsResponse>();
	}
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGroupsListGroupApplicationsResponse_Statics::NewProp_Applications_Inner = { "Applications", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsListGroupApplicationsResponse_Statics::NewProp_Applications_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** The requested list of applications to the group. */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "The requested list of applications to the group." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGroupsListGroupApplicationsResponse_Statics::NewProp_Applications = { "Applications", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGroupsListGroupApplicationsResponse, Applications), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsListGroupApplicationsResponse_Statics::NewProp_Applications_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsListGroupApplicationsResponse_Statics::NewProp_Applications_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGroupsListGroupApplicationsResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsListGroupApplicationsResponse_Statics::NewProp_Applications_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsListGroupApplicationsResponse_Statics::NewProp_Applications,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGroupsListGroupApplicationsResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"GroupsListGroupApplicationsResponse",
		sizeof(FGroupsListGroupApplicationsResponse),
		alignof(FGroupsListGroupApplicationsResponse),
		Z_Construct_UScriptStruct_FGroupsListGroupApplicationsResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsListGroupApplicationsResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsListGroupApplicationsResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsListGroupApplicationsResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGroupsListGroupApplicationsResponse()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGroupsListGroupApplicationsResponse_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GroupsListGroupApplicationsResponse"), sizeof(FGroupsListGroupApplicationsResponse), Get_Z_Construct_UScriptStruct_FGroupsListGroupApplicationsResponse_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGroupsListGroupApplicationsResponse_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGroupsListGroupApplicationsResponse_Hash() { return 1610212341U; }

static_assert(std::is_polymorphic<FGroupsListGroupApplicationsRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FGroupsListGroupApplicationsRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FGroupsListGroupApplicationsRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FGroupsListGroupApplicationsRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGroupsListGroupApplicationsRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("GroupsListGroupApplicationsRequest"), sizeof(FGroupsListGroupApplicationsRequest), Get_Z_Construct_UScriptStruct_FGroupsListGroupApplicationsRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FGroupsListGroupApplicationsRequest>()
{
	return FGroupsListGroupApplicationsRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGroupsListGroupApplicationsRequest(FGroupsListGroupApplicationsRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("GroupsListGroupApplicationsRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFGroupsListGroupApplicationsRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFGroupsListGroupApplicationsRequest()
	{
		UScriptStruct::DeferCppStructOps<FGroupsListGroupApplicationsRequest>(FName(TEXT("GroupsListGroupApplicationsRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFGroupsListGroupApplicationsRequest;
	struct Z_Construct_UScriptStruct_FGroupsListGroupApplicationsRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CustomTags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Group_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Group;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsListGroupApplicationsRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Lists all outstanding requests to join a group. Returns a list of all requests to join, as well as when the request will\n * expire. To get the group applications for a specific entity, use ListMembershipOpportunities.\n */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "Lists all outstanding requests to join a group. Returns a list of all requests to join, as well as when the request will\nexpire. To get the group applications for a specific entity, use ListMembershipOpportunities." },
	};
#endif
	void* Z_Construct_UScriptStruct_FGroupsListGroupApplicationsRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGroupsListGroupApplicationsRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsListGroupApplicationsRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGroupsListGroupApplicationsRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGroupsListGroupApplicationsRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsListGroupApplicationsRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsListGroupApplicationsRequest_Statics::NewProp_CustomTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsListGroupApplicationsRequest_Statics::NewProp_Group_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** The identifier of the group */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "The identifier of the group" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGroupsListGroupApplicationsRequest_Statics::NewProp_Group = { "Group", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGroupsListGroupApplicationsRequest, Group), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsListGroupApplicationsRequest_Statics::NewProp_Group_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsListGroupApplicationsRequest_Statics::NewProp_Group_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGroupsListGroupApplicationsRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsListGroupApplicationsRequest_Statics::NewProp_CustomTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsListGroupApplicationsRequest_Statics::NewProp_Group,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGroupsListGroupApplicationsRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"GroupsListGroupApplicationsRequest",
		sizeof(FGroupsListGroupApplicationsRequest),
		alignof(FGroupsListGroupApplicationsRequest),
		Z_Construct_UScriptStruct_FGroupsListGroupApplicationsRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsListGroupApplicationsRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsListGroupApplicationsRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsListGroupApplicationsRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGroupsListGroupApplicationsRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGroupsListGroupApplicationsRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GroupsListGroupApplicationsRequest"), sizeof(FGroupsListGroupApplicationsRequest), Get_Z_Construct_UScriptStruct_FGroupsListGroupApplicationsRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGroupsListGroupApplicationsRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGroupsListGroupApplicationsRequest_Hash() { return 907737927U; }

static_assert(std::is_polymorphic<FGroupsIsMemberResponse>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FGroupsIsMemberResponse cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

class UScriptStruct* FGroupsIsMemberResponse::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FGroupsIsMemberResponse_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGroupsIsMemberResponse, Z_Construct_UPackage__Script_PlayFab(), TEXT("GroupsIsMemberResponse"), sizeof(FGroupsIsMemberResponse), Get_Z_Construct_UScriptStruct_FGroupsIsMemberResponse_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FGroupsIsMemberResponse>()
{
	return FGroupsIsMemberResponse::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGroupsIsMemberResponse(FGroupsIsMemberResponse::StaticStruct, TEXT("/Script/PlayFab"), TEXT("GroupsIsMemberResponse"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFGroupsIsMemberResponse
{
	FScriptStruct_PlayFab_StaticRegisterNativesFGroupsIsMemberResponse()
	{
		UScriptStruct::DeferCppStructOps<FGroupsIsMemberResponse>(FName(TEXT("GroupsIsMemberResponse")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFGroupsIsMemberResponse;
	struct Z_Construct_UScriptStruct_FGroupsIsMemberResponse_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsMember_MetaData[];
#endif
		static void NewProp_IsMember_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsMember;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsIsMemberResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGroupsIsMemberResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGroupsIsMemberResponse>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsIsMemberResponse_Statics::NewProp_IsMember_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** A value indicating whether or not the entity is a member. */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "A value indicating whether or not the entity is a member." },
	};
#endif
	void Z_Construct_UScriptStruct_FGroupsIsMemberResponse_Statics::NewProp_IsMember_SetBit(void* Obj)
	{
		((FGroupsIsMemberResponse*)Obj)->IsMember = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGroupsIsMemberResponse_Statics::NewProp_IsMember = { "IsMember", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGroupsIsMemberResponse), &Z_Construct_UScriptStruct_FGroupsIsMemberResponse_Statics::NewProp_IsMember_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsIsMemberResponse_Statics::NewProp_IsMember_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsIsMemberResponse_Statics::NewProp_IsMember_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGroupsIsMemberResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsIsMemberResponse_Statics::NewProp_IsMember,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGroupsIsMemberResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"GroupsIsMemberResponse",
		sizeof(FGroupsIsMemberResponse),
		alignof(FGroupsIsMemberResponse),
		Z_Construct_UScriptStruct_FGroupsIsMemberResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsIsMemberResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsIsMemberResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsIsMemberResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGroupsIsMemberResponse()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGroupsIsMemberResponse_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GroupsIsMemberResponse"), sizeof(FGroupsIsMemberResponse), Get_Z_Construct_UScriptStruct_FGroupsIsMemberResponse_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGroupsIsMemberResponse_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGroupsIsMemberResponse_Hash() { return 799167394U; }

static_assert(std::is_polymorphic<FGroupsIsMemberRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FGroupsIsMemberRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FGroupsIsMemberRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FGroupsIsMemberRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGroupsIsMemberRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("GroupsIsMemberRequest"), sizeof(FGroupsIsMemberRequest), Get_Z_Construct_UScriptStruct_FGroupsIsMemberRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FGroupsIsMemberRequest>()
{
	return FGroupsIsMemberRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGroupsIsMemberRequest(FGroupsIsMemberRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("GroupsIsMemberRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFGroupsIsMemberRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFGroupsIsMemberRequest()
	{
		UScriptStruct::DeferCppStructOps<FGroupsIsMemberRequest>(FName(TEXT("GroupsIsMemberRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFGroupsIsMemberRequest;
	struct Z_Construct_UScriptStruct_FGroupsIsMemberRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CustomTags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Entity_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Entity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Group_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Group;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RoleId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RoleId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsIsMemberRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Checks to see if an entity is a member of a group or role within the group. A result indicating if the entity is a\n * member of the group is returned, or a permission error if the caller does not have permission to read the group's member\n * list.\n */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "Checks to see if an entity is a member of a group or role within the group. A result indicating if the entity is a\nmember of the group is returned, or a permission error if the caller does not have permission to read the group's member\nlist." },
	};
#endif
	void* Z_Construct_UScriptStruct_FGroupsIsMemberRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGroupsIsMemberRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsIsMemberRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGroupsIsMemberRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGroupsIsMemberRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsIsMemberRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsIsMemberRequest_Statics::NewProp_CustomTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsIsMemberRequest_Statics::NewProp_Entity_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** The entity to perform this action on. */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "The entity to perform this action on." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGroupsIsMemberRequest_Statics::NewProp_Entity = { "Entity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGroupsIsMemberRequest, Entity), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsIsMemberRequest_Statics::NewProp_Entity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsIsMemberRequest_Statics::NewProp_Entity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsIsMemberRequest_Statics::NewProp_Group_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** The identifier of the group */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "The identifier of the group" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGroupsIsMemberRequest_Statics::NewProp_Group = { "Group", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGroupsIsMemberRequest, Group), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsIsMemberRequest_Statics::NewProp_Group_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsIsMemberRequest_Statics::NewProp_Group_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsIsMemberRequest_Statics::NewProp_RoleId_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/**\n     * Optional: ID of the role to check membership of. Defaults to any role (that is, check to see if the entity is a member\n     * of the group in any capacity) if not specified.\n     */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "Optional: ID of the role to check membership of. Defaults to any role (that is, check to see if the entity is a member\nof the group in any capacity) if not specified." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGroupsIsMemberRequest_Statics::NewProp_RoleId = { "RoleId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGroupsIsMemberRequest, RoleId), METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsIsMemberRequest_Statics::NewProp_RoleId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsIsMemberRequest_Statics::NewProp_RoleId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGroupsIsMemberRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsIsMemberRequest_Statics::NewProp_CustomTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsIsMemberRequest_Statics::NewProp_Entity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsIsMemberRequest_Statics::NewProp_Group,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsIsMemberRequest_Statics::NewProp_RoleId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGroupsIsMemberRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"GroupsIsMemberRequest",
		sizeof(FGroupsIsMemberRequest),
		alignof(FGroupsIsMemberRequest),
		Z_Construct_UScriptStruct_FGroupsIsMemberRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsIsMemberRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsIsMemberRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsIsMemberRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGroupsIsMemberRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGroupsIsMemberRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GroupsIsMemberRequest"), sizeof(FGroupsIsMemberRequest), Get_Z_Construct_UScriptStruct_FGroupsIsMemberRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGroupsIsMemberRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGroupsIsMemberRequest_Hash() { return 2236931173U; }

static_assert(std::is_polymorphic<FGroupsInviteToGroupResponse>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FGroupsInviteToGroupResponse cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

class UScriptStruct* FGroupsInviteToGroupResponse::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FGroupsInviteToGroupResponse_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGroupsInviteToGroupResponse, Z_Construct_UPackage__Script_PlayFab(), TEXT("GroupsInviteToGroupResponse"), sizeof(FGroupsInviteToGroupResponse), Get_Z_Construct_UScriptStruct_FGroupsInviteToGroupResponse_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FGroupsInviteToGroupResponse>()
{
	return FGroupsInviteToGroupResponse::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGroupsInviteToGroupResponse(FGroupsInviteToGroupResponse::StaticStruct, TEXT("/Script/PlayFab"), TEXT("GroupsInviteToGroupResponse"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFGroupsInviteToGroupResponse
{
	FScriptStruct_PlayFab_StaticRegisterNativesFGroupsInviteToGroupResponse()
	{
		UScriptStruct::DeferCppStructOps<FGroupsInviteToGroupResponse>(FName(TEXT("GroupsInviteToGroupResponse")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFGroupsInviteToGroupResponse;
	struct Z_Construct_UScriptStruct_FGroupsInviteToGroupResponse_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Expires_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Expires;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Group_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Group;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InvitedByEntity_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InvitedByEntity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InvitedEntity_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InvitedEntity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RoleId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RoleId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsInviteToGroupResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Describes an invitation to a group. */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "Describes an invitation to a group." },
	};
#endif
	void* Z_Construct_UScriptStruct_FGroupsInviteToGroupResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGroupsInviteToGroupResponse>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsInviteToGroupResponse_Statics::NewProp_Expires_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** When the invitation will expire and be deleted */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "When the invitation will expire and be deleted" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGroupsInviteToGroupResponse_Statics::NewProp_Expires = { "Expires", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGroupsInviteToGroupResponse, Expires), METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsInviteToGroupResponse_Statics::NewProp_Expires_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsInviteToGroupResponse_Statics::NewProp_Expires_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsInviteToGroupResponse_Statics::NewProp_Group_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** The group that the entity invited to */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "The group that the entity invited to" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGroupsInviteToGroupResponse_Statics::NewProp_Group = { "Group", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGroupsInviteToGroupResponse, Group), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsInviteToGroupResponse_Statics::NewProp_Group_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsInviteToGroupResponse_Statics::NewProp_Group_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsInviteToGroupResponse_Statics::NewProp_InvitedByEntity_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** The entity that created the invitation */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "The entity that created the invitation" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGroupsInviteToGroupResponse_Statics::NewProp_InvitedByEntity = { "InvitedByEntity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGroupsInviteToGroupResponse, InvitedByEntity), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsInviteToGroupResponse_Statics::NewProp_InvitedByEntity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsInviteToGroupResponse_Statics::NewProp_InvitedByEntity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsInviteToGroupResponse_Statics::NewProp_InvitedEntity_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** The entity that is invited */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "The entity that is invited" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGroupsInviteToGroupResponse_Statics::NewProp_InvitedEntity = { "InvitedEntity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGroupsInviteToGroupResponse, InvitedEntity), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsInviteToGroupResponse_Statics::NewProp_InvitedEntity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsInviteToGroupResponse_Statics::NewProp_InvitedEntity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsInviteToGroupResponse_Statics::NewProp_RoleId_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** ID of the role in the group to assign the user to. */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "ID of the role in the group to assign the user to." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGroupsInviteToGroupResponse_Statics::NewProp_RoleId = { "RoleId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGroupsInviteToGroupResponse, RoleId), METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsInviteToGroupResponse_Statics::NewProp_RoleId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsInviteToGroupResponse_Statics::NewProp_RoleId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGroupsInviteToGroupResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsInviteToGroupResponse_Statics::NewProp_Expires,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsInviteToGroupResponse_Statics::NewProp_Group,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsInviteToGroupResponse_Statics::NewProp_InvitedByEntity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsInviteToGroupResponse_Statics::NewProp_InvitedEntity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsInviteToGroupResponse_Statics::NewProp_RoleId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGroupsInviteToGroupResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"GroupsInviteToGroupResponse",
		sizeof(FGroupsInviteToGroupResponse),
		alignof(FGroupsInviteToGroupResponse),
		Z_Construct_UScriptStruct_FGroupsInviteToGroupResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsInviteToGroupResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsInviteToGroupResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsInviteToGroupResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGroupsInviteToGroupResponse()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGroupsInviteToGroupResponse_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GroupsInviteToGroupResponse"), sizeof(FGroupsInviteToGroupResponse), Get_Z_Construct_UScriptStruct_FGroupsInviteToGroupResponse_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGroupsInviteToGroupResponse_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGroupsInviteToGroupResponse_Hash() { return 2336771715U; }

static_assert(std::is_polymorphic<FGroupsInviteToGroupRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FGroupsInviteToGroupRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FGroupsInviteToGroupRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FGroupsInviteToGroupRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGroupsInviteToGroupRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("GroupsInviteToGroupRequest"), sizeof(FGroupsInviteToGroupRequest), Get_Z_Construct_UScriptStruct_FGroupsInviteToGroupRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FGroupsInviteToGroupRequest>()
{
	return FGroupsInviteToGroupRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGroupsInviteToGroupRequest(FGroupsInviteToGroupRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("GroupsInviteToGroupRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFGroupsInviteToGroupRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFGroupsInviteToGroupRequest()
	{
		UScriptStruct::DeferCppStructOps<FGroupsInviteToGroupRequest>(FName(TEXT("GroupsInviteToGroupRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFGroupsInviteToGroupRequest;
	struct Z_Construct_UScriptStruct_FGroupsInviteToGroupRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AutoAcceptOutstandingApplication_MetaData[];
#endif
		static void NewProp_AutoAcceptOutstandingApplication_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AutoAcceptOutstandingApplication;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CustomTags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Entity_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Entity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Group_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Group;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RoleId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RoleId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsInviteToGroupRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Invites a player to join a group, if they are not blocked by the group. An optional role can be provided to\n * automatically assign the player to the role if they accept the invitation. By default, if the entity has an application\n * to the group outstanding, this will accept the application instead and return an error indicating such, rather than\n * creating a duplicate invitation to join that will need to be cleaned up later. Returns information about the new\n * invitation or an error indicating an existing application to join was accepted.\n */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "Invites a player to join a group, if they are not blocked by the group. An optional role can be provided to\nautomatically assign the player to the role if they accept the invitation. By default, if the entity has an application\nto the group outstanding, this will accept the application instead and return an error indicating such, rather than\ncreating a duplicate invitation to join that will need to be cleaned up later. Returns information about the new\ninvitation or an error indicating an existing application to join was accepted." },
	};
#endif
	void* Z_Construct_UScriptStruct_FGroupsInviteToGroupRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGroupsInviteToGroupRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsInviteToGroupRequest_Statics::NewProp_AutoAcceptOutstandingApplication_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** Optional, default true. Automatically accept an application if one exists instead of creating an invitation */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "Optional, default true. Automatically accept an application if one exists instead of creating an invitation" },
	};
#endif
	void Z_Construct_UScriptStruct_FGroupsInviteToGroupRequest_Statics::NewProp_AutoAcceptOutstandingApplication_SetBit(void* Obj)
	{
		((FGroupsInviteToGroupRequest*)Obj)->AutoAcceptOutstandingApplication = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGroupsInviteToGroupRequest_Statics::NewProp_AutoAcceptOutstandingApplication = { "AutoAcceptOutstandingApplication", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGroupsInviteToGroupRequest), &Z_Construct_UScriptStruct_FGroupsInviteToGroupRequest_Statics::NewProp_AutoAcceptOutstandingApplication_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsInviteToGroupRequest_Statics::NewProp_AutoAcceptOutstandingApplication_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsInviteToGroupRequest_Statics::NewProp_AutoAcceptOutstandingApplication_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsInviteToGroupRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGroupsInviteToGroupRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGroupsInviteToGroupRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsInviteToGroupRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsInviteToGroupRequest_Statics::NewProp_CustomTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsInviteToGroupRequest_Statics::NewProp_Entity_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** The entity to perform this action on. */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "The entity to perform this action on." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGroupsInviteToGroupRequest_Statics::NewProp_Entity = { "Entity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGroupsInviteToGroupRequest, Entity), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsInviteToGroupRequest_Statics::NewProp_Entity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsInviteToGroupRequest_Statics::NewProp_Entity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsInviteToGroupRequest_Statics::NewProp_Group_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** The identifier of the group */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "The identifier of the group" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGroupsInviteToGroupRequest_Statics::NewProp_Group = { "Group", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGroupsInviteToGroupRequest, Group), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsInviteToGroupRequest_Statics::NewProp_Group_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsInviteToGroupRequest_Statics::NewProp_Group_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsInviteToGroupRequest_Statics::NewProp_RoleId_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/**\n     * Optional. ID of an existing a role in the group to assign the user to. The group's default member role is used if this\n     * is not specified. Role IDs must be between 1 and 64 characters long.\n     */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "Optional. ID of an existing a role in the group to assign the user to. The group's default member role is used if this\nis not specified. Role IDs must be between 1 and 64 characters long." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGroupsInviteToGroupRequest_Statics::NewProp_RoleId = { "RoleId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGroupsInviteToGroupRequest, RoleId), METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsInviteToGroupRequest_Statics::NewProp_RoleId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsInviteToGroupRequest_Statics::NewProp_RoleId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGroupsInviteToGroupRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsInviteToGroupRequest_Statics::NewProp_AutoAcceptOutstandingApplication,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsInviteToGroupRequest_Statics::NewProp_CustomTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsInviteToGroupRequest_Statics::NewProp_Entity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsInviteToGroupRequest_Statics::NewProp_Group,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsInviteToGroupRequest_Statics::NewProp_RoleId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGroupsInviteToGroupRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"GroupsInviteToGroupRequest",
		sizeof(FGroupsInviteToGroupRequest),
		alignof(FGroupsInviteToGroupRequest),
		Z_Construct_UScriptStruct_FGroupsInviteToGroupRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsInviteToGroupRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsInviteToGroupRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsInviteToGroupRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGroupsInviteToGroupRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGroupsInviteToGroupRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GroupsInviteToGroupRequest"), sizeof(FGroupsInviteToGroupRequest), Get_Z_Construct_UScriptStruct_FGroupsInviteToGroupRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGroupsInviteToGroupRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGroupsInviteToGroupRequest_Hash() { return 480545155U; }

static_assert(std::is_polymorphic<FGroupsGetGroupResponse>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FGroupsGetGroupResponse cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

class UScriptStruct* FGroupsGetGroupResponse::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FGroupsGetGroupResponse_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGroupsGetGroupResponse, Z_Construct_UPackage__Script_PlayFab(), TEXT("GroupsGetGroupResponse"), sizeof(FGroupsGetGroupResponse), Get_Z_Construct_UScriptStruct_FGroupsGetGroupResponse_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FGroupsGetGroupResponse>()
{
	return FGroupsGetGroupResponse::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGroupsGetGroupResponse(FGroupsGetGroupResponse::StaticStruct, TEXT("/Script/PlayFab"), TEXT("GroupsGetGroupResponse"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFGroupsGetGroupResponse
{
	FScriptStruct_PlayFab_StaticRegisterNativesFGroupsGetGroupResponse()
	{
		UScriptStruct::DeferCppStructOps<FGroupsGetGroupResponse>(FName(TEXT("GroupsGetGroupResponse")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFGroupsGetGroupResponse;
	struct Z_Construct_UScriptStruct_FGroupsGetGroupResponse_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdminRoleId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AdminRoleId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Created_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Created;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Group_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Group;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GroupName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_GroupName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MemberRoleId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MemberRoleId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProfileVersion_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ProfileVersion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Roles_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Roles;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsGetGroupResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGroupsGetGroupResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGroupsGetGroupResponse>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsGetGroupResponse_Statics::NewProp_AdminRoleId_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** The ID of the administrator role for the group. */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "The ID of the administrator role for the group." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGroupsGetGroupResponse_Statics::NewProp_AdminRoleId = { "AdminRoleId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGroupsGetGroupResponse, AdminRoleId), METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsGetGroupResponse_Statics::NewProp_AdminRoleId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsGetGroupResponse_Statics::NewProp_AdminRoleId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsGetGroupResponse_Statics::NewProp_Created_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** The server date and time the group was created. */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "The server date and time the group was created." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGroupsGetGroupResponse_Statics::NewProp_Created = { "Created", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGroupsGetGroupResponse, Created), METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsGetGroupResponse_Statics::NewProp_Created_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsGetGroupResponse_Statics::NewProp_Created_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsGetGroupResponse_Statics::NewProp_Group_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** The identifier of the group */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "The identifier of the group" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGroupsGetGroupResponse_Statics::NewProp_Group = { "Group", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGroupsGetGroupResponse, Group), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsGetGroupResponse_Statics::NewProp_Group_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsGetGroupResponse_Statics::NewProp_Group_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsGetGroupResponse_Statics::NewProp_GroupName_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** The name of the group. */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "The name of the group." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGroupsGetGroupResponse_Statics::NewProp_GroupName = { "GroupName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGroupsGetGroupResponse, GroupName), METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsGetGroupResponse_Statics::NewProp_GroupName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsGetGroupResponse_Statics::NewProp_GroupName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsGetGroupResponse_Statics::NewProp_MemberRoleId_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** The ID of the default member role for the group. */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "The ID of the default member role for the group." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGroupsGetGroupResponse_Statics::NewProp_MemberRoleId = { "MemberRoleId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGroupsGetGroupResponse, MemberRoleId), METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsGetGroupResponse_Statics::NewProp_MemberRoleId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsGetGroupResponse_Statics::NewProp_MemberRoleId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsGetGroupResponse_Statics::NewProp_ProfileVersion_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** The current version of the profile, can be used for concurrency control during updates. */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "The current version of the profile, can be used for concurrency control during updates." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGroupsGetGroupResponse_Statics::NewProp_ProfileVersion = { "ProfileVersion", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGroupsGetGroupResponse, ProfileVersion), METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsGetGroupResponse_Statics::NewProp_ProfileVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsGetGroupResponse_Statics::NewProp_ProfileVersion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsGetGroupResponse_Statics::NewProp_Roles_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** The list of roles and names that belong to the group. */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "The list of roles and names that belong to the group." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGroupsGetGroupResponse_Statics::NewProp_Roles = { "Roles", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGroupsGetGroupResponse, Roles), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsGetGroupResponse_Statics::NewProp_Roles_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsGetGroupResponse_Statics::NewProp_Roles_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGroupsGetGroupResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsGetGroupResponse_Statics::NewProp_AdminRoleId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsGetGroupResponse_Statics::NewProp_Created,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsGetGroupResponse_Statics::NewProp_Group,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsGetGroupResponse_Statics::NewProp_GroupName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsGetGroupResponse_Statics::NewProp_MemberRoleId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsGetGroupResponse_Statics::NewProp_ProfileVersion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsGetGroupResponse_Statics::NewProp_Roles,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGroupsGetGroupResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"GroupsGetGroupResponse",
		sizeof(FGroupsGetGroupResponse),
		alignof(FGroupsGetGroupResponse),
		Z_Construct_UScriptStruct_FGroupsGetGroupResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsGetGroupResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsGetGroupResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsGetGroupResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGroupsGetGroupResponse()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGroupsGetGroupResponse_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GroupsGetGroupResponse"), sizeof(FGroupsGetGroupResponse), Get_Z_Construct_UScriptStruct_FGroupsGetGroupResponse_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGroupsGetGroupResponse_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGroupsGetGroupResponse_Hash() { return 1195233136U; }

static_assert(std::is_polymorphic<FGroupsGetGroupRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FGroupsGetGroupRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FGroupsGetGroupRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FGroupsGetGroupRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGroupsGetGroupRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("GroupsGetGroupRequest"), sizeof(FGroupsGetGroupRequest), Get_Z_Construct_UScriptStruct_FGroupsGetGroupRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FGroupsGetGroupRequest>()
{
	return FGroupsGetGroupRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGroupsGetGroupRequest(FGroupsGetGroupRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("GroupsGetGroupRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFGroupsGetGroupRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFGroupsGetGroupRequest()
	{
		UScriptStruct::DeferCppStructOps<FGroupsGetGroupRequest>(FName(TEXT("GroupsGetGroupRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFGroupsGetGroupRequest;
	struct Z_Construct_UScriptStruct_FGroupsGetGroupRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CustomTags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Group_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Group;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GroupName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_GroupName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsGetGroupRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Returns the ID, name, role list and other non-membership related information about a group. */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "Returns the ID, name, role list and other non-membership related information about a group." },
	};
#endif
	void* Z_Construct_UScriptStruct_FGroupsGetGroupRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGroupsGetGroupRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsGetGroupRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGroupsGetGroupRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGroupsGetGroupRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsGetGroupRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsGetGroupRequest_Statics::NewProp_CustomTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsGetGroupRequest_Statics::NewProp_Group_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** The identifier of the group */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "The identifier of the group" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGroupsGetGroupRequest_Statics::NewProp_Group = { "Group", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGroupsGetGroupRequest, Group), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsGetGroupRequest_Statics::NewProp_Group_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsGetGroupRequest_Statics::NewProp_Group_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsGetGroupRequest_Statics::NewProp_GroupName_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** The full name of the group */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "The full name of the group" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGroupsGetGroupRequest_Statics::NewProp_GroupName = { "GroupName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGroupsGetGroupRequest, GroupName), METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsGetGroupRequest_Statics::NewProp_GroupName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsGetGroupRequest_Statics::NewProp_GroupName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGroupsGetGroupRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsGetGroupRequest_Statics::NewProp_CustomTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsGetGroupRequest_Statics::NewProp_Group,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsGetGroupRequest_Statics::NewProp_GroupName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGroupsGetGroupRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"GroupsGetGroupRequest",
		sizeof(FGroupsGetGroupRequest),
		alignof(FGroupsGetGroupRequest),
		Z_Construct_UScriptStruct_FGroupsGetGroupRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsGetGroupRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsGetGroupRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsGetGroupRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGroupsGetGroupRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGroupsGetGroupRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GroupsGetGroupRequest"), sizeof(FGroupsGetGroupRequest), Get_Z_Construct_UScriptStruct_FGroupsGetGroupRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGroupsGetGroupRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGroupsGetGroupRequest_Hash() { return 4244052578U; }

static_assert(std::is_polymorphic<FGroupsDeleteRoleRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FGroupsDeleteRoleRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FGroupsDeleteRoleRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FGroupsDeleteRoleRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGroupsDeleteRoleRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("GroupsDeleteRoleRequest"), sizeof(FGroupsDeleteRoleRequest), Get_Z_Construct_UScriptStruct_FGroupsDeleteRoleRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FGroupsDeleteRoleRequest>()
{
	return FGroupsDeleteRoleRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGroupsDeleteRoleRequest(FGroupsDeleteRoleRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("GroupsDeleteRoleRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFGroupsDeleteRoleRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFGroupsDeleteRoleRequest()
	{
		UScriptStruct::DeferCppStructOps<FGroupsDeleteRoleRequest>(FName(TEXT("GroupsDeleteRoleRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFGroupsDeleteRoleRequest;
	struct Z_Construct_UScriptStruct_FGroupsDeleteRoleRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CustomTags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Group_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Group;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RoleId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RoleId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsDeleteRoleRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Returns information about the role */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "Returns information about the role" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGroupsDeleteRoleRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGroupsDeleteRoleRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsDeleteRoleRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGroupsDeleteRoleRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGroupsDeleteRoleRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsDeleteRoleRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsDeleteRoleRequest_Statics::NewProp_CustomTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsDeleteRoleRequest_Statics::NewProp_Group_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** The identifier of the group */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "The identifier of the group" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGroupsDeleteRoleRequest_Statics::NewProp_Group = { "Group", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGroupsDeleteRoleRequest, Group), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsDeleteRoleRequest_Statics::NewProp_Group_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsDeleteRoleRequest_Statics::NewProp_Group_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsDeleteRoleRequest_Statics::NewProp_RoleId_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** The ID of the role to delete. Role IDs must be between 1 and 64 characters long. */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "The ID of the role to delete. Role IDs must be between 1 and 64 characters long." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGroupsDeleteRoleRequest_Statics::NewProp_RoleId = { "RoleId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGroupsDeleteRoleRequest, RoleId), METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsDeleteRoleRequest_Statics::NewProp_RoleId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsDeleteRoleRequest_Statics::NewProp_RoleId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGroupsDeleteRoleRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsDeleteRoleRequest_Statics::NewProp_CustomTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsDeleteRoleRequest_Statics::NewProp_Group,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsDeleteRoleRequest_Statics::NewProp_RoleId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGroupsDeleteRoleRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"GroupsDeleteRoleRequest",
		sizeof(FGroupsDeleteRoleRequest),
		alignof(FGroupsDeleteRoleRequest),
		Z_Construct_UScriptStruct_FGroupsDeleteRoleRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsDeleteRoleRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsDeleteRoleRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsDeleteRoleRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGroupsDeleteRoleRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGroupsDeleteRoleRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GroupsDeleteRoleRequest"), sizeof(FGroupsDeleteRoleRequest), Get_Z_Construct_UScriptStruct_FGroupsDeleteRoleRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGroupsDeleteRoleRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGroupsDeleteRoleRequest_Hash() { return 3239279843U; }

static_assert(std::is_polymorphic<FGroupsDeleteGroupRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FGroupsDeleteGroupRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FGroupsDeleteGroupRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FGroupsDeleteGroupRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGroupsDeleteGroupRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("GroupsDeleteGroupRequest"), sizeof(FGroupsDeleteGroupRequest), Get_Z_Construct_UScriptStruct_FGroupsDeleteGroupRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FGroupsDeleteGroupRequest>()
{
	return FGroupsDeleteGroupRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGroupsDeleteGroupRequest(FGroupsDeleteGroupRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("GroupsDeleteGroupRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFGroupsDeleteGroupRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFGroupsDeleteGroupRequest()
	{
		UScriptStruct::DeferCppStructOps<FGroupsDeleteGroupRequest>(FName(TEXT("GroupsDeleteGroupRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFGroupsDeleteGroupRequest;
	struct Z_Construct_UScriptStruct_FGroupsDeleteGroupRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CustomTags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Group_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Group;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsDeleteGroupRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Deletes a group and all roles, invitations, join requests, and blocks associated with it. Permission to delete is only\n * required the group itself to execute this action. The group and data cannot be cannot be recovered once removed, but any\n * abuse reports about the group will remain. No data is returned in the case of success.\n */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "Deletes a group and all roles, invitations, join requests, and blocks associated with it. Permission to delete is only\nrequired the group itself to execute this action. The group and data cannot be cannot be recovered once removed, but any\nabuse reports about the group will remain. No data is returned in the case of success." },
	};
#endif
	void* Z_Construct_UScriptStruct_FGroupsDeleteGroupRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGroupsDeleteGroupRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsDeleteGroupRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGroupsDeleteGroupRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGroupsDeleteGroupRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsDeleteGroupRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsDeleteGroupRequest_Statics::NewProp_CustomTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsDeleteGroupRequest_Statics::NewProp_Group_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** ID of the group or role to remove */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "ID of the group or role to remove" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGroupsDeleteGroupRequest_Statics::NewProp_Group = { "Group", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGroupsDeleteGroupRequest, Group), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsDeleteGroupRequest_Statics::NewProp_Group_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsDeleteGroupRequest_Statics::NewProp_Group_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGroupsDeleteGroupRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsDeleteGroupRequest_Statics::NewProp_CustomTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsDeleteGroupRequest_Statics::NewProp_Group,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGroupsDeleteGroupRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"GroupsDeleteGroupRequest",
		sizeof(FGroupsDeleteGroupRequest),
		alignof(FGroupsDeleteGroupRequest),
		Z_Construct_UScriptStruct_FGroupsDeleteGroupRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsDeleteGroupRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsDeleteGroupRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsDeleteGroupRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGroupsDeleteGroupRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGroupsDeleteGroupRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GroupsDeleteGroupRequest"), sizeof(FGroupsDeleteGroupRequest), Get_Z_Construct_UScriptStruct_FGroupsDeleteGroupRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGroupsDeleteGroupRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGroupsDeleteGroupRequest_Hash() { return 12283318U; }

static_assert(std::is_polymorphic<FGroupsCreateGroupRoleResponse>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FGroupsCreateGroupRoleResponse cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

class UScriptStruct* FGroupsCreateGroupRoleResponse::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FGroupsCreateGroupRoleResponse_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGroupsCreateGroupRoleResponse, Z_Construct_UPackage__Script_PlayFab(), TEXT("GroupsCreateGroupRoleResponse"), sizeof(FGroupsCreateGroupRoleResponse), Get_Z_Construct_UScriptStruct_FGroupsCreateGroupRoleResponse_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FGroupsCreateGroupRoleResponse>()
{
	return FGroupsCreateGroupRoleResponse::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGroupsCreateGroupRoleResponse(FGroupsCreateGroupRoleResponse::StaticStruct, TEXT("/Script/PlayFab"), TEXT("GroupsCreateGroupRoleResponse"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFGroupsCreateGroupRoleResponse
{
	FScriptStruct_PlayFab_StaticRegisterNativesFGroupsCreateGroupRoleResponse()
	{
		UScriptStruct::DeferCppStructOps<FGroupsCreateGroupRoleResponse>(FName(TEXT("GroupsCreateGroupRoleResponse")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFGroupsCreateGroupRoleResponse;
	struct Z_Construct_UScriptStruct_FGroupsCreateGroupRoleResponse_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProfileVersion_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ProfileVersion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RoleId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RoleId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RoleName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RoleName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsCreateGroupRoleResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGroupsCreateGroupRoleResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGroupsCreateGroupRoleResponse>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsCreateGroupRoleResponse_Statics::NewProp_ProfileVersion_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** The current version of the group profile, can be used for concurrency control during updates. */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "The current version of the group profile, can be used for concurrency control during updates." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGroupsCreateGroupRoleResponse_Statics::NewProp_ProfileVersion = { "ProfileVersion", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGroupsCreateGroupRoleResponse, ProfileVersion), METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsCreateGroupRoleResponse_Statics::NewProp_ProfileVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsCreateGroupRoleResponse_Statics::NewProp_ProfileVersion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsCreateGroupRoleResponse_Statics::NewProp_RoleId_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** ID for the role */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "ID for the role" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGroupsCreateGroupRoleResponse_Statics::NewProp_RoleId = { "RoleId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGroupsCreateGroupRoleResponse, RoleId), METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsCreateGroupRoleResponse_Statics::NewProp_RoleId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsCreateGroupRoleResponse_Statics::NewProp_RoleId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsCreateGroupRoleResponse_Statics::NewProp_RoleName_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** The name of the role */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "The name of the role" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGroupsCreateGroupRoleResponse_Statics::NewProp_RoleName = { "RoleName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGroupsCreateGroupRoleResponse, RoleName), METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsCreateGroupRoleResponse_Statics::NewProp_RoleName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsCreateGroupRoleResponse_Statics::NewProp_RoleName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGroupsCreateGroupRoleResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsCreateGroupRoleResponse_Statics::NewProp_ProfileVersion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsCreateGroupRoleResponse_Statics::NewProp_RoleId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsCreateGroupRoleResponse_Statics::NewProp_RoleName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGroupsCreateGroupRoleResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"GroupsCreateGroupRoleResponse",
		sizeof(FGroupsCreateGroupRoleResponse),
		alignof(FGroupsCreateGroupRoleResponse),
		Z_Construct_UScriptStruct_FGroupsCreateGroupRoleResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsCreateGroupRoleResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsCreateGroupRoleResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsCreateGroupRoleResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGroupsCreateGroupRoleResponse()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGroupsCreateGroupRoleResponse_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GroupsCreateGroupRoleResponse"), sizeof(FGroupsCreateGroupRoleResponse), Get_Z_Construct_UScriptStruct_FGroupsCreateGroupRoleResponse_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGroupsCreateGroupRoleResponse_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGroupsCreateGroupRoleResponse_Hash() { return 1339577492U; }

static_assert(std::is_polymorphic<FGroupsCreateGroupRoleRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FGroupsCreateGroupRoleRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FGroupsCreateGroupRoleRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FGroupsCreateGroupRoleRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGroupsCreateGroupRoleRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("GroupsCreateGroupRoleRequest"), sizeof(FGroupsCreateGroupRoleRequest), Get_Z_Construct_UScriptStruct_FGroupsCreateGroupRoleRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FGroupsCreateGroupRoleRequest>()
{
	return FGroupsCreateGroupRoleRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGroupsCreateGroupRoleRequest(FGroupsCreateGroupRoleRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("GroupsCreateGroupRoleRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFGroupsCreateGroupRoleRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFGroupsCreateGroupRoleRequest()
	{
		UScriptStruct::DeferCppStructOps<FGroupsCreateGroupRoleRequest>(FName(TEXT("GroupsCreateGroupRoleRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFGroupsCreateGroupRoleRequest;
	struct Z_Construct_UScriptStruct_FGroupsCreateGroupRoleRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CustomTags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Group_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Group;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RoleId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RoleId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RoleName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RoleName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsCreateGroupRoleRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Creates a new role within an existing group, with no members. Both the role ID and role name must be unique within the\n * group, but the name can be the same as the ID. The role ID is set at creation and cannot be changed. Returns information\n * about the role that was created.\n */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "Creates a new role within an existing group, with no members. Both the role ID and role name must be unique within the\ngroup, but the name can be the same as the ID. The role ID is set at creation and cannot be changed. Returns information\nabout the role that was created." },
	};
#endif
	void* Z_Construct_UScriptStruct_FGroupsCreateGroupRoleRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGroupsCreateGroupRoleRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsCreateGroupRoleRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGroupsCreateGroupRoleRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGroupsCreateGroupRoleRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsCreateGroupRoleRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsCreateGroupRoleRequest_Statics::NewProp_CustomTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsCreateGroupRoleRequest_Statics::NewProp_Group_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** The identifier of the group */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "The identifier of the group" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGroupsCreateGroupRoleRequest_Statics::NewProp_Group = { "Group", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGroupsCreateGroupRoleRequest, Group), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsCreateGroupRoleRequest_Statics::NewProp_Group_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsCreateGroupRoleRequest_Statics::NewProp_Group_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsCreateGroupRoleRequest_Statics::NewProp_RoleId_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/**\n     * The ID of the role. This must be unique within the group and cannot be changed. Role IDs must be between 1 and 64\n     * characters long and are restricted to a-Z, A-Z, 0-9, '(', ')', '_', '-' and '.'.\n     */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "The ID of the role. This must be unique within the group and cannot be changed. Role IDs must be between 1 and 64\ncharacters long and are restricted to a-Z, A-Z, 0-9, '(', ')', '_', '-' and '.'." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGroupsCreateGroupRoleRequest_Statics::NewProp_RoleId = { "RoleId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGroupsCreateGroupRoleRequest, RoleId), METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsCreateGroupRoleRequest_Statics::NewProp_RoleId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsCreateGroupRoleRequest_Statics::NewProp_RoleId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsCreateGroupRoleRequest_Statics::NewProp_RoleName_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/**\n     * The name of the role. This must be unique within the group and can be changed later. Role names must be between 1 and\n     * 100 characters long\n     */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "The name of the role. This must be unique within the group and can be changed later. Role names must be between 1 and\n100 characters long" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGroupsCreateGroupRoleRequest_Statics::NewProp_RoleName = { "RoleName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGroupsCreateGroupRoleRequest, RoleName), METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsCreateGroupRoleRequest_Statics::NewProp_RoleName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsCreateGroupRoleRequest_Statics::NewProp_RoleName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGroupsCreateGroupRoleRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsCreateGroupRoleRequest_Statics::NewProp_CustomTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsCreateGroupRoleRequest_Statics::NewProp_Group,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsCreateGroupRoleRequest_Statics::NewProp_RoleId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsCreateGroupRoleRequest_Statics::NewProp_RoleName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGroupsCreateGroupRoleRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"GroupsCreateGroupRoleRequest",
		sizeof(FGroupsCreateGroupRoleRequest),
		alignof(FGroupsCreateGroupRoleRequest),
		Z_Construct_UScriptStruct_FGroupsCreateGroupRoleRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsCreateGroupRoleRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsCreateGroupRoleRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsCreateGroupRoleRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGroupsCreateGroupRoleRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGroupsCreateGroupRoleRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GroupsCreateGroupRoleRequest"), sizeof(FGroupsCreateGroupRoleRequest), Get_Z_Construct_UScriptStruct_FGroupsCreateGroupRoleRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGroupsCreateGroupRoleRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGroupsCreateGroupRoleRequest_Hash() { return 1128470763U; }

static_assert(std::is_polymorphic<FGroupsCreateGroupResponse>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FGroupsCreateGroupResponse cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

class UScriptStruct* FGroupsCreateGroupResponse::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FGroupsCreateGroupResponse_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGroupsCreateGroupResponse, Z_Construct_UPackage__Script_PlayFab(), TEXT("GroupsCreateGroupResponse"), sizeof(FGroupsCreateGroupResponse), Get_Z_Construct_UScriptStruct_FGroupsCreateGroupResponse_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FGroupsCreateGroupResponse>()
{
	return FGroupsCreateGroupResponse::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGroupsCreateGroupResponse(FGroupsCreateGroupResponse::StaticStruct, TEXT("/Script/PlayFab"), TEXT("GroupsCreateGroupResponse"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFGroupsCreateGroupResponse
{
	FScriptStruct_PlayFab_StaticRegisterNativesFGroupsCreateGroupResponse()
	{
		UScriptStruct::DeferCppStructOps<FGroupsCreateGroupResponse>(FName(TEXT("GroupsCreateGroupResponse")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFGroupsCreateGroupResponse;
	struct Z_Construct_UScriptStruct_FGroupsCreateGroupResponse_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdminRoleId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AdminRoleId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Created_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Created;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Group_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Group;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GroupName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_GroupName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MemberRoleId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MemberRoleId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProfileVersion_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ProfileVersion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Roles_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Roles;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsCreateGroupResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGroupsCreateGroupResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGroupsCreateGroupResponse>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsCreateGroupResponse_Statics::NewProp_AdminRoleId_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** The ID of the administrator role for the group. */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "The ID of the administrator role for the group." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGroupsCreateGroupResponse_Statics::NewProp_AdminRoleId = { "AdminRoleId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGroupsCreateGroupResponse, AdminRoleId), METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsCreateGroupResponse_Statics::NewProp_AdminRoleId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsCreateGroupResponse_Statics::NewProp_AdminRoleId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsCreateGroupResponse_Statics::NewProp_Created_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** The server date and time the group was created. */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "The server date and time the group was created." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGroupsCreateGroupResponse_Statics::NewProp_Created = { "Created", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGroupsCreateGroupResponse, Created), METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsCreateGroupResponse_Statics::NewProp_Created_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsCreateGroupResponse_Statics::NewProp_Created_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsCreateGroupResponse_Statics::NewProp_Group_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** The identifier of the group */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "The identifier of the group" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGroupsCreateGroupResponse_Statics::NewProp_Group = { "Group", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGroupsCreateGroupResponse, Group), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsCreateGroupResponse_Statics::NewProp_Group_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsCreateGroupResponse_Statics::NewProp_Group_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsCreateGroupResponse_Statics::NewProp_GroupName_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** The name of the group. */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "The name of the group." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGroupsCreateGroupResponse_Statics::NewProp_GroupName = { "GroupName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGroupsCreateGroupResponse, GroupName), METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsCreateGroupResponse_Statics::NewProp_GroupName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsCreateGroupResponse_Statics::NewProp_GroupName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsCreateGroupResponse_Statics::NewProp_MemberRoleId_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** The ID of the default member role for the group. */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "The ID of the default member role for the group." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGroupsCreateGroupResponse_Statics::NewProp_MemberRoleId = { "MemberRoleId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGroupsCreateGroupResponse, MemberRoleId), METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsCreateGroupResponse_Statics::NewProp_MemberRoleId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsCreateGroupResponse_Statics::NewProp_MemberRoleId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsCreateGroupResponse_Statics::NewProp_ProfileVersion_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** The current version of the profile, can be used for concurrency control during updates. */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "The current version of the profile, can be used for concurrency control during updates." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGroupsCreateGroupResponse_Statics::NewProp_ProfileVersion = { "ProfileVersion", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGroupsCreateGroupResponse, ProfileVersion), METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsCreateGroupResponse_Statics::NewProp_ProfileVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsCreateGroupResponse_Statics::NewProp_ProfileVersion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsCreateGroupResponse_Statics::NewProp_Roles_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** The list of roles and names that belong to the group. */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "The list of roles and names that belong to the group." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGroupsCreateGroupResponse_Statics::NewProp_Roles = { "Roles", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGroupsCreateGroupResponse, Roles), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsCreateGroupResponse_Statics::NewProp_Roles_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsCreateGroupResponse_Statics::NewProp_Roles_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGroupsCreateGroupResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsCreateGroupResponse_Statics::NewProp_AdminRoleId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsCreateGroupResponse_Statics::NewProp_Created,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsCreateGroupResponse_Statics::NewProp_Group,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsCreateGroupResponse_Statics::NewProp_GroupName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsCreateGroupResponse_Statics::NewProp_MemberRoleId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsCreateGroupResponse_Statics::NewProp_ProfileVersion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsCreateGroupResponse_Statics::NewProp_Roles,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGroupsCreateGroupResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"GroupsCreateGroupResponse",
		sizeof(FGroupsCreateGroupResponse),
		alignof(FGroupsCreateGroupResponse),
		Z_Construct_UScriptStruct_FGroupsCreateGroupResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsCreateGroupResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsCreateGroupResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsCreateGroupResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGroupsCreateGroupResponse()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGroupsCreateGroupResponse_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GroupsCreateGroupResponse"), sizeof(FGroupsCreateGroupResponse), Get_Z_Construct_UScriptStruct_FGroupsCreateGroupResponse_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGroupsCreateGroupResponse_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGroupsCreateGroupResponse_Hash() { return 2911683750U; }

static_assert(std::is_polymorphic<FGroupsCreateGroupRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FGroupsCreateGroupRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FGroupsCreateGroupRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FGroupsCreateGroupRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGroupsCreateGroupRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("GroupsCreateGroupRequest"), sizeof(FGroupsCreateGroupRequest), Get_Z_Construct_UScriptStruct_FGroupsCreateGroupRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FGroupsCreateGroupRequest>()
{
	return FGroupsCreateGroupRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGroupsCreateGroupRequest(FGroupsCreateGroupRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("GroupsCreateGroupRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFGroupsCreateGroupRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFGroupsCreateGroupRequest()
	{
		UScriptStruct::DeferCppStructOps<FGroupsCreateGroupRequest>(FName(TEXT("GroupsCreateGroupRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFGroupsCreateGroupRequest;
	struct Z_Construct_UScriptStruct_FGroupsCreateGroupRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CustomTags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Entity_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Entity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GroupName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_GroupName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsCreateGroupRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Creates a new group, as well as administration and member roles, based off of a title's group template. Returns\n * information about the group that was created.\n */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "Creates a new group, as well as administration and member roles, based off of a title's group template. Returns\ninformation about the group that was created." },
	};
#endif
	void* Z_Construct_UScriptStruct_FGroupsCreateGroupRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGroupsCreateGroupRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsCreateGroupRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGroupsCreateGroupRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGroupsCreateGroupRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsCreateGroupRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsCreateGroupRequest_Statics::NewProp_CustomTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsCreateGroupRequest_Statics::NewProp_Entity_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** The optional entity to perform this action on. Defaults to the currently logged in entity. */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "The optional entity to perform this action on. Defaults to the currently logged in entity." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGroupsCreateGroupRequest_Statics::NewProp_Entity = { "Entity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGroupsCreateGroupRequest, Entity), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsCreateGroupRequest_Statics::NewProp_Entity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsCreateGroupRequest_Statics::NewProp_Entity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsCreateGroupRequest_Statics::NewProp_GroupName_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** The name of the group. This is unique at the title level by default. */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "The name of the group. This is unique at the title level by default." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGroupsCreateGroupRequest_Statics::NewProp_GroupName = { "GroupName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGroupsCreateGroupRequest, GroupName), METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsCreateGroupRequest_Statics::NewProp_GroupName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsCreateGroupRequest_Statics::NewProp_GroupName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGroupsCreateGroupRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsCreateGroupRequest_Statics::NewProp_CustomTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsCreateGroupRequest_Statics::NewProp_Entity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsCreateGroupRequest_Statics::NewProp_GroupName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGroupsCreateGroupRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"GroupsCreateGroupRequest",
		sizeof(FGroupsCreateGroupRequest),
		alignof(FGroupsCreateGroupRequest),
		Z_Construct_UScriptStruct_FGroupsCreateGroupRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsCreateGroupRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsCreateGroupRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsCreateGroupRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGroupsCreateGroupRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGroupsCreateGroupRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GroupsCreateGroupRequest"), sizeof(FGroupsCreateGroupRequest), Get_Z_Construct_UScriptStruct_FGroupsCreateGroupRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGroupsCreateGroupRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGroupsCreateGroupRequest_Hash() { return 3322195559U; }

static_assert(std::is_polymorphic<FGroupsChangeMemberRoleRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FGroupsChangeMemberRoleRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FGroupsChangeMemberRoleRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FGroupsChangeMemberRoleRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGroupsChangeMemberRoleRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("GroupsChangeMemberRoleRequest"), sizeof(FGroupsChangeMemberRoleRequest), Get_Z_Construct_UScriptStruct_FGroupsChangeMemberRoleRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FGroupsChangeMemberRoleRequest>()
{
	return FGroupsChangeMemberRoleRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGroupsChangeMemberRoleRequest(FGroupsChangeMemberRoleRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("GroupsChangeMemberRoleRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFGroupsChangeMemberRoleRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFGroupsChangeMemberRoleRequest()
	{
		UScriptStruct::DeferCppStructOps<FGroupsChangeMemberRoleRequest>(FName(TEXT("GroupsChangeMemberRoleRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFGroupsChangeMemberRoleRequest;
	struct Z_Construct_UScriptStruct_FGroupsChangeMemberRoleRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CustomTags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DestinationRoleId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DestinationRoleId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Group_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Group;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Members_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Members_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Members;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OriginRoleId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OriginRoleId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsChangeMemberRoleRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Changes the role membership of a list of entities from one role to another in in a single operation. The destination\n * role must already exist. This is equivalent to adding the entities to the destination role and removing from the origin\n * role. Returns nothing if successful.\n */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "Changes the role membership of a list of entities from one role to another in in a single operation. The destination\nrole must already exist. This is equivalent to adding the entities to the destination role and removing from the origin\nrole. Returns nothing if successful." },
	};
#endif
	void* Z_Construct_UScriptStruct_FGroupsChangeMemberRoleRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGroupsChangeMemberRoleRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsChangeMemberRoleRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGroupsChangeMemberRoleRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGroupsChangeMemberRoleRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsChangeMemberRoleRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsChangeMemberRoleRequest_Statics::NewProp_CustomTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsChangeMemberRoleRequest_Statics::NewProp_DestinationRoleId_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/**\n     * The ID of the role that the entities will become a member of. This must be an existing role. Role IDs must be between 1\n     * and 64 characters long.\n     */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "The ID of the role that the entities will become a member of. This must be an existing role. Role IDs must be between 1\nand 64 characters long." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGroupsChangeMemberRoleRequest_Statics::NewProp_DestinationRoleId = { "DestinationRoleId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGroupsChangeMemberRoleRequest, DestinationRoleId), METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsChangeMemberRoleRequest_Statics::NewProp_DestinationRoleId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsChangeMemberRoleRequest_Statics::NewProp_DestinationRoleId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsChangeMemberRoleRequest_Statics::NewProp_Group_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** The identifier of the group */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "The identifier of the group" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGroupsChangeMemberRoleRequest_Statics::NewProp_Group = { "Group", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGroupsChangeMemberRoleRequest, Group), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsChangeMemberRoleRequest_Statics::NewProp_Group_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsChangeMemberRoleRequest_Statics::NewProp_Group_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGroupsChangeMemberRoleRequest_Statics::NewProp_Members_Inner = { "Members", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsChangeMemberRoleRequest_Statics::NewProp_Members_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/**\n     * List of entities to move between roles in the group. All entities in this list must be members of the group and origin\n     * role.\n     */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "List of entities to move between roles in the group. All entities in this list must be members of the group and origin\nrole." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGroupsChangeMemberRoleRequest_Statics::NewProp_Members = { "Members", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGroupsChangeMemberRoleRequest, Members), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsChangeMemberRoleRequest_Statics::NewProp_Members_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsChangeMemberRoleRequest_Statics::NewProp_Members_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsChangeMemberRoleRequest_Statics::NewProp_OriginRoleId_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** The ID of the role that the entities currently are a member of. Role IDs must be between 1 and 64 characters long. */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "The ID of the role that the entities currently are a member of. Role IDs must be between 1 and 64 characters long." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGroupsChangeMemberRoleRequest_Statics::NewProp_OriginRoleId = { "OriginRoleId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGroupsChangeMemberRoleRequest, OriginRoleId), METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsChangeMemberRoleRequest_Statics::NewProp_OriginRoleId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsChangeMemberRoleRequest_Statics::NewProp_OriginRoleId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGroupsChangeMemberRoleRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsChangeMemberRoleRequest_Statics::NewProp_CustomTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsChangeMemberRoleRequest_Statics::NewProp_DestinationRoleId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsChangeMemberRoleRequest_Statics::NewProp_Group,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsChangeMemberRoleRequest_Statics::NewProp_Members_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsChangeMemberRoleRequest_Statics::NewProp_Members,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsChangeMemberRoleRequest_Statics::NewProp_OriginRoleId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGroupsChangeMemberRoleRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"GroupsChangeMemberRoleRequest",
		sizeof(FGroupsChangeMemberRoleRequest),
		alignof(FGroupsChangeMemberRoleRequest),
		Z_Construct_UScriptStruct_FGroupsChangeMemberRoleRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsChangeMemberRoleRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsChangeMemberRoleRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsChangeMemberRoleRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGroupsChangeMemberRoleRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGroupsChangeMemberRoleRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GroupsChangeMemberRoleRequest"), sizeof(FGroupsChangeMemberRoleRequest), Get_Z_Construct_UScriptStruct_FGroupsChangeMemberRoleRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGroupsChangeMemberRoleRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGroupsChangeMemberRoleRequest_Hash() { return 611705766U; }

static_assert(std::is_polymorphic<FGroupsBlockEntityRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FGroupsBlockEntityRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FGroupsBlockEntityRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FGroupsBlockEntityRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGroupsBlockEntityRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("GroupsBlockEntityRequest"), sizeof(FGroupsBlockEntityRequest), Get_Z_Construct_UScriptStruct_FGroupsBlockEntityRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FGroupsBlockEntityRequest>()
{
	return FGroupsBlockEntityRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGroupsBlockEntityRequest(FGroupsBlockEntityRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("GroupsBlockEntityRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFGroupsBlockEntityRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFGroupsBlockEntityRequest()
	{
		UScriptStruct::DeferCppStructOps<FGroupsBlockEntityRequest>(FName(TEXT("GroupsBlockEntityRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFGroupsBlockEntityRequest;
	struct Z_Construct_UScriptStruct_FGroupsBlockEntityRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CustomTags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Entity_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Entity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Group_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Group;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsBlockEntityRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Blocks a list of entities from joining a group. Blocked entities may not create new applications to join, be invited to\n * join, accept an invitation, or have an application accepted. Failure due to being blocked does not clean up existing\n * applications or invitations to the group. No data is returned in the case of success.\n */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "Blocks a list of entities from joining a group. Blocked entities may not create new applications to join, be invited to\njoin, accept an invitation, or have an application accepted. Failure due to being blocked does not clean up existing\napplications or invitations to the group. No data is returned in the case of success." },
	};
#endif
	void* Z_Construct_UScriptStruct_FGroupsBlockEntityRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGroupsBlockEntityRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsBlockEntityRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGroupsBlockEntityRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGroupsBlockEntityRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsBlockEntityRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsBlockEntityRequest_Statics::NewProp_CustomTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsBlockEntityRequest_Statics::NewProp_Entity_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** The entity to perform this action on. */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "The entity to perform this action on." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGroupsBlockEntityRequest_Statics::NewProp_Entity = { "Entity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGroupsBlockEntityRequest, Entity), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsBlockEntityRequest_Statics::NewProp_Entity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsBlockEntityRequest_Statics::NewProp_Entity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsBlockEntityRequest_Statics::NewProp_Group_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** The identifier of the group */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "The identifier of the group" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGroupsBlockEntityRequest_Statics::NewProp_Group = { "Group", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGroupsBlockEntityRequest, Group), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsBlockEntityRequest_Statics::NewProp_Group_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsBlockEntityRequest_Statics::NewProp_Group_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGroupsBlockEntityRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsBlockEntityRequest_Statics::NewProp_CustomTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsBlockEntityRequest_Statics::NewProp_Entity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsBlockEntityRequest_Statics::NewProp_Group,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGroupsBlockEntityRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"GroupsBlockEntityRequest",
		sizeof(FGroupsBlockEntityRequest),
		alignof(FGroupsBlockEntityRequest),
		Z_Construct_UScriptStruct_FGroupsBlockEntityRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsBlockEntityRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsBlockEntityRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsBlockEntityRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGroupsBlockEntityRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGroupsBlockEntityRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GroupsBlockEntityRequest"), sizeof(FGroupsBlockEntityRequest), Get_Z_Construct_UScriptStruct_FGroupsBlockEntityRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGroupsBlockEntityRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGroupsBlockEntityRequest_Hash() { return 1124984025U; }

static_assert(std::is_polymorphic<FGroupsApplyToGroupResponse>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FGroupsApplyToGroupResponse cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

class UScriptStruct* FGroupsApplyToGroupResponse::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FGroupsApplyToGroupResponse_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGroupsApplyToGroupResponse, Z_Construct_UPackage__Script_PlayFab(), TEXT("GroupsApplyToGroupResponse"), sizeof(FGroupsApplyToGroupResponse), Get_Z_Construct_UScriptStruct_FGroupsApplyToGroupResponse_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FGroupsApplyToGroupResponse>()
{
	return FGroupsApplyToGroupResponse::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGroupsApplyToGroupResponse(FGroupsApplyToGroupResponse::StaticStruct, TEXT("/Script/PlayFab"), TEXT("GroupsApplyToGroupResponse"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFGroupsApplyToGroupResponse
{
	FScriptStruct_PlayFab_StaticRegisterNativesFGroupsApplyToGroupResponse()
	{
		UScriptStruct::DeferCppStructOps<FGroupsApplyToGroupResponse>(FName(TEXT("GroupsApplyToGroupResponse")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFGroupsApplyToGroupResponse;
	struct Z_Construct_UScriptStruct_FGroupsApplyToGroupResponse_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Entity_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Entity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Expires_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Expires;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Group_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Group;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsApplyToGroupResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Describes an application to join a group */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "Describes an application to join a group" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGroupsApplyToGroupResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGroupsApplyToGroupResponse>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsApplyToGroupResponse_Statics::NewProp_Entity_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** Type of entity that requested membership */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "Type of entity that requested membership" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGroupsApplyToGroupResponse_Statics::NewProp_Entity = { "Entity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGroupsApplyToGroupResponse, Entity), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsApplyToGroupResponse_Statics::NewProp_Entity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsApplyToGroupResponse_Statics::NewProp_Entity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsApplyToGroupResponse_Statics::NewProp_Expires_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** When the application to join will expire and be deleted */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "When the application to join will expire and be deleted" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGroupsApplyToGroupResponse_Statics::NewProp_Expires = { "Expires", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGroupsApplyToGroupResponse, Expires), METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsApplyToGroupResponse_Statics::NewProp_Expires_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsApplyToGroupResponse_Statics::NewProp_Expires_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsApplyToGroupResponse_Statics::NewProp_Group_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** ID of the group that the entity requesting membership to */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "ID of the group that the entity requesting membership to" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGroupsApplyToGroupResponse_Statics::NewProp_Group = { "Group", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGroupsApplyToGroupResponse, Group), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsApplyToGroupResponse_Statics::NewProp_Group_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsApplyToGroupResponse_Statics::NewProp_Group_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGroupsApplyToGroupResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsApplyToGroupResponse_Statics::NewProp_Entity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsApplyToGroupResponse_Statics::NewProp_Expires,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsApplyToGroupResponse_Statics::NewProp_Group,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGroupsApplyToGroupResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"GroupsApplyToGroupResponse",
		sizeof(FGroupsApplyToGroupResponse),
		alignof(FGroupsApplyToGroupResponse),
		Z_Construct_UScriptStruct_FGroupsApplyToGroupResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsApplyToGroupResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsApplyToGroupResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsApplyToGroupResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGroupsApplyToGroupResponse()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGroupsApplyToGroupResponse_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GroupsApplyToGroupResponse"), sizeof(FGroupsApplyToGroupResponse), Get_Z_Construct_UScriptStruct_FGroupsApplyToGroupResponse_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGroupsApplyToGroupResponse_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGroupsApplyToGroupResponse_Hash() { return 2567367717U; }

static_assert(std::is_polymorphic<FGroupsApplyToGroupRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FGroupsApplyToGroupRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FGroupsApplyToGroupRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FGroupsApplyToGroupRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGroupsApplyToGroupRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("GroupsApplyToGroupRequest"), sizeof(FGroupsApplyToGroupRequest), Get_Z_Construct_UScriptStruct_FGroupsApplyToGroupRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FGroupsApplyToGroupRequest>()
{
	return FGroupsApplyToGroupRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGroupsApplyToGroupRequest(FGroupsApplyToGroupRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("GroupsApplyToGroupRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFGroupsApplyToGroupRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFGroupsApplyToGroupRequest()
	{
		UScriptStruct::DeferCppStructOps<FGroupsApplyToGroupRequest>(FName(TEXT("GroupsApplyToGroupRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFGroupsApplyToGroupRequest;
	struct Z_Construct_UScriptStruct_FGroupsApplyToGroupRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AutoAcceptOutstandingInvite_MetaData[];
#endif
		static void NewProp_AutoAcceptOutstandingInvite_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AutoAcceptOutstandingInvite;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CustomTags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Entity_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Entity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Group_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Group;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsApplyToGroupRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Creates an application to join a group. Calling this while a group application already exists will return the same\n * application instead of an error and will not refresh the time before the application expires. By default, if the entity\n * has an invitation to join the group outstanding, this will accept the invitation to join the group instead and return an\n * error indicating such, rather than creating a duplicate application to join that will need to be cleaned up later.\n * Returns information about the application or an error indicating an invitation was accepted instead.\n */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "Creates an application to join a group. Calling this while a group application already exists will return the same\napplication instead of an error and will not refresh the time before the application expires. By default, if the entity\nhas an invitation to join the group outstanding, this will accept the invitation to join the group instead and return an\nerror indicating such, rather than creating a duplicate application to join that will need to be cleaned up later.\nReturns information about the application or an error indicating an invitation was accepted instead." },
	};
#endif
	void* Z_Construct_UScriptStruct_FGroupsApplyToGroupRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGroupsApplyToGroupRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsApplyToGroupRequest_Statics::NewProp_AutoAcceptOutstandingInvite_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** Optional, default true. Automatically accept an outstanding invitation if one exists instead of creating an application */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "Optional, default true. Automatically accept an outstanding invitation if one exists instead of creating an application" },
	};
#endif
	void Z_Construct_UScriptStruct_FGroupsApplyToGroupRequest_Statics::NewProp_AutoAcceptOutstandingInvite_SetBit(void* Obj)
	{
		((FGroupsApplyToGroupRequest*)Obj)->AutoAcceptOutstandingInvite = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGroupsApplyToGroupRequest_Statics::NewProp_AutoAcceptOutstandingInvite = { "AutoAcceptOutstandingInvite", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGroupsApplyToGroupRequest), &Z_Construct_UScriptStruct_FGroupsApplyToGroupRequest_Statics::NewProp_AutoAcceptOutstandingInvite_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsApplyToGroupRequest_Statics::NewProp_AutoAcceptOutstandingInvite_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsApplyToGroupRequest_Statics::NewProp_AutoAcceptOutstandingInvite_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsApplyToGroupRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGroupsApplyToGroupRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGroupsApplyToGroupRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsApplyToGroupRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsApplyToGroupRequest_Statics::NewProp_CustomTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsApplyToGroupRequest_Statics::NewProp_Entity_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** The optional entity to perform this action on. Defaults to the currently logged in entity. */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "The optional entity to perform this action on. Defaults to the currently logged in entity." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGroupsApplyToGroupRequest_Statics::NewProp_Entity = { "Entity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGroupsApplyToGroupRequest, Entity), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsApplyToGroupRequest_Statics::NewProp_Entity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsApplyToGroupRequest_Statics::NewProp_Entity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsApplyToGroupRequest_Statics::NewProp_Group_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** The identifier of the group */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "The identifier of the group" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGroupsApplyToGroupRequest_Statics::NewProp_Group = { "Group", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGroupsApplyToGroupRequest, Group), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsApplyToGroupRequest_Statics::NewProp_Group_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsApplyToGroupRequest_Statics::NewProp_Group_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGroupsApplyToGroupRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsApplyToGroupRequest_Statics::NewProp_AutoAcceptOutstandingInvite,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsApplyToGroupRequest_Statics::NewProp_CustomTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsApplyToGroupRequest_Statics::NewProp_Entity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsApplyToGroupRequest_Statics::NewProp_Group,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGroupsApplyToGroupRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"GroupsApplyToGroupRequest",
		sizeof(FGroupsApplyToGroupRequest),
		alignof(FGroupsApplyToGroupRequest),
		Z_Construct_UScriptStruct_FGroupsApplyToGroupRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsApplyToGroupRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsApplyToGroupRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsApplyToGroupRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGroupsApplyToGroupRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGroupsApplyToGroupRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GroupsApplyToGroupRequest"), sizeof(FGroupsApplyToGroupRequest), Get_Z_Construct_UScriptStruct_FGroupsApplyToGroupRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGroupsApplyToGroupRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGroupsApplyToGroupRequest_Hash() { return 2000829232U; }

static_assert(std::is_polymorphic<FGroupsAddMembersRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FGroupsAddMembersRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FGroupsAddMembersRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FGroupsAddMembersRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGroupsAddMembersRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("GroupsAddMembersRequest"), sizeof(FGroupsAddMembersRequest), Get_Z_Construct_UScriptStruct_FGroupsAddMembersRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FGroupsAddMembersRequest>()
{
	return FGroupsAddMembersRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGroupsAddMembersRequest(FGroupsAddMembersRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("GroupsAddMembersRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFGroupsAddMembersRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFGroupsAddMembersRequest()
	{
		UScriptStruct::DeferCppStructOps<FGroupsAddMembersRequest>(FName(TEXT("GroupsAddMembersRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFGroupsAddMembersRequest;
	struct Z_Construct_UScriptStruct_FGroupsAddMembersRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CustomTags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Group_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Group;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Members_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Members_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Members;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RoleId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RoleId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsAddMembersRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Adds members to a group or role. Existing members of the group will added to roles within the group, but if the user is\n * not already a member of the group, only title claimants may add them to the group, and others must use the group\n * application or invite system to add new members to a group. Returns nothing if successful.\n */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "Adds members to a group or role. Existing members of the group will added to roles within the group, but if the user is\nnot already a member of the group, only title claimants may add them to the group, and others must use the group\napplication or invite system to add new members to a group. Returns nothing if successful." },
	};
#endif
	void* Z_Construct_UScriptStruct_FGroupsAddMembersRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGroupsAddMembersRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsAddMembersRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGroupsAddMembersRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGroupsAddMembersRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsAddMembersRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsAddMembersRequest_Statics::NewProp_CustomTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsAddMembersRequest_Statics::NewProp_Group_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** The identifier of the group */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "The identifier of the group" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGroupsAddMembersRequest_Statics::NewProp_Group = { "Group", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGroupsAddMembersRequest, Group), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsAddMembersRequest_Statics::NewProp_Group_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsAddMembersRequest_Statics::NewProp_Group_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGroupsAddMembersRequest_Statics::NewProp_Members_Inner = { "Members", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsAddMembersRequest_Statics::NewProp_Members_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** List of entities to add to the group. Only entities of type title_player_account and character may be added to groups. */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "List of entities to add to the group. Only entities of type title_player_account and character may be added to groups." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGroupsAddMembersRequest_Statics::NewProp_Members = { "Members", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGroupsAddMembersRequest, Members), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsAddMembersRequest_Statics::NewProp_Members_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsAddMembersRequest_Statics::NewProp_Members_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsAddMembersRequest_Statics::NewProp_RoleId_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/**\n     * Optional: The ID of the existing role to add the entities to. If this is not specified, the default member role for the\n     * group will be used. Role IDs must be between 1 and 64 characters long.\n     */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "Optional: The ID of the existing role to add the entities to. If this is not specified, the default member role for the\ngroup will be used. Role IDs must be between 1 and 64 characters long." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGroupsAddMembersRequest_Statics::NewProp_RoleId = { "RoleId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGroupsAddMembersRequest, RoleId), METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsAddMembersRequest_Statics::NewProp_RoleId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsAddMembersRequest_Statics::NewProp_RoleId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGroupsAddMembersRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsAddMembersRequest_Statics::NewProp_CustomTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsAddMembersRequest_Statics::NewProp_Group,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsAddMembersRequest_Statics::NewProp_Members_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsAddMembersRequest_Statics::NewProp_Members,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsAddMembersRequest_Statics::NewProp_RoleId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGroupsAddMembersRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"GroupsAddMembersRequest",
		sizeof(FGroupsAddMembersRequest),
		alignof(FGroupsAddMembersRequest),
		Z_Construct_UScriptStruct_FGroupsAddMembersRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsAddMembersRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsAddMembersRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsAddMembersRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGroupsAddMembersRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGroupsAddMembersRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GroupsAddMembersRequest"), sizeof(FGroupsAddMembersRequest), Get_Z_Construct_UScriptStruct_FGroupsAddMembersRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGroupsAddMembersRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGroupsAddMembersRequest_Hash() { return 3453676888U; }

static_assert(std::is_polymorphic<FGroupsAcceptGroupInvitationRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FGroupsAcceptGroupInvitationRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FGroupsAcceptGroupInvitationRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FGroupsAcceptGroupInvitationRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGroupsAcceptGroupInvitationRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("GroupsAcceptGroupInvitationRequest"), sizeof(FGroupsAcceptGroupInvitationRequest), Get_Z_Construct_UScriptStruct_FGroupsAcceptGroupInvitationRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FGroupsAcceptGroupInvitationRequest>()
{
	return FGroupsAcceptGroupInvitationRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGroupsAcceptGroupInvitationRequest(FGroupsAcceptGroupInvitationRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("GroupsAcceptGroupInvitationRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFGroupsAcceptGroupInvitationRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFGroupsAcceptGroupInvitationRequest()
	{
		UScriptStruct::DeferCppStructOps<FGroupsAcceptGroupInvitationRequest>(FName(TEXT("GroupsAcceptGroupInvitationRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFGroupsAcceptGroupInvitationRequest;
	struct Z_Construct_UScriptStruct_FGroupsAcceptGroupInvitationRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CustomTags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Entity_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Entity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Group_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Group;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsAcceptGroupInvitationRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Accepts an outstanding invitation to join the group if the invited entity is not blocked by the group. Only the invited\n * entity or a parent in its chain (e.g. title) may accept the invitation on the invited entity's behalf. Nothing is\n * returned in the case of success.\n */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "Accepts an outstanding invitation to join the group if the invited entity is not blocked by the group. Only the invited\nentity or a parent in its chain (e.g. title) may accept the invitation on the invited entity's behalf. Nothing is\nreturned in the case of success." },
	};
#endif
	void* Z_Construct_UScriptStruct_FGroupsAcceptGroupInvitationRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGroupsAcceptGroupInvitationRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsAcceptGroupInvitationRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGroupsAcceptGroupInvitationRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGroupsAcceptGroupInvitationRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsAcceptGroupInvitationRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsAcceptGroupInvitationRequest_Statics::NewProp_CustomTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsAcceptGroupInvitationRequest_Statics::NewProp_Entity_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** The optional entity to perform this action on. Defaults to the currently logged in entity. */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "The optional entity to perform this action on. Defaults to the currently logged in entity." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGroupsAcceptGroupInvitationRequest_Statics::NewProp_Entity = { "Entity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGroupsAcceptGroupInvitationRequest, Entity), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsAcceptGroupInvitationRequest_Statics::NewProp_Entity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsAcceptGroupInvitationRequest_Statics::NewProp_Entity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsAcceptGroupInvitationRequest_Statics::NewProp_Group_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** The identifier of the group */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "The identifier of the group" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGroupsAcceptGroupInvitationRequest_Statics::NewProp_Group = { "Group", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGroupsAcceptGroupInvitationRequest, Group), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsAcceptGroupInvitationRequest_Statics::NewProp_Group_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsAcceptGroupInvitationRequest_Statics::NewProp_Group_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGroupsAcceptGroupInvitationRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsAcceptGroupInvitationRequest_Statics::NewProp_CustomTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsAcceptGroupInvitationRequest_Statics::NewProp_Entity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsAcceptGroupInvitationRequest_Statics::NewProp_Group,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGroupsAcceptGroupInvitationRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"GroupsAcceptGroupInvitationRequest",
		sizeof(FGroupsAcceptGroupInvitationRequest),
		alignof(FGroupsAcceptGroupInvitationRequest),
		Z_Construct_UScriptStruct_FGroupsAcceptGroupInvitationRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsAcceptGroupInvitationRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsAcceptGroupInvitationRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsAcceptGroupInvitationRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGroupsAcceptGroupInvitationRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGroupsAcceptGroupInvitationRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GroupsAcceptGroupInvitationRequest"), sizeof(FGroupsAcceptGroupInvitationRequest), Get_Z_Construct_UScriptStruct_FGroupsAcceptGroupInvitationRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGroupsAcceptGroupInvitationRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGroupsAcceptGroupInvitationRequest_Hash() { return 3031918435U; }

static_assert(std::is_polymorphic<FGroupsEmptyResponse>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FGroupsEmptyResponse cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

class UScriptStruct* FGroupsEmptyResponse::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FGroupsEmptyResponse_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGroupsEmptyResponse, Z_Construct_UPackage__Script_PlayFab(), TEXT("GroupsEmptyResponse"), sizeof(FGroupsEmptyResponse), Get_Z_Construct_UScriptStruct_FGroupsEmptyResponse_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FGroupsEmptyResponse>()
{
	return FGroupsEmptyResponse::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGroupsEmptyResponse(FGroupsEmptyResponse::StaticStruct, TEXT("/Script/PlayFab"), TEXT("GroupsEmptyResponse"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFGroupsEmptyResponse
{
	FScriptStruct_PlayFab_StaticRegisterNativesFGroupsEmptyResponse()
	{
		UScriptStruct::DeferCppStructOps<FGroupsEmptyResponse>(FName(TEXT("GroupsEmptyResponse")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFGroupsEmptyResponse;
	struct Z_Construct_UScriptStruct_FGroupsEmptyResponse_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsEmptyResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGroupsEmptyResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGroupsEmptyResponse>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGroupsEmptyResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"GroupsEmptyResponse",
		sizeof(FGroupsEmptyResponse),
		alignof(FGroupsEmptyResponse),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsEmptyResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsEmptyResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGroupsEmptyResponse()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGroupsEmptyResponse_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GroupsEmptyResponse"), sizeof(FGroupsEmptyResponse), Get_Z_Construct_UScriptStruct_FGroupsEmptyResponse_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGroupsEmptyResponse_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGroupsEmptyResponse_Hash() { return 1931785402U; }

static_assert(std::is_polymorphic<FGroupsAcceptGroupApplicationRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FGroupsAcceptGroupApplicationRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FGroupsAcceptGroupApplicationRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FGroupsAcceptGroupApplicationRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGroupsAcceptGroupApplicationRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("GroupsAcceptGroupApplicationRequest"), sizeof(FGroupsAcceptGroupApplicationRequest), Get_Z_Construct_UScriptStruct_FGroupsAcceptGroupApplicationRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FGroupsAcceptGroupApplicationRequest>()
{
	return FGroupsAcceptGroupApplicationRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGroupsAcceptGroupApplicationRequest(FGroupsAcceptGroupApplicationRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("GroupsAcceptGroupApplicationRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFGroupsAcceptGroupApplicationRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFGroupsAcceptGroupApplicationRequest()
	{
		UScriptStruct::DeferCppStructOps<FGroupsAcceptGroupApplicationRequest>(FName(TEXT("GroupsAcceptGroupApplicationRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFGroupsAcceptGroupApplicationRequest;
	struct Z_Construct_UScriptStruct_FGroupsAcceptGroupApplicationRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CustomTags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Entity_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Entity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Group_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Group;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsAcceptGroupApplicationRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Accepts an outstanding invitation to to join a group if the invited entity is not blocked by the group. Nothing is\n * returned in the case of success.\n */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "Accepts an outstanding invitation to to join a group if the invited entity is not blocked by the group. Nothing is\nreturned in the case of success." },
	};
#endif
	void* Z_Construct_UScriptStruct_FGroupsAcceptGroupApplicationRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGroupsAcceptGroupApplicationRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsAcceptGroupApplicationRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGroupsAcceptGroupApplicationRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGroupsAcceptGroupApplicationRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsAcceptGroupApplicationRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsAcceptGroupApplicationRequest_Statics::NewProp_CustomTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsAcceptGroupApplicationRequest_Statics::NewProp_Entity_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/**\n     * Type of the entity to accept as. Must be the same entity as the claimant or an entity that is a child of the claimant\n     * entity.\n     */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "Type of the entity to accept as. Must be the same entity as the claimant or an entity that is a child of the claimant\nentity." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGroupsAcceptGroupApplicationRequest_Statics::NewProp_Entity = { "Entity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGroupsAcceptGroupApplicationRequest, Entity), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsAcceptGroupApplicationRequest_Statics::NewProp_Entity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsAcceptGroupApplicationRequest_Statics::NewProp_Entity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsAcceptGroupApplicationRequest_Statics::NewProp_Group_MetaData[] = {
		{ "Category", "PlayFab | Groups | Groups Models" },
		{ "Comment", "/** The identifier of the group */" },
		{ "ModuleRelativePath", "Classes/PlayFabGroupsModels.h" },
		{ "ToolTip", "The identifier of the group" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGroupsAcceptGroupApplicationRequest_Statics::NewProp_Group = { "Group", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGroupsAcceptGroupApplicationRequest, Group), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsAcceptGroupApplicationRequest_Statics::NewProp_Group_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsAcceptGroupApplicationRequest_Statics::NewProp_Group_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGroupsAcceptGroupApplicationRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsAcceptGroupApplicationRequest_Statics::NewProp_CustomTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsAcceptGroupApplicationRequest_Statics::NewProp_Entity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsAcceptGroupApplicationRequest_Statics::NewProp_Group,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGroupsAcceptGroupApplicationRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"GroupsAcceptGroupApplicationRequest",
		sizeof(FGroupsAcceptGroupApplicationRequest),
		alignof(FGroupsAcceptGroupApplicationRequest),
		Z_Construct_UScriptStruct_FGroupsAcceptGroupApplicationRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsAcceptGroupApplicationRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsAcceptGroupApplicationRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsAcceptGroupApplicationRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGroupsAcceptGroupApplicationRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGroupsAcceptGroupApplicationRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GroupsAcceptGroupApplicationRequest"), sizeof(FGroupsAcceptGroupApplicationRequest), Get_Z_Construct_UScriptStruct_FGroupsAcceptGroupApplicationRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGroupsAcceptGroupApplicationRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGroupsAcceptGroupApplicationRequest_Hash() { return 1818668949U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
