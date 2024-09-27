#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_HorizontalCompass

#include "Basic.hpp"

#include "Flame_structs.hpp"
#include "Flame_classes.hpp"
#include "S_CustomMapMarker_ContextUI_structs.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "E_TeamsMatchPhase_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_HorizontalCompass.UI_HorizontalCompass_C
// 0x0098 (0x0350 - 0x02B8)
class UUI_HorizontalCompass_C final : public UFlameWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02B8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Arrow;                                             // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_0;                                     // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 CompassImage;                                      // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_1;                                           // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FRotator                               LogicMapRotator;                                   // 0x02E0(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2EC[0x4];                                      // 0x02EC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CompassMaterial;                                   // 0x02F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<class FName, struct FS_CustomMapMarker_ContextUI> CustomMapMarkers;                                  // 0x02F8(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	bool                                          CompassFound;                                      // 0x0348(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_UI_HorizontalCompass(int32 EntryPoint);
	void Destruct();
	void GameStarted();
	void MatchChanged(E_TeamsMatchPhase Old_Phase, E_TeamsMatchPhase New_Phase);
	void OnGameSettingsChanged(const struct FGameSaveSettings& GameSettings);
	void AddFadedMarker(class FName MarkerTag, const struct FS_CustomMapMarker_Fade& MarkerInfo);
	void RemoveMapMarkerByTag(class FName Tag);
	void AddMapMarker(class FName Tag, const struct FS_CustomMapMarker& Marker);
	void RemoveMapMarkers();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Construct();
	void OnLoaded_303A9E7341428F48F05BE78A003A4A5B(class UObject* Loaded);
	void InitializeRotators();
	void UpdateCompassVisiblity(const struct FGameSaveSettings& GameSettings);
	void Is_MarkerJammed(const struct FS_CustomMapMarker& Marker, bool* Is_Jammed);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_HorizontalCompass_C">();
	}
	static class UUI_HorizontalCompass_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_HorizontalCompass_C>();
	}
};
static_assert(alignof(UUI_HorizontalCompass_C) == 0x000008, "Wrong alignment on UUI_HorizontalCompass_C");
static_assert(sizeof(UUI_HorizontalCompass_C) == 0x000350, "Wrong size on UUI_HorizontalCompass_C");
static_assert(offsetof(UUI_HorizontalCompass_C, UberGraphFrame) == 0x0002B8, "Member 'UUI_HorizontalCompass_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_HorizontalCompass_C, Arrow) == 0x0002C0, "Member 'UUI_HorizontalCompass_C::Arrow' has a wrong offset!");
static_assert(offsetof(UUI_HorizontalCompass_C, CanvasPanel_0) == 0x0002C8, "Member 'UUI_HorizontalCompass_C::CanvasPanel_0' has a wrong offset!");
static_assert(offsetof(UUI_HorizontalCompass_C, CompassImage) == 0x0002D0, "Member 'UUI_HorizontalCompass_C::CompassImage' has a wrong offset!");
static_assert(offsetof(UUI_HorizontalCompass_C, Image_1) == 0x0002D8, "Member 'UUI_HorizontalCompass_C::Image_1' has a wrong offset!");
static_assert(offsetof(UUI_HorizontalCompass_C, LogicMapRotator) == 0x0002E0, "Member 'UUI_HorizontalCompass_C::LogicMapRotator' has a wrong offset!");
static_assert(offsetof(UUI_HorizontalCompass_C, CompassMaterial) == 0x0002F0, "Member 'UUI_HorizontalCompass_C::CompassMaterial' has a wrong offset!");
static_assert(offsetof(UUI_HorizontalCompass_C, CustomMapMarkers) == 0x0002F8, "Member 'UUI_HorizontalCompass_C::CustomMapMarkers' has a wrong offset!");
static_assert(offsetof(UUI_HorizontalCompass_C, CompassFound) == 0x000348, "Member 'UUI_HorizontalCompass_C::CompassFound' has a wrong offset!");

}

