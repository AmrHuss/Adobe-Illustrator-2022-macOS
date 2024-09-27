#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Character_GunFight

#include "Basic.hpp"

#include "BP_Character_GunFight_classes.hpp"
#include "BP_Character_GunFight_parameters.hpp"


namespace SDK
{

// Function BP_Character_GunFight.BP_Character_GunFight_C.ExecuteUbergraph_BP_Character_GunFight
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Character_GunFight_C::ExecuteUbergraph_BP_Character_GunFight(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Character_GunFight_C", "ExecuteUbergraph_BP_Character_GunFight");

	Params::BP_Character_GunFight_C_ExecuteUbergraph_BP_Character_GunFight Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Character_GunFight.BP_Character_GunFight_C.ObjectiveCapturedEvent_Server
// (Net, NetServer, BlueprintCallable, BlueprintEvent)

void ABP_Character_GunFight_C::ObjectiveCapturedEvent_Server()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Character_GunFight_C", "ObjectiveCapturedEvent_Server");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Character_GunFight.BP_Character_GunFight_C.Failsafe_RequestLoadoutAgain
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void ABP_Character_GunFight_C::Failsafe_RequestLoadoutAgain()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Character_GunFight_C", "Failsafe_RequestLoadoutAgain");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Character_GunFight.BP_Character_GunFight_C.ResetPlayer
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_Character_GunFight_C::ResetPlayer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Character_GunFight_C", "ResetPlayer");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Character_GunFight.BP_Character_GunFight_C.ObjectiveCapturedEvent
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)

void ABP_Character_GunFight_C::ObjectiveCapturedEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Character_GunFight_C", "ObjectiveCapturedEvent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Character_GunFight.BP_Character_GunFight_C.SetPickedLoadout
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_GunFightLoadouts_S12          Loadout                                                (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_Character_GunFight_C::SetPickedLoadout(const struct FS_GunFightLoadouts_S12& Loadout)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Character_GunFight_C", "SetPickedLoadout");

	Params::BP_Character_GunFight_C_SetPickedLoadout Parms{};

	Parms.Loadout = std::move(Loadout);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Character_GunFight.BP_Character_GunFight_C.EquipWeapon
// (BlueprintCallable, BlueprintEvent)

void ABP_Character_GunFight_C::EquipWeapon()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Character_GunFight_C", "EquipWeapon");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Character_GunFight.BP_Character_GunFight_C.ClientEquipFirstWeapon
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)

void ABP_Character_GunFight_C::ClientEquipFirstWeapon()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Character_GunFight_C", "ClientEquipFirstWeapon");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Character_GunFight.BP_Character_GunFight_C.ReceiveEndPlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// EEndPlayReason                          EndPlayReason                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Character_GunFight_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Character_GunFight_C", "ReceiveEndPlay");

	Params::BP_Character_GunFight_C_ReceiveEndPlay Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Character_GunFight.BP_Character_GunFight_C.Remove Marker
// (BlueprintCallable, BlueprintEvent)

