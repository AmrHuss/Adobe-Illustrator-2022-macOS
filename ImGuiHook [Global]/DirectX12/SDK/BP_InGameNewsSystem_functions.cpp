#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_InGameNewsSystem

#include "Basic.hpp"

#include "BP_InGameNewsSystem_classes.hpp"
#include "BP_InGameNewsSystem_parameters.hpp"


namespace SDK
{

// Function BP_InGameNewsSystem.BP_InGameNewsSystem_C.ExecuteUbergraph_BP_InGameNewsSystem
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_InGameNewsSystem_C::ExecuteUbergraph_BP_InGameNewsSystem(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_InGameNewsSystem_C", "ExecuteUbergraph_BP_InGameNewsSystem");

	Params::BP_InGameNewsSystem_C_ExecuteUbergraph_BP_InGameNewsSystem Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_InGameNewsSystem.BP_InGameNewsSystem_C.RemoveNotFoundNewsFromSaveFile
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// TArray<struct FNewsDto>                 News                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBP_InGameNewsSystem_C::RemoveNotFoundNewsFromSaveFile(const TArray<struct FNewsDto>& News)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_InGameNewsSystem_C", "RemoveNotFoundNewsFromSaveFile");

	Params::BP_InGameNewsSystem_C_RemoveNotFoundNewsFromSaveFile Parms{};

	Parms.News = std::move(News);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_InGameNewsSystem.BP_InGameNewsSystem_C.NeedsToBeDisplayed
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FNewsDto                         News                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UBP_InGameNewsSystem_C::NeedsToBeDisplayed(const struct FNewsDto& News)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_InGameNewsSystem_C", "NeedsToBeDisplayed");

	Params::BP_InGameNewsSystem_C_NeedsToBeDisplayed Parms{};

	Parms.News = std::move(News);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

