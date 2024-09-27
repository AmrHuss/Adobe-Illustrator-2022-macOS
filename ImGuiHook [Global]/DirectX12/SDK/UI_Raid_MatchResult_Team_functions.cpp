#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Raid_MatchResult_Team

#include "Basic.hpp"

#include "UI_Raid_MatchResult_Team_classes.hpp"
#include "UI_Raid_MatchResult_Team_parameters.hpp"


namespace SDK
{

// Function UI_Raid_MatchResult_Team.UI_Raid_MatchResult_Team_C.Fill Info
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_GSC_Team_Raid_C*              Team                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Is_Friendly                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_Raid_MatchResult_Team_C::Fill_Info(class UBP_GSC_Team_Raid_C* Team, bool Is_Friendly)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Raid_MatchResult_Team_C", "Fill Info");

	Params::UI_Raid_MatchResult_Team_C_Fill_Info Parms{};

	Parms.Team = Team;
	Parms.Is_Friendly = Is_Friendly;

	UObject::ProcessEvent(Func, &Parms);
}

}

