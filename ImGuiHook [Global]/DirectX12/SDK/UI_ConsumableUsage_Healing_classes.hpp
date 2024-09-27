#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_ConsumableUsage_Healing

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UI_ConsumableUsage_Base_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_ConsumableUsage_Healing.UI_ConsumableUsage_Healing_C
// 0x0030 (0x0308 - 0x02D8)
class UUI_ConsumableUsage_Healing_C final : public UUI_ConsumableUsage_Base_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_UI_ConsumableUsage_Healing_C;       // 0x02D8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 GamepadIcon;                                       // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URichTextBlock*                         RichTextBlock_ActionName;                          // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_FlameSafezone_C*                    UI_FlameSafezone;                                  // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_HealthBar_C*                        UI_HealthBar_OtherPlayer;                          // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_HealingComponent_C*                 PreviousTargetComponent;                           // 0x0300(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_UI_ConsumableUsage_Healing(int32 EntryPoint);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void SetHoldProgress(bool CanBeUsed_0, float Progress);
	void HealSelf();
	void HealOther(class ABP_Character_C* Character);

	void GetHoldIcon(class UImage** GamepadIcon_0) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_ConsumableUsage_Healing_C">();
	}
	static class UUI_ConsumableUsage_Healing_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_ConsumableUsage_Healing_C>();
	}
};
static_assert(alignof(UUI_ConsumableUsage_Healing_C) == 0x000008, "Wrong alignment on UUI_ConsumableUsage_Healing_C");
static_assert(sizeof(UUI_ConsumableUsage_Healing_C) == 0x000308, "Wrong size on UUI_ConsumableUsage_Healing_C");
static_assert(offsetof(UUI_ConsumableUsage_Healing_C, UberGraphFrame_UI_ConsumableUsage_Healing_C) == 0x0002D8, "Member 'UUI_ConsumableUsage_Healing_C::UberGraphFrame_UI_ConsumableUsage_Healing_C' has a wrong offset!");
static_assert(offsetof(UUI_ConsumableUsage_Healing_C, GamepadIcon) == 0x0002E0, "Member 'UUI_ConsumableUsage_Healing_C::GamepadIcon' has a wrong offset!");
static_assert(offsetof(UUI_ConsumableUsage_Healing_C, RichTextBlock_ActionName) == 0x0002E8, "Member 'UUI_ConsumableUsage_Healing_C::RichTextBlock_ActionName' has a wrong offset!");
static_assert(offsetof(UUI_ConsumableUsage_Healing_C, UI_FlameSafezone) == 0x0002F0, "Member 'UUI_ConsumableUsage_Healing_C::UI_FlameSafezone' has a wrong offset!");
static_assert(offsetof(UUI_ConsumableUsage_Healing_C, UI_HealthBar_OtherPlayer) == 0x0002F8, "Member 'UUI_ConsumableUsage_Healing_C::UI_HealthBar_OtherPlayer' has a wrong offset!");
static_assert(offsetof(UUI_ConsumableUsage_Healing_C, PreviousTargetComponent) == 0x000300, "Member 'UUI_ConsumableUsage_Healing_C::PreviousTargetComponent' has a wrong offset!");

}

