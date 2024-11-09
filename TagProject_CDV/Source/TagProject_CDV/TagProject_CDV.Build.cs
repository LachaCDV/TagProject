// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class TagProject_CDV : ModuleRules
{
	public TagProject_CDV(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
