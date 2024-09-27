#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SI_BaseGenerator

#include "Basic.hpp"

#include "BP_SI_BaseGenerator_classes.hpp"
#include "BP_SI_BaseGenerator_parameters.hpp"


namespace SDK
{

// Function BP_SI_BaseGenerator.BP_SI_BaseGenerator_C.ExecuteUbergraph_BP_SI_BaseGenerator
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SI_BaseGenerator_C::ExecuteUbergraph_BP_SI_BaseGenerator(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SI_BaseGenerator_C", "ExecuteUbergraph_BP_SI_BaseGenerator");

	Params::BP_SI_BaseGenerator_C_ExecuteUbergraph_BP_SI_BaseGenerator Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SI_BaseGenerator.BP_SI_BaseGenerator_C.PlayCollectingSound
// (BlueprintCallable, BlueprintEvent)

void ABP_SI_BaseGenerator_C::PlayCollectingSound()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SI_BaseGenerator_C", "PlayCollectingSound");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SI_BaseGenerator.BP_SI_BaseGenerator_C.BndEvt__BP_InteractionItemComponent_K2Node_ComponentBoundEvent_0_Interaction Start on Server__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UInteractionItemComponent*        Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           Interacting_Actor                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SI_BaseGenerator_C::BndEvt__BP_InteractionItemComponent_K2Node_ComponentBoundEvent_0_Interaction_Start_on_Server__DelegateSignature(class UInteractionItemComponent* Sender, class AActor* Interacting_Actor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SI_BaseGenerator_C", "BndEvt__BP_InteractionItemComponent_K2Node_ComponentBoundEvent_0_Interaction Start on Server__DelegateSignature");

	Params::BP_SI_BaseGenerator_C_BndEvt__BP_InteractionItemComponent_K2Node_ComponentBoundEvent_0_Interaction_Start_on_Server__DelegateSignature Parms{};

