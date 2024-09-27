#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_GameMenu_AllPlayersListItem

#include "Basic.hpp"

#include "Flame_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_GameMenu_AllPlayersListItem.UI_GameMenu_AllPlayersListItem_C
// 0x0008 (0x02C0 - 0x02B8)
class UUI_GameMenu_AllPlayersListItem_C final : public UFlameWidget
{
public:
	class UUI_PlayerNickname_C*                   UI_PlayerNickname;                                 // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_GameMenu_AllPlayersListItem_C">();
	}
	static class UUI_GameMenu_AllPlayersListItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_GameMenu_AllPlayersListItem_C>();
	}
};
static_assert(alignof(UUI_GameMenu_AllPlayersListItem_C) == 0x000008, "Wrong alignment on UUI_GameMenu_AllPlayersListItem_C");
static_assert(sizeof(UUI_GameMenu_AllPlayersListItem_C) == 0x0002C0, "Wrong size on UUI_GameMenu_AllPlayersListItem_C");
static_assert(offsetof(UUI_GameMenu_AllPlayersListItem_C, UI_PlayerNickname) == 0x0002B8, "Member 'UUI_GameMenu_AllPlayersListItem_C::UI_PlayerNickname' has a wrong offset!");

}

