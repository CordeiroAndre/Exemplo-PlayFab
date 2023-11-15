// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class UnrealTrainingServerTarget : TargetRules
{
	public UnrealTrainingServerTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Server;
		DefaultBuildSettings = BuildSettingsVersion.V2;
		ExtraModuleNames.Add("UnrealTraining");
		RegisterModulesCreatedByRider();
		
		DisablePlugins.Add("WMFMediaPlayer");
		DisablePlugins.Add("AsyncLoadingScreen"); //if you are using this plugin
		DisablePlugins.Add("WindowsMoviePlayer");
		DisablePlugins.Add("MediaFoundationMediaPlayer");
	}

	private void RegisterModulesCreatedByRider()
	{
		ExtraModuleNames.AddRange(new string[] { "PlayFabAuthentication", "Matchmaking" });
	}
}
