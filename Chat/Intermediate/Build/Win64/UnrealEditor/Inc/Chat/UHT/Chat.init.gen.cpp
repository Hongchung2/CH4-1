// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChat_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Chat;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Chat()
	{
		if (!Z_Registration_Info_UPackage__Script_Chat.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/Chat",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0xFAC5701D,
				0x4CE9743F,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Chat.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_Chat.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Chat(Z_Construct_UPackage__Script_Chat, TEXT("/Script/Chat"), Z_Registration_Info_UPackage__Script_Chat, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xFAC5701D, 0x4CE9743F));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
