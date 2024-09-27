#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_RewardScreen_MatchEventItem

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_RewardScreen_MatchEventItem.UI_RewardScreen_MatchEventItem_C
// 0x0038 (0x0298 - 0x0260)
class UUI_RewardScreen_MatchEventItem_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                             ActionName;                                        // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             XpCount;                                           // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   EventName;                                         // 0x0278(0x0018)(Edit, BlueprintVisible, ExposeOnSpawn)
	int32                                         XP;                                                // 0x0290(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_UI_RewardScreen_MatchEventItem(int32 EntryPoint);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_RewardScreen_MatchEventItem_C">();
	}
	static class UUI_RewardScreen_MatchEventItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_RewardScreen_MatchEventItem_C>();
	}
};
static_assert(alignof(UUI_RewardScreen_MatchEventItem_C) == 0x000008, "Wrong alignment on UUI_RewardScreen_MatchEventItem_C");
static_assert(sizeof(UUI_RewardScreen_MatchEventItem_C) == 0x000298, "Wrong size on UUI_RewardScreen_MatchEventItem_C");
static_assert(offsetof(UUI_RewardScreen_MatchEventItem_C, UberGraphFrame) == 0x000260, "Member 'UUI_RewardScreen_MatchEventItem_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_RewardScreen_MatchEventItem_C, ActionName) == 0x000268, "Member 'UUI_RewardScreen_MatchEventItem_C::ActionName' has a wrong offset!");
static_assert(offsetof(UUI_RewardScreen_MatchEventItem_C, XpCount) == 0x000270, "Member 'UUI_RewardScreen_MatchEventItem_C::XpCount' has a wrong offset!");
static_assert(offsetof(UUI_RewardScreen_MatchEventItem_C, EventName) == 0x000278, "Member 'UUI_RewardScreen_MatchEventItem_C::EventName' has a wrong offset!");
static_assert(offsetof(UUI_RewardScreen_MatchEventItem_C, XP) == 0x000290, "Member 'UUI_RewardScreen_MatchEventItem_C::XP' has a wrong offset!");

}

