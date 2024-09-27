#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Scoreboard_Controls

#include "Basic.hpp"

#include "Flame_classes.hpp"
#include "FlameUI_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_Scoreboard_Controls.UI_Scoreboard_Controls_C
// 0x0008 (0x02E0 - 0x02D8)
class UUI_Scoreboard_Controls_C : public UMenuWidget
{
public:
	class UUI_Scoreboard_Main_C*                  ScoreboardMain;                                    // 0x02D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void GetPlatformFromNetId(const struct FUniqueNetIdRepl& NetId, EFlamePlatform* Platform);
	void GetViewProfileAction(class UInputActionWidget** ViewProfileAction);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_Scoreboard_Controls_C">();
	}
	static class UUI_Scoreboard_Controls_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_Scoreboard_Controls_C>();
	}
};
static_assert(alignof(UUI_Scoreboard_Controls_C) == 0x000008, "Wrong alignment on UUI_Scoreboard_Controls_C");
static_assert(sizeof(UUI_Scoreboard_Controls_C) == 0x0002E0, "Wrong size on UUI_Scoreboard_Controls_C");
static_assert(offsetof(UUI_Scoreboard_Controls_C, ScoreboardMain) == 0x0002D8, "Member 'UUI_Scoreboard_Controls_C::ScoreboardMain' has a wrong offset!");

}

