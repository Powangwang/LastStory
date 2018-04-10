// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SQLITEPLUGIN_ClientBaseController_generated_h
#error "ClientBaseController.generated.h already included, missing '#pragma once' in ClientBaseController.h"
#endif
#define SQLITEPLUGIN_ClientBaseController_generated_h

#define DBTest_Plugins_SqlitePlugin_Source_SqlitePlugin_Public_ClientBaseController_h_18_DELEGATE \
static inline void FClientInitError_DelegateWrapper(const FMulticastScriptDelegate& ClientInitError) \
{ \
	ClientInitError.ProcessMulticastDelegate<UObject>(NULL); \
}


#define DBTest_Plugins_SqlitePlugin_Source_SqlitePlugin_Public_ClientBaseController_h_17_DELEGATE \
struct ClientBaseController_eventClientInitData_Parms \
{ \
	int32 ItemIdx; \
}; \
static inline void FClientInitData_DelegateWrapper(const FMulticastScriptDelegate& ClientInitData, int32 ItemIdx) \
{ \
	ClientBaseController_eventClientInitData_Parms Parms; \
	Parms.ItemIdx=ItemIdx; \
	ClientInitData.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DBTest_Plugins_SqlitePlugin_Source_SqlitePlugin_Public_ClientBaseController_h_15_RPC_WRAPPERS
#define DBTest_Plugins_SqlitePlugin_Source_SqlitePlugin_Public_ClientBaseController_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define DBTest_Plugins_SqlitePlugin_Source_SqlitePlugin_Public_ClientBaseController_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUClientBaseController(); \
	friend SQLITEPLUGIN_API class UClass* Z_Construct_UClass_UClientBaseController(); \
public: \
	DECLARE_CLASS(UClientBaseController, UObject, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/SqlitePlugin"), SQLITEPLUGIN_API) \
	DECLARE_SERIALIZER(UClientBaseController) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define DBTest_Plugins_SqlitePlugin_Source_SqlitePlugin_Public_ClientBaseController_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUClientBaseController(); \
	friend SQLITEPLUGIN_API class UClass* Z_Construct_UClass_UClientBaseController(); \
public: \
	DECLARE_CLASS(UClientBaseController, UObject, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/SqlitePlugin"), SQLITEPLUGIN_API) \
	DECLARE_SERIALIZER(UClientBaseController) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define DBTest_Plugins_SqlitePlugin_Source_SqlitePlugin_Public_ClientBaseController_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SQLITEPLUGIN_API UClientBaseController(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UClientBaseController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SQLITEPLUGIN_API, UClientBaseController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UClientBaseController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	SQLITEPLUGIN_API UClientBaseController(UClientBaseController&&); \
	SQLITEPLUGIN_API UClientBaseController(const UClientBaseController&); \
public:


#define DBTest_Plugins_SqlitePlugin_Source_SqlitePlugin_Public_ClientBaseController_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	SQLITEPLUGIN_API UClientBaseController(UClientBaseController&&); \
	SQLITEPLUGIN_API UClientBaseController(const UClientBaseController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SQLITEPLUGIN_API, UClientBaseController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UClientBaseController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UClientBaseController)


#define DBTest_Plugins_SqlitePlugin_Source_SqlitePlugin_Public_ClientBaseController_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ClientItems() { return STRUCT_OFFSET(UClientBaseController, ClientItems); }


#define DBTest_Plugins_SqlitePlugin_Source_SqlitePlugin_Public_ClientBaseController_h_12_PROLOG
#define DBTest_Plugins_SqlitePlugin_Source_SqlitePlugin_Public_ClientBaseController_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DBTest_Plugins_SqlitePlugin_Source_SqlitePlugin_Public_ClientBaseController_h_15_PRIVATE_PROPERTY_OFFSET \
	DBTest_Plugins_SqlitePlugin_Source_SqlitePlugin_Public_ClientBaseController_h_15_RPC_WRAPPERS \
	DBTest_Plugins_SqlitePlugin_Source_SqlitePlugin_Public_ClientBaseController_h_15_INCLASS \
	DBTest_Plugins_SqlitePlugin_Source_SqlitePlugin_Public_ClientBaseController_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DBTest_Plugins_SqlitePlugin_Source_SqlitePlugin_Public_ClientBaseController_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DBTest_Plugins_SqlitePlugin_Source_SqlitePlugin_Public_ClientBaseController_h_15_PRIVATE_PROPERTY_OFFSET \
	DBTest_Plugins_SqlitePlugin_Source_SqlitePlugin_Public_ClientBaseController_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DBTest_Plugins_SqlitePlugin_Source_SqlitePlugin_Public_ClientBaseController_h_15_INCLASS_NO_PURE_DECLS \
	DBTest_Plugins_SqlitePlugin_Source_SqlitePlugin_Public_ClientBaseController_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DBTest_Plugins_SqlitePlugin_Source_SqlitePlugin_Public_ClientBaseController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
