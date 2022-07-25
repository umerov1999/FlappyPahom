

using UnrealBuildTool;
using System.Collections.Generic;

public class FlappyPahomEditorTarget : TargetRules
{
	public FlappyPahomEditorTarget(TargetInfo Target) : base(Target)
    {
		Type = TargetType.Editor;
        ExtraModuleNames.Add("FlappyPahom");
    }
}
