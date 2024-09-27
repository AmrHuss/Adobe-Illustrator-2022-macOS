#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WeatherManager

#include "Basic.hpp"

#include "WeatherManager_classes.hpp"
#include "WeatherManager_parameters.hpp"


namespace SDK
{

// Function WeatherManager.SmokeDistributionComponent.AddCloud
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTransform                       InTransform                                            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// int32                                   InRadius                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                        ReturnKey                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UParticleSystem*                  Particles                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UParticleSystem*                  ParticlesInBuilding                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                          InBuildingOffsetFromGround                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   PPTranslationLerp                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UParticleSystemComponent*         ReturnParticleSystem                                   (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform                       boxSize                                                (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// bool                                    InBuilding                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    bOutBuildingCollision                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    VolumeLines                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USmokeDistributionComponent::AddCloud(const struct FTransform& InTransform, int32 InRadius, struct FVector2D* ReturnKey, class UParticleSystem* Particles, class UParticleSystem* ParticlesInBuilding, const struct FVector& InBuildingOffsetFromGround, float PPTranslationLerp, class UParticleSystemComponent** ReturnParticleSystem, struct FTransform* boxSize, bool* InBuilding, bool* bOutBuildingCollision, bool* VolumeLines)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SmokeDistributionComponent", "AddCloud");

	Params::SmokeDistributionComponent_AddCloud Parms{};

	Parms.InTransform = std::move(InTransform);
	Parms.InRadius = InRadius;
	Parms.Particles = Particles;
	Parms.ParticlesInBuilding = ParticlesInBuilding;
	Parms.InBuildingOffsetFromGround = std::move(InBuildingOffsetFromGround);
	Parms.PPTranslationLerp = PPTranslationLerp;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (ReturnKey != nullptr)
		*ReturnKey = std::move(Parms.ReturnKey);

	if (ReturnParticleSystem != nullptr)
		*ReturnParticleSystem = Parms.ReturnParticleSystem;

	if (boxSize != nullptr)
		*boxSize = std::move(Parms.boxSize);

	if (InBuilding != nullptr)
		*InBuilding = Parms.InBuilding;

	if (bOutBuildingCollision != nullptr)
		*bOutBuildingCollision = Parms.bOutBuildingCollision;

	if (VolumeLines != nullptr)
		*VolumeLines = Parms.VolumeLines;

	return Parms.ReturnValue;
}


// Function WeatherManager.SmokeDistributionComponent.InitSmokeDensity
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// int32                                   Density                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor                     MapDetails                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    MapDetailsValid                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   InSpawnRate                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   InBuildingOffset                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   FromBuildingOffset                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                                   LifeTime                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   SpawnRateMultiplier                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   InSmokePostProccessExtendHeightInBuilding              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   InSmokePostProcessExtendInBuilding                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    InDebugLines                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    InCircularShape                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USmokeDistributionComponent::InitSmokeDensity(int32 Density, const struct FLinearColor& MapDetails, bool MapDetailsValid, float InSpawnRate, float InBuildingOffset, float FromBuildingOffset, int32 LifeTime, float SpawnRateMultiplier, float InSmokePostProccessExtendHeightInBuilding, float InSmokePostProcessExtendInBuilding, bool InDebugLines, bool InCircularShape)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SmokeDistributionComponent", "InitSmokeDensity");

	Params::SmokeDistributionComponent_InitSmokeDensity Parms{};

	Parms.Density = Density;
	Parms.MapDetails = std::move(MapDetails);
	Parms.MapDetailsValid = MapDetailsValid;
	Parms.InSpawnRate = InSpawnRate;
	Parms.InBuildingOffset = InBuildingOffset;
	Parms.FromBuildingOffset = FromBuildingOffset;
	Parms.LifeTime = LifeTime;
	Parms.SpawnRateMultiplier = SpawnRateMultiplier;
	Parms.InSmokePostProccessExtendHeightInBuilding = InSmokePostProccessExtendHeightInBuilding;
	Parms.InSmokePostProcessExtendInBuilding = InSmokePostProcessExtendInBuilding;
	Parms.InDebugLines = InDebugLines;
	Parms.InCircularShape = InCircularShape;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function WeatherManager.SmokeDistributionComponent.RemoveCloud
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D                        InCloudKey                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USmokeDistributionComponent::RemoveCloud(const struct FVector2D& InCloudKey)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SmokeDistributionComponent", "RemoveCloud");

	Params::SmokeDistributionComponent_RemoveCloud Parms{};

	Parms.InCloudKey = std::move(InCloudKey);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function WeatherManager.SmokeDistributionComponent.SetVolumeBoxConsoleCommand
