#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_ChallengesListItemFocusable

#include "Basic.hpp"

#include "E_ChallengeManagerState_structs.hpp"
#include "Engine_structs.hpp"
#include "Flame_structs.hpp"
#include "Flame_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "E_ChallengeSlotState_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_ChallengesListItemFocusable.UI_ChallengesListItemFocusable_C
// 0x00B8 (0x0450 - 0x0398)
class UUI_ChallengesListItemFocusable_C final : public UListButtonWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0398(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UFlameTextBlock*                        ChallengeCondition;                                // 0x03A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFlameTextBlock*                        ChallengeDescription;                              // 0x03A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ChallengeIcon;                                     // 0x03B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                           ChallengeProgressBar;                              // 0x03B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFlameTextBlock*                        ChallengeProgressValue;                            // 0x03C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFlameTextBlock*                        ChallengeTitle;                                    // 0x03C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 CompletedTick;                                     // 0x03D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_88;                                          // 0x03D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               LoadingOverlay;                                    // 0x03E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFlameTextBlock*                        LoadingText;                                       // 0x03E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         RewardsHZBox;                                      // 0x03F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        RewardsInfoSwitcher;                               // 0x03F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 StoryChallengeBackgroundHighlight;                 // 0x0400(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ABP_ChallengeSlot_C*                    BP_ChallengeSlot;                                  // 0x0408(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class ABP_ChallengeManager_C*                 BP_ChallengeManager;                               // 0x0410(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDateTime                              NextResetTimestamp;                                // 0x0418(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             ChallengeSlotCancelled;                            // 0x0420(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<struct FChallengeReward>               ChallengeRewardList;                               // 0x0430(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	EChallengeCategory                            ChallengeCategory;                                 // 0x0440(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_441[0x3];                                      // 0x0441(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CurrentProgress;                                   // 0x0444(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         MaxProgress;                                       // 0x0448(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_ChallengeSlotState                          CurrentSlotState;                                  // 0x044C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ChallengeSlotCancelled__DelegateSignature(class ABP_ChallengeSlot_C* BP_ChallengeSlot_0);
	void ExecuteUbergraph_UI_ChallengesListItemFocusable(int32 EntryPoint);
	void BndEvt__UI_ChallengesListItemFocusable_Button_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(class UButton* Sender);
	void Init();
	void OnStateChanged(class ABP_ChallengeSlot_C* Slot_0);
	void OnChallengeCancelled(bool Success);
	void EventChallengeManagerReady();
	void UpdateChallengeState(class ABP_ChallengeSlot_C* ChallengeSlotIn);
	void GetRemainingTime(const struct FDateTime& Time, class FText* RemainingTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_ChallengesListItemFocusable_C">();
	}
	static class UUI_ChallengesListItemFocusable_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_ChallengesListItemFocusable_C>();
	}
};
static_assert(alignof(UUI_ChallengesListItemFocusable_C) == 0x000008, "Wrong alignment on UUI_ChallengesListItemFocusable_C");
static_assert(sizeof(UUI_ChallengesListItemFocusable_C) == 0x000450, "Wrong size on UUI_ChallengesListItemFocusable_C");
static_assert(offsetof(UUI_ChallengesListItemFocusable_C, UberGraphFrame) == 0x000398, "Member 'UUI_ChallengesListItemFocusable_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_ChallengesListItemFocusable_C, ChallengeCondition) == 0x0003A0, "Member 'UUI_ChallengesListItemFocusable_C::ChallengeCondition' has a wrong offset!");
static_assert(offsetof(UUI_ChallengesListItemFocusable_C, ChallengeDescription) == 0x0003A8, "Member 'UUI_ChallengesListItemFocusable_C::ChallengeDescription' has a wrong offset!");
static_assert(offsetof(UUI_ChallengesListItemFocusable_C, ChallengeIcon) == 0x0003B0, "Member 'UUI_ChallengesListItemFocusable_C::ChallengeIcon' has a wrong offset!");
static_assert(offsetof(UUI_ChallengesListItemFocusable_C, ChallengeProgressBar) == 0x0003B8, "Member 'UUI_ChallengesListItemFocusable_C::ChallengeProgressBar' has a wrong offset!");
static_assert(offsetof(UUI_ChallengesListItemFocusable_C, ChallengeProgressValue) == 0x0003C0, "Member 'UUI_ChallengesListItemFocusable_C::ChallengeProgressValue' has a wrong offset!");
static_assert(offsetof(UUI_ChallengesListItemFocusable_C, ChallengeTitle) == 0x0003C8, "Member 'UUI_ChallengesListItemFocusable_C::ChallengeTitle' has a wrong offset!");
static_assert(offsetof(UUI_ChallengesListItemFocusable_C, CompletedTick) == 0x0003D0, "Member 'UUI_ChallengesListItemFocusable_C::CompletedTick' has a wrong offset!");
static_assert(offsetof(UUI_ChallengesListItemFocusable_C, Image_88) == 0x0003D8, "Member 'UUI_ChallengesListItemFocusable_C::Image_88' has a wrong offset!");
static_assert(offsetof(UUI_ChallengesListItemFocusable_C, LoadingOverlay) == 0x0003E0, "Member 'UUI_ChallengesListItemFocusable_C::LoadingOverlay' has a wrong offset!");
static_assert(offsetof(UUI_ChallengesListItemFocusable_C, LoadingText) == 0x0003E8, "Member 'UUI_ChallengesListItemFocusable_C::LoadingText' has a wrong offset!");
static_assert(offsetof(UUI_ChallengesListItemFocusable_C, RewardsHZBox) == 0x0003F0, "Member 'UUI_ChallengesListItemFocusable_C::RewardsHZBox' has a wrong offset!");
static_assert(offsetof(UUI_ChallengesListItemFocusable_C, RewardsInfoSwitcher) == 0x0003F8, "Member 'UUI_ChallengesListItemFocusable_C::RewardsInfoSwitcher' has a wrong offset!");
static_assert(offsetof(UUI_ChallengesListItemFocusable_C, StoryChallengeBackgroundHighlight) == 0x000400, "Member 'UUI_ChallengesListItemFocusable_C::StoryChallengeBackgroundHighlight' has a wrong offset!");
static_assert(offsetof(UUI_ChallengesListItemFocusable_C, BP_ChallengeSlot) == 0x000408, "Member 'UUI_ChallengesListItemFocusable_C::BP_ChallengeSlot' has a wrong offset!");
static_assert(offsetof(UUI_ChallengesListItemFocusable_C, BP_ChallengeManager) == 0x000410, "Member 'UUI_ChallengesListItemFocusable_C::BP_ChallengeManager' has a wrong offset!");
static_assert(offsetof(UUI_ChallengesListItemFocusable_C, NextResetTimestamp) == 0x000418, "Member 'UUI_ChallengesListItemFocusable_C::NextResetTimestamp' has a wrong offset!");
static_assert(offsetof(UUI_ChallengesListItemFocusable_C, ChallengeSlotCancelled) == 0x000420, "Member 'UUI_ChallengesListItemFocusable_C::ChallengeSlotCancelled' has a wrong offset!");
static_assert(offsetof(UUI_ChallengesListItemFocusable_C, ChallengeRewardList) == 0x000430, "Member 'UUI_ChallengesListItemFocusable_C::ChallengeRewardList' has a wrong offset!");
static_assert(offsetof(UUI_ChallengesListItemFocusable_C, ChallengeCategory) == 0x000440, "Member 'UUI_ChallengesListItemFocusable_C::ChallengeCategory' has a wrong offset!");
static_assert(offsetof(UUI_ChallengesListItemFocusable_C, CurrentProgress) == 0x000444, "Member 'UUI_ChallengesListItemFocusable_C::CurrentProgress' has a wrong offset!");
static_assert(offsetof(UUI_ChallengesListItemFocusable_C, MaxProgress) == 0x000448, "Member 'UUI_ChallengesListItemFocusable_C::MaxProgress' has a wrong offset!");
static_assert(offsetof(UUI_ChallengesListItemFocusable_C, CurrentSlotState) == 0x00044C, "Member 'UUI_ChallengesListItemFocusable_C::CurrentSlotState' has a wrong offset!");

}

