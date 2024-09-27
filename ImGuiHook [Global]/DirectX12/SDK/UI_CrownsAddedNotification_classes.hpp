#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_CrownsAddedNotification

#include "Basic.hpp"

#include "Flame_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_CrownsAddedNotification.UI_CrownsAddedNotification_C
// 0x0020 (0x02F0 - 0x02D0)
class UUI_CrownsAddedNotification_C final : public UNotificationBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02D0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       FadeInOut;                                         // 0x02D8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class URichTextBlock*                         NotificationText;                                  // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         CrownAmount;                                       // 0x02E8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                         CrownBonusAmount;                                  // 0x02EC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_UI_CrownsAddedNotification(int32 EntryPoint);
	void OnHide();
	void OnShow();
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_CrownsAddedNotification_C">();
	}
	static class UUI_CrownsAddedNotification_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_CrownsAddedNotification_C>();
	}
};
static_assert(alignof(UUI_CrownsAddedNotification_C) == 0x000008, "Wrong alignment on UUI_CrownsAddedNotification_C");
static_assert(sizeof(UUI_CrownsAddedNotification_C) == 0x0002F0, "Wrong size on UUI_CrownsAddedNotification_C");
static_assert(offsetof(UUI_CrownsAddedNotification_C, UberGraphFrame) == 0x0002D0, "Member 'UUI_CrownsAddedNotification_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_CrownsAddedNotification_C, FadeInOut) == 0x0002D8, "Member 'UUI_CrownsAddedNotification_C::FadeInOut' has a wrong offset!");
static_assert(offsetof(UUI_CrownsAddedNotification_C, NotificationText) == 0x0002E0, "Member 'UUI_CrownsAddedNotification_C::NotificationText' has a wrong offset!");
static_assert(offsetof(UUI_CrownsAddedNotification_C, CrownAmount) == 0x0002E8, "Member 'UUI_CrownsAddedNotification_C::CrownAmount' has a wrong offset!");
static_assert(offsetof(UUI_CrownsAddedNotification_C, CrownBonusAmount) == 0x0002EC, "Member 'UUI_CrownsAddedNotification_C::CrownBonusAmount' has a wrong offset!");

}

