// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HOMEIS_Furniture_generated_h
#error "Furniture.generated.h already included, missing '#pragma once' in Furniture.h"
#endif
#define HOMEIS_Furniture_generated_h

#define HomeIs_Source_HomeIs_Public_Furniture_h_16_RPC_WRAPPERS
#define HomeIs_Source_HomeIs_Public_Furniture_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define HomeIs_Source_HomeIs_Public_Furniture_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFurniture(); \
	friend struct Z_Construct_UClass_AFurniture_Statics; \
public: \
	DECLARE_CLASS(AFurniture, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HomeIs"), NO_API) \
	DECLARE_SERIALIZER(AFurniture) \
	virtual UObject* _getUObject() const override { return const_cast<AFurniture*>(this); }


#define HomeIs_Source_HomeIs_Public_Furniture_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAFurniture(); \
	friend struct Z_Construct_UClass_AFurniture_Statics; \
public: \
	DECLARE_CLASS(AFurniture, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HomeIs"), NO_API) \
	DECLARE_SERIALIZER(AFurniture) \
	virtual UObject* _getUObject() const override { return const_cast<AFurniture*>(this); }


#define HomeIs_Source_HomeIs_Public_Furniture_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFurniture(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFurniture) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFurniture); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFurniture); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFurniture(AFurniture&&); \
	NO_API AFurniture(const AFurniture&); \
public:


#define HomeIs_Source_HomeIs_Public_Furniture_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFurniture(AFurniture&&); \
	NO_API AFurniture(const AFurniture&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFurniture); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFurniture); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFurniture)


#define HomeIs_Source_HomeIs_Public_Furniture_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___myRaycastCollider() { return STRUCT_OFFSET(AFurniture, _myRaycastCollider); }


#define HomeIs_Source_HomeIs_Public_Furniture_h_13_PROLOG
#define HomeIs_Source_HomeIs_Public_Furniture_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HomeIs_Source_HomeIs_Public_Furniture_h_16_PRIVATE_PROPERTY_OFFSET \
	HomeIs_Source_HomeIs_Public_Furniture_h_16_RPC_WRAPPERS \
	HomeIs_Source_HomeIs_Public_Furniture_h_16_INCLASS \
	HomeIs_Source_HomeIs_Public_Furniture_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HomeIs_Source_HomeIs_Public_Furniture_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HomeIs_Source_HomeIs_Public_Furniture_h_16_PRIVATE_PROPERTY_OFFSET \
	HomeIs_Source_HomeIs_Public_Furniture_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	HomeIs_Source_HomeIs_Public_Furniture_h_16_INCLASS_NO_PURE_DECLS \
	HomeIs_Source_HomeIs_Public_Furniture_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HomeIs_Source_HomeIs_Public_Furniture_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
