#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Character_Matches

#include "Basic.hpp"

#include "BP_Character_Matches_classes.hpp"
#include "BP_Character_Matches_parameters.hpp"


namespace SDK
{

// Function BP_Character_Matches.BP_Character_Matches_C.Airdrop Looted__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_Character_Matches_C::Airdrop_Looted__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Character_Matches_C", "Airdrop Looted__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Character_Matches.BP_Character_Matches_C.ExecuteUbergraph_BP_Character_Matches
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Character_Matches_C::ExecuteUbergraph_BP_Character_Matches(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Character_Matches_C", "ExecuteUbergraph_BP_Character_Matches");

	Params::BP_Character_Matches_C_ExecuteUbergraph_BP_Character_Matches Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Character_Matches.BP_Character_Matches_C.StoredWeaponClient
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           WeaponObjectName                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UClass*                           WeaponClass                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Character_Matches_C::StoredWeaponClient(const class FString& WeaponObjectName, class UClass* WeaponClass)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Character_Matches_C", "StoredWeaponClient");

	Params::BP_Character_Matches_C_StoredWeaponClient Parms{};

	Parms.WeaponObjectName = std::move(WeaponObjectName);
	Parms.WeaponClass = WeaponClass;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Character_Matches.BP_Character_Matches_C.BndEvt__Inventory_K2Node_ComponentBoundEvent_0_OnStoredWeapon__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class AWeapon*                          Weapon                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Character_Matches_C::BndEvt__Inventory_K2Node_ComponentBoundEvent_0_OnStoredWeapon__DelegateSignature(class AWeapon* Weapon)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Character_Matches_C", "BndEvt__Inventory_K2Node_ComponentBoundEvent_0_OnStoredWeapon__DelegateSignature");

	Params::BP_Character_Matches_C_BndEvt__Inventory_K2Node_ComponentBoundEvent_0_OnStoredWeapon__DelegateSignature Parms{};

	Parms.Weapon = Weapon;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Character_Matches.BP_Character_Matches_C.OpenedTimedSafe
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_TimedSafe_OpenCombinations            OpenType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Character_Matches_C::OpenedTimedSafe(E_TimedSafe_OpenCombinations OpenType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Character_Matches_C", "OpenedTimedSafe");

	Params::BP_Character_Matches_C_OpenedTimedSafe Parms{};

	Parms.OpenType = OpenType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Character_Matches.BP_Character_Matches_C.Looted Item Client
// (Net, NetReliable, HasOutParams, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FLootSlot>                Looted_Items                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_Character_Matches_C::Looted_Item_Client(TArray<struct FLootSlot>& Looted_Items)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Character_Matches_C", "Looted Item Client");

	Params::BP_Character_Matches_C_Looted_Item_Client Parms{};

	Parms.Looted_Items = std::move(Looted_Items);

	UObject::ProcessEvent(Func, &Parms);

	Looted_Items = std::move(Parms.Looted_Items);
}


// Function BP_Character_Matches.BP_Character_Matches_C.Item Looted
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Amount                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                           Item                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Character_Matches_C::Item_Looted(int32 Amount, class UClass* Item)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Character_Matches_C", "Item Looted");

	Params::BP_Character_Matches_C_Item_Looted Parms{};

	Parms.Amount = Amount;
	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Character_Matches.BP_Character_Matches_C.Looted Item Server
// (Net, NetReliable, NetServer, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FLootSlot>                Looted_Items                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_Character_Matches_C::Looted_Item_Server(const TArray<struct FLootSlot>& Looted_Items)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Character_Matches_C", "Looted Item Server");

	Params::BP_Character_Matches_C_Looted_Item_Server Parms{};

	Parms.Looted_Items = std::move(Looted_Items);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Character_Matches.BP_Character_Matches_C.BndEvt__Inventory_K2Node_ComponentBoundEvent_1_LootTaken__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class AHumanCharacter*                  Sender                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayStorage*                 SourceLootActor                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FLootSlot>                LootedItems                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_Character_Matches_C::BndEvt__Inventory_K2Node_ComponentBoundEvent_1_LootTaken__DelegateSignature(const class AHumanCharacter* Sender, const class AGameplayStorage* SourceLootActor, TArray<struct FLootSlot>& LootedItems)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Character_Matches_C", "BndEvt__Inventory_K2Node_ComponentBoundEvent_1_LootTaken__DelegateSignature");

	Params::BP_Character_Matches_C_BndEvt__Inventory_K2Node_ComponentBoundEvent_1_LootTaken__DelegateSignature Parms{};

	Parms.Sender = Sender;
	Parms.SourceLootActor = SourceLootActor;
	Parms.LootedItems = std::move(LootedItems);

	UObject::ProcessEvent(Func, &Parms);

	LootedItems = std::move(Parms.LootedItems);
}


// Function BP_Character_Matches.BP_Character_Matches_C.Turn Character to Heading
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Instantly                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                                   Heading                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Character_Matches_C::Turn_Character_to_Heading(bool Instantly, float Heading)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Character_Matches_C", "Turn Character to Heading");

	Params::BP_Character_Matches_C_Turn_Character_to_Heading Parms{};

