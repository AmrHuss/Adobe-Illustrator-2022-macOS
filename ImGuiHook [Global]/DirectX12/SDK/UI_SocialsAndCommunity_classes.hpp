#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_SocialsAndCommunity

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UI_ModalWidget_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_SocialsAndCommunity.UI_SocialsAndCommunity_C
// 0x0068 (0x0370 - 0x0308)
class UUI_SocialsAndCommunity_C final : public UUI_ModalWidget_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_UI_SocialsAndCommunity_C;           // 0x0308(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UUI_InputActionWidget_C*                ActionClose;                                       // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_InputActionWidget_C*                ActionSelect;                                      // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_SocialsAndCommunity_Tile_C*         Tile_Discord;                                      // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_SocialsAndCommunity_Tile_C*         Tile_Facebook;                                     // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_SocialsAndCommunity_Tile_C*         Tile_Forums;                                       // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_SocialsAndCommunity_Tile_C*         Tile_Instagram;                                    // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_SocialsAndCommunity_Tile_C*         Tile_Reddit;                                       // 0x0340(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_SocialsAndCommunity_Tile_C*         Tile_Threads;                                      // 0x0348(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_SocialsAndCommunity_Tile_C*         Tile_TikTok;                                       // 0x0350(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_SocialsAndCommunity_Tile_C*         Tile_Twitch;                                       // 0x0358(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_SocialsAndCommunity_Tile_C*         Tile_X;                                            // 0x0360(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_SocialsAndCommunity_Tile_C*         Tile_YouTube;                                      // 0x0368(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_UI_SocialsAndCommunity(int32 EntryPoint);
	void BndEvt__UI_SocialsAndCommunity_ActionClose_1_K2Node_ComponentBoundEvent_2_OnActionPressedEvent__DelegateSignature();
	void BndEvt__UI_SocialsAndCommunity_ActionClose_K2Node_ComponentBoundEvent_1_OnActionPressedEvent__DelegateSignature();
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_SocialsAndCommunity_C">();
	}
	static class UUI_SocialsAndCommunity_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_SocialsAndCommunity_C>();
	}
};
static_assert(alignof(UUI_SocialsAndCommunity_C) == 0x000008, "Wrong alignment on UUI_SocialsAndCommunity_C");
static_assert(sizeof(UUI_SocialsAndCommunity_C) == 0x000370, "Wrong size on UUI_SocialsAndCommunity_C");
static_assert(offsetof(UUI_SocialsAndCommunity_C, UberGraphFrame_UI_SocialsAndCommunity_C) == 0x000308, "Member 'UUI_SocialsAndCommunity_C::UberGraphFrame_UI_SocialsAndCommunity_C' has a wrong offset!");
static_assert(offsetof(UUI_SocialsAndCommunity_C, ActionClose) == 0x000310, "Member 'UUI_SocialsAndCommunity_C::ActionClose' has a wrong offset!");
static_assert(offsetof(UUI_SocialsAndCommunity_C, ActionSelect) == 0x000318, "Member 'UUI_SocialsAndCommunity_C::ActionSelect' has a wrong offset!");
static_assert(offsetof(UUI_SocialsAndCommunity_C, Tile_Discord) == 0x000320, "Member 'UUI_SocialsAndCommunity_C::Tile_Discord' has a wrong offset!");
static_assert(offsetof(UUI_SocialsAndCommunity_C, Tile_Facebook) == 0x000328, "Member 'UUI_SocialsAndCommunity_C::Tile_Facebook' has a wrong offset!");
static_assert(offsetof(UUI_SocialsAndCommunity_C, Tile_Forums) == 0x000330, "Member 'UUI_SocialsAndCommunity_C::Tile_Forums' has a wrong offset!");
static_assert(offsetof(UUI_SocialsAndCommunity_C, Tile_Instagram) == 0x000338, "Member 'UUI_SocialsAndCommunity_C::Tile_Instagram' has a wrong offset!");
static_assert(offsetof(UUI_SocialsAndCommunity_C, Tile_Reddit) == 0x000340, "Member 'UUI_SocialsAndCommunity_C::Tile_Reddit' has a wrong offset!");
static_assert(offsetof(UUI_SocialsAndCommunity_C, Tile_Threads) == 0x000348, "Member 'UUI_SocialsAndCommunity_C::Tile_Threads' has a wrong offset!");
static_assert(offsetof(UUI_SocialsAndCommunity_C, Tile_TikTok) == 0x000350, "Member 'UUI_SocialsAndCommunity_C::Tile_TikTok' has a wrong offset!");
static_assert(offsetof(UUI_SocialsAndCommunity_C, Tile_Twitch) == 0x000358, "Member 'UUI_SocialsAndCommunity_C::Tile_Twitch' has a wrong offset!");
static_assert(offsetof(UUI_SocialsAndCommunity_C, Tile_X) == 0x000360, "Member 'UUI_SocialsAndCommunity_C::Tile_X' has a wrong offset!");
static_assert(offsetof(UUI_SocialsAndCommunity_C, Tile_YouTube) == 0x000368, "Member 'UUI_SocialsAndCommunity_C::Tile_YouTube' has a wrong offset!");

}

