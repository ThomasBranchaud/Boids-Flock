// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Flocking/FlockingGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFlockingGameModeBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	FLOCKING_API UClass* Z_Construct_UClass_AFlockingGameModeBase();
	FLOCKING_API UClass* Z_Construct_UClass_AFlockingGameModeBase_NoRegister();
	FLOCKING_API UClass* Z_Construct_UClass_UFlockingManager_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Flocking();
// End Cross Module References
	void AFlockingGameModeBase::StaticRegisterNativesAFlockingGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFlockingGameModeBase);
	UClass* Z_Construct_UClass_AFlockingGameModeBase_NoRegister()
	{
		return AFlockingGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AFlockingGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Speed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AgentMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AgentMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Manager_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Manager;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFlockingGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Flocking,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlockingGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "FlockingGameModeBase.h" },
		{ "ModuleRelativePath", "FlockingGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlockingGameModeBase_Statics::NewProp_Speed_MetaData[] = {
		{ "Category", "FlockingGameModeBase" },
		{ "ClampMax", "20.0" },
		{ "ClampMin", "-20.0" },
		{ "ModuleRelativePath", "FlockingGameModeBase.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFlockingGameModeBase_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AFlockingGameModeBase, Speed), METADATA_PARAMS(Z_Construct_UClass_AFlockingGameModeBase_Statics::NewProp_Speed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlockingGameModeBase_Statics::NewProp_Speed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlockingGameModeBase_Statics::NewProp_AgentMesh_MetaData[] = {
		{ "Category", "FlockingGameModeBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "FlockingGameModeBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFlockingGameModeBase_Statics::NewProp_AgentMesh = { "AgentMesh", nullptr, (EPropertyFlags)0x0040000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AFlockingGameModeBase, AgentMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFlockingGameModeBase_Statics::NewProp_AgentMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlockingGameModeBase_Statics::NewProp_AgentMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlockingGameModeBase_Statics::NewProp_Manager_MetaData[] = {
		{ "ModuleRelativePath", "FlockingGameModeBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFlockingGameModeBase_Statics::NewProp_Manager = { "Manager", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AFlockingGameModeBase, Manager), Z_Construct_UClass_UFlockingManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFlockingGameModeBase_Statics::NewProp_Manager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlockingGameModeBase_Statics::NewProp_Manager_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFlockingGameModeBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlockingGameModeBase_Statics::NewProp_Speed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlockingGameModeBase_Statics::NewProp_AgentMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlockingGameModeBase_Statics::NewProp_Manager,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFlockingGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFlockingGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AFlockingGameModeBase_Statics::ClassParams = {
		&AFlockingGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AFlockingGameModeBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AFlockingGameModeBase_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AFlockingGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFlockingGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFlockingGameModeBase()
	{
		if (!Z_Registration_Info_UClass_AFlockingGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFlockingGameModeBase.OuterSingleton, Z_Construct_UClass_AFlockingGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AFlockingGameModeBase.OuterSingleton;
	}
	template<> FLOCKING_API UClass* StaticClass<AFlockingGameModeBase>()
	{
		return AFlockingGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFlockingGameModeBase);
	AFlockingGameModeBase::~AFlockingGameModeBase() {}
	struct Z_CompiledInDeferFile_FID_Users_tabranchaud_Documents_Unreal_Projects_Flocking_Source_Flocking_FlockingGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_tabranchaud_Documents_Unreal_Projects_Flocking_Source_Flocking_FlockingGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AFlockingGameModeBase, AFlockingGameModeBase::StaticClass, TEXT("AFlockingGameModeBase"), &Z_Registration_Info_UClass_AFlockingGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFlockingGameModeBase), 1205862635U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_tabranchaud_Documents_Unreal_Projects_Flocking_Source_Flocking_FlockingGameModeBase_h_258562466(TEXT("/Script/Flocking"),
		Z_CompiledInDeferFile_FID_Users_tabranchaud_Documents_Unreal_Projects_Flocking_Source_Flocking_FlockingGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_tabranchaud_Documents_Unreal_Projects_Flocking_Source_Flocking_FlockingGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
