// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Abstraction/AbstractionGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAbstractionGameModeBase() {}
// Cross Module References
	ABSTRACTION_API UClass* Z_Construct_UClass_AAbstractionGameModeBase_NoRegister();
	ABSTRACTION_API UClass* Z_Construct_UClass_AAbstractionGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Abstraction();
// End Cross Module References
	void AAbstractionGameModeBase::StaticRegisterNativesAAbstractionGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAbstractionGameModeBase);
	UClass* Z_Construct_UClass_AAbstractionGameModeBase_NoRegister()
	{
		return AAbstractionGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AAbstractionGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAbstractionGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Abstraction,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAbstractionGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "AbstractionGameModeBase.h" },
		{ "ModuleRelativePath", "AbstractionGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAbstractionGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAbstractionGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AAbstractionGameModeBase_Statics::ClassParams = {
		&AAbstractionGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AAbstractionGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAbstractionGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAbstractionGameModeBase()
	{
		if (!Z_Registration_Info_UClass_AAbstractionGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAbstractionGameModeBase.OuterSingleton, Z_Construct_UClass_AAbstractionGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AAbstractionGameModeBase.OuterSingleton;
	}
	template<> ABSTRACTION_API UClass* StaticClass<AAbstractionGameModeBase>()
	{
		return AAbstractionGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAbstractionGameModeBase);
	struct Z_CompiledInDeferFile_FID_Abstraction_Source_Abstraction_AbstractionGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Abstraction_Source_Abstraction_AbstractionGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AAbstractionGameModeBase, AAbstractionGameModeBase::StaticClass, TEXT("AAbstractionGameModeBase"), &Z_Registration_Info_UClass_AAbstractionGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAbstractionGameModeBase), 372351519U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Abstraction_Source_Abstraction_AbstractionGameModeBase_h_1755438831(TEXT("/Script/Abstraction"),
		Z_CompiledInDeferFile_FID_Abstraction_Source_Abstraction_AbstractionGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Abstraction_Source_Abstraction_AbstractionGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
