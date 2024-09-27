#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_GunFight_MatchProgress

#include "Basic.hpp"

#include "UI_GunFight_MatchProgress_classes.hpp"
#include "UI_GunFight_MatchProgress_parameters.hpp"


namespace SDK
{

// Function UI_GunFight_MatchProgress.UI_GunFight_MatchProgress_C.ExecuteUbergraph_UI_GunFight_MatchProgress
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_GunFight_MatchProgress_C::ExecuteUbergraph_UI_GunFight_MatchProgress(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_GunFight_MatchProgress_C", "ExecuteUbergraph_UI_GunFight_MatchProgress");

	Params::UI_GunFight_MatchProgress_C_ExecuteUbergraph_UI_GunFight_MatchProgress Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_GunFight_MatchProgress.UI_GunFight_MatchProgress_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_GunFight_MatchProgress_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_GunFight_MatchProgress_C", "PreConstruct");

	Params::UI_GunFight_MatchProgress_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_GunFight_MatchProgress.UI_GunFight_MatchProgress_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_GunFight_MatchProgress_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_GunFight_MatchProgress_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_GunFight_MatchProgress.UI_GunFight_MatchProgress_C.UpdatePlayerIndicators
// (BlueprintCallable, BlueprintEvent)

void UUI_GunFight_MatchProgress_C::UpdatePlayerIndicators()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_GunFight_MatchProgress_C", "UpdatePlayerIndicators");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_GunFight_MatchProgress.UI_GunFight_MatchProgress_C.UpdatePlayerIndicatorIcon
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_GunFight_PlayerIndicator_C*   Indicator                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    WasKicked                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_GunFight_MatchProgress_C::UpdatePlayerIndicatorIcon(class UUI_GunFight_PlayerIndicator_C* Indicator, bool WasKicked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_GunFight_MatchProgress_C", "UpdatePlayerIndicatorIcon");

	Params::UI_GunFight_MatchProgress_C_UpdatePlayerIndicatorIcon Parms{};

	Parms.Indicator = Indicator;
	Parms.WasKicked = WasKicked;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_GunFight_MatchProgress.UI_GunFight_MatchProgress_C.New Round Started
// (BlueprintCallable, BlueprintEvent)

void UUI_GunFight_MatchProgress_C::New_Round_Started()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_GunFight_MatchProgress_C", "New Round Started");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_GunFight_MatchProgress.UI_GunFight_MatchProgress_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_GunFight_MatchProgress_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_GunFight_MatchProgress_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_GunFight_MatchProgress.UI_GunFight_MatchProgress_C.Set Round Timer
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Round_Time                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Is_Objective_Phase                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_GunFight_MatchProgress_C::Set_Round_Timer(int32 Round_Time, bool Is_Objective_Phase)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_GunFight_MatchProgress_C", "Set Round Timer");

	Params::UI_GunFight_MatchProgress_C_Set_Round_Timer Parms{};

	Parms.Round_Time = Round_Time;
	Parms.Is_Objective_Phase = Is_Objective_Phase;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_GunFight_MatchProgress.UI_GunFight_MatchProgress_C.Update Win Rounds
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Attacker_Won_Rounds                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Defender_Won_Rounds                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_GunFight_MatchProgress_C::Update_Win_Rounds(int32 Attacker_Won_Rounds, int32 Defender_Won_Rounds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_GunFight_MatchProgress_C", "Update Win Rounds");

	Params::UI_GunFight_MatchProgress_C_Update_Win_Rounds Parms{};

	Parms.Attacker_Won_Rounds = Attacker_Won_Rounds;
	Parms.Defender_Won_Rounds = Defender_Won_Rounds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_GunFight_MatchProgress.UI_GunFight_MatchProgress_C.Find Teams
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_GunFight_MatchProgress_C::Find_Teams()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_GunFight_MatchProgress_C", "Find Teams");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_GunFight_MatchProgress.UI_GunFight_MatchProgress_C.Add Widget To Notification Holder
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                          Widget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_GunFight_MatchProgress_C::Add_Widget_To_Notification_Holder(class UWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_GunFight_MatchProgress_C", "Add Widget To Notification Holder");

	Params::UI_GunFight_MatchProgress_C_Add_Widget_To_Notification_Holder Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_GunFight_MatchProgress.UI_GunFight_MatchProgress_C.SetupWinnerPoints
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUI_GunFight_MatchProgress_C::SetupWinnerPoints()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_GunFight_MatchProgress_C", "SetupWinnerPoints");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_GunFight_MatchProgress.UI_GunFight_MatchProgress_C.GenerateWinPoints
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   RoundsToWin_0                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_GunFight_MatchProgress_C::GenerateWinPoints(int32 RoundsToWin_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_GunFight_MatchProgress_C", "GenerateWinPoints");

	Params::UI_GunFight_MatchProgress_C_GenerateWinPoints Parms{};

	Parms.RoundsToWin_0 = RoundsToWin_0;

	UObject::ProcessEvent(Func, &Parms);
}

}

