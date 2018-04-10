// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/ClientBaseController.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClientBaseController() {}
// Cross Module References
	SQLITEPLUGIN_API UFunction* Z_Construct_UDelegateFunction_UClientBaseController_ClientInitError__DelegateSignature();
	SQLITEPLUGIN_API UClass* Z_Construct_UClass_UClientBaseController();
	SQLITEPLUGIN_API UFunction* Z_Construct_UDelegateFunction_UClientBaseController_ClientInitData__DelegateSignature();
	SQLITEPLUGIN_API UClass* Z_Construct_UClass_UClientBaseController_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_SqlitePlugin();
	SQLITEPLUGIN_API UClass* Z_Construct_UClass_UClientBase_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	SQLITEPLUGIN_API UClass* Z_Construct_UClass_UDatabaseController_NoRegister();
// End Cross Module References
	UFunction* Z_Construct_UDelegateFunction_UClientBaseController_ClientInitError__DelegateSignature()
	{
		UObject* Outer = Z_Construct_UClass_UClientBaseController();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ClientInitError__DelegateSignature"), RF_Public|RF_Transient|RF_MarkAsNative) UDelegateFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x00130000, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/ClientBaseController.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UDelegateFunction_UClientBaseController_ClientInitData__DelegateSignature()
	{
		struct ClientBaseController_eventClientInitData_Parms
		{
			int32 ItemIdx;
		};
		UObject* Outer = Z_Construct_UClass_UClientBaseController();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ClientInitData__DelegateSignature"), RF_Public|RF_Transient|RF_MarkAsNative) UDelegateFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x00130000, 65535, sizeof(ClientBaseController_eventClientInitData_Parms));
			UProperty* NewProp_ItemIdx = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ItemIdx"), RF_Public|RF_Transient|RF_MarkAsNative) UUnsizedIntProperty(CPP_PROPERTY_BASE(ItemIdx, ClientBaseController_eventClientInitData_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/ClientBaseController.h"));
#endif
		}
		return ReturnFunction;
	}
	void UClientBaseController::StaticRegisterNativesUClientBaseController()
	{
	}
	UClass* Z_Construct_UClass_UClientBaseController_NoRegister()
	{
		return UClientBaseController::StaticClass();
	}
	UClass* Z_Construct_UClass_UClientBaseController()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UObject();
			Z_Construct_UPackage__Script_SqlitePlugin();
			OuterClass = UClientBaseController::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20880080u;

				OuterClass->LinkChild(Z_Construct_UDelegateFunction_UClientBaseController_ClientInitData__DelegateSignature());
				OuterClass->LinkChild(Z_Construct_UDelegateFunction_UClientBaseController_ClientInitError__DelegateSignature());

				UProperty* NewProp_ClientItems = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ClientItems"), RF_Public|RF_Transient|RF_MarkAsNative) UMapProperty(CPP_PROPERTY_BASE(ClientItems, UClientBaseController), 0x0020080000000014);
				UProperty* NewProp_ClientItems_Key_KeyProp = new(EC_InternalUseOnlyConstructor, NewProp_ClientItems, TEXT("ClientItems_Key"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
				UProperty* NewProp_ClientItems_ValueProp = new(EC_InternalUseOnlyConstructor, NewProp_ClientItems, TEXT("ClientItems"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(FObjectInitializer(), EC_CppProperty, 1, 0x0000000000000000, Z_Construct_UClass_UClientBase_NoRegister());
				UProperty* NewProp_OnClientInitError = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("OnClientInitError"), RF_Public|RF_Transient|RF_MarkAsNative) UMulticastDelegateProperty(CPP_PROPERTY_BASE(OnClientInitError, UClientBaseController), 0x0010000010080000, Z_Construct_UDelegateFunction_UClientBaseController_ClientInitError__DelegateSignature());
				UProperty* NewProp_OnCompleteClientInitData = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("OnCompleteClientInitData"), RF_Public|RF_Transient|RF_MarkAsNative) UMulticastDelegateProperty(CPP_PROPERTY_BASE(OnCompleteClientInitData, UClientBaseController), 0x0010000010080000, Z_Construct_UDelegateFunction_UClientBaseController_ClientInitData__DelegateSignature());
				UProperty* NewProp_ClientClassItems = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ClientClassItems"), RF_Public|RF_Transient|RF_MarkAsNative) UMapProperty(CPP_PROPERTY_BASE(ClientClassItems, UClientBaseController), 0x0014000000000005);
				UProperty* NewProp_ClientClassItems_Key_KeyProp = new(EC_InternalUseOnlyConstructor, NewProp_ClientClassItems, TEXT("ClientClassItems_Key"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0004000000000001);
				UProperty* NewProp_ClientClassItems_ValueProp = new(EC_InternalUseOnlyConstructor, NewProp_ClientClassItems, TEXT("ClientClassItems"), RF_Public|RF_Transient|RF_MarkAsNative) UClassProperty(FObjectInitializer(), EC_CppProperty, 1, 0x0004000000000001, Z_Construct_UClass_UClientBase_NoRegister(), Z_Construct_UClass_UClass());
				UProperty* NewProp_DatabasePath = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("DatabasePath"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(DatabasePath, UClientBaseController), 0x0010000000000005);
				UProperty* NewProp_DBController = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("DBController"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(DBController, UClientBaseController), 0x0010000000000014, Z_Construct_UClass_UDatabaseController_NoRegister());
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UDelegateFunction_UClientBaseController_ClientInitData__DelegateSignature(), "ClientInitData__DelegateSignature"); // 2335086184
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UDelegateFunction_UClientBaseController_ClientInitError__DelegateSignature(), "ClientInitError__DelegateSignature"); // 2897684136
				static TCppClassTypeInfo<TCppClassTypeTraits<UClientBaseController> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintType"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("ClassGroupNames"), TEXT("Custom"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("ClientBaseController.h"));
				MetaData->SetValue(OuterClass, TEXT("IsBlueprintBase"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/ClientBaseController.h"));
				MetaData->SetValue(NewProp_ClientItems, TEXT("Category"), TEXT("ClientBaseController"));
				MetaData->SetValue(NewProp_ClientItems, TEXT("ModuleRelativePath"), TEXT("Public/ClientBaseController.h"));
				MetaData->SetValue(NewProp_OnClientInitError, TEXT("ModuleRelativePath"), TEXT("Public/ClientBaseController.h"));
				MetaData->SetValue(NewProp_OnCompleteClientInitData, TEXT("ModuleRelativePath"), TEXT("Public/ClientBaseController.h"));
				MetaData->SetValue(NewProp_ClientClassItems, TEXT("Category"), TEXT("ClientBaseController"));
				MetaData->SetValue(NewProp_ClientClassItems, TEXT("ModuleRelativePath"), TEXT("Public/ClientBaseController.h"));
				MetaData->SetValue(NewProp_DatabasePath, TEXT("Category"), TEXT("ClientBaseController"));
				MetaData->SetValue(NewProp_DatabasePath, TEXT("ModuleRelativePath"), TEXT("Public/ClientBaseController.h"));
				MetaData->SetValue(NewProp_DBController, TEXT("Category"), TEXT("ClientBaseController"));
				MetaData->SetValue(NewProp_DBController, TEXT("ModuleRelativePath"), TEXT("Public/ClientBaseController.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UClientBaseController, 1541776092);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UClientBaseController(Z_Construct_UClass_UClientBaseController, &UClientBaseController::StaticClass, TEXT("/Script/SqlitePlugin"), TEXT("UClientBaseController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UClientBaseController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
