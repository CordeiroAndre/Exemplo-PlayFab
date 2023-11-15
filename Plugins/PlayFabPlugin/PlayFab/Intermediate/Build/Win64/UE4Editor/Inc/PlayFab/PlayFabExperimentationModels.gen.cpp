// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Classes/PlayFabExperimentationModels.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayFabExperimentationModels() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabRequestCommon();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
	PLAYFAB_API UEnum* Z_Construct_UEnum_PlayFab_EExperimentType();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FExperimentationUpdateExclusionGroupRequest();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FExperimentationStopExperimentRequest();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FExperimentationStartExperimentRequest();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FExperimentationGetTreatmentAssignmentResult();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabResultCommon();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FExperimentationGetTreatmentAssignmentRequest();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FExperimentationGetLatestScorecardResult();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FExperimentationGetLatestScorecardRequest();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FExperimentationGetExperimentsResult();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FExperimentationGetExperimentsRequest();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FExperimentationGetExclusionGroupTrafficResult();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FExperimentationGetExclusionGroupTrafficRequest();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FExperimentationGetExclusionGroupsResult();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FExperimentationGetExclusionGroupsRequest();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FExperimentationDeleteExperimentRequest();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FExperimentationEmptyResponse();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FExperimentationDeleteExclusionGroupRequest();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FExperimentationCreateExperimentResult();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FExperimentationCreateExperimentRequest();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FExperimentationCreateExclusionGroupResult();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FExperimentationCreateExclusionGroupRequest();
// End Cross Module References

