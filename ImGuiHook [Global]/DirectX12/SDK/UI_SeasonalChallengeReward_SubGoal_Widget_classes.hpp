#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_SeasonalChallengeReward_SubGoal_Widget

#include "Basic.hpp"

#include "Flame_classes.hpp"
#include "Engine_structs.hpp"
#include "Struct_SeasonalChallengesSubGoalInfo_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_SeasonalChallengeReward_SubGoal_Widget.UI_SeasonalChallengeReward_SubGoal_Widget_C
// 0x0090 (0x0348 - 0x02B8)
class UUI_SeasonalChallengeReward_SubGoal_Widget_C final : public UFlameWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02B8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCanvasPanel*                           Canvas_Base;                                       // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_SlotChallenges;                              // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Overlay_SubGoalFinished;                           // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Text_ChallengeCount;                               // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_CircularProgress_C*                 UI_CircularProgress;                               // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Widgetcontainer;                                   // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCameraComponent*                       CameraThatSeesThis;                                // 0x02F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidgetComponent*                       WidgetComponent;                                   // 0x02F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ChallCompletedCount;                               // 0x0300(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_304[0x4];                                      // 0x0304(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FStruct_SeasonalChallengesSubGoalInfo  SubGoalInfo;                                       // 0x0308(0x0038)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                          bInitialized;                                      // 0x0340(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bCompleted;                                        // 0x0341(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bCurrentSubGoal;                                   // 0x0342(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_UI_SeasonalChallengeReward_SubGoal_Widget(int32 EntryPoint);
	void UpdateChallengesCompletedCount(int32 Count);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void Init_SubGoalWidget_UI(int32 TotalCompletedChallenges, const struct FStruct_SeasonalChallengesSubGoalInfo& SubGoalInfo_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_SeasonalChallengeReward_SubGoal_Widget_C">();
	}
	static class UUI_SeasonalChallengeReward_SubGoal_Widget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_SeasonalChallengeReward_SubGoal_Widget_C>();
	}
};
static_assert(alignof(UUI_SeasonalChallengeReward_SubGoal_Widget_C) == 0x000008, "Wrong alignment on UUI_SeasonalChallengeReward_SubGoal_Widget_C");
static_assert(sizeof(UUI_SeasonalChallengeReward_SubGoal_Widget_C) == 0x000348, "Wrong size on UUI_SeasonalChallengeReward_SubGoal_Widget_C");
static_assert(offsetof(UUI_SeasonalChallengeReward_SubGoal_Widget_C, UberGraphFrame) == 0x0002B8, "Member 'UUI_SeasonalChallengeReward_SubGoal_Widget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_SeasonalChallengeReward_SubGoal_Widget_C, Canvas_Base) == 0x0002C0, "Member 'UUI_SeasonalChallengeReward_SubGoal_Widget_C::Canvas_Base' has a wrong offset!");
static_assert(offsetof(UUI_SeasonalChallengeReward_SubGoal_Widget_C, Image_SlotChallenges) == 0x0002C8, "Member 'UUI_SeasonalChallengeReward_SubGoal_Widget_C::Image_SlotChallenges' has a wrong offset!");
static_assert(offsetof(UUI_SeasonalChallengeReward_SubGoal_Widget_C, Overlay_SubGoalFinished) == 0x0002D0, "Member 'UUI_SeasonalChallengeReward_SubGoal_Widget_C::Overlay_SubGoalFinished' has a wrong offset!");
static_assert(offsetof(UUI_SeasonalChallengeReward_SubGoal_Widget_C, Text_ChallengeCount) == 0x0002D8, "Member 'UUI_SeasonalChallengeReward_SubGoal_Widget_C::Text_ChallengeCount' has a wrong offset!");
static_assert(offsetof(UUI_SeasonalChallengeReward_SubGoal_Widget_C, UI_CircularProgress) == 0x0002E0, "Member 'UUI_SeasonalChallengeReward_SubGoal_Widget_C::UI_CircularProgress' has a wrong offset!");
static_assert(offsetof(UUI_SeasonalChallengeReward_SubGoal_Widget_C, Widgetcontainer) == 0x0002E8, "Member 'UUI_SeasonalChallengeReward_SubGoal_Widget_C::Widgetcontainer' has a wrong offset!");
static_assert(offsetof(UUI_SeasonalChallengeReward_SubGoal_Widget_C, CameraThatSeesThis) == 0x0002F0, "Member 'UUI_SeasonalChallengeReward_SubGoal_Widget_C::CameraThatSeesThis' has a wrong offset!");
static_assert(offsetof(UUI_SeasonalChallengeReward_SubGoal_Widget_C, WidgetComponent) == 0x0002F8, "Member 'UUI_SeasonalChallengeReward_SubGoal_Widget_C::WidgetComponent' has a wrong offset!");
static_assert(offsetof(UUI_SeasonalChallengeReward_SubGoal_Widget_C, ChallCompletedCount) == 0x000300, "Member 'UUI_SeasonalChallengeReward_SubGoal_Widget_C::ChallCompletedCount' has a wrong offset!");
static_assert(offsetof(UUI_SeasonalChallengeReward_SubGoal_Widget_C, SubGoalInfo) == 0x000308, "Member 'UUI_SeasonalChallengeReward_SubGoal_Widget_C::SubGoalInfo' has a wrong offset!");
static_assert(offsetof(UUI_SeasonalChallengeReward_SubGoal_Widget_C, bInitialized) == 0x000340, "Member 'UUI_SeasonalChallengeReward_SubGoal_Widget_C::bInitialized' has a wrong offset!");
static_assert(offsetof(UUI_SeasonalChallengeReward_SubGoal_Widget_C, bCompleted) == 0x000341, "Member 'UUI_SeasonalChallengeReward_SubGoal_Widget_C::bCompleted' has a wrong offset!");
static_assert(offsetof(UUI_SeasonalChallengeReward_SubGoal_Widget_C, bCurrentSubGoal) == 0x000342, "Member 'UUI_SeasonalChallengeReward_SubGoal_Widget_C::bCurrentSubGoal' has a wrong offset!");

}

