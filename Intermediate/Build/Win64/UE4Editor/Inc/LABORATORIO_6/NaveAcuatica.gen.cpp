// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LABORATORIO_6/NaveAcuatica.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNaveAcuatica() {}
// Cross Module References
	LABORATORIO_6_API UClass* Z_Construct_UClass_ANaveAcuatica_NoRegister();
	LABORATORIO_6_API UClass* Z_Construct_UClass_ANaveAcuatica();
	LABORATORIO_6_API UClass* Z_Construct_UClass_ANaveEnemiga();
	UPackage* Z_Construct_UPackage__Script_LABORATORIO_6();
// End Cross Module References
	void ANaveAcuatica::StaticRegisterNativesANaveAcuatica()
	{
	}
	UClass* Z_Construct_UClass_ANaveAcuatica_NoRegister()
	{
		return ANaveAcuatica::StaticClass();
	}
	struct Z_Construct_UClass_ANaveAcuatica_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LimiteIzquierdo_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LimiteIzquierdo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANaveAcuatica_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ANaveEnemiga,
		(UObject* (*)())Z_Construct_UPackage__Script_LABORATORIO_6,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveAcuatica_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "NaveAcuatica.h" },
		{ "ModuleRelativePath", "NaveAcuatica.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveAcuatica_Statics::NewProp_LimiteIzquierdo_MetaData[] = {
		{ "ModuleRelativePath", "NaveAcuatica.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANaveAcuatica_Statics::NewProp_LimiteIzquierdo = { "LimiteIzquierdo", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANaveAcuatica, LimiteIzquierdo), METADATA_PARAMS(Z_Construct_UClass_ANaveAcuatica_Statics::NewProp_LimiteIzquierdo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveAcuatica_Statics::NewProp_LimiteIzquierdo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANaveAcuatica_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANaveAcuatica_Statics::NewProp_LimiteIzquierdo,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANaveAcuatica_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANaveAcuatica>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANaveAcuatica_Statics::ClassParams = {
		&ANaveAcuatica::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ANaveAcuatica_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ANaveAcuatica_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ANaveAcuatica_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveAcuatica_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANaveAcuatica()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANaveAcuatica_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANaveAcuatica, 1403463747);
	template<> LABORATORIO_6_API UClass* StaticClass<ANaveAcuatica>()
	{
		return ANaveAcuatica::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANaveAcuatica(Z_Construct_UClass_ANaveAcuatica, &ANaveAcuatica::StaticClass, TEXT("/Script/LABORATORIO_6"), TEXT("ANaveAcuatica"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANaveAcuatica);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
