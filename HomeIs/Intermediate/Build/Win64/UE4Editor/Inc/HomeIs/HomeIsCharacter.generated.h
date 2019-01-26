// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HOMEIS_HomeIsCharacter_generated_h
#error "HomeIsCharacter.generated.h already included, missing '#pragma once' in HomeIsCharacter.h"
#endif
#define HOMEIS_HomeIsCharacter_generated_h

#define HomeIs_Source_HomeIs_HomeIsCharacter_h_15_RPC_WRAPPERS
#define HomeIs_Source_HomeIs_HomeIsCharacter_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define HomeIs_Source_HomeIs_HomeIsCharacter_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAHomeIsCharacter(); \
	friend struct Z_Construct_UClass_AHomeIsCharacter_Statics; \
public: \
	DECLARE_CLASS(AHomeIsCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HomeIs"), NO_API) \
	DECLARE_SERIALIZER(AHomeIsCharacter) \
	virtual UObject* _getUObject() const override { return const_cast<AHomeIsCharacter*>(this); }


#define HomeIs_Source_HomeIs_HomeIsCharacter_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAHomeIsCharacter(); \
	friend struct Z_Construct_UClass_AHomeIsCharacter_Statics; \
public: \
	DECLARE_CLASS(AHomeIsCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HomeIs"), NO_API) \
	DECLARE_SERIALIZER(AHomeIsCharacter) \
	virtual UObject* _getUObject() const override { return const_cast<AHomeIsCharacter*>(this); }


#define HomeIs_Source_HomeIs_HomeIsCharacter_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AHomeIsCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AHomeIsCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHomeIsCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHomeIsCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHomeIsCharacter(AHomeIsCharacter&&); \
	NO_API AHomeIsCharacter(const AHomeIsCharacter&); \
public:


#define HomeIs_Source_HomeIs_HomeIsCharacter_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHomeIsCharacter(AHomeIsCharacter&&); \
	NO_API AHomeIsCharacter(const AHomeIsCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHomeIsCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHomeIsCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AHomeIsCharacter)


#define HomeIs_Source_HomeIs_HomeIsCharacter_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh1P() { return STRUCT_OFFSET(AHomeIsCharacter, Mesh1P); } \
	FORCEINLINE static uint32 __PPO__FP_Gun() { return STRUCT_OFFSET(AHomeIsCharacter, FP_Gun); } \
	FORCEINLINE static uint32 __PPO__FP_MuzzleLocation() { return STRUCT_OFFSET(AHomeIsCharacter, FP_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__VR_Gun() { return STRUCT_OFFSET(AHomeIsCharacter, VR_Gun); } \
	FORCEINLINE static uint32 __PPO__VR_MuzzleLocation() { return STRUCT_OFFSET(AHomeIsCharacter, VR_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__FirstPersonCameraComponent() { return STRUCT_OFFSET(AHomeIsCharacter, FirstPersonCameraComponent); } \
	FORCEINLINE static uint32 __PPO__R_MotionController() { return STRUCT_OFFSET(AHomeIsCharacter, R_MotionController); } \
	FORCEINLINE static uint32 __PPO__L_MotionController() { return STRUCT_OFFSET(AHomeIsCharacter, L_MotionController); } \
	FORCEINLINE static uint32 __PPO___health() { return STRUCT_OFFSET(AHomeIsCharacter, _health); } \
	FORCEINLINE static uint32 __PPO___sprinting() { return STRUCT_OFFSET(AHomeIsCharacter, _sprinting); } \
	FORCEINLINE static uint32 __PPO___loadedAmmo() { return STRUCT_OFFSET(AHomeIsCharacter, _loadedAmmo); } \
	FORCEINLINE static uint32 __PPO___spareAmmo() { return STRUCT_OFFSET(AHomeIsCharacter, _spareAmmo); } \
	FORCEINLINE static uint32 __PPO___ammoMax() { return STRUCT_OFFSET(AHomeIsCharacter, _ammoMax); } \
	FORCEINLINE static uint32 __PPO___bulletRange() { return STRUCT_OFFSET(AHomeIsCharacter, _bulletRange); } \
	FORCEINLINE static uint32 __PPO___damage() { return STRUCT_OFFSET(AHomeIsCharacter, _damage); }


#define HomeIs_Source_HomeIs_HomeIsCharacter_h_12_PROLOG
#define HomeIs_Source_HomeIs_HomeIsCharacter_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HomeIs_Source_HomeIs_HomeIsCharacter_h_15_PRIVATE_PROPERTY_OFFSET \
	HomeIs_Source_HomeIs_HomeIsCharacter_h_15_RPC_WRAPPERS \
	HomeIs_Source_HomeIs_HomeIsCharacter_h_15_INCLASS \
	HomeIs_Source_HomeIs_HomeIsCharacter_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HomeIs_Source_HomeIs_HomeIsCharacter_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HomeIs_Source_HomeIs_HomeIsCharacter_h_15_PRIVATE_PROPERTY_OFFSET \
	HomeIs_Source_HomeIs_HomeIsCharacter_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	HomeIs_Source_HomeIs_HomeIsCharacter_h_15_INCLASS_NO_PURE_DECLS \
	HomeIs_Source_HomeIs_HomeIsCharacter_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HomeIs_Source_HomeIs_HomeIsCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
