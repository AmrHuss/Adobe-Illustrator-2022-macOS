#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SpectatorManager_Gunfight

#include "Basic.hpp"

#include "BP_SpectatorManager_Gunfight_classes.hpp"
#include "BP_SpectatorManager_Gunfight_parameters.hpp"


namespace SDK
{

// Function BP_SpectatorManager_Gunfight.BP_SpectatorManager_Gunfight_C.ExecuteUbergraph_BP_SpectatorManager_Gunfight
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SpectatorManager_Gunfight_C::ExecuteUbergraph_BP_SpectatorManager_Gunfight(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SpectatorManager_Gunfight_C", "ExecuteUbergraph_BP_SpectatorManager_Gunfight");

	Params::BP_SpectatorManager_Gunfight_C_ExecuteUbergraph_BP_SpectatorManager_Gunfight Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SpectatorManager_Gunfight.BP_SpectatorManager_Gunfight_C.OnUnableToSpectate
// (Event, Public, BlueprintEvent)
// Parameters:
// class AHumanPlayerController*           SubjectMind                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SpectatorManager_Gunfight_C::OnUnableToSpectate(class AHumanPlayerController* SubjectMind)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SpectatorManager_Gunfight_C", "OnUnableToSpectate");

	Params::BP_SpectatorManager_Gunfight_C_OnUnableToSpectate Parms{};

	Parms.SubjectMind = SubjectMind;

	UObject::ProcessEvent(Func, &Parms);
}

}

