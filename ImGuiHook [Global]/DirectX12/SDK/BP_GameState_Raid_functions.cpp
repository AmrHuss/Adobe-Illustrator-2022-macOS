#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_GameState_Raid

#include "Basic.hpp"

#include "BP_GameState_Raid_classes.hpp"
#include "BP_GameState_Raid_parameters.hpp"


namespace SDK
{

// Function BP_GameState_Raid.BP_GameState_Raid_C.ExecuteUbergraph_BP_GameState_Raid
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_GameState_Raid_C::ExecuteUbergraph_BP_GameState_Raid(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GameState_Raid_C", "ExecuteUbergraph_BP_GameState_Raid");

	Params::BP_GameState_Raid_C_ExecuteUbergraph_BP_GameState_Raid Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_GameState_Raid.BP_GameState_Raid_C.Handle Match Phase
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// E_TeamsMatchPhase                       Match_Phase_0                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_GameState_Raid_C::Handle_Match_Phase(E_TeamsMatchPhase Match_Phase_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GameState_Raid_C", "Handle Match Phase");

	Params::BP_GameState_Raid_C_Handle_Match_Phase Parms{};

	Parms.Match_Phase_0 = Match_Phase_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_GameState_Raid.BP_GameState_Raid_C.Objective Spotted
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_GameState_Raid_C::Objective_Spotted()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GameState_Raid_C", "Objective Spotted");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_GameState_Raid.BP_GameState_Raid_C.Set Round Win Reason
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// ERaidWinReason                          Win_Reason                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_GameState_Raid_C::Set_Round_Win_Reason(ERaidWinReason Win_Reason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GameState_Raid_C", "Set Round Win Reason");

	Params::BP_GameState_Raid_C_Set_Round_Win_Reason Parms{};

	Parms.Win_Reason = Win_Reason;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_GameState_Raid.BP_GameState_Raid_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_GameState_Raid_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GameState_Raid_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_GameState_Raid.BP_GameState_Raid_C.Notify Player Statistics Changed
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_GameState_Raid_C::Notify_Player_Statistics_Changed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GameState_Raid_C", "Notify Player Statistics Changed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_GameState_Raid.BP_GameState_Raid_C.New Round Started
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_GameState_Raid_C::New_Round_Started()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GameState_Raid_C", "New Round Started");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_GameState_Raid.BP_GameState_Raid_C.Players Update PreRound Time Remaining
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Remaining_Time                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_GameState_Raid_C::Players_Update_PreRound_Time_Remaining(int32 Remaining_Time)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GameState_Raid_C", "Players Update PreRound Time Remaining");

	Params::BP_GameState_Raid_C_Players_Update_PreRound_Time_Remaining Parms{};

	Parms.Remaining_Time = Remaining_Time;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_GameState_Raid.BP_GameState_Raid_C.Set PreRound Remaining Time
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Remaining_Time                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_GameState_Raid_C::Set_PreRound_Remaining_Time(int32 Remaining_Time)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GameState_Raid_C", "Set PreRound Remaining Time");

	Params::BP_GameState_Raid_C_Set_PreRound_Remaining_Time Parms{};

	Parms.Remaining_Time = Remaining_Time;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_GameState_Raid.BP_GameState_Raid_C.Last Ten Seconds In Match
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_GameState_Raid_C::Last_Ten_Seconds_In_Match()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GameState_Raid_C", "Last Ten Seconds In Match");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_GameState_Raid.BP_GameState_Raid_C.Last Minute In Match
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_GameState_Raid_C::Last_Minute_In_Match()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GameState_Raid_C", "Last Minute In Match");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_GameState_Raid.BP_GameState_Raid_C.Last Two Minutes In Match
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_GameState_Raid_C::Last_Two_Minutes_In_Match()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GameState_Raid_C", "Last Two Minutes In Match");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_GameState_Raid.BP_GameState_Raid_C.Players Update Time Remaining
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Remaining_Time                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_GameState_Raid_C::Players_Update_Time_Remaining(int32 Remaining_Time)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GameState_Raid_C", "Players Update Time Remaining");

	Params::BP_GameState_Raid_C_Players_Update_Time_Remaining Parms{};

	Parms.Remaining_Time = Remaining_Time;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_GameState_Raid.BP_GameState_Raid_C.Set Match Remaining Time
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Remaining_Time                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_GameState_Raid_C::Set_Match_Remaining_Time(int32 Remaining_Time)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GameState_Raid_C", "Set Match Remaining Time");

	Params::BP_GameState_Raid_C_Set_Match_Remaining_Time Parms{};

	Parms.Remaining_Time = Remaining_Time;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_GameState_Raid.BP_GameState_Raid_C.Get Attacking Team
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UBP_GSC_Team_Raid_C*              Attacking_Team                                         (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_GameState_Raid_C::Get_Attacking_Team(class UBP_GSC_Team_Raid_C** Attacking_Team)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GameState_Raid_C", "Get Attacking Team");

	Params::BP_GameState_Raid_C_Get_Attacking_Team Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Attacking_Team != nullptr)
		*Attacking_Team = Parms.Attacking_Team;
}


// Function BP_GameState_Raid.BP_GameState_Raid_C.Get Defending Team
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UBP_GSC_Team_Raid_C*              Defending_Team                                         (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_GameState_Raid_C::Get_Defending_Team(class UBP_GSC_Team_Raid_C** Defending_Team)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GameState_Raid_C", "Get Defending Team");

	Params::BP_GameState_Raid_C_Get_Defending_Team Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Defending_Team != nullptr)
		*Defending_Team = Parms.Defending_Team;
}


