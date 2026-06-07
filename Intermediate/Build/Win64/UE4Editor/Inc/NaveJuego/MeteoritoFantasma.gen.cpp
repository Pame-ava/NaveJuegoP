// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NaveJuego/MeteoritoFantasma.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeteoritoFantasma() {}
// Cross Module References
	NAVEJUEGO_API UClass* Z_Construct_UClass_AMeteoritoFantasma_NoRegister();
	NAVEJUEGO_API UClass* Z_Construct_UClass_AMeteoritoFantasma();
	NAVEJUEGO_API UClass* Z_Construct_UClass_AMeteorito();
	UPackage* Z_Construct_UPackage__Script_NaveJuego();
// End Cross Module References
	void AMeteoritoFantasma::StaticRegisterNativesAMeteoritoFantasma()
	{
	}
	UClass* Z_Construct_UClass_AMeteoritoFantasma_NoRegister()
	{
		return AMeteoritoFantasma::StaticClass();
	}
	struct Z_Construct_UClass_AMeteoritoFantasma_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMeteoritoFantasma_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AMeteorito,
		(UObject* (*)())Z_Construct_UPackage__Script_NaveJuego,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMeteoritoFantasma_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "MeteoritoFantasma.h" },
		{ "ModuleRelativePath", "MeteoritoFantasma.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMeteoritoFantasma_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMeteoritoFantasma>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMeteoritoFantasma_Statics::ClassParams = {
		&AMeteoritoFantasma::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AMeteoritoFantasma_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMeteoritoFantasma_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMeteoritoFantasma()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMeteoritoFantasma_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMeteoritoFantasma, 3969386029);
	template<> NAVEJUEGO_API UClass* StaticClass<AMeteoritoFantasma>()
	{
		return AMeteoritoFantasma::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMeteoritoFantasma(Z_Construct_UClass_AMeteoritoFantasma, &AMeteoritoFantasma::StaticClass, TEXT("/Script/NaveJuego"), TEXT("AMeteoritoFantasma"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMeteoritoFantasma);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
