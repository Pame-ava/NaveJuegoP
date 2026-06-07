// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NaveJuego/BonusReparacionNave.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBonusReparacionNave() {}
// Cross Module References
	NAVEJUEGO_API UClass* Z_Construct_UClass_ABonusReparacionNave_NoRegister();
	NAVEJUEGO_API UClass* Z_Construct_UClass_ABonusReparacionNave();
	NAVEJUEGO_API UClass* Z_Construct_UClass_ABonus();
	UPackage* Z_Construct_UPackage__Script_NaveJuego();
// End Cross Module References
	void ABonusReparacionNave::StaticRegisterNativesABonusReparacionNave()
	{
	}
	UClass* Z_Construct_UClass_ABonusReparacionNave_NoRegister()
	{
		return ABonusReparacionNave::StaticClass();
	}
	struct Z_Construct_UClass_ABonusReparacionNave_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABonusReparacionNave_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABonus,
		(UObject* (*)())Z_Construct_UPackage__Script_NaveJuego,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABonusReparacionNave_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "BonusReparacionNave.h" },
		{ "ModuleRelativePath", "BonusReparacionNave.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABonusReparacionNave_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABonusReparacionNave>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABonusReparacionNave_Statics::ClassParams = {
		&ABonusReparacionNave::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ABonusReparacionNave_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABonusReparacionNave_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABonusReparacionNave()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABonusReparacionNave_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABonusReparacionNave, 2163133614);
	template<> NAVEJUEGO_API UClass* StaticClass<ABonusReparacionNave>()
	{
		return ABonusReparacionNave::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABonusReparacionNave(Z_Construct_UClass_ABonusReparacionNave, &ABonusReparacionNave::StaticClass, TEXT("/Script/NaveJuego"), TEXT("ABonusReparacionNave"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABonusReparacionNave);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
