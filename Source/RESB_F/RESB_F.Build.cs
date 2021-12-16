// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class RESB_F : ModuleRules
{
	public RESB_F(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
