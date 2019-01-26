// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HOMEIS_TestBox_generated_h
#error "TestBox.generated.h already included, missing '#pragma once' in TestBox.h"
#endif
#define HOMEIS_TestBox_generated_h

#define HomeIs_Source_HomeIs_Public_TestBox_h_13_RPC_WRAPPERS
#define HomeIs_Source_HomeIs_Public_TestBox_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define HomeIs_Source_HomeIs_Public_TestBox_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATestBox(); \
	friend struct Z_Construct_UClass_ATestBox_Statics; \
public: \
	DECLARE_CLASS(ATestBox, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HomeIs"), NO_API) \
	DECLARE_SERIALIZER(ATestBox) \
	virtual UObject* _getUObject() const override { return const_cast<ATestBox*>(this); }


#define HomeIs_Source_HomeIs_Public_TestBox_h_13_INCLASS \
private: \
	static void StaticRegisterNativesATestBox(); \
	friend struct Z_Construct_UClass_ATestBox_Statics; \
public: \
	DECLARE_CLASS(ATestBox, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HomeIs"), NO_API) \
	DECLARE_SERIALIZER(ATestBox) \
	virtual UObject* _getUObject() const override { return const_cast<ATestBox*>(this); }


#define HomeIs_Source_HomeIs_Public_TestBox_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATestBox(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATestBox) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATestBox); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATestBox); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATestBox(ATestBox&&); \
	NO_API ATestBox(const ATestBox&); \
public:


#define HomeIs_Source_HomeIs_Public_TestBox_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATestBox(ATestBox&&); \
	NO_API ATestBox(const ATestBox&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATestBox); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATestBox); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATestBox)


#define HomeIs_Source_HomeIs_Public_TestBox_h_13_PRIVATE_PROPERTY_OFFSET
#define HomeIs_Source_HomeIs_Public_TestBox_h_10_PROLOG
#define HomeIs_Source_HomeIs_Public_TestBox_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HomeIs_Source_HomeIs_Public_TestBox_h_13_PRIVATE_PROPERTY_OFFSET \
	HomeIs_Source_HomeIs_Public_TestBox_h_13_RPC_WRAPPERS \
	HomeIs_Source_HomeIs_Public_TestBox_h_13_INCLASS \
	HomeIs_Source_HomeIs_Public_TestBox_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HomeIs_Source_HomeIs_Public_TestBox_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HomeIs_Source_HomeIs_Public_TestBox_h_13_PRIVATE_PROPERTY_OFFSET \
	HomeIs_Source_HomeIs_Public_TestBox_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	HomeIs_Source_HomeIs_Public_TestBox_h_13_INCLASS_NO_PURE_DECLS \
	HomeIs_Source_HomeIs_Public_TestBox_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HomeIs_Source_HomeIs_Public_TestBox_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
