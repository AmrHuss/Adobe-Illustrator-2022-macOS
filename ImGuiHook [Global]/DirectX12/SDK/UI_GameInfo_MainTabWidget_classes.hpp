#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_GameInfo_MainTabWidget

#include "Basic.hpp"

#include "Flame_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_GameInfo_MainTabWidget.UI_GameInfo_MainTabWidget_C
// 0x0038 (0x0340 - 0x0308)
class UUI_GameInfo_MainTabWidget_C final : public UTabWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0308(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UFlameButton*                           TabButton;                                         // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFlameTextBlock*                        TabLabel;                                          // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   TabName;                                           // 0x0320(0x0018)(Edit, BlueprintVisible, BlueprintReadOnly, ExposeOnSpawn)
	class UUserWidget*                            TabContent;                                        // 0x0338(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_UI_GameInfo_MainTabWidget(int32 EntryPoint);
	void BndEvt__UI_GameInfo_MainTabWidget_FlameButton_74_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(class UButton* Sender);
	void BndEvt__UI_GameInfo_MainTabWidget_FlameButton_74_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(class UButton* Sender);
	void OnDeselect();
	void OnSelect();
	void PreConstruct(bool IsDesignTime);
	void Construct();

	class UUserWidget* GetTabContent() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_GameInfo_MainTabWidget_C">();
	}
	static class UUI_GameInfo_MainTabWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_GameInfo_MainTabWidget_C>();
	}
};
static_assert(alignof(UUI_GameInfo_MainTabWidget_C) == 0x000008, "Wrong alignment on UUI_GameInfo_MainTabWidget_C");
static_assert(sizeof(UUI_GameInfo_MainTabWidget_C) == 0x000340, "Wrong size on UUI_GameInfo_MainTabWidget_C");
static_assert(offsetof(UUI_GameInfo_MainTabWidget_C, UberGraphFrame) == 0x000308, "Member 'UUI_GameInfo_MainTabWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_GameInfo_MainTabWidget_C, TabButton) == 0x000310, "Member 'UUI_GameInfo_MainTabWidget_C::TabButton' has a wrong offset!");
static_assert(offsetof(UUI_GameInfo_MainTabWidget_C, TabLabel) == 0x000318, "Member 'UUI_GameInfo_MainTabWidget_C::TabLabel' has a wrong offset!");
static_assert(offsetof(UUI_GameInfo_MainTabWidget_C, TabName) == 0x000320, "Member 'UUI_GameInfo_MainTabWidget_C::TabName' has a wrong offset!");
static_assert(offsetof(UUI_GameInfo_MainTabWidget_C, TabContent) == 0x000338, "Member 'UUI_GameInfo_MainTabWidget_C::TabContent' has a wrong offset!");

}

