#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_DetailsPanel

#include "Basic.hpp"

#include "Flame_structs.hpp"
#include "Flame_classes.hpp"
#include "Engine_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_DetailsPanel.UI_DetailsPanel_C
// 0x0120 (0x03D8 - 0x02B8)
class UUI_DetailsPanel_C final : public UFlameWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02B8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class URichTextBlock*                         BuildingTime;                                      // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               BuildInProgress;                                   // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             CurrentLevel;                                      // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             DescriptionFunctionalCurrentLevel;                 // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             DescriptionFunctionalNextLevel;                    // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             DescriptionLore;                                   // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFlameTextBlock*                        FlameTextBlock_NextLevel;                          // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFlameTextBlock*                        FlameTextBlock_RequirementsHeadline;               // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Full;                                              // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 GeneratedItemIcon;                                 // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             GeneratedResourceName;                             // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         GeneratorInfoCurrentLevel;                         // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HorizontalBox_Levels;                              // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_GenerationBack;                              // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Improvement;                                 // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             ImprovementName;                                   // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             MaxLevel;                                          // 0x0340(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               NextLevelInfo;                                     // 0x0348(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             NextLevelText;                                     // 0x0350(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             ProductParams;                                     // 0x0358(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URichTextBlock*                         ProgressLabel;                                     // 0x0360(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             RequiredShelterLevel;                              // 0x0368(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGridPanel*                             Requirements;                                      // 0x0370(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                             ScrollBox_0;                                       // 0x0378(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Status;                                            // 0x0380(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_1;                                       // 0x0388(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Type;                                              // 0x0390(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_AvailableWeapons_2_C*               UI_AvailableWeapons_Next;                          // 0x0398(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_CircularProgress_C*                 UI_CircularProgress;                               // 0x03A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_InputActionWidget_C*                UI_GamepadActionWidget_MoreInfo;                   // 0x03A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VerticalBox_NextNextLevelsInfos;                   // 0x03B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_0;                                  // 0x03B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UClass*                                 ShelterSlot;                                       // 0x03C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EImprovementType                              ImprovementType;                                   // 0x03C8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3C9[0x3];                                      // 0x03C9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         NextLevel;                                         // 0x03CC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsTracked;                                         // 0x03D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_UI_DetailsPanel(int32 EntryPoint);
	void OnHintClosed(class UFlameWidget* FlameWidget);
	void BndEvt__UI_GamepadActionWidget_K2Node_ComponentBoundEvent_0_OnActionPressedEvent__DelegateSignature();
	void PreConstruct(bool IsDesignTime);
	void RightStickUpDown(float AxisValue);
	void Construct();
	void SetShelterSlotClass(class UClass* ShelterSlot_0);
	class AStash* GetStash();
	void UpdateUI();
	bool CanBuild(class UClass* InputPin);
	void ShowTimeToBuild();
	void SetImage();
	void BuildCountdownRichText(const class FText& RemainingTime, class FText* Result);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_DetailsPanel_C">();
	}
	static class UUI_DetailsPanel_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_DetailsPanel_C>();
	}
};
static_assert(alignof(UUI_DetailsPanel_C) == 0x000008, "Wrong alignment on UUI_DetailsPanel_C");
static_assert(sizeof(UUI_DetailsPanel_C) == 0x0003D8, "Wrong size on UUI_DetailsPanel_C");
static_assert(offsetof(UUI_DetailsPanel_C, UberGraphFrame) == 0x0002B8, "Member 'UUI_DetailsPanel_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_DetailsPanel_C, BuildingTime) == 0x0002C0, "Member 'UUI_DetailsPanel_C::BuildingTime' has a wrong offset!");
static_assert(offsetof(UUI_DetailsPanel_C, BuildInProgress) == 0x0002C8, "Member 'UUI_DetailsPanel_C::BuildInProgress' has a wrong offset!");
static_assert(offsetof(UUI_DetailsPanel_C, CurrentLevel) == 0x0002D0, "Member 'UUI_DetailsPanel_C::CurrentLevel' has a wrong offset!");
static_assert(offsetof(UUI_DetailsPanel_C, DescriptionFunctionalCurrentLevel) == 0x0002D8, "Member 'UUI_DetailsPanel_C::DescriptionFunctionalCurrentLevel' has a wrong offset!");
static_assert(offsetof(UUI_DetailsPanel_C, DescriptionFunctionalNextLevel) == 0x0002E0, "Member 'UUI_DetailsPanel_C::DescriptionFunctionalNextLevel' has a wrong offset!");
static_assert(offsetof(UUI_DetailsPanel_C, DescriptionLore) == 0x0002E8, "Member 'UUI_DetailsPanel_C::DescriptionLore' has a wrong offset!");
static_assert(offsetof(UUI_DetailsPanel_C, FlameTextBlock_NextLevel) == 0x0002F0, "Member 'UUI_DetailsPanel_C::FlameTextBlock_NextLevel' has a wrong offset!");
static_assert(offsetof(UUI_DetailsPanel_C, FlameTextBlock_RequirementsHeadline) == 0x0002F8, "Member 'UUI_DetailsPanel_C::FlameTextBlock_RequirementsHeadline' has a wrong offset!");
static_assert(offsetof(UUI_DetailsPanel_C, Full) == 0x000300, "Member 'UUI_DetailsPanel_C::Full' has a wrong offset!");
static_assert(offsetof(UUI_DetailsPanel_C, GeneratedItemIcon) == 0x000308, "Member 'UUI_DetailsPanel_C::GeneratedItemIcon' has a wrong offset!");
static_assert(offsetof(UUI_DetailsPanel_C, GeneratedResourceName) == 0x000310, "Member 'UUI_DetailsPanel_C::GeneratedResourceName' has a wrong offset!");
static_assert(offsetof(UUI_DetailsPanel_C, GeneratorInfoCurrentLevel) == 0x000318, "Member 'UUI_DetailsPanel_C::GeneratorInfoCurrentLevel' has a wrong offset!");
static_assert(offsetof(UUI_DetailsPanel_C, HorizontalBox_Levels) == 0x000320, "Member 'UUI_DetailsPanel_C::HorizontalBox_Levels' has a wrong offset!");
static_assert(offsetof(UUI_DetailsPanel_C, Image_GenerationBack) == 0x000328, "Member 'UUI_DetailsPanel_C::Image_GenerationBack' has a wrong offset!");
static_assert(offsetof(UUI_DetailsPanel_C, Image_Improvement) == 0x000330, "Member 'UUI_DetailsPanel_C::Image_Improvement' has a wrong offset!");
static_assert(offsetof(UUI_DetailsPanel_C, ImprovementName) == 0x000338, "Member 'UUI_DetailsPanel_C::ImprovementName' has a wrong offset!");
static_assert(offsetof(UUI_DetailsPanel_C, MaxLevel) == 0x000340, "Member 'UUI_DetailsPanel_C::MaxLevel' has a wrong offset!");
static_assert(offsetof(UUI_DetailsPanel_C, NextLevelInfo) == 0x000348, "Member 'UUI_DetailsPanel_C::NextLevelInfo' has a wrong offset!");
static_assert(offsetof(UUI_DetailsPanel_C, NextLevelText) == 0x000350, "Member 'UUI_DetailsPanel_C::NextLevelText' has a wrong offset!");
static_assert(offsetof(UUI_DetailsPanel_C, ProductParams) == 0x000358, "Member 'UUI_DetailsPanel_C::ProductParams' has a wrong offset!");
static_assert(offsetof(UUI_DetailsPanel_C, ProgressLabel) == 0x000360, "Member 'UUI_DetailsPanel_C::ProgressLabel' has a wrong offset!");
static_assert(offsetof(UUI_DetailsPanel_C, RequiredShelterLevel) == 0x000368, "Member 'UUI_DetailsPanel_C::RequiredShelterLevel' has a wrong offset!");
static_assert(offsetof(UUI_DetailsPanel_C, Requirements) == 0x000370, "Member 'UUI_DetailsPanel_C::Requirements' has a wrong offset!");
static_assert(offsetof(UUI_DetailsPanel_C, ScrollBox_0) == 0x000378, "Member 'UUI_DetailsPanel_C::ScrollBox_0' has a wrong offset!");
static_assert(offsetof(UUI_DetailsPanel_C, Status) == 0x000380, "Member 'UUI_DetailsPanel_C::Status' has a wrong offset!");
static_assert(offsetof(UUI_DetailsPanel_C, TextBlock_1) == 0x000388, "Member 'UUI_DetailsPanel_C::TextBlock_1' has a wrong offset!");
static_assert(offsetof(UUI_DetailsPanel_C, Type) == 0x000390, "Member 'UUI_DetailsPanel_C::Type' has a wrong offset!");
static_assert(offsetof(UUI_DetailsPanel_C, UI_AvailableWeapons_Next) == 0x000398, "Member 'UUI_DetailsPanel_C::UI_AvailableWeapons_Next' has a wrong offset!");
static_assert(offsetof(UUI_DetailsPanel_C, UI_CircularProgress) == 0x0003A0, "Member 'UUI_DetailsPanel_C::UI_CircularProgress' has a wrong offset!");
static_assert(offsetof(UUI_DetailsPanel_C, UI_GamepadActionWidget_MoreInfo) == 0x0003A8, "Member 'UUI_DetailsPanel_C::UI_GamepadActionWidget_MoreInfo' has a wrong offset!");
static_assert(offsetof(UUI_DetailsPanel_C, VerticalBox_NextNextLevelsInfos) == 0x0003B0, "Member 'UUI_DetailsPanel_C::VerticalBox_NextNextLevelsInfos' has a wrong offset!");
static_assert(offsetof(UUI_DetailsPanel_C, WidgetSwitcher_0) == 0x0003B8, "Member 'UUI_DetailsPanel_C::WidgetSwitcher_0' has a wrong offset!");
static_assert(offsetof(UUI_DetailsPanel_C, ShelterSlot) == 0x0003C0, "Member 'UUI_DetailsPanel_C::ShelterSlot' has a wrong offset!");
static_assert(offsetof(UUI_DetailsPanel_C, ImprovementType) == 0x0003C8, "Member 'UUI_DetailsPanel_C::ImprovementType' has a wrong offset!");
static_assert(offsetof(UUI_DetailsPanel_C, NextLevel) == 0x0003CC, "Member 'UUI_DetailsPanel_C::NextLevel' has a wrong offset!");
static_assert(offsetof(UUI_DetailsPanel_C, IsTracked) == 0x0003D0, "Member 'UUI_DetailsPanel_C::IsTracked' has a wrong offset!");

}

