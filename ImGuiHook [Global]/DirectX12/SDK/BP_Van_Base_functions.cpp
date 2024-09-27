#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Van_Base

#include "Basic.hpp"

#include "BP_Van_Base_classes.hpp"
#include "BP_Van_Base_parameters.hpp"


namespace SDK
{

// Function BP_Van_Base.BP_Van_Base_C.ExecuteUbergraph_BP_Van_Base
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Van_Base_C::ExecuteUbergraph_BP_Van_Base(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Van_Base_C", "ExecuteUbergraph_BP_Van_Base");

	Params::BP_Van_Base_C_ExecuteUbergraph_BP_Van_Base Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Van_Base.BP_Van_Base_C.AdjustWeather
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   CurrentRainAmount                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   CurrentWindIntensity                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          CurrentWindDirection                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   CurrentWetnessAmount                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Van_Base_C::AdjustWeather(float CurrentRainAmount, float CurrentWindIntensity, const struct FVector& CurrentWindDirection, float CurrentWetnessAmount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Van_Base_C", "AdjustWeather");

	Params::BP_Van_Base_C_AdjustWeather Parms{};

	Parms.CurrentRainAmount = CurrentRainAmount;
	Parms.CurrentWindIntensity = CurrentWindIntensity;
	Parms.CurrentWindDirection = std::move(CurrentWindDirection);
	Parms.CurrentWetnessAmount = CurrentWetnessAmount;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Van_Base.BP_Van_Base_C.AdjustRainIntensity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   CurrentRainAmount                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   CurrentWetnessAmount                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Van_Base_C::AdjustRainIntensity(float CurrentRainAmount, float CurrentWetnessAmount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Van_Base_C", "AdjustRainIntensity");

	Params::BP_Van_Base_C_AdjustRainIntensity Parms{};

	Parms.CurrentRainAmount = CurrentRainAmount;
	Parms.CurrentWetnessAmount = CurrentWetnessAmount;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Van_Base.BP_Van_Base_C.SetHeavyRain
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    HeavyRain                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Van_Base_C::SetHeavyRain(bool HeavyRain)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Van_Base_C", "SetHeavyRain");

	Params::BP_Van_Base_C_SetHeavyRain Parms{};

	Parms.HeavyRain = HeavyRain;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Van_Base.BP_Van_Base_C.AdjustWindDirection
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          CurrentWindDirection                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Van_Base_C::AdjustWindDirection(const struct FVector& CurrentWindDirection)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Van_Base_C", "AdjustWindDirection");

	Params::BP_Van_Base_C_AdjustWindDirection Parms{};

	Parms.CurrentWindDirection = std::move(CurrentWindDirection);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Van_Base.BP_Van_Base_C.AdjustWindIntensity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   CurrentWindIntensity                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Van_Base_C::AdjustWindIntensity(float CurrentWindIntensity)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Van_Base_C", "AdjustWindIntensity");

	Params::BP_Van_Base_C_AdjustWindIntensity Parms{};

	Parms.CurrentWindIntensity = CurrentWindIntensity;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Van_Base.BP_Van_Base_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Van_Base_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Van_Base_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Van_Base.BP_Van_Base_C.SetColours
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Van_Base_C::SetColours()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Van_Base_C", "SetColours");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Van_Base.BP_Van_Base_C.SetMeshes
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Van_Base_C::SetMeshes()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Van_Base_C", "SetMeshes");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Van_Base.BP_Van_Base_C.SetWheels
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Van_Base_C::SetWheels()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Van_Base_C", "SetWheels");

	UObject::ProcessEvent(Func, nullptr);
}

}

