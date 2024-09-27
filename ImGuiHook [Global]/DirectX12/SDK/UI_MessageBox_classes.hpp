#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_MessageBox

#include "Basic.hpp"

#include "Flame_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_MessageBox.UI_MessageBox_C
// 0x0008 (0x0328 - 0x0320)
class UUI_MessageBox_C final : public UMessageBoxWidget
{
public:
	class UImage*                                 Image_100;                                         // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_MessageBox_C">();
	}
	static class UUI_MessageBox_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_MessageBox_C>();
	}
};
static_assert(alignof(UUI_MessageBox_C) == 0x000008, "Wrong alignment on UUI_MessageBox_C");
static_assert(sizeof(UUI_MessageBox_C) == 0x000328, "Wrong size on UUI_MessageBox_C");
static_assert(offsetof(UUI_MessageBox_C, Image_100) == 0x000320, "Member 'UUI_MessageBox_C::Image_100' has a wrong offset!");

}

