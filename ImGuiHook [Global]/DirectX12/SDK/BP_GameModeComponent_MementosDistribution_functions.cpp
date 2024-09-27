#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_GameModeComponent_MementosDistribution

#include "Basic.hpp"

#include "BP_GameModeComponent_MementosDistribution_classes.hpp"
#include "BP_GameModeComponent_MementosDistribution_parameters.hpp"


namespace SDK
{

// Function BP_GameModeComponent_MementosDistribution.BP_GameModeComponent_MementosDistribution_C.ExecuteUbergraph_BP_GameModeComponent_MementosDistribution
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_GameModeComponent_MementosDistribution_C::ExecuteUbergraph_BP_GameModeComponent_MementosDistribution(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GameModeComponent_MementosDistribution_C", "ExecuteUbergraph_BP_GameModeComponent_MementosDistribution");

	Params::BP_GameModeComponent_MementosDistribution_C_ExecuteUbergraph_BP_GameModeComponent_MementosDistribution Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_GameModeComponent_MementosDistribution.BP_GameModeComponent_MementosDistribution_C.Cheat Spawn All Mementos
// (BlueprintCallable, BlueprintEvent)

void UBP_GameModeComponent_MementosDistribution_C::Cheat_Spawn_All_Mementos()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GameModeComponent_MementosDistribution_C", "Cheat Spawn All Mementos");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_GameModeComponent_MementosDistribution.BP_GameModeComponent_MementosDistribution_C.Match Has Started
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void UBP_GameModeComponent_MementosDistribution_C::Match_Has_Started()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GameModeComponent_MementosDistribution_C", "Match Has Started");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_GameModeComponent_MementosDistribution.BP_GameModeComponent_MementosDistribution_C.OnLoaded_B08996E843B69641864BC48BB3667459
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TSubclassOf<class UObject>              Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

void UBP_GameModeComponent_MementosDistribution_C::OnLoaded_B08996E843B69641864BC48BB3667459(TSubclassOf<class UObject> Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GameModeComponent_MementosDistribution_C", "OnLoaded_B08996E843B69641864BC48BB3667459");

	Params::BP_GameModeComponent_MementosDistribution_C_OnLoaded_B08996E843B69641864BC48BB3667459 Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}

}

