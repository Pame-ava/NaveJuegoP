// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NaveJuego/Bonus.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBonus() {}
// Cross Module References
	NAVEJUEGO_API UClass* Z_Construct_UClass_ABonus_NoRegister();
	NAVEJUEGO_API UClass* Z_Construct_UClass_ABonus();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_NaveJuego();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ABonus::execAplicarBonus)
	{
		P_GET_OBJECT(AActor,Z_Param_Objetivo);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AplicarBonus(Z_Param_Objetivo);
		P_NATIVE_END;
	}
	void ABonus::StaticRegisterNativesABonus()
	{
		UClass* Class = ABonus::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AplicarBonus", &ABonus::execAplicarBonus },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABonus_AplicarBonus_Statics
	{
		struct Bonus_eventAplicarBonus_Parms
		{
			AActor* Objetivo;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Objetivo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABonus_AplicarBonus_Statics::NewProp_Objetivo = { "Objetivo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Bonus_eventAplicarBonus_Parms, Objetivo), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABonus_AplicarBonus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABonus_AplicarBonus_Statics::NewProp_Objetivo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABonus_AplicarBonus_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Bonus.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABonus_AplicarBonus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABonus, nullptr, "AplicarBonus", nullptr, nullptr, sizeof(Bonus_eventAplicarBonus_Parms), Z_Construct_UFunction_ABonus_AplicarBonus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABonus_AplicarBonus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABonus_AplicarBonus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABonus_AplicarBonus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABonus_AplicarBonus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABonus_AplicarBonus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABonus_NoRegister()
	{
		return ABonus::StaticClass();
	}
	struct Z_Construct_UClass_ABonus_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABonus_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_NaveJuego,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABonus_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABonus_AplicarBonus, "AplicarBonus" }, // 1141794416
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABonus_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Bonus.h" },
		{ "ModuleRelativePath", "Bonus.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABonus_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABonus>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABonus_Statics::ClassParams = {
		&ABonus::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABonus_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABonus_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABonus()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABonus_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABonus, 1177485559);
	template<> NAVEJUEGO_API UClass* StaticClass<ABonus>()
	{
		return ABonus::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABonus(Z_Construct_UClass_ABonus, &ABonus::StaticClass, TEXT("/Script/NaveJuego"), TEXT("ABonus"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABonus);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