static_assert(std::is_polymorphic<FExperimentationUpdateExperimentRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FExperimentationUpdateExperimentRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FExperimentationUpdateExperimentRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("ExperimentationUpdateExperimentRequest"), sizeof(FExperimentationUpdateExperimentRequest), Get_Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FExperimentationUpdateExperimentRequest>()
{
	return FExperimentationUpdateExperimentRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FExperimentationUpdateExperimentRequest(FExperimentationUpdateExperimentRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("ExperimentationUpdateExperimentRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFExperimentationUpdateExperimentRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFExperimentationUpdateExperimentRequest()
	{
		UScriptStruct::DeferCppStructOps<FExperimentationUpdateExperimentRequest>(FName(TEXT("ExperimentationUpdateExperimentRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFExperimentationUpdateExperimentRequest;
	struct Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Description;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndDate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_EndDate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExclusionGroupId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ExclusionGroupId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExclusionGroupTrafficAllocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ExclusionGroupTrafficAllocation;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ExperimentType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExperimentType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ExperimentType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Id;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SegmentId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SegmentId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartDate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StartDate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TitlePlayerAccountTestIds_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TitlePlayerAccountTestIds;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Variants_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Variants_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Variants;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Given a title entity token and experiment details, this API updates the experiment. If an experiment is already running,\n * only the description and duration properties can be updated.\n */" },
		{ "ModuleRelativePath", "Classes/PlayFabExperimentationModels.h" },
		{ "ToolTip", "Given a title entity token and experiment details, this API updates the experiment. If an experiment is already running,\nonly the description and duration properties can be updated." },
	};
#endif
	void* Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FExperimentationUpdateExperimentRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | Experimentation | Experimentation Models" },
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
		{ "ModuleRelativePath", "Classes/PlayFabExperimentationModels.h" },
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FExperimentationUpdateExperimentRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::NewProp_CustomTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "PlayFab | Experimentation | Experimentation Models" },
		{ "Comment", "/** Description of the experiment. */" },
		{ "ModuleRelativePath", "Classes/PlayFabExperimentationModels.h" },
		{ "ToolTip", "Description of the experiment." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FExperimentationUpdateExperimentRequest, Description), METADATA_PARAMS(Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::NewProp_Description_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::NewProp_EndDate_MetaData[] = {
		{ "Category", "PlayFab | Experimentation | Experimentation Models" },
		{ "Comment", "/** When experiment should end. */" },
		{ "ModuleRelativePath", "Classes/PlayFabExperimentationModels.h" },
		{ "ToolTip", "When experiment should end." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::NewProp_EndDate = { "EndDate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FExperimentationUpdateExperimentRequest, EndDate), METADATA_PARAMS(Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::NewProp_EndDate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::NewProp_EndDate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::NewProp_ExclusionGroupId_MetaData[] = {
		{ "Category", "PlayFab | Experimentation | Experimentation Models" },
		{ "Comment", "/** Id of the exclusion group. */" },
		{ "ModuleRelativePath", "Classes/PlayFabExperimentationModels.h" },
		{ "ToolTip", "Id of the exclusion group." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::NewProp_ExclusionGroupId = { "ExclusionGroupId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FExperimentationUpdateExperimentRequest, ExclusionGroupId), METADATA_PARAMS(Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::NewProp_ExclusionGroupId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::NewProp_ExclusionGroupId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::NewProp_ExclusionGroupTrafficAllocation_MetaData[] = {
		{ "Category", "PlayFab | Experimentation | Experimentation Models" },
		{ "Comment", "/** Percentage of exclusion group traffic that will see this experiment. */" },
		{ "ModuleRelativePath", "Classes/PlayFabExperimentationModels.h" },
		{ "ToolTip", "Percentage of exclusion group traffic that will see this experiment." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::NewProp_ExclusionGroupTrafficAllocation = { "ExclusionGroupTrafficAllocation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FExperimentationUpdateExperimentRequest, ExclusionGroupTrafficAllocation), METADATA_PARAMS(Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::NewProp_ExclusionGroupTrafficAllocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::NewProp_ExclusionGroupTrafficAllocation_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::NewProp_ExperimentType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::NewProp_ExperimentType_MetaData[] = {
		{ "Category", "PlayFab | Experimentation | Experimentation Models" },
		{ "Comment", "/** Type of experiment. */" },
		{ "ModuleRelativePath", "Classes/PlayFabExperimentationModels.h" },
		{ "ToolTip", "Type of experiment." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::NewProp_ExperimentType = { "ExperimentType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FExperimentationUpdateExperimentRequest, ExperimentType), Z_Construct_UEnum_PlayFab_EExperimentType, METADATA_PARAMS(Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::NewProp_ExperimentType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::NewProp_ExperimentType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::NewProp_Id_MetaData[] = {
		{ "Category", "PlayFab | Experimentation | Experimentation Models" },
		{ "Comment", "/** Id of the experiment. */" },
		{ "ModuleRelativePath", "Classes/PlayFabExperimentationModels.h" },
		{ "ToolTip", "Id of the experiment." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FExperimentationUpdateExperimentRequest, Id), METADATA_PARAMS(Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::NewProp_Id_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::NewProp_Id_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "PlayFab | Experimentation | Experimentation Models" },
		{ "Comment", "/** Friendly name of the experiment. */" },
		{ "ModuleRelativePath", "Classes/PlayFabExperimentationModels.h" },
		{ "ToolTip", "Friendly name of the experiment." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FExperimentationUpdateExperimentRequest, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::NewProp_SegmentId_MetaData[] = {
		{ "Category", "PlayFab | Experimentation | Experimentation Models" },
		{ "Comment", "/** Id of the segment to which this experiment applies. Defaults to the 'All Players' segment. */" },
		{ "ModuleRelativePath", "Classes/PlayFabExperimentationModels.h" },
		{ "ToolTip", "Id of the segment to which this experiment applies. Defaults to the 'All Players' segment." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::NewProp_SegmentId = { "SegmentId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FExperimentationUpdateExperimentRequest, SegmentId), METADATA_PARAMS(Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::NewProp_SegmentId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::NewProp_SegmentId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::NewProp_StartDate_MetaData[] = {
		{ "Category", "PlayFab | Experimentation | Experimentation Models" },
		{ "Comment", "/** When experiment should start. */" },
		{ "ModuleRelativePath", "Classes/PlayFabExperimentationModels.h" },
		{ "ToolTip", "When experiment should start." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::NewProp_StartDate = { "StartDate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FExperimentationUpdateExperimentRequest, StartDate), METADATA_PARAMS(Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::NewProp_StartDate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::NewProp_StartDate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::NewProp_TitlePlayerAccountTestIds_MetaData[] = {
		{ "Category", "PlayFab | Experimentation | Experimentation Models" },
		{ "Comment", "/**\n     * List of title player account IDs that automatically receive treatments in the experiment, but are not included when\n     * calculating experiment metrics.\n     */" },
		{ "ModuleRelativePath", "Classes/PlayFabExperimentationModels.h" },
		{ "ToolTip", "List of title player account IDs that automatically receive treatments in the experiment, but are not included when\ncalculating experiment metrics." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::NewProp_TitlePlayerAccountTestIds = { "TitlePlayerAccountTestIds", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FExperimentationUpdateExperimentRequest, TitlePlayerAccountTestIds), METADATA_PARAMS(Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::NewProp_TitlePlayerAccountTestIds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::NewProp_TitlePlayerAccountTestIds_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::NewProp_Variants_Inner = { "Variants", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::NewProp_Variants_MetaData[] = {
		{ "Category", "PlayFab | Experimentation | Experimentation Models" },
		{ "Comment", "/** List of variants for the experiment. */" },
		{ "ModuleRelativePath", "Classes/PlayFabExperimentationModels.h" },
		{ "ToolTip", "List of variants for the experiment." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::NewProp_Variants = { "Variants", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FExperimentationUpdateExperimentRequest, Variants), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::NewProp_Variants_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::NewProp_Variants_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::NewProp_CustomTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::NewProp_Description,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::NewProp_EndDate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::NewProp_ExclusionGroupId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::NewProp_ExclusionGroupTrafficAllocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::NewProp_ExperimentType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::NewProp_ExperimentType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::NewProp_Id,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::NewProp_SegmentId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::NewProp_StartDate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::NewProp_TitlePlayerAccountTestIds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::NewProp_Variants_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::NewProp_Variants,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"ExperimentationUpdateExperimentRequest",
		sizeof(FExperimentationUpdateExperimentRequest),
		alignof(FExperimentationUpdateExperimentRequest),
		Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ExperimentationUpdateExperimentRequest"), sizeof(FExperimentationUpdateExperimentRequest), Get_Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Hash() { return 215228305U; }

static_assert(std::is_polymorphic<FExperimentationUpdateExclusionGroupRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FExperimentationUpdateExclusionGroupRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FExperimentationUpdateExclusionGroupRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FExperimentationUpdateExclusionGroupRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FExperimentationUpdateExclusionGroupRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("ExperimentationUpdateExclusionGroupRequest"), sizeof(FExperimentationUpdateExclusionGroupRequest), Get_Z_Construct_UScriptStruct_FExperimentationUpdateExclusionGroupRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FExperimentationUpdateExclusionGroupRequest>()
{
	return FExperimentationUpdateExclusionGroupRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FExperimentationUpdateExclusionGroupRequest(FExperimentationUpdateExclusionGroupRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("ExperimentationUpdateExclusionGroupRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFExperimentationUpdateExclusionGroupRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFExperimentationUpdateExclusionGroupRequest()
	{
		UScriptStruct::DeferCppStructOps<FExperimentationUpdateExclusionGroupRequest>(FName(TEXT("ExperimentationUpdateExclusionGroupRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFExperimentationUpdateExclusionGroupRequest;
	struct Z_Construct_UScriptStruct_FExperimentationUpdateExclusionGroupRequest_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Description;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExclusionGroupId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ExclusionGroupId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExperimentationUpdateExclusionGroupRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Given an entity token and exclusion group details this API updates the exclusion group. */" },
		{ "ModuleRelativePath", "Classes/PlayFabExperimentationModels.h" },
		{ "ToolTip", "Given an entity token and exclusion group details this API updates the exclusion group." },
	};
#endif
	void* Z_Construct_UScriptStruct_FExperimentationUpdateExclusionGroupRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FExperimentationUpdateExclusionGroupRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExperimentationUpdateExclusionGroupRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | Experimentation | Experimentation Models" },
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
		{ "ModuleRelativePath", "Classes/PlayFabExperimentationModels.h" },
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FExperimentationUpdateExclusionGroupRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FExperimentationUpdateExclusionGroupRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FExperimentationUpdateExclusionGroupRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationUpdateExclusionGroupRequest_Statics::NewProp_CustomTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExperimentationUpdateExclusionGroupRequest_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "PlayFab | Experimentation | Experimentation Models" },
		{ "Comment", "/** Description of the exclusion group. */" },
		{ "ModuleRelativePath", "Classes/PlayFabExperimentationModels.h" },
		{ "ToolTip", "Description of the exclusion group." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FExperimentationUpdateExclusionGroupRequest_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FExperimentationUpdateExclusionGroupRequest, Description), METADATA_PARAMS(Z_Construct_UScriptStruct_FExperimentationUpdateExclusionGroupRequest_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationUpdateExclusionGroupRequest_Statics::NewProp_Description_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExperimentationUpdateExclusionGroupRequest_Statics::NewProp_ExclusionGroupId_MetaData[] = {
		{ "Category", "PlayFab | Experimentation | Experimentation Models" },
		{ "Comment", "/** The ID of the exclusion group to update. */" },
		{ "ModuleRelativePath", "Classes/PlayFabExperimentationModels.h" },
		{ "ToolTip", "The ID of the exclusion group to update." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FExperimentationUpdateExclusionGroupRequest_Statics::NewProp_ExclusionGroupId = { "ExclusionGroupId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FExperimentationUpdateExclusionGroupRequest, ExclusionGroupId), METADATA_PARAMS(Z_Construct_UScriptStruct_FExperimentationUpdateExclusionGroupRequest_Statics::NewProp_ExclusionGroupId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationUpdateExclusionGroupRequest_Statics::NewProp_ExclusionGroupId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExperimentationUpdateExclusionGroupRequest_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "PlayFab | Experimentation | Experimentation Models" },
		{ "Comment", "/** Friendly name of the exclusion group. */" },
		{ "ModuleRelativePath", "Classes/PlayFabExperimentationModels.h" },
		{ "ToolTip", "Friendly name of the exclusion group." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FExperimentationUpdateExclusionGroupRequest_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FExperimentationUpdateExclusionGroupRequest, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FExperimentationUpdateExclusionGroupRequest_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationUpdateExclusionGroupRequest_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FExperimentationUpdateExclusionGroupRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExperimentationUpdateExclusionGroupRequest_Statics::NewProp_CustomTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExperimentationUpdateExclusionGroupRequest_Statics::NewProp_Description,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExperimentationUpdateExclusionGroupRequest_Statics::NewProp_ExclusionGroupId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExperimentationUpdateExclusionGroupRequest_Statics::NewProp_Name,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FExperimentationUpdateExclusionGroupRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"ExperimentationUpdateExclusionGroupRequest",
		sizeof(FExperimentationUpdateExclusionGroupRequest),
		alignof(FExperimentationUpdateExclusionGroupRequest),
		Z_Construct_UScriptStruct_FExperimentationUpdateExclusionGroupRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationUpdateExclusionGroupRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FExperimentationUpdateExclusionGroupRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationUpdateExclusionGroupRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FExperimentationUpdateExclusionGroupRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FExperimentationUpdateExclusionGroupRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ExperimentationUpdateExclusionGroupRequest"), sizeof(FExperimentationUpdateExclusionGroupRequest), Get_Z_Construct_UScriptStruct_FExperimentationUpdateExclusionGroupRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FExperimentationUpdateExclusionGroupRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FExperimentationUpdateExclusionGroupRequest_Hash() { return 2779927319U; }

static_assert(std::is_polymorphic<FExperimentationStopExperimentRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FExperimentationStopExperimentRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FExperimentationStopExperimentRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FExperimentationStopExperimentRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FExperimentationStopExperimentRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("ExperimentationStopExperimentRequest"), sizeof(FExperimentationStopExperimentRequest), Get_Z_Construct_UScriptStruct_FExperimentationStopExperimentRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FExperimentationStopExperimentRequest>()
{
	return FExperimentationStopExperimentRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FExperimentationStopExperimentRequest(FExperimentationStopExperimentRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("ExperimentationStopExperimentRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFExperimentationStopExperimentRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFExperimentationStopExperimentRequest()
	{
		UScriptStruct::DeferCppStructOps<FExperimentationStopExperimentRequest>(FName(TEXT("ExperimentationStopExperimentRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFExperimentationStopExperimentRequest;
	struct Z_Construct_UScriptStruct_FExperimentationStopExperimentRequest_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExperimentId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ExperimentId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExperimentationStopExperimentRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Given a title entity token and an experiment ID, this API stops the experiment if it is running. */" },
		{ "ModuleRelativePath", "Classes/PlayFabExperimentationModels.h" },
		{ "ToolTip", "Given a title entity token and an experiment ID, this API stops the experiment if it is running." },
	};
#endif
	void* Z_Construct_UScriptStruct_FExperimentationStopExperimentRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FExperimentationStopExperimentRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExperimentationStopExperimentRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | Experimentation | Experimentation Models" },
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
		{ "ModuleRelativePath", "Classes/PlayFabExperimentationModels.h" },
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FExperimentationStopExperimentRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FExperimentationStopExperimentRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FExperimentationStopExperimentRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationStopExperimentRequest_Statics::NewProp_CustomTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExperimentationStopExperimentRequest_Statics::NewProp_ExperimentId_MetaData[] = {
		{ "Category", "PlayFab | Experimentation | Experimentation Models" },
		{ "Comment", "/** The ID of the experiment to stop. */" },
		{ "ModuleRelativePath", "Classes/PlayFabExperimentationModels.h" },
		{ "ToolTip", "The ID of the experiment to stop." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FExperimentationStopExperimentRequest_Statics::NewProp_ExperimentId = { "ExperimentId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FExperimentationStopExperimentRequest, ExperimentId), METADATA_PARAMS(Z_Construct_UScriptStruct_FExperimentationStopExperimentRequest_Statics::NewProp_ExperimentId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationStopExperimentRequest_Statics::NewProp_ExperimentId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FExperimentationStopExperimentRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExperimentationStopExperimentRequest_Statics::NewProp_CustomTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExperimentationStopExperimentRequest_Statics::NewProp_ExperimentId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FExperimentationStopExperimentRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"ExperimentationStopExperimentRequest",
		sizeof(FExperimentationStopExperimentRequest),
		alignof(FExperimentationStopExperimentRequest),
		Z_Construct_UScriptStruct_FExperimentationStopExperimentRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationStopExperimentRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FExperimentationStopExperimentRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationStopExperimentRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FExperimentationStopExperimentRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FExperimentationStopExperimentRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ExperimentationStopExperimentRequest"), sizeof(FExperimentationStopExperimentRequest), Get_Z_Construct_UScriptStruct_FExperimentationStopExperimentRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FExperimentationStopExperimentRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FExperimentationStopExperimentRequest_Hash() { return 2128206698U; }

static_assert(std::is_polymorphic<FExperimentationStartExperimentRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FExperimentationStartExperimentRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FExperimentationStartExperimentRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FExperimentationStartExperimentRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FExperimentationStartExperimentRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("ExperimentationStartExperimentRequest"), sizeof(FExperimentationStartExperimentRequest), Get_Z_Construct_UScriptStruct_FExperimentationStartExperimentRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FExperimentationStartExperimentRequest>()
{
	return FExperimentationStartExperimentRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FExperimentationStartExperimentRequest(FExperimentationStartExperimentRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("ExperimentationStartExperimentRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFExperimentationStartExperimentRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFExperimentationStartExperimentRequest()
	{
		UScriptStruct::DeferCppStructOps<FExperimentationStartExperimentRequest>(FName(TEXT("ExperimentationStartExperimentRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFExperimentationStartExperimentRequest;
	struct Z_Construct_UScriptStruct_FExperimentationStartExperimentRequest_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExperimentId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ExperimentId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExperimentationStartExperimentRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Given a title entity token and an experiment ID, this API starts the experiment. */" },
		{ "ModuleRelativePath", "Classes/PlayFabExperimentationModels.h" },
		{ "ToolTip", "Given a title entity token and an experiment ID, this API starts the experiment." },
	};
#endif
	void* Z_Construct_UScriptStruct_FExperimentationStartExperimentRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FExperimentationStartExperimentRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExperimentationStartExperimentRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | Experimentation | Experimentation Models" },
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
		{ "ModuleRelativePath", "Classes/PlayFabExperimentationModels.h" },
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FExperimentationStartExperimentRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FExperimentationStartExperimentRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FExperimentationStartExperimentRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationStartExperimentRequest_Statics::NewProp_CustomTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExperimentationStartExperimentRequest_Statics::NewProp_ExperimentId_MetaData[] = {
		{ "Category", "PlayFab | Experimentation | Experimentation Models" },
		{ "Comment", "/** The ID of the experiment to start. */" },
		{ "ModuleRelativePath", "Classes/PlayFabExperimentationModels.h" },
		{ "ToolTip", "The ID of the experiment to start." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FExperimentationStartExperimentRequest_Statics::NewProp_ExperimentId = { "ExperimentId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FExperimentationStartExperimentRequest, ExperimentId), METADATA_PARAMS(Z_Construct_UScriptStruct_FExperimentationStartExperimentRequest_Statics::NewProp_ExperimentId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationStartExperimentRequest_Statics::NewProp_ExperimentId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FExperimentationStartExperimentRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExperimentationStartExperimentRequest_Statics::NewProp_CustomTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExperimentationStartExperimentRequest_Statics::NewProp_ExperimentId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FExperimentationStartExperimentRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"ExperimentationStartExperimentRequest",
		sizeof(FExperimentationStartExperimentRequest),
		alignof(FExperimentationStartExperimentRequest),
		Z_Construct_UScriptStruct_FExperimentationStartExperimentRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationStartExperimentRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FExperimentationStartExperimentRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationStartExperimentRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FExperimentationStartExperimentRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FExperimentationStartExperimentRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ExperimentationStartExperimentRequest"), sizeof(FExperimentationStartExperimentRequest), Get_Z_Construct_UScriptStruct_FExperimentationStartExperimentRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FExperimentationStartExperimentRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FExperimentationStartExperimentRequest_Hash() { return 2130148817U; }

static_assert(std::is_polymorphic<FExperimentationGetTreatmentAssignmentResult>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FExperimentationGetTreatmentAssignmentResult cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

class UScriptStruct* FExperimentationGetTreatmentAssignmentResult::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FExperimentationGetTreatmentAssignmentResult_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FExperimentationGetTreatmentAssignmentResult, Z_Construct_UPackage__Script_PlayFab(), TEXT("ExperimentationGetTreatmentAssignmentResult"), sizeof(FExperimentationGetTreatmentAssignmentResult), Get_Z_Construct_UScriptStruct_FExperimentationGetTreatmentAssignmentResult_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FExperimentationGetTreatmentAssignmentResult>()
{
	return FExperimentationGetTreatmentAssignmentResult::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FExperimentationGetTreatmentAssignmentResult(FExperimentationGetTreatmentAssignmentResult::StaticStruct, TEXT("/Script/PlayFab"), TEXT("ExperimentationGetTreatmentAssignmentResult"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFExperimentationGetTreatmentAssignmentResult
{
	FScriptStruct_PlayFab_StaticRegisterNativesFExperimentationGetTreatmentAssignmentResult()
	{
		UScriptStruct::DeferCppStructOps<FExperimentationGetTreatmentAssignmentResult>(FName(TEXT("ExperimentationGetTreatmentAssignmentResult")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFExperimentationGetTreatmentAssignmentResult;
	struct Z_Construct_UScriptStruct_FExperimentationGetTreatmentAssignmentResult_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TreatmentAssignment_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TreatmentAssignment;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExperimentationGetTreatmentAssignmentResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabExperimentationModels.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FExperimentationGetTreatmentAssignmentResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FExperimentationGetTreatmentAssignmentResult>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExperimentationGetTreatmentAssignmentResult_Statics::NewProp_TreatmentAssignment_MetaData[] = {
		{ "Category", "PlayFab | Experimentation | Experimentation Models" },
		{ "Comment", "/** Treatment assignment for the entity. */" },
		{ "ModuleRelativePath", "Classes/PlayFabExperimentationModels.h" },
		{ "ToolTip", "Treatment assignment for the entity." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FExperimentationGetTreatmentAssignmentResult_Statics::NewProp_TreatmentAssignment = { "TreatmentAssignment", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FExperimentationGetTreatmentAssignmentResult, TreatmentAssignment), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FExperimentationGetTreatmentAssignmentResult_Statics::NewProp_TreatmentAssignment_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationGetTreatmentAssignmentResult_Statics::NewProp_TreatmentAssignment_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FExperimentationGetTreatmentAssignmentResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExperimentationGetTreatmentAssignmentResult_Statics::NewProp_TreatmentAssignment,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FExperimentationGetTreatmentAssignmentResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"ExperimentationGetTreatmentAssignmentResult",
		sizeof(FExperimentationGetTreatmentAssignmentResult),
		alignof(FExperimentationGetTreatmentAssignmentResult),
		Z_Construct_UScriptStruct_FExperimentationGetTreatmentAssignmentResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationGetTreatmentAssignmentResult_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FExperimentationGetTreatmentAssignmentResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationGetTreatmentAssignmentResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FExperimentationGetTreatmentAssignmentResult()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FExperimentationGetTreatmentAssignmentResult_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ExperimentationGetTreatmentAssignmentResult"), sizeof(FExperimentationGetTreatmentAssignmentResult), Get_Z_Construct_UScriptStruct_FExperimentationGetTreatmentAssignmentResult_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FExperimentationGetTreatmentAssignmentResult_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FExperimentationGetTreatmentAssignmentResult_Hash() { return 2710237617U; }

static_assert(std::is_polymorphic<FExperimentationGetTreatmentAssignmentRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FExperimentationGetTreatmentAssignmentRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FExperimentationGetTreatmentAssignmentRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FExperimentationGetTreatmentAssignmentRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FExperimentationGetTreatmentAssignmentRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("ExperimentationGetTreatmentAssignmentRequest"), sizeof(FExperimentationGetTreatmentAssignmentRequest), Get_Z_Construct_UScriptStruct_FExperimentationGetTreatmentAssignmentRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FExperimentationGetTreatmentAssignmentRequest>()
{
	return FExperimentationGetTreatmentAssignmentRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FExperimentationGetTreatmentAssignmentRequest(FExperimentationGetTreatmentAssignmentRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("ExperimentationGetTreatmentAssignmentRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFExperimentationGetTreatmentAssignmentRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFExperimentationGetTreatmentAssignmentRequest()
	{
		UScriptStruct::DeferCppStructOps<FExperimentationGetTreatmentAssignmentRequest>(FName(TEXT("ExperimentationGetTreatmentAssignmentRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFExperimentationGetTreatmentAssignmentRequest;
	struct Z_Construct_UScriptStruct_FExperimentationGetTreatmentAssignmentRequest_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExperimentationGetTreatmentAssignmentRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Given a title player or a title entity token, returns the treatment variants and variables assigned to the entity across\n * all running experiments\n */" },
		{ "ModuleRelativePath", "Classes/PlayFabExperimentationModels.h" },
		{ "ToolTip", "Given a title player or a title entity token, returns the treatment variants and variables assigned to the entity across\nall running experiments" },
	};
#endif
	void* Z_Construct_UScriptStruct_FExperimentationGetTreatmentAssignmentRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FExperimentationGetTreatmentAssignmentRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExperimentationGetTreatmentAssignmentRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | Experimentation | Experimentation Models" },
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
		{ "ModuleRelativePath", "Classes/PlayFabExperimentationModels.h" },
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FExperimentationGetTreatmentAssignmentRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FExperimentationGetTreatmentAssignmentRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FExperimentationGetTreatmentAssignmentRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationGetTreatmentAssignmentRequest_Statics::NewProp_CustomTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExperimentationGetTreatmentAssignmentRequest_Statics::NewProp_Entity_MetaData[] = {
		{ "Category", "PlayFab | Experimentation | Experimentation Models" },
		{ "Comment", "/** The optional entity to perform this action on. Defaults to the currently logged in entity. */" },
		{ "ModuleRelativePath", "Classes/PlayFabExperimentationModels.h" },
		{ "ToolTip", "The optional entity to perform this action on. Defaults to the currently logged in entity." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FExperimentationGetTreatmentAssignmentRequest_Statics::NewProp_Entity = { "Entity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FExperimentationGetTreatmentAssignmentRequest, Entity), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FExperimentationGetTreatmentAssignmentRequest_Statics::NewProp_Entity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationGetTreatmentAssignmentRequest_Statics::NewProp_Entity_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FExperimentationGetTreatmentAssignmentRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExperimentationGetTreatmentAssignmentRequest_Statics::NewProp_CustomTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExperimentationGetTreatmentAssignmentRequest_Statics::NewProp_Entity,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FExperimentationGetTreatmentAssignmentRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"ExperimentationGetTreatmentAssignmentRequest",
		sizeof(FExperimentationGetTreatmentAssignmentRequest),
		alignof(FExperimentationGetTreatmentAssignmentRequest),
		Z_Construct_UScriptStruct_FExperimentationGetTreatmentAssignmentRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationGetTreatmentAssignmentRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FExperimentationGetTreatmentAssignmentRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationGetTreatmentAssignmentRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FExperimentationGetTreatmentAssignmentRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FExperimentationGetTreatmentAssignmentRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ExperimentationGetTreatmentAssignmentRequest"), sizeof(FExperimentationGetTreatmentAssignmentRequest), Get_Z_Construct_UScriptStruct_FExperimentationGetTreatmentAssignmentRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FExperimentationGetTreatmentAssignmentRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FExperimentationGetTreatmentAssignmentRequest_Hash() { return 376358005U; }

static_assert(std::is_polymorphic<FExperimentationGetLatestScorecardResult>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FExperimentationGetLatestScorecardResult cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

class UScriptStruct* FExperimentationGetLatestScorecardResult::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FExperimentationGetLatestScorecardResult_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FExperimentationGetLatestScorecardResult, Z_Construct_UPackage__Script_PlayFab(), TEXT("ExperimentationGetLatestScorecardResult"), sizeof(FExperimentationGetLatestScorecardResult), Get_Z_Construct_UScriptStruct_FExperimentationGetLatestScorecardResult_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FExperimentationGetLatestScorecardResult>()
{
	return FExperimentationGetLatestScorecardResult::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FExperimentationGetLatestScorecardResult(FExperimentationGetLatestScorecardResult::StaticStruct, TEXT("/Script/PlayFab"), TEXT("ExperimentationGetLatestScorecardResult"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFExperimentationGetLatestScorecardResult
{
	FScriptStruct_PlayFab_StaticRegisterNativesFExperimentationGetLatestScorecardResult()
	{
		UScriptStruct::DeferCppStructOps<FExperimentationGetLatestScorecardResult>(FName(TEXT("ExperimentationGetLatestScorecardResult")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFExperimentationGetLatestScorecardResult;
	struct Z_Construct_UScriptStruct_FExperimentationGetLatestScorecardResult_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Scorecard_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Scorecard;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExperimentationGetLatestScorecardResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabExperimentationModels.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FExperimentationGetLatestScorecardResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FExperimentationGetLatestScorecardResult>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExperimentationGetLatestScorecardResult_Statics::NewProp_Scorecard_MetaData[] = {
		{ "Category", "PlayFab | Experimentation | Experimentation Models" },
		{ "Comment", "/** Scorecard for the experiment of the title. */" },
		{ "ModuleRelativePath", "Classes/PlayFabExperimentationModels.h" },
		{ "ToolTip", "Scorecard for the experiment of the title." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FExperimentationGetLatestScorecardResult_Statics::NewProp_Scorecard = { "Scorecard", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FExperimentationGetLatestScorecardResult, Scorecard), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FExperimentationGetLatestScorecardResult_Statics::NewProp_Scorecard_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationGetLatestScorecardResult_Statics::NewProp_Scorecard_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FExperimentationGetLatestScorecardResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExperimentationGetLatestScorecardResult_Statics::NewProp_Scorecard,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FExperimentationGetLatestScorecardResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"ExperimentationGetLatestScorecardResult",
		sizeof(FExperimentationGetLatestScorecardResult),
		alignof(FExperimentationGetLatestScorecardResult),
		Z_Construct_UScriptStruct_FExperimentationGetLatestScorecardResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationGetLatestScorecardResult_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FExperimentationGetLatestScorecardResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationGetLatestScorecardResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FExperimentationGetLatestScorecardResult()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FExperimentationGetLatestScorecardResult_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ExperimentationGetLatestScorecardResult"), sizeof(FExperimentationGetLatestScorecardResult), Get_Z_Construct_UScriptStruct_FExperimentationGetLatestScorecardResult_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FExperimentationGetLatestScorecardResult_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FExperimentationGetLatestScorecardResult_Hash() { return 3851297871U; }

static_assert(std::is_polymorphic<FExperimentationGetLatestScorecardRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FExperimentationGetLatestScorecardRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FExperimentationGetLatestScorecardRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FExperimentationGetLatestScorecardRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FExperimentationGetLatestScorecardRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("ExperimentationGetLatestScorecardRequest"), sizeof(FExperimentationGetLatestScorecardRequest), Get_Z_Construct_UScriptStruct_FExperimentationGetLatestScorecardRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FExperimentationGetLatestScorecardRequest>()
{
	return FExperimentationGetLatestScorecardRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FExperimentationGetLatestScorecardRequest(FExperimentationGetLatestScorecardRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("ExperimentationGetLatestScorecardRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFExperimentationGetLatestScorecardRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFExperimentationGetLatestScorecardRequest()
	{
		UScriptStruct::DeferCppStructOps<FExperimentationGetLatestScorecardRequest>(FName(TEXT("ExperimentationGetLatestScorecardRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFExperimentationGetLatestScorecardRequest;
	struct Z_Construct_UScriptStruct_FExperimentationGetLatestScorecardRequest_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExperimentId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ExperimentId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExperimentationGetLatestScorecardRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Given a title entity token and experiment details, will return the latest available scorecard. */" },
		{ "ModuleRelativePath", "Classes/PlayFabExperimentationModels.h" },
		{ "ToolTip", "Given a title entity token and experiment details, will return the latest available scorecard." },
	};
#endif
	void* Z_Construct_UScriptStruct_FExperimentationGetLatestScorecardRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FExperimentationGetLatestScorecardRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExperimentationGetLatestScorecardRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | Experimentation | Experimentation Models" },
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
		{ "ModuleRelativePath", "Classes/PlayFabExperimentationModels.h" },
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FExperimentationGetLatestScorecardRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FExperimentationGetLatestScorecardRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FExperimentationGetLatestScorecardRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationGetLatestScorecardRequest_Statics::NewProp_CustomTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExperimentationGetLatestScorecardRequest_Statics::NewProp_ExperimentId_MetaData[] = {
		{ "Category", "PlayFab | Experimentation | Experimentation Models" },
		{ "Comment", "/** The ID of the experiment. */" },
		{ "ModuleRelativePath", "Classes/PlayFabExperimentationModels.h" },
		{ "ToolTip", "The ID of the experiment." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FExperimentationGetLatestScorecardRequest_Statics::NewProp_ExperimentId = { "ExperimentId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FExperimentationGetLatestScorecardRequest, ExperimentId), METADATA_PARAMS(Z_Construct_UScriptStruct_FExperimentationGetLatestScorecardRequest_Statics::NewProp_ExperimentId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationGetLatestScorecardRequest_Statics::NewProp_ExperimentId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FExperimentationGetLatestScorecardRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExperimentationGetLatestScorecardRequest_Statics::NewProp_CustomTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExperimentationGetLatestScorecardRequest_Statics::NewProp_ExperimentId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FExperimentationGetLatestScorecardRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"ExperimentationGetLatestScorecardRequest",
		sizeof(FExperimentationGetLatestScorecardRequest),
		alignof(FExperimentationGetLatestScorecardRequest),
		Z_Construct_UScriptStruct_FExperimentationGetLatestScorecardRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationGetLatestScorecardRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FExperimentationGetLatestScorecardRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationGetLatestScorecardRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FExperimentationGetLatestScorecardRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FExperimentationGetLatestScorecardRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ExperimentationGetLatestScorecardRequest"), sizeof(FExperimentationGetLatestScorecardRequest), Get_Z_Construct_UScriptStruct_FExperimentationGetLatestScorecardRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FExperimentationGetLatestScorecardRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FExperimentationGetLatestScorecardRequest_Hash() { return 3844461794U; }

static_assert(std::is_polymorphic<FExperimentationGetExperimentsResult>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FExperimentationGetExperimentsResult cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

class UScriptStruct* FExperimentationGetExperimentsResult::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FExperimentationGetExperimentsResult_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FExperimentationGetExperimentsResult, Z_Construct_UPackage__Script_PlayFab(), TEXT("ExperimentationGetExperimentsResult"), sizeof(FExperimentationGetExperimentsResult), Get_Z_Construct_UScriptStruct_FExperimentationGetExperimentsResult_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FExperimentationGetExperimentsResult>()
{
	return FExperimentationGetExperimentsResult::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FExperimentationGetExperimentsResult(FExperimentationGetExperimentsResult::StaticStruct, TEXT("/Script/PlayFab"), TEXT("ExperimentationGetExperimentsResult"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFExperimentationGetExperimentsResult
{
	FScriptStruct_PlayFab_StaticRegisterNativesFExperimentationGetExperimentsResult()
	{
		UScriptStruct::DeferCppStructOps<FExperimentationGetExperimentsResult>(FName(TEXT("ExperimentationGetExperimentsResult")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFExperimentationGetExperimentsResult;
	struct Z_Construct_UScriptStruct_FExperimentationGetExperimentsResult_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Experiments_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Experiments_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Experiments;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExperimentationGetExperimentsResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabExperimentationModels.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FExperimentationGetExperimentsResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FExperimentationGetExperimentsResult>();
	}
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FExperimentationGetExperimentsResult_Statics::NewProp_Experiments_Inner = { "Experiments", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExperimentationGetExperimentsResult_Statics::NewProp_Experiments_MetaData[] = {
		{ "Category", "PlayFab | Experimentation | Experimentation Models" },
		{ "Comment", "/** List of experiments for the title. */" },
		{ "ModuleRelativePath", "Classes/PlayFabExperimentationModels.h" },
		{ "ToolTip", "List of experiments for the title." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FExperimentationGetExperimentsResult_Statics::NewProp_Experiments = { "Experiments", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FExperimentationGetExperimentsResult, Experiments), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FExperimentationGetExperimentsResult_Statics::NewProp_Experiments_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationGetExperimentsResult_Statics::NewProp_Experiments_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FExperimentationGetExperimentsResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExperimentationGetExperimentsResult_Statics::NewProp_Experiments_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExperimentationGetExperimentsResult_Statics::NewProp_Experiments,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FExperimentationGetExperimentsResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"ExperimentationGetExperimentsResult",
		sizeof(FExperimentationGetExperimentsResult),
		alignof(FExperimentationGetExperimentsResult),
		Z_Construct_UScriptStruct_FExperimentationGetExperimentsResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationGetExperimentsResult_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FExperimentationGetExperimentsResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationGetExperimentsResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FExperimentationGetExperimentsResult()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FExperimentationGetExperimentsResult_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ExperimentationGetExperimentsResult"), sizeof(FExperimentationGetExperimentsResult), Get_Z_Construct_UScriptStruct_FExperimentationGetExperimentsResult_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FExperimentationGetExperimentsResult_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FExperimentationGetExperimentsResult_Hash() { return 2468035389U; }

static_assert(std::is_polymorphic<FExperimentationGetExperimentsRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FExperimentationGetExperimentsRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FExperimentationGetExperimentsRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FExperimentationGetExperimentsRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FExperimentationGetExperimentsRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("ExperimentationGetExperimentsRequest"), sizeof(FExperimentationGetExperimentsRequest), Get_Z_Construct_UScriptStruct_FExperimentationGetExperimentsRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FExperimentationGetExperimentsRequest>()
{
	return FExperimentationGetExperimentsRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FExperimentationGetExperimentsRequest(FExperimentationGetExperimentsRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("ExperimentationGetExperimentsRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFExperimentationGetExperimentsRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFExperimentationGetExperimentsRequest()
	{
		UScriptStruct::DeferCppStructOps<FExperimentationGetExperimentsRequest>(FName(TEXT("ExperimentationGetExperimentsRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFExperimentationGetExperimentsRequest;
	struct Z_Construct_UScriptStruct_FExperimentationGetExperimentsRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CustomTags;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExperimentationGetExperimentsRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Given a title entity token will return the list of all experiments for a title, including scheduled, started, stopped or\n * completed experiments.\n */" },
		{ "ModuleRelativePath", "Classes/PlayFabExperimentationModels.h" },
		{ "ToolTip", "Given a title entity token will return the list of all experiments for a title, including scheduled, started, stopped or\ncompleted experiments." },
	};
#endif
	void* Z_Construct_UScriptStruct_FExperimentationGetExperimentsRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FExperimentationGetExperimentsRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExperimentationGetExperimentsRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | Experimentation | Experimentation Models" },
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
		{ "ModuleRelativePath", "Classes/PlayFabExperimentationModels.h" },
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FExperimentationGetExperimentsRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FExperimentationGetExperimentsRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FExperimentationGetExperimentsRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationGetExperimentsRequest_Statics::NewProp_CustomTags_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FExperimentationGetExperimentsRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExperimentationGetExperimentsRequest_Statics::NewProp_CustomTags,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FExperimentationGetExperimentsRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"ExperimentationGetExperimentsRequest",
		sizeof(FExperimentationGetExperimentsRequest),
		alignof(FExperimentationGetExperimentsRequest),
		Z_Construct_UScriptStruct_FExperimentationGetExperimentsRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationGetExperimentsRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FExperimentationGetExperimentsRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationGetExperimentsRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FExperimentationGetExperimentsRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FExperimentationGetExperimentsRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ExperimentationGetExperimentsRequest"), sizeof(FExperimentationGetExperimentsRequest), Get_Z_Construct_UScriptStruct_FExperimentationGetExperimentsRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FExperimentationGetExperimentsRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FExperimentationGetExperimentsRequest_Hash() { return 1211715934U; }

static_assert(std::is_polymorphic<FExperimentationGetExclusionGroupTrafficResult>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FExperimentationGetExclusionGroupTrafficResult cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

class UScriptStruct* FExperimentationGetExclusionGroupTrafficResult::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FExperimentationGetExclusionGroupTrafficResult_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FExperimentationGetExclusionGroupTrafficResult, Z_Construct_UPackage__Script_PlayFab(), TEXT("ExperimentationGetExclusionGroupTrafficResult"), sizeof(FExperimentationGetExclusionGroupTrafficResult), Get_Z_Construct_UScriptStruct_FExperimentationGetExclusionGroupTrafficResult_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FExperimentationGetExclusionGroupTrafficResult>()
{
	return FExperimentationGetExclusionGroupTrafficResult::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FExperimentationGetExclusionGroupTrafficResult(FExperimentationGetExclusionGroupTrafficResult::StaticStruct, TEXT("/Script/PlayFab"), TEXT("ExperimentationGetExclusionGroupTrafficResult"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFExperimentationGetExclusionGroupTrafficResult
{
	FScriptStruct_PlayFab_StaticRegisterNativesFExperimentationGetExclusionGroupTrafficResult()
	{
		UScriptStruct::DeferCppStructOps<FExperimentationGetExclusionGroupTrafficResult>(FName(TEXT("ExperimentationGetExclusionGroupTrafficResult")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFExperimentationGetExclusionGroupTrafficResult;
	struct Z_Construct_UScriptStruct_FExperimentationGetExclusionGroupTrafficResult_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TrafficAllocations_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrafficAllocations_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TrafficAllocations;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExperimentationGetExclusionGroupTrafficResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabExperimentationModels.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FExperimentationGetExclusionGroupTrafficResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FExperimentationGetExclusionGroupTrafficResult>();
	}
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FExperimentationGetExclusionGroupTrafficResult_Statics::NewProp_TrafficAllocations_Inner = { "TrafficAllocations", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExperimentationGetExclusionGroupTrafficResult_Statics::NewProp_TrafficAllocations_MetaData[] = {
		{ "Category", "PlayFab | Experimentation | Experimentation Models" },
		{ "Comment", "/** List of traffic allocations for the exclusion group. */" },
		{ "ModuleRelativePath", "Classes/PlayFabExperimentationModels.h" },
		{ "ToolTip", "List of traffic allocations for the exclusion group." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FExperimentationGetExclusionGroupTrafficResult_Statics::NewProp_TrafficAllocations = { "TrafficAllocations", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FExperimentationGetExclusionGroupTrafficResult, TrafficAllocations), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FExperimentationGetExclusionGroupTrafficResult_Statics::NewProp_TrafficAllocations_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationGetExclusionGroupTrafficResult_Statics::NewProp_TrafficAllocations_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FExperimentationGetExclusionGroupTrafficResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExperimentationGetExclusionGroupTrafficResult_Statics::NewProp_TrafficAllocations_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExperimentationGetExclusionGroupTrafficResult_Statics::NewProp_TrafficAllocations,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FExperimentationGetExclusionGroupTrafficResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"ExperimentationGetExclusionGroupTrafficResult",
		sizeof(FExperimentationGetExclusionGroupTrafficResult),
		alignof(FExperimentationGetExclusionGroupTrafficResult),
		Z_Construct_UScriptStruct_FExperimentationGetExclusionGroupTrafficResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationGetExclusionGroupTrafficResult_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FExperimentationGetExclusionGroupTrafficResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationGetExclusionGroupTrafficResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FExperimentationGetExclusionGroupTrafficResult()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FExperimentationGetExclusionGroupTrafficResult_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ExperimentationGetExclusionGroupTrafficResult"), sizeof(FExperimentationGetExclusionGroupTrafficResult), Get_Z_Construct_UScriptStruct_FExperimentationGetExclusionGroupTrafficResult_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FExperimentationGetExclusionGroupTrafficResult_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FExperimentationGetExclusionGroupTrafficResult_Hash() { return 1795720901U; }

static_assert(std::is_polymorphic<FExperimentationGetExclusionGroupTrafficRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FExperimentationGetExclusionGroupTrafficRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FExperimentationGetExclusionGroupTrafficRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FExperimentationGetExclusionGroupTrafficRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FExperimentationGetExclusionGroupTrafficRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("ExperimentationGetExclusionGroupTrafficRequest"), sizeof(FExperimentationGetExclusionGroupTrafficRequest), Get_Z_Construct_UScriptStruct_FExperimentationGetExclusionGroupTrafficRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FExperimentationGetExclusionGroupTrafficRequest>()
{
	return FExperimentationGetExclusionGroupTrafficRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FExperimentationGetExclusionGroupTrafficRequest(FExperimentationGetExclusionGroupTrafficRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("ExperimentationGetExclusionGroupTrafficRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFExperimentationGetExclusionGroupTrafficRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFExperimentationGetExclusionGroupTrafficRequest()
	{
		UScriptStruct::DeferCppStructOps<FExperimentationGetExclusionGroupTrafficRequest>(FName(TEXT("ExperimentationGetExclusionGroupTrafficRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFExperimentationGetExclusionGroupTrafficRequest;
	struct Z_Construct_UScriptStruct_FExperimentationGetExclusionGroupTrafficRequest_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExclusionGroupId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ExclusionGroupId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExperimentationGetExclusionGroupTrafficRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Given a title entity token and an exclusion group ID, will return the list of traffic allocations for the exclusion\n * group.\n */" },
		{ "ModuleRelativePath", "Classes/PlayFabExperimentationModels.h" },
		{ "ToolTip", "Given a title entity token and an exclusion group ID, will return the list of traffic allocations for the exclusion\ngroup." },
	};
#endif
	void* Z_Construct_UScriptStruct_FExperimentationGetExclusionGroupTrafficRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FExperimentationGetExclusionGroupTrafficRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExperimentationGetExclusionGroupTrafficRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | Experimentation | Experimentation Models" },
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
		{ "ModuleRelativePath", "Classes/PlayFabExperimentationModels.h" },
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FExperimentationGetExclusionGroupTrafficRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FExperimentationGetExclusionGroupTrafficRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FExperimentationGetExclusionGroupTrafficRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationGetExclusionGroupTrafficRequest_Statics::NewProp_CustomTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExperimentationGetExclusionGroupTrafficRequest_Statics::NewProp_ExclusionGroupId_MetaData[] = {
		{ "Category", "PlayFab | Experimentation | Experimentation Models" },
		{ "Comment", "/** The ID of the exclusion group. */" },
		{ "ModuleRelativePath", "Classes/PlayFabExperimentationModels.h" },
		{ "ToolTip", "The ID of the exclusion group." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FExperimentationGetExclusionGroupTrafficRequest_Statics::NewProp_ExclusionGroupId = { "ExclusionGroupId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FExperimentationGetExclusionGroupTrafficRequest, ExclusionGroupId), METADATA_PARAMS(Z_Construct_UScriptStruct_FExperimentationGetExclusionGroupTrafficRequest_Statics::NewProp_ExclusionGroupId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationGetExclusionGroupTrafficRequest_Statics::NewProp_ExclusionGroupId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FExperimentationGetExclusionGroupTrafficRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExperimentationGetExclusionGroupTrafficRequest_Statics::NewProp_CustomTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExperimentationGetExclusionGroupTrafficRequest_Statics::NewProp_ExclusionGroupId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FExperimentationGetExclusionGroupTrafficRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"ExperimentationGetExclusionGroupTrafficRequest",
		sizeof(FExperimentationGetExclusionGroupTrafficRequest),
		alignof(FExperimentationGetExclusionGroupTrafficRequest),
		Z_Construct_UScriptStruct_FExperimentationGetExclusionGroupTrafficRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationGetExclusionGroupTrafficRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FExperimentationGetExclusionGroupTrafficRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationGetExclusionGroupTrafficRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FExperimentationGetExclusionGroupTrafficRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FExperimentationGetExclusionGroupTrafficRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ExperimentationGetExclusionGroupTrafficRequest"), sizeof(FExperimentationGetExclusionGroupTrafficRequest), Get_Z_Construct_UScriptStruct_FExperimentationGetExclusionGroupTrafficRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FExperimentationGetExclusionGroupTrafficRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FExperimentationGetExclusionGroupTrafficRequest_Hash() { return 2787125339U; }

static_assert(std::is_polymorphic<FExperimentationGetExclusionGroupsResult>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FExperimentationGetExclusionGroupsResult cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

class UScriptStruct* FExperimentationGetExclusionGroupsResult::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FExperimentationGetExclusionGroupsResult_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FExperimentationGetExclusionGroupsResult, Z_Construct_UPackage__Script_PlayFab(), TEXT("ExperimentationGetExclusionGroupsResult"), sizeof(FExperimentationGetExclusionGroupsResult), Get_Z_Construct_UScriptStruct_FExperimentationGetExclusionGroupsResult_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FExperimentationGetExclusionGroupsResult>()
{
	return FExperimentationGetExclusionGroupsResult::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FExperimentationGetExclusionGroupsResult(FExperimentationGetExclusionGroupsResult::StaticStruct, TEXT("/Script/PlayFab"), TEXT("ExperimentationGetExclusionGroupsResult"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFExperimentationGetExclusionGroupsResult
{
	FScriptStruct_PlayFab_StaticRegisterNativesFExperimentationGetExclusionGroupsResult()
	{
		UScriptStruct::DeferCppStructOps<FExperimentationGetExclusionGroupsResult>(FName(TEXT("ExperimentationGetExclusionGroupsResult")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFExperimentationGetExclusionGroupsResult;
	struct Z_Construct_UScriptStruct_FExperimentationGetExclusionGroupsResult_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ExclusionGroups_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExclusionGroups_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ExclusionGroups;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExperimentationGetExclusionGroupsResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabExperimentationModels.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FExperimentationGetExclusionGroupsResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FExperimentationGetExclusionGroupsResult>();
	}
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FExperimentationGetExclusionGroupsResult_Statics::NewProp_ExclusionGroups_Inner = { "ExclusionGroups", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExperimentationGetExclusionGroupsResult_Statics::NewProp_ExclusionGroups_MetaData[] = {
		{ "Category", "PlayFab | Experimentation | Experimentation Models" },
		{ "Comment", "/** List of exclusion groups for the title. */" },
		{ "ModuleRelativePath", "Classes/PlayFabExperimentationModels.h" },
		{ "ToolTip", "List of exclusion groups for the title." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FExperimentationGetExclusionGroupsResult_Statics::NewProp_ExclusionGroups = { "ExclusionGroups", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FExperimentationGetExclusionGroupsResult, ExclusionGroups), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FExperimentationGetExclusionGroupsResult_Statics::NewProp_ExclusionGroups_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationGetExclusionGroupsResult_Statics::NewProp_ExclusionGroups_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FExperimentationGetExclusionGroupsResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExperimentationGetExclusionGroupsResult_Statics::NewProp_ExclusionGroups_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExperimentationGetExclusionGroupsResult_Statics::NewProp_ExclusionGroups,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FExperimentationGetExclusionGroupsResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"ExperimentationGetExclusionGroupsResult",
		sizeof(FExperimentationGetExclusionGroupsResult),
		alignof(FExperimentationGetExclusionGroupsResult),
		Z_Construct_UScriptStruct_FExperimentationGetExclusionGroupsResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationGetExclusionGroupsResult_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FExperimentationGetExclusionGroupsResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationGetExclusionGroupsResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FExperimentationGetExclusionGroupsResult()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FExperimentationGetExclusionGroupsResult_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ExperimentationGetExclusionGroupsResult"), sizeof(FExperimentationGetExclusionGroupsResult), Get_Z_Construct_UScriptStruct_FExperimentationGetExclusionGroupsResult_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FExperimentationGetExclusionGroupsResult_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FExperimentationGetExclusionGroupsResult_Hash() { return 3451966376U; }

static_assert(std::is_polymorphic<FExperimentationGetExclusionGroupsRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FExperimentationGetExclusionGroupsRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FExperimentationGetExclusionGroupsRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FExperimentationGetExclusionGroupsRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FExperimentationGetExclusionGroupsRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("ExperimentationGetExclusionGroupsRequest"), sizeof(FExperimentationGetExclusionGroupsRequest), Get_Z_Construct_UScriptStruct_FExperimentationGetExclusionGroupsRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FExperimentationGetExclusionGroupsRequest>()
{
	return FExperimentationGetExclusionGroupsRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FExperimentationGetExclusionGroupsRequest(FExperimentationGetExclusionGroupsRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("ExperimentationGetExclusionGroupsRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFExperimentationGetExclusionGroupsRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFExperimentationGetExclusionGroupsRequest()
	{
		UScriptStruct::DeferCppStructOps<FExperimentationGetExclusionGroupsRequest>(FName(TEXT("ExperimentationGetExclusionGroupsRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFExperimentationGetExclusionGroupsRequest;
	struct Z_Construct_UScriptStruct_FExperimentationGetExclusionGroupsRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CustomTags;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExperimentationGetExclusionGroupsRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Given a title entity token will return the list of all exclusion groups for a title. */" },
		{ "ModuleRelativePath", "Classes/PlayFabExperimentationModels.h" },
		{ "ToolTip", "Given a title entity token will return the list of all exclusion groups for a title." },
	};
#endif
	void* Z_Construct_UScriptStruct_FExperimentationGetExclusionGroupsRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FExperimentationGetExclusionGroupsRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExperimentationGetExclusionGroupsRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | Experimentation | Experimentation Models" },
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
		{ "ModuleRelativePath", "Classes/PlayFabExperimentationModels.h" },
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FExperimentationGetExclusionGroupsRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FExperimentationGetExclusionGroupsRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FExperimentationGetExclusionGroupsRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationGetExclusionGroupsRequest_Statics::NewProp_CustomTags_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FExperimentationGetExclusionGroupsRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExperimentationGetExclusionGroupsRequest_Statics::NewProp_CustomTags,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FExperimentationGetExclusionGroupsRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"ExperimentationGetExclusionGroupsRequest",
		sizeof(FExperimentationGetExclusionGroupsRequest),
		alignof(FExperimentationGetExclusionGroupsRequest),
		Z_Construct_UScriptStruct_FExperimentationGetExclusionGroupsRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationGetExclusionGroupsRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FExperimentationGetExclusionGroupsRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationGetExclusionGroupsRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FExperimentationGetExclusionGroupsRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FExperimentationGetExclusionGroupsRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ExperimentationGetExclusionGroupsRequest"), sizeof(FExperimentationGetExclusionGroupsRequest), Get_Z_Construct_UScriptStruct_FExperimentationGetExclusionGroupsRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FExperimentationGetExclusionGroupsRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FExperimentationGetExclusionGroupsRequest_Hash() { return 979942503U; }

static_assert(std::is_polymorphic<FExperimentationDeleteExperimentRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FExperimentationDeleteExperimentRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FExperimentationDeleteExperimentRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FExperimentationDeleteExperimentRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FExperimentationDeleteExperimentRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("ExperimentationDeleteExperimentRequest"), sizeof(FExperimentationDeleteExperimentRequest), Get_Z_Construct_UScriptStruct_FExperimentationDeleteExperimentRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FExperimentationDeleteExperimentRequest>()
{
	return FExperimentationDeleteExperimentRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FExperimentationDeleteExperimentRequest(FExperimentationDeleteExperimentRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("ExperimentationDeleteExperimentRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFExperimentationDeleteExperimentRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFExperimentationDeleteExperimentRequest()
	{
		UScriptStruct::DeferCppStructOps<FExperimentationDeleteExperimentRequest>(FName(TEXT("ExperimentationDeleteExperimentRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFExperimentationDeleteExperimentRequest;
	struct Z_Construct_UScriptStruct_FExperimentationDeleteExperimentRequest_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExperimentId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ExperimentId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExperimentationDeleteExperimentRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Given an entity token and an experiment ID this API deletes the experiment. A running experiment must be stopped before\n * it can be deleted.\n */" },
		{ "ModuleRelativePath", "Classes/PlayFabExperimentationModels.h" },
		{ "ToolTip", "Given an entity token and an experiment ID this API deletes the experiment. A running experiment must be stopped before\nit can be deleted." },
	};
#endif
	void* Z_Construct_UScriptStruct_FExperimentationDeleteExperimentRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FExperimentationDeleteExperimentRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExperimentationDeleteExperimentRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | Experimentation | Experimentation Models" },
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
		{ "ModuleRelativePath", "Classes/PlayFabExperimentationModels.h" },
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FExperimentationDeleteExperimentRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FExperimentationDeleteExperimentRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FExperimentationDeleteExperimentRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationDeleteExperimentRequest_Statics::NewProp_CustomTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExperimentationDeleteExperimentRequest_Statics::NewProp_ExperimentId_MetaData[] = {
		{ "Category", "PlayFab | Experimentation | Experimentation Models" },
		{ "Comment", "/** The ID of the experiment to delete. */" },
		{ "ModuleRelativePath", "Classes/PlayFabExperimentationModels.h" },
		{ "ToolTip", "The ID of the experiment to delete." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FExperimentationDeleteExperimentRequest_Statics::NewProp_ExperimentId = { "ExperimentId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FExperimentationDeleteExperimentRequest, ExperimentId), METADATA_PARAMS(Z_Construct_UScriptStruct_FExperimentationDeleteExperimentRequest_Statics::NewProp_ExperimentId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationDeleteExperimentRequest_Statics::NewProp_ExperimentId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FExperimentationDeleteExperimentRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExperimentationDeleteExperimentRequest_Statics::NewProp_CustomTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExperimentationDeleteExperimentRequest_Statics::NewProp_ExperimentId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FExperimentationDeleteExperimentRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"ExperimentationDeleteExperimentRequest",
		sizeof(FExperimentationDeleteExperimentRequest),
		alignof(FExperimentationDeleteExperimentRequest),
		Z_Construct_UScriptStruct_FExperimentationDeleteExperimentRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationDeleteExperimentRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FExperimentationDeleteExperimentRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationDeleteExperimentRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FExperimentationDeleteExperimentRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FExperimentationDeleteExperimentRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ExperimentationDeleteExperimentRequest"), sizeof(FExperimentationDeleteExperimentRequest), Get_Z_Construct_UScriptStruct_FExperimentationDeleteExperimentRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FExperimentationDeleteExperimentRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FExperimentationDeleteExperimentRequest_Hash() { return 4214832139U; }

static_assert(std::is_polymorphic<FExperimentationEmptyResponse>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FExperimentationEmptyResponse cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

class UScriptStruct* FExperimentationEmptyResponse::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FExperimentationEmptyResponse_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FExperimentationEmptyResponse, Z_Construct_UPackage__Script_PlayFab(), TEXT("ExperimentationEmptyResponse"), sizeof(FExperimentationEmptyResponse), Get_Z_Construct_UScriptStruct_FExperimentationEmptyResponse_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FExperimentationEmptyResponse>()
{
	return FExperimentationEmptyResponse::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FExperimentationEmptyResponse(FExperimentationEmptyResponse::StaticStruct, TEXT("/Script/PlayFab"), TEXT("ExperimentationEmptyResponse"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFExperimentationEmptyResponse
{
	FScriptStruct_PlayFab_StaticRegisterNativesFExperimentationEmptyResponse()
	{
		UScriptStruct::DeferCppStructOps<FExperimentationEmptyResponse>(FName(TEXT("ExperimentationEmptyResponse")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFExperimentationEmptyResponse;
	struct Z_Construct_UScriptStruct_FExperimentationEmptyResponse_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExperimentationEmptyResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabExperimentationModels.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FExperimentationEmptyResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FExperimentationEmptyResponse>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FExperimentationEmptyResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"ExperimentationEmptyResponse",
		sizeof(FExperimentationEmptyResponse),
		alignof(FExperimentationEmptyResponse),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FExperimentationEmptyResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationEmptyResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FExperimentationEmptyResponse()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FExperimentationEmptyResponse_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ExperimentationEmptyResponse"), sizeof(FExperimentationEmptyResponse), Get_Z_Construct_UScriptStruct_FExperimentationEmptyResponse_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FExperimentationEmptyResponse_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FExperimentationEmptyResponse_Hash() { return 2754538834U; }

static_assert(std::is_polymorphic<FExperimentationDeleteExclusionGroupRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FExperimentationDeleteExclusionGroupRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FExperimentationDeleteExclusionGroupRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FExperimentationDeleteExclusionGroupRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FExperimentationDeleteExclusionGroupRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("ExperimentationDeleteExclusionGroupRequest"), sizeof(FExperimentationDeleteExclusionGroupRequest), Get_Z_Construct_UScriptStruct_FExperimentationDeleteExclusionGroupRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FExperimentationDeleteExclusionGroupRequest>()
{
	return FExperimentationDeleteExclusionGroupRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FExperimentationDeleteExclusionGroupRequest(FExperimentationDeleteExclusionGroupRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("ExperimentationDeleteExclusionGroupRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFExperimentationDeleteExclusionGroupRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFExperimentationDeleteExclusionGroupRequest()
	{
		UScriptStruct::DeferCppStructOps<FExperimentationDeleteExclusionGroupRequest>(FName(TEXT("ExperimentationDeleteExclusionGroupRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFExperimentationDeleteExclusionGroupRequest;
	struct Z_Construct_UScriptStruct_FExperimentationDeleteExclusionGroupRequest_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExclusionGroupId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ExclusionGroupId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExperimentationDeleteExclusionGroupRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Given an entity token and an exclusion group ID this API deletes the exclusion group. */" },
		{ "ModuleRelativePath", "Classes/PlayFabExperimentationModels.h" },
		{ "ToolTip", "Given an entity token and an exclusion group ID this API deletes the exclusion group." },
	};
#endif
	void* Z_Construct_UScriptStruct_FExperimentationDeleteExclusionGroupRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FExperimentationDeleteExclusionGroupRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExperimentationDeleteExclusionGroupRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | Experimentation | Experimentation Models" },
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
		{ "ModuleRelativePath", "Classes/PlayFabExperimentationModels.h" },
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FExperimentationDeleteExclusionGroupRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FExperimentationDeleteExclusionGroupRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FExperimentationDeleteExclusionGroupRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationDeleteExclusionGroupRequest_Statics::NewProp_CustomTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExperimentationDeleteExclusionGroupRequest_Statics::NewProp_ExclusionGroupId_MetaData[] = {
		{ "Category", "PlayFab | Experimentation | Experimentation Models" },
		{ "Comment", "/** The ID of the exclusion group to delete. */" },
		{ "ModuleRelativePath", "Classes/PlayFabExperimentationModels.h" },
		{ "ToolTip", "The ID of the exclusion group to delete." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FExperimentationDeleteExclusionGroupRequest_Statics::NewProp_ExclusionGroupId = { "ExclusionGroupId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FExperimentationDeleteExclusionGroupRequest, ExclusionGroupId), METADATA_PARAMS(Z_Construct_UScriptStruct_FExperimentationDeleteExclusionGroupRequest_Statics::NewProp_ExclusionGroupId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationDeleteExclusionGroupRequest_Statics::NewProp_ExclusionGroupId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FExperimentationDeleteExclusionGroupRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExperimentationDeleteExclusionGroupRequest_Statics::NewProp_CustomTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExperimentationDeleteExclusionGroupRequest_Statics::NewProp_ExclusionGroupId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FExperimentationDeleteExclusionGroupRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"ExperimentationDeleteExclusionGroupRequest",
		sizeof(FExperimentationDeleteExclusionGroupRequest),
		alignof(FExperimentationDeleteExclusionGroupRequest),
		Z_Construct_UScriptStruct_FExperimentationDeleteExclusionGroupRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationDeleteExclusionGroupRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FExperimentationDeleteExclusionGroupRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationDeleteExclusionGroupRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FExperimentationDeleteExclusionGroupRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FExperimentationDeleteExclusionGroupRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ExperimentationDeleteExclusionGroupRequest"), sizeof(FExperimentationDeleteExclusionGroupRequest), Get_Z_Construct_UScriptStruct_FExperimentationDeleteExclusionGroupRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FExperimentationDeleteExclusionGroupRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FExperimentationDeleteExclusionGroupRequest_Hash() { return 4116129372U; }

static_assert(std::is_polymorphic<FExperimentationCreateExperimentResult>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FExperimentationCreateExperimentResult cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

class UScriptStruct* FExperimentationCreateExperimentResult::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FExperimentationCreateExperimentResult_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FExperimentationCreateExperimentResult, Z_Construct_UPackage__Script_PlayFab(), TEXT("ExperimentationCreateExperimentResult"), sizeof(FExperimentationCreateExperimentResult), Get_Z_Construct_UScriptStruct_FExperimentationCreateExperimentResult_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FExperimentationCreateExperimentResult>()
{
	return FExperimentationCreateExperimentResult::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FExperimentationCreateExperimentResult(FExperimentationCreateExperimentResult::StaticStruct, TEXT("/Script/PlayFab"), TEXT("ExperimentationCreateExperimentResult"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFExperimentationCreateExperimentResult
{
	FScriptStruct_PlayFab_StaticRegisterNativesFExperimentationCreateExperimentResult()
	{
		UScriptStruct::DeferCppStructOps<FExperimentationCreateExperimentResult>(FName(TEXT("ExperimentationCreateExperimentResult")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFExperimentationCreateExperimentResult;
	struct Z_Construct_UScriptStruct_FExperimentationCreateExperimentResult_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExperimentId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ExperimentId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExperimentationCreateExperimentResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabExperimentationModels.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FExperimentationCreateExperimentResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FExperimentationCreateExperimentResult>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExperimentationCreateExperimentResult_Statics::NewProp_ExperimentId_MetaData[] = {
		{ "Category", "PlayFab | Experimentation | Experimentation Models" },
		{ "Comment", "/** The ID of the new experiment. */" },
		{ "ModuleRelativePath", "Classes/PlayFabExperimentationModels.h" },
		{ "ToolTip", "The ID of the new experiment." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FExperimentationCreateExperimentResult_Statics::NewProp_ExperimentId = { "ExperimentId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FExperimentationCreateExperimentResult, ExperimentId), METADATA_PARAMS(Z_Construct_UScriptStruct_FExperimentationCreateExperimentResult_Statics::NewProp_ExperimentId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationCreateExperimentResult_Statics::NewProp_ExperimentId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FExperimentationCreateExperimentResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExperimentationCreateExperimentResult_Statics::NewProp_ExperimentId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FExperimentationCreateExperimentResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"ExperimentationCreateExperimentResult",
		sizeof(FExperimentationCreateExperimentResult),
		alignof(FExperimentationCreateExperimentResult),
		Z_Construct_UScriptStruct_FExperimentationCreateExperimentResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationCreateExperimentResult_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FExperimentationCreateExperimentResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationCreateExperimentResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FExperimentationCreateExperimentResult()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FExperimentationCreateExperimentResult_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ExperimentationCreateExperimentResult"), sizeof(FExperimentationCreateExperimentResult), Get_Z_Construct_UScriptStruct_FExperimentationCreateExperimentResult_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FExperimentationCreateExperimentResult_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FExperimentationCreateExperimentResult_Hash() { return 3517950644U; }

static_assert(std::is_polymorphic<FExperimentationCreateExperimentRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FExperimentationCreateExperimentRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FExperimentationCreateExperimentRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FExperimentationCreateExperimentRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FExperimentationCreateExperimentRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("ExperimentationCreateExperimentRequest"), sizeof(FExperimentationCreateExperimentRequest), Get_Z_Construct_UScriptStruct_FExperimentationCreateExperimentRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FExperimentationCreateExperimentRequest>()
{
	return FExperimentationCreateExperimentRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FExperimentationCreateExperimentRequest(FExperimentationCreateExperimentRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("ExperimentationCreateExperimentRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFExperimentationCreateExperimentRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFExperimentationCreateExperimentRequest()
	{
		UScriptStruct::DeferCppStructOps<FExperimentationCreateExperimentRequest>(FName(TEXT("ExperimentationCreateExperimentRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFExperimentationCreateExperimentRequest;
	struct Z_Construct_UScriptStruct_FExperimentationCreateExperimentRequest_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Description;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndDate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_EndDate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExclusionGroupId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ExclusionGroupId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExclusionGroupTrafficAllocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ExclusionGroupTrafficAllocation;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ExperimentType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExperimentType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ExperimentType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SegmentId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SegmentId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartDate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StartDate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TitlePlayerAccountTestIds_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TitlePlayerAccountTestIds;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Variants_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Variants_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Variants;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExperimentationCreateExperimentRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Given a title entity token and experiment details, will create a new experiment for the title. */" },
		{ "ModuleRelativePath", "Classes/PlayFabExperimentationModels.h" },
		{ "ToolTip", "Given a title entity token and experiment details, will create a new experiment for the title." },
	};
#endif
	void* Z_Construct_UScriptStruct_FExperimentationCreateExperimentRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FExperimentationCreateExperimentRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExperimentationCreateExperimentRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | Experimentation | Experimentation Models" },
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
		{ "ModuleRelativePath", "Classes/PlayFabExperimentationModels.h" },
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FExperimentationCreateExperimentRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FExperimentationCreateExperimentRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FExperimentationCreateExperimentRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationCreateExperimentRequest_Statics::NewProp_CustomTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExperimentationCreateExperimentRequest_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "PlayFab | Experimentation | Experimentation Models" },
		{ "Comment", "/** Description of the experiment. */" },
		{ "ModuleRelativePath", "Classes/PlayFabExperimentationModels.h" },
		{ "ToolTip", "Description of the experiment." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FExperimentationCreateExperimentRequest_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FExperimentationCreateExperimentRequest, Description), METADATA_PARAMS(Z_Construct_UScriptStruct_FExperimentationCreateExperimentRequest_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationCreateExperimentRequest_Statics::NewProp_Description_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExperimentationCreateExperimentRequest_Statics::NewProp_EndDate_MetaData[] = {
		{ "Category", "PlayFab | Experimentation | Experimentation Models" },
		{ "Comment", "/** When experiment should end. */" },
		{ "ModuleRelativePath", "Classes/PlayFabExperimentationModels.h" },
		{ "ToolTip", "When experiment should end." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FExperimentationCreateExperimentRequest_Statics::NewProp_EndDate = { "EndDate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FExperimentationCreateExperimentRequest, EndDate), METADATA_PARAMS(Z_Construct_UScriptStruct_FExperimentationCreateExperimentRequest_Statics::NewProp_EndDate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationCreateExperimentRequest_Statics::NewProp_EndDate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExperimentationCreateExperimentRequest_Statics::NewProp_ExclusionGroupId_MetaData[] = {
		{ "Category", "PlayFab | Experimentation | Experimentation Models" },
		{ "Comment", "/** Id of the exclusion group. */" },
		{ "ModuleRelativePath", "Classes/PlayFabExperimentationModels.h" },
		{ "ToolTip", "Id of the exclusion group." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FExperimentationCreateExperimentRequest_Statics::NewProp_ExclusionGroupId = { "ExclusionGroupId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FExperimentationCreateExperimentRequest, ExclusionGroupId), METADATA_PARAMS(Z_Construct_UScriptStruct_FExperimentationCreateExperimentRequest_Statics::NewProp_ExclusionGroupId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationCreateExperimentRequest_Statics::NewProp_ExclusionGroupId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExperimentationCreateExperimentRequest_Statics::NewProp_ExclusionGroupTrafficAllocation_MetaData[] = {
		{ "Category", "PlayFab | Experimentation | Experimentation Models" },
		{ "Comment", "/** Percentage of exclusion group traffic that will see this experiment. */" },
		{ "ModuleRelativePath", "Classes/PlayFabExperimentationModels.h" },
		{ "ToolTip", "Percentage of exclusion group traffic that will see this experiment." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FExperimentationCreateExperimentRequest_Statics::NewProp_ExclusionGroupTrafficAllocation = { "ExclusionGroupTrafficAllocation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FExperimentationCreateExperimentRequest, ExclusionGroupTrafficAllocation), METADATA_PARAMS(Z_Construct_UScriptStruct_FExperimentationCreateExperimentRequest_Statics::NewProp_ExclusionGroupTrafficAllocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationCreateExperimentRequest_Statics::NewProp_ExclusionGroupTrafficAllocation_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FExperimentationCreateExperimentRequest_Statics::NewProp_ExperimentType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExperimentationCreateExperimentRequest_Statics::NewProp_ExperimentType_MetaData[] = {
		{ "Category", "PlayFab | Experimentation | Experimentation Models" },
		{ "Comment", "/** Type of experiment. */" },
		{ "ModuleRelativePath", "Classes/PlayFabExperimentationModels.h" },
		{ "ToolTip", "Type of experiment." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FExperimentationCreateExperimentRequest_Statics::NewProp_ExperimentType = { "ExperimentType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FExperimentationCreateExperimentRequest, ExperimentType), Z_Construct_UEnum_PlayFab_EExperimentType, METADATA_PARAMS(Z_Construct_UScriptStruct_FExperimentationCreateExperimentRequest_Statics::NewProp_ExperimentType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationCreateExperimentRequest_Statics::NewProp_ExperimentType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExperimentationCreateExperimentRequest_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "PlayFab | Experimentation | Experimentation Models" },
		{ "Comment", "/** Friendly name of the experiment. */" },
		{ "ModuleRelativePath", "Classes/PlayFabExperimentationModels.h" },
		{ "ToolTip", "Friendly name of the experiment." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FExperimentationCreateExperimentRequest_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FExperimentationCreateExperimentRequest, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FExperimentationCreateExperimentRequest_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationCreateExperimentRequest_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExperimentationCreateExperimentRequest_Statics::NewProp_SegmentId_MetaData[] = {
		{ "Category", "PlayFab | Experimentation | Experimentation Models" },
		{ "Comment", "/** Id of the segment to which this experiment applies. Defaults to the 'All Players' segment. */" },
		{ "ModuleRelativePath", "Classes/PlayFabExperimentationModels.h" },
		{ "ToolTip", "Id of the segment to which this experiment applies. Defaults to the 'All Players' segment." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FExperimentationCreateExperimentRequest_Statics::NewProp_SegmentId = { "SegmentId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FExperimentationCreateExperimentRequest, SegmentId), METADATA_PARAMS(Z_Construct_UScriptStruct_FExperimentationCreateExperimentRequest_Statics::NewProp_SegmentId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationCreateExperimentRequest_Statics::NewProp_SegmentId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExperimentationCreateExperimentRequest_Statics::NewProp_StartDate_MetaData[] = {
		{ "Category", "PlayFab | Experimentation | Experimentation Models" },
		{ "Comment", "/** When experiment should start. */" },
		{ "ModuleRelativePath", "Classes/PlayFabExperimentationModels.h" },
		{ "ToolTip", "When experiment should start." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FExperimentationCreateExperimentRequest_Statics::NewProp_StartDate = { "StartDate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FExperimentationCreateExperimentRequest, StartDate), METADATA_PARAMS(Z_Construct_UScriptStruct_FExperimentationCreateExperimentRequest_Statics::NewProp_StartDate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationCreateExperimentRequest_Statics::NewProp_StartDate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExperimentationCreateExperimentRequest_Statics::NewProp_TitlePlayerAccountTestIds_MetaData[] = {
		{ "Category", "PlayFab | Experimentation | Experimentation Models" },
		{ "Comment", "/**\n     * List of title player account IDs that automatically receive treatments in the experiment, but are not included when\n     * calculating experiment metrics.\n     */" },
		{ "ModuleRelativePath", "Classes/PlayFabExperimentationModels.h" },
		{ "ToolTip", "List of title player account IDs that automatically receive treatments in the experiment, but are not included when\ncalculating experiment metrics." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FExperimentationCreateExperimentRequest_Statics::NewProp_TitlePlayerAccountTestIds = { "TitlePlayerAccountTestIds", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FExperimentationCreateExperimentRequest, TitlePlayerAccountTestIds), METADATA_PARAMS(Z_Construct_UScriptStruct_FExperimentationCreateExperimentRequest_Statics::NewProp_TitlePlayerAccountTestIds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationCreateExperimentRequest_Statics::NewProp_TitlePlayerAccountTestIds_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FExperimentationCreateExperimentRequest_Statics::NewProp_Variants_Inner = { "Variants", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExperimentationCreateExperimentRequest_Statics::NewProp_Variants_MetaData[] = {
		{ "Category", "PlayFab | Experimentation | Experimentation Models" },
		{ "Comment", "/** List of variants for the experiment. */" },
		{ "ModuleRelativePath", "Classes/PlayFabExperimentationModels.h" },
		{ "ToolTip", "List of variants for the experiment." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FExperimentationCreateExperimentRequest_Statics::NewProp_Variants = { "Variants", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FExperimentationCreateExperimentRequest, Variants), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FExperimentationCreateExperimentRequest_Statics::NewProp_Variants_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationCreateExperimentRequest_Statics::NewProp_Variants_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FExperimentationCreateExperimentRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExperimentationCreateExperimentRequest_Statics::NewProp_CustomTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExperimentationCreateExperimentRequest_Statics::NewProp_Description,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExperimentationCreateExperimentRequest_Statics::NewProp_EndDate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExperimentationCreateExperimentRequest_Statics::NewProp_ExclusionGroupId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExperimentationCreateExperimentRequest_Statics::NewProp_ExclusionGroupTrafficAllocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExperimentationCreateExperimentRequest_Statics::NewProp_ExperimentType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExperimentationCreateExperimentRequest_Statics::NewProp_ExperimentType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExperimentationCreateExperimentRequest_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExperimentationCreateExperimentRequest_Statics::NewProp_SegmentId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExperimentationCreateExperimentRequest_Statics::NewProp_StartDate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExperimentationCreateExperimentRequest_Statics::NewProp_TitlePlayerAccountTestIds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExperimentationCreateExperimentRequest_Statics::NewProp_Variants_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExperimentationCreateExperimentRequest_Statics::NewProp_Variants,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FExperimentationCreateExperimentRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"ExperimentationCreateExperimentRequest",
		sizeof(FExperimentationCreateExperimentRequest),
		alignof(FExperimentationCreateExperimentRequest),
		Z_Construct_UScriptStruct_FExperimentationCreateExperimentRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationCreateExperimentRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FExperimentationCreateExperimentRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationCreateExperimentRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FExperimentationCreateExperimentRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FExperimentationCreateExperimentRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ExperimentationCreateExperimentRequest"), sizeof(FExperimentationCreateExperimentRequest), Get_Z_Construct_UScriptStruct_FExperimentationCreateExperimentRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FExperimentationCreateExperimentRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FExperimentationCreateExperimentRequest_Hash() { return 2632084460U; }

static_assert(std::is_polymorphic<FExperimentationCreateExclusionGroupResult>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FExperimentationCreateExclusionGroupResult cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

class UScriptStruct* FExperimentationCreateExclusionGroupResult::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FExperimentationCreateExclusionGroupResult_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FExperimentationCreateExclusionGroupResult, Z_Construct_UPackage__Script_PlayFab(), TEXT("ExperimentationCreateExclusionGroupResult"), sizeof(FExperimentationCreateExclusionGroupResult), Get_Z_Construct_UScriptStruct_FExperimentationCreateExclusionGroupResult_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FExperimentationCreateExclusionGroupResult>()
{
	return FExperimentationCreateExclusionGroupResult::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FExperimentationCreateExclusionGroupResult(FExperimentationCreateExclusionGroupResult::StaticStruct, TEXT("/Script/PlayFab"), TEXT("ExperimentationCreateExclusionGroupResult"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFExperimentationCreateExclusionGroupResult
{
	FScriptStruct_PlayFab_StaticRegisterNativesFExperimentationCreateExclusionGroupResult()
	{
		UScriptStruct::DeferCppStructOps<FExperimentationCreateExclusionGroupResult>(FName(TEXT("ExperimentationCreateExclusionGroupResult")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFExperimentationCreateExclusionGroupResult;
	struct Z_Construct_UScriptStruct_FExperimentationCreateExclusionGroupResult_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExclusionGroupId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ExclusionGroupId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExperimentationCreateExclusionGroupResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PlayFabExperimentationModels.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FExperimentationCreateExclusionGroupResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FExperimentationCreateExclusionGroupResult>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExperimentationCreateExclusionGroupResult_Statics::NewProp_ExclusionGroupId_MetaData[] = {
		{ "Category", "PlayFab | Experimentation | Experimentation Models" },
		{ "Comment", "/** Identifier of the exclusion group. */" },
		{ "ModuleRelativePath", "Classes/PlayFabExperimentationModels.h" },
		{ "ToolTip", "Identifier of the exclusion group." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FExperimentationCreateExclusionGroupResult_Statics::NewProp_ExclusionGroupId = { "ExclusionGroupId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FExperimentationCreateExclusionGroupResult, ExclusionGroupId), METADATA_PARAMS(Z_Construct_UScriptStruct_FExperimentationCreateExclusionGroupResult_Statics::NewProp_ExclusionGroupId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationCreateExclusionGroupResult_Statics::NewProp_ExclusionGroupId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FExperimentationCreateExclusionGroupResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExperimentationCreateExclusionGroupResult_Statics::NewProp_ExclusionGroupId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FExperimentationCreateExclusionGroupResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"ExperimentationCreateExclusionGroupResult",
		sizeof(FExperimentationCreateExclusionGroupResult),
		alignof(FExperimentationCreateExclusionGroupResult),
		Z_Construct_UScriptStruct_FExperimentationCreateExclusionGroupResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationCreateExclusionGroupResult_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FExperimentationCreateExclusionGroupResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationCreateExclusionGroupResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FExperimentationCreateExclusionGroupResult()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FExperimentationCreateExclusionGroupResult_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ExperimentationCreateExclusionGroupResult"), sizeof(FExperimentationCreateExclusionGroupResult), Get_Z_Construct_UScriptStruct_FExperimentationCreateExclusionGroupResult_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FExperimentationCreateExclusionGroupResult_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FExperimentationCreateExclusionGroupResult_Hash() { return 2675068784U; }

static_assert(std::is_polymorphic<FExperimentationCreateExclusionGroupRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FExperimentationCreateExclusionGroupRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FExperimentationCreateExclusionGroupRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FExperimentationCreateExclusionGroupRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FExperimentationCreateExclusionGroupRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("ExperimentationCreateExclusionGroupRequest"), sizeof(FExperimentationCreateExclusionGroupRequest), Get_Z_Construct_UScriptStruct_FExperimentationCreateExclusionGroupRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FExperimentationCreateExclusionGroupRequest>()
{
	return FExperimentationCreateExclusionGroupRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FExperimentationCreateExclusionGroupRequest(FExperimentationCreateExclusionGroupRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("ExperimentationCreateExclusionGroupRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFExperimentationCreateExclusionGroupRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFExperimentationCreateExclusionGroupRequest()
	{
		UScriptStruct::DeferCppStructOps<FExperimentationCreateExclusionGroupRequest>(FName(TEXT("ExperimentationCreateExclusionGroupRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFExperimentationCreateExclusionGroupRequest;
	struct Z_Construct_UScriptStruct_FExperimentationCreateExclusionGroupRequest_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Description;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExperimentationCreateExclusionGroupRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Given a title entity token and exclusion group details, will create a new exclusion group for the title. */" },
		{ "ModuleRelativePath", "Classes/PlayFabExperimentationModels.h" },
		{ "ToolTip", "Given a title entity token and exclusion group details, will create a new exclusion group for the title." },
	};
#endif
	void* Z_Construct_UScriptStruct_FExperimentationCreateExclusionGroupRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FExperimentationCreateExclusionGroupRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExperimentationCreateExclusionGroupRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "Category", "PlayFab | Experimentation | Experimentation Models" },
		{ "Comment", "/** The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.). */" },
		{ "ModuleRelativePath", "Classes/PlayFabExperimentationModels.h" },
		{ "ToolTip", "The optional custom tags associated with the request (e.g. build number, external trace identifiers, etc.)." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FExperimentationCreateExclusionGroupRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FExperimentationCreateExclusionGroupRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FExperimentationCreateExclusionGroupRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationCreateExclusionGroupRequest_Statics::NewProp_CustomTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExperimentationCreateExclusionGroupRequest_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "PlayFab | Experimentation | Experimentation Models" },
		{ "Comment", "/** Description of the exclusion group. */" },
		{ "ModuleRelativePath", "Classes/PlayFabExperimentationModels.h" },
		{ "ToolTip", "Description of the exclusion group." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FExperimentationCreateExclusionGroupRequest_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FExperimentationCreateExclusionGroupRequest, Description), METADATA_PARAMS(Z_Construct_UScriptStruct_FExperimentationCreateExclusionGroupRequest_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationCreateExclusionGroupRequest_Statics::NewProp_Description_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExperimentationCreateExclusionGroupRequest_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "PlayFab | Experimentation | Experimentation Models" },
		{ "Comment", "/** Friendly name of the exclusion group. */" },
		{ "ModuleRelativePath", "Classes/PlayFabExperimentationModels.h" },
		{ "ToolTip", "Friendly name of the exclusion group." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FExperimentationCreateExclusionGroupRequest_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FExperimentationCreateExclusionGroupRequest, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FExperimentationCreateExclusionGroupRequest_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationCreateExclusionGroupRequest_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FExperimentationCreateExclusionGroupRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExperimentationCreateExclusionGroupRequest_Statics::NewProp_CustomTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExperimentationCreateExclusionGroupRequest_Statics::NewProp_Description,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExperimentationCreateExclusionGroupRequest_Statics::NewProp_Name,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FExperimentationCreateExclusionGroupRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"ExperimentationCreateExclusionGroupRequest",
		sizeof(FExperimentationCreateExclusionGroupRequest),
		alignof(FExperimentationCreateExclusionGroupRequest),
		Z_Construct_UScriptStruct_FExperimentationCreateExclusionGroupRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationCreateExclusionGroupRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FExperimentationCreateExclusionGroupRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationCreateExclusionGroupRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FExperimentationCreateExclusionGroupRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FExperimentationCreateExclusionGroupRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ExperimentationCreateExclusionGroupRequest"), sizeof(FExperimentationCreateExclusionGroupRequest), Get_Z_Construct_UScriptStruct_FExperimentationCreateExclusionGroupRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FExperimentationCreateExclusionGroupRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FExperimentationCreateExclusionGroupRequest_Hash() { return 181942519U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