// (Final, Native, Public, BlueprintCallable)

void USmokeDistributionComponent::SetVolumeBoxConsoleCommand()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SmokeDistributionComponent", "SetVolumeBoxConsoleCommand");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function WeatherManager.WeatherManager.InitWeatherForecastSetup
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FWeatherForecastSetup            ForecastSetup                                          (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// float                                   CurrentAmount                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AWeatherManager::InitWeatherForecastSetup(struct FWeatherForecastSetup& ForecastSetup, float CurrentAmount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("WeatherManager", "InitWeatherForecastSetup");

	Params::WeatherManager_InitWeatherForecastSetup Parms{};

	Parms.ForecastSetup = std::move(ForecastSetup);
	Parms.CurrentAmount = CurrentAmount;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	ForecastSetup = std::move(Parms.ForecastSetup);
}


// Function WeatherManager.WeatherManager.UpdateWeatherForecastSetup
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FWeatherForecastSetup            ForecastSetup                                          (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// float                                   CurrentTime                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float AWeatherManager::UpdateWeatherForecastSetup(struct FWeatherForecastSetup& ForecastSetup, float CurrentTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("WeatherManager", "UpdateWeatherForecastSetup");

	Params::WeatherManager_UpdateWeatherForecastSetup Parms{};

	Parms.ForecastSetup = std::move(ForecastSetup);
	Parms.CurrentTime = CurrentTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	ForecastSetup = std::move(Parms.ForecastSetup);

	return Parms.ReturnValue;
}


// Function WeatherManager.WeatherManager.GetPostProcessComponent
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPostProcessComponent*            OutPostProcessComponent                                (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AWeatherManager::GetPostProcessComponent(class UPostProcessComponent** OutPostProcessComponent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeatherManager", "GetPostProcessComponent");

	Params::WeatherManager_GetPostProcessComponent Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutPostProcessComponent != nullptr)
		*OutPostProcessComponent = Parms.OutPostProcessComponent;
}


