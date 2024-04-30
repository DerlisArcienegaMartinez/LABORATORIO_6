// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ETipoNavesEnemigas : uint8;
struct FVector;
struct FRotator;
class UObject;
class ANaveEnemiga;
#ifdef LABORATORIO_6_NaveEnemigaFactory_generated_h
#error "NaveEnemigaFactory.generated.h already included, missing '#pragma once' in NaveEnemigaFactory.h"
#endif
#define LABORATORIO_6_NaveEnemigaFactory_generated_h

#define LABORATORIO_6_Source_LABORATORIO_6_NaveEnemigaFactory_h_32_SPARSE_DATA
#define LABORATORIO_6_Source_LABORATORIO_6_NaveEnemigaFactory_h_32_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCrearNaveEnemiga);


#define LABORATORIO_6_Source_LABORATORIO_6_NaveEnemigaFactory_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCrearNaveEnemiga);


#define LABORATORIO_6_Source_LABORATORIO_6_NaveEnemigaFactory_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNaveEnemigaFactory(); \
	friend struct Z_Construct_UClass_UNaveEnemigaFactory_Statics; \
public: \
	DECLARE_CLASS(UNaveEnemigaFactory, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LABORATORIO_6"), NO_API) \
	DECLARE_SERIALIZER(UNaveEnemigaFactory)


#define LABORATORIO_6_Source_LABORATORIO_6_NaveEnemigaFactory_h_32_INCLASS \
private: \
	static void StaticRegisterNativesUNaveEnemigaFactory(); \
	friend struct Z_Construct_UClass_UNaveEnemigaFactory_Statics; \
public: \
	DECLARE_CLASS(UNaveEnemigaFactory, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LABORATORIO_6"), NO_API) \
	DECLARE_SERIALIZER(UNaveEnemigaFactory)


#define LABORATORIO_6_Source_LABORATORIO_6_NaveEnemigaFactory_h_32_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNaveEnemigaFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNaveEnemigaFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNaveEnemigaFactory); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNaveEnemigaFactory); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNaveEnemigaFactory(UNaveEnemigaFactory&&); \
	NO_API UNaveEnemigaFactory(const UNaveEnemigaFactory&); \
public:


#define LABORATORIO_6_Source_LABORATORIO_6_NaveEnemigaFactory_h_32_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNaveEnemigaFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNaveEnemigaFactory(UNaveEnemigaFactory&&); \
	NO_API UNaveEnemigaFactory(const UNaveEnemigaFactory&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNaveEnemigaFactory); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNaveEnemigaFactory); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNaveEnemigaFactory)


#define LABORATORIO_6_Source_LABORATORIO_6_NaveEnemigaFactory_h_32_PRIVATE_PROPERTY_OFFSET
#define LABORATORIO_6_Source_LABORATORIO_6_NaveEnemigaFactory_h_29_PROLOG
#define LABORATORIO_6_Source_LABORATORIO_6_NaveEnemigaFactory_h_32_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	LABORATORIO_6_Source_LABORATORIO_6_NaveEnemigaFactory_h_32_PRIVATE_PROPERTY_OFFSET \
	LABORATORIO_6_Source_LABORATORIO_6_NaveEnemigaFactory_h_32_SPARSE_DATA \
	LABORATORIO_6_Source_LABORATORIO_6_NaveEnemigaFactory_h_32_RPC_WRAPPERS \
	LABORATORIO_6_Source_LABORATORIO_6_NaveEnemigaFactory_h_32_INCLASS \
	LABORATORIO_6_Source_LABORATORIO_6_NaveEnemigaFactory_h_32_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define LABORATORIO_6_Source_LABORATORIO_6_NaveEnemigaFactory_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	LABORATORIO_6_Source_LABORATORIO_6_NaveEnemigaFactory_h_32_PRIVATE_PROPERTY_OFFSET \
	LABORATORIO_6_Source_LABORATORIO_6_NaveEnemigaFactory_h_32_SPARSE_DATA \
	LABORATORIO_6_Source_LABORATORIO_6_NaveEnemigaFactory_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	LABORATORIO_6_Source_LABORATORIO_6_NaveEnemigaFactory_h_32_INCLASS_NO_PURE_DECLS \
	LABORATORIO_6_Source_LABORATORIO_6_NaveEnemigaFactory_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LABORATORIO_6_API UClass* StaticClass<class UNaveEnemigaFactory>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID LABORATORIO_6_Source_LABORATORIO_6_NaveEnemigaFactory_h


#define FOREACH_ENUM_ETIPONAVESENEMIGAS(op) \
	op(ETipoNavesEnemigas::Aereas) \
	op(ETipoNavesEnemigas::Terrestre) \
	op(ETipoNavesEnemigas::Acuatica) \
	op(ETipoNavesEnemigas::Caza) \
	op(ETipoNavesEnemigas::Transporte) \
	op(ETipoNavesEnemigas::TransportistaT) \
	op(ETipoNavesEnemigas::Artillero) \
	op(ETipoNavesEnemigas::Explorador) \
	op(ETipoNavesEnemigas::Rescate) 

enum class ETipoNavesEnemigas : uint8;
template<> LABORATORIO_6_API UEnum* StaticEnum<ETipoNavesEnemigas>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
