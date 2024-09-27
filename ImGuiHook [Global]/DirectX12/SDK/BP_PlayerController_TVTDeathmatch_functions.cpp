#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PlayerController_TVTDeathmatch

#include "Basic.hpp"

#include "BP_PlayerController_TVTDeathmatch_classes.hpp"
#include "BP_PlayerController_TVTDeathmatch_parameters.hpp"


namespace SDK
{

// Function BP_PlayerController_TVTDeathmatch.BP_PlayerController_TVTDeathmatch_C.ExecuteUbergraph_BP_PlayerController_TVTDeathmatch
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerController_TVTDeathmatch_C::ExecuteUbergraph_BP_PlayerController_TVTDeathmatch(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerController_TVTDeathmatch_C", "ExecuteUbergraph_BP_PlayerController_TVTDeathmatch");

	Params::BP_PlayerController_TVTDeathmatch_C_ExecuteUbergraph_BP_PlayerController_TVTDeathmatch Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerController_TVTDeathmatch.BP_PlayerController_TVTDeathmatch_C.CompassMarkerOnLastManStanding
// (BlueprintCallable, BlueprintEvent)

void ABP_PlayerController_TVTDeathmatch_C::CompassMarkerOnLastManStanding()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerController_TVTDeathmatch_C", "CompassMarkerOnLastManStanding");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerController_TVTDeathmatch.BP_PlayerController_TVTDeathmatch_C.AddPlayerToLastManStanding
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)

void ABP_PlayerController_TVTDeathmatch_C::AddPlayerToLastManStanding()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerController_TVTDeathmatch_C", "AddPlayerToLastManStanding");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerController_TVTDeathmatch.BP_PlayerController_TVTDeathmatch_C.CycleWeaponOut
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FCloudMatchWeaponGroup>   AllLoadouts                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FCloudMatchWeaponGroup           LoadoutToRemove                                        (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PlayerController_TVTDeathmatch_C::CycleWeaponOut(const TArray<struct FCloudMatchWeaponGroup>& AllLoadouts, const struct FCloudMatchWeaponGroup& LoadoutToRemove)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerController_TVTDeathmatch_C", "CycleWeaponOut");

	Params::BP_PlayerController_TVTDeathmatch_C_CycleWeaponOut Parms{};

	Parms.AllLoadouts = std::move(AllLoadouts);
	Parms.LoadoutToRemove = std::move(LoadoutToRemove);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerController_TVTDeathmatch.BP_PlayerController_TVTDeathmatch_C.ReuseKilledPlayer
// (BlueprintCallable, BlueprintEvent)

void ABP_PlayerController_TVTDeathmatch_C::ReuseKilledPlayer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerController_TVTDeathmatch_C", "ReuseKilledPlayer");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerController_TVTDeathmatch.BP_PlayerController_TVTDeathmatch_C.Match Ended
// (BlueprintCallable, BlueprintEvent)

void ABP_PlayerController_TVTDeathmatch_C::Match_Ended()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerController_TVTDeathmatch_C", "Match Ended");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerController_TVTDeathmatch.BP_PlayerController_TVTDeathmatch_C.ReceivePossess
// (Event, Protected, BlueprintEvent)
// Parameters:
// class APawn*                            PossessedPawn                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerController_TVTDeathmatch_C::ReceivePossess(class APawn* PossessedPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerController_TVTDeathmatch_C", "ReceivePossess");

	Params::BP_PlayerController_TVTDeathmatch_C_ReceivePossess Parms{};

	Parms.PossessedPawn = PossessedPawn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerController_TVTDeathmatch.BP_PlayerController_TVTDeathmatch_C.Save Match ID on Client
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           Match_ID                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void ABP_PlayerController_TVTDeathmatch_C::Save_Match_ID_on_Client(const class FString& Match_ID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerController_TVTDeathmatch_C", "Save Match ID on Client");

	Params::BP_PlayerController_TVTDeathmatch_C_Save_Match_ID_on_Client Parms{};

	Parms.Match_ID = std::move(Match_ID);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerController_TVTDeathmatch.BP_PlayerController_TVTDeathmatch_C.Died
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_PlayerController_TVTDeathmatch_C::Died()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerController_TVTDeathmatch_C", "Died");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerController_TVTDeathmatch.BP_PlayerController_TVTDeathmatch_C.Player Connected Server
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void ABP_PlayerController_TVTDeathmatch_C::Player_Connected_Server()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerController_TVTDeathmatch_C", "Player Connected Server");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerController_TVTDeathmatch.BP_PlayerController_TVTDeathmatch_C.Ask Server To Respawn
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void ABP_PlayerController_TVTDeathmatch_C::Ask_Server_To_Respawn()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerController_TVTDeathmatch_C", "Ask Server To Respawn");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerController_TVTDeathmatch.BP_PlayerController_TVTDeathmatch_C.Enable Respawn
// (BlueprintCallable, BlueprintEvent)

void ABP_PlayerController_TVTDeathmatch_C::Enable_Respawn()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerController_TVTDeathmatch_C", "Enable Respawn");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerController_TVTDeathmatch.BP_PlayerController_TVTDeathmatch_C.On Player Died
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Last_Man_Standing_Started                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_Character_TVTDeathmatch_C*    Character_To_Remove_On_Respawn                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Respawn_Time_On_Death                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EDamageType                             Cause_of_Death                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AHumanCharacter*                  Killer                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerController_TVTDeathmatch_C::On_Player_Died(bool Last_Man_Standing_Started, class ABP_Character_TVTDeathmatch_C* Character_To_Remove_On_Respawn, int32 Respawn_Time_On_Death, EDamageType Cause_of_Death, class AHumanCharacter* Killer)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerController_TVTDeathmatch_C", "On Player Died");

	Params::BP_PlayerController_TVTDeathmatch_C_On_Player_Died Parms{};

	Parms.Last_Man_Standing_Started = Last_Man_Standing_Started;
	Parms.Character_To_Remove_On_Respawn = Character_To_Remove_On_Respawn;
	Parms.Respawn_Time_On_Death = Respawn_Time_On_Death;
	Parms.Cause_of_Death = Cause_of_Death;
	Parms.Killer = Killer;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerController_TVTDeathmatch.BP_PlayerController_TVTDeathmatch_C.HideChosenLoadoutPopUp
// (BlueprintCallable, BlueprintEvent)

void ABP_PlayerController_TVTDeathmatch_C::HideChosenLoadoutPopUp()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerController_TVTDeathmatch_C", "HideChosenLoadoutPopUp");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerController_TVTDeathmatch.BP_PlayerController_TVTDeathmatch_C.ShowChosenLoadoutPopUp
// (BlueprintCallable, BlueprintEvent)

void ABP_PlayerController_TVTDeathmatch_C::ShowChosenLoadoutPopUp()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerController_TVTDeathmatch_C", "ShowChosenLoadoutPopUp");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerController_TVTDeathmatch.BP_PlayerController_TVTDeathmatch_C.Hide Transfer and Inventory UI
// (BlueprintCallable, BlueprintEvent)

void ABP_PlayerController_TVTDeathmatch_C::Hide_Transfer_and_Inventory_UI()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerController_TVTDeathmatch_C", "Hide Transfer and Inventory UI");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerController_TVTDeathmatch.BP_PlayerController_TVTDeathmatch_C.RemoveBlueScreen
// (BlueprintCallable, BlueprintEvent)

void ABP_PlayerController_TVTDeathmatch_C::RemoveBlueScreen()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerController_TVTDeathmatch_C", "RemoveBlueScreen");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerController_TVTDeathmatch.BP_PlayerController_TVTDeathmatch_C.ShowBlueScreen
// (BlueprintCallable, BlueprintEvent)

void ABP_PlayerController_TVTDeathmatch_C::ShowBlueScreen()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerController_TVTDeathmatch_C", "ShowBlueScreen");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerController_TVTDeathmatch.BP_PlayerController_TVTDeathmatch_C.Hide Died After LMS Started
// (BlueprintCallable, BlueprintEvent)

void ABP_PlayerController_TVTDeathmatch_C::Hide_Died_After_LMS_Started()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerController_TVTDeathmatch_C", "Hide Died After LMS Started");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerController_TVTDeathmatch.BP_PlayerController_TVTDeathmatch_C.Hide Match Progress
// (BlueprintCallable, BlueprintEvent)

void ABP_PlayerController_TVTDeathmatch_C::Hide_Match_Progress()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerController_TVTDeathmatch_C", "Hide Match Progress");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerController_TVTDeathmatch.BP_PlayerController_TVTDeathmatch_C.Enable Respawn Button
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)

void ABP_PlayerController_TVTDeathmatch_C::Enable_Respawn_Button()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerController_TVTDeathmatch_C", "Enable Respawn Button");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerController_TVTDeathmatch.BP_PlayerController_TVTDeathmatch_C.Show or Update Match Progress UI
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Time_Left                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerController_TVTDeathmatch_C::Show_or_Update_Match_Progress_UI(float Time_Left)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerController_TVTDeathmatch_C", "Show or Update Match Progress UI");

	Params::BP_PlayerController_TVTDeathmatch_C_Show_or_Update_Match_Progress_UI Parms{};

	Parms.Time_Left = Time_Left;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerController_TVTDeathmatch.BP_PlayerController_TVTDeathmatch_C.Hide Wait For Match Start UI
// (BlueprintCallable, BlueprintEvent)

void ABP_PlayerController_TVTDeathmatch_C::Hide_Wait_For_Match_Start_UI()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerController_TVTDeathmatch_C", "Hide Wait For Match Start UI");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerController_TVTDeathmatch.BP_PlayerController_TVTDeathmatch_C.Set Match Start Countdown Time
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Time                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerController_TVTDeathmatch_C::Set_Match_Start_Countdown_Time(float Time)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerController_TVTDeathmatch_C", "Set Match Start Countdown Time");

	Params::BP_PlayerController_TVTDeathmatch_C_Set_Match_Start_Countdown_Time Parms{};

	Parms.Time = Time;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerController_TVTDeathmatch.BP_PlayerController_TVTDeathmatch_C.Show Wait For Match Start UI
// (BlueprintCallable, BlueprintEvent)

void ABP_PlayerController_TVTDeathmatch_C::Show_Wait_For_Match_Start_UI()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerController_TVTDeathmatch_C", "Show Wait For Match Start UI");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerController_TVTDeathmatch.BP_PlayerController_TVTDeathmatch_C.Hide Respawn Screen UI
// (BlueprintCallable, BlueprintEvent)

void ABP_PlayerController_TVTDeathmatch_C::Hide_Respawn_Screen_UI()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerController_TVTDeathmatch_C", "Hide Respawn Screen UI");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerController_TVTDeathmatch.BP_PlayerController_TVTDeathmatch_C.Show Respawn Screen UI
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Respawn_Time                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EDamageType                             Cause_of_Death                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AHumanCharacter*                  Killer                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Is_Suicide                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_PlayerController_TVTDeathmatch_C::Show_Respawn_Screen_UI(int32 Respawn_Time, EDamageType Cause_of_Death, class AHumanCharacter* Killer, bool Is_Suicide)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerController_TVTDeathmatch_C", "Show Respawn Screen UI");

	Params::BP_PlayerController_TVTDeathmatch_C_Show_Respawn_Screen_UI Parms{};

	Parms.Respawn_Time = Respawn_Time;
	Parms.Cause_of_Death = Cause_of_Death;
	Parms.Killer = Killer;
	Parms.Is_Suicide = Is_Suicide;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerController_TVTDeathmatch.BP_PlayerController_TVTDeathmatch_C.Cheat_StandLastManEarly
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void ABP_PlayerController_TVTDeathmatch_C::Cheat_StandLastManEarly()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerController_TVTDeathmatch_C", "Cheat_StandLastManEarly");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerController_TVTDeathmatch.BP_PlayerController_TVTDeathmatch_C.Cheat_HalveRemainingTime
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void ABP_PlayerController_TVTDeathmatch_C::Cheat_HalveRemainingTime()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerController_TVTDeathmatch_C", "Cheat_HalveRemainingTime");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerController_TVTDeathmatch.BP_PlayerController_TVTDeathmatch_C.Cheat_SkipToMatchEnd
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void ABP_PlayerController_TVTDeathmatch_C::Cheat_SkipToMatchEnd()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerController_TVTDeathmatch_C", "Cheat_SkipToMatchEnd");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerController_TVTDeathmatch.BP_PlayerController_TVTDeathmatch_C.Cheat_RequestNewCloudMatchLoadouts
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void ABP_PlayerController_TVTDeathmatch_C::Cheat_RequestNewCloudMatchLoadouts()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerController_TVTDeathmatch_C", "Cheat_RequestNewCloudMatchLoadouts");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerController_TVTDeathmatch.BP_PlayerController_TVTDeathmatch_C.Cheat_SetKillWinThreshold
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   KillWinThreshold                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerController_TVTDeathmatch_C::Cheat_SetKillWinThreshold(int32 KillWinThreshold)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerController_TVTDeathmatch_C", "Cheat_SetKillWinThreshold");

	Params::BP_PlayerController_TVTDeathmatch_C_Cheat_SetKillWinThreshold Parms{};

	Parms.KillWinThreshold = KillWinThreshold;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerController_TVTDeathmatch.BP_PlayerController_TVTDeathmatch_C.Cheat_ReplicateRespawnBlockers
// (Net, NetReliable, NetServer, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FVector>                  TempPlayerVectors_0                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_PlayerController_TVTDeathmatch_C::Cheat_ReplicateRespawnBlockers(TArray<struct FVector>& TempPlayerVectors_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerController_TVTDeathmatch_C", "Cheat_ReplicateRespawnBlockers");

	Params::BP_PlayerController_TVTDeathmatch_C_Cheat_ReplicateRespawnBlockers Parms{};

	Parms.TempPlayerVectors_0 = std::move(TempPlayerVectors_0);

	UObject::ProcessEvent(Func, &Parms);

	TempPlayerVectors_0 = std::move(Parms.TempPlayerVectors_0);
}


// Function BP_PlayerController_TVTDeathmatch.BP_PlayerController_TVTDeathmatch_C.Cheat_StopPeriodicRespawnBlockerUpdate
// (BlueprintCallable, BlueprintEvent)

void ABP_PlayerController_TVTDeathmatch_C::Cheat_StopPeriodicRespawnBlockerUpdate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerController_TVTDeathmatch_C", "Cheat_StopPeriodicRespawnBlockerUpdate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerController_TVTDeathmatch.BP_PlayerController_TVTDeathmatch_C.Cheat_StartUpdatingRespawnBlockers
// (BlueprintCallable, BlueprintEvent)

void ABP_PlayerController_TVTDeathmatch_C::Cheat_StartUpdatingRespawnBlockers()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerController_TVTDeathmatch_C", "Cheat_StartUpdatingRespawnBlockers");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerController_TVTDeathmatch.BP_PlayerController_TVTDeathmatch_C.DEBUG_Respawns
// (BlueprintCallable, BlueprintEvent)

void ABP_PlayerController_TVTDeathmatch_C::DEBUG_Respawns()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerController_TVTDeathmatch_C", "DEBUG_Respawns");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerController_TVTDeathmatch.BP_PlayerController_TVTDeathmatch_C.Cheat_StopPerdiodicRespawnCheck
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void ABP_PlayerController_TVTDeathmatch_C::Cheat_StopPerdiodicRespawnCheck()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerController_TVTDeathmatch_C", "Cheat_StopPerdiodicRespawnCheck");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerController_TVTDeathmatch.BP_PlayerController_TVTDeathmatch_C.Cheat_StartPerdiodicRespawnCheck
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void ABP_PlayerController_TVTDeathmatch_C::Cheat_StartPerdiodicRespawnCheck()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerController_TVTDeathmatch_C", "Cheat_StartPerdiodicRespawnCheck");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerController_TVTDeathmatch.BP_PlayerController_TVTDeathmatch_C.Cheat_SetSafenessTarget
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Target                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerController_TVTDeathmatch_C::Cheat_SetSafenessTarget(float Target)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerController_TVTDeathmatch_C", "Cheat_SetSafenessTarget");

