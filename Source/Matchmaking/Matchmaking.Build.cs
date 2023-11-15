using UnrealBuildTool;

public class Matchmaking : ModuleRules
{
    public Matchmaking(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(
            new string[]
            {
                "Core",
            }
        );

        PrivateDependencyModuleNames.AddRange(
            new string[]
            {
                "CoreUObject",
                "Engine",
                "Slate",
                "SlateCore", 
                "PlayFabCpp",
                "PlayFabCommon", 
                "Json"
            }
        );
    }
}