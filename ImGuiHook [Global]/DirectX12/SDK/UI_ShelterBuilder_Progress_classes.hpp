#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_ShelterBuilder_Progress

#include "Basic.hpp"

#include "Flame_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_ShelterBuilder_Progress.UI_ShelterBuilder_Progress_C
// 0x0030 (0x02E8 - 0x02B8)
class UUI_ShelterBuilder_Progress_C final : public UFlameWidget
{
public:
	class UFlameTextBlock*                        Built;                                             // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFlameTextBlock*                        Needed;                                            // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFlameTextBlock*                        Owned;                                             // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFlameTextBlock*                        Plus;                                              // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Progress;                                          // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFlameTextBlock*                        Stroken;                                           // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void SetImprovements(int32 Owned_0, int32 Built_0, int32 Needed_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_ShelterBuilder_Progress_C">();
	}
	static class UUI_ShelterBuilder_Progress_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_ShelterBuilder_Progress_C>();
	}
};
static_assert(alignof(UUI_ShelterBuilder_Progress_C) == 0x000008, "Wrong alignment on UUI_ShelterBuilder_Progress_C");
static_assert(sizeof(UUI_ShelterBuilder_Progress_C) == 0x0002E8, "Wrong size on UUI_ShelterBuilder_Progress_C");
static_assert(offsetof(UUI_ShelterBuilder_Progress_C, Built) == 0x0002B8, "Member 'UUI_ShelterBuilder_Progress_C::Built' has a wrong offset!");
static_assert(offsetof(UUI_ShelterBuilder_Progress_C, Needed) == 0x0002C0, "Member 'UUI_ShelterBuilder_Progress_C::Needed' has a wrong offset!");
static_assert(offsetof(UUI_ShelterBuilder_Progress_C, Owned) == 0x0002C8, "Member 'UUI_ShelterBuilder_Progress_C::Owned' has a wrong offset!");
static_assert(offsetof(UUI_ShelterBuilder_Progress_C, Plus) == 0x0002D0, "Member 'UUI_ShelterBuilder_Progress_C::Plus' has a wrong offset!");
static_assert(offsetof(UUI_ShelterBuilder_Progress_C, Progress) == 0x0002D8, "Member 'UUI_ShelterBuilder_Progress_C::Progress' has a wrong offset!");
static_assert(offsetof(UUI_ShelterBuilder_Progress_C, Stroken) == 0x0002E0, "Member 'UUI_ShelterBuilder_Progress_C::Stroken' has a wrong offset!");

}