	Params::BP_PlayerController_TVTDeathmatch_C_Cheat_SetSafenessTarget Parms{};

	Parms.Target = Target;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerController_TVTDeathmatch.BP_PlayerController_TVTDeathmatch_C.Cheat_ResetRoundTime
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void ABP_PlayerController_TVTDeathmatch_C::Cheat_ResetRoundTime()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerController_TVTDeathmatch_C", "Cheat_ResetRoundTime");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerController_TVTDeathmatch.BP_PlayerController_TVTDeathmatch_C.Cheat_ForceOneWeaponLoadout_ToEveryone
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Enabled                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                           Weapon                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerController_TVTDeathmatch_C::Cheat_ForceOneWeaponLoadout_ToEveryone(bool Enabled, class UClass* Weapon)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerController_TVTDeathmatch_C", "Cheat_ForceOneWeaponLoadout_ToEveryone");

	Params::BP_PlayerController_TVTDeathmatch_C_Cheat_ForceOneWeaponLoadout_ToEveryone Parms{};

	Parms.Enabled = Enabled;
	Parms.Weapon = Weapon;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerController_TVTDeathmatch.BP_PlayerController_TVTDeathmatch_C.Cheat_ForceOneWeaponLoadout
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Enabled                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                           Weapon                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerController_TVTDeathmatch_C::Cheat_ForceOneWeaponLoadout(bool Enabled, class UClass* Weapon)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerController_TVTDeathmatch_C", "Cheat_ForceOneWeaponLoadout");

