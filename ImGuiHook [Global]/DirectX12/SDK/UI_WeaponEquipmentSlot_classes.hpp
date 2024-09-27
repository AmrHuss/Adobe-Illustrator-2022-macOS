#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_WeaponEquipmentSlot

#include "Basic.hpp"

#include "Flame_structs.hpp"
#include "Flame_classes.hpp"
#include "Engine_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_WeaponEquipmentSlot.UI_WeaponEquipmentSlot_C
// 0x0068 (0x03D8 - 0x0370)
class UUI_WeaponEquipmentSlot_C final : public UWeaponEquipmentSlot
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0370(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UFlameTextBlock*                        AmmoName;                                          // 0x0378(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HorizontalBox_AmmoCount;                           // 0x0380(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HorizontalBox_AmmoName;                            // 0x0388(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFlameButton*                           Hover_Button;                                      // 0x0390(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFlameButton*                           Hover_Button_Skin;                                 // 0x0398(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Warning;                                     // 0x03A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             MagazineAmmo;                                      // 0x03A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_VariantSlot_C*                      SkinVisual;                                        // 0x03B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Slash;                                             // 0x03B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TotalAmmo;                                         // 0x03C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_ItemSlotVisual_C*                   UI_ItemSlotVisual_Ammo;                            // 0x03C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          IsInStash;                                         // 0x03D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsInLobby;                                         // 0x03D1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_UI_WeaponEquipmentSlot(int32 EntryPoint);
	void BndEvt__UI_WeaponEquipmentSlot_Hover_Button_1_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature(class UButton* Sender);
	void BndEvt__UI_WeaponEquipmentSlot_Hover_Button_1_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature(class UButton* Sender);
	void BndEvt__UI_WeaponEquipmentSlot_Hover_Button_1_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature(class UButton* Sender);
	void BndEvt__UI_WeaponEquipmentSlot_Hover_Button_K2Node_ComponentBoundEvent_7_OnButtonReleasedEvent__DelegateSignature(class UButton* Sender);
	void BndEvt__UI_WeaponEquipmentSlot_Hover_Button_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature(class UButton* Sender);
	void BndEvt__UI_WeaponEquipmentSlot_InteractButton_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature(class UButton* Sender);
	void BndEvt__UI_WeaponEquipmentSlot_InteractButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature(class UButton* Sender);
	void DisableLoadoutHovers();
	void BndEvt__UI_WeaponEquipmentSlot_Hover_Button_K2Node_ComponentBoundEvent_6_OnButtonFocusEvent__DelegateSignature(class UButton* Sender);
	void BndEvt__UI_WeaponEquipmentSlot_Hover_Button_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature(class UButton* Sender);
	void BndEvt__UI_WeaponEquipmentSlot_Hover_Button_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature(class UButton* Sender);
	void BndEvt__UI_WeaponEquipmentSlot_Hover_Button_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(class UButton* Sender);
	void OnMouseLeave(const struct FPointerEvent& MouseEvent);
	void OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void SetFlags();
	void OnItemChanged();
	void BndEvt__InteractButton_K2Node_ComponentBoundEvent_28_OnButtonClickedEvent__DelegateSignature(class UButton* Sender);
	void BndEvt__InteractButton_K2Node_ComponentBoundEvent_203_OnButtonFocusEvent__DelegateSignature(class UButton* Sender);
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void UpdateAmmoVisibility();
	void UpdateAmmoCount();
	void Update();
	void UpdateSkinVisual();
	struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_WeaponEquipmentSlot_C">();
	}
	static class UUI_WeaponEquipmentSlot_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_WeaponEquipmentSlot_C>();
	}
};
static_assert(alignof(UUI_WeaponEquipmentSlot_C) == 0x000008, "Wrong alignment on UUI_WeaponEquipmentSlot_C");
static_assert(sizeof(UUI_WeaponEquipmentSlot_C) == 0x0003D8, "Wrong size on UUI_WeaponEquipmentSlot_C");
static_assert(offsetof(UUI_WeaponEquipmentSlot_C, UberGraphFrame) == 0x000370, "Member 'UUI_WeaponEquipmentSlot_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_WeaponEquipmentSlot_C, AmmoName) == 0x000378, "Member 'UUI_WeaponEquipmentSlot_C::AmmoName' has a wrong offset!");
static_assert(offsetof(UUI_WeaponEquipmentSlot_C, HorizontalBox_AmmoCount) == 0x000380, "Member 'UUI_WeaponEquipmentSlot_C::HorizontalBox_AmmoCount' has a wrong offset!");
static_assert(offsetof(UUI_WeaponEquipmentSlot_C, HorizontalBox_AmmoName) == 0x000388, "Member 'UUI_WeaponEquipmentSlot_C::HorizontalBox_AmmoName' has a wrong offset!");
static_assert(offsetof(UUI_WeaponEquipmentSlot_C, Hover_Button) == 0x000390, "Member 'UUI_WeaponEquipmentSlot_C::Hover_Button' has a wrong offset!");
static_assert(offsetof(UUI_WeaponEquipmentSlot_C, Hover_Button_Skin) == 0x000398, "Member 'UUI_WeaponEquipmentSlot_C::Hover_Button_Skin' has a wrong offset!");
static_assert(offsetof(UUI_WeaponEquipmentSlot_C, Image_Warning) == 0x0003A0, "Member 'UUI_WeaponEquipmentSlot_C::Image_Warning' has a wrong offset!");
static_assert(offsetof(UUI_WeaponEquipmentSlot_C, MagazineAmmo) == 0x0003A8, "Member 'UUI_WeaponEquipmentSlot_C::MagazineAmmo' has a wrong offset!");
static_assert(offsetof(UUI_WeaponEquipmentSlot_C, SkinVisual) == 0x0003B0, "Member 'UUI_WeaponEquipmentSlot_C::SkinVisual' has a wrong offset!");
static_assert(offsetof(UUI_WeaponEquipmentSlot_C, Slash) == 0x0003B8, "Member 'UUI_WeaponEquipmentSlot_C::Slash' has a wrong offset!");
static_assert(offsetof(UUI_WeaponEquipmentSlot_C, TotalAmmo) == 0x0003C0, "Member 'UUI_WeaponEquipmentSlot_C::TotalAmmo' has a wrong offset!");
static_assert(offsetof(UUI_WeaponEquipmentSlot_C, UI_ItemSlotVisual_Ammo) == 0x0003C8, "Member 'UUI_WeaponEquipmentSlot_C::UI_ItemSlotVisual_Ammo' has a wrong offset!");
static_assert(offsetof(UUI_WeaponEquipmentSlot_C, IsInStash) == 0x0003D0, "Member 'UUI_WeaponEquipmentSlot_C::IsInStash' has a wrong offset!");
static_assert(offsetof(UUI_WeaponEquipmentSlot_C, IsInLobby) == 0x0003D1, "Member 'UUI_WeaponEquipmentSlot_C::IsInLobby' has a wrong offset!");

}

