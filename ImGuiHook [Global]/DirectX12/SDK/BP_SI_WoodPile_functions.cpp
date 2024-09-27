#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SI_WoodPile

#include "Basic.hpp"

#include "BP_SI_WoodPile_classes.hpp"
#include "BP_SI_WoodPile_parameters.hpp"


namespace SDK
{

// Function BP_SI_WoodPile.BP_SI_WoodPile_C.ExecuteUbergraph_BP_SI_WoodPile
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SI_WoodPile_C::ExecuteUbergraph_BP_SI_WoodPile(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SI_WoodPile_C", "ExecuteUbergraph_BP_SI_WoodPile");

	Params::BP_SI_WoodPile_C_ExecuteUbergraph_BP_SI_WoodPile Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SI_WoodPile.BP_SI_WoodPile_C.BndEvt__BP_InteractionItemComponent_K2Node_ComponentBoundEvent_0_PreInteraction Start on Server__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UInteractionItemComponent*        Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           Interacting_Actor                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SI_WoodPile_C::BndEvt__BP_InteractionItemComponent_K2Node_ComponentBoundEvent_0_PreInteraction_Start_on_Server__DelegateSignature(class UInteractionItemComponent* Sender, class AActor* Interacting_Actor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SI_WoodPile_C", "BndEvt__BP_InteractionItemComponent_K2Node_ComponentBoundEvent_0_PreInteraction Start on Server__DelegateSignature");

	Params::BP_SI_WoodPile_C_BndEvt__BP_InteractionItemComponent_K2Node_ComponentBoundEvent_0_PreInteraction_Start_on_Server__DelegateSignature Parms{};

	Parms.Sender = Sender;
	Parms.Interacting_Actor = Interacting_Actor;

	UObject::ProcessEvent(Func, &Parms);
}

}