// Function BP_GameState_Raid.BP_GameState_Raid_C.GetWorldMinMax
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          World_Min                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          World_Max                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_GameState_Raid_C::GetWorldMinMax(struct FVector* World_Min, struct FVector* World_Max)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GameState_Raid_C", "GetWorldMinMax");

	Params::BP_GameState_Raid_C_GetWorldMinMax Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (World_Min != nullptr)
		*World_Min = std::move(Parms.World_Min);

	if (World_Max != nullptr)
		*World_Max = std::move(Parms.World_Max);
}


// Function BP_GameState_Raid.BP_GameState_Raid_C.Check Remaining Time Sound Cues
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_GameState_Raid_C::Check_Remaining_Time_Sound_Cues()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GameState_Raid_C", "Check Remaining Time Sound Cues");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_GameState_Raid.BP_GameState_Raid_C.Get Statistics
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FStruct_RaidStatistics>   Statistics                                             (Parm, OutParm)

void ABP_GameState_Raid_C::Get_Statistics(TArray<struct FStruct_RaidStatistics>* Statistics)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GameState_Raid_C", "Get Statistics");

	Params::BP_GameState_Raid_C_Get_Statistics Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Statistics != nullptr)
		*Statistics = std::move(Parms.Statistics);
}


// Function BP_GameState_Raid.BP_GameState_Raid_C.Get Attacker Statistics
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FStruct_RaidStatistics>   Statistics                                             (Parm, OutParm)

void ABP_GameState_Raid_C::Get_Attacker_Statistics(TArray<struct FStruct_RaidStatistics>* Statistics)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GameState_Raid_C", "Get Attacker Statistics");

	Params::BP_GameState_Raid_C_Get_Attacker_Statistics Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Statistics != nullptr)
		*Statistics = std::move(Parms.Statistics);
}


// Function BP_GameState_Raid.BP_GameState_Raid_C.Get Defender Statistics
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FStruct_RaidStatistics>   Statistics                                             (Parm, OutParm)

void ABP_GameState_Raid_C::Get_Defender_Statistics(TArray<struct FStruct_RaidStatistics>* Statistics)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GameState_Raid_C", "Get Defender Statistics");

	Params::BP_GameState_Raid_C_Get_Defender_Statistics Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Statistics != nullptr)
		*Statistics = std::move(Parms.Statistics);
}


// Function BP_GameState_Raid.BP_GameState_Raid_C.Find Player Start Positions
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_GameState_Raid_C::Find_Player_Start_Positions()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GameState_Raid_C", "Find Player Start Positions");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_GameState_Raid.BP_GameState_Raid_C.Get Winning and Losing Teams
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Winner_Found                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBP_GSC_Team_Raid_C*              Winning_Team                                           (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_GSC_Team_Raid_C*              Losing_Team                                            (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    TeamsAreEqual                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_GameState_Raid_C::Get_Winning_and_Losing_Teams(bool* Winner_Found, class UBP_GSC_Team_Raid_C** Winning_Team, class UBP_GSC_Team_Raid_C** Losing_Team, bool* TeamsAreEqual)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GameState_Raid_C", "Get Winning and Losing Teams");

	Params::BP_GameState_Raid_C_Get_Winning_and_Losing_Teams Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Winner_Found != nullptr)
		*Winner_Found = Parms.Winner_Found;

	if (Winning_Team != nullptr)
		*Winning_Team = Parms.Winning_Team;

	if (Losing_Team != nullptr)
		*Losing_Team = Parms.Losing_Team;

	if (TeamsAreEqual != nullptr)
		*TeamsAreEqual = Parms.TeamsAreEqual;
}


// Function BP_GameState_Raid.BP_GameState_Raid_C.Show End Turn Notification To Player
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// ERaidWinReason                          Win_Reason                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_PlayerController_Raid_C*      Player_Controller                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_GameState_Raid_C::Show_End_Turn_Notification_To_Player(ERaidWinReason Win_Reason, class ABP_PlayerController_Raid_C* Player_Controller)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GameState_Raid_C", "Show End Turn Notification To Player");

	Params::BP_GameState_Raid_C_Show_End_Turn_Notification_To_Player Parms{};

	Parms.Win_Reason = Win_Reason;
	Parms.Player_Controller = Player_Controller;

	UObject::ProcessEvent(Func, &Parms);
}

}

