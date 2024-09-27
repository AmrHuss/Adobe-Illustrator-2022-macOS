#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Achievements

#include "Basic.hpp"

#include "Flame_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_Achievements.UI_Achievements_C
// 0x0080 (0x0358 - 0x02D8)
class UUI_Achievements_C final : public UMenuWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02D8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UFlameTextBlock*                        AchievementDescription;                            // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                             AchievementsScrollBox;                             // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFlameTextBlock*                        AchievementTitle;                                  // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_InputActionWidget_C*                ActionMoreInfo;                                    // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         ControlTips;                                       // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFlameTextBlock*                        DoneAchievementsIndicator;                         // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ErodedLineBottom;                                  // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ErodedLineTop;                                     // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HorizontalBoxCompleted;                            // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                           ProgressBar;                                       // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFlameTextBlock*                        ProgressNumIndicator;                              // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWrapBox*                               TilesWrapBox;                                      // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_InputActionWidget_C*                UI_GamepadActionClose;                             // 0x0340(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_AchievementsTile_C*                 LastAchievementTileHover;                          // 0x0348(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUI_AchievementsTile_C*                 LastAchievementTileFocus;                          // 0x0350(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_UI_Achievements(int32 EntryPoint);
	void OnResetToDefaultState();
	void BndEvt__UI_GamepadActionClose_K2Node_ComponentBoundEvent_2_OnClickedEvent__DelegateSignature();
	void BndEvt__ActionMoreInfo_K2Node_ComponentBoundEvent_1_OnActionReleasedEvent__DelegateSignature();
	void Construct();
	void OnChildFocusReceived(class UWidget* InWidget);
	void PreConstruct(bool IsDesignTime);
	void FillTiles();
	void InitFocus();
	void UpdateDisplayedNumProgress(float ProgressPct);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_Achievements_C">();
	}
	static class UUI_Achievements_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_Achievements_C>();
	}
};
static_assert(alignof(UUI_Achievements_C) == 0x000008, "Wrong alignment on UUI_Achievements_C");
static_assert(sizeof(UUI_Achievements_C) == 0x000358, "Wrong size on UUI_Achievements_C");
static_assert(offsetof(UUI_Achievements_C, UberGraphFrame) == 0x0002D8, "Member 'UUI_Achievements_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_Achievements_C, AchievementDescription) == 0x0002E0, "Member 'UUI_Achievements_C::AchievementDescription' has a wrong offset!");
static_assert(offsetof(UUI_Achievements_C, AchievementsScrollBox) == 0x0002E8, "Member 'UUI_Achievements_C::AchievementsScrollBox' has a wrong offset!");
static_assert(offsetof(UUI_Achievements_C, AchievementTitle) == 0x0002F0, "Member 'UUI_Achievements_C::AchievementTitle' has a wrong offset!");
static_assert(offsetof(UUI_Achievements_C, ActionMoreInfo) == 0x0002F8, "Member 'UUI_Achievements_C::ActionMoreInfo' has a wrong offset!");
static_assert(offsetof(UUI_Achievements_C, ControlTips) == 0x000300, "Member 'UUI_Achievements_C::ControlTips' has a wrong offset!");
static_assert(offsetof(UUI_Achievements_C, DoneAchievementsIndicator) == 0x000308, "Member 'UUI_Achievements_C::DoneAchievementsIndicator' has a wrong offset!");
static_assert(offsetof(UUI_Achievements_C, ErodedLineBottom) == 0x000310, "Member 'UUI_Achievements_C::ErodedLineBottom' has a wrong offset!");
static_assert(offsetof(UUI_Achievements_C, ErodedLineTop) == 0x000318, "Member 'UUI_Achievements_C::ErodedLineTop' has a wrong offset!");
static_assert(offsetof(UUI_Achievements_C, HorizontalBoxCompleted) == 0x000320, "Member 'UUI_Achievements_C::HorizontalBoxCompleted' has a wrong offset!");
static_assert(offsetof(UUI_Achievements_C, ProgressBar) == 0x000328, "Member 'UUI_Achievements_C::ProgressBar' has a wrong offset!");
static_assert(offsetof(UUI_Achievements_C, ProgressNumIndicator) == 0x000330, "Member 'UUI_Achievements_C::ProgressNumIndicator' has a wrong offset!");
static_assert(offsetof(UUI_Achievements_C, TilesWrapBox) == 0x000338, "Member 'UUI_Achievements_C::TilesWrapBox' has a wrong offset!");
static_assert(offsetof(UUI_Achievements_C, UI_GamepadActionClose) == 0x000340, "Member 'UUI_Achievements_C::UI_GamepadActionClose' has a wrong offset!");
static_assert(offsetof(UUI_Achievements_C, LastAchievementTileHover) == 0x000348, "Member 'UUI_Achievements_C::LastAchievementTileHover' has a wrong offset!");
static_assert(offsetof(UUI_Achievements_C, LastAchievementTileFocus) == 0x000350, "Member 'UUI_Achievements_C::LastAchievementTileFocus' has a wrong offset!");

}

