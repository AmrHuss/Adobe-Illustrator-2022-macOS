#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Raid_MatchProgress

#include "Basic.hpp"

#include "UI_Raid_MatchProgress_classes.hpp"
#include "UI_Raid_MatchProgress_parameters.hpp"


namespace SDK
{

// Function UI_Raid_MatchProgress.UI_Raid_MatchProgress_C.ExecuteUbergraph_UI_Raid_MatchProgress
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Raid_MatchProgress_C::ExecuteUbergraph_UI_Raid_MatchProgress(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Raid_MatchProgress_C", "ExecuteUbergraph_UI_Raid_MatchProgress");

	Params::UI_Raid_MatchProgress_C_ExecuteUbergraph_UI_Raid_MatchProgress Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Raid_MatchProgress.UI_Raid_MatchProgress_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_Raid_MatchProgress_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Raid_MatchProgress_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Raid_MatchProgress.UI_Raid_MatchProgress_C.Set Round Timer
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Round_Time                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Raid_MatchProgress_C::Set_Round_Timer(int32 Round_Time)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Raid_MatchProgress_C", "Set Round Timer");

	Params::UI_Raid_MatchProgress_C_Set_Round_Timer Parms{};

	Parms.Round_Time = Round_Time;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Raid_MatchProgress.UI_Raid_MatchProgress_C.Update Win Rounds
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Attacker_Won_Rounds                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Defender_Won_Rounds                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Raid_MatchProgress_C::Update_Win_Rounds(int32 Attacker_Won_Rounds, int32 Defender_Won_Rounds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Raid_MatchProgress_C", "Update Win Rounds");

	Params::UI_Raid_MatchProgress_C_Update_Win_Rounds Parms{};

	Parms.Attacker_Won_Rounds = Attacker_Won_Rounds;
	Parms.Defender_Won_Rounds = Defender_Won_Rounds;

	UObject::ProcessEvent(Func, &Parms);
}

}

