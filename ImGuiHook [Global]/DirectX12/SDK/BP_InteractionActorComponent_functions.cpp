#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_InteractionActorComponent

#include "Basic.hpp"

#include "BP_InteractionActorComponent_classes.hpp"
#include "BP_InteractionActorComponent_parameters.hpp"


namespace SDK
{

// Function BP_InteractionActorComponent.BP_InteractionActorComponent_C.ExecuteUbergraph_BP_InteractionActorComponent
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_InteractionActorComponent_C::ExecuteUbergraph_BP_InteractionActorComponent(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_InteractionActorComponent_C", "ExecuteUbergraph_BP_InteractionActorComponent");

	Params::BP_InteractionActorComponent_C_ExecuteUbergraph_BP_InteractionActorComponent Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_InteractionActorComponent.BP_InteractionActorComponent_C.OnOwnerDied_Event
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Character_C*                  DyingCharacter                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   DamageAmount                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EDamageType                             DamageType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AHumanCharacter*                  InstigatingCharacter                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                           InstigatingItem                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       HitResult                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void UBP_InteractionActorComponent_C::OnOwnerDied_Event(class ABP_Character_C* DyingCharacter, float DamageAmount, EDamageType DamageType, class AHumanCharacter* InstigatingCharacter, class UClass* InstigatingItem, const struct FHitResult& HitResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_InteractionActorComponent_C", "OnOwnerDied_Event");

	Params::BP_InteractionActorComponent_C_OnOwnerDied_Event Parms{};

	Parms.DyingCharacter = DyingCharacter;
	Parms.DamageAmount = DamageAmount;
	Parms.DamageType = DamageType;
	Parms.InstigatingCharacter = InstigatingCharacter;
	Parms.InstigatingItem = InstigatingItem;
	Parms.HitResult = std::move(HitResult);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_InteractionActorComponent.BP_InteractionActorComponent_C.Game Settings Changed
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameSaveSettings                GameSettings                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBP_InteractionActorComponent_C::Game_Settings_Changed(const struct FGameSaveSettings& GameSettings)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_InteractionActorComponent_C", "Game Settings Changed");

	Params::BP_InteractionActorComponent_C_Game_Settings_Changed Parms{};

	Parms.GameSettings = std::move(GameSettings);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_InteractionActorComponent.BP_InteractionActorComponent_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// EEndPlayReason                          EndPlayReason                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_InteractionActorComponent_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_InteractionActorComponent_C", "ReceiveEndPlay");

	Params::BP_InteractionActorComponent_C_ReceiveEndPlay Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_InteractionActorComponent.BP_InteractionActorComponent_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBP_InteractionActorComponent_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_InteractionActorComponent_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_InteractionActorComponent.BP_InteractionActorComponent_C.OnHideMarker
// (Event, Public, BlueprintEvent)
// Parameters:
// class UInteractionActorComponent*       Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_InteractionActorComponent_C::OnHideMarker(class UInteractionActorComponent* Sender)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_InteractionActorComponent_C", "OnHideMarker");

	Params::BP_InteractionActorComponent_C_OnHideMarker Parms{};

	Parms.Sender = Sender;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_InteractionActorComponent.BP_InteractionActorComponent_C.OnUpdateMarker
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class UInteractionActorComponent*       Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          MarkerPosition                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_InteractionActorComponent_C::OnUpdateMarker(class UInteractionActorComponent* Sender, const struct FVector& MarkerPosition)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_InteractionActorComponent_C", "OnUpdateMarker");

	Params::BP_InteractionActorComponent_C_OnUpdateMarker Parms{};

	Parms.Sender = Sender;
	Parms.MarkerPosition = std::move(MarkerPosition);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_InteractionActorComponent.BP_InteractionActorComponent_C.OnShowMarker
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class UInteractionActorComponent*       Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInteractionItemComponent*        InteractionItem                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          MarkerPosition                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    InteractionAllowed                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_InteractionActorComponent_C::OnShowMarker(class UInteractionActorComponent* Sender, class UInteractionItemComponent* InteractionItem, const struct FVector& MarkerPosition, bool InteractionAllowed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_InteractionActorComponent_C", "OnShowMarker");

	Params::BP_InteractionActorComponent_C_OnShowMarker Parms{};

	Parms.Sender = Sender;
	Parms.InteractionItem = InteractionItem;
	Parms.MarkerPosition = std::move(MarkerPosition);
	Parms.InteractionAllowed = InteractionAllowed;

	UObject::ProcessEvent(Func, &Parms);
}

}

