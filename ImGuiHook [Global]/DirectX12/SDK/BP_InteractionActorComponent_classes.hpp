#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_InteractionActorComponent

#include "Basic.hpp"

#include "Flame_structs.hpp"
#include "Flame_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_InteractionActorComponent.BP_InteractionActorComponent_C
// 0x0018 (0x0150 - 0x0138)
class UBP_InteractionActorComponent_C final : public UInteractionActorComponent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0138(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBP_InteractionMarker_2_C*              Marker_Widget;                                     // 0x0140(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInteractionItemComponent*              PrevInteractionItem;                               // 0x0148(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_InteractionActorComponent(int32 EntryPoint);
	void OnOwnerDied_Event(class ABP_Character_C* DyingCharacter, float DamageAmount, EDamageType DamageType, class AHumanCharacter* InstigatingCharacter, class UClass* InstigatingItem, const struct FHitResult& HitResult);
	void Game_Settings_Changed(const struct FGameSaveSettings& GameSettings);
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);
	void ReceiveBeginPlay();
	void OnHideMarker(class UInteractionActorComponent* Sender);
	void OnUpdateMarker(class UInteractionActorComponent* Sender, const struct FVector& MarkerPosition);
	void OnShowMarker(class UInteractionActorComponent* Sender, class UInteractionItemComponent* InteractionItem, const struct FVector& MarkerPosition, bool InteractionAllowed);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_InteractionActorComponent_C">();
	}
	static class UBP_InteractionActorComponent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_InteractionActorComponent_C>();
	}
};
static_assert(alignof(UBP_InteractionActorComponent_C) == 0x000008, "Wrong alignment on UBP_InteractionActorComponent_C");
static_assert(sizeof(UBP_InteractionActorComponent_C) == 0x000150, "Wrong size on UBP_InteractionActorComponent_C");
static_assert(offsetof(UBP_InteractionActorComponent_C, UberGraphFrame) == 0x000138, "Member 'UBP_InteractionActorComponent_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_InteractionActorComponent_C, Marker_Widget) == 0x000140, "Member 'UBP_InteractionActorComponent_C::Marker_Widget' has a wrong offset!");
static_assert(offsetof(UBP_InteractionActorComponent_C, PrevInteractionItem) == 0x000148, "Member 'UBP_InteractionActorComponent_C::PrevInteractionItem' has a wrong offset!");

}

