#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_MementoListItem

#include "Basic.hpp"

#include "F_MementoInfo_structs.hpp"
#include "Flame_structs.hpp"


namespace SDK::Params
{

// Function UI_MementoListItem.UI_MementoListItem_C.ExecuteUbergraph_UI_MementoListItem
// 0x0058 (0x0058 - 0x0000)
struct UI_MementoListItem_C_ExecuteUbergraph_UI_MementoListItem final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UButton*                                K2Node_ComponentBoundEvent_Sender;                 // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UButton*                                K2Node_ComponentBoundEvent_Sender_4;               // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UButton*                                K2Node_ComponentBoundEvent_Sender_3;               // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UButton*                                K2Node_ComponentBoundEvent_Sender_2;               // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UButton*                                K2Node_ComponentBoundEvent_Sender_1;               // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetClassDisplayName_ReturnValue;          // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0048(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_MementoListItem_C_ExecuteUbergraph_UI_MementoListItem) == 0x000008, "Wrong alignment on UI_MementoListItem_C_ExecuteUbergraph_UI_MementoListItem");
static_assert(sizeof(UI_MementoListItem_C_ExecuteUbergraph_UI_MementoListItem) == 0x000058, "Wrong size on UI_MementoListItem_C_ExecuteUbergraph_UI_MementoListItem");
static_assert(offsetof(UI_MementoListItem_C_ExecuteUbergraph_UI_MementoListItem, EntryPoint) == 0x000000, "Member 'UI_MementoListItem_C_ExecuteUbergraph_UI_MementoListItem::EntryPoint' has a wrong offset!");
static_assert(offsetof(UI_MementoListItem_C_ExecuteUbergraph_UI_MementoListItem, K2Node_ComponentBoundEvent_Sender) == 0x000008, "Member 'UI_MementoListItem_C_ExecuteUbergraph_UI_MementoListItem::K2Node_ComponentBoundEvent_Sender' has a wrong offset!");
static_assert(offsetof(UI_MementoListItem_C_ExecuteUbergraph_UI_MementoListItem, K2Node_ComponentBoundEvent_Sender_4) == 0x000010, "Member 'UI_MementoListItem_C_ExecuteUbergraph_UI_MementoListItem::K2Node_ComponentBoundEvent_Sender_4' has a wrong offset!");
static_assert(offsetof(UI_MementoListItem_C_ExecuteUbergraph_UI_MementoListItem, K2Node_ComponentBoundEvent_Sender_3) == 0x000018, "Member 'UI_MementoListItem_C_ExecuteUbergraph_UI_MementoListItem::K2Node_ComponentBoundEvent_Sender_3' has a wrong offset!");
static_assert(offsetof(UI_MementoListItem_C_ExecuteUbergraph_UI_MementoListItem, K2Node_ComponentBoundEvent_Sender_2) == 0x000020, "Member 'UI_MementoListItem_C_ExecuteUbergraph_UI_MementoListItem::K2Node_ComponentBoundEvent_Sender_2' has a wrong offset!");
static_assert(offsetof(UI_MementoListItem_C_ExecuteUbergraph_UI_MementoListItem, K2Node_ComponentBoundEvent_Sender_1) == 0x000028, "Member 'UI_MementoListItem_C_ExecuteUbergraph_UI_MementoListItem::K2Node_ComponentBoundEvent_Sender_1' has a wrong offset!");
static_assert(offsetof(UI_MementoListItem_C_ExecuteUbergraph_UI_MementoListItem, CallFunc_GetClassDisplayName_ReturnValue) == 0x000030, "Member 'UI_MementoListItem_C_ExecuteUbergraph_UI_MementoListItem::CallFunc_GetClassDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_MementoListItem_C_ExecuteUbergraph_UI_MementoListItem, CallFunc_GetOwningPlayer_ReturnValue) == 0x000040, "Member 'UI_MementoListItem_C_ExecuteUbergraph_UI_MementoListItem::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_MementoListItem_C_ExecuteUbergraph_UI_MementoListItem, CallFunc_Concat_StrStr_ReturnValue) == 0x000048, "Member 'UI_MementoListItem_C_ExecuteUbergraph_UI_MementoListItem::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");

// Function UI_MementoListItem.UI_MementoListItem_C.BndEvt__UI_MementoListItem_ListItemButton_K2Node_ComponentBoundEvent_5_OnButtonPressedEvent__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct UI_MementoListItem_C_BndEvt__UI_MementoListItem_ListItemButton_K2Node_ComponentBoundEvent_5_OnButtonPressedEvent__DelegateSignature final
{
public:
	class UButton*                                Sender;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_MementoListItem_C_BndEvt__UI_MementoListItem_ListItemButton_K2Node_ComponentBoundEvent_5_OnButtonPressedEvent__DelegateSignature) == 0x000008, "Wrong alignment on UI_MementoListItem_C_BndEvt__UI_MementoListItem_ListItemButton_K2Node_ComponentBoundEvent_5_OnButtonPressedEvent__DelegateSignature");
static_assert(sizeof(UI_MementoListItem_C_BndEvt__UI_MementoListItem_ListItemButton_K2Node_ComponentBoundEvent_5_OnButtonPressedEvent__DelegateSignature) == 0x000008, "Wrong size on UI_MementoListItem_C_BndEvt__UI_MementoListItem_ListItemButton_K2Node_ComponentBoundEvent_5_OnButtonPressedEvent__DelegateSignature");
static_assert(offsetof(UI_MementoListItem_C_BndEvt__UI_MementoListItem_ListItemButton_K2Node_ComponentBoundEvent_5_OnButtonPressedEvent__DelegateSignature, Sender) == 0x000000, "Member 'UI_MementoListItem_C_BndEvt__UI_MementoListItem_ListItemButton_K2Node_ComponentBoundEvent_5_OnButtonPressedEvent__DelegateSignature::Sender' has a wrong offset!");

// Function UI_MementoListItem.UI_MementoListItem_C.BndEvt__UI_MementoListItem_ListItemButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct UI_MementoListItem_C_BndEvt__UI_MementoListItem_ListItemButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature final
{
public:
	class UButton*                                Sender;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_MementoListItem_C_BndEvt__UI_MementoListItem_ListItemButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature) == 0x000008, "Wrong alignment on UI_MementoListItem_C_BndEvt__UI_MementoListItem_ListItemButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature");
