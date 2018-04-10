// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
#ifdef SQLITEPLUGIN_UtilClientFunc_generated_h
#error "UtilClientFunc.generated.h already included, missing '#pragma once' in UtilClientFunc.h"
#endif
#define SQLITEPLUGIN_UtilClientFunc_generated_h

#define DBTest_Plugins_SqlitePlugin_Source_SqlitePlugin_Public_UtilClientFunc_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execLoadObjectClassFromAssetPath) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_AssetPath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UClass**)Z_Param__Result=UUtilClientFunc::LoadObjectClassFromAssetPath(Z_Param_AssetPath); \
		P_NATIVE_END; \
	}


#define DBTest_Plugins_SqlitePlugin_Source_SqlitePlugin_Public_UtilClientFunc_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execLoadObjectClassFromAssetPath) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_AssetPath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UClass**)Z_Param__Result=UUtilClientFunc::LoadObjectClassFromAssetPath(Z_Param_AssetPath); \
		P_NATIVE_END; \
	}


#define DBTest_Plugins_SqlitePlugin_Source_SqlitePlugin_Public_UtilClientFunc_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUtilClientFunc(); \
	friend SQLITEPLUGIN_API class UClass* Z_Construct_UClass_UUtilClientFunc(); \
public: \
	DECLARE_CLASS(UUtilClientFunc, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/SqlitePlugin"), NO_API) \
	DECLARE_SERIALIZER(UUtilClientFunc) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define DBTest_Plugins_SqlitePlugin_Source_SqlitePlugin_Public_UtilClientFunc_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUUtilClientFunc(); \
	friend SQLITEPLUGIN_API class UClass* Z_Construct_UClass_UUtilClientFunc(); \
public: \
	DECLARE_CLASS(UUtilClientFunc, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/SqlitePlugin"), NO_API) \
	DECLARE_SERIALIZER(UUtilClientFunc) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define DBTest_Plugins_SqlitePlugin_Source_SqlitePlugin_Public_UtilClientFunc_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUtilClientFunc(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUtilClientFunc) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUtilClientFunc); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUtilClientFunc); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUtilClientFunc(UUtilClientFunc&&); \
	NO_API UUtilClientFunc(const UUtilClientFunc&); \
public:


#define DBTest_Plugins_SqlitePlugin_Source_SqlitePlugin_Public_UtilClientFunc_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUtilClientFunc(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUtilClientFunc(UUtilClientFunc&&); \
	NO_API UUtilClientFunc(const UUtilClientFunc&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUtilClientFunc); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUtilClientFunc); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUtilClientFunc)


#define DBTest_Plugins_SqlitePlugin_Source_SqlitePlugin_Public_UtilClientFunc_h_15_PRIVATE_PROPERTY_OFFSET
#define DBTest_Plugins_SqlitePlugin_Source_SqlitePlugin_Public_UtilClientFunc_h_12_PROLOG
#define DBTest_Plugins_SqlitePlugin_Source_SqlitePlugin_Public_UtilClientFunc_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DBTest_Plugins_SqlitePlugin_Source_SqlitePlugin_Public_UtilClientFunc_h_15_PRIVATE_PROPERTY_OFFSET \
	DBTest_Plugins_SqlitePlugin_Source_SqlitePlugin_Public_UtilClientFunc_h_15_RPC_WRAPPERS \
	DBTest_Plugins_SqlitePlugin_Source_SqlitePlugin_Public_UtilClientFunc_h_15_INCLASS \
	DBTest_Plugins_SqlitePlugin_Source_SqlitePlugin_Public_UtilClientFunc_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DBTest_Plugins_SqlitePlugin_Source_SqlitePlugin_Public_UtilClientFunc_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DBTest_Plugins_SqlitePlugin_Source_SqlitePlugin_Public_UtilClientFunc_h_15_PRIVATE_PROPERTY_OFFSET \
	DBTest_Plugins_SqlitePlugin_Source_SqlitePlugin_Public_UtilClientFunc_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DBTest_Plugins_SqlitePlugin_Source_SqlitePlugin_Public_UtilClientFunc_h_15_INCLASS_NO_PURE_DECLS \
	DBTest_Plugins_SqlitePlugin_Source_SqlitePlugin_Public_UtilClientFunc_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DBTest_Plugins_SqlitePlugin_Source_SqlitePlugin_Public_UtilClientFunc_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
