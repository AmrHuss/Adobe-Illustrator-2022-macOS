#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_PlayerListHorizontal

#include "Basic.hpp"

#include "Flame_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_PlayerListHorizontal.UI_PlayerListHorizontal_C
// 0x0008 (0x0360 - 0x0358)
class UUI_PlayerListHorizontal_C final : public UGroupMemberListWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0358(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_UI_PlayerListHorizontal(int32 EntryPoint);
	void OnPlayerAdded(class UPlayerInfoWidget* AddedWidget);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_PlayerListHorizontal_C">();
	}
	static class UUI_PlayerListHorizontal_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_PlayerListHorizontal_C>();
	}
};
static_assert(alignof(UUI_PlayerListHorizontal_C) == 0x000008, "Wrong alignment on UUI_PlayerListHorizontal_C");
static_assert(sizeof(UUI_PlayerListHorizontal_C) == 0x000360, "Wrong size on UUI_PlayerListHorizontal_C");
static_assert(offsetof(UUI_PlayerListHorizontal_C, UberGraphFrame) == 0x000358, "Member 'UUI_PlayerListHorizontal_C::UberGraphFrame' has a wrong offset!");

}

