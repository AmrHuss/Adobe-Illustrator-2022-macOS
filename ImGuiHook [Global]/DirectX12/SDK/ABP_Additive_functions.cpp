#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_Additive

#include "Basic.hpp"

#include "ABP_Additive_classes.hpp"
#include "ABP_Additive_parameters.hpp"


namespace SDK
{

// Function ABP_Additive.ABP_Additive_C.ExecuteUbergraph_ABP_Additive
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_Additive_C::ExecuteUbergraph_ABP_Additive(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_Additive_C", "ExecuteUbergraph_ABP_Additive");

	Params::ABP_Additive_C_ExecuteUbergraph_ABP_Additive Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ABP_Additive.ABP_Additive_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        InPose                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                        AnimGraph_0                                            (Parm, OutParm, NoDestructor)

void UABP_Additive_C::AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_Additive_C", "AnimGraph");

	Params::ABP_Additive_C_AnimGraph Parms{};

	Parms.InPose = std::move(InPose);

	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph_0 != nullptr)
		*AnimGraph_0 = std::move(Parms.AnimGraph_0);
}

}

