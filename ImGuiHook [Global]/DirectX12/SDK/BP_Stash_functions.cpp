#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Stash

#include "Basic.hpp"

#include "BP_Stash_classes.hpp"
#include "BP_Stash_parameters.hpp"


namespace SDK
{

// Function BP_Stash.BP_Stash_C.ExecuteUbergraph_BP_Stash
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Stash_C::ExecuteUbergraph_BP_Stash(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Stash_C", "ExecuteUbergraph_BP_Stash");

	Params::BP_Stash_C_ExecuteUbergraph_BP_Stash Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Stash.BP_Stash_C.BndEvt__Storage_K2Node_ComponentBoundEvent_0_MaterialUpdated__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                                   NewMaterialCount                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Stash_C::BndEvt__Storage_K2Node_ComponentBoundEvent_0_MaterialUpdated__DelegateSignature(int32 NewMaterialCount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Stash_C", "BndEvt__Storage_K2Node_ComponentBoundEvent_0_MaterialUpdated__DelegateSignature");

	Params::BP_Stash_C_BndEvt__Storage_K2Node_ComponentBoundEvent_0_MaterialUpdated__DelegateSignature Parms{};

	Parms.NewMaterialCount = NewMaterialCount;

	UObject::ProcessEvent(Func, &Parms);
}

}

