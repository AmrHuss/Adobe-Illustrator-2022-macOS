#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Loadout_Button

#include "Basic.hpp"

#include "Flame_classes.hpp"
#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_Loadout_Button.UI_Loadout_Button_C
// 0x0080 (0x0338 - 0x02B8)
class UUI_Loadout_Button_C final : public UFlameWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02B8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 BackgroundImage;                                   // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFlameButton*                           Button;                                            // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Focus;                                             // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFlameTextBlock*                        Label;                                             // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 SlotIcon;                                          // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFlameTextBlock*                        Text_SelectionIndex;                               // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   ButtonText;                                        // 0x02F0(0x0018)(Edit, BlueprintVisible, ExposeOnSpawn)
	class UTexture2D*                             Icon;                                              // 0x0308(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class FText                                   DescriptionText;                                   // 0x0310(0x0018)(Edit, BlueprintVisible, ExposeOnSpawn)
	bool                                          HasSelectableIndexes;                              // 0x0328(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_329[0x3];                                      // 0x0329(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CurrentSelectionIndex;                             // 0x032C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         MaxSelectionIndex;                                 // 0x0330(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_UI_Loadout_Button(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void OnMouseLeave(const struct FPointerEvent& MouseEvent);
	void OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void UpdateSelectedIndex();
	void BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonFocusEvent__DelegateSignature(class UButton* Sender);
	void BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonFocusEvent__DelegateSignature(class UButton* Sender);
	class UWidget* CN_ChangeCurrentSelectionIndex(EUINavigation Navigation_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_Loadout_Button_C">();
	}
	static class UUI_Loadout_Button_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_Loadout_Button_C>();
	}
};
static_assert(alignof(UUI_Loadout_Button_C) == 0x000008, "Wrong alignment on UUI_Loadout_Button_C");
static_assert(sizeof(UUI_Loadout_Button_C) == 0x000338, "Wrong size on UUI_Loadout_Button_C");
static_assert(offsetof(UUI_Loadout_Button_C, UberGraphFrame) == 0x0002B8, "Member 'UUI_Loadout_Button_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_Loadout_Button_C, BackgroundImage) == 0x0002C0, "Member 'UUI_Loadout_Button_C::BackgroundImage' has a wrong offset!");
static_assert(offsetof(UUI_Loadout_Button_C, Button) == 0x0002C8, "Member 'UUI_Loadout_Button_C::Button' has a wrong offset!");
static_assert(offsetof(UUI_Loadout_Button_C, Focus) == 0x0002D0, "Member 'UUI_Loadout_Button_C::Focus' has a wrong offset!");
static_assert(offsetof(UUI_Loadout_Button_C, Label) == 0x0002D8, "Member 'UUI_Loadout_Button_C::Label' has a wrong offset!");
static_assert(offsetof(UUI_Loadout_Button_C, SlotIcon) == 0x0002E0, "Member 'UUI_Loadout_Button_C::SlotIcon' has a wrong offset!");
static_assert(offsetof(UUI_Loadout_Button_C, Text_SelectionIndex) == 0x0002E8, "Member 'UUI_Loadout_Button_C::Text_SelectionIndex' has a wrong offset!");
static_assert(offsetof(UUI_Loadout_Button_C, ButtonText) == 0x0002F0, "Member 'UUI_Loadout_Button_C::ButtonText' has a wrong offset!");
static_assert(offsetof(UUI_Loadout_Button_C, Icon) == 0x000308, "Member 'UUI_Loadout_Button_C::Icon' has a wrong offset!");
static_assert(offsetof(UUI_Loadout_Button_C, DescriptionText) == 0x000310, "Member 'UUI_Loadout_Button_C::DescriptionText' has a wrong offset!");
static_assert(offsetof(UUI_Loadout_Button_C, HasSelectableIndexes) == 0x000328, "Member 'UUI_Loadout_Button_C::HasSelectableIndexes' has a wrong offset!");
static_assert(offsetof(UUI_Loadout_Button_C, CurrentSelectionIndex) == 0x00032C, "Member 'UUI_Loadout_Button_C::CurrentSelectionIndex' has a wrong offset!");
static_assert(offsetof(UUI_Loadout_Button_C, MaxSelectionIndex) == 0x000330, "Member 'UUI_Loadout_Button_C::MaxSelectionIndex' has a wrong offset!");

}

