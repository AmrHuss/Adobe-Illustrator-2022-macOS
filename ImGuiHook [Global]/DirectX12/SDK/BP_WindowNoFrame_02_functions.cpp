#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_WindowNoFrame_02

#include "Basic.hpp"

#include "BP_WindowNoFrame_02_classes.hpp"
#include "BP_WindowNoFrame_02_parameters.hpp"


namespace SDK
{

// Function BP_WindowNoFrame_02.BP_WindowNoFrame_02_C.ExecuteUbergraph_BP_WindowNoFrame_02
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_WindowNoFrame_02_C::ExecuteUbergraph_BP_WindowNoFrame_02(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WindowNoFrame_02_C", "ExecuteUbergraph_BP_WindowNoFrame_02");

	Params::BP_WindowNoFrame_02_C_ExecuteUbergraph_BP_WindowNoFrame_02 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_WindowNoFrame_02.BP_WindowNoFrame_02_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_WindowNoFrame_02_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WindowNoFrame_02_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}

