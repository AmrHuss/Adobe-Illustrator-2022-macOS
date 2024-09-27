#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_LobbyProgressBar_Reversed

#include "Basic.hpp"

#include "Flame_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_LobbyProgressBar_Reversed.UI_LobbyProgressBar_Reversed_C
// 0x0078 (0x0330 - 0x02B8)
class UUI_LobbyProgressBar_Reversed_C final : public UFlameWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02B8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UOverlay*                               Overlay_2_White;                                   // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Part1;                                             // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Part1_Base;                                        // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Part1_Particles;                                   // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Part2;                                             // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Part2_Base;                                        // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Part2_Particles;                                   // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Part3;                                             // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNamedSlot*                             Slot1;                                             // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNamedSlot*                             Slot2;                                             // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNamedSlot*                             Slot3;                                             // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         MaxCount;                                          // 0x0318(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CurrentCount;                                      // 0x031C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          DesiredAnimation1;                                 // 0x0320(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_321[0x3];                                      // 0x0321(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         AnimSpeed;                                         // 0x0324(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CurrentCurrent;                                    // 0x0328(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ShowGreen;                                         // 0x032C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_UI_LobbyProgressBar_Reversed(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void UpdateUI();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Construct();
	void SetMaxCount(int32 MaxCount_0);
	void SetCurrentCount(int32 CurrentCount_0);
	void UpdateVisual(float Current, float Next, float Max);
	void SetIsBoosterOwned(bool NewParam);
	void SetRarityColor(const struct FLinearColor& RarityColor);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_LobbyProgressBar_Reversed_C">();
	}
	static class UUI_LobbyProgressBar_Reversed_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_LobbyProgressBar_Reversed_C>();
	}
};
static_assert(alignof(UUI_LobbyProgressBar_Reversed_C) == 0x000008, "Wrong alignment on UUI_LobbyProgressBar_Reversed_C");
static_assert(sizeof(UUI_LobbyProgressBar_Reversed_C) == 0x000330, "Wrong size on UUI_LobbyProgressBar_Reversed_C");
static_assert(offsetof(UUI_LobbyProgressBar_Reversed_C, UberGraphFrame) == 0x0002B8, "Member 'UUI_LobbyProgressBar_Reversed_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_LobbyProgressBar_Reversed_C, Overlay_2_White) == 0x0002C0, "Member 'UUI_LobbyProgressBar_Reversed_C::Overlay_2_White' has a wrong offset!");
static_assert(offsetof(UUI_LobbyProgressBar_Reversed_C, Part1) == 0x0002C8, "Member 'UUI_LobbyProgressBar_Reversed_C::Part1' has a wrong offset!");
static_assert(offsetof(UUI_LobbyProgressBar_Reversed_C, Part1_Base) == 0x0002D0, "Member 'UUI_LobbyProgressBar_Reversed_C::Part1_Base' has a wrong offset!");
static_assert(offsetof(UUI_LobbyProgressBar_Reversed_C, Part1_Particles) == 0x0002D8, "Member 'UUI_LobbyProgressBar_Reversed_C::Part1_Particles' has a wrong offset!");
static_assert(offsetof(UUI_LobbyProgressBar_Reversed_C, Part2) == 0x0002E0, "Member 'UUI_LobbyProgressBar_Reversed_C::Part2' has a wrong offset!");
static_assert(offsetof(UUI_LobbyProgressBar_Reversed_C, Part2_Base) == 0x0002E8, "Member 'UUI_LobbyProgressBar_Reversed_C::Part2_Base' has a wrong offset!");
static_assert(offsetof(UUI_LobbyProgressBar_Reversed_C, Part2_Particles) == 0x0002F0, "Member 'UUI_LobbyProgressBar_Reversed_C::Part2_Particles' has a wrong offset!");
static_assert(offsetof(UUI_LobbyProgressBar_Reversed_C, Part3) == 0x0002F8, "Member 'UUI_LobbyProgressBar_Reversed_C::Part3' has a wrong offset!");
static_assert(offsetof(UUI_LobbyProgressBar_Reversed_C, Slot1) == 0x000300, "Member 'UUI_LobbyProgressBar_Reversed_C::Slot1' has a wrong offset!");
static_assert(offsetof(UUI_LobbyProgressBar_Reversed_C, Slot2) == 0x000308, "Member 'UUI_LobbyProgressBar_Reversed_C::Slot2' has a wrong offset!");
static_assert(offsetof(UUI_LobbyProgressBar_Reversed_C, Slot3) == 0x000310, "Member 'UUI_LobbyProgressBar_Reversed_C::Slot3' has a wrong offset!");
static_assert(offsetof(UUI_LobbyProgressBar_Reversed_C, MaxCount) == 0x000318, "Member 'UUI_LobbyProgressBar_Reversed_C::MaxCount' has a wrong offset!");
static_assert(offsetof(UUI_LobbyProgressBar_Reversed_C, CurrentCount) == 0x00031C, "Member 'UUI_LobbyProgressBar_Reversed_C::CurrentCount' has a wrong offset!");
static_assert(offsetof(UUI_LobbyProgressBar_Reversed_C, DesiredAnimation1) == 0x000320, "Member 'UUI_LobbyProgressBar_Reversed_C::DesiredAnimation1' has a wrong offset!");
static_assert(offsetof(UUI_LobbyProgressBar_Reversed_C, AnimSpeed) == 0x000324, "Member 'UUI_LobbyProgressBar_Reversed_C::AnimSpeed' has a wrong offset!");
static_assert(offsetof(UUI_LobbyProgressBar_Reversed_C, CurrentCurrent) == 0x000328, "Member 'UUI_LobbyProgressBar_Reversed_C::CurrentCurrent' has a wrong offset!");
static_assert(offsetof(UUI_LobbyProgressBar_Reversed_C, ShowGreen) == 0x00032C, "Member 'UUI_LobbyProgressBar_Reversed_C::ShowGreen' has a wrong offset!");

}

