#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_UpgradeShelterCamera

#include "Basic.hpp"

#include "Flame_classes.hpp"
#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"
#include "FlameUI_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_UpgradeShelterCamera.UI_UpgradeShelterCamera_C
// 0x01D0 (0x04A8 - 0x02D8)
class UUI_UpgradeShelterCamera_C final : public UMenuWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02D8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       FadeIn_InputBackground;                            // 0x02E0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       FadeIn_SkipButton;                                 // 0x02E8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       FadeInOut;                                         // 0x02F0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       FadeIn_CompletedText;                              // 0x02F8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       FadeIn_Cards;                                      // 0x0300(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       UpgradesDetailFadeIn;                              // 0x0308(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       FadeIn_Card_3;                                     // 0x0310(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       FadeIn_Card_2;                                     // 0x0318(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       FadeIn_Card_1;                                     // 0x0320(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       LevelUpAnim_4;                                     // 0x0328(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       LevelUpAnim_3;                                     // 0x0330(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       LevelUpAnim_2;                                     // 0x0338(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       FadeIn;                                            // 0x0340(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBackgroundBlur*                        Blur_DetailsTabBackground;                         // 0x0348(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Canvas_ShelterLevelCompleted;                      // 0x0350(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Canvas_UpgradeDetails;                             // 0x0358(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_120;                                         // 0x0360(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Background;                                  // 0x0368(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Background_1;                                // 0x0370(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Background_2;                                // 0x0378(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Background_01;                               // 0x0380(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_CapturedTexture_01;                          // 0x0388(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_CapturedTexture_02;                          // 0x0390(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_CapturedTexture_03;                          // 0x0398(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_InputActionWidget_C*                Input_Cancel;                                      // 0x03A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_InputActionWidget_C*                Input_DetailContinue;                              // 0x03A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_InputActionWidget_C*                Input_Skip;                                        // 0x03B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_InputActionWidget_C*                InputAction_BackPress;                             // 0x03B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_InputActionWidget_C*                InputAction_ChangeCameraFake;                      // 0x03C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_InputActionWidget_C*                InputAction_ConfirmPress;                          // 0x03C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_InputActionWidget_C*                InputAction_DetailsTabButton;                      // 0x03D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_InputActionWidget_C*                InputAction_Left;                                  // 0x03D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_InputActionWidget_C*                InputAction_Right;                                 // 0x03E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_InputActionWidget_C*                InputAction_SkipPress;                             // 0x03E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Overlay_Input;                                     // 0x03F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               PhotoBox_01;                                       // 0x03F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               PhotoBox_02;                                       // 0x0400(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               PhotoBox_03;                                       // 0x0408(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                             ScrollBox_Details;                                 // 0x0410(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         NewLevel;                                          // 0x0418(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_41C[0x4];                                      // 0x041C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 PrevViewTarget;                                    // 0x0420(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<int32, class UTextureRenderTarget2D*>    Index_To_TextureTargets;                           // 0x0428(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         CurrentlyPreviewedChangeIndex;                     // 0x0478(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         LastPreviewChangeTime;                             // 0x047C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         PreviewChangeCooldown;                             // 0x0480(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         UpgradeSequenceProgress;                           // 0x0484(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnDetailsTabClosed;                                // 0x0488(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          CanSkipCinematic;                                  // 0x0498(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_499[0x3];                                      // 0x0499(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         UI_Construct_Time;                                 // 0x049C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SkipBlockTime;                                     // 0x04A0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void OnDetailsTabClosed__DelegateSignature();
	void ExecuteUbergraph_UI_UpgradeShelterCamera(int32 EntryPoint);
	void FrameDelayedSequenceEnded();
	void BndEvt__UI_UpgradeShelterCamera_InputAction_ChangeCameraFake_K2Node_ComponentBoundEvent_7_OnClickedEvent__DelegateSignature();
	void PageLeft();
	void PageRight();
	void BndEvt__InputAction_ConfirmPress_K2Node_ComponentBoundEvent_10_OnActionPressedEvent__DelegateSignature();
	void BndEvt__InputAction_BackPress_K2Node_ComponentBoundEvent_9_OnActionPressedEvent__DelegateSignature();
	void BndEvt__InputAction_SkipPress_K2Node_ComponentBoundEvent_8_OnActionPressedEvent__DelegateSignature();
	void PlayFadeInOut();
	void LevelSequenceEnded_Event_0();
	void PlayCardsFadeInAnim();
	void NextUI_Step();
	void ShowNewShelterLevelText();
	void BndEvt__Input_Skip_K2Node_ComponentBoundEvent_4_OnActionHoldEvent__DelegateSignature();
	void BndEvt__InputAction_ChangeCameraFake_1_K2Node_ComponentBoundEvent_6_OnActionPressedEvent__DelegateSignature();
	void BndEvt__Input_DetailContinue_K2Node_ComponentBoundEvent_5_OnActionPressedEvent__DelegateSignature();
	void EnterDetailsTabPhase();
	void EnterLastPhase();
	void SetDetailsTabVisibility(bool Visibility_0);
	void SetCharacterVisibility(bool bVisible);
	void OnInfoDetailChangeRequested();
	void SetCaptureVisibility_2(int32 CaptureIndex, bool Visibility_0);
	void BndEvt__UI_GamepadActionWidget_K2Node_ComponentBoundEvent_2_OnActionHoldEvent__DelegateSignature();
	void BndEvt__InputAction_Right_K2Node_ComponentBoundEvent_1_OnActionPressedEvent__DelegateSignature();
	void BndEvt__InputAction_ChangeCamera_K2Node_ComponentBoundEvent_0_OnActionPressedEvent__DelegateSignature();
	void SetCaptureVisibility(int32 CaptureIndex, bool bVisibility);
	void AddCapturedScreen(class UTextureRenderTarget2D* TextureRender, int32 Index_0);
	void InitializeUpgradeUI();
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void SetShelterUIsVisibility(ESlateVisibility InputPin);
	void DestroyCurrentLevelSequencer();
	void SetFocusToCapture(int32 Index_0);
	class UWidget* Navigate(EUINavigation Navigation_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_UpgradeShelterCamera_C">();
	}
	static class UUI_UpgradeShelterCamera_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_UpgradeShelterCamera_C>();
	}
};
static_assert(alignof(UUI_UpgradeShelterCamera_C) == 0x000008, "Wrong alignment on UUI_UpgradeShelterCamera_C");
static_assert(sizeof(UUI_UpgradeShelterCamera_C) == 0x0004A8, "Wrong size on UUI_UpgradeShelterCamera_C");
static_assert(offsetof(UUI_UpgradeShelterCamera_C, UberGraphFrame) == 0x0002D8, "Member 'UUI_UpgradeShelterCamera_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_UpgradeShelterCamera_C, FadeIn_InputBackground) == 0x0002E0, "Member 'UUI_UpgradeShelterCamera_C::FadeIn_InputBackground' has a wrong offset!");
static_assert(offsetof(UUI_UpgradeShelterCamera_C, FadeIn_SkipButton) == 0x0002E8, "Member 'UUI_UpgradeShelterCamera_C::FadeIn_SkipButton' has a wrong offset!");
static_assert(offsetof(UUI_UpgradeShelterCamera_C, FadeInOut) == 0x0002F0, "Member 'UUI_UpgradeShelterCamera_C::FadeInOut' has a wrong offset!");
static_assert(offsetof(UUI_UpgradeShelterCamera_C, FadeIn_CompletedText) == 0x0002F8, "Member 'UUI_UpgradeShelterCamera_C::FadeIn_CompletedText' has a wrong offset!");
static_assert(offsetof(UUI_UpgradeShelterCamera_C, FadeIn_Cards) == 0x000300, "Member 'UUI_UpgradeShelterCamera_C::FadeIn_Cards' has a wrong offset!");
static_assert(offsetof(UUI_UpgradeShelterCamera_C, UpgradesDetailFadeIn) == 0x000308, "Member 'UUI_UpgradeShelterCamera_C::UpgradesDetailFadeIn' has a wrong offset!");
static_assert(offsetof(UUI_UpgradeShelterCamera_C, FadeIn_Card_3) == 0x000310, "Member 'UUI_UpgradeShelterCamera_C::FadeIn_Card_3' has a wrong offset!");
static_assert(offsetof(UUI_UpgradeShelterCamera_C, FadeIn_Card_2) == 0x000318, "Member 'UUI_UpgradeShelterCamera_C::FadeIn_Card_2' has a wrong offset!");
static_assert(offsetof(UUI_UpgradeShelterCamera_C, FadeIn_Card_1) == 0x000320, "Member 'UUI_UpgradeShelterCamera_C::FadeIn_Card_1' has a wrong offset!");
static_assert(offsetof(UUI_UpgradeShelterCamera_C, LevelUpAnim_4) == 0x000328, "Member 'UUI_UpgradeShelterCamera_C::LevelUpAnim_4' has a wrong offset!");
static_assert(offsetof(UUI_UpgradeShelterCamera_C, LevelUpAnim_3) == 0x000330, "Member 'UUI_UpgradeShelterCamera_C::LevelUpAnim_3' has a wrong offset!");
static_assert(offsetof(UUI_UpgradeShelterCamera_C, LevelUpAnim_2) == 0x000338, "Member 'UUI_UpgradeShelterCamera_C::LevelUpAnim_2' has a wrong offset!");
static_assert(offsetof(UUI_UpgradeShelterCamera_C, FadeIn) == 0x000340, "Member 'UUI_UpgradeShelterCamera_C::FadeIn' has a wrong offset!");
static_assert(offsetof(UUI_UpgradeShelterCamera_C, Blur_DetailsTabBackground) == 0x000348, "Member 'UUI_UpgradeShelterCamera_C::Blur_DetailsTabBackground' has a wrong offset!");
static_assert(offsetof(UUI_UpgradeShelterCamera_C, Canvas_ShelterLevelCompleted) == 0x000350, "Member 'UUI_UpgradeShelterCamera_C::Canvas_ShelterLevelCompleted' has a wrong offset!");
static_assert(offsetof(UUI_UpgradeShelterCamera_C, Canvas_UpgradeDetails) == 0x000358, "Member 'UUI_UpgradeShelterCamera_C::Canvas_UpgradeDetails' has a wrong offset!");
static_assert(offsetof(UUI_UpgradeShelterCamera_C, Image_120) == 0x000360, "Member 'UUI_UpgradeShelterCamera_C::Image_120' has a wrong offset!");
static_assert(offsetof(UUI_UpgradeShelterCamera_C, Image_Background) == 0x000368, "Member 'UUI_UpgradeShelterCamera_C::Image_Background' has a wrong offset!");
static_assert(offsetof(UUI_UpgradeShelterCamera_C, Image_Background_1) == 0x000370, "Member 'UUI_UpgradeShelterCamera_C::Image_Background_1' has a wrong offset!");
static_assert(offsetof(UUI_UpgradeShelterCamera_C, Image_Background_2) == 0x000378, "Member 'UUI_UpgradeShelterCamera_C::Image_Background_2' has a wrong offset!");
static_assert(offsetof(UUI_UpgradeShelterCamera_C, Image_Background_01) == 0x000380, "Member 'UUI_UpgradeShelterCamera_C::Image_Background_01' has a wrong offset!");
static_assert(offsetof(UUI_UpgradeShelterCamera_C, Image_CapturedTexture_01) == 0x000388, "Member 'UUI_UpgradeShelterCamera_C::Image_CapturedTexture_01' has a wrong offset!");
static_assert(offsetof(UUI_UpgradeShelterCamera_C, Image_CapturedTexture_02) == 0x000390, "Member 'UUI_UpgradeShelterCamera_C::Image_CapturedTexture_02' has a wrong offset!");
static_assert(offsetof(UUI_UpgradeShelterCamera_C, Image_CapturedTexture_03) == 0x000398, "Member 'UUI_UpgradeShelterCamera_C::Image_CapturedTexture_03' has a wrong offset!");
static_assert(offsetof(UUI_UpgradeShelterCamera_C, Input_Cancel) == 0x0003A0, "Member 'UUI_UpgradeShelterCamera_C::Input_Cancel' has a wrong offset!");
static_assert(offsetof(UUI_UpgradeShelterCamera_C, Input_DetailContinue) == 0x0003A8, "Member 'UUI_UpgradeShelterCamera_C::Input_DetailContinue' has a wrong offset!");
static_assert(offsetof(UUI_UpgradeShelterCamera_C, Input_Skip) == 0x0003B0, "Member 'UUI_UpgradeShelterCamera_C::Input_Skip' has a wrong offset!");
static_assert(offsetof(UUI_UpgradeShelterCamera_C, InputAction_BackPress) == 0x0003B8, "Member 'UUI_UpgradeShelterCamera_C::InputAction_BackPress' has a wrong offset!");
static_assert(offsetof(UUI_UpgradeShelterCamera_C, InputAction_ChangeCameraFake) == 0x0003C0, "Member 'UUI_UpgradeShelterCamera_C::InputAction_ChangeCameraFake' has a wrong offset!");
static_assert(offsetof(UUI_UpgradeShelterCamera_C, InputAction_ConfirmPress) == 0x0003C8, "Member 'UUI_UpgradeShelterCamera_C::InputAction_ConfirmPress' has a wrong offset!");
static_assert(offsetof(UUI_UpgradeShelterCamera_C, InputAction_DetailsTabButton) == 0x0003D0, "Member 'UUI_UpgradeShelterCamera_C::InputAction_DetailsTabButton' has a wrong offset!");
static_assert(offsetof(UUI_UpgradeShelterCamera_C, InputAction_Left) == 0x0003D8, "Member 'UUI_UpgradeShelterCamera_C::InputAction_Left' has a wrong offset!");
static_assert(offsetof(UUI_UpgradeShelterCamera_C, InputAction_Right) == 0x0003E0, "Member 'UUI_UpgradeShelterCamera_C::InputAction_Right' has a wrong offset!");
static_assert(offsetof(UUI_UpgradeShelterCamera_C, InputAction_SkipPress) == 0x0003E8, "Member 'UUI_UpgradeShelterCamera_C::InputAction_SkipPress' has a wrong offset!");
static_assert(offsetof(UUI_UpgradeShelterCamera_C, Overlay_Input) == 0x0003F0, "Member 'UUI_UpgradeShelterCamera_C::Overlay_Input' has a wrong offset!");
static_assert(offsetof(UUI_UpgradeShelterCamera_C, PhotoBox_01) == 0x0003F8, "Member 'UUI_UpgradeShelterCamera_C::PhotoBox_01' has a wrong offset!");
static_assert(offsetof(UUI_UpgradeShelterCamera_C, PhotoBox_02) == 0x000400, "Member 'UUI_UpgradeShelterCamera_C::PhotoBox_02' has a wrong offset!");
static_assert(offsetof(UUI_UpgradeShelterCamera_C, PhotoBox_03) == 0x000408, "Member 'UUI_UpgradeShelterCamera_C::PhotoBox_03' has a wrong offset!");
static_assert(offsetof(UUI_UpgradeShelterCamera_C, ScrollBox_Details) == 0x000410, "Member 'UUI_UpgradeShelterCamera_C::ScrollBox_Details' has a wrong offset!");
static_assert(offsetof(UUI_UpgradeShelterCamera_C, NewLevel) == 0x000418, "Member 'UUI_UpgradeShelterCamera_C::NewLevel' has a wrong offset!");
static_assert(offsetof(UUI_UpgradeShelterCamera_C, PrevViewTarget) == 0x000420, "Member 'UUI_UpgradeShelterCamera_C::PrevViewTarget' has a wrong offset!");
static_assert(offsetof(UUI_UpgradeShelterCamera_C, Index_To_TextureTargets) == 0x000428, "Member 'UUI_UpgradeShelterCamera_C::Index_To_TextureTargets' has a wrong offset!");
static_assert(offsetof(UUI_UpgradeShelterCamera_C, CurrentlyPreviewedChangeIndex) == 0x000478, "Member 'UUI_UpgradeShelterCamera_C::CurrentlyPreviewedChangeIndex' has a wrong offset!");
static_assert(offsetof(UUI_UpgradeShelterCamera_C, LastPreviewChangeTime) == 0x00047C, "Member 'UUI_UpgradeShelterCamera_C::LastPreviewChangeTime' has a wrong offset!");
static_assert(offsetof(UUI_UpgradeShelterCamera_C, PreviewChangeCooldown) == 0x000480, "Member 'UUI_UpgradeShelterCamera_C::PreviewChangeCooldown' has a wrong offset!");
static_assert(offsetof(UUI_UpgradeShelterCamera_C, UpgradeSequenceProgress) == 0x000484, "Member 'UUI_UpgradeShelterCamera_C::UpgradeSequenceProgress' has a wrong offset!");
static_assert(offsetof(UUI_UpgradeShelterCamera_C, OnDetailsTabClosed) == 0x000488, "Member 'UUI_UpgradeShelterCamera_C::OnDetailsTabClosed' has a wrong offset!");
static_assert(offsetof(UUI_UpgradeShelterCamera_C, CanSkipCinematic) == 0x000498, "Member 'UUI_UpgradeShelterCamera_C::CanSkipCinematic' has a wrong offset!");
static_assert(offsetof(UUI_UpgradeShelterCamera_C, UI_Construct_Time) == 0x00049C, "Member 'UUI_UpgradeShelterCamera_C::UI_Construct_Time' has a wrong offset!");
static_assert(offsetof(UUI_UpgradeShelterCamera_C, SkipBlockTime) == 0x0004A0, "Member 'UUI_UpgradeShelterCamera_C::SkipBlockTime' has a wrong offset!");

}

