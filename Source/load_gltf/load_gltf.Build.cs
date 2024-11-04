// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class load_gltf : ModuleRules
{
	public load_gltf(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
