// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LoledLiveLink/Public/XDData_Client.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeXDData_Client() {}
// Cross Module References
	LOLEDLIVELINK_API UScriptStruct* Z_Construct_UScriptStruct_FXDShadingData();
	UPackage* Z_Construct_UPackage__Script_LoledLiveLink();
	LOLEDLIVELINK_API UScriptStruct* Z_Construct_UScriptStruct_FXDDistortionData();
	LOLEDLIVELINK_API UScriptStruct* Z_Construct_UScriptStruct_FXDHeightData();
	LOLEDLIVELINK_API UScriptStruct* Z_Construct_UScriptStruct_FXDLensData();
	LOLEDLIVELINK_API UClass* Z_Construct_UClass_AXDData_Client_NoRegister();
	LOLEDLIVELINK_API UClass* Z_Construct_UClass_AXDData_Client();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkBaseFrameData();
// End Cross Module References
class UScriptStruct* FXDShadingData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LOLEDLIVELINK_API uint32 Get_Z_Construct_UScriptStruct_FXDShadingData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FXDShadingData, Z_Construct_UPackage__Script_LoledLiveLink(), TEXT("XDShadingData"), sizeof(FXDShadingData), Get_Z_Construct_UScriptStruct_FXDShadingData_Hash());
	}
	return Singleton;
}
template<> LOLEDLIVELINK_API UScriptStruct* StaticStruct<FXDShadingData>()
{
	return FXDShadingData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FXDShadingData(FXDShadingData::StaticStruct, TEXT("/Script/LoledLiveLink"), TEXT("XDShadingData"), false, nullptr, nullptr);
static struct FScriptStruct_LoledLiveLink_StaticRegisterNativesFXDShadingData
{
	FScriptStruct_LoledLiveLink_StaticRegisterNativesFXDShadingData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("XDShadingData")),new UScriptStruct::TCppStructOps<FXDShadingData>);
	}
} ScriptStruct_LoledLiveLink_StaticRegisterNativesFXDShadingData;
	struct Z_Construct_UScriptStruct_FXDShadingData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShadingData1_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ShadingData1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShadingData2_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ShadingData2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShadingData3_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ShadingData3;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShadingData4_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ShadingData4;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShadingData5_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ShadingData5;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShadingData6_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ShadingData6;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FXDShadingData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/XDData_Client.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FXDShadingData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FXDShadingData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FXDShadingData_Statics::NewProp_ShadingData1_MetaData[] = {
		{ "Category", "XDShadingData" },
		{ "ModuleRelativePath", "Public/XDData_Client.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FXDShadingData_Statics::NewProp_ShadingData1 = { "ShadingData1", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FXDShadingData, ShadingData1), METADATA_PARAMS(Z_Construct_UScriptStruct_FXDShadingData_Statics::NewProp_ShadingData1_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FXDShadingData_Statics::NewProp_ShadingData1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FXDShadingData_Statics::NewProp_ShadingData2_MetaData[] = {
		{ "Category", "XDShadingData" },
		{ "ModuleRelativePath", "Public/XDData_Client.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FXDShadingData_Statics::NewProp_ShadingData2 = { "ShadingData2", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FXDShadingData, ShadingData2), METADATA_PARAMS(Z_Construct_UScriptStruct_FXDShadingData_Statics::NewProp_ShadingData2_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FXDShadingData_Statics::NewProp_ShadingData2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FXDShadingData_Statics::NewProp_ShadingData3_MetaData[] = {
		{ "Category", "XDShadingData" },
		{ "ModuleRelativePath", "Public/XDData_Client.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FXDShadingData_Statics::NewProp_ShadingData3 = { "ShadingData3", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FXDShadingData, ShadingData3), METADATA_PARAMS(Z_Construct_UScriptStruct_FXDShadingData_Statics::NewProp_ShadingData3_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FXDShadingData_Statics::NewProp_ShadingData3_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FXDShadingData_Statics::NewProp_ShadingData4_MetaData[] = {
		{ "Category", "XDShadingData" },
		{ "ModuleRelativePath", "Public/XDData_Client.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FXDShadingData_Statics::NewProp_ShadingData4 = { "ShadingData4", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FXDShadingData, ShadingData4), METADATA_PARAMS(Z_Construct_UScriptStruct_FXDShadingData_Statics::NewProp_ShadingData4_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FXDShadingData_Statics::NewProp_ShadingData4_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FXDShadingData_Statics::NewProp_ShadingData5_MetaData[] = {
		{ "Category", "XDShadingData" },
		{ "ModuleRelativePath", "Public/XDData_Client.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FXDShadingData_Statics::NewProp_ShadingData5 = { "ShadingData5", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FXDShadingData, ShadingData5), METADATA_PARAMS(Z_Construct_UScriptStruct_FXDShadingData_Statics::NewProp_ShadingData5_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FXDShadingData_Statics::NewProp_ShadingData5_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FXDShadingData_Statics::NewProp_ShadingData6_MetaData[] = {
		{ "Category", "XDShadingData" },
		{ "ModuleRelativePath", "Public/XDData_Client.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FXDShadingData_Statics::NewProp_ShadingData6 = { "ShadingData6", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FXDShadingData, ShadingData6), METADATA_PARAMS(Z_Construct_UScriptStruct_FXDShadingData_Statics::NewProp_ShadingData6_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FXDShadingData_Statics::NewProp_ShadingData6_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FXDShadingData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FXDShadingData_Statics::NewProp_ShadingData1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FXDShadingData_Statics::NewProp_ShadingData2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FXDShadingData_Statics::NewProp_ShadingData3,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FXDShadingData_Statics::NewProp_ShadingData4,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FXDShadingData_Statics::NewProp_ShadingData5,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FXDShadingData_Statics::NewProp_ShadingData6,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FXDShadingData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LoledLiveLink,
		nullptr,
		&NewStructOps,
		"XDShadingData",
		sizeof(FXDShadingData),
		alignof(FXDShadingData),
		Z_Construct_UScriptStruct_FXDShadingData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FXDShadingData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FXDShadingData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FXDShadingData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FXDShadingData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FXDShadingData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_LoledLiveLink();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("XDShadingData"), sizeof(FXDShadingData), Get_Z_Construct_UScriptStruct_FXDShadingData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FXDShadingData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FXDShadingData_Hash() { return 4136151931U; }
class UScriptStruct* FXDDistortionData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LOLEDLIVELINK_API uint32 Get_Z_Construct_UScriptStruct_FXDDistortionData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FXDDistortionData, Z_Construct_UPackage__Script_LoledLiveLink(), TEXT("XDDistortionData"), sizeof(FXDDistortionData), Get_Z_Construct_UScriptStruct_FXDDistortionData_Hash());
	}
	return Singleton;
}
template<> LOLEDLIVELINK_API UScriptStruct* StaticStruct<FXDDistortionData>()
{
	return FXDDistortionData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FXDDistortionData(FXDDistortionData::StaticStruct, TEXT("/Script/LoledLiveLink"), TEXT("XDDistortionData"), false, nullptr, nullptr);
static struct FScriptStruct_LoledLiveLink_StaticRegisterNativesFXDDistortionData
{
	FScriptStruct_LoledLiveLink_StaticRegisterNativesFXDDistortionData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("XDDistortionData")),new UScriptStruct::TCppStructOps<FXDDistortionData>);
	}
} ScriptStruct_LoledLiveLink_StaticRegisterNativesFXDDistortionData;
	struct Z_Construct_UScriptStruct_FXDDistortionData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_K1_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_K1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_K2_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_K2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_P1_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_P1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_P2_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_P2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_K3_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_K3;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_K4_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_K4;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_K5_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_K5;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_K6_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_K6;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Cx_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Cx;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Cy_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Cy;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FXDDistortionData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/XDData_Client.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FXDDistortionData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FXDDistortionData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FXDDistortionData_Statics::NewProp_K1_MetaData[] = {
		{ "Category", "XDDistortionData" },
		{ "ModuleRelativePath", "Public/XDData_Client.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FXDDistortionData_Statics::NewProp_K1 = { "K1", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FXDDistortionData, K1), METADATA_PARAMS(Z_Construct_UScriptStruct_FXDDistortionData_Statics::NewProp_K1_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FXDDistortionData_Statics::NewProp_K1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FXDDistortionData_Statics::NewProp_K2_MetaData[] = {
		{ "Category", "XDDistortionData" },
		{ "ModuleRelativePath", "Public/XDData_Client.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FXDDistortionData_Statics::NewProp_K2 = { "K2", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FXDDistortionData, K2), METADATA_PARAMS(Z_Construct_UScriptStruct_FXDDistortionData_Statics::NewProp_K2_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FXDDistortionData_Statics::NewProp_K2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FXDDistortionData_Statics::NewProp_P1_MetaData[] = {
		{ "Category", "XDDistortionData" },
		{ "ModuleRelativePath", "Public/XDData_Client.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FXDDistortionData_Statics::NewProp_P1 = { "P1", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FXDDistortionData, P1), METADATA_PARAMS(Z_Construct_UScriptStruct_FXDDistortionData_Statics::NewProp_P1_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FXDDistortionData_Statics::NewProp_P1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FXDDistortionData_Statics::NewProp_P2_MetaData[] = {
		{ "Category", "XDDistortionData" },
		{ "ModuleRelativePath", "Public/XDData_Client.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FXDDistortionData_Statics::NewProp_P2 = { "P2", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FXDDistortionData, P2), METADATA_PARAMS(Z_Construct_UScriptStruct_FXDDistortionData_Statics::NewProp_P2_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FXDDistortionData_Statics::NewProp_P2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FXDDistortionData_Statics::NewProp_K3_MetaData[] = {
		{ "Category", "XDDistortionData" },
		{ "ModuleRelativePath", "Public/XDData_Client.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FXDDistortionData_Statics::NewProp_K3 = { "K3", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FXDDistortionData, K3), METADATA_PARAMS(Z_Construct_UScriptStruct_FXDDistortionData_Statics::NewProp_K3_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FXDDistortionData_Statics::NewProp_K3_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FXDDistortionData_Statics::NewProp_K4_MetaData[] = {
		{ "Category", "XDDistortionData" },
		{ "ModuleRelativePath", "Public/XDData_Client.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FXDDistortionData_Statics::NewProp_K4 = { "K4", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FXDDistortionData, K4), METADATA_PARAMS(Z_Construct_UScriptStruct_FXDDistortionData_Statics::NewProp_K4_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FXDDistortionData_Statics::NewProp_K4_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FXDDistortionData_Statics::NewProp_K5_MetaData[] = {
		{ "Category", "XDDistortionData" },
		{ "ModuleRelativePath", "Public/XDData_Client.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FXDDistortionData_Statics::NewProp_K5 = { "K5", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FXDDistortionData, K5), METADATA_PARAMS(Z_Construct_UScriptStruct_FXDDistortionData_Statics::NewProp_K5_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FXDDistortionData_Statics::NewProp_K5_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FXDDistortionData_Statics::NewProp_K6_MetaData[] = {
		{ "Category", "XDDistortionData" },
		{ "ModuleRelativePath", "Public/XDData_Client.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FXDDistortionData_Statics::NewProp_K6 = { "K6", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FXDDistortionData, K6), METADATA_PARAMS(Z_Construct_UScriptStruct_FXDDistortionData_Statics::NewProp_K6_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FXDDistortionData_Statics::NewProp_K6_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FXDDistortionData_Statics::NewProp_Cx_MetaData[] = {
		{ "Category", "XDDistortionData" },
		{ "ModuleRelativePath", "Public/XDData_Client.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FXDDistortionData_Statics::NewProp_Cx = { "Cx", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FXDDistortionData, Cx), METADATA_PARAMS(Z_Construct_UScriptStruct_FXDDistortionData_Statics::NewProp_Cx_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FXDDistortionData_Statics::NewProp_Cx_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FXDDistortionData_Statics::NewProp_Cy_MetaData[] = {
		{ "Category", "XDDistortionData" },
		{ "ModuleRelativePath", "Public/XDData_Client.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FXDDistortionData_Statics::NewProp_Cy = { "Cy", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FXDDistortionData, Cy), METADATA_PARAMS(Z_Construct_UScriptStruct_FXDDistortionData_Statics::NewProp_Cy_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FXDDistortionData_Statics::NewProp_Cy_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FXDDistortionData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FXDDistortionData_Statics::NewProp_K1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FXDDistortionData_Statics::NewProp_K2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FXDDistortionData_Statics::NewProp_P1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FXDDistortionData_Statics::NewProp_P2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FXDDistortionData_Statics::NewProp_K3,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FXDDistortionData_Statics::NewProp_K4,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FXDDistortionData_Statics::NewProp_K5,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FXDDistortionData_Statics::NewProp_K6,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FXDDistortionData_Statics::NewProp_Cx,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FXDDistortionData_Statics::NewProp_Cy,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FXDDistortionData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LoledLiveLink,
		nullptr,
		&NewStructOps,
		"XDDistortionData",
		sizeof(FXDDistortionData),
		alignof(FXDDistortionData),
		Z_Construct_UScriptStruct_FXDDistortionData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FXDDistortionData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FXDDistortionData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FXDDistortionData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FXDDistortionData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FXDDistortionData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_LoledLiveLink();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("XDDistortionData"), sizeof(FXDDistortionData), Get_Z_Construct_UScriptStruct_FXDDistortionData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FXDDistortionData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FXDDistortionData_Hash() { return 2988494837U; }
class UScriptStruct* FXDHeightData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LOLEDLIVELINK_API uint32 Get_Z_Construct_UScriptStruct_FXDHeightData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FXDHeightData, Z_Construct_UPackage__Script_LoledLiveLink(), TEXT("XDHeightData"), sizeof(FXDHeightData), Get_Z_Construct_UScriptStruct_FXDHeightData_Hash());
	}
	return Singleton;
}
template<> LOLEDLIVELINK_API UScriptStruct* StaticStruct<FXDHeightData>()
{
	return FXDHeightData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FXDHeightData(FXDHeightData::StaticStruct, TEXT("/Script/LoledLiveLink"), TEXT("XDHeightData"), false, nullptr, nullptr);
static struct FScriptStruct_LoledLiveLink_StaticRegisterNativesFXDHeightData
{
	FScriptStruct_LoledLiveLink_StaticRegisterNativesFXDHeightData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("XDHeightData")),new UScriptStruct::TCppStructOps<FXDHeightData>);
	}
} ScriptStruct_LoledLiveLink_StaticRegisterNativesFXDHeightData;
	struct Z_Construct_UScriptStruct_FXDHeightData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImageHeight1_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ImageHeight1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImageHeight2_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ImageHeight2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImageHeight3_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ImageHeight3;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImageHeight4_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ImageHeight4;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImageHeight5_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ImageHeight5;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImageHeight6_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ImageHeight6;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FXDHeightData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/XDData_Client.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FXDHeightData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FXDHeightData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FXDHeightData_Statics::NewProp_ImageHeight1_MetaData[] = {
		{ "Category", "XDHeightData" },
		{ "ModuleRelativePath", "Public/XDData_Client.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FXDHeightData_Statics::NewProp_ImageHeight1 = { "ImageHeight1", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FXDHeightData, ImageHeight1), METADATA_PARAMS(Z_Construct_UScriptStruct_FXDHeightData_Statics::NewProp_ImageHeight1_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FXDHeightData_Statics::NewProp_ImageHeight1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FXDHeightData_Statics::NewProp_ImageHeight2_MetaData[] = {
		{ "Category", "XDHeightData" },
		{ "ModuleRelativePath", "Public/XDData_Client.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FXDHeightData_Statics::NewProp_ImageHeight2 = { "ImageHeight2", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FXDHeightData, ImageHeight2), METADATA_PARAMS(Z_Construct_UScriptStruct_FXDHeightData_Statics::NewProp_ImageHeight2_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FXDHeightData_Statics::NewProp_ImageHeight2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FXDHeightData_Statics::NewProp_ImageHeight3_MetaData[] = {
		{ "Category", "XDHeightData" },
		{ "ModuleRelativePath", "Public/XDData_Client.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FXDHeightData_Statics::NewProp_ImageHeight3 = { "ImageHeight3", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FXDHeightData, ImageHeight3), METADATA_PARAMS(Z_Construct_UScriptStruct_FXDHeightData_Statics::NewProp_ImageHeight3_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FXDHeightData_Statics::NewProp_ImageHeight3_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FXDHeightData_Statics::NewProp_ImageHeight4_MetaData[] = {
		{ "Category", "XDHeightData" },
		{ "ModuleRelativePath", "Public/XDData_Client.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FXDHeightData_Statics::NewProp_ImageHeight4 = { "ImageHeight4", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FXDHeightData, ImageHeight4), METADATA_PARAMS(Z_Construct_UScriptStruct_FXDHeightData_Statics::NewProp_ImageHeight4_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FXDHeightData_Statics::NewProp_ImageHeight4_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FXDHeightData_Statics::NewProp_ImageHeight5_MetaData[] = {
		{ "Category", "XDHeightData" },
		{ "ModuleRelativePath", "Public/XDData_Client.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FXDHeightData_Statics::NewProp_ImageHeight5 = { "ImageHeight5", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FXDHeightData, ImageHeight5), METADATA_PARAMS(Z_Construct_UScriptStruct_FXDHeightData_Statics::NewProp_ImageHeight5_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FXDHeightData_Statics::NewProp_ImageHeight5_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FXDHeightData_Statics::NewProp_ImageHeight6_MetaData[] = {
		{ "Category", "XDHeightData" },
		{ "ModuleRelativePath", "Public/XDData_Client.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FXDHeightData_Statics::NewProp_ImageHeight6 = { "ImageHeight6", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FXDHeightData, ImageHeight6), METADATA_PARAMS(Z_Construct_UScriptStruct_FXDHeightData_Statics::NewProp_ImageHeight6_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FXDHeightData_Statics::NewProp_ImageHeight6_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FXDHeightData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FXDHeightData_Statics::NewProp_ImageHeight1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FXDHeightData_Statics::NewProp_ImageHeight2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FXDHeightData_Statics::NewProp_ImageHeight3,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FXDHeightData_Statics::NewProp_ImageHeight4,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FXDHeightData_Statics::NewProp_ImageHeight5,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FXDHeightData_Statics::NewProp_ImageHeight6,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FXDHeightData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LoledLiveLink,
		nullptr,
		&NewStructOps,
		"XDHeightData",
		sizeof(FXDHeightData),
		alignof(FXDHeightData),
		Z_Construct_UScriptStruct_FXDHeightData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FXDHeightData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FXDHeightData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FXDHeightData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FXDHeightData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FXDHeightData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_LoledLiveLink();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("XDHeightData"), sizeof(FXDHeightData), Get_Z_Construct_UScriptStruct_FXDHeightData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FXDHeightData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FXDHeightData_Hash() { return 3489199197U; }
class UScriptStruct* FXDLensData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LOLEDLIVELINK_API uint32 Get_Z_Construct_UScriptStruct_FXDLensData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FXDLensData, Z_Construct_UPackage__Script_LoledLiveLink(), TEXT("XDLensData"), sizeof(FXDLensData), Get_Z_Construct_UScriptStruct_FXDLensData_Hash());
	}
	return Singleton;
}
template<> LOLEDLIVELINK_API UScriptStruct* StaticStruct<FXDLensData>()
{
	return FXDLensData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FXDLensData(FXDLensData::StaticStruct, TEXT("/Script/LoledLiveLink"), TEXT("XDLensData"), false, nullptr, nullptr);
static struct FScriptStruct_LoledLiveLink_StaticRegisterNativesFXDLensData
{
	FScriptStruct_LoledLiveLink_StaticRegisterNativesFXDLensData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("XDLensData")),new UScriptStruct::TCppStructOps<FXDLensData>);
	}
} ScriptStruct_LoledLiveLink_StaticRegisterNativesFXDLensData;
	struct Z_Construct_UScriptStruct_FXDLensData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Focus_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Focus;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Iris_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Iris;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FocalLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FocalLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EntrancePupil_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EntrancePupil;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HyperFocalDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HyperFocalDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CloseFocus_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CloseFocus;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FarFocus_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FarFocus;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HorizontalFOV_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HorizontalFOV;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Manufacturer_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Manufacturer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SerialNumber_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SerialNumber;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LensOwner_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LensOwner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LensFirmware_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LensFirmware;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FXDLensData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/XDData_Client.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FXDLensData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FXDLensData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FXDLensData_Statics::NewProp_Focus_MetaData[] = {
		{ "Category", "XDLensData" },
		{ "ModuleRelativePath", "Public/XDData_Client.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FXDLensData_Statics::NewProp_Focus = { "Focus", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FXDLensData, Focus), METADATA_PARAMS(Z_Construct_UScriptStruct_FXDLensData_Statics::NewProp_Focus_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FXDLensData_Statics::NewProp_Focus_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FXDLensData_Statics::NewProp_Iris_MetaData[] = {
		{ "Category", "XDLensData" },
		{ "ModuleRelativePath", "Public/XDData_Client.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FXDLensData_Statics::NewProp_Iris = { "Iris", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FXDLensData, Iris), METADATA_PARAMS(Z_Construct_UScriptStruct_FXDLensData_Statics::NewProp_Iris_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FXDLensData_Statics::NewProp_Iris_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FXDLensData_Statics::NewProp_FocalLength_MetaData[] = {
		{ "Category", "XDLensData" },
		{ "ModuleRelativePath", "Public/XDData_Client.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FXDLensData_Statics::NewProp_FocalLength = { "FocalLength", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FXDLensData, FocalLength), METADATA_PARAMS(Z_Construct_UScriptStruct_FXDLensData_Statics::NewProp_FocalLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FXDLensData_Statics::NewProp_FocalLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FXDLensData_Statics::NewProp_EntrancePupil_MetaData[] = {
		{ "Category", "XDLensData" },
		{ "ModuleRelativePath", "Public/XDData_Client.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FXDLensData_Statics::NewProp_EntrancePupil = { "EntrancePupil", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FXDLensData, EntrancePupil), METADATA_PARAMS(Z_Construct_UScriptStruct_FXDLensData_Statics::NewProp_EntrancePupil_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FXDLensData_Statics::NewProp_EntrancePupil_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FXDLensData_Statics::NewProp_HyperFocalDistance_MetaData[] = {
		{ "Category", "XDLensData" },
		{ "ModuleRelativePath", "Public/XDData_Client.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FXDLensData_Statics::NewProp_HyperFocalDistance = { "HyperFocalDistance", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FXDLensData, HyperFocalDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FXDLensData_Statics::NewProp_HyperFocalDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FXDLensData_Statics::NewProp_HyperFocalDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FXDLensData_Statics::NewProp_CloseFocus_MetaData[] = {
		{ "Category", "XDLensData" },
		{ "ModuleRelativePath", "Public/XDData_Client.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FXDLensData_Statics::NewProp_CloseFocus = { "CloseFocus", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FXDLensData, CloseFocus), METADATA_PARAMS(Z_Construct_UScriptStruct_FXDLensData_Statics::NewProp_CloseFocus_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FXDLensData_Statics::NewProp_CloseFocus_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FXDLensData_Statics::NewProp_FarFocus_MetaData[] = {
		{ "Category", "XDLensData" },
		{ "ModuleRelativePath", "Public/XDData_Client.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FXDLensData_Statics::NewProp_FarFocus = { "FarFocus", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FXDLensData, FarFocus), METADATA_PARAMS(Z_Construct_UScriptStruct_FXDLensData_Statics::NewProp_FarFocus_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FXDLensData_Statics::NewProp_FarFocus_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FXDLensData_Statics::NewProp_HorizontalFOV_MetaData[] = {
		{ "Category", "XDLensData" },
		{ "ModuleRelativePath", "Public/XDData_Client.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FXDLensData_Statics::NewProp_HorizontalFOV = { "HorizontalFOV", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FXDLensData, HorizontalFOV), METADATA_PARAMS(Z_Construct_UScriptStruct_FXDLensData_Statics::NewProp_HorizontalFOV_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FXDLensData_Statics::NewProp_HorizontalFOV_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FXDLensData_Statics::NewProp_Manufacturer_MetaData[] = {
		{ "Category", "XDLensData" },
		{ "ModuleRelativePath", "Public/XDData_Client.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FXDLensData_Statics::NewProp_Manufacturer = { "Manufacturer", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FXDLensData, Manufacturer), METADATA_PARAMS(Z_Construct_UScriptStruct_FXDLensData_Statics::NewProp_Manufacturer_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FXDLensData_Statics::NewProp_Manufacturer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FXDLensData_Statics::NewProp_SerialNumber_MetaData[] = {
		{ "Category", "XDLensData" },
		{ "ModuleRelativePath", "Public/XDData_Client.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FXDLensData_Statics::NewProp_SerialNumber = { "SerialNumber", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FXDLensData, SerialNumber), METADATA_PARAMS(Z_Construct_UScriptStruct_FXDLensData_Statics::NewProp_SerialNumber_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FXDLensData_Statics::NewProp_SerialNumber_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FXDLensData_Statics::NewProp_LensOwner_MetaData[] = {
		{ "Category", "XDLensData" },
		{ "ModuleRelativePath", "Public/XDData_Client.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FXDLensData_Statics::NewProp_LensOwner = { "LensOwner", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FXDLensData, LensOwner), METADATA_PARAMS(Z_Construct_UScriptStruct_FXDLensData_Statics::NewProp_LensOwner_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FXDLensData_Statics::NewProp_LensOwner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FXDLensData_Statics::NewProp_LensFirmware_MetaData[] = {
		{ "Category", "XDLensData" },
		{ "ModuleRelativePath", "Public/XDData_Client.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FXDLensData_Statics::NewProp_LensFirmware = { "LensFirmware", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FXDLensData, LensFirmware), METADATA_PARAMS(Z_Construct_UScriptStruct_FXDLensData_Statics::NewProp_LensFirmware_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FXDLensData_Statics::NewProp_LensFirmware_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FXDLensData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FXDLensData_Statics::NewProp_Focus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FXDLensData_Statics::NewProp_Iris,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FXDLensData_Statics::NewProp_FocalLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FXDLensData_Statics::NewProp_EntrancePupil,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FXDLensData_Statics::NewProp_HyperFocalDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FXDLensData_Statics::NewProp_CloseFocus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FXDLensData_Statics::NewProp_FarFocus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FXDLensData_Statics::NewProp_HorizontalFOV,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FXDLensData_Statics::NewProp_Manufacturer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FXDLensData_Statics::NewProp_SerialNumber,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FXDLensData_Statics::NewProp_LensOwner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FXDLensData_Statics::NewProp_LensFirmware,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FXDLensData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LoledLiveLink,
		nullptr,
		&NewStructOps,
		"XDLensData",
		sizeof(FXDLensData),
		alignof(FXDLensData),
		Z_Construct_UScriptStruct_FXDLensData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FXDLensData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FXDLensData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FXDLensData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FXDLensData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FXDLensData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_LoledLiveLink();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("XDLensData"), sizeof(FXDLensData), Get_Z_Construct_UScriptStruct_FXDLensData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FXDLensData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FXDLensData_Hash() { return 1318065702U; }
	DEFINE_FUNCTION(AXDData_Client::execMakeFxFy)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_focalLength);
		P_GET_PROPERTY(FFloatProperty,Z_Param_SensorResX);
		P_GET_PROPERTY(FFloatProperty,Z_Param_SensorResY);
		P_GET_PROPERTY(FFloatProperty,Z_Param_SensorSizeX);
		P_GET_PROPERTY(FFloatProperty,Z_Param_SensorSizeY);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector2D*)Z_Param__Result=P_THIS->MakeFxFy(Z_Param_focalLength,Z_Param_SensorResX,Z_Param_SensorResY,Z_Param_SensorSizeX,Z_Param_SensorSizeY);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AXDData_Client::execParseXDShadingData)
	{
		P_GET_STRUCT(FLiveLinkBaseFrameData,Z_Param_data);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FXDShadingData*)Z_Param__Result=P_THIS->ParseXDShadingData(Z_Param_data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AXDData_Client::execParseXDDistortionData)
	{
		P_GET_STRUCT(FLiveLinkBaseFrameData,Z_Param_data);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FXDDistortionData*)Z_Param__Result=P_THIS->ParseXDDistortionData(Z_Param_data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AXDData_Client::execParseXDHeightData)
	{
		P_GET_STRUCT(FLiveLinkBaseFrameData,Z_Param_data);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FXDHeightData*)Z_Param__Result=P_THIS->ParseXDHeightData(Z_Param_data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AXDData_Client::execParseXDLensData)
	{
		P_GET_STRUCT(FLiveLinkBaseFrameData,Z_Param_data);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FXDLensData*)Z_Param__Result=P_THIS->ParseXDLensData(Z_Param_data);
		P_NATIVE_END;
	}
	void AXDData_Client::StaticRegisterNativesAXDData_Client()
	{
		UClass* Class = AXDData_Client::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "MakeFxFy", &AXDData_Client::execMakeFxFy },
			{ "ParseXDDistortionData", &AXDData_Client::execParseXDDistortionData },
			{ "ParseXDHeightData", &AXDData_Client::execParseXDHeightData },
			{ "ParseXDLensData", &AXDData_Client::execParseXDLensData },
			{ "ParseXDShadingData", &AXDData_Client::execParseXDShadingData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AXDData_Client_MakeFxFy_Statics
	{
		struct XDData_Client_eventMakeFxFy_Parms
		{
			float focalLength;
			float SensorResX;
			float SensorResY;
			float SensorSizeX;
			float SensorSizeY;
			FVector2D ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_focalLength;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SensorResX;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SensorResY;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SensorSizeX;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SensorSizeY;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AXDData_Client_MakeFxFy_Statics::NewProp_focalLength = { "focalLength", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XDData_Client_eventMakeFxFy_Parms, focalLength), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AXDData_Client_MakeFxFy_Statics::NewProp_SensorResX = { "SensorResX", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XDData_Client_eventMakeFxFy_Parms, SensorResX), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AXDData_Client_MakeFxFy_Statics::NewProp_SensorResY = { "SensorResY", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XDData_Client_eventMakeFxFy_Parms, SensorResY), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AXDData_Client_MakeFxFy_Statics::NewProp_SensorSizeX = { "SensorSizeX", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XDData_Client_eventMakeFxFy_Parms, SensorSizeX), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AXDData_Client_MakeFxFy_Statics::NewProp_SensorSizeY = { "SensorSizeY", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XDData_Client_eventMakeFxFy_Parms, SensorSizeY), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AXDData_Client_MakeFxFy_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XDData_Client_eventMakeFxFy_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AXDData_Client_MakeFxFy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AXDData_Client_MakeFxFy_Statics::NewProp_focalLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AXDData_Client_MakeFxFy_Statics::NewProp_SensorResX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AXDData_Client_MakeFxFy_Statics::NewProp_SensorResY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AXDData_Client_MakeFxFy_Statics::NewProp_SensorSizeX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AXDData_Client_MakeFxFy_Statics::NewProp_SensorSizeY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AXDData_Client_MakeFxFy_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AXDData_Client_MakeFxFy_Statics::Function_MetaDataParams[] = {
		{ "Category", "LOLED|Zeiss XD" },
		{ "ModuleRelativePath", "Public/XDData_Client.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AXDData_Client_MakeFxFy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AXDData_Client, nullptr, "MakeFxFy", nullptr, nullptr, sizeof(XDData_Client_eventMakeFxFy_Parms), Z_Construct_UFunction_AXDData_Client_MakeFxFy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AXDData_Client_MakeFxFy_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AXDData_Client_MakeFxFy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AXDData_Client_MakeFxFy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AXDData_Client_MakeFxFy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AXDData_Client_MakeFxFy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AXDData_Client_ParseXDDistortionData_Statics
	{
		struct XDData_Client_eventParseXDDistortionData_Parms
		{
			FLiveLinkBaseFrameData data;
			FXDDistortionData ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_data;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AXDData_Client_ParseXDDistortionData_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XDData_Client_eventParseXDDistortionData_Parms, data), Z_Construct_UScriptStruct_FLiveLinkBaseFrameData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AXDData_Client_ParseXDDistortionData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XDData_Client_eventParseXDDistortionData_Parms, ReturnValue), Z_Construct_UScriptStruct_FXDDistortionData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AXDData_Client_ParseXDDistortionData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AXDData_Client_ParseXDDistortionData_Statics::NewProp_data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AXDData_Client_ParseXDDistortionData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AXDData_Client_ParseXDDistortionData_Statics::Function_MetaDataParams[] = {
		{ "Category", "LOLED|Zeiss XD" },
		{ "ModuleRelativePath", "Public/XDData_Client.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AXDData_Client_ParseXDDistortionData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AXDData_Client, nullptr, "ParseXDDistortionData", nullptr, nullptr, sizeof(XDData_Client_eventParseXDDistortionData_Parms), Z_Construct_UFunction_AXDData_Client_ParseXDDistortionData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AXDData_Client_ParseXDDistortionData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AXDData_Client_ParseXDDistortionData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AXDData_Client_ParseXDDistortionData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AXDData_Client_ParseXDDistortionData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AXDData_Client_ParseXDDistortionData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AXDData_Client_ParseXDHeightData_Statics
	{
		struct XDData_Client_eventParseXDHeightData_Parms
		{
			FLiveLinkBaseFrameData data;
			FXDHeightData ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_data;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AXDData_Client_ParseXDHeightData_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XDData_Client_eventParseXDHeightData_Parms, data), Z_Construct_UScriptStruct_FLiveLinkBaseFrameData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AXDData_Client_ParseXDHeightData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XDData_Client_eventParseXDHeightData_Parms, ReturnValue), Z_Construct_UScriptStruct_FXDHeightData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AXDData_Client_ParseXDHeightData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AXDData_Client_ParseXDHeightData_Statics::NewProp_data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AXDData_Client_ParseXDHeightData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AXDData_Client_ParseXDHeightData_Statics::Function_MetaDataParams[] = {
		{ "Category", "LOLED|Zeiss XD" },
		{ "ModuleRelativePath", "Public/XDData_Client.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AXDData_Client_ParseXDHeightData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AXDData_Client, nullptr, "ParseXDHeightData", nullptr, nullptr, sizeof(XDData_Client_eventParseXDHeightData_Parms), Z_Construct_UFunction_AXDData_Client_ParseXDHeightData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AXDData_Client_ParseXDHeightData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AXDData_Client_ParseXDHeightData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AXDData_Client_ParseXDHeightData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AXDData_Client_ParseXDHeightData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AXDData_Client_ParseXDHeightData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AXDData_Client_ParseXDLensData_Statics
	{
		struct XDData_Client_eventParseXDLensData_Parms
		{
			FLiveLinkBaseFrameData data;
			FXDLensData ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_data;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AXDData_Client_ParseXDLensData_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XDData_Client_eventParseXDLensData_Parms, data), Z_Construct_UScriptStruct_FLiveLinkBaseFrameData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AXDData_Client_ParseXDLensData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XDData_Client_eventParseXDLensData_Parms, ReturnValue), Z_Construct_UScriptStruct_FXDLensData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AXDData_Client_ParseXDLensData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AXDData_Client_ParseXDLensData_Statics::NewProp_data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AXDData_Client_ParseXDLensData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AXDData_Client_ParseXDLensData_Statics::Function_MetaDataParams[] = {
		{ "Category", "LOLED|Zeiss XD" },
		{ "ModuleRelativePath", "Public/XDData_Client.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AXDData_Client_ParseXDLensData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AXDData_Client, nullptr, "ParseXDLensData", nullptr, nullptr, sizeof(XDData_Client_eventParseXDLensData_Parms), Z_Construct_UFunction_AXDData_Client_ParseXDLensData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AXDData_Client_ParseXDLensData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AXDData_Client_ParseXDLensData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AXDData_Client_ParseXDLensData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AXDData_Client_ParseXDLensData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AXDData_Client_ParseXDLensData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AXDData_Client_ParseXDShadingData_Statics
	{
		struct XDData_Client_eventParseXDShadingData_Parms
		{
			FLiveLinkBaseFrameData data;
			FXDShadingData ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_data;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AXDData_Client_ParseXDShadingData_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XDData_Client_eventParseXDShadingData_Parms, data), Z_Construct_UScriptStruct_FLiveLinkBaseFrameData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AXDData_Client_ParseXDShadingData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XDData_Client_eventParseXDShadingData_Parms, ReturnValue), Z_Construct_UScriptStruct_FXDShadingData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AXDData_Client_ParseXDShadingData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AXDData_Client_ParseXDShadingData_Statics::NewProp_data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AXDData_Client_ParseXDShadingData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AXDData_Client_ParseXDShadingData_Statics::Function_MetaDataParams[] = {
		{ "Category", "LOLED|Zeiss XD" },
		{ "ModuleRelativePath", "Public/XDData_Client.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AXDData_Client_ParseXDShadingData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AXDData_Client, nullptr, "ParseXDShadingData", nullptr, nullptr, sizeof(XDData_Client_eventParseXDShadingData_Parms), Z_Construct_UFunction_AXDData_Client_ParseXDShadingData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AXDData_Client_ParseXDShadingData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AXDData_Client_ParseXDShadingData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AXDData_Client_ParseXDShadingData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AXDData_Client_ParseXDShadingData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AXDData_Client_ParseXDShadingData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AXDData_Client_NoRegister()
	{
		return AXDData_Client::StaticClass();
	}
	struct Z_Construct_UClass_AXDData_Client_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AXDData_Client_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_LoledLiveLink,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AXDData_Client_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AXDData_Client_MakeFxFy, "MakeFxFy" }, // 393938985
		{ &Z_Construct_UFunction_AXDData_Client_ParseXDDistortionData, "ParseXDDistortionData" }, // 1607925026
		{ &Z_Construct_UFunction_AXDData_Client_ParseXDHeightData, "ParseXDHeightData" }, // 3099152349
		{ &Z_Construct_UFunction_AXDData_Client_ParseXDLensData, "ParseXDLensData" }, // 736958146
		{ &Z_Construct_UFunction_AXDData_Client_ParseXDShadingData, "ParseXDShadingData" }, // 2127931415
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AXDData_Client_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "XDData_Client.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/XDData_Client.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AXDData_Client_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AXDData_Client>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AXDData_Client_Statics::ClassParams = {
		&AXDData_Client::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AXDData_Client_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AXDData_Client_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AXDData_Client()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AXDData_Client_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AXDData_Client, 263767934);
	template<> LOLEDLIVELINK_API UClass* StaticClass<AXDData_Client>()
	{
		return AXDData_Client::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AXDData_Client(Z_Construct_UClass_AXDData_Client, &AXDData_Client::StaticClass, TEXT("/Script/LoledLiveLink"), TEXT("AXDData_Client"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AXDData_Client);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
