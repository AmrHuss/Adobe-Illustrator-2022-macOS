#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_AmmoOfferMessageBox

#include "Basic.hpp"

#include "Flame_classes.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_AmmoOfferMessageBox.UI_AmmoOfferMessageBox_C
// 0x00D0 (0x03E0 - 0x0310)
class UUI_AmmoOfferMessageBox_C final : public UEquipWeaponModalWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0310(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UUI_HighLightedTextWidget_C*            AmmoToCraft;                                       // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Content_NameItem;                                  // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Craft_Button_BG;                                   // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Craft_Icon_Material;                               // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFlameTextBlock*                        Craft_Mat_Ammount_Text;                            // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Craft_Overlay;                                     // 0x0340(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         CraftableUI;                                       // 0x0348(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_InputActionWidget_C*                Gamepad_Left_Right;                                // 0x0350(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_InputChoiceInt_C*                   Gamepad_Select;                                    // 0x0358(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 IconBackground;                                    // 0x0360(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 IconItem;                                          // 0x0368(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         Not_CraftableUI;                                   // 0x0370(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFlameTextBlock*                        Owned_Ammount_Text;                                // 0x0378(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Owned_Button_BG;                                   // 0x0380(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_HighLightedTextWidget_C*            OwnedAmmoToEquip;                                  // 0x0388(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFlameTextBlock*                        OwnedMats;                                         // 0x0390(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_FlameSafezone_C*                    UI_FlameSafezone;                                  // 0x0398(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFlameTextBlock*                        Weapon_Capacity_Text;                              // 0x03A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          MsgBoxResult;                                      // 0x03A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3A9[0x7];                                      // 0x03A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 AmmoClass;                                         // 0x03B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UClass*                                 Weapon_Class;                                      // 0x03B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Crafting_UI_is_out;                                // 0x03C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3C1[0x3];                                      // 0x03C1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Craft_animation_duration;                          // 0x03C4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Can_craft_this_ammo;                               // 0x03C8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3C9[0x3];                                      // 0x03C9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Padding_value;                                     // 0x03CC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Not_enough_mats_color;                             // 0x03D0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_UI_AmmoOfferMessageBox(int32 EntryPoint);
	void CraftAmmoDecrement(class UButton* Sender);
	void CraftAmmoIncrement(class UButton* Sender);
	void Destruct();
	void OnClickPrevious(class UButton* Sender);
	void OnClickNext(class UButton* Sender);
	void Animation_Toggle_craft_UI();
	void BndEvt__AmmoToCraft_K2Node_ComponentBoundEvent_1_OnWidgetFocused__DelegateSignature();
	void BndEvt__OwnedAmmoToEquip_K2Node_ComponentBoundEvent_0_OnWidgetFocused__DelegateSignature();
	void Construct();
	void OnTweenStart_604CF6B540D129364BEF01A66C27A010(class UTweenFloat* Tween);
	void OnTweenUpdate_604CF6B540D129364BEF01A66C27A010(class UTweenFloat* Tween);
	void OnTweenEnd_604CF6B540D129364BEF01A66C27A010(class UTweenFloat* Tween);
	class UWidget* Sub_0(EUINavigation Navigation_0);
	class UWidget* Sub(EUINavigation Navigation_0);
	void Owned_button_change_text();
	void Craft_button_change_text();
	class UWidget* Navigate_up(EUINavigation Navigation_0);
	class UWidget* Navigate_down(EUINavigation Navigation_0);
	void Change_the_color_of_materials_(bool Has_enough_materials);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_AmmoOfferMessageBox_C">();
	}
	static class UUI_AmmoOfferMessageBox_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_AmmoOfferMessageBox_C>();
	}
};
static_assert(alignof(UUI_AmmoOfferMessageBox_C) == 0x000008, "Wrong alignment on UUI_AmmoOfferMessageBox_C");
static_assert(sizeof(UUI_AmmoOfferMessageBox_C) == 0x0003E0, "Wrong size on UUI_AmmoOfferMessageBox_C");
static_assert(offsetof(UUI_AmmoOfferMessageBox_C, UberGraphFrame) == 0x000310, "Member 'UUI_AmmoOfferMessageBox_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_AmmoOfferMessageBox_C, AmmoToCraft) == 0x000318, "Member 'UUI_AmmoOfferMessageBox_C::AmmoToCraft' has a wrong offset!");
static_assert(offsetof(UUI_AmmoOfferMessageBox_C, Content_NameItem) == 0x000320, "Member 'UUI_AmmoOfferMessageBox_C::Content_NameItem' has a wrong offset!");
static_assert(offsetof(UUI_AmmoOfferMessageBox_C, Craft_Button_BG) == 0x000328, "Member 'UUI_AmmoOfferMessageBox_C::Craft_Button_BG' has a wrong offset!");
static_assert(offsetof(UUI_AmmoOfferMessageBox_C, Craft_Icon_Material) == 0x000330, "Member 'UUI_AmmoOfferMessageBox_C::Craft_Icon_Material' has a wrong offset!");
static_assert(offsetof(UUI_AmmoOfferMessageBox_C, Craft_Mat_Ammount_Text) == 0x000338, "Member 'UUI_AmmoOfferMessageBox_C::Craft_Mat_Ammount_Text' has a wrong offset!");
static_assert(offsetof(UUI_AmmoOfferMessageBox_C, Craft_Overlay) == 0x000340, "Member 'UUI_AmmoOfferMessageBox_C::Craft_Overlay' has a wrong offset!");
static_assert(offsetof(UUI_AmmoOfferMessageBox_C, CraftableUI) == 0x000348, "Member 'UUI_AmmoOfferMessageBox_C::CraftableUI' has a wrong offset!");
static_assert(offsetof(UUI_AmmoOfferMessageBox_C, Gamepad_Left_Right) == 0x000350, "Member 'UUI_AmmoOfferMessageBox_C::Gamepad_Left_Right' has a wrong offset!");
static_assert(offsetof(UUI_AmmoOfferMessageBox_C, Gamepad_Select) == 0x000358, "Member 'UUI_AmmoOfferMessageBox_C::Gamepad_Select' has a wrong offset!");
static_assert(offsetof(UUI_AmmoOfferMessageBox_C, IconBackground) == 0x000360, "Member 'UUI_AmmoOfferMessageBox_C::IconBackground' has a wrong offset!");
static_assert(offsetof(UUI_AmmoOfferMessageBox_C, IconItem) == 0x000368, "Member 'UUI_AmmoOfferMessageBox_C::IconItem' has a wrong offset!");
static_assert(offsetof(UUI_AmmoOfferMessageBox_C, Not_CraftableUI) == 0x000370, "Member 'UUI_AmmoOfferMessageBox_C::Not_CraftableUI' has a wrong offset!");
static_assert(offsetof(UUI_AmmoOfferMessageBox_C, Owned_Ammount_Text) == 0x000378, "Member 'UUI_AmmoOfferMessageBox_C::Owned_Ammount_Text' has a wrong offset!");
static_assert(offsetof(UUI_AmmoOfferMessageBox_C, Owned_Button_BG) == 0x000380, "Member 'UUI_AmmoOfferMessageBox_C::Owned_Button_BG' has a wrong offset!");
static_assert(offsetof(UUI_AmmoOfferMessageBox_C, OwnedAmmoToEquip) == 0x000388, "Member 'UUI_AmmoOfferMessageBox_C::OwnedAmmoToEquip' has a wrong offset!");
static_assert(offsetof(UUI_AmmoOfferMessageBox_C, OwnedMats) == 0x000390, "Member 'UUI_AmmoOfferMessageBox_C::OwnedMats' has a wrong offset!");
static_assert(offsetof(UUI_AmmoOfferMessageBox_C, UI_FlameSafezone) == 0x000398, "Member 'UUI_AmmoOfferMessageBox_C::UI_FlameSafezone' has a wrong offset!");
static_assert(offsetof(UUI_AmmoOfferMessageBox_C, Weapon_Capacity_Text) == 0x0003A0, "Member 'UUI_AmmoOfferMessageBox_C::Weapon_Capacity_Text' has a wrong offset!");
static_assert(offsetof(UUI_AmmoOfferMessageBox_C, MsgBoxResult) == 0x0003A8, "Member 'UUI_AmmoOfferMessageBox_C::MsgBoxResult' has a wrong offset!");
static_assert(offsetof(UUI_AmmoOfferMessageBox_C, AmmoClass) == 0x0003B0, "Member 'UUI_AmmoOfferMessageBox_C::AmmoClass' has a wrong offset!");
static_assert(offsetof(UUI_AmmoOfferMessageBox_C, Weapon_Class) == 0x0003B8, "Member 'UUI_AmmoOfferMessageBox_C::Weapon_Class' has a wrong offset!");
static_assert(offsetof(UUI_AmmoOfferMessageBox_C, Crafting_UI_is_out) == 0x0003C0, "Member 'UUI_AmmoOfferMessageBox_C::Crafting_UI_is_out' has a wrong offset!");
static_assert(offsetof(UUI_AmmoOfferMessageBox_C, Craft_animation_duration) == 0x0003C4, "Member 'UUI_AmmoOfferMessageBox_C::Craft_animation_duration' has a wrong offset!");
static_assert(offsetof(UUI_AmmoOfferMessageBox_C, Can_craft_this_ammo) == 0x0003C8, "Member 'UUI_AmmoOfferMessageBox_C::Can_craft_this_ammo' has a wrong offset!");
static_assert(offsetof(UUI_AmmoOfferMessageBox_C, Padding_value) == 0x0003CC, "Member 'UUI_AmmoOfferMessageBox_C::Padding_value' has a wrong offset!");
static_assert(offsetof(UUI_AmmoOfferMessageBox_C, Not_enough_mats_color) == 0x0003D0, "Member 'UUI_AmmoOfferMessageBox_C::Not_enough_mats_color' has a wrong offset!");

}

