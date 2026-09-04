// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class DialogueQuestBridge : ModuleRules
{
	public DialogueQuestBridge(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new[]
		{
			"Core",
			"CoreUObject",
			"DialogueTool",
			"QuestTool"
		});
	}
}
