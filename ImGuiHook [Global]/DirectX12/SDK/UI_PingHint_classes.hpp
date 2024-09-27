#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_PingHint

#include "Basic.hpp"

#include "Flame_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_PingHint.UI_PingHint_C
// 0x0020 (0x02D8 - 0x02B8)
class UUI_PingHint_C final : public UFlameWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02B8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UUI_FlameSafezone_C*                    UI_FlameSafezone;                                  // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_InputActionWidget_C*                UI_GamepadActionWidget;                            // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         LocalPlayerID;                                     // 0x02D0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_UI_PingHint(int32 EntryPoint);
	void Selected_Ping(bool Selected, const struct FStruct_PingInfo& PingInfo);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_PingHint_C">();
	}
	static class UUI_PingHint_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_PingHint_C>();
	}
};
static_assert(alignof(UUI_PingHint_C) == 0x000008, "Wrong alignment on UUI_PingHint_C");
static_assert(sizeof(UUI_PingHint_C) == 0x0002D8, "Wrong size on UUI_PingHint_C");
static_assert(offsetof(UUI_PingHint_C, UberGraphFrame) == 0x0002B8, "Member 'UUI_PingHint_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_PingHint_C, UI_FlameSafezone) == 0x0002C0, "Member 'UUI_PingHint_C::UI_FlameSafezone' has a wrong offset!");
static_assert(offsetof(UUI_PingHint_C, UI_GamepadActionWidget) == 0x0002C8, "Member 'UUI_PingHint_C::UI_GamepadActionWidget' has a wrong offset!");
static_assert(offsetof(UUI_PingHint_C, LocalPlayerID) == 0x0002D0, "Member 'UUI_PingHint_C::LocalPlayerID' has a wrong offset!");

}

