#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_PlayersMenu

#include "Basic.hpp"

#include "Flame_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_PlayersMenu.UI_PlayersMenu_C
// 0x0020 (0x02D8 - 0x02B8)
class UUI_PlayersMenu_C final : public UFlameWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02B8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 BackgroundImage;                                   // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           PlayerBox;                                         // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_InputActionWidget_C*                UI_GamepadActionWidget;                            // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_UI_PlayersMenu(int32 EntryPoint);
	void BndEvt__UI_GamepadActionWidget_K2Node_ComponentBoundEvent_40_OnActionPressedEvent__DelegateSignature();
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_PlayersMenu_C">();
	}
	static class UUI_PlayersMenu_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_PlayersMenu_C>();
	}
};
static_assert(alignof(UUI_PlayersMenu_C) == 0x000008, "Wrong alignment on UUI_PlayersMenu_C");
static_assert(sizeof(UUI_PlayersMenu_C) == 0x0002D8, "Wrong size on UUI_PlayersMenu_C");
static_assert(offsetof(UUI_PlayersMenu_C, UberGraphFrame) == 0x0002B8, "Member 'UUI_PlayersMenu_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_PlayersMenu_C, BackgroundImage) == 0x0002C0, "Member 'UUI_PlayersMenu_C::BackgroundImage' has a wrong offset!");
static_assert(offsetof(UUI_PlayersMenu_C, PlayerBox) == 0x0002C8, "Member 'UUI_PlayersMenu_C::PlayerBox' has a wrong offset!");
static_assert(offsetof(UUI_PlayersMenu_C, UI_GamepadActionWidget) == 0x0002D0, "Member 'UUI_PlayersMenu_C::UI_GamepadActionWidget' has a wrong offset!");

}

