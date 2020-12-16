

using UnrealBuildTool;

public class FlappyPahom : ModuleRules
{
	public FlappyPahom(ReadOnlyTargetRules Target) : base(Target)
    {
        PrivatePCHHeaderFile = "FlappyPahom.h";

        PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore" });
		PrivateDependencyModuleNames.AddRange(new string[] {  });
	}
}
