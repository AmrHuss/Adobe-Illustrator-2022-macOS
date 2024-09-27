#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_WeaponWideListSlot

#include "Basic.hpp"

#include "Flame_structs.hpp"
#include "Flame_classes.hpp"
#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_WeaponWideListSlot.UI_WeaponWideListSlot_C
// 0x0078 (0x03E0 - 0x0368)
class UUI_WeaponWideListSlot_C final : public UEquipmentSlot
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0368(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 ArrowImage;                                        // 0x0370(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Caliber;                                           // 0x0378(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 PlanIndicator;                                     // 0x0380(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 RowBackground;                                     // 0x0388(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_ItemSlotVisual_C*                   UI_ItemSlotVisual_Caliber;                         // 0x0390(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_OrangeSquirrels_Dot_C*              UI_OrangeSquirrels_Dot;                            // 0x0398(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             WeaponBPName;                                      // 0x03A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             WeaponName;                                        // 0x03A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         TimeOfCrafting;                                    // 0x03B0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3B4[0x4];                                      // 0x03B4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            RowFocusedHoverColor;                              // 0x03B8(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_UI_WeaponWideListSlot(int32 EntryPoint);
	void OnInputChanged(int32 PlayerIndex, EInputMode InputMode);
	void Construct();
	void OnMouseLeave(const struct FPointerEvent& MouseEvent);
	void OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void FocusCheckAgainFrameLater();
	void UseCustomNavigationRules(int32 RuleIndex);
	void OnTryFocusSlot();
	void OnItemChanged();
	void BndEvt__InteractButton_K2Node_ComponentBoundEvent_14_OnButtonClickedEvent__DelegateSignature(class UButton* Sender);
	void BndEvt__InteractButton_K2Node_ComponentBoundEvent_82_OnButtonFocusEvent__DelegateSignature(class UButton* Sender);
	void BndEvt__FlameButton_0_K2Node_ComponentBoundEvent_37_OnButtonFocusEvent__DelegateSignature(class UButton* Sender);
	void UpdateItemCount();
	void SetRowTint(const struct FSlateColor& Tint);
	void UpdateWeaponName();
	void UpdateCaliber();
	void UpdateWeaponBPName();
	void UpdateItemOpacity(int32 ItemCountIn);
	void UpdateIndicators();
	bool HasAllPartsOBS(class UClass* WeaponPlanIn, class AStash* Stash);
	void SetIndicatorColorOBS(bool Condition, class UClass* WeaponPlanIn, class AStash* Stash);
	class UWidget* CN_CategoryExpandibles(EUINavigation Navigation_0);
	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);
	void Update_Hover_State();
	void GetShelterStash(class UUI_ShelterStash_C** NewParam);
	void UpdateArrowVisibility(bool IsFocused);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_WeaponWideListSlot_C">();
	}
	static class UUI_WeaponWideListSlot_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_WeaponWideListSlot_C>();
	}
};
static_assert(alignof(UUI_WeaponWideListSlot_C) == 0x000008, "Wrong alignment on UUI_WeaponWideListSlot_C");
static_assert(sizeof(UUI_WeaponWideListSlot_C) == 0x0003E0, "Wrong size on UUI_WeaponWideListSlot_C");
static_assert(offsetof(UUI_WeaponWideListSlot_C, UberGraphFrame) == 0x000368, "Member 'UUI_WeaponWideListSlot_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_WeaponWideListSlot_C, ArrowImage) == 0x000370, "Member 'UUI_WeaponWideListSlot_C::ArrowImage' has a wrong offset!");
static_assert(offsetof(UUI_WeaponWideListSlot_C, Caliber) == 0x000378, "Member 'UUI_WeaponWideListSlot_C::Caliber' has a wrong offset!");
static_assert(offsetof(UUI_WeaponWideListSlot_C, PlanIndicator) == 0x000380, "Member 'UUI_WeaponWideListSlot_C::PlanIndicator' has a wrong offset!");
static_assert(offsetof(UUI_WeaponWideListSlot_C, RowBackground) == 0x000388, "Member 'UUI_WeaponWideListSlot_C::RowBackground' has a wrong offset!");
static_assert(offsetof(UUI_WeaponWideListSlot_C, UI_ItemSlotVisual_Caliber) == 0x000390, "Member 'UUI_WeaponWideListSlot_C::UI_ItemSlotVisual_Caliber' has a wrong offset!");
static_assert(offsetof(UUI_WeaponWideListSlot_C, UI_OrangeSquirrels_Dot) == 0x000398, "Member 'UUI_WeaponWideListSlot_C::UI_OrangeSquirrels_Dot' has a wrong offset!");
static_assert(offsetof(UUI_WeaponWideListSlot_C, WeaponBPName) == 0x0003A0, "Member 'UUI_WeaponWideListSlot_C::WeaponBPName' has a wrong offset!");
static_assert(offsetof(UUI_WeaponWideListSlot_C, WeaponName) == 0x0003A8, "Member 'UUI_WeaponWideListSlot_C::WeaponName' has a wrong offset!");
static_assert(offsetof(UUI_WeaponWideListSlot_C, TimeOfCrafting) == 0x0003B0, "Member 'UUI_WeaponWideListSlot_C::TimeOfCrafting' has a wrong offset!");
static_assert(offsetof(UUI_WeaponWideListSlot_C, RowFocusedHoverColor) == 0x0003B8, "Member 'UUI_WeaponWideListSlot_C::RowFocusedHoverColor' has a wrong offset!");

}

