#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_TextNotification

#include "Basic.hpp"

#include "Flame_structs.hpp"
#include "Flame_classes.hpp"
#include "Engine_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_TextNotification.UI_TextNotification_C
// 0x0028 (0x0308 - 0x02E0)
class UUI_TextNotification_C final : public UTextNotification
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02E0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       FadeIn;                                            // 0x02E8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       FadeOut;                                           // 0x02F0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Background;                                        // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Icon;                                              // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_UI_TextNotification(int32 EntryPoint);
	void OnHide();
	void OnShow();
	void OnContentChanged();
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void UpdateVisual();

	class FString ToString() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_TextNotification_C">();
	}
	static class UUI_TextNotification_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_TextNotification_C>();
	}
};
static_assert(alignof(UUI_TextNotification_C) == 0x000008, "Wrong alignment on UUI_TextNotification_C");
static_assert(sizeof(UUI_TextNotification_C) == 0x000308, "Wrong size on UUI_TextNotification_C");
static_assert(offsetof(UUI_TextNotification_C, UberGraphFrame) == 0x0002E0, "Member 'UUI_TextNotification_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_TextNotification_C, FadeIn) == 0x0002E8, "Member 'UUI_TextNotification_C::FadeIn' has a wrong offset!");
static_assert(offsetof(UUI_TextNotification_C, FadeOut) == 0x0002F0, "Member 'UUI_TextNotification_C::FadeOut' has a wrong offset!");
static_assert(offsetof(UUI_TextNotification_C, Background) == 0x0002F8, "Member 'UUI_TextNotification_C::Background' has a wrong offset!");
static_assert(offsetof(UUI_TextNotification_C, Icon) == 0x000300, "Member 'UUI_TextNotification_C::Icon' has a wrong offset!");

}

