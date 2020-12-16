

using UnrealBuildTool;
using System.Collections.Generic;

public class FlappyPahomTarget : TargetRules
{
	public FlappyPahomTarget(TargetInfo Target) : base(Target)
    {
		Type = TargetType.Game;
        ExtraModuleNames.Add("FlappyPahom");
    }
}
