#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_EncounterNotificationList

#include "Basic.hpp"

#include "Flame_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_EncounterNotificationList.UI_EncounterNotificationList_C
// 0x0008 (0x02D8 - 0x02D0)
class UUI_EncounterNotificationList_C final : public UNotificationListBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02D0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_UI_EncounterNotificationList(int32 EntryPoint);
	void OnAddNotification(class UNotificationBase* InNotification);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_EncounterNotificationList_C">();
	}
	static class UUI_EncounterNotificationList_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_EncounterNotificationList_C>();
	}
};
static_assert(alignof(UUI_EncounterNotificationList_C) == 0x000008, "Wrong alignment on UUI_EncounterNotificationList_C");
static_assert(sizeof(UUI_EncounterNotificationList_C) == 0x0002D8, "Wrong size on UUI_EncounterNotificationList_C");
static_assert(offsetof(UUI_EncounterNotificationList_C, UberGraphFrame) == 0x0002D0, "Member 'UUI_EncounterNotificationList_C::UberGraphFrame' has a wrong offset!");

}

