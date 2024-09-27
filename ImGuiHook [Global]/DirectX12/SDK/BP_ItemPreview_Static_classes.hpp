#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ItemPreview_Static

#include "Basic.hpp"

#include "BP_ItemPreview_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_ItemPreview_Static.BP_ItemPreview_Static_C
// 0x0018 (0x0300 - 0x02E8)
class ABP_ItemPreview_Static_C final : public ABP_ItemPreview_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_ItemPreview_Static_C;            // 0x02E8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	TArray<TSoftClassPtr<class UClass>>           CustomizationsToShowWithHead;                      // 0x02F0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_BP_ItemPreview_Static(int32 EntryPoint);
	void SetMorphs(bool bDisableMorphTarget);
	void ShowCustomizationClothes(class AHumanPlayerController* Player, class UClass* Customization_0, class UClass* Variant);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ItemPreview_Static_C">();
	}
	static class ABP_ItemPreview_Static_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_ItemPreview_Static_C>();
	}
};
static_assert(alignof(ABP_ItemPreview_Static_C) == 0x000008, "Wrong alignment on ABP_ItemPreview_Static_C");
static_assert(sizeof(ABP_ItemPreview_Static_C) == 0x000300, "Wrong size on ABP_ItemPreview_Static_C");
static_assert(offsetof(ABP_ItemPreview_Static_C, UberGraphFrame_BP_ItemPreview_Static_C) == 0x0002E8, "Member 'ABP_ItemPreview_Static_C::UberGraphFrame_BP_ItemPreview_Static_C' has a wrong offset!");
static_assert(offsetof(ABP_ItemPreview_Static_C, CustomizationsToShowWithHead) == 0x0002F0, "Member 'ABP_ItemPreview_Static_C::CustomizationsToShowWithHead' has a wrong offset!");

}

