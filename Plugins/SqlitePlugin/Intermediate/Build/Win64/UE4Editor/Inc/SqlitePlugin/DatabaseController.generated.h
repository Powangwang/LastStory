// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SQLITEPLUGIN_DatabaseController_generated_h
#error "DatabaseController.generated.h already included, missing '#pragma once' in DatabaseController.h"
#endif
#define SQLITEPLUGIN_DatabaseController_generated_h

#define DBTest_Plugins_SqlitePlugin_Source_SqlitePlugin_Public_DatabaseController_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetColValueConvertStr) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_colName); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_outColValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->GetColValueConvertStr(Z_Param_colName,Z_Param_Out_outColValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetColValueConvertBool) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_colName); \
		P_GET_UBOOL_REF(Z_Param_Out_outColValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->GetColValueConvertBool(Z_Param_colName,Z_Param_Out_outColValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetColValueConvertFloat) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_colName); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_outColValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->GetColValueConvertFloat(Z_Param_colName,Z_Param_Out_outColValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetColValueConvertInt) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_colName); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_outColValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->GetColValueConvertInt(Z_Param_colName,Z_Param_Out_outColValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetColValueByDefault) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_colName); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_outColValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->GetColValueByDefault(Z_Param_colName,Z_Param_Out_outColValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReadNext) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->ReadNext(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOpenTable) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_TableName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OpenTable(Z_Param_TableName); \
		P_NATIVE_END; \
	}


#define DBTest_Plugins_SqlitePlugin_Source_SqlitePlugin_Public_DatabaseController_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetColValueConvertStr) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_colName); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_outColValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->GetColValueConvertStr(Z_Param_colName,Z_Param_Out_outColValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetColValueConvertBool) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_colName); \
		P_GET_UBOOL_REF(Z_Param_Out_outColValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->GetColValueConvertBool(Z_Param_colName,Z_Param_Out_outColValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetColValueConvertFloat) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_colName); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_outColValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->GetColValueConvertFloat(Z_Param_colName,Z_Param_Out_outColValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetColValueConvertInt) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_colName); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_outColValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->GetColValueConvertInt(Z_Param_colName,Z_Param_Out_outColValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetColValueByDefault) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_colName); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_outColValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->GetColValueByDefault(Z_Param_colName,Z_Param_Out_outColValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReadNext) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->ReadNext(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOpenTable) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_TableName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OpenTable(Z_Param_TableName); \
		P_NATIVE_END; \
	}


#define DBTest_Plugins_SqlitePlugin_Source_SqlitePlugin_Public_DatabaseController_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDatabaseController(); \
	friend SQLITEPLUGIN_API class UClass* Z_Construct_UClass_UDatabaseController(); \
public: \
	DECLARE_CLASS(UDatabaseController, UObject, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/SqlitePlugin"), NO_API) \
	DECLARE_SERIALIZER(UDatabaseController) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define DBTest_Plugins_SqlitePlugin_Source_SqlitePlugin_Public_DatabaseController_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUDatabaseController(); \
	friend SQLITEPLUGIN_API class UClass* Z_Construct_UClass_UDatabaseController(); \
public: \
	DECLARE_CLASS(UDatabaseController, UObject, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/SqlitePlugin"), NO_API) \
	DECLARE_SERIALIZER(UDatabaseController) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define DBTest_Plugins_SqlitePlugin_Source_SqlitePlugin_Public_DatabaseController_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDatabaseController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDatabaseController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDatabaseController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDatabaseController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDatabaseController(UDatabaseController&&); \
	NO_API UDatabaseController(const UDatabaseController&); \
public:


#define DBTest_Plugins_SqlitePlugin_Source_SqlitePlugin_Public_DatabaseController_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDatabaseController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDatabaseController(UDatabaseController&&); \
	NO_API UDatabaseController(const UDatabaseController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDatabaseController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDatabaseController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDatabaseController)


#define DBTest_Plugins_SqlitePlugin_Source_SqlitePlugin_Public_DatabaseController_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mColNames() { return STRUCT_OFFSET(UDatabaseController, mColNames); } \
	FORCEINLINE static uint32 __PPO__mDatabaseFullPath() { return STRUCT_OFFSET(UDatabaseController, mDatabaseFullPath); }


#define DBTest_Plugins_SqlitePlugin_Source_SqlitePlugin_Public_DatabaseController_h_12_PROLOG
#define DBTest_Plugins_SqlitePlugin_Source_SqlitePlugin_Public_DatabaseController_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DBTest_Plugins_SqlitePlugin_Source_SqlitePlugin_Public_DatabaseController_h_15_PRIVATE_PROPERTY_OFFSET \
	DBTest_Plugins_SqlitePlugin_Source_SqlitePlugin_Public_DatabaseController_h_15_RPC_WRAPPERS \
	DBTest_Plugins_SqlitePlugin_Source_SqlitePlugin_Public_DatabaseController_h_15_INCLASS \
	DBTest_Plugins_SqlitePlugin_Source_SqlitePlugin_Public_DatabaseController_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DBTest_Plugins_SqlitePlugin_Source_SqlitePlugin_Public_DatabaseController_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DBTest_Plugins_SqlitePlugin_Source_SqlitePlugin_Public_DatabaseController_h_15_PRIVATE_PROPERTY_OFFSET \
	DBTest_Plugins_SqlitePlugin_Source_SqlitePlugin_Public_DatabaseController_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DBTest_Plugins_SqlitePlugin_Source_SqlitePlugin_Public_DatabaseController_h_15_INCLASS_NO_PURE_DECLS \
	DBTest_Plugins_SqlitePlugin_Source_SqlitePlugin_Public_DatabaseController_h_15_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class DatabaseController."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DBTest_Plugins_SqlitePlugin_Source_SqlitePlugin_Public_DatabaseController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
