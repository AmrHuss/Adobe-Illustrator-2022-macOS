#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Raid_SpawnSelectionItem

#include "Basic.hpp"

#include "Flame_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_Raid_SpawnSelectionItem.UI_Raid_SpawnSelectionItem_C
// 0x0020 (0x02D8 - 0x02B8)
class UUI_Raid_SpawnSelectionItem_C final : public UFlameWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02B8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 SelectedImage;                                     // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             SpawnName;                                         // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ABP_PlayerStart_Raid_C*                 SpawnPoint;                                        // 0x02D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_UI_Raid_SpawnSelectionItem(int32 EntryPoint);
	void Construct();
	void Set_Selected(bool Selected);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_Raid_SpawnSelectionItem_C">();
	}
	static class UUI_Raid_SpawnSelectionItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_Raid_SpawnSelectionItem_C>();
	}
};
static_assert(alignof(UUI_Raid_SpawnSelectionItem_C) == 0x000008, "Wrong alignment on UUI_Raid_SpawnSelectionItem_C");
static_assert(sizeof(UUI_Raid_SpawnSelectionItem_C) == 0x0002D8, "Wrong size on UUI_Raid_SpawnSelectionItem_C");
static_assert(offsetof(UUI_Raid_SpawnSelectionItem_C, UberGraphFrame) == 0x0002B8, "Member 'UUI_Raid_SpawnSelectionItem_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_Raid_SpawnSelectionItem_C, SelectedImage) == 0x0002C0, "Member 'UUI_Raid_SpawnSelectionItem_C::SelectedImage' has a wrong offset!");
static_assert(offsetof(UUI_Raid_SpawnSelectionItem_C, SpawnName) == 0x0002C8, "Member 'UUI_Raid_SpawnSelectionItem_C::SpawnName' has a wrong offset!");
static_assert(offsetof(UUI_Raid_SpawnSelectionItem_C, SpawnPoint) == 0x0002D0, "Member 'UUI_Raid_SpawnSelectionItem_C::SpawnPoint' has a wrong offset!");

}

