#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_StashViewButton

#include "Basic.hpp"


namespace SDK::Params
{

// Function UI_StashViewButton.UI_StashViewButton_C.ExecuteUbergraph_UI_StashViewButton
// 0x0018 (0x0018 - 0x0000)
struct UI_StashViewButton_C_ExecuteUbergraph_UI_StashViewButton final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6[0x2];                                        // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UButton*                                K2Node_ComponentBoundEvent_Sender_1;               // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UButton*                                K2Node_ComponentBoundEvent_Sender;                 // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_StashViewButton_C_ExecuteUbergraph_UI_StashViewButton) == 0x000008, "Wrong alignment on UI_StashViewButton_C_ExecuteUbergraph_UI_StashViewButton");
static_assert(sizeof(UI_StashViewButton_C_ExecuteUbergraph_UI_StashViewButton) == 0x000018, "Wrong size on UI_StashViewButton_C_ExecuteUbergraph_UI_StashViewButton");
static_assert(offsetof(UI_StashViewButton_C_ExecuteUbergraph_UI_StashViewButton, EntryPoint) == 0x000000, "Member 'UI_StashViewButton_C_ExecuteUbergraph_UI_StashViewButton::EntryPoint' has a wrong offset!");
static_assert(offsetof(UI_StashViewButton_C_ExecuteUbergraph_UI_StashViewButton, K2Node_Event_IsDesignTime) == 0x000004, "Member 'UI_StashViewButton_C_ExecuteUbergraph_UI_StashViewButton::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(UI_StashViewButton_C_ExecuteUbergraph_UI_StashViewButton, CallFunc_IsValid_ReturnValue) == 0x000005, "Member 'UI_StashViewButton_C_ExecuteUbergraph_UI_StashViewButton::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_StashViewButton_C_ExecuteUbergraph_UI_StashViewButton, K2Node_ComponentBoundEvent_Sender_1) == 0x000008, "Member 'UI_StashViewButton_C_ExecuteUbergraph_UI_StashViewButton::K2Node_ComponentBoundEvent_Sender_1' has a wrong offset!");
static_assert(offsetof(UI_StashViewButton_C_ExecuteUbergraph_UI_StashViewButton, K2Node_ComponentBoundEvent_Sender) == 0x000010, "Member 'UI_StashViewButton_C_ExecuteUbergraph_UI_StashViewButton::K2Node_ComponentBoundEvent_Sender' has a wrong offset!");

// Function UI_StashViewButton.UI_StashViewButton_C.BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct UI_StashViewButton_C_BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature final
{
public:
	class UButton*                                Sender;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_StashViewButton_C_BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature) == 0x000008, "Wrong alignment on UI_StashViewButton_C_BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");
static_assert(sizeof(UI_StashViewButton_C_BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature) == 0x000008, "Wrong size on UI_StashViewButton_C_BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");
static_assert(offsetof(UI_StashViewButton_C_BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature, Sender) == 0x000000, "Member 'UI_StashViewButton_C_BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature::Sender' has a wrong offset!");

// Function UI_StashViewButton.UI_StashViewButton_C.BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonFocusEvent__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct UI_StashViewButton_C_BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonFocusEvent__DelegateSignature final
{
public:
	class UButton*                                Sender;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_StashViewButton_C_BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonFocusEvent__DelegateSignature) == 0x000008, "Wrong alignment on UI_StashViewButton_C_BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonFocusEvent__DelegateSignature");
static_assert(sizeof(UI_StashViewButton_C_BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonFocusEvent__DelegateSignature) == 0x000008, "Wrong size on UI_StashViewButton_C_BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonFocusEvent__DelegateSignature");
static_assert(offsetof(UI_StashViewButton_C_BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonFocusEvent__DelegateSignature, Sender) == 0x000000, "Member 'UI_StashViewButton_C_BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonFocusEvent__DelegateSignature::Sender' has a wrong offset!");

// Function UI_StashViewButton.UI_StashViewButton_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct UI_StashViewButton_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UI_StashViewButton_C_PreConstruct) == 0x000001, "Wrong alignment on UI_StashViewButton_C_PreConstruct");
static_assert(sizeof(UI_StashViewButton_C_PreConstruct) == 0x000001, "Wrong size on UI_StashViewButton_C_PreConstruct");
static_assert(offsetof(UI_StashViewButton_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'UI_StashViewButton_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function UI_StashViewButton.UI_StashViewButton_C.isFocused
// 0x0002 (0x0002 - 0x0000)
struct UI_StashViewButton_C_IsFocused final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_HasFocus_ReturnValue;                     // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UI_StashViewButton_C_IsFocused) == 0x000001, "Wrong alignment on UI_StashViewButton_C_IsFocused");
static_assert(sizeof(UI_StashViewButton_C_IsFocused) == 0x000002, "Wrong size on UI_StashViewButton_C_IsFocused");
static_assert(offsetof(UI_StashViewButton_C_IsFocused, ReturnValue) == 0x000000, "Member 'UI_StashViewButton_C_IsFocused::ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_StashViewButton_C_IsFocused, CallFunc_HasFocus_ReturnValue) == 0x000001, "Member 'UI_StashViewButton_C_IsFocused::CallFunc_HasFocus_ReturnValue' has a wrong offset!");

}

