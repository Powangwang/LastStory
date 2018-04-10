// Fill out your copyright notice in the Description page of Project Settings.

using System.IO;
using UnrealBuildTool;

public class SqliteLibrary : ModuleRules
{
	public SqliteLibrary(ReadOnlyTargetRules Target) : base(Target)
    {
		Type = ModuleType.External;

		if (Target.Platform == UnrealTargetPlatform.Win64)
		{
			// Add the import library
			PublicLibraryPaths.Add(Path.Combine(ModuleDirectory, "Includes"));
			PublicAdditionalLibraries.Add(Path.Combine(ModuleDirectory, "libs/sqlite3.lib"));

            // Delay-load the DLL, so we can load it from the right place first
            string dll_Name = "sqlite3.dll";
            PublicDelayLoadDLLs.Add(dll_Name);
            string dll_Path = Path.GetFullPath(Path.Combine(ModuleDirectory, "../../../Binaries/ThirdParty/SqliteLibrary", dll_Name));
            RuntimeDependencies.Add(new RuntimeDependency(dll_Path));
		}

        PublicIncludePaths.AddRange(new string[]
        {
            ModuleDirectory + "/Includes"
        });
	}
}