	Params::BP_PlayerController_TVTDeathmatch_C_Cheat_ForceOneWeaponLoadout Parms{};

	Parms.Enabled = Enabled;
	Parms.Weapon = Weapon;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerController_TVTDeathmatch.BP_PlayerController_TVTDeathmatch_C.Cheat_RespawnVisDebug
// (Net, NetReliable, HasOutParams, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<float>                           DistanceArray                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<struct FVector>                  LocationArray                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<struct FColor>                   ColorArray                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<class FString>                   Strings                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_PlayerController_TVTDeathmatch_C::Cheat_RespawnVisDebug(const TArray<float>& DistanceArray, const TArray<struct FVector>& LocationArray, const TArray<struct FColor>& ColorArray, const TArray<class FString>& Strings)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerController_TVTDeathmatch_C", "Cheat_RespawnVisDebug");

	Params::BP_PlayerController_TVTDeathmatch_C_Cheat_RespawnVisDebug Parms{};

	Parms.DistanceArray = std::move(DistanceArray);
	Parms.LocationArray = std::move(LocationArray);
	Parms.ColorArray = std::move(ColorArray);
	Parms.Strings = std::move(Strings);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerController_TVTDeathmatch.BP_PlayerController_TVTDeathmatch_C.Cheat_SetEnableNewRespawn
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Enable                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_PlayerController_TVTDeathmatch_C::Cheat_SetEnableNewRespawn(bool Enable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerController_TVTDeathmatch_C", "Cheat_SetEnableNewRespawn");

	Params::BP_PlayerController_TVTDeathmatch_C_Cheat_SetEnableNewRespawn Parms{};

	Parms.Enable = Enable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerController_TVTDeathmatch.BP_PlayerController_TVTDeathmatch_C.Cheat_SetRespawnVisualDebug
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Enable                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_PlayerController_TVTDeathmatch_C::Cheat_SetRespawnVisualDebug(bool Enable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerController_TVTDeathmatch_C", "Cheat_SetRespawnVisualDebug");

	Params::BP_PlayerController_TVTDeathmatch_C_Cheat_SetRespawnVisualDebug Parms{};

	Parms.Enable = Enable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerController_TVTDeathmatch.BP_PlayerController_TVTDeathmatch_C.Start Spectating
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_PlayerController_TVTDeathmatch_C::Start_Spectating()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerController_TVTDeathmatch_C", "Start Spectating");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerController_TVTDeathmatch.BP_PlayerController_TVTDeathmatch_C.Get Statistics
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FStruct_TVTDeathmatchStatistics>Statistics                                             (Parm, OutParm)

void ABP_PlayerController_TVTDeathmatch_C::Get_Statistics(TArray<struct FStruct_TVTDeathmatchStatistics>* Statistics)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerController_TVTDeathmatch_C", "Get Statistics");

	Params::BP_PlayerController_TVTDeathmatch_C_Get_Statistics Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Statistics != nullptr)
		*Statistics = std::move(Parms.Statistics);
}


// Function BP_PlayerController_TVTDeathmatch.BP_PlayerController_TVTDeathmatch_C.GetWeaponSemiRandom
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FWeaponDescriptor>        AllPossibleWeapons                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FWeaponDescriptor                WeaponDescriptor                                       (Parm, OutParm, NoDestructor)

void ABP_PlayerController_TVTDeathmatch_C::GetWeaponSemiRandom(TArray<struct FWeaponDescriptor>& AllPossibleWeapons, struct FWeaponDescriptor* WeaponDescriptor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerController_TVTDeathmatch_C", "GetWeaponSemiRandom");

	Params::BP_PlayerController_TVTDeathmatch_C_GetWeaponSemiRandom Parms{};

	Parms.AllPossibleWeapons = std::move(AllPossibleWeapons);

	UObject::ProcessEvent(Func, &Parms);

	AllPossibleWeapons = std::move(Parms.AllPossibleWeapons);

	if (WeaponDescriptor != nullptr)
		*WeaponDescriptor = std::move(Parms.WeaponDescriptor);
}


// Function BP_PlayerController_TVTDeathmatch.BP_PlayerController_TVTDeathmatch_C.UpdateCompassMarkersOnLastStandingMan
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_PlayerController_TVTDeathmatch_C::UpdateCompassMarkersOnLastStandingMan()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerController_TVTDeathmatch_C", "UpdateCompassMarkersOnLastStandingMan");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerController_TVTDeathmatch.BP_PlayerController_TVTDeathmatch_C.CheckForRespawnButtonAfterLagSpike
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_PlayerController_TVTDeathmatch_C::CheckForRespawnButtonAfterLagSpike()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerController_TVTDeathmatch_C", "CheckForRespawnButtonAfterLagSpike");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerController_TVTDeathmatch.BP_PlayerController_TVTDeathmatch_C.Get Semi Random Initial Loadout
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCloudLoadout                    PossibleLoadouts                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FCloudMatchWeaponGroup           Weapons                                                (Parm, OutParm)
// TArray<struct FCloudItemInfo>           Items                                                  (Parm, OutParm)

void ABP_PlayerController_TVTDeathmatch_C::Get_Semi_Random_Initial_Loadout(const struct FCloudLoadout& PossibleLoadouts, struct FCloudMatchWeaponGroup* Weapons, TArray<struct FCloudItemInfo>* Items)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerController_TVTDeathmatch_C", "Get Semi Random Initial Loadout");

