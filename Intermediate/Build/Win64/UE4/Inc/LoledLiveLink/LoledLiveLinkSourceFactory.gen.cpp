// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LoledLiveLink/Private/LoledLiveLinkSourceFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLoledLiveLinkSourceFactory() {}
// Cross Module References
	LOLEDLIVELINK_API UClass* Z_Construct_UClass_ULoledLiveLinkSourceFactory_NoRegister();
	LOLEDLIVELINK_API UClass* Z_Construct_UClass_ULoledLiveLinkSourceFactory();
	LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkSourceFactory();
	UPackage* Z_Construct_UPackage__Script_LoledLiveLink();
// End Cross Module References
	void ULoledLiveLinkSourceFactory::StaticRegisterNativesULoledLiveLinkSourceFactory()
	{
	}
	UClass* Z_Construct_UClass_ULoledLiveLinkSourceFactory_NoRegister()
	{
		return ULoledLiveLinkSourceFactory::StaticClass();
	}
	struct Z_Construct_UClass_ULoledLiveLinkSourceFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULoledLiveLinkSourceFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULiveLinkSourceFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_LoledLiveLink,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoledLiveLinkSourceFactory_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "LoledLiveLinkSourceFactory.h" },
		{ "ModuleRelativePath", "Private/LoledLiveLinkSourceFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULoledLiveLinkSourceFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULoledLiveLinkSourceFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULoledLiveLinkSourceFactory_Statics::ClassParams = {
		&ULoledLiveLinkSourceFactory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULoledLiveLinkSourceFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULoledLiveLinkSourceFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULoledLiveLinkSourceFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULoledLiveLinkSourceFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULoledLiveLinkSourceFactory, 3072941989);
	template<> LOLEDLIVELINK_API UClass* StaticClass<ULoledLiveLinkSourceFactory>()
	{
		return ULoledLiveLinkSourceFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULoledLiveLinkSourceFactory(Z_Construct_UClass_ULoledLiveLinkSourceFactory, &ULoledLiveLinkSourceFactory::StaticClass, TEXT("/Script/LoledLiveLink"), TEXT("ULoledLiveLinkSourceFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULoledLiveLinkSourceFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
