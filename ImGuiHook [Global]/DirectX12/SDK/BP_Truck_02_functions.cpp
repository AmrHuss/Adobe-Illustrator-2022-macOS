#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Truck_02

#include "Basic.hpp"

#include "BP_Truck_02_classes.hpp"
#include "BP_Truck_02_parameters.hpp"


namespace SDK
{

// Function BP_Truck_02.BP_Truck_02_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Truck_02_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Truck_02_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Truck_02.BP_Truck_02_C.SetEmptyWheel
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Truck_02_C::SetEmptyWheel()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Truck_02_C", "SetEmptyWheel");

	UObject::ProcessEvent(Func, nullptr);
}

}

