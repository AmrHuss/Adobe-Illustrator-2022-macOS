#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WeatherManager

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "WeatherManager_structs.hpp"


namespace SDK::Params
{

// Function WeatherManager.SmokeDistributionComponent.AddCloud
// 0x00B0 (0x00B0 - 0x0000)
struct SmokeDistributionComponent_AddCloud final
{
public:
	struct FTransform                             InTransform;                                       // 0x0000(0x0030)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	int32                                         InRadius;                                          // 0x0030(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                              ReturnKey;                                         // 0x0034(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_3C[0x4];                                       // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UParticleSystem*                        Particles;                                         // 0x0040(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystem*                        ParticlesInBuilding;                               // 0x0048(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                InBuildingOffsetFromGround;                        // 0x0050(0x000C)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         PPTranslationLerp;                                 // 0x005C(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystemComponent*               ReturnParticleSystem;                              // 0x0060(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_68[0x8];                                       // 0x0068(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             boxSize;                                           // 0x0070(0x0030)(Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                          InBuilding;                                        // 0x00A0(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bOutBuildingCollision;                             // 0x00A1(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          VolumeLines;                                       // 0x00A2(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x00A3(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_A4[0xC];                                       // 0x00A4(0x000C)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(SmokeDistributionComponent_AddCloud) == 0x000010, "Wrong alignment on SmokeDistributionComponent_AddCloud");
static_assert(sizeof(SmokeDistributionComponent_AddCloud) == 0x0000B0, "Wrong size on SmokeDistributionComponent_AddCloud");
static_assert(offsetof(SmokeDistributionComponent_AddCloud, InTransform) == 0x000000, "Member 'SmokeDistributionComponent_AddCloud::InTransform' has a wrong offset!");
static_assert(offsetof(SmokeDistributionComponent_AddCloud, InRadius) == 0x000030, "Member 'SmokeDistributionComponent_AddCloud::InRadius' has a wrong offset!");
static_assert(offsetof(SmokeDistributionComponent_AddCloud, ReturnKey) == 0x000034, "Member 'SmokeDistributionComponent_AddCloud::ReturnKey' has a wrong offset!");
static_assert(offsetof(SmokeDistributionComponent_AddCloud, Particles) == 0x000040, "Member 'SmokeDistributionComponent_AddCloud::Particles' has a wrong offset!");
static_assert(offsetof(SmokeDistributionComponent_AddCloud, ParticlesInBuilding) == 0x000048, "Member 'SmokeDistributionComponent_AddCloud::ParticlesInBuilding' has a wrong offset!");
static_assert(offsetof(SmokeDistributionComponent_AddCloud, InBuildingOffsetFromGround) == 0x000050, "Member 'SmokeDistributionComponent_AddCloud::InBuildingOffsetFromGround' has a wrong offset!");
static_assert(offsetof(SmokeDistributionComponent_AddCloud, PPTranslationLerp) == 0x00005C, "Member 'SmokeDistributionComponent_AddCloud::PPTranslationLerp' has a wrong offset!");
static_assert(offsetof(SmokeDistributionComponent_AddCloud, ReturnParticleSystem) == 0x000060, "Member 'SmokeDistributionComponent_AddCloud::ReturnParticleSystem' has a wrong offset!");
static_assert(offsetof(SmokeDistributionComponent_AddCloud, boxSize) == 0x000070, "Member 'SmokeDistributionComponent_AddCloud::boxSize' has a wrong offset!");
static_assert(offsetof(SmokeDistributionComponent_AddCloud, InBuilding) == 0x0000A0, "Member 'SmokeDistributionComponent_AddCloud::InBuilding' has a wrong offset!");
static_assert(offsetof(SmokeDistributionComponent_AddCloud, bOutBuildingCollision) == 0x0000A1, "Member 'SmokeDistributionComponent_AddCloud::bOutBuildingCollision' has a wrong offset!");
static_assert(offsetof(SmokeDistributionComponent_AddCloud, VolumeLines) == 0x0000A2, "Member 'SmokeDistributionComponent_AddCloud::VolumeLines' has a wrong offset!");
static_assert(offsetof(SmokeDistributionComponent_AddCloud, ReturnValue) == 0x0000A3, "Member 'SmokeDistributionComponent_AddCloud::ReturnValue' has a wrong offset!");

// Function WeatherManager.SmokeDistributionComponent.InitSmokeDensity
// 0x0038 (0x0038 - 0x0000)
struct SmokeDistributionComponent_InitSmokeDensity final
{
public:
	int32                                         Density;                                           // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                           MapDetails;                                        // 0x0004(0x0010)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          MapDetailsValid;                                   // 0x0014(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_15[0x3];                                       // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         InSpawnRate;                                       // 0x0018(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         InBuildingOffset;                                  // 0x001C(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         FromBuildingOffset;                                // 0x0020(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         LifeTime;                                          // 0x0024(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         SpawnRateMultiplier;                               // 0x0028(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         InSmokePostProccessExtendHeightInBuilding;         // 0x002C(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         InSmokePostProcessExtendInBuilding;                // 0x0030(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          InDebugLines;                                      // 0x0034(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          InCircularShape;                                   // 0x0035(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_36[0x2];                                       // 0x0036(0x0002)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(SmokeDistributionComponent_InitSmokeDensity) == 0x000004, "Wrong alignment on SmokeDistributionComponent_InitSmokeDensity");
static_assert(sizeof(SmokeDistributionComponent_InitSmokeDensity) == 0x000038, "Wrong size on SmokeDistributionComponent_InitSmokeDensity");
static_assert(offsetof(SmokeDistributionComponent_InitSmokeDensity, Density) == 0x000000, "Member 'SmokeDistributionComponent_InitSmokeDensity::Density' has a wrong offset!");
static_assert(offsetof(SmokeDistributionComponent_InitSmokeDensity, MapDetails) == 0x000004, "Member 'SmokeDistributionComponent_InitSmokeDensity::MapDetails' has a wrong offset!");
static_assert(offsetof(SmokeDistributionComponent_InitSmokeDensity, MapDetailsValid) == 0x000014, "Member 'SmokeDistributionComponent_InitSmokeDensity::MapDetailsValid' has a wrong offset!");
static_assert(offsetof(SmokeDistributionComponent_InitSmokeDensity, InSpawnRate) == 0x000018, "Member 'SmokeDistributionComponent_InitSmokeDensity::InSpawnRate' has a wrong offset!");
static_assert(offsetof(SmokeDistributionComponent_InitSmokeDensity, InBuildingOffset) == 0x00001C, "Member 'SmokeDistributionComponent_InitSmokeDensity::InBuildingOffset' has a wrong offset!");
static_assert(offsetof(SmokeDistributionComponent_InitSmokeDensity, FromBuildingOffset) == 0x000020, "Member 'SmokeDistributionComponent_InitSmokeDensity::FromBuildingOffset' has a wrong offset!");
static_assert(offsetof(SmokeDistributionComponent_InitSmokeDensity, LifeTime) == 0x000024, "Member 'SmokeDistributionComponent_InitSmokeDensity::LifeTime' has a wrong offset!");
static_assert(offsetof(SmokeDistributionComponent_InitSmokeDensity, SpawnRateMultiplier) == 0x000028, "Member 'SmokeDistributionComponent_InitSmokeDensity::SpawnRateMultiplier' has a wrong offset!");
static_assert(offsetof(SmokeDistributionComponent_InitSmokeDensity, InSmokePostProccessExtendHeightInBuilding) == 0x00002C, "Member 'SmokeDistributionComponent_InitSmokeDensity::InSmokePostProccessExtendHeightInBuilding' has a wrong offset!");
static_assert(offsetof(SmokeDistributionComponent_InitSmokeDensity, InSmokePostProcessExtendInBuilding) == 0x000030, "Member 'SmokeDistributionComponent_InitSmokeDensity::InSmokePostProcessExtendInBuilding' has a wrong offset!");
static_assert(offsetof(SmokeDistributionComponent_InitSmokeDensity, InDebugLines) == 0x000034, "Member 'SmokeDistributionComponent_InitSmokeDensity::InDebugLines' has a wrong offset!");
static_assert(offsetof(SmokeDistributionComponent_InitSmokeDensity, InCircularShape) == 0x000035, "Member 'SmokeDistributionComponent_InitSmokeDensity::InCircularShape' has a wrong offset!");

// Function WeatherManager.SmokeDistributionComponent.RemoveCloud
// 0x0008 (0x0008 - 0x0000)
struct SmokeDistributionComponent_RemoveCloud final
{
public:
	struct FVector2D                              InCloudKey;                                        // 0x0000(0x0008)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(SmokeDistributionComponent_RemoveCloud) == 0x000004, "Wrong alignment on SmokeDistributionComponent_RemoveCloud");
static_assert(sizeof(SmokeDistributionComponent_RemoveCloud) == 0x000008, "Wrong size on SmokeDistributionComponent_RemoveCloud");
static_assert(offsetof(SmokeDistributionComponent_RemoveCloud, InCloudKey) == 0x000000, "Member 'SmokeDistributionComponent_RemoveCloud::InCloudKey' has a wrong offset!");

// Function WeatherManager.WeatherManager.InitWeatherForecastSetup
// 0x0040 (0x0040 - 0x0000)
struct WeatherManager_InitWeatherForecastSetup final
{
public:
	struct FWeatherForecastSetup                  ForecastSetup;                                     // 0x0000(0x0038)(Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	float                                         CurrentAmount;                                     // 0x0038(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_3C[0x4];                                       // 0x003C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(WeatherManager_InitWeatherForecastSetup) == 0x000008, "Wrong alignment on WeatherManager_InitWeatherForecastSetup");
static_assert(sizeof(WeatherManager_InitWeatherForecastSetup) == 0x000040, "Wrong size on WeatherManager_InitWeatherForecastSetup");
static_assert(offsetof(WeatherManager_InitWeatherForecastSetup, ForecastSetup) == 0x000000, "Member 'WeatherManager_InitWeatherForecastSetup::ForecastSetup' has a wrong offset!");
static_assert(offsetof(WeatherManager_InitWeatherForecastSetup, CurrentAmount) == 0x000038, "Member 'WeatherManager_InitWeatherForecastSetup::CurrentAmount' has a wrong offset!");

// Function WeatherManager.WeatherManager.UpdateWeatherForecastSetup
// 0x0040 (0x0040 - 0x0000)
struct WeatherManager_UpdateWeatherForecastSetup final
{
public:
	struct FWeatherForecastSetup                  ForecastSetup;                                     // 0x0000(0x0038)(Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	float                                         CurrentTime;                                       // 0x0038(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ReturnValue;                                       // 0x003C(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(WeatherManager_UpdateWeatherForecastSetup) == 0x000008, "Wrong alignment on WeatherManager_UpdateWeatherForecastSetup");
static_assert(sizeof(WeatherManager_UpdateWeatherForecastSetup) == 0x000040, "Wrong size on WeatherManager_UpdateWeatherForecastSetup");
static_assert(offsetof(WeatherManager_UpdateWeatherForecastSetup, ForecastSetup) == 0x000000, "Member 'WeatherManager_UpdateWeatherForecastSetup::ForecastSetup' has a wrong offset!");
static_assert(offsetof(WeatherManager_UpdateWeatherForecastSetup, CurrentTime) == 0x000038, "Member 'WeatherManager_UpdateWeatherForecastSetup::CurrentTime' has a wrong offset!");
static_assert(offsetof(WeatherManager_UpdateWeatherForecastSetup, ReturnValue) == 0x00003C, "Member 'WeatherManager_UpdateWeatherForecastSetup::ReturnValue' has a wrong offset!");

// Function WeatherManager.WeatherManager.GetPostProcessComponent
// 0x0008 (0x0008 - 0x0000)
struct WeatherManager_GetPostProcessComponent final
{
public:
	class UPostProcessComponent*                  OutPostProcessComponent;                           // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(WeatherManager_GetPostProcessComponent) == 0x000008, "Wrong alignment on WeatherManager_GetPostProcessComponent");
static_assert(sizeof(WeatherManager_GetPostProcessComponent) == 0x000008, "Wrong size on WeatherManager_GetPostProcessComponent");
static_assert(offsetof(WeatherManager_GetPostProcessComponent, OutPostProcessComponent) == 0x000000, "Member 'WeatherManager_GetPostProcessComponent::OutPostProcessComponent' has a wrong offset!");

// Function WeatherManager.WeatherManager.IsRainOcclusionEnabled
// 0x0001 (0x0001 - 0x0000)
struct WeatherManager_IsRainOcclusionEnabled final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(WeatherManager_IsRainOcclusionEnabled) == 0x000001, "Wrong alignment on WeatherManager_IsRainOcclusionEnabled");
static_assert(sizeof(WeatherManager_IsRainOcclusionEnabled) == 0x000001, "Wrong size on WeatherManager_IsRainOcclusionEnabled");
static_assert(offsetof(WeatherManager_IsRainOcclusionEnabled, ReturnValue) == 0x000000, "Member 'WeatherManager_IsRainOcclusionEnabled::ReturnValue' has a wrong offset!");

// Function WeatherManager.WeatherManager.IsRainPostprocessEnabled
// 0x0001 (0x0001 - 0x0000)
struct WeatherManager_IsRainPostprocessEnabled final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(WeatherManager_IsRainPostprocessEnabled) == 0x000001, "Wrong alignment on WeatherManager_IsRainPostprocessEnabled");
static_assert(sizeof(WeatherManager_IsRainPostprocessEnabled) == 0x000001, "Wrong size on WeatherManager_IsRainPostprocessEnabled");
static_assert(offsetof(WeatherManager_IsRainPostprocessEnabled, ReturnValue) == 0x000000, "Member 'WeatherManager_IsRainPostprocessEnabled::ReturnValue' has a wrong offset!");

// Function WeatherManager.WeatherManagerComponent.SetRainAmount
// 0x0004 (0x0004 - 0x0000)
struct WeatherManagerComponent_SetRainAmount final
{
public:
	float                                         NewRainAmount;                                     // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(WeatherManagerComponent_SetRainAmount) == 0x000004, "Wrong alignment on WeatherManagerComponent_SetRainAmount");
static_assert(sizeof(WeatherManagerComponent_SetRainAmount) == 0x000004, "Wrong size on WeatherManagerComponent_SetRainAmount");
static_assert(offsetof(WeatherManagerComponent_SetRainAmount, NewRainAmount) == 0x000000, "Member 'WeatherManagerComponent_SetRainAmount::NewRainAmount' has a wrong offset!");

// Function WeatherManager.WeatherManagerComponent.SetRainOcclusionEnabled
// 0x0001 (0x0001 - 0x0000)
struct WeatherManagerComponent_SetRainOcclusionEnabled final
{
public:
	bool                                          Enabled;                                           // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(WeatherManagerComponent_SetRainOcclusionEnabled) == 0x000001, "Wrong alignment on WeatherManagerComponent_SetRainOcclusionEnabled");
static_assert(sizeof(WeatherManagerComponent_SetRainOcclusionEnabled) == 0x000001, "Wrong size on WeatherManagerComponent_SetRainOcclusionEnabled");
static_assert(offsetof(WeatherManagerComponent_SetRainOcclusionEnabled, Enabled) == 0x000000, "Member 'WeatherManagerComponent_SetRainOcclusionEnabled::Enabled' has a wrong offset!");

// Function WeatherManager.WeatherManagerComponent.SetRainOcclusionTextureSize
// 0x0004 (0x0004 - 0x0000)
struct WeatherManagerComponent_SetRainOcclusionTextureSize final
{
public:
	int32                                         NewSize;                                           // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(WeatherManagerComponent_SetRainOcclusionTextureSize) == 0x000004, "Wrong alignment on WeatherManagerComponent_SetRainOcclusionTextureSize");
static_assert(sizeof(WeatherManagerComponent_SetRainOcclusionTextureSize) == 0x000004, "Wrong size on WeatherManagerComponent_SetRainOcclusionTextureSize");
static_assert(offsetof(WeatherManagerComponent_SetRainOcclusionTextureSize, NewSize) == 0x000000, "Member 'WeatherManagerComponent_SetRainOcclusionTextureSize::NewSize' has a wrong offset!");

// Function WeatherManager.WeatherManagerComponent.SetRainPostprocessEnabled
// 0x0001 (0x0001 - 0x0000)
struct WeatherManagerComponent_SetRainPostprocessEnabled final
{
public:
	bool                                          Enabled;                                           // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(WeatherManagerComponent_SetRainPostprocessEnabled) == 0x000001, "Wrong alignment on WeatherManagerComponent_SetRainPostprocessEnabled");
static_assert(sizeof(WeatherManagerComponent_SetRainPostprocessEnabled) == 0x000001, "Wrong size on WeatherManagerComponent_SetRainPostprocessEnabled");
static_assert(offsetof(WeatherManagerComponent_SetRainPostprocessEnabled, Enabled) == 0x000000, "Member 'WeatherManagerComponent_SetRainPostprocessEnabled::Enabled' has a wrong offset!");

// Function WeatherManager.WeatherManagerComponent.SetRainPostprocessMaterial
// 0x0008 (0x0008 - 0x0000)
struct WeatherManagerComponent_SetRainPostprocessMaterial final
{
public:
	class UMaterialInterface*                     NewMaterial;                                       // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(WeatherManagerComponent_SetRainPostprocessMaterial) == 0x000008, "Wrong alignment on WeatherManagerComponent_SetRainPostprocessMaterial");
static_assert(sizeof(WeatherManagerComponent_SetRainPostprocessMaterial) == 0x000008, "Wrong size on WeatherManagerComponent_SetRainPostprocessMaterial");
static_assert(offsetof(WeatherManagerComponent_SetRainPostprocessMaterial, NewMaterial) == 0x000000, "Member 'WeatherManagerComponent_SetRainPostprocessMaterial::NewMaterial' has a wrong offset!");

// Function WeatherManager.WeatherManagerComponent.SetSnowCoverAmount
// 0x0004 (0x0004 - 0x0000)
struct WeatherManagerComponent_SetSnowCoverAmount final
{
public:
	float                                         NewSnowCoverAmount;                                // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(WeatherManagerComponent_SetSnowCoverAmount) == 0x000004, "Wrong alignment on WeatherManagerComponent_SetSnowCoverAmount");
static_assert(sizeof(WeatherManagerComponent_SetSnowCoverAmount) == 0x000004, "Wrong size on WeatherManagerComponent_SetSnowCoverAmount");
static_assert(offsetof(WeatherManagerComponent_SetSnowCoverAmount, NewSnowCoverAmount) == 0x000000, "Member 'WeatherManagerComponent_SetSnowCoverAmount::NewSnowCoverAmount' has a wrong offset!");

// Function WeatherManager.WeatherManagerComponent.SetSnowingAmount
// 0x0004 (0x0004 - 0x0000)
struct WeatherManagerComponent_SetSnowingAmount final
{
public:
	float                                         NewSnowingAmount;                                  // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(WeatherManagerComponent_SetSnowingAmount) == 0x000004, "Wrong alignment on WeatherManagerComponent_SetSnowingAmount");
static_assert(sizeof(WeatherManagerComponent_SetSnowingAmount) == 0x000004, "Wrong size on WeatherManagerComponent_SetSnowingAmount");
static_assert(offsetof(WeatherManagerComponent_SetSnowingAmount, NewSnowingAmount) == 0x000000, "Member 'WeatherManagerComponent_SetSnowingAmount::NewSnowingAmount' has a wrong offset!");

// Function WeatherManager.WeatherManagerComponent.SetWeatherType
// 0x0001 (0x0001 - 0x0000)
struct WeatherManagerComponent_SetWeatherType final
{
public:
	EWeatherType                                  NewWeatherType;                                    // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(WeatherManagerComponent_SetWeatherType) == 0x000001, "Wrong alignment on WeatherManagerComponent_SetWeatherType");
static_assert(sizeof(WeatherManagerComponent_SetWeatherType) == 0x000001, "Wrong size on WeatherManagerComponent_SetWeatherType");
static_assert(offsetof(WeatherManagerComponent_SetWeatherType, NewWeatherType) == 0x000000, "Member 'WeatherManagerComponent_SetWeatherType::NewWeatherType' has a wrong offset!");

// Function WeatherManager.WeatherManagerComponent.SetWetnessAmount
// 0x0004 (0x0004 - 0x0000)
struct WeatherManagerComponent_SetWetnessAmount final
{
public:
	float                                         NewWetnessAmount;                                  // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(WeatherManagerComponent_SetWetnessAmount) == 0x000004, "Wrong alignment on WeatherManagerComponent_SetWetnessAmount");
static_assert(sizeof(WeatherManagerComponent_SetWetnessAmount) == 0x000004, "Wrong size on WeatherManagerComponent_SetWetnessAmount");
static_assert(offsetof(WeatherManagerComponent_SetWetnessAmount, NewWetnessAmount) == 0x000000, "Member 'WeatherManagerComponent_SetWetnessAmount::NewWetnessAmount' has a wrong offset!");

// Function WeatherManager.WeatherManagerComponent.SetWindParticleAccelerationCoef
// 0x0004 (0x0004 - 0x0000)
struct WeatherManagerComponent_SetWindParticleAccelerationCoef final
{
public:
	float                                         NewWindParticleAccelerationCoef;                   // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(WeatherManagerComponent_SetWindParticleAccelerationCoef) == 0x000004, "Wrong alignment on WeatherManagerComponent_SetWindParticleAccelerationCoef");
static_assert(sizeof(WeatherManagerComponent_SetWindParticleAccelerationCoef) == 0x000004, "Wrong size on WeatherManagerComponent_SetWindParticleAccelerationCoef");
static_assert(offsetof(WeatherManagerComponent_SetWindParticleAccelerationCoef, NewWindParticleAccelerationCoef) == 0x000000, "Member 'WeatherManagerComponent_SetWindParticleAccelerationCoef::NewWindParticleAccelerationCoef' has a wrong offset!");

// Function WeatherManager.WeatherManagerComponent.SetWindParticleInitialVelocityCoef
// 0x0004 (0x0004 - 0x0000)
struct WeatherManagerComponent_SetWindParticleInitialVelocityCoef final
{
public:
	float                                         NewWindParticleInitialVelocityCoef;                // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(WeatherManagerComponent_SetWindParticleInitialVelocityCoef) == 0x000004, "Wrong alignment on WeatherManagerComponent_SetWindParticleInitialVelocityCoef");
static_assert(sizeof(WeatherManagerComponent_SetWindParticleInitialVelocityCoef) == 0x000004, "Wrong size on WeatherManagerComponent_SetWindParticleInitialVelocityCoef");
static_assert(offsetof(WeatherManagerComponent_SetWindParticleInitialVelocityCoef, NewWindParticleInitialVelocityCoef) == 0x000000, "Member 'WeatherManagerComponent_SetWindParticleInitialVelocityCoef::NewWindParticleInitialVelocityCoef' has a wrong offset!");

// Function WeatherManager.WeatherManagerComponent.SetWindVector
// 0x000C (0x000C - 0x0000)
struct WeatherManagerComponent_SetWindVector final
{
public:
	struct FVector                                NewWindVector;                                     // 0x0000(0x000C)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(WeatherManagerComponent_SetWindVector) == 0x000004, "Wrong alignment on WeatherManagerComponent_SetWindVector");
static_assert(sizeof(WeatherManagerComponent_SetWindVector) == 0x00000C, "Wrong size on WeatherManagerComponent_SetWindVector");
static_assert(offsetof(WeatherManagerComponent_SetWindVector, NewWindVector) == 0x000000, "Member 'WeatherManagerComponent_SetWindVector::NewWindVector' has a wrong offset!");

// Function WeatherManager.WeatherManagerComponent.GetRainPostprocessMaterial
// 0x0008 (0x0008 - 0x0000)
struct WeatherManagerComponent_GetRainPostprocessMaterial final
{
public:
	class UMaterialInterface*                     ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(WeatherManagerComponent_GetRainPostprocessMaterial) == 0x000008, "Wrong alignment on WeatherManagerComponent_GetRainPostprocessMaterial");
static_assert(sizeof(WeatherManagerComponent_GetRainPostprocessMaterial) == 0x000008, "Wrong size on WeatherManagerComponent_GetRainPostprocessMaterial");
static_assert(offsetof(WeatherManagerComponent_GetRainPostprocessMaterial, ReturnValue) == 0x000000, "Member 'WeatherManagerComponent_GetRainPostprocessMaterial::ReturnValue' has a wrong offset!");

}

