// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
class AActor;
#ifdef HOMEIS_ZombieBase_generated_h
#error "ZombieBase.generated.h already included, missing '#pragma once' in ZombieBase.h"
#endif
#define HOMEIS_ZombieBase_generated_h

#define HomeIs_Source_HomeIs_Public_ZombieBase_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetTargetPosition) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetTargetPosition(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCheckIfNearTarget) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->CheckIfNearTarget(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCheckHasTarget) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->CheckHasTarget(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGoToTarget) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_deltaTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GoToTarget(Z_Param_deltaTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDealDamage) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_damageDealt); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DealDamage(Z_Param_damageDealt); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAttack) \
	{ \
		P_GET_OBJECT(AActor,Z_Param__actorAttacking); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Attack(Z_Param__actorAttacking); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPostInitializeComponents) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PostInitializeComponents(); \
		P_NATIVE_END; \
	}


#define HomeIs_Source_HomeIs_Public_ZombieBase_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetTargetPosition) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetTargetPosition(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCheckIfNearTarget) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->CheckIfNearTarget(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCheckHasTarget) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->CheckHasTarget(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGoToTarget) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_deltaTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GoToTarget(Z_Param_deltaTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDealDamage) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_damageDealt); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DealDamage(Z_Param_damageDealt); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAttack) \
	{ \
		P_GET_OBJECT(AActor,Z_Param__actorAttacking); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Attack(Z_Param__actorAttacking); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPostInitializeComponents) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PostInitializeComponents(); \
		P_NATIVE_END; \
	}


#define HomeIs_Source_HomeIs_Public_ZombieBase_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAZombieBase(); \
	friend struct Z_Construct_UClass_AZombieBase_Statics; \
public: \
	DECLARE_CLASS(AZombieBase, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HomeIs"), NO_API) \
	DECLARE_SERIALIZER(AZombieBase) \
	virtual UObject* _getUObject() const override { return const_cast<AZombieBase*>(this); }


#define HomeIs_Source_HomeIs_Public_ZombieBase_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAZombieBase(); \
	friend struct Z_Construct_UClass_AZombieBase_Statics; \
public: \
	DECLARE_CLASS(AZombieBase, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HomeIs"), NO_API) \
	DECLARE_SERIALIZER(AZombieBase) \
	virtual UObject* _getUObject() const override { return const_cast<AZombieBase*>(this); }


#define HomeIs_Source_HomeIs_Public_ZombieBase_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AZombieBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AZombieBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AZombieBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AZombieBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AZombieBase(AZombieBase&&); \
	NO_API AZombieBase(const AZombieBase&); \
public:


#define HomeIs_Source_HomeIs_Public_ZombieBase_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AZombieBase(AZombieBase&&); \
	NO_API AZombieBase(const AZombieBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AZombieBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AZombieBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AZombieBase)


#define HomeIs_Source_HomeIs_Public_ZombieBase_h_13_PRIVATE_PROPERTY_OFFSET
#define HomeIs_Source_HomeIs_Public_ZombieBase_h_10_PROLOG
#define HomeIs_Source_HomeIs_Public_ZombieBase_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HomeIs_Source_HomeIs_Public_ZombieBase_h_13_PRIVATE_PROPERTY_OFFSET \
	HomeIs_Source_HomeIs_Public_ZombieBase_h_13_RPC_WRAPPERS \
	HomeIs_Source_HomeIs_Public_ZombieBase_h_13_INCLASS \
	HomeIs_Source_HomeIs_Public_ZombieBase_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HomeIs_Source_HomeIs_Public_ZombieBase_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HomeIs_Source_HomeIs_Public_ZombieBase_h_13_PRIVATE_PROPERTY_OFFSET \
	HomeIs_Source_HomeIs_Public_ZombieBase_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	HomeIs_Source_HomeIs_Public_ZombieBase_h_13_INCLASS_NO_PURE_DECLS \
	HomeIs_Source_HomeIs_Public_ZombieBase_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HomeIs_Source_HomeIs_Public_ZombieBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
