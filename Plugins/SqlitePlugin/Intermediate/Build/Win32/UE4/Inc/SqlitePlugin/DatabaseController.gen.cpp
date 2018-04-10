// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/DatabaseController.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDatabaseController() {}
// Cross Module References
	SQLITEPLUGIN_API UFunction* Z_Construct_UFunction_UDatabaseController_GetColValueByDefault();
	SQLITEPLUGIN_API UClass* Z_Construct_UClass_UDatabaseController();
	SQLITEPLUGIN_API UFunction* Z_Construct_UFunction_UDatabaseController_GetColValueConvertBool();
	SQLITEPLUGIN_API UFunction* Z_Construct_UFunction_UDatabaseController_GetColValueConvertFloat();
	SQLITEPLUGIN_API UFunction* Z_Construct_UFunction_UDatabaseController_GetColValueConvertInt();
	SQLITEPLUGIN_API UFunction* Z_Construct_UFunction_UDatabaseController_GetColValueConvertStr();
	SQLITEPLUGIN_API UFunction* Z_Construct_UFunction_UDatabaseController_OpenTable();
	SQLITEPLUGIN_API UFunction* Z_Construct_UFunction_UDatabaseController_ReadNext();
	SQLITEPLUGIN_API UClass* Z_Construct_UClass_UDatabaseController_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_SqlitePlugin();
