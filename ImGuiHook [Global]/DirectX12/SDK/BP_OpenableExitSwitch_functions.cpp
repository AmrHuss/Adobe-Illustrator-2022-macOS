#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_OpenableExitSwitch

#include "Basic.hpp"

#include "BP_OpenableExitSwitch_classes.hpp"
#include "BP_OpenableExitSwitch_parameters.hpp"


namespace SDK
{

// Function BP_OpenableExitSwitch.BP_OpenableExitSwitch_C.Switch Interacted
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Character_Script_C*           Character                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_OpenableExitVolume_C*         Openable_Exit_0                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_OpenableExitSwitch_C::Switch_Interacted(class ABP_Character_Script_C* Character, class ABP_OpenableExitVolume_C* Openable_Exit_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_OpenableExitSwitch_C", "Switch Interacted");

	Params::BP_OpenableExitSwitch_C_Switch_Interacted Parms{};

	Parms.Character = Character;
	Parms.Openable_Exit_0 = Openable_Exit_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_OpenableExitSwitch.BP_OpenableExitSwitch_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_OpenableExitSwitch_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_OpenableExitSwitch_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_OpenableExitSwitch.BP_OpenableExitSwitch_C.BndEvt__BP_InteractionItemComponent_K2Node_ComponentBoundEvent_0_Interaction Start on Server__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UInteractionItemComponent*        Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           Interacting_Actor                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_OpenableExitSwitch_C::BndEvt__BP_InteractionItemComponent_K2Node_ComponentBoundEvent_0_Interaction_Start_on_Server__DelegateSignature(class UInteractionItemComponent* Sender, class AActor* Interacting_Actor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_OpenableExitSwitch_C", "BndEvt__BP_InteractionItemComponent_K2Node_ComponentBoundEvent_0_Interaction Start on Server__DelegateSignature");

	Params::BP_OpenableExitSwitch_C_BndEvt__BP_InteractionItemComponent_K2Node_ComponentBoundEvent_0_Interaction_Start_on_Server__DelegateSignature Parms{};

	Parms.Sender = Sender;
	Parms.Interacting_Actor = Interacting_Actor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_OpenableExitSwitch.BP_OpenableExitSwitch_C.Set Interaction
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Enabled                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_OpenableExitSwitch_C::Set_Interaction(bool Enabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_OpenableExitSwitch_C", "Set Interaction");

	Params::BP_OpenableExitSwitch_C_Set_Interaction Parms{};

	Parms.Enabled = Enabled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_OpenableExitSwitch.BP_OpenableExitSwitch_C.Exit Closed
// (BlueprintCallable, BlueprintEvent)

void ABP_OpenableExitSwitch_C::Exit_Closed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_OpenableExitSwitch_C", "Exit Closed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_OpenableExitSwitch.BP_OpenableExitSwitch_C.Exit Opened
// (BlueprintCallable, BlueprintEvent)

void ABP_OpenableExitSwitch_C::Exit_Opened()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_OpenableExitSwitch_C", "Exit Opened");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_OpenableExitSwitch.BP_OpenableExitSwitch_C.Event SetClosedExitIcon Multicast
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_OpenableExitVolume_C*         Target                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_OpenableExitSwitch_C::Event_SetClosedExitIcon_Multicast(class ABP_OpenableExitVolume_C* Target)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_OpenableExitSwitch_C", "Event SetClosedExitIcon Multicast");

	Params::BP_OpenableExitSwitch_C_Event_SetClosedExitIcon_Multicast Parms{};

	Parms.Target = Target;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_OpenableExitSwitch.BP_OpenableExitSwitch_C.Event SetClosedExitIcon
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_OpenableExitVolume_C*         Target                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_OpenableExitSwitch_C::Event_SetClosedExitIcon(class ABP_OpenableExitVolume_C* Target)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_OpenableExitSwitch_C", "Event SetClosedExitIcon");

	Params::BP_OpenableExitSwitch_C_Event_SetClosedExitIcon Parms{};

	Parms.Target = Target;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_OpenableExitSwitch.BP_OpenableExitSwitch_C.Event SetClosedExitIcon OnServer
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_OpenableExitVolume_C*         Target                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_OpenableExitSwitch_C::Event_SetClosedExitIcon_OnServer(class ABP_OpenableExitVolume_C* Target)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_OpenableExitSwitch_C", "Event SetClosedExitIcon OnServer");

	Params::BP_OpenableExitSwitch_C_Event_SetClosedExitIcon_OnServer Parms{};

	Parms.Target = Target;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_OpenableExitSwitch.BP_OpenableExitSwitch_C.Event SetOpenedExitIcon
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_OpenableExitVolume_C*         Target                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_OpenableExitSwitch_C::Event_SetOpenedExitIcon(class ABP_OpenableExitVolume_C* Target)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_OpenableExitSwitch_C", "Event SetOpenedExitIcon");

	Params::BP_OpenableExitSwitch_C_Event_SetOpenedExitIcon Parms{};

	Parms.Target = Target;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_OpenableExitSwitch.BP_OpenableExitSwitch_C.Event SetOpenedExitIcon OnServer
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_OpenableExitVolume_C*         Target                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_OpenableExitSwitch_C::Event_SetOpenedExitIcon_OnServer(class ABP_OpenableExitVolume_C* Target)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_OpenableExitSwitch_C", "Event SetOpenedExitIcon OnServer");

	Params::BP_OpenableExitSwitch_C_Event_SetOpenedExitIcon_OnServer Parms{};

	Parms.Target = Target;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_OpenableExitSwitch.BP_OpenableExitSwitch_C.Event SetOpenedExitIcon Multicast
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_OpenableExitVolume_C*         Target                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_OpenableExitSwitch_C::Event_SetOpenedExitIcon_Multicast(class ABP_OpenableExitVolume_C* Target)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_OpenableExitSwitch_C", "Event SetOpenedExitIcon Multicast");

	Params::BP_OpenableExitSwitch_C_Event_SetOpenedExitIcon_Multicast Parms{};

	Parms.Target = Target;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_OpenableExitSwitch.BP_OpenableExitSwitch_C.ExecuteUbergraph_BP_OpenableExitSwitch
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_OpenableExitSwitch_C::ExecuteUbergraph_BP_OpenableExitSwitch(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_OpenableExitSwitch_C", "ExecuteUbergraph_BP_OpenableExitSwitch");

	Params::BP_OpenableExitSwitch_C_ExecuteUbergraph_BP_OpenableExitSwitch Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_OpenableExitSwitch.BP_OpenableExitSwitch_C.Openable Exit Switch Interacted__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Character_Script_C*           Interacting_Character                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_OpenableExitVolume_C*         Openable_Exit_0                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_OpenableExitSwitch_C::Openable_Exit_Switch_Interacted__DelegateSignature(class ABP_Character_Script_C* Interacting_Character, class ABP_OpenableExitVolume_C* Openable_Exit_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_OpenableExitSwitch_C", "Openable Exit Switch Interacted__DelegateSignature");

	Params::BP_OpenableExitSwitch_C_Openable_Exit_Switch_Interacted__DelegateSignature Parms{};

	Parms.Interacting_Character = Interacting_Character;
	Parms.Openable_Exit_0 = Openable_Exit_0;

	UObject::ProcessEvent(Func, &Parms);
}

}

