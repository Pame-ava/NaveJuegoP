// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NaveJuego/BonusComodin.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBonusComodin() {}
// Cross Module References
	NAVEJUEGO_API UClass* Z_Construct_UClass_ABonusComodin_NoRegister();
	NAVEJUEGO_API UClass* Z_Construct_UClass_ABonusComodin();
	NAVEJUEGO_API UClass* Z_Construct_UClass_ABonus();
	UPackage* Z_Construct_UPackage__Script_NaveJuego();
// End Cross Module References
	void ABonusComodin::StaticRegisterNativesABonusComodin()
	{
	}
	UClass* Z_Construct_UClass_ABonusComodin_NoRegister()
	{
		return ABonusComodin::StaticClass();
	}
	struct Z_Construct_UClass_ABonusComodin_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABonusComodin_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABonus,
		(UObject* (*)())Z_Construct_UPackage__Script_NaveJuego,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABonusComodin_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "BonusComodin.h" },
		{ "ModuleRelativePath", "BonusComodin.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABonusComodin_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABonusComodin>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABonusComodin_Statics::ClassParams = {
		&ABonusComodin::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ABonusComodin_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABonusComodin_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABonusComodin()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABonusComodin_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABonusComodin, 4271057227);
	template<> NAVEJUEGO_API UClass* StaticClass<ABonusComodin>()
	{
		return ABonusComodin::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABonusComodin(Z_Construct_UClass_ABonusComodin, &ABonusComodin::StaticClass, TEXT("/Script/NaveJuego"), TEXT("ABonusComodin"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABonusComodin);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
