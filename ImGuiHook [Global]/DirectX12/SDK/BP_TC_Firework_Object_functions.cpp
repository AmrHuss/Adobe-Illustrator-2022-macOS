#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_TC_Firework_Object

#include "Basic.hpp"

#include "BP_TC_Firework_Object_classes.hpp"
#include "BP_TC_Firework_Object_parameters.hpp"


namespace SDK
{

// Function BP_TC_Firework_Object.BP_TC_Firework_Object_C.ExecuteUbergraph_BP_TC_Firework_Object
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TC_Firework_Object_C::ExecuteUbergraph_BP_TC_Firework_Object(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TC_Firework_Object_C", "ExecuteUbergraph_BP_TC_Firework_Object");

	Params::BP_TC_Firework_Object_C_ExecuteUbergraph_BP_TC_Firework_Object Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_TC_Firework_Object.BP_TC_Firework_Object_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_TC_Firework_Object_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TC_Firework_Object_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}

