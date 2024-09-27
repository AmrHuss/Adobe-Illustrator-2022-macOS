#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Container_Base

#include "Basic.hpp"

#include "BP_Container_Base_classes.hpp"
#include "BP_Container_Base_parameters.hpp"


namespace SDK
{

// Function BP_Container_Base.BP_Container_Base_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Container_Base_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Container_Base_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}

