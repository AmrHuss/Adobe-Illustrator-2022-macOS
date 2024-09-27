#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SelectionWheelComponent_Shelter

#include "Basic.hpp"

#include "BP_SelectionWheelComponent_Shelter_classes.hpp"
#include "BP_SelectionWheelComponent_Shelter_parameters.hpp"


namespace SDK
{

// Function BP_SelectionWheelComponent_Shelter.BP_SelectionWheelComponent_Shelter_C.CanWheelOpen
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// ESelectionWheelType                     WheelType                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UBP_SelectionWheelComponent_Shelter_C::CanWheelOpen(const ESelectionWheelType& WheelType) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SelectionWheelComponent_Shelter_C", "CanWheelOpen");

	Params::BP_SelectionWheelComponent_Shelter_C_CanWheelOpen Parms{};

	Parms.WheelType = WheelType;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