static_assert(sizeof(UI_MementoListItem_C_BndEvt__UI_MementoListItem_ListItemButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature) == 0x000008, "Wrong size on UI_MementoListItem_C_BndEvt__UI_MementoListItem_ListItemButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature");
static_assert(offsetof(UI_MementoListItem_C_BndEvt__UI_MementoListItem_ListItemButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature, Sender) == 0x000000, "Member 'UI_MementoListItem_C_BndEvt__UI_MementoListItem_ListItemButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature::Sender' has a wrong offset!");

// Function UI_MementoListItem.UI_MementoListItem_C.BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonFocusEvent__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct UI_MementoListItem_C_BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonFocusEvent__DelegateSignature final
{
public:
	class UButton*                                Sender;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_MementoListItem_C_BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonFocusEvent__DelegateSignature) == 0x000008, "Wrong alignment on UI_MementoListItem_C_BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonFocusEvent__DelegateSignature");
static_assert(sizeof(UI_MementoListItem_C_BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonFocusEvent__DelegateSignature) == 0x000008, "Wrong size on UI_MementoListItem_C_BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonFocusEvent__DelegateSignature");
static_assert(offsetof(UI_MementoListItem_C_BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonFocusEvent__DelegateSignature, Sender) == 0x000000, "Member 'UI_MementoListItem_C_BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonFocusEvent__DelegateSignature::Sender' has a wrong offset!");

