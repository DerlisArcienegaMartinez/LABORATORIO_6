// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class LABORATORIO_6 : ModuleRules
{
	public LABORATORIO_6(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore" });
	}
}