	Params::BP_PlayerController_TVTDeathmatch_C_Get_Semi_Random_Initial_Loadout Parms{};

	Parms.PossibleLoadouts = std::move(PossibleLoadouts);

	UObject::ProcessEvent(Func, &Parms);

	if (Weapons != nullptr)
		*Weapons = std::move(Parms.Weapons);

	if (Items != nullptr)
		*Items = std::move(Parms.Items);
}


// Function BP_PlayerController_TVTDeathmatch.BP_PlayerController_TVTDeathmatch_C.Player Respawned
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_PlayerController_TVTDeathmatch_C::Player_Respawned()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerController_TVTDeathmatch_C", "Player Respawned");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerController_TVTDeathmatch.BP_PlayerController_TVTDeathmatch_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_PlayerController_TVTDeathmatch_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerController_TVTDeathmatch_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerController_TVTDeathmatch.BP_PlayerController_TVTDeathmatch_C.CheatHideUI
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Hide                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_PlayerController_TVTDeathmatch_C::CheatHideUI(bool Hide)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerController_TVTDeathmatch_C", "CheatHideUI");

	Params::BP_PlayerController_TVTDeathmatch_C_CheatHideUI Parms{};

	Parms.Hide = Hide;

	UObject::ProcessEvent(Func, &Parms);
}

}

