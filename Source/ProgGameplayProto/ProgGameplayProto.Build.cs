// Copyright Epic Games, Inc. All Rights Reserved.



using UnrealBuildTool;


public class ProgGameplayProto : ModuleRules
{
	public ProgGameplayProto(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput", "HeadMountedDisplay", "HTTP", "Json" });

        //PublicDependencyModuleNames.AddRange(new string[] {"HeadMountedDisplay", "HTTP", "Json" });
    }
	
}
