// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAbstraction_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Abstraction;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Abstraction()
	{
		if (!Z_Registration_Info_UPackage__Script_Abstraction.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/Abstraction",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0xE1D9D1B0,
				0x2B3C9017,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Abstraction.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_Abstraction.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Abstraction(Z_Construct_UPackage__Script_Abstraction, TEXT("/Script/Abstraction"), Z_Registration_Info_UPackage__Script_Abstraction, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xE1D9D1B0, 0x2B3C9017));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
