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

#define FPS_PA2_6___Copy_Source_FPS_PA2_FPS_PA2Character_h_22_SPARSE_DATA
#define FPS_PA2_6___Copy_Source_FPS_PA2_FPS_PA2Character_h_22_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetMesh1P); \
	DECLARE_FUNCTION(execReload); \
	DECLARE_FUNCTION(execCycleOptic); \
	DECLARE_FUNCTION(execOnRep_IsAiming); \
	DECLARE_FUNCTION(execSetAiming); \
	DECLARE_FUNCTION(execOnRep_OpticIndex);


#define FPS_PA2_6___Copy_Source_FPS_PA2_FPS_PA2Character_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetMesh1P); \
	DECLARE_FUNCTION(execReload); \
	DECLARE_FUNCTION(execCycleOptic); \
	DECLARE_FUNCTION(execOnRep_IsAiming); \
	DECLARE_FUNCTION(execSetAiming); \
	DECLARE_FUNCTION(execOnRep_OpticIndex);


#define FPS_PA2_6___Copy_Source_FPS_PA2_FPS_PA2Character_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFPS_PA2Character(); \
	friend struct Z_Construct_UClass_AFPS_PA2Character_Statics; \
public: \
	DECLARE_CLASS(AFPS_PA2Character, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPS_PA2"), NO_API) \
	DECLARE_SERIALIZER(AFPS_PA2Character) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		OpticIndex=NETFIELD_REP_START, \
		bIsAiming, \
		NETFIELD_REP_END=bIsAiming	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FPS_PA2_6___Copy_Source_FPS_PA2_FPS_PA2Character_h_22_INCLASS \
private: \
	static void StaticRegisterNativesAFPS_PA2Character(); \
	friend struct Z_Construct_UClass_AFPS_PA2Character_Statics; \
public: \
	DECLARE_CLASS(AFPS_PA2Character, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPS_PA2"), NO_API) \
	DECLARE_SERIALIZER(AFPS_PA2Character) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		OpticIndex=NETFIELD_REP_START, \
		bIsAiming, \
		NETFIELD_REP_END=bIsAiming	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FPS_PA2_6___Copy_Source_FPS_PA2_FPS_PA2Character_h_22_STANDARD_CONSTRUCTORS \
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


#define FPS_PA2_6___Copy_Source_FPS_PA2_FPS_PA2Character_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFPS_PA2Character(AFPS_PA2Character&&); \
	NO_API AFPS_PA2Character(const AFPS_PA2Character&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPS_PA2Character); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPS_PA2Character); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFPS_PA2Character)


#define FPS_PA2_6___Copy_Source_FPS_PA2_FPS_PA2Character_h_22_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh1P() { return STRUCT_OFFSET(AFPS_PA2Character, Mesh1P); } \
	FORCEINLINE static uint32 __PPO__FP_Gun() { return STRUCT_OFFSET(AFPS_PA2Character, FP_Gun); } \
	FORCEINLINE static uint32 __PPO__Optics() { return STRUCT_OFFSET(AFPS_PA2Character, Optics); } \
	FORCEINLINE static uint32 __PPO__CurrentOptic() { return STRUCT_OFFSET(AFPS_PA2Character, CurrentOptic); } \
	FORCEINLINE static uint32 __PPO__OpticIndex() { return STRUCT_OFFSET(AFPS_PA2Character, OpticIndex); } \
	FORCEINLINE static uint32 __PPO__FirstPersonCameraComponent() { return STRUCT_OFFSET(AFPS_PA2Character, FirstPersonCameraComponent); } \
	FORCEINLINE static uint32 __PPO__bIsAiming() { return STRUCT_OFFSET(AFPS_PA2Character, bIsAiming); }


#define FPS_PA2_6___Copy_Source_FPS_PA2_FPS_PA2Character_h_19_PROLOG
#define FPS_PA2_6___Copy_Source_FPS_PA2_FPS_PA2Character_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FPS_PA2_6___Copy_Source_FPS_PA2_FPS_PA2Character_h_22_PRIVATE_PROPERTY_OFFSET \
	FPS_PA2_6___Copy_Source_FPS_PA2_FPS_PA2Character_h_22_SPARSE_DATA \
	FPS_PA2_6___Copy_Source_FPS_PA2_FPS_PA2Character_h_22_RPC_WRAPPERS \
	FPS_PA2_6___Copy_Source_FPS_PA2_FPS_PA2Character_h_22_INCLASS \
	FPS_PA2_6___Copy_Source_FPS_PA2_FPS_PA2Character_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FPS_PA2_6___Copy_Source_FPS_PA2_FPS_PA2Character_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FPS_PA2_6___Copy_Source_FPS_PA2_FPS_PA2Character_h_22_PRIVATE_PROPERTY_OFFSET \
	FPS_PA2_6___Copy_Source_FPS_PA2_FPS_PA2Character_h_22_SPARSE_DATA \
	FPS_PA2_6___Copy_Source_FPS_PA2_FPS_PA2Character_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FPS_PA2_6___Copy_Source_FPS_PA2_FPS_PA2Character_h_22_INCLASS_NO_PURE_DECLS \
	FPS_PA2_6___Copy_Source_FPS_PA2_FPS_PA2Character_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FPS_PA2_API UClass* StaticClass<class AFPS_PA2Character>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FPS_PA2_6___Copy_Source_FPS_PA2_FPS_PA2Character_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
