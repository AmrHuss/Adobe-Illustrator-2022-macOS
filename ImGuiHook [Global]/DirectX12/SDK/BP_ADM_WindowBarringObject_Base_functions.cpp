#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ADM_WindowBarringObject_Base

#include "Basic.hpp"

#include "BP_ADM_WindowBarringObject_Base_classes.hpp"
#include "BP_ADM_WindowBarringObject_Base_parameters.hpp"


namespace SDK
{

// Function BP_ADM_WindowBarringObject_Base.BP_ADM_WindowBarringObject_Base_C.ExecuteUbergraph_BP_ADM_WindowBarringObject_Base
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ADM_WindowBarringObject_Base_C::ExecuteUbergraph_BP_ADM_WindowBarringObject_Base(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ADM_WindowBarringObject_Base_C", "ExecuteUbergraph_BP_ADM_WindowBarringObject_Base");

	Params::BP_ADM_WindowBarringObject_Base_C_ExecuteUbergraph_BP_ADM_WindowBarringObject_Base Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ADM_WindowBarringObject_Base.BP_ADM_WindowBarringObject_Base_C.Set Obstacle Edge Enabled
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bEnabled                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_ADM_WindowBarringObject_Base_C::Set_Obstacle_Edge_Enabled(const bool bEnabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ADM_WindowBarringObject_Base_C", "Set Obstacle Edge Enabled");

	Params::BP_ADM_WindowBarringObject_Base_C_Set_Obstacle_Edge_Enabled Parms{};

	Parms.bEnabled = bEnabled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ADM_WindowBarringObject_Base.BP_ADM_WindowBarringObject_Base_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_ADM_WindowBarringObject_Base_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ADM_WindowBarringObject_Base_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ADM_WindowBarringObject_Base.BP_ADM_WindowBarringObject_Base_C.Destroy Actor Component
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UActorComponent*                  Component_to_Destroy                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ADM_WindowBarringObject_Base_C::Destroy_Actor_Component(class UActorComponent* Component_to_Destroy)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ADM_WindowBarringObject_Base_C", "Destroy Actor Component");

	Params::BP_ADM_WindowBarringObject_Base_C_Destroy_Actor_Component Parms{};

	Parms.Component_to_Destroy = Component_to_Destroy;

	UObject::ProcessEvent(Func, &Parms);
}

}

