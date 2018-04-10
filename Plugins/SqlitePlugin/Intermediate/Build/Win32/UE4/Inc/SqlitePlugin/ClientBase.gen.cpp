// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/ClientBase.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClientBase() {}
// Cross Module References
	SQLITEPLUGIN_API UFunction* Z_Construct_UFunction_UClientBase_ReceiveCleanData();
	SQLITEPLUGIN_API UClass* Z_Construct_UClass_UClientBase();
	SQLITEPLUGIN_API UFunction* Z_Construct_UFunction_UClientBase_ReceiveInitData();
	SQLITEPLUGIN_API UClass* Z_Construct_UClass_UDatabaseController_NoRegister();
	SQLITEPLUGIN_API UClass* Z_Construct_UClass_UClientBase_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_SqlitePlugin();
// End Cross Module References
	static FName NAME_UClientBase_ReceiveCleanData = FName(TEXT("ReceiveCleanData"));
	bool UClientBase::ReceiveCleanData()
	{
		ClientBase_eventReceiveCleanData_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UClientBase_ReceiveCleanData),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UClientBase_ReceiveInitData = FName(TEXT("ReceiveInitData"));
	bool UClientBase::ReceiveInitData(UDatabaseController* DatabaseController)
	{
		ClientBase_eventReceiveInitData_Parms Parms;
		Parms.DatabaseController=DatabaseController;
		ProcessEvent(FindFunctionChecked(NAME_UClientBase_ReceiveInitData),&Parms);
		return !!Parms.ReturnValue;
	}
	void UClientBase::StaticRegisterNativesUClientBase()
	{
		UClass* Class = UClientBase::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "ReceiveCleanData", (Native)&UClientBase::execReceiveCleanData },
			{ "ReceiveInitData", (Native)&UClientBase::execReceiveInitData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, ARRAY_COUNT(AnsiFuncs));
	}
	UFunction* Z_Construct_UFunction_UClientBase_ReceiveCleanData()
	{
		UObject* Outer = Z_Construct_UClass_UClientBase();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ReceiveCleanData"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x08020C00, 65535, sizeof(ClientBase_eventReceiveCleanData_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, ClientBase_eventReceiveCleanData_Parms);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, ClientBase_eventReceiveCleanData_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, ClientBase_eventReceiveCleanData_Parms), sizeof(bool), true);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/ClientBase.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UClientBase_ReceiveInitData()
	{
		UObject* Outer = Z_Construct_UClass_UClientBase();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ReceiveInitData"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x08020C00, 65535, sizeof(ClientBase_eventReceiveInitData_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, ClientBase_eventReceiveInitData_Parms);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, ClientBase_eventReceiveInitData_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, ClientBase_eventReceiveInitData_Parms), sizeof(bool), true);
			UProperty* NewProp_DatabaseController = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("DatabaseController"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(DatabaseController, ClientBase_eventReceiveInitData_Parms), 0x0010000000000080, Z_Construct_UClass_UDatabaseController_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/ClientBase.h"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UClientBase_NoRegister()
	{
		return UClientBase::StaticClass();
	}
	UClass* Z_Construct_UClass_UClientBase()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UObject();
			Z_Construct_UPackage__Script_SqlitePlugin();
			OuterClass = UClientBase::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20000081u;

				OuterClass->LinkChild(Z_Construct_UFunction_UClientBase_ReceiveCleanData());
				OuterClass->LinkChild(Z_Construct_UFunction_UClientBase_ReceiveInitData());

				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UClientBase_ReceiveCleanData(), "ReceiveCleanData"); // 2681447365
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UClientBase_ReceiveInitData(), "ReceiveInitData"); // 2572536031
				static TCppClassTypeInfo<TCppClassTypeTraits<UClientBase> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintType"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("ClientBase.h"));
				MetaData->SetValue(OuterClass, TEXT("IsBlueprintBase"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/ClientBase.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UClientBase, 3411344852);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UClientBase(Z_Construct_UClass_UClientBase, &UClientBase::StaticClass, TEXT("/Script/SqlitePlugin"), TEXT("UClientBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UClientBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
