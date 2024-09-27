#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Character_Tutorial

#include "Basic.hpp"

#include "BP_Character_Tutorial_classes.hpp"
#include "BP_Character_Tutorial_parameters.hpp"


namespace SDK
{

// Function BP_Character_Tutorial.BP_Character_Tutorial_C.ExecuteUbergraph_BP_Character_Tutorial
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Character_Tutorial_C::ExecuteUbergraph_BP_Character_Tutorial(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Character_Tutorial_C", "ExecuteUbergraph_BP_Character_Tutorial");

	Params::BP_Character_Tutorial_C_ExecuteUbergraph_BP_Character_Tutorial Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Character_Tutorial.BP_Character_Tutorial_C.PlayerScoredTutorialKill
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_PlayerController_Script_C*    Killer                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AHumanCharacter*                  VictimCharacter                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                           Instigating_Item                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Headshot                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    Teamkill                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Character_Tutorial_C::PlayerScoredTutorialKill(class ABP_PlayerController_Script_C* Killer, class AHumanCharacter* VictimCharacter, class UClass* Instigating_Item, bool Headshot, bool Teamkill)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Character_Tutorial_C", "PlayerScoredTutorialKill");

	Params::BP_Character_Tutorial_C_PlayerScoredTutorialKill Parms{};

	Parms.Killer = Killer;
	Parms.VictimCharacter = VictimCharacter;
	Parms.Instigating_Item = Instigating_Item;
	Parms.Headshot = Headshot;
	Parms.Teamkill = Teamkill;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Character_Tutorial.BP_Character_Tutorial_C.PursuitSceneCameraFocusEnded
// (BlueprintCallable, BlueprintEvent)

void ABP_Character_Tutorial_C::PursuitSceneCameraFocusEnded()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Character_Tutorial_C", "PursuitSceneCameraFocusEnded");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Character_Tutorial.BP_Character_Tutorial_C.AllAIsDied
// (BlueprintCallable, BlueprintEvent)

void ABP_Character_Tutorial_C::AllAIsDied()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Character_Tutorial_C", "AllAIsDied");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Character_Tutorial.BP_Character_Tutorial_C.BandageHintCooldown
// (BlueprintCallable, BlueprintEvent)

void ABP_Character_Tutorial_C::BandageHintCooldown()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Character_Tutorial_C", "BandageHintCooldown");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Character_Tutorial.BP_Character_Tutorial_C.UIHint_Closed
// (BlueprintCallable, BlueprintEvent)

void ABP_Character_Tutorial_C::UIHint_Closed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Character_Tutorial_C", "UIHint_Closed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Character_Tutorial.BP_Character_Tutorial_C.UIHint_Show
// (BlueprintCallable, BlueprintEvent)

void ABP_Character_Tutorial_C::UIHint_Show()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Character_Tutorial_C", "UIHint_Show");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Character_Tutorial.BP_Character_Tutorial_C.UIHintQueue_Add
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_TutorialHint_10_C*            Hint_Component                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Character_Tutorial_C::UIHintQueue_Add(class UBP_TutorialHint_10_C* Hint_Component)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Character_Tutorial_C", "UIHintQueue_Add");

	Params::BP_Character_Tutorial_C_UIHintQueue_Add Parms{};

	Parms.Hint_Component = Hint_Component;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Character_Tutorial.BP_Character_Tutorial_C.FocusOnActorUsingFollower
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           ActorToFollow                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   TimeToFollowItFor                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   MaxWalkSpeedChange                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Character_Tutorial_C::FocusOnActorUsingFollower(class AActor* ActorToFollow, float TimeToFollowItFor, float MaxWalkSpeedChange)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Character_Tutorial_C", "FocusOnActorUsingFollower");

	Params::BP_Character_Tutorial_C_FocusOnActorUsingFollower Parms{};

	Parms.ActorToFollow = ActorToFollow;
	Parms.TimeToFollowItFor = TimeToFollowItFor;
	Parms.MaxWalkSpeedChange = MaxWalkSpeedChange;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Character_Tutorial.BP_Character_Tutorial_C.CheckIfWeaponDown2
// (BlueprintCallable, BlueprintEvent)

void ABP_Character_Tutorial_C::CheckIfWeaponDown2()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Character_Tutorial_C", "CheckIfWeaponDown2");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Character_Tutorial.BP_Character_Tutorial_C.ShowDeathScreen
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EUI_Tutorial_ResetReason                Reason                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Character_Tutorial_C::ShowDeathScreen(EUI_Tutorial_ResetReason Reason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Character_Tutorial_C", "ShowDeathScreen");

	Params::BP_Character_Tutorial_C_ShowDeathScreen Parms{};

	Parms.Reason = Reason;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Character_Tutorial.BP_Character_Tutorial_C.OnPursuitSceneStarted
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AHumanAICharacter*                HumanCharacterToFollow                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Character_Tutorial_C::OnPursuitSceneStarted(class AHumanAICharacter* HumanCharacterToFollow)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Character_Tutorial_C", "OnPursuitSceneStarted");

	Params::BP_Character_Tutorial_C_OnPursuitSceneStarted Parms{};

	Parms.HumanCharacterToFollow = HumanCharacterToFollow;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Character_Tutorial.BP_Character_Tutorial_C.RetunFromCameraFollow
// (BlueprintCallable, BlueprintEvent)

void ABP_Character_Tutorial_C::RetunFromCameraFollow()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Character_Tutorial_C", "RetunFromCameraFollow");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Character_Tutorial.BP_Character_Tutorial_C.ReceiveEndPlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// EEndPlayReason                          EndPlayReason                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Character_Tutorial_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Character_Tutorial_C", "ReceiveEndPlay");

	Params::BP_Character_Tutorial_C_ReceiveEndPlay Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Character_Tutorial.BP_Character_Tutorial_C.BeforeDied
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// float                                   DamageAmount                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EDamageType                             DamageType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AHumanCharacter*                  InstigatingCharacter                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSubclassOf<class AItem>                InstigatingItem                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// struct FHitResult                       HitResult                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABP_Character_Tutorial_C::BeforeDied(float DamageAmount, EDamageType DamageType, class AHumanCharacter* InstigatingCharacter, TSubclassOf<class AItem> InstigatingItem, const struct FHitResult& HitResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Character_Tutorial_C", "BeforeDied");

	Params::BP_Character_Tutorial_C_BeforeDied Parms{};

	Parms.DamageAmount = DamageAmount;
	Parms.DamageType = DamageType;
	Parms.InstigatingCharacter = InstigatingCharacter;
	Parms.InstigatingItem = InstigatingItem;
	Parms.HitResult = std::move(HitResult);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Character_Tutorial.BP_Character_Tutorial_C.SavePositionForAnalytics
// (BlueprintCallable, BlueprintEvent)

void ABP_Character_Tutorial_C::SavePositionForAnalytics()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Character_Tutorial_C", "SavePositionForAnalytics");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Character_Tutorial.BP_Character_Tutorial_C.PeriodicStateCheck
// (BlueprintCallable, BlueprintEvent)

void ABP_Character_Tutorial_C::PeriodicStateCheck()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Character_Tutorial_C", "PeriodicStateCheck");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Character_Tutorial.BP_Character_Tutorial_C.TutorialStep
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   TriggerID                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Character_Tutorial_C::TutorialStep(int32 TriggerID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Character_Tutorial_C", "TutorialStep");

	Params::BP_Character_Tutorial_C_TutorialStep Parms{};

	Parms.TriggerID = TriggerID;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Character_Tutorial.BP_Character_Tutorial_C.SendLocationAnalytics
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           Reason                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void ABP_Character_Tutorial_C::SendLocationAnalytics(const class FString& Reason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Character_Tutorial_C", "SendLocationAnalytics");

	Params::BP_Character_Tutorial_C_SendLocationAnalytics Parms{};

	Parms.Reason = std::move(Reason);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Character_Tutorial.BP_Character_Tutorial_C.CountAmmo
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   MagAmmo                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Chambered                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   AmmoCount                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Character_Tutorial_C::CountAmmo(int32 MagAmmo, int32 Chambered, int32* AmmoCount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Character_Tutorial_C", "CountAmmo");

	Params::BP_Character_Tutorial_C_CountAmmo Parms{};

	Parms.MagAmmo = MagAmmo;
	Parms.Chambered = Chambered;

	UObject::ProcessEvent(Func, &Parms);

	if (AmmoCount != nullptr)
		*AmmoCount = Parms.AmmoCount;
}


// Function BP_Character_Tutorial.BP_Character_Tutorial_C.TryLoadFromCheckpoint
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Character_Tutorial_C::TryLoadFromCheckpoint()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Character_Tutorial_C", "TryLoadFromCheckpoint");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Character_Tutorial.BP_Character_Tutorial_C.GetArchetypeGroup
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// EArchetypesGroup                        Group                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Character_Tutorial_C::GetArchetypeGroup(EArchetypesGroup* Group)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Character_Tutorial_C", "GetArchetypeGroup");

	Params::BP_Character_Tutorial_C_GetArchetypeGroup Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Group != nullptr)
		*Group = Parms.Group;
}


// Function BP_Character_Tutorial.BP_Character_Tutorial_C.SetRadiation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_RadiationWave_C*              RadiationWave                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Character_Tutorial_C::SetRadiation(class ABP_RadiationWave_C* RadiationWave)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Character_Tutorial_C", "SetRadiation");

	Params::BP_Character_Tutorial_C_SetRadiation Parms{};

	Parms.RadiationWave = RadiationWave;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Character_Tutorial.BP_Character_Tutorial_C.GetNextAvailableHintPlacement
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector2D                        Placement                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Character_Tutorial_C::GetNextAvailableHintPlacement(struct FVector2D* Placement)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Character_Tutorial_C", "GetNextAvailableHintPlacement");

	Params::BP_Character_Tutorial_C_GetNextAvailableHintPlacement Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Placement != nullptr)
		*Placement = std::move(Parms.Placement);
}


