#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_CustomiseSubTab

#include "Basic.hpp"

#include "Flame_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_CustomiseSubTab.UI_CustomiseSubTab_C
// 0x0018 (0x0330 - 0x0318)
class UUI_CustomiseSubTab_C final : public UTabControlWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0318(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	TArray<class UUserWidget*>                    TabUserWidgets;                                    // 0x0320(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)

public:
	void ExecuteUbergraph_UI_CustomiseSubTab(int32 EntryPoint);
	void OnResetToDefaultState();
	void OnSelectionChanged(int32 NewIndex, int32 OldIndex);
	void Destruct();
	void Construct();

	TArray<class UTabWidget*> CreateTabs() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_CustomiseSubTab_C">();
	}
	static class UUI_CustomiseSubTab_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_CustomiseSubTab_C>();
	}
};
static_assert(alignof(UUI_CustomiseSubTab_C) == 0x000008, "Wrong alignment on UUI_CustomiseSubTab_C");
static_assert(sizeof(UUI_CustomiseSubTab_C) == 0x000330, "Wrong size on UUI_CustomiseSubTab_C");
static_assert(offsetof(UUI_CustomiseSubTab_C, UberGraphFrame) == 0x000318, "Member 'UUI_CustomiseSubTab_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_CustomiseSubTab_C, TabUserWidgets) == 0x000320, "Member 'UUI_CustomiseSubTab_C::TabUserWidgets' has a wrong offset!");

}

