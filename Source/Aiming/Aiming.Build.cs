// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Aiming : ModuleRules
{
	public Aiming(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "AIModule" });
	}
}
