#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SplineAudioFollower_Generic_01_River

#include "Basic.hpp"

#include "BP_SplineAudioFollower_Generic_01_River_classes.hpp"
#include "BP_SplineAudioFollower_Generic_01_River_parameters.hpp"


namespace SDK
{

// Function BP_SplineAudioFollower_Generic_01_River.BP_SplineAudioFollower_Generic_01_River_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SplineAudioFollower_Generic_01_River_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SplineAudioFollower_Generic_01_River_C", "ReceiveTick");

	Params::BP_SplineAudioFollower_Generic_01_River_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SplineAudioFollower_Generic_01_River.BP_SplineAudioFollower_Generic_01_River_C.ExecuteUbergraph_BP_SplineAudioFollower_Generic_01_River
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SplineAudioFollower_Generic_01_River_C::ExecuteUbergraph_BP_SplineAudioFollower_Generic_01_River(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SplineAudioFollower_Generic_01_River_C", "ExecuteUbergraph_BP_SplineAudioFollower_Generic_01_River");

	Params::BP_SplineAudioFollower_Generic_01_River_C_ExecuteUbergraph_BP_SplineAudioFollower_Generic_01_River Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

