#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_BattlePassNotification_GatheringXP

#include "Basic.hpp"

#include "Flame_classes.hpp"
#include "Engine_structs.hpp"
#include "E_BattlePassSeasonType_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_BattlePassNotification_GatheringXP.UI_BattlePassNotification_GatheringXP_C
// 0x00B8 (0x0388 - 0x02D0)
class UUI_BattlePassNotification_GatheringXP_C final : public UNotificationBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02D0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       FadeOut;                                           // 0x02D8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       FadeIn;                                            // 0x02E0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Image_216;                                         // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         LevelInfo;                                         // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 NotificationIcon;                                  // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        ProgressBarSwitcher;                               // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFlameTextBlock*                        TextLevelFrom;                                     // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFlameTextBlock*                        TextLevelTo;                                       // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFlameTextBlock*                        TextTitle;                                         // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFlameTextBlock*                        TextXP;                                            // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFlameTextBlock*                        TextXPBooster;                                     // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_BattlePassProgressBar_C*            UI_BattlePassProgressBar;                          // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          IsPremium;                                         // 0x0338(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_339[0x3];                                      // 0x0339(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         FromLevel;                                         // 0x033C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          IsXPBooster;                                       // 0x0340(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_341[0x3];                                      // 0x0341(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         BaseXP;                                            // 0x0344(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                         BonusXP;                                           // 0x0348(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                         XPBooster;                                         // 0x034C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class FText                                   Title;                                             // 0x0350(0x0018)(Edit, BlueprintVisible, ExposeOnSpawn)
	int32                                         XPWithinLevel;                                     // 0x0368(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         XPForNextLevel;                                    // 0x036C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         XPWithoutNewAwards;                                // 0x0370(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsLegacySeason;                                    // 0x0374(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_375[0x3];                                      // 0x0375(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_BattlePassSystem_C*                 BattlePassSystem;                                  // 0x0378(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   SeasonNameID;                                      // 0x0380(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_UI_BattlePassNotification_GatheringXP(int32 EntryPoint);
	void Construct();
	void OnShow();
	void OnHide();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_BattlePassNotification_GatheringXP_C">();
	}
	static class UUI_BattlePassNotification_GatheringXP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_BattlePassNotification_GatheringXP_C>();
	}
};
static_assert(alignof(UUI_BattlePassNotification_GatheringXP_C) == 0x000008, "Wrong alignment on UUI_BattlePassNotification_GatheringXP_C");
static_assert(sizeof(UUI_BattlePassNotification_GatheringXP_C) == 0x000388, "Wrong size on UUI_BattlePassNotification_GatheringXP_C");
static_assert(offsetof(UUI_BattlePassNotification_GatheringXP_C, UberGraphFrame) == 0x0002D0, "Member 'UUI_BattlePassNotification_GatheringXP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_BattlePassNotification_GatheringXP_C, FadeOut) == 0x0002D8, "Member 'UUI_BattlePassNotification_GatheringXP_C::FadeOut' has a wrong offset!");
static_assert(offsetof(UUI_BattlePassNotification_GatheringXP_C, FadeIn) == 0x0002E0, "Member 'UUI_BattlePassNotification_GatheringXP_C::FadeIn' has a wrong offset!");
static_assert(offsetof(UUI_BattlePassNotification_GatheringXP_C, Image_216) == 0x0002E8, "Member 'UUI_BattlePassNotification_GatheringXP_C::Image_216' has a wrong offset!");
static_assert(offsetof(UUI_BattlePassNotification_GatheringXP_C, LevelInfo) == 0x0002F0, "Member 'UUI_BattlePassNotification_GatheringXP_C::LevelInfo' has a wrong offset!");
static_assert(offsetof(UUI_BattlePassNotification_GatheringXP_C, NotificationIcon) == 0x0002F8, "Member 'UUI_BattlePassNotification_GatheringXP_C::NotificationIcon' has a wrong offset!");
static_assert(offsetof(UUI_BattlePassNotification_GatheringXP_C, ProgressBarSwitcher) == 0x000300, "Member 'UUI_BattlePassNotification_GatheringXP_C::ProgressBarSwitcher' has a wrong offset!");
static_assert(offsetof(UUI_BattlePassNotification_GatheringXP_C, TextLevelFrom) == 0x000308, "Member 'UUI_BattlePassNotification_GatheringXP_C::TextLevelFrom' has a wrong offset!");
static_assert(offsetof(UUI_BattlePassNotification_GatheringXP_C, TextLevelTo) == 0x000310, "Member 'UUI_BattlePassNotification_GatheringXP_C::TextLevelTo' has a wrong offset!");
static_assert(offsetof(UUI_BattlePassNotification_GatheringXP_C, TextTitle) == 0x000318, "Member 'UUI_BattlePassNotification_GatheringXP_C::TextTitle' has a wrong offset!");
static_assert(offsetof(UUI_BattlePassNotification_GatheringXP_C, TextXP) == 0x000320, "Member 'UUI_BattlePassNotification_GatheringXP_C::TextXP' has a wrong offset!");
static_assert(offsetof(UUI_BattlePassNotification_GatheringXP_C, TextXPBooster) == 0x000328, "Member 'UUI_BattlePassNotification_GatheringXP_C::TextXPBooster' has a wrong offset!");
static_assert(offsetof(UUI_BattlePassNotification_GatheringXP_C, UI_BattlePassProgressBar) == 0x000330, "Member 'UUI_BattlePassNotification_GatheringXP_C::UI_BattlePassProgressBar' has a wrong offset!");
static_assert(offsetof(UUI_BattlePassNotification_GatheringXP_C, IsPremium) == 0x000338, "Member 'UUI_BattlePassNotification_GatheringXP_C::IsPremium' has a wrong offset!");
static_assert(offsetof(UUI_BattlePassNotification_GatheringXP_C, FromLevel) == 0x00033C, "Member 'UUI_BattlePassNotification_GatheringXP_C::FromLevel' has a wrong offset!");
static_assert(offsetof(UUI_BattlePassNotification_GatheringXP_C, IsXPBooster) == 0x000340, "Member 'UUI_BattlePassNotification_GatheringXP_C::IsXPBooster' has a wrong offset!");
static_assert(offsetof(UUI_BattlePassNotification_GatheringXP_C, BaseXP) == 0x000344, "Member 'UUI_BattlePassNotification_GatheringXP_C::BaseXP' has a wrong offset!");
static_assert(offsetof(UUI_BattlePassNotification_GatheringXP_C, BonusXP) == 0x000348, "Member 'UUI_BattlePassNotification_GatheringXP_C::BonusXP' has a wrong offset!");
static_assert(offsetof(UUI_BattlePassNotification_GatheringXP_C, XPBooster) == 0x00034C, "Member 'UUI_BattlePassNotification_GatheringXP_C::XPBooster' has a wrong offset!");
static_assert(offsetof(UUI_BattlePassNotification_GatheringXP_C, Title) == 0x000350, "Member 'UUI_BattlePassNotification_GatheringXP_C::Title' has a wrong offset!");
static_assert(offsetof(UUI_BattlePassNotification_GatheringXP_C, XPWithinLevel) == 0x000368, "Member 'UUI_BattlePassNotification_GatheringXP_C::XPWithinLevel' has a wrong offset!");
static_assert(offsetof(UUI_BattlePassNotification_GatheringXP_C, XPForNextLevel) == 0x00036C, "Member 'UUI_BattlePassNotification_GatheringXP_C::XPForNextLevel' has a wrong offset!");
static_assert(offsetof(UUI_BattlePassNotification_GatheringXP_C, XPWithoutNewAwards) == 0x000370, "Member 'UUI_BattlePassNotification_GatheringXP_C::XPWithoutNewAwards' has a wrong offset!");
static_assert(offsetof(UUI_BattlePassNotification_GatheringXP_C, IsLegacySeason) == 0x000374, "Member 'UUI_BattlePassNotification_GatheringXP_C::IsLegacySeason' has a wrong offset!");
static_assert(offsetof(UUI_BattlePassNotification_GatheringXP_C, BattlePassSystem) == 0x000378, "Member 'UUI_BattlePassNotification_GatheringXP_C::BattlePassSystem' has a wrong offset!");
static_assert(offsetof(UUI_BattlePassNotification_GatheringXP_C, SeasonNameID) == 0x000380, "Member 'UUI_BattlePassNotification_GatheringXP_C::SeasonNameID' has a wrong offset!");

}

