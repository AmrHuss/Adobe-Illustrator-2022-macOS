#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ADM_LandMine_GMComponent

#include "Basic.hpp"

#include "BP_ADM_LandMine_GMComponent_classes.hpp"
#include "BP_ADM_LandMine_GMComponent_parameters.hpp"


namespace SDK
{

// Function BP_ADM_LandMine_GMComponent.BP_ADM_LandMine_GMComponent_C.ExecuteUbergraph_BP_ADM_LandMine_GMComponent
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ADM_LandMine_GMComponent_C::ExecuteUbergraph_BP_ADM_LandMine_GMComponent(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ADM_LandMine_GMComponent_C", "ExecuteUbergraph_BP_ADM_LandMine_GMComponent");

	Params::BP_ADM_LandMine_GMComponent_C_ExecuteUbergraph_BP_ADM_LandMine_GMComponent Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ADM_LandMine_GMComponent.BP_ADM_LandMine_GMComponent_C.Verify that everything spawned properly
// (BlueprintCallable, BlueprintEvent)

void UBP_ADM_LandMine_GMComponent_C::Verify_that_everything_spawned_properly()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ADM_LandMine_GMComponent_C", "Verify that everything spawned properly");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ADM_LandMine_GMComponent.BP_ADM_LandMine_GMComponent_C.Initialize Component
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void UBP_ADM_LandMine_GMComponent_C::Initialize_Component()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ADM_LandMine_GMComponent_C", "Initialize Component");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ADM_LandMine_GMComponent.BP_ADM_LandMine_GMComponent_C.Spawn LandMines
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Success                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_ADM_LandMine_GMComponent_C::Spawn_LandMines(bool* Success)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ADM_LandMine_GMComponent_C", "Spawn LandMines");

	Params::BP_ADM_LandMine_GMComponent_C_Spawn_LandMines Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;
}

}

