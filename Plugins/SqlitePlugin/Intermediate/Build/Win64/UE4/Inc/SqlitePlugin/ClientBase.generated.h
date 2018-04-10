// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDatabaseController;
#ifdef SQLITEPLUGIN_ClientBase_generated_h
#error "ClientBase.generated.h already included, missing '#pragma once' in ClientBase.h"
#endif
#define SQLITEPLUGIN_ClientBase_generated_h

#define DBTest_Plugins_SqlitePlugin_Source_SqlitePlugin_Public_ClientBase_h_16_RPC_WRAPPERS \
	virtual bool ReceiveCleanData_Implementation(); \
	virtual bool ReceiveInitData_Implementation(UDatabaseController* DatabaseController); \
 \
	DECLARE_FUNCTION(execReceiveCleanData) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->ReceiveCleanData_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReceiveInitData) \
	{ \
		P_GET_OBJECT(UDatabaseController,Z_Param_DatabaseController); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->ReceiveInitData_Implementation(Z_Param_DatabaseController); \
		P_NATIVE_END; \
	}


#define DBTest_Plugins_SqlitePlugin_Source_SqlitePlugin_Public_ClientBase_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool ReceiveCleanData_Implementation(); \
	virtual bool ReceiveInitData_Implementation(UDatabaseController* DatabaseController); \
 \
	DECLARE_FUNCTION(execReceiveCleanData) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->ReceiveCleanData_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReceiveInitData) \
	{ \
		P_GET_OBJECT(UDatabaseController,Z_Param_DatabaseController); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->ReceiveInitData_Implementation(Z_Param_DatabaseController); \
		P_NATIVE_END; \
	}


#define DBTest_Plugins_SqlitePlugin_Source_SqlitePlugin_Public_ClientBase_h_16_EVENT_PARMS \
	struct ClientBase_eventReceiveCleanData_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ClientBase_eventReceiveCleanData_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct ClientBase_eventReceiveInitData_Parms \
	{ \
		UDatabaseController* DatabaseController; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ClientBase_eventReceiveInitData_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	};


#define DBTest_Plugins_SqlitePlugin_Source_SqlitePlugin_Public_ClientBase_h_16_CALLBACK_WRAPPERS
#define DBTest_Plugins_SqlitePlugin_Source_SqlitePlugin_Public_ClientBase_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUClientBase(); \
	friend SQLITEPLUGIN_API class UClass* Z_Construct_UClass_UClientBase(); \
public: \
	DECLARE_CLASS(UClientBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), 0, TEXT("/Script/SqlitePlugin"), NO_API) \
	DECLARE_SERIALIZER(UClientBase) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define DBTest_Plugins_SqlitePlugin_Source_SqlitePlugin_Public_ClientBase_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUClientBase(); \
	friend SQLITEPLUGIN_API class UClass* Z_Construct_UClass_UClientBase(); \
public: \
	DECLARE_CLASS(UClientBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), 0, TEXT("/Script/SqlitePlugin"), NO_API) \
	DECLARE_SERIALIZER(UClientBase) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define DBTest_Plugins_SqlitePlugin_Source_SqlitePlugin_Public_ClientBase_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UClientBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UClientBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UClientBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UClientBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UClientBase(UClientBase&&); \
	NO_API UClientBase(const UClientBase&); \
public:


#define DBTest_Plugins_SqlitePlugin_Source_SqlitePlugin_Public_ClientBase_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UClientBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UClientBase(UClientBase&&); \
	NO_API UClientBase(const UClientBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UClientBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UClientBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UClientBase)


#define DBTest_Plugins_SqlitePlugin_Source_SqlitePlugin_Public_ClientBase_h_16_PRIVATE_PROPERTY_OFFSET
#define DBTest_Plugins_SqlitePlugin_Source_SqlitePlugin_Public_ClientBase_h_13_PROLOG \
	DBTest_Plugins_SqlitePlugin_Source_SqlitePlugin_Public_ClientBase_h_16_EVENT_PARMS


#define DBTest_Plugins_SqlitePlugin_Source_SqlitePlugin_Public_ClientBase_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DBTest_Plugins_SqlitePlugin_Source_SqlitePlugin_Public_ClientBase_h_16_PRIVATE_PROPERTY_OFFSET \
	DBTest_Plugins_SqlitePlugin_Source_SqlitePlugin_Public_ClientBase_h_16_RPC_WRAPPERS \
	DBTest_Plugins_SqlitePlugin_Source_SqlitePlugin_Public_ClientBase_h_16_CALLBACK_WRAPPERS \
	DBTest_Plugins_SqlitePlugin_Source_SqlitePlugin_Public_ClientBase_h_16_INCLASS \
	DBTest_Plugins_SqlitePlugin_Source_SqlitePlugin_Public_ClientBase_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DBTest_Plugins_SqlitePlugin_Source_SqlitePlugin_Public_ClientBase_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DBTest_Plugins_SqlitePlugin_Source_SqlitePlugin_Public_ClientBase_h_16_PRIVATE_PROPERTY_OFFSET \
	DBTest_Plugins_SqlitePlugin_Source_SqlitePlugin_Public_ClientBase_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DBTest_Plugins_SqlitePlugin_Source_SqlitePlugin_Public_ClientBase_h_16_CALLBACK_WRAPPERS \
	DBTest_Plugins_SqlitePlugin_Source_SqlitePlugin_Public_ClientBase_h_16_INCLASS_NO_PURE_DECLS \
	DBTest_Plugins_SqlitePlugin_Source_SqlitePlugin_Public_ClientBase_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DBTest_Plugins_SqlitePlugin_Source_SqlitePlugin_Public_ClientBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
