#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_VariantsBox

#include "Basic.hpp"

#include "Flame_classes.hpp"
#include "UMG_structs.hpp"
#include "E_SellingPointStatus_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_VariantsBox.UI_VariantsBox_C
// 0x0048 (0x0300 - 0x02B8)
class UUI_VariantsBox_C final : public UFlameWidget
{
public:
	class UHorizontalBox*                         ColorsHorizontalBox;                               // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                             ColorsScrollBox;                                   // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URetainerBox*                           FadeBox;                                           // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFlameTextBlock*                        LockedNotification;                                // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFlameTextBlock*                        VariantName;                                       // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFlameTextBlock*                        VariantRarity;                                     // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UClass*                                 BaseItem;                                          // 0x02E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UClass*>                         OwnedVariants;                                     // 0x02F0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void FillContent(TArray<class UClass*>& VariantItems, class UClass* BaseItem_0, const class FString& OrangeDotPrefix, TArray<class UClass*>& OwnedItems, TArray<class UClass*>* VisibleVariants);
	void SetFocusByIndex(int32 SlotIndex, bool OnPreview, class UClass** OutFocusedVariant, class UClass** OutFocusedBaseItem, int32* OutSelectedIndex);
	void UpdateTics(int32 TickedIndex);
	void ClearContent();
	void GetIndexOfVariant(class UClass* Variant, int32* Index_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_VariantsBox_C">();
	}
	static class UUI_VariantsBox_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_VariantsBox_C>();
	}
};
static_assert(alignof(UUI_VariantsBox_C) == 0x000008, "Wrong alignment on UUI_VariantsBox_C");
static_assert(sizeof(UUI_VariantsBox_C) == 0x000300, "Wrong size on UUI_VariantsBox_C");
static_assert(offsetof(UUI_VariantsBox_C, ColorsHorizontalBox) == 0x0002B8, "Member 'UUI_VariantsBox_C::ColorsHorizontalBox' has a wrong offset!");
static_assert(offsetof(UUI_VariantsBox_C, ColorsScrollBox) == 0x0002C0, "Member 'UUI_VariantsBox_C::ColorsScrollBox' has a wrong offset!");
static_assert(offsetof(UUI_VariantsBox_C, FadeBox) == 0x0002C8, "Member 'UUI_VariantsBox_C::FadeBox' has a wrong offset!");
static_assert(offsetof(UUI_VariantsBox_C, LockedNotification) == 0x0002D0, "Member 'UUI_VariantsBox_C::LockedNotification' has a wrong offset!");
static_assert(offsetof(UUI_VariantsBox_C, VariantName) == 0x0002D8, "Member 'UUI_VariantsBox_C::VariantName' has a wrong offset!");
static_assert(offsetof(UUI_VariantsBox_C, VariantRarity) == 0x0002E0, "Member 'UUI_VariantsBox_C::VariantRarity' has a wrong offset!");
static_assert(offsetof(UUI_VariantsBox_C, BaseItem) == 0x0002E8, "Member 'UUI_VariantsBox_C::BaseItem' has a wrong offset!");
static_assert(offsetof(UUI_VariantsBox_C, OwnedVariants) == 0x0002F0, "Member 'UUI_VariantsBox_C::OwnedVariants' has a wrong offset!");

}

