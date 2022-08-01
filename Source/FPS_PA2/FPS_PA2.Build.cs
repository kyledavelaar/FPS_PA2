// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class FPS_PA2 : ModuleRules
{
	public FPS_PA2(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
