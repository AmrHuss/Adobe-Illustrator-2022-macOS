#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SplineAudioFollower

#include "Basic.hpp"

#include "BP_SplineAudioFollower_classes.hpp"
#include "BP_SplineAudioFollower_parameters.hpp"


namespace SDK
{

// Function BP_SplineAudioFollower.BP_SplineAudioFollower_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SplineAudioFollower_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SplineAudioFollower_C", "ReceiveTick");

	Params::BP_SplineAudioFollower_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SplineAudioFollower.BP_SplineAudioFollower_C.ExecuteUbergraph_BP_SplineAudioFollower
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SplineAudioFollower_C::ExecuteUbergraph_BP_SplineAudioFollower(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SplineAudioFollower_C", "ExecuteUbergraph_BP_SplineAudioFollower");

	Params::BP_SplineAudioFollower_C_ExecuteUbergraph_BP_SplineAudioFollower Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

