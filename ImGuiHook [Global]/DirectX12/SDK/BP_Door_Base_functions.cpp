#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Door_Base

#include "Basic.hpp"

#include "BP_Door_Base_classes.hpp"
#include "BP_Door_Base_parameters.hpp"


namespace SDK
{

// Function BP_Door_Base.BP_Door_Base_C.ExecuteUbergraph_BP_Door_Base
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Door_Base_C::ExecuteUbergraph_BP_Door_Base(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Door_Base_C", "ExecuteUbergraph_BP_Door_Base");

	Params::BP_Door_Base_C_ExecuteUbergraph_BP_Door_Base Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Door_Base.BP_Door_Base_C.OnDoorClose
// (Event, Protected, BlueprintEvent)

void ABP_Door_Base_C::OnDoorClose()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Door_Base_C", "OnDoorClose");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Door_Base.BP_Door_Base_C.OnDoorOpen
// (Event, Protected, BlueprintEvent)

void ABP_Door_Base_C::OnDoorOpen()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Door_Base_C", "OnDoorOpen");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Door_Base.BP_Door_Base_C.TriggerMeshSpecificParticle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_ParticleTriggerConditions             TriggerType                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    HandleReplicationYourself                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Door_Base_C::TriggerMeshSpecificParticle(E_ParticleTriggerConditions TriggerType, bool HandleReplicationYourself)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Door_Base_C", "TriggerMeshSpecificParticle");

	Params::BP_Door_Base_C_TriggerMeshSpecificParticle Parms{};

	Parms.TriggerType = TriggerType;
	Parms.HandleReplicationYourself = HandleReplicationYourself;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Door_Base.BP_Door_Base_C.UpdateAnimsAfterCustomizationChanges
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Door_Base_C::UpdateAnimsAfterCustomizationChanges()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Door_Base_C", "UpdateAnimsAfterCustomizationChanges");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Door_Base.BP_Door_Base_C.PutMapToRightHand
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Door_Base_C::PutMapToRightHand()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Door_Base_C", "PutMapToRightHand");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Door_Base.BP_Door_Base_C.ClearRightHand
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Door_Base_C::ClearRightHand()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Door_Base_C", "ClearRightHand");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Door_Base.BP_Door_Base_C.PutKitchenTimerToRightHand
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Door_Base_C::PutKitchenTimerToRightHand()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Door_Base_C", "PutKitchenTimerToRightHand");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Door_Base.BP_Door_Base_C.AnimHitReaction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             BoneName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          HitNormal                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Impact                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Door_Base_C::AnimHitReaction(class FName BoneName, const struct FVector& HitNormal, float Impact)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Door_Base_C", "AnimHitReaction");

	Params::BP_Door_Base_C_AnimHitReaction Parms{};

	Parms.BoneName = BoneName;
	Parms.HitNormal = std::move(HitNormal);
	Parms.Impact = Impact;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Door_Base.BP_Door_Base_C.AnimInteraction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_Actions                               Action                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Interrupt                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Door_Base_C::AnimInteraction(E_Actions Action, bool Interrupt)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Door_Base_C", "AnimInteraction");

	Params::BP_Door_Base_C_AnimInteraction Parms{};

	Parms.Action = Action;
	Parms.Interrupt = Interrupt;

	UObject::ProcessEvent(Func, &Parms);
}

}

