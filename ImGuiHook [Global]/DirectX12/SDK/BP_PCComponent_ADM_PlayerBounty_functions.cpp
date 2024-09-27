#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PCComponent_ADM_PlayerBounty

#include "Basic.hpp"

#include "BP_PCComponent_ADM_PlayerBounty_classes.hpp"
#include "BP_PCComponent_ADM_PlayerBounty_parameters.hpp"


namespace SDK
{

// Function BP_PCComponent_ADM_PlayerBounty.BP_PCComponent_ADM_PlayerBounty_C.ExecuteUbergraph_BP_PCComponent_ADM_PlayerBounty
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PCComponent_ADM_PlayerBounty_C::ExecuteUbergraph_BP_PCComponent_ADM_PlayerBounty(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PCComponent_ADM_PlayerBounty_C", "ExecuteUbergraph_BP_PCComponent_ADM_PlayerBounty");

	Params::BP_PCComponent_ADM_PlayerBounty_C_ExecuteUbergraph_BP_PCComponent_ADM_PlayerBounty Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PCComponent_ADM_PlayerBounty.BP_PCComponent_ADM_PlayerBounty_C.CustomEvent_0
// (BlueprintCallable, BlueprintEvent)

void UBP_PCComponent_ADM_PlayerBounty_C::CustomEvent_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PCComponent_ADM_PlayerBounty_C", "CustomEvent_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PCComponent_ADM_PlayerBounty.BP_PCComponent_ADM_PlayerBounty_C.Set teamkiller status
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Is_Teamkiller                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_PCComponent_ADM_PlayerBounty_C::Set_teamkiller_status(bool Is_Teamkiller)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PCComponent_ADM_PlayerBounty_C", "Set teamkiller status");

	Params::BP_PCComponent_ADM_PlayerBounty_C_Set_teamkiller_status Parms{};

	Parms.Is_Teamkiller = Is_Teamkiller;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PCComponent_ADM_PlayerBounty.BP_PCComponent_ADM_PlayerBounty_C.Set threat status
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Is_Threat                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_PCComponent_ADM_PlayerBounty_C::Set_threat_status(bool Is_Threat)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PCComponent_ADM_PlayerBounty_C", "Set threat status");

	Params::BP_PCComponent_ADM_PlayerBounty_C_Set_threat_status Parms{};

	Parms.Is_Threat = Is_Threat;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PCComponent_ADM_PlayerBounty.BP_PCComponent_ADM_PlayerBounty_C.Set Threat and Teamkiller Status
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Is_Threat                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    Is_Teamkiller                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_PCComponent_ADM_PlayerBounty_C::Set_Threat_and_Teamkiller_Status(bool Is_Threat, bool Is_Teamkiller)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PCComponent_ADM_PlayerBounty_C", "Set Threat and Teamkiller Status");

	Params::BP_PCComponent_ADM_PlayerBounty_C_Set_Threat_and_Teamkiller_Status Parms{};

	Parms.Is_Threat = Is_Threat;
	Parms.Is_Teamkiller = Is_Teamkiller;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PCComponent_ADM_PlayerBounty.BP_PCComponent_ADM_PlayerBounty_C.Remove Teamkiller Status From My Teamkiller
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void UBP_PCComponent_ADM_PlayerBounty_C::Remove_Teamkiller_Status_From_My_Teamkiller()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PCComponent_ADM_PlayerBounty_C", "Remove Teamkiller Status From My Teamkiller");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PCComponent_ADM_PlayerBounty.BP_PCComponent_ADM_PlayerBounty_C.Remove Teamkiller Bounty From Another Player
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AHumanCharacter*                  Human_Character                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsThreat_0                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_PCComponent_ADM_PlayerBounty_C::Remove_Teamkiller_Bounty_From_Another_Player(class AHumanCharacter* Human_Character, bool IsThreat_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PCComponent_ADM_PlayerBounty_C", "Remove Teamkiller Bounty From Another Player");

	Params::BP_PCComponent_ADM_PlayerBounty_C_Remove_Teamkiller_Bounty_From_Another_Player Parms{};

	Parms.Human_Character = Human_Character;
	Parms.IsThreat_0 = IsThreat_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PCComponent_ADM_PlayerBounty.BP_PCComponent_ADM_PlayerBounty_C.Remove Teamkiller Bounty From This Player
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)

void UBP_PCComponent_ADM_PlayerBounty_C::Remove_Teamkiller_Bounty_From_This_Player()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PCComponent_ADM_PlayerBounty_C", "Remove Teamkiller Bounty From This Player");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PCComponent_ADM_PlayerBounty.BP_PCComponent_ADM_PlayerBounty_C.UpdateTrackedKillers
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AHumanCharacter*                  Killer                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsThreat_0                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    IsTeamKiller_0                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_PCComponent_ADM_PlayerBounty_C::UpdateTrackedKillers(class AHumanCharacter* Killer, bool IsThreat_0, bool IsTeamKiller_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PCComponent_ADM_PlayerBounty_C", "UpdateTrackedKillers");

	Params::BP_PCComponent_ADM_PlayerBounty_C_UpdateTrackedKillers Parms{};

	Parms.Killer = Killer;
	Parms.IsThreat_0 = IsThreat_0;
	Parms.IsTeamKiller_0 = IsTeamKiller_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PCComponent_ADM_PlayerBounty.BP_PCComponent_ADM_PlayerBounty_C.TrackedPlayerExited
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)

void UBP_PCComponent_ADM_PlayerBounty_C::TrackedPlayerExited()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PCComponent_ADM_PlayerBounty_C", "TrackedPlayerExited");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PCComponent_ADM_PlayerBounty.BP_PCComponent_ADM_PlayerBounty_C.UpdateThreats
// (BlueprintCallable, BlueprintEvent)

void UBP_PCComponent_ADM_PlayerBounty_C::UpdateThreats()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PCComponent_ADM_PlayerBounty_C", "UpdateThreats");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PCComponent_ADM_PlayerBounty.BP_PCComponent_ADM_PlayerBounty_C.UpdateTeamKillers
// (BlueprintCallable, BlueprintEvent)

void UBP_PCComponent_ADM_PlayerBounty_C::UpdateTeamKillers()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PCComponent_ADM_PlayerBounty_C", "UpdateTeamKillers");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PCComponent_ADM_PlayerBounty.BP_PCComponent_ADM_PlayerBounty_C.FadeThreats
// (BlueprintCallable, BlueprintEvent)

void UBP_PCComponent_ADM_PlayerBounty_C::FadeThreats()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PCComponent_ADM_PlayerBounty_C", "FadeThreats");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PCComponent_ADM_PlayerBounty.BP_PCComponent_ADM_PlayerBounty_C.FadeTeamKillers
// (BlueprintCallable, BlueprintEvent)

void UBP_PCComponent_ADM_PlayerBounty_C::FadeTeamKillers()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PCComponent_ADM_PlayerBounty_C", "FadeTeamKillers");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PCComponent_ADM_PlayerBounty.BP_PCComponent_ADM_PlayerBounty_C.Tracked Player Died
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AHumanCharacter*                  Killer                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PCComponent_ADM_PlayerBounty_C::Tracked_Player_Died(class AHumanCharacter* Killer)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PCComponent_ADM_PlayerBounty_C", "Tracked Player Died");

	Params::BP_PCComponent_ADM_PlayerBounty_C_Tracked_Player_Died Parms{};

	Parms.Killer = Killer;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PCComponent_ADM_PlayerBounty.BP_PCComponent_ADM_PlayerBounty_C.Player Died
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Character_C*                  DyingCharacter                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   DamageAmount                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EDamageType                             DamageType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AHumanCharacter*                  InstigatingCharacter                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                           InstigatingItem                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       HitResult                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void UBP_PCComponent_ADM_PlayerBounty_C::Player_Died(class ABP_Character_C* DyingCharacter, float DamageAmount, EDamageType DamageType, class AHumanCharacter* InstigatingCharacter, class UClass* InstigatingItem, const struct FHitResult& HitResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PCComponent_ADM_PlayerBounty_C", "Player Died");

	Params::BP_PCComponent_ADM_PlayerBounty_C_Player_Died Parms{};

	Parms.DyingCharacter = DyingCharacter;
	Parms.DamageAmount = DamageAmount;
	Parms.DamageType = DamageType;
	Parms.InstigatingCharacter = InstigatingCharacter;
	Parms.InstigatingItem = InstigatingItem;
	Parms.HitResult = std::move(HitResult);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PCComponent_ADM_PlayerBounty.BP_PCComponent_ADM_PlayerBounty_C.TriggerThreatBlink
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void UBP_PCComponent_ADM_PlayerBounty_C::TriggerThreatBlink()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PCComponent_ADM_PlayerBounty_C", "TriggerThreatBlink");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PCComponent_ADM_PlayerBounty.BP_PCComponent_ADM_PlayerBounty_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// EEndPlayReason                          EndPlayReason                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PCComponent_ADM_PlayerBounty_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PCComponent_ADM_PlayerBounty_C", "ReceiveEndPlay");

	Params::BP_PCComponent_ADM_PlayerBounty_C_ReceiveEndPlay Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PCComponent_ADM_PlayerBounty.BP_PCComponent_ADM_PlayerBounty_C.Show Bounty Icon
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsTeamKiller_0                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_PCComponent_ADM_PlayerBounty_C::Show_Bounty_Icon(bool IsTeamKiller_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PCComponent_ADM_PlayerBounty_C", "Show Bounty Icon");

	Params::BP_PCComponent_ADM_PlayerBounty_C_Show_Bounty_Icon Parms{};

	Parms.IsTeamKiller_0 = IsTeamKiller_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PCComponent_ADM_PlayerBounty.BP_PCComponent_ADM_PlayerBounty_C.Set Bounty on This Player
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsTeamKiller_0                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_PCComponent_ADM_PlayerBounty_C::Set_Bounty_on_This_Player(bool IsTeamKiller_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PCComponent_ADM_PlayerBounty_C", "Set Bounty on This Player");

	Params::BP_PCComponent_ADM_PlayerBounty_C_Set_Bounty_on_This_Player Parms{};

	Parms.IsTeamKiller_0 = IsTeamKiller_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PCComponent_ADM_PlayerBounty.BP_PCComponent_ADM_PlayerBounty_C.Set Bounty on Another Player
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AHumanCharacter*                  Killer                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsTeamKiller_0                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_PCComponent_ADM_PlayerBounty_C::Set_Bounty_on_Another_Player(class AHumanCharacter* Killer, bool IsTeamKiller_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PCComponent_ADM_PlayerBounty_C", "Set Bounty on Another Player");

	Params::BP_PCComponent_ADM_PlayerBounty_C_Set_Bounty_on_Another_Player Parms{};

	Parms.Killer = Killer;
	Parms.IsTeamKiller_0 = IsTeamKiller_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PCComponent_ADM_PlayerBounty.BP_PCComponent_ADM_PlayerBounty_C.Add Other Player Bounty Message
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsTeamKiller_0                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_PCComponent_ADM_PlayerBounty_C::Add_Other_Player_Bounty_Message(bool IsTeamKiller_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PCComponent_ADM_PlayerBounty_C", "Add Other Player Bounty Message");

	Params::BP_PCComponent_ADM_PlayerBounty_C_Add_Other_Player_Bounty_Message Parms{};

	Parms.IsTeamKiller_0 = IsTeamKiller_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PCComponent_ADM_PlayerBounty.BP_PCComponent_ADM_PlayerBounty_C.Add This Player Bounty Message
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsTeamKiller_0                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_PCComponent_ADM_PlayerBounty_C::Add_This_Player_Bounty_Message(bool IsTeamKiller_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PCComponent_ADM_PlayerBounty_C", "Add This Player Bounty Message");

	Params::BP_PCComponent_ADM_PlayerBounty_C_Add_This_Player_Bounty_Message Parms{};

	Parms.IsTeamKiller_0 = IsTeamKiller_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PCComponent_ADM_PlayerBounty.BP_PCComponent_ADM_PlayerBounty_C.Player Scored a Kill
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_PlayerController_Script_C*    Killer                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_PlayerController_Script_C*    Victim                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PCComponent_ADM_PlayerBounty_C::Player_Scored_a_Kill(class ABP_PlayerController_Script_C* Killer, class ABP_PlayerController_Script_C* Victim)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PCComponent_ADM_PlayerBounty_C", "Player Scored a Kill");

	Params::BP_PCComponent_ADM_PlayerBounty_C_Player_Scored_a_Kill Parms{};

	Parms.Killer = Killer;
	Parms.Victim = Victim;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PCComponent_ADM_PlayerBounty.BP_PCComponent_ADM_PlayerBounty_C.Character Possessed on Server
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Character_C*                  Possessed_Character                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PCComponent_ADM_PlayerBounty_C::Character_Possessed_on_Server(class ABP_Character_C* Possessed_Character)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PCComponent_ADM_PlayerBounty_C", "Character Possessed on Server");

	Params::BP_PCComponent_ADM_PlayerBounty_C_Character_Possessed_on_Server Parms{};

	Parms.Possessed_Character = Possessed_Character;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PCComponent_ADM_PlayerBounty.BP_PCComponent_ADM_PlayerBounty_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBP_PCComponent_ADM_PlayerBounty_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PCComponent_ADM_PlayerBounty_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PCComponent_ADM_PlayerBounty.BP_PCComponent_ADM_PlayerBounty_C.UpdateMarkers
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    AreTeamKillers                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_PCComponent_ADM_PlayerBounty_C::UpdateMarkers(bool AreTeamKillers)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PCComponent_ADM_PlayerBounty_C", "UpdateMarkers");

	Params::BP_PCComponent_ADM_PlayerBounty_C_UpdateMarkers Parms{};

	Parms.AreTeamKillers = AreTeamKillers;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PCComponent_ADM_PlayerBounty.BP_PCComponent_ADM_PlayerBounty_C.FadeMarkers
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    AreTeamKillers                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_PCComponent_ADM_PlayerBounty_C::FadeMarkers(bool AreTeamKillers)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PCComponent_ADM_PlayerBounty_C", "FadeMarkers");

	Params::BP_PCComponent_ADM_PlayerBounty_C_FadeMarkers Parms{};

	Parms.AreTeamKillers = AreTeamKillers;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PCComponent_ADM_PlayerBounty.BP_PCComponent_ADM_PlayerBounty_C.SetThreatTeamkiller
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    NewIsThreat                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    NewIsTeamkiller                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerState*                     VictimPlayerState                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    StateWasChanged                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_PCComponent_ADM_PlayerBounty_C::SetThreatTeamkiller(bool NewIsThreat, bool NewIsTeamkiller, const class APlayerState* VictimPlayerState, bool* StateWasChanged)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PCComponent_ADM_PlayerBounty_C", "SetThreatTeamkiller");

	Params::BP_PCComponent_ADM_PlayerBounty_C_SetThreatTeamkiller Parms{};

	Parms.NewIsThreat = NewIsThreat;
	Parms.NewIsTeamkiller = NewIsTeamkiller;
	Parms.VictimPlayerState = VictimPlayerState;

	UObject::ProcessEvent(Func, &Parms);

	if (StateWasChanged != nullptr)
		*StateWasChanged = Parms.StateWasChanged;
}


// Function BP_PCComponent_ADM_PlayerBounty.BP_PCComponent_ADM_PlayerBounty_C.IsTeamkilledVictim
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl                 Victim                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// bool                                    NewParam                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_PCComponent_ADM_PlayerBounty_C::IsTeamkilledVictim(const struct FUniqueNetIdRepl& Victim, bool* NewParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PCComponent_ADM_PlayerBounty_C", "IsTeamkilledVictim");

	Params::BP_PCComponent_ADM_PlayerBounty_C_IsTeamkilledVictim Parms{};

	Parms.Victim = std::move(Victim);

	UObject::ProcessEvent(Func, &Parms);

	if (NewParam != nullptr)
		*NewParam = Parms.NewParam;
}


// Function BP_PCComponent_ADM_PlayerBounty.BP_PCComponent_ADM_PlayerBounty_C.AddTeamkilledVictim
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerState*                     VictimPlayerState                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PCComponent_ADM_PlayerBounty_C::AddTeamkilledVictim(const class APlayerState*& VictimPlayerState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PCComponent_ADM_PlayerBounty_C", "AddTeamkilledVictim");

	Params::BP_PCComponent_ADM_PlayerBounty_C_AddTeamkilledVictim Parms{};

	Parms.VictimPlayerState = VictimPlayerState;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PCComponent_ADM_PlayerBounty.BP_PCComponent_ADM_PlayerBounty_C.RemoveTeamkilledVictim
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl                 Victim                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// bool                                    NoTeamKilledVictim                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_PCComponent_ADM_PlayerBounty_C::RemoveTeamkilledVictim(const struct FUniqueNetIdRepl& Victim, bool* NoTeamKilledVictim)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PCComponent_ADM_PlayerBounty_C", "RemoveTeamkilledVictim");

	Params::BP_PCComponent_ADM_PlayerBounty_C_RemoveTeamkilledVictim Parms{};

	Parms.Victim = std::move(Victim);

	UObject::ProcessEvent(Func, &Parms);

	if (NoTeamKilledVictim != nullptr)
		*NoTeamKilledVictim = Parms.NoTeamKilledVictim;
}


// Function BP_PCComponent_ADM_PlayerBounty.BP_PCComponent_ADM_PlayerBounty_C.IsWorldSpectatorYourTeamkiller
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_WorldSpectator_C*             WorldSpectator                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Output                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_PCComponent_ADM_PlayerBounty_C::IsWorldSpectatorYourTeamkiller(class ABP_WorldSpectator_C* WorldSpectator, bool* Output)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PCComponent_ADM_PlayerBounty_C", "IsWorldSpectatorYourTeamkiller");

	Params::BP_PCComponent_ADM_PlayerBounty_C_IsWorldSpectatorYourTeamkiller Parms{};

	Parms.WorldSpectator = WorldSpectator;

	UObject::ProcessEvent(Func, &Parms);

	if (Output != nullptr)
		*Output = Parms.Output;
}


// Function BP_PCComponent_ADM_PlayerBounty.BP_PCComponent_ADM_PlayerBounty_C.StoreMyKiller
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_PCComponent_ADM_PlayerBounty_C*KillerComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PCComponent_ADM_PlayerBounty_C::StoreMyKiller(class UBP_PCComponent_ADM_PlayerBounty_C* KillerComponent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PCComponent_ADM_PlayerBounty_C", "StoreMyKiller");

	Params::BP_PCComponent_ADM_PlayerBounty_C_StoreMyKiller Parms{};

	Parms.KillerComponent = KillerComponent;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PCComponent_ADM_PlayerBounty.BP_PCComponent_ADM_PlayerBounty_C.Team member killed
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerState*                     VictimPlayerState                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    StateWasChanged                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_PCComponent_ADM_PlayerBounty_C::Team_member_killed(const class APlayerState* VictimPlayerState, bool* StateWasChanged)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PCComponent_ADM_PlayerBounty_C", "Team member killed");

	Params::BP_PCComponent_ADM_PlayerBounty_C_Team_member_killed Parms{};

	Parms.VictimPlayerState = VictimPlayerState;

	UObject::ProcessEvent(Func, &Parms);

	if (StateWasChanged != nullptr)
		*StateWasChanged = Parms.StateWasChanged;
}


// Function BP_PCComponent_ADM_PlayerBounty.BP_PCComponent_ADM_PlayerBounty_C.Player has enough kills for threat
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    StateWasChanged                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_PCComponent_ADM_PlayerBounty_C::Player_has_enough_kills_for_threat(bool* StateWasChanged)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PCComponent_ADM_PlayerBounty_C", "Player has enough kills for threat");

	Params::BP_PCComponent_ADM_PlayerBounty_C_Player_has_enough_kills_for_threat Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (StateWasChanged != nullptr)
		*StateWasChanged = Parms.StateWasChanged;
}

}

