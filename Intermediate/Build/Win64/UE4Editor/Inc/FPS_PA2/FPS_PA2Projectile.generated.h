// Copyright Epic Games, Inc. All Rights Reserved.
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
#ifdef FPS_PA2_FPS_PA2Projectile_generated_h
#error "FPS_PA2Projectile.generated.h already included, missing '#pragma once' in FPS_PA2Projectile.h"
#endif
#define FPS_PA2_FPS_PA2Projectile_generated_h

#define FPS_PA2_6___Copy_Source_FPS_PA2_FPS_PA2Projectile_h_15_SPARSE_DATA
#define FPS_PA2_6___Copy_Source_FPS_PA2_FPS_PA2Projectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define FPS_PA2_6___Copy_Source_FPS_PA2_FPS_PA2Projectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define FPS_PA2_6___Copy_Source_FPS_PA2_FPS_PA2Projectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFPS_PA2Projectile(); \
	friend struct Z_Construct_UClass_AFPS_PA2Projectile_Statics; \
public: \
	DECLARE_CLASS(AFPS_PA2Projectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPS_PA2"), NO_API) \
	DECLARE_SERIALIZER(AFPS_PA2Projectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FPS_PA2_6___Copy_Source_FPS_PA2_FPS_PA2Projectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAFPS_PA2Projectile(); \
	friend struct Z_Construct_UClass_AFPS_PA2Projectile_Statics; \
public: \
	DECLARE_CLASS(AFPS_PA2Projectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPS_PA2"), NO_API) \
	DECLARE_SERIALIZER(AFPS_PA2Projectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FPS_PA2_6___Copy_Source_FPS_PA2_FPS_PA2Projectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFPS_PA2Projectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFPS_PA2Projectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPS_PA2Projectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPS_PA2Projectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFPS_PA2Projectile(AFPS_PA2Projectile&&); \
	NO_API AFPS_PA2Projectile(const AFPS_PA2Projectile&); \
public:


#define FPS_PA2_6___Copy_Source_FPS_PA2_FPS_PA2Projectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFPS_PA2Projectile(AFPS_PA2Projectile&&); \
	NO_API AFPS_PA2Projectile(const AFPS_PA2Projectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPS_PA2Projectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPS_PA2Projectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFPS_PA2Projectile)


#define FPS_PA2_6___Copy_Source_FPS_PA2_FPS_PA2Projectile_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(AFPS_PA2Projectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(AFPS_PA2Projectile, ProjectileMovement); }


#define FPS_PA2_6___Copy_Source_FPS_PA2_FPS_PA2Projectile_h_12_PROLOG
#define FPS_PA2_6___Copy_Source_FPS_PA2_FPS_PA2Projectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FPS_PA2_6___Copy_Source_FPS_PA2_FPS_PA2Projectile_h_15_PRIVATE_PROPERTY_OFFSET \
	FPS_PA2_6___Copy_Source_FPS_PA2_FPS_PA2Projectile_h_15_SPARSE_DATA \
	FPS_PA2_6___Copy_Source_FPS_PA2_FPS_PA2Projectile_h_15_RPC_WRAPPERS \
	FPS_PA2_6___Copy_Source_FPS_PA2_FPS_PA2Projectile_h_15_INCLASS \
	FPS_PA2_6___Copy_Source_FPS_PA2_FPS_PA2Projectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FPS_PA2_6___Copy_Source_FPS_PA2_FPS_PA2Projectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FPS_PA2_6___Copy_Source_FPS_PA2_FPS_PA2Projectile_h_15_PRIVATE_PROPERTY_OFFSET \
	FPS_PA2_6___Copy_Source_FPS_PA2_FPS_PA2Projectile_h_15_SPARSE_DATA \
	FPS_PA2_6___Copy_Source_FPS_PA2_FPS_PA2Projectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FPS_PA2_6___Copy_Source_FPS_PA2_FPS_PA2Projectile_h_15_INCLASS_NO_PURE_DECLS \
	FPS_PA2_6___Copy_Source_FPS_PA2_FPS_PA2Projectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FPS_PA2_API UClass* StaticClass<class AFPS_PA2Projectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FPS_PA2_6___Copy_Source_FPS_PA2_FPS_PA2Projectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