void ABP_Character_GunFight_C::Remove_Marker()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Character_GunFight_C", "Remove Marker");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Character_GunFight.BP_Character_GunFight_C.Add Item To Backpack
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                           Item_Type                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Amount                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Character_GunFight_C::Add_Item_To_Backpack(class UClass* Item_Type, int32 Amount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Character_GunFight_C", "Add Item To Backpack");

	Params::BP_Character_GunFight_C_Add_Item_To_Backpack Parms{};

	Parms.Item_Type = Item_Type;
	Parms.Amount = Amount;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Character_GunFight.BP_Character_GunFight_C.Add Weapon To Loadout
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                           Weapon_Type                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Ammo_in_Mag_Count                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Chambered_Ammo                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Character_GunFight_C::Add_Weapon_To_Loadout(class UClass* Weapon_Type, int32 Ammo_in_Mag_Count, bool Chambered_Ammo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Character_GunFight_C", "Add Weapon To Loadout");

	Params::BP_Character_GunFight_C_Add_Weapon_To_Loadout Parms{};

	Parms.Weapon_Type = Weapon_Type;
	Parms.Ammo_in_Mag_Count = Ammo_in_Mag_Count;
	Parms.Chambered_Ammo = Chambered_Ammo;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Character_GunFight.BP_Character_GunFight_C.ShouldTakeDamageBP
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AHumanCharacter*                  InstigatingCharacter                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           DamageCauser                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSubclassOf<class AItem>                ItemClass                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// EDamageType                             DamageType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABP_Character_GunFight_C::ShouldTakeDamageBP(class AHumanCharacter* InstigatingCharacter, const class AActor* DamageCauser, TSubclassOf<class AItem> ItemClass, EDamageType DamageType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Character_GunFight_C", "ShouldTakeDamageBP");

	Params::BP_Character_GunFight_C_ShouldTakeDamageBP Parms{};

	Parms.InstigatingCharacter = InstigatingCharacter;
	Parms.DamageCauser = DamageCauser;
	Parms.ItemClass = ItemClass;
	Parms.DamageType = DamageType;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_Character_GunFight.BP_Character_GunFight_C.OnOtherPlayerHit
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// float                                   DamageAmount                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EDamageType                             DamageType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AHumanCharacter*                  Victim                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSubclassOf<class AItem>                InstigatingItemClass                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// struct FHitResult                       HitResult                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// TArray<TSubclassOf<class AItem>>        AffectedItems                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, UObjectWrapper)

void ABP_Character_GunFight_C::OnOtherPlayerHit(float DamageAmount, EDamageType DamageType, class AHumanCharacter* Victim, TSubclassOf<class AItem> InstigatingItemClass, const struct FHitResult& HitResult, const TArray<TSubclassOf<class AItem>>& AffectedItems)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Character_GunFight_C", "OnOtherPlayerHit");

	Params::BP_Character_GunFight_C_OnOtherPlayerHit Parms{};

	Parms.DamageAmount = DamageAmount;
	Parms.DamageType = DamageType;
	Parms.Victim = Victim;
	Parms.InstigatingItemClass = InstigatingItemClass;
	Parms.HitResult = std::move(HitResult);
	Parms.AffectedItems = std::move(AffectedItems);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Character_GunFight.BP_Character_GunFight_C.ReceivePossessed
// (Event, Public, BlueprintEvent)
// Parameters:
// class AController*                      NewController                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Character_GunFight_C::ReceivePossessed(class AController* NewController)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Character_GunFight_C", "ReceivePossessed");

	Params::BP_Character_GunFight_C_ReceivePossessed Parms{};

	Parms.NewController = NewController;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Character_GunFight.BP_Character_GunFight_C.OnTakeDamage
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// float                                   DamageAmount                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EDamageType                             DamageType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AHumanCharacter*                  InstigatingActor                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSubclassOf<class AItem>                InstigatingItemClass                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// struct FHitResultSimplified             HitOptimised                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
// TArray<TSubclassOf<class AItem>>        AffectedItems                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, UObjectWrapper)

void ABP_Character_GunFight_C::OnTakeDamage(float DamageAmount, EDamageType DamageType, const class AHumanCharacter* InstigatingActor, TSubclassOf<class AItem> InstigatingItemClass, const struct FHitResultSimplified& HitOptimised, const TArray<TSubclassOf<class AItem>>& AffectedItems)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Character_GunFight_C", "OnTakeDamage");

	Params::BP_Character_GunFight_C_OnTakeDamage Parms{};

	Parms.DamageAmount = DamageAmount;
	Parms.DamageType = DamageType;
	Parms.InstigatingActor = InstigatingActor;
	Parms.InstigatingItemClass = InstigatingItemClass;
	Parms.HitOptimised = std::move(HitOptimised);
	Parms.AffectedItems = std::move(AffectedItems);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Character_GunFight.BP_Character_GunFight_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Character_GunFight_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Character_GunFight_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Character_GunFight.BP_Character_GunFight_C.Die
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// float                                   DamageAmount                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EDamageType                             DamageType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AHumanCharacter*                  InstigatingCharacter                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSubclassOf<class AItem>                InstigatingItem                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// struct FHitResult                       HitResult                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABP_Character_GunFight_C::Die(float DamageAmount, EDamageType DamageType, class AHumanCharacter* InstigatingCharacter, TSubclassOf<class AItem> InstigatingItem, const struct FHitResult& HitResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Character_GunFight_C", "Die");

	Params::BP_Character_GunFight_C_Die Parms{};

	Parms.DamageAmount = DamageAmount;
	Parms.DamageType = DamageType;
	Parms.InstigatingCharacter = InstigatingCharacter;
	Parms.InstigatingItem = InstigatingItem;
	Parms.HitResult = std::move(HitResult);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Character_GunFight.BP_Character_GunFight_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Character_GunFight_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Character_GunFight_C", "ReceiveTick");

	Params::BP_Character_GunFight_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}

}