	Parms.Sender = Sender;
	Parms.Interacting_Actor = Interacting_Actor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SI_BaseGenerator.BP_SI_BaseGenerator_C.LoadProductionSoftMesh
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TSoftObjectPtr<class UStaticMesh>       SoftObject                                             (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_SI_BaseGenerator_C::LoadProductionSoftMesh(TSoftObjectPtr<class UStaticMesh> SoftObject)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SI_BaseGenerator_C", "LoadProductionSoftMesh");

	Params::BP_SI_BaseGenerator_C_LoadProductionSoftMesh Parms{};

	Parms.SoftObject = SoftObject;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SI_BaseGenerator.BP_SI_BaseGenerator_C.Event SetGeneratedItemMesh
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Generated_Mesh_Level                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SI_BaseGenerator_C::Event_SetGeneratedItemMesh(int32 Generated_Mesh_Level)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SI_BaseGenerator_C", "Event SetGeneratedItemMesh");

	Params::BP_SI_BaseGenerator_C_Event_SetGeneratedItemMesh Parms{};

	Parms.Generated_Mesh_Level = Generated_Mesh_Level;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SI_BaseGenerator.BP_SI_BaseGenerator_C.AllowMatchmakingMessages
// (BlueprintCallable, BlueprintEvent)

void ABP_SI_BaseGenerator_C::AllowMatchmakingMessages()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SI_BaseGenerator_C", "AllowMatchmakingMessages");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SI_BaseGenerator.BP_SI_BaseGenerator_C.UpdateNotification
// (BlueprintCallable, BlueprintEvent)

void ABP_SI_BaseGenerator_C::UpdateNotification()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SI_BaseGenerator_C", "UpdateNotification");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SI_BaseGenerator.BP_SI_BaseGenerator_C.OnLoaded_303A9E7341428F48F05BE78A14B02784
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SI_BaseGenerator_C::OnLoaded_303A9E7341428F48F05BE78A14B02784(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SI_BaseGenerator_C", "OnLoaded_303A9E7341428F48F05BE78A14B02784");

	Params::BP_SI_BaseGenerator_C_OnLoaded_303A9E7341428F48F05BE78A14B02784 Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SI_BaseGenerator.BP_SI_BaseGenerator_C.OnLoaded_303A9E7341428F48F05BE78AF25084D1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SI_BaseGenerator_C::OnLoaded_303A9E7341428F48F05BE78AF25084D1(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SI_BaseGenerator_C", "OnLoaded_303A9E7341428F48F05BE78AF25084D1");

	Params::BP_SI_BaseGenerator_C_OnLoaded_303A9E7341428F48F05BE78AF25084D1 Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SI_BaseGenerator.BP_SI_BaseGenerator_C.SetGeneratedItemMesh
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   GeneratedMeshLevel                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SI_BaseGenerator_C::SetGeneratedItemMesh(int32 GeneratedMeshLevel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SI_BaseGenerator_C", "SetGeneratedItemMesh");

	Params::BP_SI_BaseGenerator_C_SetGeneratedItemMesh Parms{};

	Parms.GeneratedMeshLevel = GeneratedMeshLevel;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SI_BaseGenerator.BP_SI_BaseGenerator_C.PlanNextUpdateOfGeneratedItemMesh
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_SI_BaseGenerator_C::PlanNextUpdateOfGeneratedItemMesh()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SI_BaseGenerator_C", "PlanNextUpdateOfGeneratedItemMesh");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SI_BaseGenerator.BP_SI_BaseGenerator_C.PlanNextUpdateOfGeneratedItemMeshForGivenCounts
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Count_0                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   MaxCapacity_0                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   CountFloat                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Production                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SI_BaseGenerator_C::PlanNextUpdateOfGeneratedItemMeshForGivenCounts(int32 Count_0, int32 MaxCapacity_0, float CountFloat, float Production)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SI_BaseGenerator_C", "PlanNextUpdateOfGeneratedItemMeshForGivenCounts");

	Params::BP_SI_BaseGenerator_C_PlanNextUpdateOfGeneratedItemMeshForGivenCounts Parms{};

	Parms.Count_0 = Count_0;
	Parms.MaxCapacity_0 = MaxCapacity_0;
	Parms.CountFloat = CountFloat;
	Parms.Production = Production;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SI_BaseGenerator.BP_SI_BaseGenerator_C.PlanNextUpdateOfGeneratedItemMesh_Zero
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_SI_BaseGenerator_C::PlanNextUpdateOfGeneratedItemMesh_Zero()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SI_BaseGenerator_C", "PlanNextUpdateOfGeneratedItemMesh_Zero");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SI_BaseGenerator.BP_SI_BaseGenerator_C.OverridableInteractedInteraction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           InteractingActor                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SI_BaseGenerator_C::OverridableInteractedInteraction(class UObject* Sender, class AActor* InteractingActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SI_BaseGenerator_C", "OverridableInteractedInteraction");

	Params::BP_SI_BaseGenerator_C_OverridableInteractedInteraction Parms{};

	Parms.Sender = Sender;
	Parms.InteractingActor = InteractingActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SI_BaseGenerator.BP_SI_BaseGenerator_C.EnableNotifications
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_SI_BaseGenerator_C::EnableNotifications()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SI_BaseGenerator_C", "EnableNotifications");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SI_BaseGenerator.BP_SI_BaseGenerator_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_SI_BaseGenerator_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SI_BaseGenerator_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SI_BaseGenerator.BP_SI_BaseGenerator_C.SomethingChanged
// (BlueprintCallable, BlueprintEvent)

void ABP_SI_BaseGenerator_C::SomethingChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SI_BaseGenerator_C", "SomethingChanged");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SI_BaseGenerator.BP_SI_BaseGenerator_C.ShowHologram
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Hologram                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SI_BaseGenerator_C::ShowHologram(class UObject* Hologram)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SI_BaseGenerator_C", "ShowHologram");

	Params::BP_SI_BaseGenerator_C_ShowHologram Parms{};

	Parms.Hologram = Hologram;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SI_BaseGenerator.BP_SI_BaseGenerator_C.UnShowHologram
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_SI_BaseGenerator_C::UnShowHologram()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SI_BaseGenerator_C", "UnShowHologram");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SI_BaseGenerator.BP_SI_BaseGenerator_C.GetGeneratorType
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// E_GeneratorType                         ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

E_GeneratorType ABP_SI_BaseGenerator_C::GetGeneratorType() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SI_BaseGenerator_C", "GetGeneratorType");

	Params::BP_SI_BaseGenerator_C_GetGeneratorType Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_SI_BaseGenerator.BP_SI_BaseGenerator_C.GetMaxCapacity
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int32                                   MaxCapacity_0                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SI_BaseGenerator_C::GetMaxCapacity(int32* MaxCapacity_0) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SI_BaseGenerator_C", "GetMaxCapacity");

	Params::BP_SI_BaseGenerator_C_GetMaxCapacity Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (MaxCapacity_0 != nullptr)
		*MaxCapacity_0 = Parms.MaxCapacity_0;
}


// Function BP_SI_BaseGenerator.BP_SI_BaseGenerator_C.GetGeneratorName
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// E_GeneratorType                         Index_0                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InputPin                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             ReturnValue                                            (Parm, OutParm, ReturnParm)

class FText ABP_SI_BaseGenerator_C::GetGeneratorName(E_GeneratorType Index_0, int32 InputPin) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SI_BaseGenerator_C", "GetGeneratorName");

	Params::BP_SI_BaseGenerator_C_GetGeneratorName Parms{};

	Parms.Index_0 = Index_0;
	Parms.InputPin = InputPin;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_SI_BaseGenerator.BP_SI_BaseGenerator_C.RemoveNameIndex
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class FText                             OriginalName                                           (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                             NameWithoutIndex                                       (Parm, OutParm)

void ABP_SI_BaseGenerator_C::RemoveNameIndex(const class FText& OriginalName, class FText* NameWithoutIndex) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SI_BaseGenerator_C", "RemoveNameIndex");

	Params::BP_SI_BaseGenerator_C_RemoveNameIndex Parms{};

	Parms.OriginalName = std::move(OriginalName);

	UObject::ProcessEvent(Func, &Parms);

	if (NameWithoutIndex != nullptr)
		*NameWithoutIndex = std::move(Parms.NameWithoutIndex);
}


// Function BP_SI_BaseGenerator.BP_SI_BaseGenerator_C.IsMaxCapacity
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                                    MaxCapacity_0                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_SI_BaseGenerator_C::IsMaxCapacity(bool* MaxCapacity_0) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SI_BaseGenerator_C", "IsMaxCapacity");

	Params::BP_SI_BaseGenerator_C_IsMaxCapacity Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (MaxCapacity_0 != nullptr)
		*MaxCapacity_0 = Parms.MaxCapacity_0;
}

}

