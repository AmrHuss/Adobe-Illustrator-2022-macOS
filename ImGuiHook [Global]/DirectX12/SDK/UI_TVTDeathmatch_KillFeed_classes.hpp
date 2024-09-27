#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_TVTDeathmatch_KillFeed

#include "Basic.hpp"

#include "Flame_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_TVTDeathmatch_KillFeed.UI_TVTDeathmatch_KillFeed_C
// 0x0048 (0x0300 - 0x02B8)
class UUI_TVTDeathmatch_KillFeed_C final : public UFlameWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02B8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UVerticalBox*                           KillFeed_VerticalBox;                              // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Overlay_WidgetShelf;                               // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_FlameSafezone_C*                    UI_FlameSafezone;                                  // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UUI_TVTDeathnatch_KillFeedRow_C*> KillFeed_Widgets;                                  // 0x02D8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class UUI_TVTDeathnatch_ScoreEvents_FeedRow_C*> EventFeed_Widgets;                                 // 0x02E8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	int32                                         MaxCount_KillFeed;                                 // 0x02F8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         MaxCount_EventFeed;                                // 0x02FC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_UI_TVTDeathmatch_KillFeed(int32 EntryPoint);
	void Construct();
	void Add_Kill_Feed_Row(const struct FStruct_TVTDeathmatch_KillFeed& KillFeed);
	void Add_Score_Event_Feed_Row(const class FString& EventStringKey, int32 AwardedPoints);
	void PrepareFeed();
	void ReuseKillFeedRow(const struct FStruct_TVTDeathmatch_KillFeed& KillFeed);
	void ReuseScore_Event_Feed_Row(const class FString& EventStringKey, int32 AwardedPoints);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_TVTDeathmatch_KillFeed_C">();
	}
	static class UUI_TVTDeathmatch_KillFeed_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_TVTDeathmatch_KillFeed_C>();
	}
};
static_assert(alignof(UUI_TVTDeathmatch_KillFeed_C) == 0x000008, "Wrong alignment on UUI_TVTDeathmatch_KillFeed_C");
static_assert(sizeof(UUI_TVTDeathmatch_KillFeed_C) == 0x000300, "Wrong size on UUI_TVTDeathmatch_KillFeed_C");
static_assert(offsetof(UUI_TVTDeathmatch_KillFeed_C, UberGraphFrame) == 0x0002B8, "Member 'UUI_TVTDeathmatch_KillFeed_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_TVTDeathmatch_KillFeed_C, KillFeed_VerticalBox) == 0x0002C0, "Member 'UUI_TVTDeathmatch_KillFeed_C::KillFeed_VerticalBox' has a wrong offset!");
static_assert(offsetof(UUI_TVTDeathmatch_KillFeed_C, Overlay_WidgetShelf) == 0x0002C8, "Member 'UUI_TVTDeathmatch_KillFeed_C::Overlay_WidgetShelf' has a wrong offset!");
static_assert(offsetof(UUI_TVTDeathmatch_KillFeed_C, UI_FlameSafezone) == 0x0002D0, "Member 'UUI_TVTDeathmatch_KillFeed_C::UI_FlameSafezone' has a wrong offset!");
static_assert(offsetof(UUI_TVTDeathmatch_KillFeed_C, KillFeed_Widgets) == 0x0002D8, "Member 'UUI_TVTDeathmatch_KillFeed_C::KillFeed_Widgets' has a wrong offset!");
static_assert(offsetof(UUI_TVTDeathmatch_KillFeed_C, EventFeed_Widgets) == 0x0002E8, "Member 'UUI_TVTDeathmatch_KillFeed_C::EventFeed_Widgets' has a wrong offset!");
static_assert(offsetof(UUI_TVTDeathmatch_KillFeed_C, MaxCount_KillFeed) == 0x0002F8, "Member 'UUI_TVTDeathmatch_KillFeed_C::MaxCount_KillFeed' has a wrong offset!");
static_assert(offsetof(UUI_TVTDeathmatch_KillFeed_C, MaxCount_EventFeed) == 0x0002FC, "Member 'UUI_TVTDeathmatch_KillFeed_C::MaxCount_EventFeed' has a wrong offset!");

}

