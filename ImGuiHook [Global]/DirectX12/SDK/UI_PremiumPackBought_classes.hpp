#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_PremiumPackBought

#include "Basic.hpp"

#include "Flame_classes.hpp"
#include "Engine_structs.hpp"
#include "F_Shop_ButtonContent_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_PremiumPackBought.UI_PremiumPackBought_C
// 0x02A0 (0x0590 - 0x02F0)
class UUI_PremiumPackBought_C final : public UModalWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02F0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       CloseAnimation;                                    // 0x02F8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       OpeningAnimation;                                  // 0x0300(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 BackgroundPremium;                                 // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           ContentPanel;                                      // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Frame;                                             // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Frame_Crowns;                                      // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Frame_Shadow;                                      // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Frame_Shadow_Crowns;                               // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_2;                                           // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_3;                                           // 0x0340(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_4;                                           // 0x0348(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_BlackBackground;                             // 0x0350(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_PackPicture;                                 // 0x0358(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_PackPicture_Crowns;                          // 0x0360(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImageFlareMiddle;                                  // 0x0368(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFlameTextBlock*                        LevelReachedHeadline;                              // 0x0370(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           LevelUp;                                           // 0x0378(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Overlay_Shadow;                                    // 0x0380(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Overlay_Shadow_Crowns;                             // 0x0388(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           OwnedOverlay;                                      // 0x0390(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_FlameMarqueeBlockText_C*            Text_HC_PackName;                                  // 0x0398(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_FlameSafezone_C*                    UI_FlameSafezone;                                  // 0x03A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FF_Shop_ButtonContent                  Product;                                           // 0x03A8(0x01B0)(Edit, BlueprintVisible, ContainsInstancedReference, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          IsHardCurrencyCard;                                // 0x0558(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_559[0x7];                                      // 0x0559(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             CelebrationAnimationClosing;                       // 0x0560(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<TSoftObjectPtr<class UTexture2D>>      FrameImages;                                       // 0x0570(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<TSoftObjectPtr<class UTexture2D>>      CrownsFrameImages;                                 // 0x0580(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void CelebrationAnimationClosing__DelegateSignature();
	void ExecuteUbergraph_UI_PremiumPackBought(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void FadeAway();
	void Construct();
	struct FSlateBrush GetPackPicture();
	struct FSlateBrush GetCrownPack_Picture();
	void SetRandomPackFrame();

	class UWidget* GetWidgetToFocus() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_PremiumPackBought_C">();
	}
	static class UUI_PremiumPackBought_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_PremiumPackBought_C>();
	}
};
static_assert(alignof(UUI_PremiumPackBought_C) == 0x000008, "Wrong alignment on UUI_PremiumPackBought_C");
static_assert(sizeof(UUI_PremiumPackBought_C) == 0x000590, "Wrong size on UUI_PremiumPackBought_C");
static_assert(offsetof(UUI_PremiumPackBought_C, UberGraphFrame) == 0x0002F0, "Member 'UUI_PremiumPackBought_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_PremiumPackBought_C, CloseAnimation) == 0x0002F8, "Member 'UUI_PremiumPackBought_C::CloseAnimation' has a wrong offset!");
static_assert(offsetof(UUI_PremiumPackBought_C, OpeningAnimation) == 0x000300, "Member 'UUI_PremiumPackBought_C::OpeningAnimation' has a wrong offset!");
static_assert(offsetof(UUI_PremiumPackBought_C, BackgroundPremium) == 0x000308, "Member 'UUI_PremiumPackBought_C::BackgroundPremium' has a wrong offset!");
static_assert(offsetof(UUI_PremiumPackBought_C, ContentPanel) == 0x000310, "Member 'UUI_PremiumPackBought_C::ContentPanel' has a wrong offset!");
static_assert(offsetof(UUI_PremiumPackBought_C, Frame) == 0x000318, "Member 'UUI_PremiumPackBought_C::Frame' has a wrong offset!");
static_assert(offsetof(UUI_PremiumPackBought_C, Frame_Crowns) == 0x000320, "Member 'UUI_PremiumPackBought_C::Frame_Crowns' has a wrong offset!");
static_assert(offsetof(UUI_PremiumPackBought_C, Frame_Shadow) == 0x000328, "Member 'UUI_PremiumPackBought_C::Frame_Shadow' has a wrong offset!");
static_assert(offsetof(UUI_PremiumPackBought_C, Frame_Shadow_Crowns) == 0x000330, "Member 'UUI_PremiumPackBought_C::Frame_Shadow_Crowns' has a wrong offset!");
static_assert(offsetof(UUI_PremiumPackBought_C, Image_2) == 0x000338, "Member 'UUI_PremiumPackBought_C::Image_2' has a wrong offset!");
static_assert(offsetof(UUI_PremiumPackBought_C, Image_3) == 0x000340, "Member 'UUI_PremiumPackBought_C::Image_3' has a wrong offset!");
static_assert(offsetof(UUI_PremiumPackBought_C, Image_4) == 0x000348, "Member 'UUI_PremiumPackBought_C::Image_4' has a wrong offset!");
static_assert(offsetof(UUI_PremiumPackBought_C, Image_BlackBackground) == 0x000350, "Member 'UUI_PremiumPackBought_C::Image_BlackBackground' has a wrong offset!");
static_assert(offsetof(UUI_PremiumPackBought_C, Image_PackPicture) == 0x000358, "Member 'UUI_PremiumPackBought_C::Image_PackPicture' has a wrong offset!");
static_assert(offsetof(UUI_PremiumPackBought_C, Image_PackPicture_Crowns) == 0x000360, "Member 'UUI_PremiumPackBought_C::Image_PackPicture_Crowns' has a wrong offset!");
static_assert(offsetof(UUI_PremiumPackBought_C, ImageFlareMiddle) == 0x000368, "Member 'UUI_PremiumPackBought_C::ImageFlareMiddle' has a wrong offset!");
static_assert(offsetof(UUI_PremiumPackBought_C, LevelReachedHeadline) == 0x000370, "Member 'UUI_PremiumPackBought_C::LevelReachedHeadline' has a wrong offset!");
static_assert(offsetof(UUI_PremiumPackBought_C, LevelUp) == 0x000378, "Member 'UUI_PremiumPackBought_C::LevelUp' has a wrong offset!");
static_assert(offsetof(UUI_PremiumPackBought_C, Overlay_Shadow) == 0x000380, "Member 'UUI_PremiumPackBought_C::Overlay_Shadow' has a wrong offset!");
static_assert(offsetof(UUI_PremiumPackBought_C, Overlay_Shadow_Crowns) == 0x000388, "Member 'UUI_PremiumPackBought_C::Overlay_Shadow_Crowns' has a wrong offset!");
static_assert(offsetof(UUI_PremiumPackBought_C, OwnedOverlay) == 0x000390, "Member 'UUI_PremiumPackBought_C::OwnedOverlay' has a wrong offset!");
static_assert(offsetof(UUI_PremiumPackBought_C, Text_HC_PackName) == 0x000398, "Member 'UUI_PremiumPackBought_C::Text_HC_PackName' has a wrong offset!");
static_assert(offsetof(UUI_PremiumPackBought_C, UI_FlameSafezone) == 0x0003A0, "Member 'UUI_PremiumPackBought_C::UI_FlameSafezone' has a wrong offset!");
static_assert(offsetof(UUI_PremiumPackBought_C, Product) == 0x0003A8, "Member 'UUI_PremiumPackBought_C::Product' has a wrong offset!");
static_assert(offsetof(UUI_PremiumPackBought_C, IsHardCurrencyCard) == 0x000558, "Member 'UUI_PremiumPackBought_C::IsHardCurrencyCard' has a wrong offset!");
static_assert(offsetof(UUI_PremiumPackBought_C, CelebrationAnimationClosing) == 0x000560, "Member 'UUI_PremiumPackBought_C::CelebrationAnimationClosing' has a wrong offset!");
static_assert(offsetof(UUI_PremiumPackBought_C, FrameImages) == 0x000570, "Member 'UUI_PremiumPackBought_C::FrameImages' has a wrong offset!");
static_assert(offsetof(UUI_PremiumPackBought_C, CrownsFrameImages) == 0x000580, "Member 'UUI_PremiumPackBought_C::CrownsFrameImages' has a wrong offset!");

}

