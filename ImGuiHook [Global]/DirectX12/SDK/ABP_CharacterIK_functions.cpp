#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_CharacterIK

#include "Basic.hpp"

#include "ABP_CharacterIK_classes.hpp"
#include "ABP_CharacterIK_parameters.hpp"


namespace SDK
{

// Function ABP_CharacterIK.ABP_CharacterIK_C.ExecuteUbergraph_ABP_CharacterIK
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_CharacterIK_C::ExecuteUbergraph_ABP_CharacterIK(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_CharacterIK_C", "ExecuteUbergraph_ABP_CharacterIK");

	Params::ABP_CharacterIK_C_ExecuteUbergraph_ABP_CharacterIK Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ABP_CharacterIK.ABP_CharacterIK_C.ReInitialize
// (BlueprintCallable, BlueprintEvent)

void UABP_CharacterIK_C::ReInitialize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_CharacterIK_C", "ReInitialize");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_CharacterIK.ABP_CharacterIK_C.BlueprintInitializeAnimation
// (Event, Public, BlueprintEvent)

void UABP_CharacterIK_C::BlueprintInitializeAnimation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_CharacterIK_C", "BlueprintInitializeAnimation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_CharacterIK.ABP_CharacterIK_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaTimeX                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_CharacterIK_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_CharacterIK_C", "BlueprintUpdateAnimation");

	Params::ABP_CharacterIK_C_BlueprintUpdateAnimation Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ABP_CharacterIK.ABP_CharacterIK_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        InPose                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                        AnimGraph_0                                            (Parm, OutParm, NoDestructor)

void UABP_CharacterIK_C::AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_CharacterIK_C", "AnimGraph");

	Params::ABP_CharacterIK_C_AnimGraph Parms{};

	Parms.InPose = std::move(InPose);

	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph_0 != nullptr)
		*AnimGraph_0 = std::move(Parms.AnimGraph_0);
}

}

