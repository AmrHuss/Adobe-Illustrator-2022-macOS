#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_PlayerStartedMatchmakingNotification

#include "Basic.hpp"

#include "Flame_classes.hpp"
#include "Engine_structs.hpp"
#include "FlameUI_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_PlayerStartedMatchmakingNotification.UI_PlayerStartedMatchmakingNotification_C
// 0x00D8 (0x03D0 - 0x02F8)
class UUI_PlayerStartedMatchmakingNotification_C final : public UPlayerNotification
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02F8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       FadeIn;                                            // 0x0300(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       FadeOut;                                           // 0x0308(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Background;                                        // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPlatformTextBlock*                     Message;                                           // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_PlayerNickname_C*                   PlayerNickname;                                    // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_ProfilePicture_C*                   ProfilePicture;                                    // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TMap<EFlamePlatform, class FText>             OtherPlayerMessage;                                // 0x0330(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<EFlamePlatform, class FText>             LocalPlayerMessage;                                // 0x0380(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_UI_PlayerStartedMatchmakingNotification(int32 EntryPoint);
	void OnPlayerChanged();
	void OnShow();
	void OnHide();

	class FString ToString() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_PlayerStartedMatchmakingNotification_C">();
	}
	static class UUI_PlayerStartedMatchmakingNotification_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_PlayerStartedMatchmakingNotification_C>();
	}
};
static_assert(alignof(UUI_PlayerStartedMatchmakingNotification_C) == 0x000008, "Wrong alignment on UUI_PlayerStartedMatchmakingNotification_C");
static_assert(sizeof(UUI_PlayerStartedMatchmakingNotification_C) == 0x0003D0, "Wrong size on UUI_PlayerStartedMatchmakingNotification_C");
static_assert(offsetof(UUI_PlayerStartedMatchmakingNotification_C, UberGraphFrame) == 0x0002F8, "Member 'UUI_PlayerStartedMatchmakingNotification_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_PlayerStartedMatchmakingNotification_C, FadeIn) == 0x000300, "Member 'UUI_PlayerStartedMatchmakingNotification_C::FadeIn' has a wrong offset!");
static_assert(offsetof(UUI_PlayerStartedMatchmakingNotification_C, FadeOut) == 0x000308, "Member 'UUI_PlayerStartedMatchmakingNotification_C::FadeOut' has a wrong offset!");
static_assert(offsetof(UUI_PlayerStartedMatchmakingNotification_C, Background) == 0x000310, "Member 'UUI_PlayerStartedMatchmakingNotification_C::Background' has a wrong offset!");
static_assert(offsetof(UUI_PlayerStartedMatchmakingNotification_C, Message) == 0x000318, "Member 'UUI_PlayerStartedMatchmakingNotification_C::Message' has a wrong offset!");
static_assert(offsetof(UUI_PlayerStartedMatchmakingNotification_C, PlayerNickname) == 0x000320, "Member 'UUI_PlayerStartedMatchmakingNotification_C::PlayerNickname' has a wrong offset!");
static_assert(offsetof(UUI_PlayerStartedMatchmakingNotification_C, ProfilePicture) == 0x000328, "Member 'UUI_PlayerStartedMatchmakingNotification_C::ProfilePicture' has a wrong offset!");
static_assert(offsetof(UUI_PlayerStartedMatchmakingNotification_C, OtherPlayerMessage) == 0x000330, "Member 'UUI_PlayerStartedMatchmakingNotification_C::OtherPlayerMessage' has a wrong offset!");
static_assert(offsetof(UUI_PlayerStartedMatchmakingNotification_C, LocalPlayerMessage) == 0x000380, "Member 'UUI_PlayerStartedMatchmakingNotification_C::LocalPlayerMessage' has a wrong offset!");

}

