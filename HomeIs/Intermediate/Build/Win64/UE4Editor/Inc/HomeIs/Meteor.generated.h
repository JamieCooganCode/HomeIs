// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef HOMEIS_Meteor_generated_h
#error "Meteor.generated.h already included, missing '#pragma once' in Meteor.h"
#endif
#define HOMEIS_Meteor_generated_h

#define HomeIs_Source_HomeIs_Meteor_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define HomeIs_Source_HomeIs_Meteor_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define HomeIs_Source_HomeIs_Meteor_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMeteor(); \
	friend struct Z_Construct_UClass_AMeteor_Statics; \
public: \
	DECLARE_CLASS(AMeteor, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HomeIs"), NO_API) \
	DECLARE_SERIALIZER(AMeteor)


#define HomeIs_Source_HomeIs_Meteor_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAMeteor(); \
	friend struct Z_Construct_UClass_AMeteor_Statics; \
public: \
	DECLARE_CLASS(AMeteor, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HomeIs"), NO_API) \
	DECLARE_SERIALIZER(AMeteor)


#define HomeIs_Source_HomeIs_Meteor_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMeteor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMeteor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMeteor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMeteor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMeteor(AMeteor&&); \
	NO_API AMeteor(const AMeteor&); \
public:


#define HomeIs_Source_HomeIs_Meteor_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMeteor(AMeteor&&); \
	NO_API AMeteor(const AMeteor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMeteor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMeteor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMeteor)


#define HomeIs_Source_HomeIs_Meteor_h_13_PRIVATE_PROPERTY_OFFSET
#define HomeIs_Source_HomeIs_Meteor_h_10_PROLOG
#define HomeIs_Source_HomeIs_Meteor_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HomeIs_Source_HomeIs_Meteor_h_13_PRIVATE_PROPERTY_OFFSET \
	HomeIs_Source_HomeIs_Meteor_h_13_RPC_WRAPPERS \
	HomeIs_Source_HomeIs_Meteor_h_13_INCLASS \
	HomeIs_Source_HomeIs_Meteor_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HomeIs_Source_HomeIs_Meteor_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HomeIs_Source_HomeIs_Meteor_h_13_PRIVATE_PROPERTY_OFFSET \
	HomeIs_Source_HomeIs_Meteor_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	HomeIs_Source_HomeIs_Meteor_h_13_INCLASS_NO_PURE_DECLS \
	HomeIs_Source_HomeIs_Meteor_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HomeIs_Source_HomeIs_Meteor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