// End Cross Module References
	void UDatabaseController::StaticRegisterNativesUDatabaseController()
	{
		UClass* Class = UDatabaseController::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "GetColValueByDefault", (Native)&UDatabaseController::execGetColValueByDefault },
			{ "GetColValueConvertBool", (Native)&UDatabaseController::execGetColValueConvertBool },
			{ "GetColValueConvertFloat", (Native)&UDatabaseController::execGetColValueConvertFloat },
			{ "GetColValueConvertInt", (Native)&UDatabaseController::execGetColValueConvertInt },
			{ "GetColValueConvertStr", (Native)&UDatabaseController::execGetColValueConvertStr },
			{ "OpenTable", (Native)&UDatabaseController::execOpenTable },
			{ "ReadNext", (Native)&UDatabaseController::execReadNext },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, ARRAY_COUNT(AnsiFuncs));
	}
	UFunction* Z_Construct_UFunction_UDatabaseController_GetColValueByDefault()
	{
		struct DatabaseController_eventGetColValueByDefault_Parms
		{
			FString colName;
			FString outColValue;
			bool ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UDatabaseController();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetColValueByDefault"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04420401, 65535, sizeof(DatabaseController_eventGetColValueByDefault_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, DatabaseController_eventGetColValueByDefault_Parms);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, DatabaseController_eventGetColValueByDefault_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, DatabaseController_eventGetColValueByDefault_Parms), sizeof(bool), true);
			UProperty* NewProp_outColValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("outColValue"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(outColValue, DatabaseController_eventGetColValueByDefault_Parms), 0x0010000000000180);
			UProperty* NewProp_colName = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("colName"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(colName, DatabaseController_eventGetColValueByDefault_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("GetData"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/DatabaseController.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UDatabaseController_GetColValueConvertBool()
	{
		struct DatabaseController_eventGetColValueConvertBool_Parms
		{
			FString colName;
			bool outColValue;
			bool ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UDatabaseController();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetColValueConvertBool"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04420401, 65535, sizeof(DatabaseController_eventGetColValueConvertBool_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, DatabaseController_eventGetColValueConvertBool_Parms);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, DatabaseController_eventGetColValueConvertBool_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, DatabaseController_eventGetColValueConvertBool_Parms), sizeof(bool), true);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(outColValue, DatabaseController_eventGetColValueConvertBool_Parms);
			UProperty* NewProp_outColValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("outColValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(outColValue, DatabaseController_eventGetColValueConvertBool_Parms), 0x0010000000000180, CPP_BOOL_PROPERTY_BITMASK(outColValue, DatabaseController_eventGetColValueConvertBool_Parms), sizeof(bool), true);
			UProperty* NewProp_colName = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("colName"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(colName, DatabaseController_eventGetColValueConvertBool_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("GetData"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/DatabaseController.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UDatabaseController_GetColValueConvertFloat()
	{
		struct DatabaseController_eventGetColValueConvertFloat_Parms
		{
			FString colName;
			float outColValue;
			bool ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UDatabaseController();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetColValueConvertFloat"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04420401, 65535, sizeof(DatabaseController_eventGetColValueConvertFloat_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, DatabaseController_eventGetColValueConvertFloat_Parms);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, DatabaseController_eventGetColValueConvertFloat_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, DatabaseController_eventGetColValueConvertFloat_Parms), sizeof(bool), true);
			UProperty* NewProp_outColValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("outColValue"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(outColValue, DatabaseController_eventGetColValueConvertFloat_Parms), 0x0010000000000180);
			UProperty* NewProp_colName = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("colName"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(colName, DatabaseController_eventGetColValueConvertFloat_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("GetData"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/DatabaseController.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UDatabaseController_GetColValueConvertInt()
	{
		struct DatabaseController_eventGetColValueConvertInt_Parms
		{
			FString colName;
			int32 outColValue;
			bool ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UDatabaseController();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetColValueConvertInt"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04420401, 65535, sizeof(DatabaseController_eventGetColValueConvertInt_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, DatabaseController_eventGetColValueConvertInt_Parms);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, DatabaseController_eventGetColValueConvertInt_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, DatabaseController_eventGetColValueConvertInt_Parms), sizeof(bool), true);
			UProperty* NewProp_outColValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("outColValue"), RF_Public|RF_Transient|RF_MarkAsNative) UUnsizedIntProperty(CPP_PROPERTY_BASE(outColValue, DatabaseController_eventGetColValueConvertInt_Parms), 0x0010000000000180);
			UProperty* NewProp_colName = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("colName"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(colName, DatabaseController_eventGetColValueConvertInt_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("GetData"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/DatabaseController.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UDatabaseController_GetColValueConvertStr()
	{
		struct DatabaseController_eventGetColValueConvertStr_Parms
		{
			FString colName;
			FString outColValue;
			bool ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UDatabaseController();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetColValueConvertStr"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04420401, 65535, sizeof(DatabaseController_eventGetColValueConvertStr_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, DatabaseController_eventGetColValueConvertStr_Parms);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, DatabaseController_eventGetColValueConvertStr_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, DatabaseController_eventGetColValueConvertStr_Parms), sizeof(bool), true);
			UProperty* NewProp_outColValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("outColValue"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(outColValue, DatabaseController_eventGetColValueConvertStr_Parms), 0x0010000000000180);
			UProperty* NewProp_colName = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("colName"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(colName, DatabaseController_eventGetColValueConvertStr_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("GetData"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/DatabaseController.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UDatabaseController_OpenTable()
	{
		struct DatabaseController_eventOpenTable_Parms
		{
			FString TableName;
		};
		UObject* Outer = Z_Construct_UClass_UDatabaseController();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("OpenTable"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(DatabaseController_eventOpenTable_Parms));
			UProperty* NewProp_TableName = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("TableName"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(TableName, DatabaseController_eventOpenTable_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/DatabaseController.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UDatabaseController_ReadNext()
	{
		struct DatabaseController_eventReadNext_Parms
		{
			bool ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UDatabaseController();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ReadNext"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(DatabaseController_eventReadNext_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, DatabaseController_eventReadNext_Parms);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, DatabaseController_eventReadNext_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, DatabaseController_eventReadNext_Parms), sizeof(bool), true);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/DatabaseController.h"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDatabaseController_NoRegister()
	{
		return UDatabaseController::StaticClass();
	}
	UClass* Z_Construct_UClass_UDatabaseController()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UObject();
			Z_Construct_UPackage__Script_SqlitePlugin();
			OuterClass = UDatabaseController::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20000080u;

				OuterClass->LinkChild(Z_Construct_UFunction_UDatabaseController_GetColValueByDefault());
				OuterClass->LinkChild(Z_Construct_UFunction_UDatabaseController_GetColValueConvertBool());
				OuterClass->LinkChild(Z_Construct_UFunction_UDatabaseController_GetColValueConvertFloat());
				OuterClass->LinkChild(Z_Construct_UFunction_UDatabaseController_GetColValueConvertInt());
				OuterClass->LinkChild(Z_Construct_UFunction_UDatabaseController_GetColValueConvertStr());
				OuterClass->LinkChild(Z_Construct_UFunction_UDatabaseController_OpenTable());
				OuterClass->LinkChild(Z_Construct_UFunction_UDatabaseController_ReadNext());

				UProperty* NewProp_mDatabaseFullPath = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("mDatabaseFullPath"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(mDatabaseFullPath, UDatabaseController), 0x0040000000000000);
				UProperty* NewProp_mColNames = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("mColNames"), RF_Public|RF_Transient|RF_MarkAsNative) UMapProperty(CPP_PROPERTY_BASE(mColNames, UDatabaseController), 0x0040000000000000);
				UProperty* NewProp_mColNames_Key_KeyProp = new(EC_InternalUseOnlyConstructor, NewProp_mColNames, TEXT("mColNames_Key"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
				UProperty* NewProp_mColNames_ValueProp = new(EC_InternalUseOnlyConstructor, NewProp_mColNames, TEXT("mColNames"), RF_Public|RF_Transient|RF_MarkAsNative) UUnsizedIntProperty(FObjectInitializer(), EC_CppProperty, 1, 0x0000000000000000);
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UDatabaseController_GetColValueByDefault(), "GetColValueByDefault"); // 3135604711
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UDatabaseController_GetColValueConvertBool(), "GetColValueConvertBool"); // 99142478
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UDatabaseController_GetColValueConvertFloat(), "GetColValueConvertFloat"); // 1822666496
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UDatabaseController_GetColValueConvertInt(), "GetColValueConvertInt"); // 2539987108
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UDatabaseController_GetColValueConvertStr(), "GetColValueConvertStr"); // 1195845783
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UDatabaseController_OpenTable(), "OpenTable"); // 3904987819
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UDatabaseController_ReadNext(), "ReadNext"); // 2205774351
				static TCppClassTypeInfo<TCppClassTypeTraits<UDatabaseController> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintType"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("DatabaseController.h"));
				MetaData->SetValue(OuterClass, TEXT("IsBlueprintBase"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/DatabaseController.h"));
				MetaData->SetValue(NewProp_mDatabaseFullPath, TEXT("ModuleRelativePath"), TEXT("Public/DatabaseController.h"));
				MetaData->SetValue(NewProp_mColNames, TEXT("ModuleRelativePath"), TEXT("Public/DatabaseController.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDatabaseController, 3731047571);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDatabaseController(Z_Construct_UClass_UDatabaseController, &UDatabaseController::StaticClass, TEXT("/Script/SqlitePlugin"), TEXT("UDatabaseController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDatabaseController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
