#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_UpgradeImprovementCamera

#include "Basic.hpp"

#include "Flame_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_UpgradeImprovementCamera.UI_UpgradeImprovementCamera_C
// 0x0030 (0x0308 - 0x02D8)
class UUI_UpgradeImprovementCamera_C final : public UMenuWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02D8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UFlameTextBlock*                        ProductionText;                                    // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_FlameSafezone_C*                    UI_FlameSafezone;                                  // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_InputActionWidget_C*                UI_GamepadActionWidget;                            // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class AActor*                                 PrevViewTarget;                                    // 0x02F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 ShelterSlot;                                       // 0x0300(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_UI_UpgradeImprovementCamera(int32 EntryPoint);
	void BndEvt__UI_GamepadActionWidget_K2Node_ComponentBoundEvent_15_OnActionPressedEvent__DelegateSignature();
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_UpgradeImprovementCamera_C">();
	}
	static class UUI_UpgradeImprovementCamera_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_UpgradeImprovementCamera_C>();
	}
};
static_assert(alignof(UUI_UpgradeImprovementCamera_C) == 0x000008, "Wrong alignment on UUI_UpgradeImprovementCamera_C");
static_assert(sizeof(UUI_UpgradeImprovementCamera_C) == 0x000308, "Wrong size on UUI_UpgradeImprovementCamera_C");
static_assert(offsetof(UUI_UpgradeImprovementCamera_C, UberGraphFrame) == 0x0002D8, "Member 'UUI_UpgradeImprovementCamera_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_UpgradeImprovementCamera_C, ProductionText) == 0x0002E0, "Member 'UUI_UpgradeImprovementCamera_C::ProductionText' has a wrong offset!");
static_assert(offsetof(UUI_UpgradeImprovementCamera_C, UI_FlameSafezone) == 0x0002E8, "Member 'UUI_UpgradeImprovementCamera_C::UI_FlameSafezone' has a wrong offset!");
static_assert(offsetof(UUI_UpgradeImprovementCamera_C, UI_GamepadActionWidget) == 0x0002F0, "Member 'UUI_UpgradeImprovementCamera_C::UI_GamepadActionWidget' has a wrong offset!");
static_assert(offsetof(UUI_UpgradeImprovementCamera_C, PrevViewTarget) == 0x0002F8, "Member 'UUI_UpgradeImprovementCamera_C::PrevViewTarget' has a wrong offset!");
static_assert(offsetof(UUI_UpgradeImprovementCamera_C, ShelterSlot) == 0x000300, "Member 'UUI_UpgradeImprovementCamera_C::ShelterSlot' has a wrong offset!");

}

