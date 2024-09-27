#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_InteractionMarkerGenerator_2

#include "Basic.hpp"

#include "UI_InteractionMarker_Base_classes.hpp"
#include "Engine_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_InteractionMarkerGenerator_2.UI_InteractionMarkerGenerator_2_C
// 0x00A0 (0x0390 - 0x02F0)
class UUI_InteractionMarkerGenerator_2_C final : public UUI_InteractionMarker_Base_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_UI_InteractionMarkerGenerator_2_C;  // 0x02F0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UHorizontalBox*                         ButtonCollect;                                     // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFlameTextBlock*                        GenerationIndicator;                               // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 GenerationIndicatorImg;                            // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFlameTextBlock*                        GeneratorLevel;                                    // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFlameTextBlock*                        GeneratorName;                                     // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 GenResourceImage;                                  // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_0;                                           // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_Interaction;                                   // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFlameTextBlock*                        LevelLabel;                                        // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Overlay_BuildingProgress;                          // 0x0340(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Overlay_Production;                                // 0x0348(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Production_Overlay;                                // 0x0350(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URichTextBlock*                         RichTextTime;                                      // 0x0358(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Shadow;                                            // 0x0360(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFlameTextBlock*                        TextCollect;                                       // 0x0368(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFlameTextBlock*                        TextLabel;                                         // 0x0370(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Txt_Counter;                                       // 0x0378(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_CircularProgress_C*                 UI_CircularProgress;                               // 0x0380(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UClass*                                 ShelterSlot;                                       // 0x0388(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_UI_InteractionMarkerGenerator_2(int32 EntryPoint);
	void UpdateEvent();
	void Construct();
	void UpdateGeneratorMarker(class UClass* ShelterSlot_0);
	void SetShelterSlotClass(class UClass* ShelterSlot_0);
	void UpdateMarker_ImprovementName(const class FText& Improvement_name);
	void UpdateMarker_ResourceIconAndRarity(class UClass* GeneratorClass, bool IsGenerator, int32 ImprovementCurrentLevel);
	void UpdateMarker_ImprovemenLevel(int32 CurrentLevel, int32 MaxLevel);
	void UpdateMarker_Progress(class UClass* ShelterSlot_0, class AStash* Stash, bool IsGenerator, int32 ImprovementCurrentLevel);
	void UpdateMarker_ProductionIndicator(class UClass* ShelterSlot_0, class AStash* Stash, bool IsGenerator, int32 ImprovementCurrentLevel);
	void UpdateMarker_RemainingTime(class UClass* ShelterSlot_0, class AStash* Stash, int32 ImprovementCurrentLevel);
	void UpdateMarker_CollectButton(bool IsGenerator, int32 ImprovementCurrentLevel);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Destruct();
	void Init(class UInteractionItemComponent* InteractionItem, class UInteractionActorComponent* InteractionActor, bool InteractionAllowed);
	void GetInteractionImage(class UImage** InteractionImage);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_InteractionMarkerGenerator_2_C">();
	}
	static class UUI_InteractionMarkerGenerator_2_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_InteractionMarkerGenerator_2_C>();
	}
};
static_assert(alignof(UUI_InteractionMarkerGenerator_2_C) == 0x000008, "Wrong alignment on UUI_InteractionMarkerGenerator_2_C");
static_assert(sizeof(UUI_InteractionMarkerGenerator_2_C) == 0x000390, "Wrong size on UUI_InteractionMarkerGenerator_2_C");
static_assert(offsetof(UUI_InteractionMarkerGenerator_2_C, UberGraphFrame_UI_InteractionMarkerGenerator_2_C) == 0x0002F0, "Member 'UUI_InteractionMarkerGenerator_2_C::UberGraphFrame_UI_InteractionMarkerGenerator_2_C' has a wrong offset!");
static_assert(offsetof(UUI_InteractionMarkerGenerator_2_C, ButtonCollect) == 0x0002F8, "Member 'UUI_InteractionMarkerGenerator_2_C::ButtonCollect' has a wrong offset!");
static_assert(offsetof(UUI_InteractionMarkerGenerator_2_C, GenerationIndicator) == 0x000300, "Member 'UUI_InteractionMarkerGenerator_2_C::GenerationIndicator' has a wrong offset!");
static_assert(offsetof(UUI_InteractionMarkerGenerator_2_C, GenerationIndicatorImg) == 0x000308, "Member 'UUI_InteractionMarkerGenerator_2_C::GenerationIndicatorImg' has a wrong offset!");
static_assert(offsetof(UUI_InteractionMarkerGenerator_2_C, GeneratorLevel) == 0x000310, "Member 'UUI_InteractionMarkerGenerator_2_C::GeneratorLevel' has a wrong offset!");
static_assert(offsetof(UUI_InteractionMarkerGenerator_2_C, GeneratorName) == 0x000318, "Member 'UUI_InteractionMarkerGenerator_2_C::GeneratorName' has a wrong offset!");
static_assert(offsetof(UUI_InteractionMarkerGenerator_2_C, GenResourceImage) == 0x000320, "Member 'UUI_InteractionMarkerGenerator_2_C::GenResourceImage' has a wrong offset!");
static_assert(offsetof(UUI_InteractionMarkerGenerator_2_C, Image_0) == 0x000328, "Member 'UUI_InteractionMarkerGenerator_2_C::Image_0' has a wrong offset!");
static_assert(offsetof(UUI_InteractionMarkerGenerator_2_C, Img_Interaction) == 0x000330, "Member 'UUI_InteractionMarkerGenerator_2_C::Img_Interaction' has a wrong offset!");
static_assert(offsetof(UUI_InteractionMarkerGenerator_2_C, LevelLabel) == 0x000338, "Member 'UUI_InteractionMarkerGenerator_2_C::LevelLabel' has a wrong offset!");
static_assert(offsetof(UUI_InteractionMarkerGenerator_2_C, Overlay_BuildingProgress) == 0x000340, "Member 'UUI_InteractionMarkerGenerator_2_C::Overlay_BuildingProgress' has a wrong offset!");
static_assert(offsetof(UUI_InteractionMarkerGenerator_2_C, Overlay_Production) == 0x000348, "Member 'UUI_InteractionMarkerGenerator_2_C::Overlay_Production' has a wrong offset!");
static_assert(offsetof(UUI_InteractionMarkerGenerator_2_C, Production_Overlay) == 0x000350, "Member 'UUI_InteractionMarkerGenerator_2_C::Production_Overlay' has a wrong offset!");
static_assert(offsetof(UUI_InteractionMarkerGenerator_2_C, RichTextTime) == 0x000358, "Member 'UUI_InteractionMarkerGenerator_2_C::RichTextTime' has a wrong offset!");
static_assert(offsetof(UUI_InteractionMarkerGenerator_2_C, Shadow) == 0x000360, "Member 'UUI_InteractionMarkerGenerator_2_C::Shadow' has a wrong offset!");
static_assert(offsetof(UUI_InteractionMarkerGenerator_2_C, TextCollect) == 0x000368, "Member 'UUI_InteractionMarkerGenerator_2_C::TextCollect' has a wrong offset!");
static_assert(offsetof(UUI_InteractionMarkerGenerator_2_C, TextLabel) == 0x000370, "Member 'UUI_InteractionMarkerGenerator_2_C::TextLabel' has a wrong offset!");
static_assert(offsetof(UUI_InteractionMarkerGenerator_2_C, Txt_Counter) == 0x000378, "Member 'UUI_InteractionMarkerGenerator_2_C::Txt_Counter' has a wrong offset!");
static_assert(offsetof(UUI_InteractionMarkerGenerator_2_C, UI_CircularProgress) == 0x000380, "Member 'UUI_InteractionMarkerGenerator_2_C::UI_CircularProgress' has a wrong offset!");
static_assert(offsetof(UUI_InteractionMarkerGenerator_2_C, ShelterSlot) == 0x000388, "Member 'UUI_InteractionMarkerGenerator_2_C::ShelterSlot' has a wrong offset!");

}

