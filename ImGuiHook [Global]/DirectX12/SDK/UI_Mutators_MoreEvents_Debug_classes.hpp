#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Mutators_MoreEvents_Debug

#include "Basic.hpp"

#include "E_Mutator_structs.hpp"
#include "Engine_structs.hpp"
#include "S_MoreEventsMutatorParameters_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_Mutators_MoreEvents_Debug.UI_Mutators_MoreEvents_Debug_C
// 0x0050 (0x02B0 - 0x0260)
class UUI_Mutators_MoreEvents_Debug_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Creation;                                          // 0x0268(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UFlameTextBlock*                        EventQuantityText;                                 // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFlameTextBlock*                        TypeOfEventsText;                                  // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VerticalBox_87;                                    // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class FString>                         MutatorStrings;                                    // 0x0288(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FS_MoreEventsMutatorParameters         MoreEventsData;                                    // 0x0298(0x0018)(Edit, BlueprintVisible, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_UI_Mutators_MoreEvents_Debug(int32 EntryPoint);
	void Construct();
	void AddMutator(E_Mutator Mutator);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_Mutators_MoreEvents_Debug_C">();
	}
	static class UUI_Mutators_MoreEvents_Debug_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_Mutators_MoreEvents_Debug_C>();
	}
};
static_assert(alignof(UUI_Mutators_MoreEvents_Debug_C) == 0x000008, "Wrong alignment on UUI_Mutators_MoreEvents_Debug_C");
static_assert(sizeof(UUI_Mutators_MoreEvents_Debug_C) == 0x0002B0, "Wrong size on UUI_Mutators_MoreEvents_Debug_C");
static_assert(offsetof(UUI_Mutators_MoreEvents_Debug_C, UberGraphFrame) == 0x000260, "Member 'UUI_Mutators_MoreEvents_Debug_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_Mutators_MoreEvents_Debug_C, Creation) == 0x000268, "Member 'UUI_Mutators_MoreEvents_Debug_C::Creation' has a wrong offset!");
static_assert(offsetof(UUI_Mutators_MoreEvents_Debug_C, EventQuantityText) == 0x000270, "Member 'UUI_Mutators_MoreEvents_Debug_C::EventQuantityText' has a wrong offset!");
static_assert(offsetof(UUI_Mutators_MoreEvents_Debug_C, TypeOfEventsText) == 0x000278, "Member 'UUI_Mutators_MoreEvents_Debug_C::TypeOfEventsText' has a wrong offset!");
static_assert(offsetof(UUI_Mutators_MoreEvents_Debug_C, VerticalBox_87) == 0x000280, "Member 'UUI_Mutators_MoreEvents_Debug_C::VerticalBox_87' has a wrong offset!");
static_assert(offsetof(UUI_Mutators_MoreEvents_Debug_C, MutatorStrings) == 0x000288, "Member 'UUI_Mutators_MoreEvents_Debug_C::MutatorStrings' has a wrong offset!");
static_assert(offsetof(UUI_Mutators_MoreEvents_Debug_C, MoreEventsData) == 0x000298, "Member 'UUI_Mutators_MoreEvents_Debug_C::MoreEventsData' has a wrong offset!");

}