// Function WeatherManager.WeatherManager.IsRainOcclusionEnabled
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool AWeatherManager::IsRainOcclusionEnabled()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeatherManager", "IsRainOcclusionEnabled");

	Params::WeatherManager_IsRainOcclusionEnabled Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function WeatherManager.WeatherManager.IsRainPostprocessEnabled
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool AWeatherManager::IsRainPostprocessEnabled()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeatherManager", "IsRainPostprocessEnabled");

	Params::WeatherManager_IsRainPostprocessEnabled Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function WeatherManager.WeatherManagerComponent.SetRainAmount
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                                   NewRainAmount                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWeatherManagerComponent::SetRainAmount(float NewRainAmount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeatherManagerComponent", "SetRainAmount");

	Params::WeatherManagerComponent_SetRainAmount Parms{};

	Parms.NewRainAmount = NewRainAmount;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function WeatherManager.WeatherManagerComponent.SetRainOcclusionEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                                    Enabled                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWeatherManagerComponent::SetRainOcclusionEnabled(bool Enabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeatherManagerComponent", "SetRainOcclusionEnabled");

	Params::WeatherManagerComponent_SetRainOcclusionEnabled Parms{};

	Parms.Enabled = Enabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function WeatherManager.WeatherManagerComponent.SetRainOcclusionTextureSize
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                                   NewSize                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWeatherManagerComponent::SetRainOcclusionTextureSize(int32 NewSize)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeatherManagerComponent", "SetRainOcclusionTextureSize");

	Params::WeatherManagerComponent_SetRainOcclusionTextureSize Parms{};

	Parms.NewSize = NewSize;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function WeatherManager.WeatherManagerComponent.SetRainPostprocessEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                                    Enabled                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWeatherManagerComponent::SetRainPostprocessEnabled(bool Enabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeatherManagerComponent", "SetRainPostprocessEnabled");

	Params::WeatherManagerComponent_SetRainPostprocessEnabled Parms{};

	Parms.Enabled = Enabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function WeatherManager.WeatherManagerComponent.SetRainPostprocessMaterial
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMaterialInterface*               NewMaterial                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWeatherManagerComponent::SetRainPostprocessMaterial(class UMaterialInterface* NewMaterial)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeatherManagerComponent", "SetRainPostprocessMaterial");

	Params::WeatherManagerComponent_SetRainPostprocessMaterial Parms{};

	Parms.NewMaterial = NewMaterial;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function WeatherManager.WeatherManagerComponent.SetSnowCoverAmount
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                                   NewSnowCoverAmount                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWeatherManagerComponent::SetSnowCoverAmount(float NewSnowCoverAmount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeatherManagerComponent", "SetSnowCoverAmount");

	Params::WeatherManagerComponent_SetSnowCoverAmount Parms{};

	Parms.NewSnowCoverAmount = NewSnowCoverAmount;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function WeatherManager.WeatherManagerComponent.SetSnowingAmount
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                                   NewSnowingAmount                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWeatherManagerComponent::SetSnowingAmount(float NewSnowingAmount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeatherManagerComponent", "SetSnowingAmount");

	Params::WeatherManagerComponent_SetSnowingAmount Parms{};

	Parms.NewSnowingAmount = NewSnowingAmount;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function WeatherManager.WeatherManagerComponent.SetWeatherType
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// EWeatherType                            NewWeatherType                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWeatherManagerComponent::SetWeatherType(EWeatherType NewWeatherType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeatherManagerComponent", "SetWeatherType");

	Params::WeatherManagerComponent_SetWeatherType Parms{};

	Parms.NewWeatherType = NewWeatherType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function WeatherManager.WeatherManagerComponent.SetWetnessAmount
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                                   NewWetnessAmount                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWeatherManagerComponent::SetWetnessAmount(float NewWetnessAmount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeatherManagerComponent", "SetWetnessAmount");

	Params::WeatherManagerComponent_SetWetnessAmount Parms{};

	Parms.NewWetnessAmount = NewWetnessAmount;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function WeatherManager.WeatherManagerComponent.SetWindParticleAccelerationCoef
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                                   NewWindParticleAccelerationCoef                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWeatherManagerComponent::SetWindParticleAccelerationCoef(float NewWindParticleAccelerationCoef)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeatherManagerComponent", "SetWindParticleAccelerationCoef");

	Params::WeatherManagerComponent_SetWindParticleAccelerationCoef Parms{};

	Parms.NewWindParticleAccelerationCoef = NewWindParticleAccelerationCoef;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function WeatherManager.WeatherManagerComponent.SetWindParticleInitialVelocityCoef
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                                   NewWindParticleInitialVelocityCoef                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWeatherManagerComponent::SetWindParticleInitialVelocityCoef(float NewWindParticleInitialVelocityCoef)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeatherManagerComponent", "SetWindParticleInitialVelocityCoef");

	Params::WeatherManagerComponent_SetWindParticleInitialVelocityCoef Parms{};

	Parms.NewWindParticleInitialVelocityCoef = NewWindParticleInitialVelocityCoef;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function WeatherManager.WeatherManagerComponent.SetWindVector
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                          NewWindVector                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWeatherManagerComponent::SetWindVector(const struct FVector& NewWindVector)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeatherManagerComponent", "SetWindVector");

	Params::WeatherManagerComponent_SetWindVector Parms{};

	Parms.NewWindVector = std::move(NewWindVector);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function WeatherManager.WeatherManagerComponent.GetRainPostprocessMaterial
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UMaterialInterface*               ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMaterialInterface* UWeatherManagerComponent::GetRainPostprocessMaterial() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeatherManagerComponent", "GetRainPostprocessMaterial");

	Params::WeatherManagerComponent_GetRainPostprocessMaterial Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}