// Function BP_Character_Tutorial.BP_Character_Tutorial_C.SetHintPlacement
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_TutorialHint_10_C*            Hint                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Character_Tutorial_C::SetHintPlacement(class UBP_TutorialHint_10_C* Hint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Character_Tutorial_C", "SetHintPlacement");

	Params::BP_Character_Tutorial_C_SetHintPlacement Parms{};

	Parms.Hint = Hint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Character_Tutorial.BP_Character_Tutorial_C.GetActiveHintWidgetComponents
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class UBP_TutorialHint_10_C*>    ActiveWidgets                                          (Parm, OutParm, ContainsInstancedReference)

void ABP_Character_Tutorial_C::GetActiveHintWidgetComponents(TArray<class UBP_TutorialHint_10_C*>* ActiveWidgets)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Character_Tutorial_C", "GetActiveHintWidgetComponents");

	Params::BP_Character_Tutorial_C_GetActiveHintWidgetComponents Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (ActiveWidgets != nullptr)
		*ActiveWidgets = std::move(Parms.ActiveWidgets);
}


// Function BP_Character_Tutorial.BP_Character_Tutorial_C.ShowHintByTag
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             HintTag                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    HintShown                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Character_Tutorial_C::ShowHintByTag(class FName HintTag, bool* HintShown)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Character_Tutorial_C", "ShowHintByTag");

	Params::BP_Character_Tutorial_C_ShowHintByTag Parms{};

	Parms.HintTag = HintTag;

	UObject::ProcessEvent(Func, &Parms);

	if (HintShown != nullptr)
		*HintShown = Parms.HintShown;
}


// Function BP_Character_Tutorial.BP_Character_Tutorial_C.GetSpecialDamageAmountForCharacter
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AHumanCharacter*                  EnemyTakingDamage                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   CurrentDamageAmount                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float ABP_Character_Tutorial_C::GetSpecialDamageAmountForCharacter(const class AHumanCharacter* EnemyTakingDamage, float CurrentDamageAmount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Character_Tutorial_C", "GetSpecialDamageAmountForCharacter");

	Params::BP_Character_Tutorial_C_GetSpecialDamageAmountForCharacter Parms{};

	Parms.EnemyTakingDamage = EnemyTakingDamage;
	Parms.CurrentDamageAmount = CurrentDamageAmount;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_Character_Tutorial.BP_Character_Tutorial_C.ReceiveOnFire
// (Event, Public, BlueprintEvent)

void ABP_Character_Tutorial_C::ReceiveOnFire()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Character_Tutorial_C", "ReceiveOnFire");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Character_Tutorial.BP_Character_Tutorial_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Character_Tutorial_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Character_Tutorial_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}

