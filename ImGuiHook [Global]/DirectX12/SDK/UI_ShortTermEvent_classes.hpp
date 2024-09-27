#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_ShortTermEvent

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UI_ModalWidget_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_ShortTermEvent.UI_ShortTermEvent_C
// 0x0138 (0x0440 - 0x0308)
class UUI_ShortTermEvent_C final : public UUI_ModalWidget_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_UI_ShortTermEvent_C;                // 0x0308(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Background;                                        // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBackgroundBlur*                        BackgroundBlur_0;                                  // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           ContentPanel;                                      // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         DateBox;                                           // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFlameTextBlock*                        FirstDate;                                         // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFlameTextBlock*                        FirstOrdinal;                                      // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_InputActionWidget_C*                GotIt;                                             // 0x0340(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFlameTextBlock*                        Month01;                                           // 0x0348(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFlameTextBlock*                        Month02;                                           // 0x0350(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               OverlayPhotoContent;                               // 0x0358(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFlameTextBlock*                        SeasonDescription;                                 // 0x0360(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 SeasonImageTexture;                                // 0x0368(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFlameTextBlock*                        SeasonTitle;                                       // 0x0370(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFlameTextBlock*                        SecondDate;                                        // 0x0378(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFlameTextBlock*                        SecondOrdinal;                                     // 0x0380(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VerticalBox_Texts;                                 // 0x0388(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VerticalBoxSeasonInfo;                             // 0x0390(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   EventName;                                         // 0x0398(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   EventText;                                         // 0x03B0(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UTexture*                               ImageTexture;                                      // 0x03C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   DateStartNumber;                                   // 0x03D0(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   DateStartMonth;                                    // 0x03E8(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   DateEndNumber;                                     // 0x0400(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   DateEndMonth;                                      // 0x0418(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UMaterialInstanceDynamic*               DynamicBackground;                                 // 0x0430(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ShowDate;                                          // 0x0438(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_UI_ShortTermEvent(int32 EntryPoint);
	void BndEvt__ActionClose_K2Node_ComponentBoundEvent_1_OnActionHoldEvent__DelegateSignature();
	void Init();
	void OnTweenStart_62A01798449CA71DC5EBE2A482DF5189(class UTweenFloat* Tween);
	void OnTweenUpdate_62A01798449CA71DC5EBE2A482DF5189(class UTweenFloat* Tween);
	void OnTweenEnd_62A01798449CA71DC5EBE2A482DF5189(class UTweenFloat* Tween);
	struct FSlateBrush Get_SeasonImageTexture_Brush_0();
	void InitTexts();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_ShortTermEvent_C">();
	}
	static class UUI_ShortTermEvent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_ShortTermEvent_C>();
	}
};
static_assert(alignof(UUI_ShortTermEvent_C) == 0x000008, "Wrong alignment on UUI_ShortTermEvent_C");
static_assert(sizeof(UUI_ShortTermEvent_C) == 0x000440, "Wrong size on UUI_ShortTermEvent_C");
static_assert(offsetof(UUI_ShortTermEvent_C, UberGraphFrame_UI_ShortTermEvent_C) == 0x000308, "Member 'UUI_ShortTermEvent_C::UberGraphFrame_UI_ShortTermEvent_C' has a wrong offset!");
static_assert(offsetof(UUI_ShortTermEvent_C, Background) == 0x000310, "Member 'UUI_ShortTermEvent_C::Background' has a wrong offset!");
static_assert(offsetof(UUI_ShortTermEvent_C, BackgroundBlur_0) == 0x000318, "Member 'UUI_ShortTermEvent_C::BackgroundBlur_0' has a wrong offset!");
static_assert(offsetof(UUI_ShortTermEvent_C, ContentPanel) == 0x000320, "Member 'UUI_ShortTermEvent_C::ContentPanel' has a wrong offset!");
static_assert(offsetof(UUI_ShortTermEvent_C, DateBox) == 0x000328, "Member 'UUI_ShortTermEvent_C::DateBox' has a wrong offset!");
static_assert(offsetof(UUI_ShortTermEvent_C, FirstDate) == 0x000330, "Member 'UUI_ShortTermEvent_C::FirstDate' has a wrong offset!");
static_assert(offsetof(UUI_ShortTermEvent_C, FirstOrdinal) == 0x000338, "Member 'UUI_ShortTermEvent_C::FirstOrdinal' has a wrong offset!");
static_assert(offsetof(UUI_ShortTermEvent_C, GotIt) == 0x000340, "Member 'UUI_ShortTermEvent_C::GotIt' has a wrong offset!");
static_assert(offsetof(UUI_ShortTermEvent_C, Month01) == 0x000348, "Member 'UUI_ShortTermEvent_C::Month01' has a wrong offset!");
static_assert(offsetof(UUI_ShortTermEvent_C, Month02) == 0x000350, "Member 'UUI_ShortTermEvent_C::Month02' has a wrong offset!");
static_assert(offsetof(UUI_ShortTermEvent_C, OverlayPhotoContent) == 0x000358, "Member 'UUI_ShortTermEvent_C::OverlayPhotoContent' has a wrong offset!");
static_assert(offsetof(UUI_ShortTermEvent_C, SeasonDescription) == 0x000360, "Member 'UUI_ShortTermEvent_C::SeasonDescription' has a wrong offset!");
static_assert(offsetof(UUI_ShortTermEvent_C, SeasonImageTexture) == 0x000368, "Member 'UUI_ShortTermEvent_C::SeasonImageTexture' has a wrong offset!");
static_assert(offsetof(UUI_ShortTermEvent_C, SeasonTitle) == 0x000370, "Member 'UUI_ShortTermEvent_C::SeasonTitle' has a wrong offset!");
static_assert(offsetof(UUI_ShortTermEvent_C, SecondDate) == 0x000378, "Member 'UUI_ShortTermEvent_C::SecondDate' has a wrong offset!");
static_assert(offsetof(UUI_ShortTermEvent_C, SecondOrdinal) == 0x000380, "Member 'UUI_ShortTermEvent_C::SecondOrdinal' has a wrong offset!");
static_assert(offsetof(UUI_ShortTermEvent_C, VerticalBox_Texts) == 0x000388, "Member 'UUI_ShortTermEvent_C::VerticalBox_Texts' has a wrong offset!");
static_assert(offsetof(UUI_ShortTermEvent_C, VerticalBoxSeasonInfo) == 0x000390, "Member 'UUI_ShortTermEvent_C::VerticalBoxSeasonInfo' has a wrong offset!");
static_assert(offsetof(UUI_ShortTermEvent_C, EventName) == 0x000398, "Member 'UUI_ShortTermEvent_C::EventName' has a wrong offset!");
static_assert(offsetof(UUI_ShortTermEvent_C, EventText) == 0x0003B0, "Member 'UUI_ShortTermEvent_C::EventText' has a wrong offset!");
static_assert(offsetof(UUI_ShortTermEvent_C, ImageTexture) == 0x0003C8, "Member 'UUI_ShortTermEvent_C::ImageTexture' has a wrong offset!");
static_assert(offsetof(UUI_ShortTermEvent_C, DateStartNumber) == 0x0003D0, "Member 'UUI_ShortTermEvent_C::DateStartNumber' has a wrong offset!");
static_assert(offsetof(UUI_ShortTermEvent_C, DateStartMonth) == 0x0003E8, "Member 'UUI_ShortTermEvent_C::DateStartMonth' has a wrong offset!");
static_assert(offsetof(UUI_ShortTermEvent_C, DateEndNumber) == 0x000400, "Member 'UUI_ShortTermEvent_C::DateEndNumber' has a wrong offset!");
static_assert(offsetof(UUI_ShortTermEvent_C, DateEndMonth) == 0x000418, "Member 'UUI_ShortTermEvent_C::DateEndMonth' has a wrong offset!");
static_assert(offsetof(UUI_ShortTermEvent_C, DynamicBackground) == 0x000430, "Member 'UUI_ShortTermEvent_C::DynamicBackground' has a wrong offset!");
static_assert(offsetof(UUI_ShortTermEvent_C, ShowDate) == 0x000438, "Member 'UUI_ShortTermEvent_C::ShowDate' has a wrong offset!");

}

