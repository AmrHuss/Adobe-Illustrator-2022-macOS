#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SpectatorManager_TVTDeathMatch

#include "Basic.hpp"

#include "BP_SpectatorManager_TVTDeathMatch_classes.hpp"
#include "BP_SpectatorManager_TVTDeathMatch_parameters.hpp"


namespace SDK
{

// Function BP_SpectatorManager_TVTDeathMatch.BP_SpectatorManager_TVTDeathMatch_C.ExecuteUbergraph_BP_SpectatorManager_TVTDeathMatch
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SpectatorManager_TVTDeathMatch_C::ExecuteUbergraph_BP_SpectatorManager_TVTDeathMatch(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SpectatorManager_TVTDeathMatch_C", "ExecuteUbergraph_BP_SpectatorManager_TVTDeathMatch");

	Params::BP_SpectatorManager_TVTDeathMatch_C_ExecuteUbergraph_BP_SpectatorManager_TVTDeathMatch Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SpectatorManager_TVTDeathMatch.BP_SpectatorManager_TVTDeathMatch_C.ProcessSpectatorEvent
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// ESpectateEvent                          Event                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           Parameter                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                       Fallback                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor)

void ABP_SpectatorManager_TVTDeathMatch_C::ProcessSpectatorEvent(ESpectateEvent Event, class AActor* Parameter, const struct FTransform& Fallback)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SpectatorManager_TVTDeathMatch_C", "ProcessSpectatorEvent");

	Params::BP_SpectatorManager_TVTDeathMatch_C_ProcessSpectatorEvent Parms{};

	Parms.Event = Event;
	Parms.Parameter = Parameter;
	Parms.Fallback = std::move(Fallback);

	UObject::ProcessEvent(Func, &Parms);
}

}

