#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PlayerState_TvT_FuelWars

#include "Basic.hpp"

#include "BP_PlayerState_TvT_FuelWars_classes.hpp"
#include "BP_PlayerState_TvT_FuelWars_parameters.hpp"


namespace SDK
{

// Function BP_PlayerState_TvT_FuelWars.BP_PlayerState_TvT_FuelWars_C.ExecuteUbergraph_BP_PlayerState_TvT_FuelWars
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerState_TvT_FuelWars_C::ExecuteUbergraph_BP_PlayerState_TvT_FuelWars(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerState_TvT_FuelWars_C", "ExecuteUbergraph_BP_PlayerState_TvT_FuelWars");

	Params::BP_PlayerState_TvT_FuelWars_C_ExecuteUbergraph_BP_PlayerState_TvT_FuelWars Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerState_TvT_FuelWars.BP_PlayerState_TvT_FuelWars_C.Set is carrying barrel
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Is_carrying_barrel_0                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_PlayerState_TvT_FuelWars_C::Set_is_carrying_barrel(bool Is_carrying_barrel_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerState_TvT_FuelWars_C", "Set is carrying barrel");

	Params::BP_PlayerState_TvT_FuelWars_C_Set_is_carrying_barrel Parms{};

	Parms.Is_carrying_barrel_0 = Is_carrying_barrel_0;

	UObject::ProcessEvent(Func, &Parms);
}

}

