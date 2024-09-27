#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_ItemInfo_ItemForBackpack

#include "Basic.hpp"

#include "Flame_classes.hpp"
#include "Engine_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_ItemInfo_ItemForBackpack.UI_ItemInfo_ItemForBackpack_C
// 0x0030 (0x02E8 - 0x02B8)
class UUI_ItemInfo_ItemForBackpack_C final : public UFlameWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02B8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UHorizontalBox*                         HorizontalBox_199;                                 // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Text_ItemDescription;                              // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_BoosterSlot_Crate_C*                UI_BoosterSlot_Crate;                              // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VerticalBox;                                       // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UClass*                                 ItemClass;                                         // 0x02E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_UI_ItemInfo_ItemForBackpack(int32 EntryPoint);
	void Update(class UClass* InputPin);
	void UpdateItemDescription(class UClass* ItemForBackpack);
	void HandleCrateItem();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_ItemInfo_ItemForBackpack_C">();
	}
	static class UUI_ItemInfo_ItemForBackpack_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_ItemInfo_ItemForBackpack_C>();
	}
};
static_assert(alignof(UUI_ItemInfo_ItemForBackpack_C) == 0x000008, "Wrong alignment on UUI_ItemInfo_ItemForBackpack_C");
static_assert(sizeof(UUI_ItemInfo_ItemForBackpack_C) == 0x0002E8, "Wrong size on UUI_ItemInfo_ItemForBackpack_C");
static_assert(offsetof(UUI_ItemInfo_ItemForBackpack_C, UberGraphFrame) == 0x0002B8, "Member 'UUI_ItemInfo_ItemForBackpack_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_ItemInfo_ItemForBackpack_C, HorizontalBox_199) == 0x0002C0, "Member 'UUI_ItemInfo_ItemForBackpack_C::HorizontalBox_199' has a wrong offset!");
static_assert(offsetof(UUI_ItemInfo_ItemForBackpack_C, Text_ItemDescription) == 0x0002C8, "Member 'UUI_ItemInfo_ItemForBackpack_C::Text_ItemDescription' has a wrong offset!");
static_assert(offsetof(UUI_ItemInfo_ItemForBackpack_C, UI_BoosterSlot_Crate) == 0x0002D0, "Member 'UUI_ItemInfo_ItemForBackpack_C::UI_BoosterSlot_Crate' has a wrong offset!");
static_assert(offsetof(UUI_ItemInfo_ItemForBackpack_C, VerticalBox) == 0x0002D8, "Member 'UUI_ItemInfo_ItemForBackpack_C::VerticalBox' has a wrong offset!");
static_assert(offsetof(UUI_ItemInfo_ItemForBackpack_C, ItemClass) == 0x0002E0, "Member 'UUI_ItemInfo_ItemForBackpack_C::ItemClass' has a wrong offset!");

}