// Function UI_MementoListItem.UI_MementoListItem_C.BndEvt__Button_K2Node_ComponentBoundEvent_70_OnButtonFocusEvent__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct UI_MementoListItem_C_BndEvt__Button_K2Node_ComponentBoundEvent_70_OnButtonFocusEvent__DelegateSignature final
{
public:
	class UButton*                                Sender;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_MementoListItem_C_BndEvt__Button_K2Node_ComponentBoundEvent_70_OnButtonFocusEvent__DelegateSignature) == 0x000008, "Wrong alignment on UI_MementoListItem_C_BndEvt__Button_K2Node_ComponentBoundEvent_70_OnButtonFocusEvent__DelegateSignature");
static_assert(sizeof(UI_MementoListItem_C_BndEvt__Button_K2Node_ComponentBoundEvent_70_OnButtonFocusEvent__DelegateSignature) == 0x000008, "Wrong size on UI_MementoListItem_C_BndEvt__Button_K2Node_ComponentBoundEvent_70_OnButtonFocusEvent__DelegateSignature");
static_assert(offsetof(UI_MementoListItem_C_BndEvt__Button_K2Node_ComponentBoundEvent_70_OnButtonFocusEvent__DelegateSignature, Sender) == 0x000000, "Member 'UI_MementoListItem_C_BndEvt__Button_K2Node_ComponentBoundEvent_70_OnButtonFocusEvent__DelegateSignature::Sender' has a wrong offset!");

// Function UI_MementoListItem.UI_MementoListItem_C.BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct UI_MementoListItem_C_BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature final
{
public:
	class UButton*                                Sender;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_MementoListItem_C_BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature) == 0x000008, "Wrong alignment on UI_MementoListItem_C_BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
