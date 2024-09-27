#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_GMComponent_Radiation

#include "Basic.hpp"

#include "BP_GMComponent_Radiation_classes.hpp"
#include "BP_GMComponent_Radiation_parameters.hpp"


namespace SDK
{

// Function BP_GMComponent_Radiation.BP_GMComponent_Radiation_C.Radiation Wave Activated__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBP_GMComponent_Radiation_C::Radiation_Wave_Activated__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GMComponent_Radiation_C", "Radiation Wave Activated__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_GMComponent_Radiation.BP_GMComponent_Radiation_C.ExecuteUbergraph_BP_GMComponent_Radiation
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_GMComponent_Radiation_C::ExecuteUbergraph_BP_GMComponent_Radiation(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GMComponent_Radiation_C", "ExecuteUbergraph_BP_GMComponent_Radiation");

	Params::BP_GMComponent_Radiation_C_ExecuteUbergraph_BP_GMComponent_Radiation Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_GMComponent_Radiation.BP_GMComponent_Radiation_C.EventBeginRadiationWave
// (BlueprintCallable, BlueprintEvent)

void UBP_GMComponent_Radiation_C::EventBeginRadiationWave()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GMComponent_Radiation_C", "EventBeginRadiationWave");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_GMComponent_Radiation.BP_GMComponent_Radiation_C.ScheduleRadiationWave
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   TimeUntilWave                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                     TimerHandle                                            (Parm, OutParm, NoDestructor, HasGetValueTypeHash)

void UBP_GMComponent_Radiation_C::ScheduleRadiationWave(float TimeUntilWave, struct FTimerHandle* TimerHandle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GMComponent_Radiation_C", "ScheduleRadiationWave");

	Params::BP_GMComponent_Radiation_C_ScheduleRadiationWave Parms{};

	Parms.TimeUntilWave = TimeUntilWave;

	UObject::ProcessEvent(Func, &Parms);

	if (TimerHandle != nullptr)
		*TimerHandle = std::move(Parms.TimerHandle);
}

}