	Parms.Instantly = Instantly;
	Parms.Heading = Heading;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Character_Matches.BP_Character_Matches_C.PlayKitchenTimerGesture
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_Character_Matches_C::PlayKitchenTimerGesture()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Character_Matches_C", "PlayKitchenTimerGesture");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Character_Matches.BP_Character_Matches_C.PlayMapGesture
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_Character_Matches_C::PlayMapGesture()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Character_Matches_C", "PlayMapGesture");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Character_Matches.BP_Character_Matches_C.Clear Right Hand
// (BlueprintCallable, BlueprintEvent)

void ABP_Character_Matches_C::Clear_Right_Hand()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Character_Matches_C", "Clear Right Hand");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Character_Matches.BP_Character_Matches_C.Put Kitchen Timer to Right Hand
// (BlueprintCallable, BlueprintEvent)

void ABP_Character_Matches_C::Put_Kitchen_Timer_to_Right_Hand()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Character_Matches_C", "Put Kitchen Timer to Right Hand");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Character_Matches.BP_Character_Matches_C.Put Map to Right Hand
// (BlueprintCallable, BlueprintEvent)

void ABP_Character_Matches_C::Put_Map_to_Right_Hand()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Character_Matches_C", "Put Map to Right Hand");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Character_Matches.BP_Character_Matches_C.Process Kill Gameplay Events
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_PlayerController_Script_C*    Killer                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_PlayerController_Script_C*    Victim                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Headshot                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    Teamkill                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Character_Matches_C::Process_Kill_Gameplay_Events(class ABP_PlayerController_Script_C* Killer, class ABP_PlayerController_Script_C* Victim, bool Headshot, bool Teamkill)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Character_Matches_C", "Process Kill Gameplay Events");

	Params::BP_Character_Matches_C_Process_Kill_Gameplay_Events Parms{};

	Parms.Killer = Killer;
	Parms.Victim = Victim;
	Parms.Headshot = Headshot;
	Parms.Teamkill = Teamkill;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Character_Matches.BP_Character_Matches_C.Scored a Kill
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_PlayerController_Script_C*    Killer                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_PlayerController_Script_C*    Victim                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                           Instigating_Item                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Headshot                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    Teamkill                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Character_Matches_C::Scored_a_Kill(class ABP_PlayerController_Script_C* Killer, class ABP_PlayerController_Script_C* Victim, class UClass* Instigating_Item, bool Headshot, bool Teamkill)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Character_Matches_C", "Scored a Kill");

	Params::BP_Character_Matches_C_Scored_a_Kill Parms{};

	Parms.Killer = Killer;
	Parms.Victim = Victim;
	Parms.Instigating_Item = Instigating_Item;
	Parms.Headshot = Headshot;
	Parms.Teamkill = Teamkill;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Character_Matches.BP_Character_Matches_C.PutKitchenTimerToRightHand
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Character_Matches_C::PutKitchenTimerToRightHand()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Character_Matches_C", "PutKitchenTimerToRightHand");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Character_Matches.BP_Character_Matches_C.ClearRightHand
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Character_Matches_C::ClearRightHand()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Character_Matches_C", "ClearRightHand");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Character_Matches.BP_Character_Matches_C.PutMapToRightHand
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Character_Matches_C::PutMapToRightHand()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Character_Matches_C", "PutMapToRightHand");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Character_Matches.BP_Character_Matches_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Character_Matches_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Character_Matches_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Character_Matches.BP_Character_Matches_C.Die
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// float                                   DamageAmount                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EDamageType                             DamageType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AHumanCharacter*                  InstigatingCharacter                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSubclassOf<class AItem>                InstigatingItem                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// struct FHitResult                       HitResult                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABP_Character_Matches_C::Die(float DamageAmount, EDamageType DamageType, class AHumanCharacter* InstigatingCharacter, TSubclassOf<class AItem> InstigatingItem, const struct FHitResult& HitResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Character_Matches_C", "Die");

	Params::BP_Character_Matches_C_Die Parms{};

	Parms.DamageAmount = DamageAmount;
	Parms.DamageType = DamageType;
	Parms.InstigatingCharacter = InstigatingCharacter;
	Parms.InstigatingItem = InstigatingItem;
	Parms.HitResult = std::move(HitResult);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Character_Matches.BP_Character_Matches_C.ReceivePossessed
// (Event, Public, BlueprintEvent)
// Parameters:
// class AController*                      NewController                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Character_Matches_C::ReceivePossessed(class AController* NewController)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Character_Matches_C", "ReceivePossessed");

	Params::BP_Character_Matches_C_ReceivePossessed Parms{};

	Parms.NewController = NewController;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Character_Matches.BP_Character_Matches_C.AreCharactersInSameTeam
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AHumanCharacter*                  OtherCharacter                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    AreInSameTeam                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    AreSameCharacter                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Character_Matches_C::AreCharactersInSameTeam(class AHumanCharacter* OtherCharacter, bool* AreInSameTeam, bool* AreSameCharacter) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Character_Matches_C", "AreCharactersInSameTeam");

	Params::BP_Character_Matches_C_AreCharactersInSameTeam Parms{};

	Parms.OtherCharacter = OtherCharacter;

	UObject::ProcessEvent(Func, &Parms);

	if (AreInSameTeam != nullptr)
		*AreInSameTeam = Parms.AreInSameTeam;

	if (AreSameCharacter != nullptr)
		*AreSameCharacter = Parms.AreSameCharacter;
}

}

