#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Gestures

#include "Basic.hpp"

#include "Flame_structs.hpp"
#include "Flame_classes.hpp"
#include "Engine_structs.hpp"
#include "E_SellingPointStatus_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_Gestures.UI_Gestures_C
// 0x0140 (0x0458 - 0x0318)
class UUI_Gestures_C final : public UUpdateableWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0318(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UUI_InputActionWidget_C*                ActionClose;                                       // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_InputActionWidget_C*                ActionMoreInfo;                                    // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFlameTextBlock*                        ActionRotateText;                                  // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_InputActionWidget_C*                ActionSelect;                                      // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           GestureList;                                       // 0x0340(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 GestureListTitleIcon;                              // 0x0348(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                             GestureScrollBox;                                  // 0x0350(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_GestureGridSlot_C*                  GestureSlotBottom;                                 // 0x0358(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_GestureGridSlot_C*                  GestureSlotBottomLeft;                             // 0x0360(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_GestureGridSlot_C*                  GestureSlotBottomRight;                            // 0x0368(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_GestureGridSlot_C*                  GestureSlotLeft;                                   // 0x0370(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_GestureGridSlot_C*                  GestureSlotRight;                                  // 0x0378(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_GestureGridSlot_C*                  GestureSlotTop;                                    // 0x0380(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_GestureGridSlot_C*                  GestureSlotTopLeft;                                // 0x0388(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_GestureGridSlot_C*                  GestureSlotTopRight;                               // 0x0390(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           GestureWheel;                                      // 0x0398(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image;                                             // 0x03A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_87;                                          // 0x03A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        MenuWidgetSwitcher;                                // 0x03B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               RotateActionOverlay;                               // 0x03B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 RotateArrowL;                                      // 0x03C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 RotateArrowR;                                      // 0x03C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_BackButtonPC_C*                     UI_BackButtonPC;                                   // 0x03D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_InputActionWidget_C*                UI_GamepadActionRotate;                            // 0x03D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_SellingPointButton_C*               UI_SellingPointButton;                             // 0x03E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URichTextBlock*                         UseGesturesText;                                   // 0x03E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ABP_ShelterUI_C*                        ShelterUI;                                         // 0x03F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                PreviouslyFocusedSlot;                             // 0x03F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                LastFocusedNotUserWidget;                          // 0x0400(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsInSubMenu;                                       // 0x0408(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_409[0x7];                                      // 0x0409(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 LastFocusedSlot;                                   // 0x0410(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 ForcedFocusedVariant;                              // 0x0418(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 FocusedVariant;                                    // 0x0420(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UListButtonWidget*                      FocusedListButton;                                 // 0x0428(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 FocusedSlot;                                       // 0x0430(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUI_GestureListItem_C*                  LastGestureListFocus;                              // 0x0438(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsPanning;                                         // 0x0440(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          ShouldReturnFocus;                                 // 0x0441(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_442[0x6];                                      // 0x0442(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CurrentFocusedWidget;                              // 0x0448(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsOneClick;                                        // 0x0450(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_UI_Gestures(int32 EntryPoint);
	void BndEvt__UI_Gestures_UI_BackButtonPC_K2Node_ComponentBoundEvent_2_OnBackButtonClicked__DelegateSignature();
	void PCControlsChange();
	void ChangeIcon(int32 PlayerIndex, EInputMode InputMode);
	void OnFocusedReceived(class UButton* Sender);
	void HandleFocusReturn();
	void SetReturnFocus(class UFlameWidget* FlameWidget);
	void OnResetToDefaultState();
	void StopPanning();
	void StartPanning();
	void HandleMouseInput();
	void BndEvt__UI_Gestures_ActionSelect_K2Node_ComponentBoundEvent_3_OnClickedEvent__DelegateSignature();
	void BndEvt__ActionClose_K2Node_ComponentBoundEvent_2_OnClickedEvent__DelegateSignature();
	void BndEvt__ActionMoreInfo_K2Node_ComponentBoundEvent_2_OnActionReleasedEvent__DelegateSignature();
	void BndEvt__UI_SellingPointButton_K2Node_ComponentBoundEvent_0_OnBoughtItemShowcaseClosed__DelegateSignature();
	void OnPurchaseDone(EGameStorePurchaseType PurchaseType, const struct FUniqueNetIdRepl& InUserId, const int32 PurchaseRequestId, const struct FGameStoreProductId& RequestedProductId, const struct FCloudRequestResult& Result, const struct FGameStorePurchaseResult& PurchaseResult, const bool PurchaseListRefreshed);
	void OnCustomizationChanged(class AHumanCharacter* Sender, class UInventoryCustomizationComponent* Inventory);
	void OnGestureSlotClicked(class UButton* Sender);
	void OnGestureSlotFocused(class UClass* Slot_0);
	void PreConstruct(bool IsDesignTime);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Construct();
	void OnCancelPressed();
	void ListenForCancel();
	void Destruct();
	void CloseGestureSelection();
	void OpenGestureSelection(class UClass* InGestureSlot);
	void OnMainSlotFocused(class UClass* InputPin);
	void OnMainSlotClicked(class UButton* InButton);
	void FillGestureList(class UClass* InGestureSlot);
	void AddGestureToList(class APlayerController* OwningPlayer, class UClass* InGestureSlot, class UClass* InGestureClass, class UClass* InGestureVariant, class UUI_GestureListItem_C** GestureListItem);
	void UpdateTitleIcon(class UClass* InGestureSlot);
	void PreviewGesture(class UClass* GestureVariant);
	void OnListSlotFocused(class UListButtonWidget* InButton);
	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);
	void UpdateRichText();
	void UpdateBackButtons(bool IsInSubMenu_0);

	class UWidget* GetWidgetToFocus() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_Gestures_C">();
	}
	static class UUI_Gestures_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_Gestures_C>();
	}
};
static_assert(alignof(UUI_Gestures_C) == 0x000008, "Wrong alignment on UUI_Gestures_C");
static_assert(sizeof(UUI_Gestures_C) == 0x000458, "Wrong size on UUI_Gestures_C");
static_assert(offsetof(UUI_Gestures_C, UberGraphFrame) == 0x000318, "Member 'UUI_Gestures_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_Gestures_C, ActionClose) == 0x000320, "Member 'UUI_Gestures_C::ActionClose' has a wrong offset!");
static_assert(offsetof(UUI_Gestures_C, ActionMoreInfo) == 0x000328, "Member 'UUI_Gestures_C::ActionMoreInfo' has a wrong offset!");
static_assert(offsetof(UUI_Gestures_C, ActionRotateText) == 0x000330, "Member 'UUI_Gestures_C::ActionRotateText' has a wrong offset!");
static_assert(offsetof(UUI_Gestures_C, ActionSelect) == 0x000338, "Member 'UUI_Gestures_C::ActionSelect' has a wrong offset!");
static_assert(offsetof(UUI_Gestures_C, GestureList) == 0x000340, "Member 'UUI_Gestures_C::GestureList' has a wrong offset!");
static_assert(offsetof(UUI_Gestures_C, GestureListTitleIcon) == 0x000348, "Member 'UUI_Gestures_C::GestureListTitleIcon' has a wrong offset!");
static_assert(offsetof(UUI_Gestures_C, GestureScrollBox) == 0x000350, "Member 'UUI_Gestures_C::GestureScrollBox' has a wrong offset!");
static_assert(offsetof(UUI_Gestures_C, GestureSlotBottom) == 0x000358, "Member 'UUI_Gestures_C::GestureSlotBottom' has a wrong offset!");
static_assert(offsetof(UUI_Gestures_C, GestureSlotBottomLeft) == 0x000360, "Member 'UUI_Gestures_C::GestureSlotBottomLeft' has a wrong offset!");
static_assert(offsetof(UUI_Gestures_C, GestureSlotBottomRight) == 0x000368, "Member 'UUI_Gestures_C::GestureSlotBottomRight' has a wrong offset!");
static_assert(offsetof(UUI_Gestures_C, GestureSlotLeft) == 0x000370, "Member 'UUI_Gestures_C::GestureSlotLeft' has a wrong offset!");
static_assert(offsetof(UUI_Gestures_C, GestureSlotRight) == 0x000378, "Member 'UUI_Gestures_C::GestureSlotRight' has a wrong offset!");
static_assert(offsetof(UUI_Gestures_C, GestureSlotTop) == 0x000380, "Member 'UUI_Gestures_C::GestureSlotTop' has a wrong offset!");
static_assert(offsetof(UUI_Gestures_C, GestureSlotTopLeft) == 0x000388, "Member 'UUI_Gestures_C::GestureSlotTopLeft' has a wrong offset!");
static_assert(offsetof(UUI_Gestures_C, GestureSlotTopRight) == 0x000390, "Member 'UUI_Gestures_C::GestureSlotTopRight' has a wrong offset!");
static_assert(offsetof(UUI_Gestures_C, GestureWheel) == 0x000398, "Member 'UUI_Gestures_C::GestureWheel' has a wrong offset!");
static_assert(offsetof(UUI_Gestures_C, Image) == 0x0003A0, "Member 'UUI_Gestures_C::Image' has a wrong offset!");
static_assert(offsetof(UUI_Gestures_C, Image_87) == 0x0003A8, "Member 'UUI_Gestures_C::Image_87' has a wrong offset!");
static_assert(offsetof(UUI_Gestures_C, MenuWidgetSwitcher) == 0x0003B0, "Member 'UUI_Gestures_C::MenuWidgetSwitcher' has a wrong offset!");
static_assert(offsetof(UUI_Gestures_C, RotateActionOverlay) == 0x0003B8, "Member 'UUI_Gestures_C::RotateActionOverlay' has a wrong offset!");
static_assert(offsetof(UUI_Gestures_C, RotateArrowL) == 0x0003C0, "Member 'UUI_Gestures_C::RotateArrowL' has a wrong offset!");
static_assert(offsetof(UUI_Gestures_C, RotateArrowR) == 0x0003C8, "Member 'UUI_Gestures_C::RotateArrowR' has a wrong offset!");
static_assert(offsetof(UUI_Gestures_C, UI_BackButtonPC) == 0x0003D0, "Member 'UUI_Gestures_C::UI_BackButtonPC' has a wrong offset!");
static_assert(offsetof(UUI_Gestures_C, UI_GamepadActionRotate) == 0x0003D8, "Member 'UUI_Gestures_C::UI_GamepadActionRotate' has a wrong offset!");
static_assert(offsetof(UUI_Gestures_C, UI_SellingPointButton) == 0x0003E0, "Member 'UUI_Gestures_C::UI_SellingPointButton' has a wrong offset!");
static_assert(offsetof(UUI_Gestures_C, UseGesturesText) == 0x0003E8, "Member 'UUI_Gestures_C::UseGesturesText' has a wrong offset!");
static_assert(offsetof(UUI_Gestures_C, ShelterUI) == 0x0003F0, "Member 'UUI_Gestures_C::ShelterUI' has a wrong offset!");
static_assert(offsetof(UUI_Gestures_C, PreviouslyFocusedSlot) == 0x0003F8, "Member 'UUI_Gestures_C::PreviouslyFocusedSlot' has a wrong offset!");
static_assert(offsetof(UUI_Gestures_C, LastFocusedNotUserWidget) == 0x000400, "Member 'UUI_Gestures_C::LastFocusedNotUserWidget' has a wrong offset!");
static_assert(offsetof(UUI_Gestures_C, IsInSubMenu) == 0x000408, "Member 'UUI_Gestures_C::IsInSubMenu' has a wrong offset!");
static_assert(offsetof(UUI_Gestures_C, LastFocusedSlot) == 0x000410, "Member 'UUI_Gestures_C::LastFocusedSlot' has a wrong offset!");
static_assert(offsetof(UUI_Gestures_C, ForcedFocusedVariant) == 0x000418, "Member 'UUI_Gestures_C::ForcedFocusedVariant' has a wrong offset!");
static_assert(offsetof(UUI_Gestures_C, FocusedVariant) == 0x000420, "Member 'UUI_Gestures_C::FocusedVariant' has a wrong offset!");
static_assert(offsetof(UUI_Gestures_C, FocusedListButton) == 0x000428, "Member 'UUI_Gestures_C::FocusedListButton' has a wrong offset!");
static_assert(offsetof(UUI_Gestures_C, FocusedSlot) == 0x000430, "Member 'UUI_Gestures_C::FocusedSlot' has a wrong offset!");
static_assert(offsetof(UUI_Gestures_C, LastGestureListFocus) == 0x000438, "Member 'UUI_Gestures_C::LastGestureListFocus' has a wrong offset!");
static_assert(offsetof(UUI_Gestures_C, IsPanning) == 0x000440, "Member 'UUI_Gestures_C::IsPanning' has a wrong offset!");
static_assert(offsetof(UUI_Gestures_C, ShouldReturnFocus) == 0x000441, "Member 'UUI_Gestures_C::ShouldReturnFocus' has a wrong offset!");
static_assert(offsetof(UUI_Gestures_C, CurrentFocusedWidget) == 0x000448, "Member 'UUI_Gestures_C::CurrentFocusedWidget' has a wrong offset!");
static_assert(offsetof(UUI_Gestures_C, IsOneClick) == 0x000450, "Member 'UUI_Gestures_C::IsOneClick' has a wrong offset!");

}

