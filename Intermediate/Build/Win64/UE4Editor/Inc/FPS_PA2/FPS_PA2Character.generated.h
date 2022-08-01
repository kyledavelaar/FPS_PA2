// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USkeletalMeshComponent;
#ifdef FPS_PA2_FPS_PA2Character_generated_h
#error "FPS_PA2Character.generated.h already included, missing '#pragma once' in FPS_PA2Character.h"
#endif
#define FPS_PA2_FPS_PA2Character_generated_h

#define FPS_PA2_6_Source_FPS_PA2_FPS_PA2Character_h_21_SPARSE_DATA
#define FPS_PA2_6_Source_FPS_PA2_FPS_PA2Character_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetMesh1P);


#define FPS_PA2_6_Source_FPS_PA2_FPS_PA2Character_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetMesh1P);


#define FPS_PA2_6_Source_FPS_PA2_FPS_PA2Character_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFPS_PA2Character(); \
	friend struct Z_Construct_UClass_AFPS_PA2Character_Statics; \
public: \
	DECLARE_CLASS(AFPS_PA2Character, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPS_PA2"), NO_API) \
	DECLARE_SERIALIZER(AFPS_PA2Character)


#define FPS_PA2_6_Source_FPS_PA2_FPS_PA2Character_h_21_INCLASS \
private: \
	static void StaticRegisterNativesAFPS_PA2Character(); \
	friend struct Z_Construct_UClass_AFPS_PA2Character_Statics; \
public: \
	DECLARE_CLASS(AFPS_PA2Character, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPS_PA2"), NO_API) \
	DECLARE_SERIALIZER(AFPS_PA2Character)


#define FPS_PA2_6_Source_FPS_PA2_FPS_PA2Character_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFPS_PA2Character(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFPS_PA2Character) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPS_PA2Character); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPS_PA2Character); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFPS_PA2Character(AFPS_PA2Character&&); \
	NO_API AFPS_PA2Character(const AFPS_PA2Character&); \
public:


#define FPS_PA2_6_Source_FPS_PA2_FPS_PA2Character_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFPS_PA2Character(AFPS_PA2Character&&); \
	NO_API AFPS_PA2Character(const AFPS_PA2Character&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPS_PA2Character); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPS_PA2Character); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFPS_PA2Character)


#define FPS_PA2_6_Source_FPS_PA2_FPS_PA2Character_h_21_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh1P() { return STRUCT_OFFSET(AFPS_PA2Character, Mesh1P); } \
	FORCEINLINE static uint32 __PPO__FP_Gun() { return STRUCT_OFFSET(AFPS_PA2Character, FP_Gun); } \
	FORCEINLINE static uint32 __PPO__Optics() { return STRUCT_OFFSET(AFPS_PA2Character, Optics); } \
	FORCEINLINE static uint32 __PPO__CurrentOptic() { return STRUCT_OFFSET(AFPS_PA2Character, CurrentOptic); } \
	FORCEINLINE static uint32 __PPO__FirstPersonCameraComponent() { return STRUCT_OFFSET(AFPS_PA2Character, FirstPersonCameraComponent); }


#define FPS_PA2_6_Source_FPS_PA2_FPS_PA2Character_h_18_PROLOG
#define FPS_PA2_6_Source_FPS_PA2_FPS_PA2Character_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FPS_PA2_6_Source_FPS_PA2_FPS_PA2Character_h_21_PRIVATE_PROPERTY_OFFSET \
	FPS_PA2_6_Source_FPS_PA2_FPS_PA2Character_h_21_SPARSE_DATA \
	FPS_PA2_6_Source_FPS_PA2_FPS_PA2Character_h_21_RPC_WRAPPERS \
	FPS_PA2_6_Source_FPS_PA2_FPS_PA2Character_h_21_INCLASS \
	FPS_PA2_6_Source_FPS_PA2_FPS_PA2Character_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FPS_PA2_6_Source_FPS_PA2_FPS_PA2Character_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FPS_PA2_6_Source_FPS_PA2_FPS_PA2Character_h_21_PRIVATE_PROPERTY_OFFSET \
	FPS_PA2_6_Source_FPS_PA2_FPS_PA2Character_h_21_SPARSE_DATA \
	FPS_PA2_6_Source_FPS_PA2_FPS_PA2Character_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FPS_PA2_6_Source_FPS_PA2_FPS_PA2Character_h_21_INCLASS_NO_PURE_DECLS \
	FPS_PA2_6_Source_FPS_PA2_FPS_PA2Character_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FPS_PA2_API UClass* StaticClass<class AFPS_PA2Character>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FPS_PA2_6_Source_FPS_PA2_FPS_PA2Character_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
