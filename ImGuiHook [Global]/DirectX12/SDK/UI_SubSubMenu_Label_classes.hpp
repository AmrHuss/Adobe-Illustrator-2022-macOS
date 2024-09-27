#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_SubSubMenu_Label

#include "Basic.hpp"

#include "Flame_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_SubSubMenu_Label.UI_SubSubMenu_Label_C
// 0x0030 (0x02E8 - 0x02B8)
class UUI_SubSubMenu_Label_C final : public UFlameWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02B8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UFlameTextBlock*                        FlameTextBlock_Label;                              // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_65;                                          // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   Text;                                              // 0x02D0(0x0018)(Edit, BlueprintVisible, ExposeOnSpawn)

public:
	void ExecuteUbergraph_UI_SubSubMenu_Label(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_SubSubMenu_Label_C">();
	}
	static class UUI_SubSubMenu_Label_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_SubSubMenu_Label_C>();
	}
};
static_assert(alignof(UUI_SubSubMenu_Label_C) == 0x000008, "Wrong alignment on UUI_SubSubMenu_Label_C");
static_assert(sizeof(UUI_SubSubMenu_Label_C) == 0x0002E8, "Wrong size on UUI_SubSubMenu_Label_C");
static_assert(offsetof(UUI_SubSubMenu_Label_C, UberGraphFrame) == 0x0002B8, "Member 'UUI_SubSubMenu_Label_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_SubSubMenu_Label_C, FlameTextBlock_Label) == 0x0002C0, "Member 'UUI_SubSubMenu_Label_C::FlameTextBlock_Label' has a wrong offset!");
static_assert(offsetof(UUI_SubSubMenu_Label_C, Image_65) == 0x0002C8, "Member 'UUI_SubSubMenu_Label_C::Image_65' has a wrong offset!");
static_assert(offsetof(UUI_SubSubMenu_Label_C, Text) == 0x0002D0, "Member 'UUI_SubSubMenu_Label_C::Text' has a wrong offset!");

}

