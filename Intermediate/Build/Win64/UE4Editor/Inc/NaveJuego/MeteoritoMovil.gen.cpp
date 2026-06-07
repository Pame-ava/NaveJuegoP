// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NaveJuego/MeteoritoMovil.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeteoritoMovil() {}
// Cross Module References
	NAVEJUEGO_API UClass* Z_Construct_UClass_AMeteoritoMovil_NoRegister();
	NAVEJUEGO_API UClass* Z_Construct_UClass_AMeteoritoMovil();
	NAVEJUEGO_API UClass* Z_Construct_UClass_AMeteorito();
	UPackage* Z_Construct_UPackage__Script_NaveJuego();
// End Cross Module References
	void AMeteoritoMovil::StaticRegisterNativesAMeteoritoMovil()
	{
	}
	UClass* Z_Construct_UClass_AMeteoritoMovil_NoRegister()
	{
		return AMeteoritoMovil::StaticClass();
	}
	struct Z_Construct_UClass_AMeteoritoMovil_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMeteoritoMovil_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AMeteorito,
		(UObject* (*)())Z_Construct_UPackage__Script_NaveJuego,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMeteoritoMovil_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "MeteoritoMovil.h" },
		{ "ModuleRelativePath", "MeteoritoMovil.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMeteoritoMovil_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMeteoritoMovil>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMeteoritoMovil_Statics::ClassParams = {
		&AMeteoritoMovil::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AMeteoritoMovil_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMeteoritoMovil_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMeteoritoMovil()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMeteoritoMovil_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMeteoritoMovil, 1884378748);
	template<> NAVEJUEGO_API UClass* StaticClass<AMeteoritoMovil>()
	{
		return AMeteoritoMovil::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMeteoritoMovil(Z_Construct_UClass_AMeteoritoMovil, &AMeteoritoMovil::StaticClass, TEXT("/Script/NaveJuego"), TEXT("AMeteoritoMovil"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMeteoritoMovil);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
