// Fill out your copyright notice in the Description page of Project Settings.
using UnrealBuildTool;
public class Confi : ModuleRules
{
	public Confi(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        PublicDependencyModuleNames.AddRange(new string[]
        {
            "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput",
            "UMG", "Slate", "SlateCore",
            "HTTP", "Json", "JsonUtilities",
            "PakFile", "AssetRegistry",
            "PixelStreaming"
        });
        PrivateDependencyModuleNames.AddRange(new string[] {  });
	}
}
