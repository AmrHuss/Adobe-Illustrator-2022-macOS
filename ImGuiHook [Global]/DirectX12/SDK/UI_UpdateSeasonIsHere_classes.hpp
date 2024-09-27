#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_UpdateSeasonIsHere

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "F_LegacySeasonsOnboardingConfig_structs.hpp"
#include "UI_ModalWidget_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_UpdateSeasonIsHere.UI_UpdateSeasonIsHere_C
// 0x0178 (0x0480 - 0x0308)
class UUI_UpdateSeasonIsHere_C final : public UUI_ModalWidget_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_UI_UpdateSeasonIsHere_C;            // 0x0308(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Background;                                        // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBackgroundBlur*                        BackgroundBlur_0;                                  // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_InputActionWidget_C*                ButtonBattlePass;                                  // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_InputActionWidget_C*                ButtonClose;                                       // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           ContentPanel;                                      // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image;                                             // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_1;                                           // 0x0340(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_224;                                         // 0x0348(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Tile0;                                       // 0x0350(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Tile1;                                       // 0x0358(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Tile2;                                       // 0x0360(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Tile3;                                       // 0x0368(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Tile4;                                       // 0x0370(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               OverlayPhotoContent;                               // 0x0378(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         Previews;                                          // 0x0380(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFlameTextBlock*                        SeasonDescription;                                 // 0x0388(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 SeasonImageTexture;                                // 0x0390(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFlameTextBlock*                        SeasonTitle;                                       // 0x0398(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFlameTextBlock*                        TitleMain;                                         // 0x03A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_FlameSafezone_C*                    UI_FlameSafezone;                                  // 0x03A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VerticalBoxSeasonInfo;                             // 0x03B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               BackgroundMaterial;                                // 0x03B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UWidget*>                        PreviewItems;                                      // 0x03C0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	bool                                          IsLegacySeason;                                    // 0x03D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_3D1[0x7];                                      // 0x03D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<TSoftObjectPtr<class UTexture2D>>      BottomImagesSoft;                                  // 0x03D8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TSoftObjectPtr<class UTexture2D>              MainImageSoft;                                     // 0x03E8(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TMap<class FName, struct FF_LegacySeasonsOnboardingConfig> Legacy_seasons_onboarding;                         // 0x0410(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UDataTable*                             Legacy_onboarding_config_table;                    // 0x0460(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UImage*>                         Image_tiles;                                       // 0x0468(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	float                                         Current_Season;                                    // 0x0478(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_UI_UpdateSeasonIsHere(int32 EntryPoint);
	void Init();
	void BndEvt__ButtonBattlePass_K2Node_ComponentBoundEvent_2_OnActionPressedEvent__DelegateSignature();
	void BndEvt__ButtonClose_K2Node_ComponentBoundEvent_0_OnActionHoldEvent__DelegateSignature();
	void OnTweenStart_B8842262454EE74FDDE49F929C818250(class UTweenFloat* Tween);
	void OnTweenUpdate_B8842262454EE74FDDE49F929C818250(class UTweenFloat* Tween);
	void OnTweenEnd_B8842262454EE74FDDE49F929C818250(class UTweenFloat* Tween);
	void InitElements();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_UpdateSeasonIsHere_C">();
	}
	static class UUI_UpdateSeasonIsHere_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_UpdateSeasonIsHere_C>();
	}
};
static_assert(alignof(UUI_UpdateSeasonIsHere_C) == 0x000008, "Wrong alignment on UUI_UpdateSeasonIsHere_C");
static_assert(sizeof(UUI_UpdateSeasonIsHere_C) == 0x000480, "Wrong size on UUI_UpdateSeasonIsHere_C");
static_assert(offsetof(UUI_UpdateSeasonIsHere_C, UberGraphFrame_UI_UpdateSeasonIsHere_C) == 0x000308, "Member 'UUI_UpdateSeasonIsHere_C::UberGraphFrame_UI_UpdateSeasonIsHere_C' has a wrong offset!");
static_assert(offsetof(UUI_UpdateSeasonIsHere_C, Background) == 0x000310, "Member 'UUI_UpdateSeasonIsHere_C::Background' has a wrong offset!");
static_assert(offsetof(UUI_UpdateSeasonIsHere_C, BackgroundBlur_0) == 0x000318, "Member 'UUI_UpdateSeasonIsHere_C::BackgroundBlur_0' has a wrong offset!");
static_assert(offsetof(UUI_UpdateSeasonIsHere_C, ButtonBattlePass) == 0x000320, "Member 'UUI_UpdateSeasonIsHere_C::ButtonBattlePass' has a wrong offset!");
static_assert(offsetof(UUI_UpdateSeasonIsHere_C, ButtonClose) == 0x000328, "Member 'UUI_UpdateSeasonIsHere_C::ButtonClose' has a wrong offset!");
static_assert(offsetof(UUI_UpdateSeasonIsHere_C, ContentPanel) == 0x000330, "Member 'UUI_UpdateSeasonIsHere_C::ContentPanel' has a wrong offset!");
static_assert(offsetof(UUI_UpdateSeasonIsHere_C, Image) == 0x000338, "Member 'UUI_UpdateSeasonIsHere_C::Image' has a wrong offset!");
static_assert(offsetof(UUI_UpdateSeasonIsHere_C, Image_1) == 0x000340, "Member 'UUI_UpdateSeasonIsHere_C::Image_1' has a wrong offset!");
static_assert(offsetof(UUI_UpdateSeasonIsHere_C, Image_224) == 0x000348, "Member 'UUI_UpdateSeasonIsHere_C::Image_224' has a wrong offset!");
static_assert(offsetof(UUI_UpdateSeasonIsHere_C, Image_Tile0) == 0x000350, "Member 'UUI_UpdateSeasonIsHere_C::Image_Tile0' has a wrong offset!");
static_assert(offsetof(UUI_UpdateSeasonIsHere_C, Image_Tile1) == 0x000358, "Member 'UUI_UpdateSeasonIsHere_C::Image_Tile1' has a wrong offset!");
static_assert(offsetof(UUI_UpdateSeasonIsHere_C, Image_Tile2) == 0x000360, "Member 'UUI_UpdateSeasonIsHere_C::Image_Tile2' has a wrong offset!");
static_assert(offsetof(UUI_UpdateSeasonIsHere_C, Image_Tile3) == 0x000368, "Member 'UUI_UpdateSeasonIsHere_C::Image_Tile3' has a wrong offset!");
static_assert(offsetof(UUI_UpdateSeasonIsHere_C, Image_Tile4) == 0x000370, "Member 'UUI_UpdateSeasonIsHere_C::Image_Tile4' has a wrong offset!");
static_assert(offsetof(UUI_UpdateSeasonIsHere_C, OverlayPhotoContent) == 0x000378, "Member 'UUI_UpdateSeasonIsHere_C::OverlayPhotoContent' has a wrong offset!");
static_assert(offsetof(UUI_UpdateSeasonIsHere_C, Previews) == 0x000380, "Member 'UUI_UpdateSeasonIsHere_C::Previews' has a wrong offset!");
static_assert(offsetof(UUI_UpdateSeasonIsHere_C, SeasonDescription) == 0x000388, "Member 'UUI_UpdateSeasonIsHere_C::SeasonDescription' has a wrong offset!");
static_assert(offsetof(UUI_UpdateSeasonIsHere_C, SeasonImageTexture) == 0x000390, "Member 'UUI_UpdateSeasonIsHere_C::SeasonImageTexture' has a wrong offset!");
static_assert(offsetof(UUI_UpdateSeasonIsHere_C, SeasonTitle) == 0x000398, "Member 'UUI_UpdateSeasonIsHere_C::SeasonTitle' has a wrong offset!");
static_assert(offsetof(UUI_UpdateSeasonIsHere_C, TitleMain) == 0x0003A0, "Member 'UUI_UpdateSeasonIsHere_C::TitleMain' has a wrong offset!");
static_assert(offsetof(UUI_UpdateSeasonIsHere_C, UI_FlameSafezone) == 0x0003A8, "Member 'UUI_UpdateSeasonIsHere_C::UI_FlameSafezone' has a wrong offset!");
static_assert(offsetof(UUI_UpdateSeasonIsHere_C, VerticalBoxSeasonInfo) == 0x0003B0, "Member 'UUI_UpdateSeasonIsHere_C::VerticalBoxSeasonInfo' has a wrong offset!");
static_assert(offsetof(UUI_UpdateSeasonIsHere_C, BackgroundMaterial) == 0x0003B8, "Member 'UUI_UpdateSeasonIsHere_C::BackgroundMaterial' has a wrong offset!");
static_assert(offsetof(UUI_UpdateSeasonIsHere_C, PreviewItems) == 0x0003C0, "Member 'UUI_UpdateSeasonIsHere_C::PreviewItems' has a wrong offset!");
static_assert(offsetof(UUI_UpdateSeasonIsHere_C, IsLegacySeason) == 0x0003D0, "Member 'UUI_UpdateSeasonIsHere_C::IsLegacySeason' has a wrong offset!");
static_assert(offsetof(UUI_UpdateSeasonIsHere_C, BottomImagesSoft) == 0x0003D8, "Member 'UUI_UpdateSeasonIsHere_C::BottomImagesSoft' has a wrong offset!");
static_assert(offsetof(UUI_UpdateSeasonIsHere_C, MainImageSoft) == 0x0003E8, "Member 'UUI_UpdateSeasonIsHere_C::MainImageSoft' has a wrong offset!");
static_assert(offsetof(UUI_UpdateSeasonIsHere_C, Legacy_seasons_onboarding) == 0x000410, "Member 'UUI_UpdateSeasonIsHere_C::Legacy_seasons_onboarding' has a wrong offset!");
static_assert(offsetof(UUI_UpdateSeasonIsHere_C, Legacy_onboarding_config_table) == 0x000460, "Member 'UUI_UpdateSeasonIsHere_C::Legacy_onboarding_config_table' has a wrong offset!");
static_assert(offsetof(UUI_UpdateSeasonIsHere_C, Image_tiles) == 0x000468, "Member 'UUI_UpdateSeasonIsHere_C::Image_tiles' has a wrong offset!");
static_assert(offsetof(UUI_UpdateSeasonIsHere_C, Current_Season) == 0x000478, "Member 'UUI_UpdateSeasonIsHere_C::Current_Season' has a wrong offset!");

}

