// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LoledLiveLink/Public/XDTimecodeProvider.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeXDTimecodeProvider() {}
// Cross Module References
	LOLEDLIVELINK_API UClass* Z_Construct_UClass_UXDTimecodeProvider_NoRegister();
	LOLEDLIVELINK_API UClass* Z_Construct_UClass_UXDTimecodeProvider();
	ENGINE_API UClass* Z_Construct_UClass_UTimecodeProvider();
	UPackage* Z_Construct_UPackage__Script_LoledLiveLink();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTimecode();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameRate();
// End Cross Module References
	DEFINE_FUNCTION(UXDTimecodeProvider::execUpdateXDFrameRate)
	{
		P_GET_STRUCT(FTimecode,Z_Param_InputXDFrameRate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateXDFrameRate(Z_Param_InputXDFrameRate);
		P_NATIVE_END;
	}
	void UXDTimecodeProvider::StaticRegisterNativesUXDTimecodeProvider()
	{
		UClass* Class = UXDTimecodeProvider::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "UpdateXDFrameRate", &UXDTimecodeProvider::execUpdateXDFrameRate },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UXDTimecodeProvider_UpdateXDFrameRate_Statics
	{
		struct FTimecode
		{
			int32 Hours;
			int32 Minutes;
			int32 Seconds;
			int32 Frames;
			bool bDropFrameFormat;
		};

		struct XDTimecodeProvider_eventUpdateXDFrameRate_Parms
		{
			FTimecode InputXDFrameRate;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InputXDFrameRate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UXDTimecodeProvider_UpdateXDFrameRate_Statics::NewProp_InputXDFrameRate = { "InputXDFrameRate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XDTimecodeProvider_eventUpdateXDFrameRate_Parms, InputXDFrameRate), Z_Construct_UScriptStruct_FTimecode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXDTimecodeProvider_UpdateXDFrameRate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXDTimecodeProvider_UpdateXDFrameRate_Statics::NewProp_InputXDFrameRate,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXDTimecodeProvider_UpdateXDFrameRate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Properties" },
		{ "Comment", "//static FTimecode GenerateTimecodeFromHighPerformanceClock(FFrameRate Rate);\n" },
		{ "ModuleRelativePath", "Public/XDTimecodeProvider.h" },
		{ "ToolTip", "static FTimecode GenerateTimecodeFromHighPerformanceClock(FFrameRate Rate);" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXDTimecodeProvider_UpdateXDFrameRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXDTimecodeProvider, nullptr, "UpdateXDFrameRate", nullptr, nullptr, sizeof(XDTimecodeProvider_eventUpdateXDFrameRate_Parms), Z_Construct_UFunction_UXDTimecodeProvider_UpdateXDFrameRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXDTimecodeProvider_UpdateXDFrameRate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXDTimecodeProvider_UpdateXDFrameRate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXDTimecodeProvider_UpdateXDFrameRate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXDTimecodeProvider_UpdateXDFrameRate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXDTimecodeProvider_UpdateXDFrameRate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UXDTimecodeProvider_NoRegister()
	{
		return UXDTimecodeProvider::StaticClass();
	}
	struct Z_Construct_UClass_UXDTimecodeProvider_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrameRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FrameRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeCode_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TimeCode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UXDTimecodeProvider_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTimecodeProvider,
		(UObject* (*)())Z_Construct_UPackage__Script_LoledLiveLink,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UXDTimecodeProvider_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UXDTimecodeProvider_UpdateXDFrameRate, "UpdateXDFrameRate" }, // 1294777388
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UXDTimecodeProvider_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "XDTimecodeProvider.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/XDTimecodeProvider.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UXDTimecodeProvider_Statics::NewProp_FrameRate_MetaData[] = {
		{ "Category", "Timecode" },
		{ "Comment", "/** The frame rate at which the timecode value will be generated. */" },
		{ "ModuleRelativePath", "Public/XDTimecodeProvider.h" },
		{ "ToolTip", "The frame rate at which the timecode value will be generated." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UXDTimecodeProvider_Statics::NewProp_FrameRate = { "FrameRate", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UXDTimecodeProvider, FrameRate), Z_Construct_UScriptStruct_FFrameRate, METADATA_PARAMS(Z_Construct_UClass_UXDTimecodeProvider_Statics::NewProp_FrameRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UXDTimecodeProvider_Statics::NewProp_FrameRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UXDTimecodeProvider_Statics::NewProp_TimeCode_MetaData[] = {
		{ "Category", "Properties" },
		{ "ModuleRelativePath", "Public/XDTimecodeProvider.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UXDTimecodeProvider_Statics::NewProp_TimeCode = { "TimeCode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UXDTimecodeProvider, TimeCode), Z_Construct_UScriptStruct_FTimecode, METADATA_PARAMS(Z_Construct_UClass_UXDTimecodeProvider_Statics::NewProp_TimeCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UXDTimecodeProvider_Statics::NewProp_TimeCode_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UXDTimecodeProvider_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UXDTimecodeProvider_Statics::NewProp_FrameRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UXDTimecodeProvider_Statics::NewProp_TimeCode,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UXDTimecodeProvider_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UXDTimecodeProvider>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UXDTimecodeProvider_Statics::ClassParams = {
		&UXDTimecodeProvider::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UXDTimecodeProvider_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UXDTimecodeProvider_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UXDTimecodeProvider_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UXDTimecodeProvider_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UXDTimecodeProvider()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UXDTimecodeProvider_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UXDTimecodeProvider, 1281003328);
	template<> LOLEDLIVELINK_API UClass* StaticClass<UXDTimecodeProvider>()
	{
		return UXDTimecodeProvider::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UXDTimecodeProvider(Z_Construct_UClass_UXDTimecodeProvider, &UXDTimecodeProvider::StaticClass, TEXT("/Script/LoledLiveLink"), TEXT("UXDTimecodeProvider"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UXDTimecodeProvider);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
