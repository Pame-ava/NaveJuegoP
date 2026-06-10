// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NaveJuego/EnemigoAtacante.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemigoAtacante() {}
// Cross Module References
	NAVEJUEGO_API UClass* Z_Construct_UClass_AEnemigoAtacante_NoRegister();
	NAVEJUEGO_API UClass* Z_Construct_UClass_AEnemigoAtacante();
	NAVEJUEGO_API UClass* Z_Construct_UClass_AEnemigo();
	UPackage* Z_Construct_UPackage__Script_NaveJuego();
	NAVEJUEGO_API UClass* Z_Construct_UClass_UObservador_NoRegister();
// End Cross Module References
	void AEnemigoAtacante::StaticRegisterNativesAEnemigoAtacante()
	{
	}
	UClass* Z_Construct_UClass_AEnemigoAtacante_NoRegister()
	{
		return AEnemigoAtacante::StaticClass();
	}
	struct Z_Construct_UClass_AEnemigoAtacante_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IntervaloDisparo_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_IntervaloDisparo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CantidadProyectiles_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CantidadProyectiles;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnemigoAtacante_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AEnemigo,
		(UObject* (*)())Z_Construct_UPackage__Script_NaveJuego,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemigoAtacante_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "EnemigoAtacante.h" },
		{ "ModuleRelativePath", "EnemigoAtacante.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemigoAtacante_Statics::NewProp_IntervaloDisparo_MetaData[] = {
		{ "Category", "Ataque" },
		{ "ModuleRelativePath", "EnemigoAtacante.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemigoAtacante_Statics::NewProp_IntervaloDisparo = { "IntervaloDisparo", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemigoAtacante, IntervaloDisparo), METADATA_PARAMS(Z_Construct_UClass_AEnemigoAtacante_Statics::NewProp_IntervaloDisparo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigoAtacante_Statics::NewProp_IntervaloDisparo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemigoAtacante_Statics::NewProp_CantidadProyectiles_MetaData[] = {
		{ "Category", "Ataque" },
		{ "Comment", "// cada  segundos\n" },
		{ "ModuleRelativePath", "EnemigoAtacante.h" },
		{ "ToolTip", "cada  segundos" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AEnemigoAtacante_Statics::NewProp_CantidadProyectiles = { "CantidadProyectiles", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemigoAtacante, CantidadProyectiles), METADATA_PARAMS(Z_Construct_UClass_AEnemigoAtacante_Statics::NewProp_CantidadProyectiles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigoAtacante_Statics::NewProp_CantidadProyectiles_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEnemigoAtacante_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemigoAtacante_Statics::NewProp_IntervaloDisparo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemigoAtacante_Statics::NewProp_CantidadProyectiles,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AEnemigoAtacante_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UObservador_NoRegister, (int32)VTABLE_OFFSET(AEnemigoAtacante, IObservador), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemigoAtacante_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemigoAtacante>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEnemigoAtacante_Statics::ClassParams = {
		&AEnemigoAtacante::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AEnemigoAtacante_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigoAtacante_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AEnemigoAtacante_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigoAtacante_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEnemigoAtacante()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEnemigoAtacante_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEnemigoAtacante, 4095589774);
	template<> NAVEJUEGO_API UClass* StaticClass<AEnemigoAtacante>()
	{
		return AEnemigoAtacante::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEnemigoAtacante(Z_Construct_UClass_AEnemigoAtacante, &AEnemigoAtacante::StaticClass, TEXT("/Script/NaveJuego"), TEXT("AEnemigoAtacante"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemigoAtacante);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
