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
#ifdef LABORATORIO_6_LABORATORIO_6Projectile_generated_h
#error "LABORATORIO_6Projectile.generated.h already included, missing '#pragma once' in LABORATORIO_6Projectile.h"
#endif
#define LABORATORIO_6_LABORATORIO_6Projectile_generated_h

#define LABORATORIO_6_Source_LABORATORIO_6_LABORATORIO_6Projectile_h_15_SPARSE_DATA
#define LABORATORIO_6_Source_LABORATORIO_6_LABORATORIO_6Projectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define LABORATORIO_6_Source_LABORATORIO_6_LABORATORIO_6Projectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define LABORATORIO_6_Source_LABORATORIO_6_LABORATORIO_6Projectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALABORATORIO_6Projectile(); \
	friend struct Z_Construct_UClass_ALABORATORIO_6Projectile_Statics; \
public: \
	DECLARE_CLASS(ALABORATORIO_6Projectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LABORATORIO_6"), NO_API) \
	DECLARE_SERIALIZER(ALABORATORIO_6Projectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define LABORATORIO_6_Source_LABORATORIO_6_LABORATORIO_6Projectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesALABORATORIO_6Projectile(); \
	friend struct Z_Construct_UClass_ALABORATORIO_6Projectile_Statics; \
public: \
	DECLARE_CLASS(ALABORATORIO_6Projectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LABORATORIO_6"), NO_API) \
	DECLARE_SERIALIZER(ALABORATORIO_6Projectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define LABORATORIO_6_Source_LABORATORIO_6_LABORATORIO_6Projectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ALABORATORIO_6Projectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALABORATORIO_6Projectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALABORATORIO_6Projectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALABORATORIO_6Projectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALABORATORIO_6Projectile(ALABORATORIO_6Projectile&&); \
	NO_API ALABORATORIO_6Projectile(const ALABORATORIO_6Projectile&); \
public:


#define LABORATORIO_6_Source_LABORATORIO_6_LABORATORIO_6Projectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALABORATORIO_6Projectile(ALABORATORIO_6Projectile&&); \
	NO_API ALABORATORIO_6Projectile(const ALABORATORIO_6Projectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALABORATORIO_6Projectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALABORATORIO_6Projectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ALABORATORIO_6Projectile)


#define LABORATORIO_6_Source_LABORATORIO_6_LABORATORIO_6Projectile_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ProjectileMesh() { return STRUCT_OFFSET(ALABORATORIO_6Projectile, ProjectileMesh); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(ALABORATORIO_6Projectile, ProjectileMovement); }


#define LABORATORIO_6_Source_LABORATORIO_6_LABORATORIO_6Projectile_h_12_PROLOG
#define LABORATORIO_6_Source_LABORATORIO_6_LABORATORIO_6Projectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	LABORATORIO_6_Source_LABORATORIO_6_LABORATORIO_6Projectile_h_15_PRIVATE_PROPERTY_OFFSET \
	LABORATORIO_6_Source_LABORATORIO_6_LABORATORIO_6Projectile_h_15_SPARSE_DATA \
	LABORATORIO_6_Source_LABORATORIO_6_LABORATORIO_6Projectile_h_15_RPC_WRAPPERS \
	LABORATORIO_6_Source_LABORATORIO_6_LABORATORIO_6Projectile_h_15_INCLASS \
	LABORATORIO_6_Source_LABORATORIO_6_LABORATORIO_6Projectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define LABORATORIO_6_Source_LABORATORIO_6_LABORATORIO_6Projectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	LABORATORIO_6_Source_LABORATORIO_6_LABORATORIO_6Projectile_h_15_PRIVATE_PROPERTY_OFFSET \
	LABORATORIO_6_Source_LABORATORIO_6_LABORATORIO_6Projectile_h_15_SPARSE_DATA \
	LABORATORIO_6_Source_LABORATORIO_6_LABORATORIO_6Projectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	LABORATORIO_6_Source_LABORATORIO_6_LABORATORIO_6Projectile_h_15_INCLASS_NO_PURE_DECLS \
	LABORATORIO_6_Source_LABORATORIO_6_LABORATORIO_6Projectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LABORATORIO_6_API UClass* StaticClass<class ALABORATORIO_6Projectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID LABORATORIO_6_Source_LABORATORIO_6_LABORATORIO_6Projectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
