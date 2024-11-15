// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TagProject_CDV/TagProject_CDVGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTagProject_CDVGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
TAGPROJECT_CDV_API UClass* Z_Construct_UClass_ATagProject_CDVGameMode();
TAGPROJECT_CDV_API UClass* Z_Construct_UClass_ATagProject_CDVGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_TagProject_CDV();
// End Cross Module References

// Begin Class ATagProject_CDVGameMode
void ATagProject_CDVGameMode::StaticRegisterNativesATagProject_CDVGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATagProject_CDVGameMode);
UClass* Z_Construct_UClass_ATagProject_CDVGameMode_NoRegister()
{
	return ATagProject_CDVGameMode::StaticClass();
}
struct Z_Construct_UClass_ATagProject_CDVGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "TagProject_CDVGameMode.h" },
		{ "ModuleRelativePath", "TagProject_CDVGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATagProject_CDVGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ATagProject_CDVGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_TagProject_CDV,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATagProject_CDVGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATagProject_CDVGameMode_Statics::ClassParams = {
	&ATagProject_CDVGameMode::StaticClass,
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
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATagProject_CDVGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ATagProject_CDVGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATagProject_CDVGameMode()
{
	if (!Z_Registration_Info_UClass_ATagProject_CDVGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATagProject_CDVGameMode.OuterSingleton, Z_Construct_UClass_ATagProject_CDVGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATagProject_CDVGameMode.OuterSingleton;
}
template<> TAGPROJECT_CDV_API UClass* StaticClass<ATagProject_CDVGameMode>()
{
	return ATagProject_CDVGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATagProject_CDVGameMode);
ATagProject_CDVGameMode::~ATagProject_CDVGameMode() {}
// End Class ATagProject_CDVGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_mateo_TagProject_TagProject_CDV_Source_TagProject_CDV_TagProject_CDVGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATagProject_CDVGameMode, ATagProject_CDVGameMode::StaticClass, TEXT("ATagProject_CDVGameMode"), &Z_Registration_Info_UClass_ATagProject_CDVGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATagProject_CDVGameMode), 1204880246U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_mateo_TagProject_TagProject_CDV_Source_TagProject_CDV_TagProject_CDVGameMode_h_3609606371(TEXT("/Script/TagProject_CDV"),
	Z_CompiledInDeferFile_FID_Users_mateo_TagProject_TagProject_CDV_Source_TagProject_CDV_TagProject_CDVGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_mateo_TagProject_TagProject_CDV_Source_TagProject_CDV_TagProject_CDVGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
