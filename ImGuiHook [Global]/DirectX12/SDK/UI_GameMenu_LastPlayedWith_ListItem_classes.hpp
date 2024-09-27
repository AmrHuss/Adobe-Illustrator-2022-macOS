#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_GameMenu_LastPlayedWith_ListItem

#include "Basic.hpp"

#include "Flame_classes.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "FlameUI_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_GameMenu_LastPlayedWith_ListItem.UI_GameMenu_LastPlayedWith_ListItem_C
// 0x00B0 (0x0368 - 0x02B8)
class UUI_GameMenu_LastPlayedWith_ListItem_C final : public UFlameWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02B8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 BackgroundImage;                                   // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFlameButton*                           Button;                                            // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFlameTextBlock*                        FlameTextBlock_PlayerName;                         // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Icon_Blocked;                                      // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Icon_Reported;                                     // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_PlayerNickname_C*                   UI_PlayerNickname_1;                               // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_GameMenu_LastPlayedWith_C*          Last_played_with_menu;                             // 0x02F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 Related_player_name;                               // 0x02F8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class FString                                 Last_played_tracking_ID;                           // 0x0308(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                       Player_unique_ID;                                  // 0x0318(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FLinearColor                           BG_Focused_Color;                                  // 0x0340(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           BG_Normal_Color;                                   // 0x0350(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFlamePlatform                                Target_Player_platform;                            // 0x0360(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_UI_GameMenu_LastPlayedWith_ListItem(int32 EntryPoint);
	void OnBlocklistUpdated(const class FString& Reason_For_Update);
	void Destruct();
	void OnPlayerReportLogged(const class FString& Logged_Player_Tracking_ID);
	void BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature(class UButton* Sender);
	void BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonFocusEvent__DelegateSignature(class UButton* Sender);
	void BndEvt__UI_GameMenu_LastPlayedWith_ListItem_Button_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature(class UButton* Sender);
	void BndEvt__UI_GameMenu_LastPlayedWith_ListItem_Button_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature(class UButton* Sender);
	void BndEvt__Button_K2Node_ComponentBoundEvent_2_OnButtonFocusEvent__DelegateSignature(class UButton* Sender);
	void Initialize_last_played_button(const class FString& Player_name, const class FString& Last_played_tracking_ID_0, class UUI_GameMenu_LastPlayedWith_C* Last_played_with_menu_0, const struct FUniqueNetIdRepl& Player_unique_ID_0, EFlamePlatform Target_Player_platform_0);
	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);
	void Set_Player_Blocked(bool Player_Blocked);
	void Set_Player_Reported(bool Player_Reported);
	void OnRep_OnItemFocused();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_GameMenu_LastPlayedWith_ListItem_C">();
	}
	static class UUI_GameMenu_LastPlayedWith_ListItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_GameMenu_LastPlayedWith_ListItem_C>();
	}
};
static_assert(alignof(UUI_GameMenu_LastPlayedWith_ListItem_C) == 0x000008, "Wrong alignment on UUI_GameMenu_LastPlayedWith_ListItem_C");
static_assert(sizeof(UUI_GameMenu_LastPlayedWith_ListItem_C) == 0x000368, "Wrong size on UUI_GameMenu_LastPlayedWith_ListItem_C");
static_assert(offsetof(UUI_GameMenu_LastPlayedWith_ListItem_C, UberGraphFrame) == 0x0002B8, "Member 'UUI_GameMenu_LastPlayedWith_ListItem_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_GameMenu_LastPlayedWith_ListItem_C, BackgroundImage) == 0x0002C0, "Member 'UUI_GameMenu_LastPlayedWith_ListItem_C::BackgroundImage' has a wrong offset!");
static_assert(offsetof(UUI_GameMenu_LastPlayedWith_ListItem_C, Button) == 0x0002C8, "Member 'UUI_GameMenu_LastPlayedWith_ListItem_C::Button' has a wrong offset!");
static_assert(offsetof(UUI_GameMenu_LastPlayedWith_ListItem_C, FlameTextBlock_PlayerName) == 0x0002D0, "Member 'UUI_GameMenu_LastPlayedWith_ListItem_C::FlameTextBlock_PlayerName' has a wrong offset!");
static_assert(offsetof(UUI_GameMenu_LastPlayedWith_ListItem_C, Icon_Blocked) == 0x0002D8, "Member 'UUI_GameMenu_LastPlayedWith_ListItem_C::Icon_Blocked' has a wrong offset!");
static_assert(offsetof(UUI_GameMenu_LastPlayedWith_ListItem_C, Icon_Reported) == 0x0002E0, "Member 'UUI_GameMenu_LastPlayedWith_ListItem_C::Icon_Reported' has a wrong offset!");
static_assert(offsetof(UUI_GameMenu_LastPlayedWith_ListItem_C, UI_PlayerNickname_1) == 0x0002E8, "Member 'UUI_GameMenu_LastPlayedWith_ListItem_C::UI_PlayerNickname_1' has a wrong offset!");
static_assert(offsetof(UUI_GameMenu_LastPlayedWith_ListItem_C, Last_played_with_menu) == 0x0002F0, "Member 'UUI_GameMenu_LastPlayedWith_ListItem_C::Last_played_with_menu' has a wrong offset!");
static_assert(offsetof(UUI_GameMenu_LastPlayedWith_ListItem_C, Related_player_name) == 0x0002F8, "Member 'UUI_GameMenu_LastPlayedWith_ListItem_C::Related_player_name' has a wrong offset!");
static_assert(offsetof(UUI_GameMenu_LastPlayedWith_ListItem_C, Last_played_tracking_ID) == 0x000308, "Member 'UUI_GameMenu_LastPlayedWith_ListItem_C::Last_played_tracking_ID' has a wrong offset!");
static_assert(offsetof(UUI_GameMenu_LastPlayedWith_ListItem_C, Player_unique_ID) == 0x000318, "Member 'UUI_GameMenu_LastPlayedWith_ListItem_C::Player_unique_ID' has a wrong offset!");
static_assert(offsetof(UUI_GameMenu_LastPlayedWith_ListItem_C, BG_Focused_Color) == 0x000340, "Member 'UUI_GameMenu_LastPlayedWith_ListItem_C::BG_Focused_Color' has a wrong offset!");
static_assert(offsetof(UUI_GameMenu_LastPlayedWith_ListItem_C, BG_Normal_Color) == 0x000350, "Member 'UUI_GameMenu_LastPlayedWith_ListItem_C::BG_Normal_Color' has a wrong offset!");
static_assert(offsetof(UUI_GameMenu_LastPlayedWith_ListItem_C, Target_Player_platform) == 0x000360, "Member 'UUI_GameMenu_LastPlayedWith_ListItem_C::Target_Player_platform' has a wrong offset!");

}

