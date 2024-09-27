#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ADM_CommStation

#include "Basic.hpp"

#include "BP_ADM_CommStation_classes.hpp"
#include "BP_ADM_CommStation_parameters.hpp"


namespace SDK
{

// Function BP_ADM_CommStation.BP_ADM_CommStation_C.Set Interactability
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Interactable                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_ADM_CommStation_C::Set_Interactability(bool Interactable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ADM_CommStation_C", "Set Interactability");

	Params::BP_ADM_CommStation_C_Set_Interactability Parms{};

	Parms.Interactable = Interactable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ADM_CommStation.BP_ADM_CommStation_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_ADM_CommStation_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ADM_CommStation_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ADM_CommStation.BP_ADM_CommStation_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_ADM_CommStation_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ADM_CommStation_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ADM_CommStation.BP_ADM_CommStation_C.BndEvt__OverlapVolumeEncounterHint_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              OverlappedComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   OtherBodyIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bFromSweep                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                       SweepResult                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABP_ADM_CommStation_C::BndEvt__OverlapVolumeEncounterHint_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ADM_CommStation_C", "BndEvt__OverlapVolumeEncounterHint_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature");

	Params::BP_ADM_CommStation_C_BndEvt__OverlapVolumeEncounterHint_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = std::move(SweepResult);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ADM_CommStation.BP_ADM_CommStation_C.BndEvt__BP_InteractionItemComponent_K2Node_ComponentBoundEvent_2_Interaction Start on Server__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UInteractionItemComponent*        Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           Interacting_Actor                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ADM_CommStation_C::BndEvt__BP_InteractionItemComponent_K2Node_ComponentBoundEvent_2_Interaction_Start_on_Server__DelegateSignature(class UInteractionItemComponent* Sender, class AActor* Interacting_Actor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ADM_CommStation_C", "BndEvt__BP_InteractionItemComponent_K2Node_ComponentBoundEvent_2_Interaction Start on Server__DelegateSignature");

	Params::BP_ADM_CommStation_C_BndEvt__BP_InteractionItemComponent_K2Node_ComponentBoundEvent_2_Interaction_Start_on_Server__DelegateSignature Parms{};

	Parms.Sender = Sender;
	Parms.Interacting_Actor = Interacting_Actor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ADM_CommStation.BP_ADM_CommStation_C.Disable Commstation
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Time                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ADM_CommStation_C::Disable_Commstation(float Time)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ADM_CommStation_C", "Disable Commstation");

	Params::BP_ADM_CommStation_C_Disable_Commstation Parms{};

	Parms.Time = Time;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ADM_CommStation.BP_ADM_CommStation_C.Enable Commstation
// (BlueprintCallable, BlueprintEvent)

void ABP_ADM_CommStation_C::Enable_Commstation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ADM_CommStation_C", "Enable Commstation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ADM_CommStation.BP_ADM_CommStation_C.Minute To Airdrop Left
// (BlueprintCallable, BlueprintEvent)

void ABP_ADM_CommStation_C::Minute_To_Airdrop_Left()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ADM_CommStation_C", "Minute To Airdrop Left");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ADM_CommStation.BP_ADM_CommStation_C.Create or Destroy Sparks effect
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Create                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_ADM_CommStation_C::Create_or_Destroy_Sparks_effect(bool Create)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ADM_CommStation_C", "Create or Destroy Sparks effect");

	Params::BP_ADM_CommStation_C_Create_or_Destroy_Sparks_effect Parms{};

	Parms.Create = Create;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ADM_CommStation.BP_ADM_CommStation_C.Set Comm Station Material
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInterface*               Material                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ADM_CommStation_C::Set_Comm_Station_Material(class UMaterialInterface* Material)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ADM_CommStation_C", "Set Comm Station Material");

	Params::BP_ADM_CommStation_C_Set_Comm_Station_Material Parms{};

	Parms.Material = Material;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ADM_CommStation.BP_ADM_CommStation_C.Container Spawned
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_AirDropContainer_Base_C*      Container                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ADM_CommStation_C::Container_Spawned(class ABP_AirDropContainer_Base_C* Container)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ADM_CommStation_C", "Container Spawned");

	Params::BP_ADM_CommStation_C_Container_Spawned Parms{};

	Parms.Container = Container;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ADM_CommStation.BP_ADM_CommStation_C.Play ambient sound
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundBase*                       NewSound                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ADM_CommStation_C::Play_ambient_sound(class USoundBase* NewSound)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ADM_CommStation_C", "Play ambient sound");

	Params::BP_ADM_CommStation_C_Play_ambient_sound Parms{};

	Parms.NewSound = NewSound;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ADM_CommStation.BP_ADM_CommStation_C.ExecuteUbergraph_BP_ADM_CommStation
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ADM_CommStation_C::ExecuteUbergraph_BP_ADM_CommStation(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ADM_CommStation_C", "ExecuteUbergraph_BP_ADM_CommStation");

	Params::BP_ADM_CommStation_C_ExecuteUbergraph_BP_ADM_CommStation Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ADM_CommStation.BP_ADM_CommStation_C.Comm Station Interaction Triggered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_ADM_CommStation_C*            Comm_Station                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AHumanCharacter*                  Interacting_Character                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ADM_CommStation_C::Comm_Station_Interaction_Triggered__DelegateSignature(class ABP_ADM_CommStation_C* Comm_Station, class AHumanCharacter* Interacting_Character)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ADM_CommStation_C", "Comm Station Interaction Triggered__DelegateSignature");

	Params::BP_ADM_CommStation_C_Comm_Station_Interaction_Triggered__DelegateSignature Parms{};

	Parms.Comm_Station = Comm_Station;
	Parms.Interacting_Character = Interacting_Character;

	UObject::ProcessEvent(Func, &Parms);
}

}

