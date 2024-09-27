#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ReLoadable

#include "Basic.hpp"

#include "BP_ReLoadable_classes.hpp"
#include "BP_ReLoadable_parameters.hpp"


namespace SDK
{

// Function BP_ReLoadable.BP_ReLoadable_C.IsDirty
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsDirty_0                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBP_ReLoadable_C::IsDirty(bool* IsDirty_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ReLoadable_C", "IsDirty");

	Params::BP_ReLoadable_C_IsDirty Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (IsDirty_0 != nullptr)
		*IsDirty_0 = Parms.IsDirty_0;
}


// Function BP_ReLoadable.BP_ReLoadable_C.ResetActorState
// (Public, BlueprintCallable, BlueprintEvent)

void IBP_ReLoadable_C::ResetActorState()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ReLoadable_C", "ResetActorState");

	UObject::ProcessEvent(Func, nullptr);
}

}

