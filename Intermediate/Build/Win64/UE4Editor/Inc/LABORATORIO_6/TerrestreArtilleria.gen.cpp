// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LABORATORIO_6/TerrestreArtilleria.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTerrestreArtilleria() {}
// Cross Module References
	LABORATORIO_6_API UClass* Z_Construct_UClass_ATerrestreArtilleria_NoRegister();
	LABORATORIO_6_API UClass* Z_Construct_UClass_ATerrestreArtilleria();
	LABORATORIO_6_API UClass* Z_Construct_UClass_ANaveTerrestre();
	UPackage* Z_Construct_UPackage__Script_LABORATORIO_6();
// End Cross Module References
	void ATerrestreArtilleria::StaticRegisterNativesATerrestreArtilleria()
	{
	}
	UClass* Z_Construct_UClass_ATerrestreArtilleria_NoRegister()
	{
		return ATerrestreArtilleria::StaticClass();
	}
	struct Z_Construct_UClass_ATerrestreArtilleria_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATerrestreArtilleria_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ANaveTerrestre,
		(UObject* (*)())Z_Construct_UPackage__Script_LABORATORIO_6,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATerrestreArtilleria_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "TerrestreArtilleria.h" },
		{ "ModuleRelativePath", "TerrestreArtilleria.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATerrestreArtilleria_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATerrestreArtilleria>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATerrestreArtilleria_Statics::ClassParams = {
		&ATerrestreArtilleria::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATerrestreArtilleria_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATerrestreArtilleria_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATerrestreArtilleria()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATerrestreArtilleria_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATerrestreArtilleria, 1035848785);
	template<> LABORATORIO_6_API UClass* StaticClass<ATerrestreArtilleria>()
	{
		return ATerrestreArtilleria::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATerrestreArtilleria(Z_Construct_UClass_ATerrestreArtilleria, &ATerrestreArtilleria::StaticClass, TEXT("/Script/LABORATORIO_6"), TEXT("ATerrestreArtilleria"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATerrestreArtilleria);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
