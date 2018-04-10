// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/UtilClientFunc.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUtilClientFunc() {}
// Cross Module References
	SQLITEPLUGIN_API UFunction* Z_Construct_UFunction_UUtilClientFunc_LoadObjectClassFromAssetPath();
	SQLITEPLUGIN_API UClass* Z_Construct_UClass_UUtilClientFunc();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	SQLITEPLUGIN_API UClass* Z_Construct_UClass_UUtilClientFunc_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_SqlitePlugin();
// End Cross Module References
	void UUtilClientFunc::StaticRegisterNativesUUtilClientFunc()
	{
		UClass* Class = UUtilClientFunc::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "LoadObjectClassFromAssetPath", (Native)&UUtilClientFunc::execLoadObjectClassFromAssetPath },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, ARRAY_COUNT(AnsiFuncs));
	}
	UFunction* Z_Construct_UFunction_UUtilClientFunc_LoadObjectClassFromAssetPath()
	{
		struct UtilClientFunc_eventLoadObjectClassFromAssetPath_Parms
		{
			FString AssetPath;
			UClass* ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UUtilClientFunc();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("LoadObjectClassFromAssetPath"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04042401, 65535, sizeof(UtilClientFunc_eventLoadObjectClassFromAssetPath_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UClassProperty(CPP_PROPERTY_BASE(ReturnValue, UtilClientFunc_eventLoadObjectClassFromAssetPath_Parms), 0x0010000000000580, Z_Construct_UClass_UObject_NoRegister(), Z_Construct_UClass_UClass());
			UProperty* NewProp_AssetPath = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("AssetPath"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(AssetPath, UtilClientFunc_eventLoadObjectClassFromAssetPath_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Client|Util"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/UtilClientFunc.h"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUtilClientFunc_NoRegister()
	{
		return UUtilClientFunc::StaticClass();
	}
	UClass* Z_Construct_UClass_UUtilClientFunc()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UBlueprintFunctionLibrary();
			Z_Construct_UPackage__Script_SqlitePlugin();
			OuterClass = UUtilClientFunc::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20000080u;

				OuterClass->LinkChild(Z_Construct_UFunction_UUtilClientFunc_LoadObjectClassFromAssetPath());

				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UUtilClientFunc_LoadObjectClassFromAssetPath(), "LoadObjectClassFromAssetPath"); // 2453342046
				static TCppClassTypeInfo<TCppClassTypeTraits<UUtilClientFunc> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("UtilClientFunc.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/UtilClientFunc.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUtilClientFunc, 68752437);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUtilClientFunc(Z_Construct_UClass_UUtilClientFunc, &UUtilClientFunc::StaticClass, TEXT("/Script/SqlitePlugin"), TEXT("UUtilClientFunc"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUtilClientFunc);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
