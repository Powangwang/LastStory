// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;
using System.IO;

public class LastStory : ModuleRules
{    

	private string ModulePath
    {
        get { return Path.GetDirectoryName(ModuleDirectory); }
    }

    private string SqlitePath
    {
        get { return Path.GetFullPath(Path.Combine(ModulePath, "../Plugins/sqlite")); }
    }
	public LastStory(TargetInfo Target)
	{
		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore" });

		PrivateDependencyModuleNames.AddRange(new string[] {  });
		
//		PublicIncludePaths.AddRange(new string[] {"SqlitePlugin/Source/ThirdParty/SqliteLibrary/Includes"});

//		PublicIncludePaths.Add(Path.Combine(SqlitePath, "inc"));
//        PublicAdditionalLibraries.Add(Path.Combine(SqlitePath, "lib", "sqlite3.lib"));
		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });
		
		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
