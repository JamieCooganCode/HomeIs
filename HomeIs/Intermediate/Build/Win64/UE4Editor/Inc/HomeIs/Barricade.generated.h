// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HOMEIS_Barricade_generated_h
#error "Barricade.generated.h already included, missing '#pragma once' in Barricade.h"
#endif
#define HOMEIS_Barricade_generated_h

#define HomeIs_Source_HomeIs_Barricade_h_15_RPC_WRAPPERS
#define HomeIs_Source_HomeIs_Barricade_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define HomeIs_Source_HomeIs_Barricade_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABarricade(); \
	friend struct Z_Construct_UClass_ABarricade_Statics; \
public: \
	DECLARE_CLASS(ABarricade, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HomeIs"), NO_API) \
	DECLARE_SERIALIZER(ABarricade) \
	virtual UObject* _getUObject() const override { return const_cast<ABarricade*>(this); }


#define HomeIs_Source_HomeIs_Barricade_h_15_INCLASS \
private: \
	static void StaticRegisterNativesABarricade(); \
	friend struct Z_Construct_UClass_ABarricade_Statics; \
public: \
	DECLARE_CLASS(ABarricade, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HomeIs"), NO_API) \
	DECLARE_SERIALIZER(ABarricade) \
	virtual UObject* _getUObject() const override { return const_cast<ABarricade*>(this); }


#define HomeIs_Source_HomeIs_Barricade_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABarricade(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABarricade) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABarricade); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABarricade); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABarricade(ABarricade&&); \
	NO_API ABarricade(const ABarricade&); \
public:


#define HomeIs_Source_HomeIs_Barricade_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABarricade(ABarricade&&); \
	NO_API ABarricade(const ABarricade&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABarricade); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABarricade); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABarricade)


#define HomeIs_Source_HomeIs_Barricade_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___timeSinceRepair() { return STRUCT_OFFSET(ABarricade, _timeSinceRepair); } \
	FORCEINLINE static uint32 __PPO___repairCooldown() { return STRUCT_OFFSET(ABarricade, _repairCooldown); } \
	FORCEINLINE static uint32 __PPO___health() { return STRUCT_OFFSET(ABarricade, _health); } \
	FORCEINLINE static uint32 __PPO___maxHealth() { return STRUCT_OFFSET(ABarricade, _maxHealth); } \
	FORCEINLINE static uint32 __PPO___myRaycastCollider() { return STRUCT_OFFSET(ABarricade, _myRaycastCollider); }


#define HomeIs_Source_HomeIs_Barricade_h_12_PROLOG
#define HomeIs_Source_HomeIs_Barricade_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HomeIs_Source_HomeIs_Barricade_h_15_PRIVATE_PROPERTY_OFFSET \
	HomeIs_Source_HomeIs_Barricade_h_15_RPC_WRAPPERS \
	HomeIs_Source_HomeIs_Barricade_h_15_INCLASS \
	HomeIs_Source_HomeIs_Barricade_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HomeIs_Source_HomeIs_Barricade_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HomeIs_Source_HomeIs_Barricade_h_15_PRIVATE_PROPERTY_OFFSET \
	HomeIs_Source_HomeIs_Barricade_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	HomeIs_Source_HomeIs_Barricade_h_15_INCLASS_NO_PURE_DECLS \
	HomeIs_Source_HomeIs_Barricade_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HomeIs_Source_HomeIs_Barricade_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