static_assert(sizeof(UI_MementoListItem_C_BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature) == 0x000008, "Wrong size on UI_MementoListItem_C_BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
static_assert(offsetof(UI_MementoListItem_C_BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature, Sender) == 0x000000, "Member 'UI_MementoListItem_C_BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature::Sender' has a wrong offset!");

// Function UI_MementoListItem.UI_MementoListItem_C.Refresh Visuals
// 0x00F8 (0x00F8 - 0x0000)
struct UI_MementoListItem_C_Refresh_Visuals final
{
public:
	bool                                          Temp_bool_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Temp_text_Variable;                                // 0x0008(0x0018)()
	bool                                          Temp_bool_Variable_1;                              // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             Temp_object_Variable;                              // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_2;                              // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Temp_text_Variable_1;                              // 0x0038(0x0018)()
	class FString                                 CallFunc_GetClassDisplayName_ReturnValue;          // 0x0050(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0060(0x0018)()
	bool                                          CallFunc_IsValidClass_ReturnValue;                 // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_79[0x7];                                       // 0x0079(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_Memento_Base_C*                     CallFunc_GetClassDefaultObject_ReturnValue;        // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             CallFunc_GetIcon_ReturnValue;                      // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FItemRarity                            CallFunc_GetItemRarity_ReturnValue;                // 0x0090(0x0028)(ConstParm)
	class FText                                   K2Node_Select_Default;                             // 0x00B8(0x0018)()
	class UTexture2D*                             K2Node_Select_Default_1;                           // 0x00D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsShipping_ReturnValue;                   // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_D9[0x7];                                       // 0x00D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_Select_Default_2;                           // 0x00E0(0x0018)()
};
static_assert(alignof(UI_MementoListItem_C_Refresh_Visuals) == 0x000008, "Wrong alignment on UI_MementoListItem_C_Refresh_Visuals");
static_assert(sizeof(UI_MementoListItem_C_Refresh_Visuals) == 0x0000F8, "Wrong size on UI_MementoListItem_C_Refresh_Visuals");
static_assert(offsetof(UI_MementoListItem_C_Refresh_Visuals, Temp_bool_Variable) == 0x000000, "Member 'UI_MementoListItem_C_Refresh_Visuals::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(UI_MementoListItem_C_Refresh_Visuals, Temp_text_Variable) == 0x000008, "Member 'UI_MementoListItem_C_Refresh_Visuals::Temp_text_Variable' has a wrong offset!");
static_assert(offsetof(UI_MementoListItem_C_Refresh_Visuals, Temp_bool_Variable_1) == 0x000020, "Member 'UI_MementoListItem_C_Refresh_Visuals::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(UI_MementoListItem_C_Refresh_Visuals, Temp_object_Variable) == 0x000028, "Member 'UI_MementoListItem_C_Refresh_Visuals::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(UI_MementoListItem_C_Refresh_Visuals, Temp_bool_Variable_2) == 0x000030, "Member 'UI_MementoListItem_C_Refresh_Visuals::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(UI_MementoListItem_C_Refresh_Visuals, Temp_text_Variable_1) == 0x000038, "Member 'UI_MementoListItem_C_Refresh_Visuals::Temp_text_Variable_1' has a wrong offset!");
static_assert(offsetof(UI_MementoListItem_C_Refresh_Visuals, CallFunc_GetClassDisplayName_ReturnValue) == 0x000050, "Member 'UI_MementoListItem_C_Refresh_Visuals::CallFunc_GetClassDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_MementoListItem_C_Refresh_Visuals, CallFunc_Conv_StringToText_ReturnValue) == 0x000060, "Member 'UI_MementoListItem_C_Refresh_Visuals::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_MementoListItem_C_Refresh_Visuals, CallFunc_IsValidClass_ReturnValue) == 0x000078, "Member 'UI_MementoListItem_C_Refresh_Visuals::CallFunc_IsValidClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_MementoListItem_C_Refresh_Visuals, CallFunc_GetClassDefaultObject_ReturnValue) == 0x000080, "Member 'UI_MementoListItem_C_Refresh_Visuals::CallFunc_GetClassDefaultObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_MementoListItem_C_Refresh_Visuals, CallFunc_GetIcon_ReturnValue) == 0x000088, "Member 'UI_MementoListItem_C_Refresh_Visuals::CallFunc_GetIcon_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_MementoListItem_C_Refresh_Visuals, CallFunc_GetItemRarity_ReturnValue) == 0x000090, "Member 'UI_MementoListItem_C_Refresh_Visuals::CallFunc_GetItemRarity_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_MementoListItem_C_Refresh_Visuals, K2Node_Select_Default) == 0x0000B8, "Member 'UI_MementoListItem_C_Refresh_Visuals::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(UI_MementoListItem_C_Refresh_Visuals, K2Node_Select_Default_1) == 0x0000D0, "Member 'UI_MementoListItem_C_Refresh_Visuals::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(UI_MementoListItem_C_Refresh_Visuals, CallFunc_IsShipping_ReturnValue) == 0x0000D8, "Member 'UI_MementoListItem_C_Refresh_Visuals::CallFunc_IsShipping_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_MementoListItem_C_Refresh_Visuals, K2Node_Select_Default_2) == 0x0000E0, "Member 'UI_MementoListItem_C_Refresh_Visuals::K2Node_Select_Default_2' has a wrong offset!");

// Function UI_MementoListItem.UI_MementoListItem_C.Get Memento Info
// 0x00B8 (0x00B8 - 0x0000)
struct UI_MementoListItem_C_Get_Memento_Info final
{
public:
	struct FF_MementoInfo                         Memento_Info_0;                                    // 0x0000(0x00B0)(Parm, OutParm, HasGetValueTypeHash)
	bool                                          Memento_Unlocked_0;                                // 0x00B0(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UI_MementoListItem_C_Get_Memento_Info) == 0x000008, "Wrong alignment on UI_MementoListItem_C_Get_Memento_Info");
static_assert(sizeof(UI_MementoListItem_C_Get_Memento_Info) == 0x0000B8, "Wrong size on UI_MementoListItem_C_Get_Memento_Info");
static_assert(offsetof(UI_MementoListItem_C_Get_Memento_Info, Memento_Info_0) == 0x000000, "Member 'UI_MementoListItem_C_Get_Memento_Info::Memento_Info_0' has a wrong offset!");
static_assert(offsetof(UI_MementoListItem_C_Get_Memento_Info, Memento_Unlocked_0) == 0x0000B0, "Member 'UI_MementoListItem_C_Get_Memento_Info::Memento_Unlocked_0' has a wrong offset!");

}

