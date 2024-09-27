#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_HitIndications

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_HitIndications.UI_HitIndications_C
// 0x0010 (0x0270 - 0x0260)
class UUI_HitIndications_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UOverlay*                               Overlay_69;                                        // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_UI_HitIndications(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void InitializeHitIndication(class UUI_HitIndication_C* Target, const struct FVector& BulletOrigin, bool IsPlayerHit, bool IsArmorHit, bool IsFriendlyFire, class ABP_Character_Script_C* Caster);
	void CreateHitLocation(const struct FVector& BulletOrigin, bool IsPlayerHit, bool IsArmorHit, bool IsFriendlyFire, class ABP_Character_Script_C* Caster, class UUI_HitIndication_C** OutputPin);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_HitIndications_C">();
	}
	static class UUI_HitIndications_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_HitIndications_C>();
	}
};
static_assert(alignof(UUI_HitIndications_C) == 0x000008, "Wrong alignment on UUI_HitIndications_C");
static_assert(sizeof(UUI_HitIndications_C) == 0x000270, "Wrong size on UUI_HitIndications_C");
static_assert(offsetof(UUI_HitIndications_C, UberGraphFrame) == 0x000260, "Member 'UUI_HitIndications_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_HitIndications_C, Overlay_69) == 0x000268, "Member 'UUI_HitIndications_C::Overlay_69' has a wrong offset!");

}

