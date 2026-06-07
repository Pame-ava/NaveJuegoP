// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NaveJuego/EnemigoJefeFinal.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemigoJefeFinal() {}
// Cross Module References
	NAVEJUEGO_API UClass* Z_Construct_UClass_AEnemigoJefeFinal_NoRegister();
	NAVEJUEGO_API UClass* Z_Construct_UClass_AEnemigoJefeFinal();
	NAVEJUEGO_API UClass* Z_Construct_UClass_AEnemigo();
	UPackage* Z_Construct_UPackage__Script_NaveJuego();
// End Cross Module References
	void AEnemigoJefeFinal::StaticRegisterNativesAEnemigoJefeFinal()
	{
	}
	UClass* Z_Construct_UClass_AEnemigoJefeFinal_NoRegister()
	{
		return AEnemigoJefeFinal::StaticClass();
	}
	struct Z_Construct_UClass_AEnemigoJefeFinal_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnemigoJefeFinal_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AEnemigo,
		(UObject* (*)())Z_Construct_UPackage__Script_NaveJuego,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemigoJefeFinal_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "EnemigoJefeFinal.h" },
		{ "ModuleRelativePath", "EnemigoJefeFinal.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemigoJefeFinal_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemigoJefeFinal>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEnemigoJefeFinal_Statics::ClassParams = {
		&AEnemigoJefeFinal::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AEnemigoJefeFinal_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigoJefeFinal_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEnemigoJefeFinal()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEnemigoJefeFinal_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEnemigoJefeFinal, 155595537);
	template<> NAVEJUEGO_API UClass* StaticClass<AEnemigoJefeFinal>()
	{
		return AEnemigoJefeFinal::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEnemigoJefeFinal(Z_Construct_UClass_AEnemigoJefeFinal, &AEnemigoJefeFinal::StaticClass, TEXT("/Script/NaveJuego"), TEXT("AEnemigoJefeFinal"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemigoJefeFinal);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
