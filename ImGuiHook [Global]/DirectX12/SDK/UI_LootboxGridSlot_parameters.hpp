#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_LootboxGridSlot

#include "Basic.hpp"


namespace SDK::Params
{

// Function UI_LootboxGridSlot.UI_LootboxGridSlot_C.ExecuteUbergraph_UI_LootboxGridSlot
// 0x0088 (0x0088 - 0x0000)
struct UI_LootboxGridSlot_C_ExecuteUbergraph_UI_LootboxGridSlot final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UButton*                                K2Node_ComponentBoundEvent_Sender_3;               // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_ItemLooted;                     // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0022(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_23[0x5];                                       // 0x0023(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UButton*                                K2Node_ComponentBoundEvent_Sender_2;               // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UButton*                                K2Node_ComponentBoundEvent_Sender_1;               // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UButton*                                K2Node_ComponentBoundEvent_Sender;                 // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsPlatformGroupDesktop_ReturnValue;       // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UUI_CustomCursor_C*>             CallFunc_GetAllWidgetsOfClass_FoundWidgets;        // 0x0048(0x0010)(ReferenceParm, ContainsInstancedReference)
	class UUI_CustomCursor_C*                     CallFunc_Array_Get_Item;                           // 0x0058(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0064(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_65[0x3];                                       // 0x0065(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UUI_CustomCursor_C*>             CallFunc_GetAllWidgetsOfClass_FoundWidgets_1;      // 0x0068(0x0010)(ReferenceParm, ContainsInstancedReference)
	class UUI_CustomCursor_C*                     CallFunc_Array_Get_Item_1;                         // 0x0078(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0084(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsPlatformGroupDesktop_ReturnValue_1;     // 0x0085(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UI_LootboxGridSlot_C_ExecuteUbergraph_UI_LootboxGridSlot) == 0x000008, "Wrong alignment on UI_LootboxGridSlot_C_ExecuteUbergraph_UI_LootboxGridSlot");
static_assert(sizeof(UI_LootboxGridSlot_C_ExecuteUbergraph_UI_LootboxGridSlot) == 0x000088, "Wrong size on UI_LootboxGridSlot_C_ExecuteUbergraph_UI_LootboxGridSlot");
static_assert(offsetof(UI_LootboxGridSlot_C_ExecuteUbergraph_UI_LootboxGridSlot, EntryPoint) == 0x000000, "Member 'UI_LootboxGridSlot_C_ExecuteUbergraph_UI_LootboxGridSlot::EntryPoint' has a wrong offset!");
static_assert(offsetof(UI_LootboxGridSlot_C_ExecuteUbergraph_UI_LootboxGridSlot, Temp_int_Variable) == 0x000004, "Member 'UI_LootboxGridSlot_C_ExecuteUbergraph_UI_LootboxGridSlot::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(UI_LootboxGridSlot_C_ExecuteUbergraph_UI_LootboxGridSlot, Temp_int_Variable_1) == 0x000008, "Member 'UI_LootboxGridSlot_C_ExecuteUbergraph_UI_LootboxGridSlot::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(UI_LootboxGridSlot_C_ExecuteUbergraph_UI_LootboxGridSlot, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'UI_LootboxGridSlot_C_ExecuteUbergraph_UI_LootboxGridSlot::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_LootboxGridSlot_C_ExecuteUbergraph_UI_LootboxGridSlot, CallFunc_Add_IntInt_ReturnValue_1) == 0x000010, "Member 'UI_LootboxGridSlot_C_ExecuteUbergraph_UI_LootboxGridSlot::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_LootboxGridSlot_C_ExecuteUbergraph_UI_LootboxGridSlot, K2Node_ComponentBoundEvent_Sender_3) == 0x000018, "Member 'UI_LootboxGridSlot_C_ExecuteUbergraph_UI_LootboxGridSlot::K2Node_ComponentBoundEvent_Sender_3' has a wrong offset!");
static_assert(offsetof(UI_LootboxGridSlot_C_ExecuteUbergraph_UI_LootboxGridSlot, CallFunc_IsValid_ReturnValue) == 0x000020, "Member 'UI_LootboxGridSlot_C_ExecuteUbergraph_UI_LootboxGridSlot::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_LootboxGridSlot_C_ExecuteUbergraph_UI_LootboxGridSlot, K2Node_CustomEvent_ItemLooted) == 0x000021, "Member 'UI_LootboxGridSlot_C_ExecuteUbergraph_UI_LootboxGridSlot::K2Node_CustomEvent_ItemLooted' has a wrong offset!");
static_assert(offsetof(UI_LootboxGridSlot_C_ExecuteUbergraph_UI_LootboxGridSlot, K2Node_Event_IsDesignTime) == 0x000022, "Member 'UI_LootboxGridSlot_C_ExecuteUbergraph_UI_LootboxGridSlot::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(UI_LootboxGridSlot_C_ExecuteUbergraph_UI_LootboxGridSlot, K2Node_ComponentBoundEvent_Sender_2) == 0x000028, "Member 'UI_LootboxGridSlot_C_ExecuteUbergraph_UI_LootboxGridSlot::K2Node_ComponentBoundEvent_Sender_2' has a wrong offset!");
static_assert(offsetof(UI_LootboxGridSlot_C_ExecuteUbergraph_UI_LootboxGridSlot, K2Node_ComponentBoundEvent_Sender_1) == 0x000030, "Member 'UI_LootboxGridSlot_C_ExecuteUbergraph_UI_LootboxGridSlot::K2Node_ComponentBoundEvent_Sender_1' has a wrong offset!");
static_assert(offsetof(UI_LootboxGridSlot_C_ExecuteUbergraph_UI_LootboxGridSlot, K2Node_ComponentBoundEvent_Sender) == 0x000038, "Member 'UI_LootboxGridSlot_C_ExecuteUbergraph_UI_LootboxGridSlot::K2Node_ComponentBoundEvent_Sender' has a wrong offset!");
static_assert(offsetof(UI_LootboxGridSlot_C_ExecuteUbergraph_UI_LootboxGridSlot, CallFunc_IsPlatformGroupDesktop_ReturnValue) == 0x000040, "Member 'UI_LootboxGridSlot_C_ExecuteUbergraph_UI_LootboxGridSlot::CallFunc_IsPlatformGroupDesktop_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_LootboxGridSlot_C_ExecuteUbergraph_UI_LootboxGridSlot, CallFunc_GetAllWidgetsOfClass_FoundWidgets) == 0x000048, "Member 'UI_LootboxGridSlot_C_ExecuteUbergraph_UI_LootboxGridSlot::CallFunc_GetAllWidgetsOfClass_FoundWidgets' has a wrong offset!");
static_assert(offsetof(UI_LootboxGridSlot_C_ExecuteUbergraph_UI_LootboxGridSlot, CallFunc_Array_Get_Item) == 0x000058, "Member 'UI_LootboxGridSlot_C_ExecuteUbergraph_UI_LootboxGridSlot::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(UI_LootboxGridSlot_C_ExecuteUbergraph_UI_LootboxGridSlot, CallFunc_Array_Length_ReturnValue) == 0x000060, "Member 'UI_LootboxGridSlot_C_ExecuteUbergraph_UI_LootboxGridSlot::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_LootboxGridSlot_C_ExecuteUbergraph_UI_LootboxGridSlot, CallFunc_Less_IntInt_ReturnValue) == 0x000064, "Member 'UI_LootboxGridSlot_C_ExecuteUbergraph_UI_LootboxGridSlot::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_LootboxGridSlot_C_ExecuteUbergraph_UI_LootboxGridSlot, CallFunc_GetAllWidgetsOfClass_FoundWidgets_1) == 0x000068, "Member 'UI_LootboxGridSlot_C_ExecuteUbergraph_UI_LootboxGridSlot::CallFunc_GetAllWidgetsOfClass_FoundWidgets_1' has a wrong offset!");
static_assert(offsetof(UI_LootboxGridSlot_C_ExecuteUbergraph_UI_LootboxGridSlot, CallFunc_Array_Get_Item_1) == 0x000078, "Member 'UI_LootboxGridSlot_C_ExecuteUbergraph_UI_LootboxGridSlot::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(UI_LootboxGridSlot_C_ExecuteUbergraph_UI_LootboxGridSlot, CallFunc_Array_Length_ReturnValue_1) == 0x000080, "Member 'UI_LootboxGridSlot_C_ExecuteUbergraph_UI_LootboxGridSlot::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_LootboxGridSlot_C_ExecuteUbergraph_UI_LootboxGridSlot, CallFunc_Less_IntInt_ReturnValue_1) == 0x000084, "Member 'UI_LootboxGridSlot_C_ExecuteUbergraph_UI_LootboxGridSlot::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_LootboxGridSlot_C_ExecuteUbergraph_UI_LootboxGridSlot, CallFunc_IsPlatformGroupDesktop_ReturnValue_1) == 0x000085, "Member 'UI_LootboxGridSlot_C_ExecuteUbergraph_UI_LootboxGridSlot::CallFunc_IsPlatformGroupDesktop_ReturnValue_1' has a wrong offset!");

// Function UI_LootboxGridSlot.UI_LootboxGridSlot_C.BndEvt__UI_LootboxGridSlot_InteractButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct UI_LootboxGridSlot_C_BndEvt__UI_LootboxGridSlot_InteractButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature final
{
public:
	class UButton*                                Sender;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_LootboxGridSlot_C_BndEvt__UI_LootboxGridSlot_InteractButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature) == 0x000008, "Wrong alignment on UI_LootboxGridSlot_C_BndEvt__UI_LootboxGridSlot_InteractButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");
static_assert(sizeof(UI_LootboxGridSlot_C_BndEvt__UI_LootboxGridSlot_InteractButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature) == 0x000008, "Wrong size on UI_LootboxGridSlot_C_BndEvt__UI_LootboxGridSlot_InteractButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");
static_assert(offsetof(UI_LootboxGridSlot_C_BndEvt__UI_LootboxGridSlot_InteractButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature, Sender) == 0x000000, "Member 'UI_LootboxGridSlot_C_BndEvt__UI_LootboxGridSlot_InteractButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature::Sender' has a wrong offset!");

// Function UI_LootboxGridSlot.UI_LootboxGridSlot_C.BndEvt__UI_LootboxGridSlot_InteractButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct UI_LootboxGridSlot_C_BndEvt__UI_LootboxGridSlot_InteractButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature final
{
public:
	class UButton*                                Sender;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_LootboxGridSlot_C_BndEvt__UI_LootboxGridSlot_InteractButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature) == 0x000008, "Wrong alignment on UI_LootboxGridSlot_C_BndEvt__UI_LootboxGridSlot_InteractButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");
static_assert(sizeof(UI_LootboxGridSlot_C_BndEvt__UI_LootboxGridSlot_InteractButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature) == 0x000008, "Wrong size on UI_LootboxGridSlot_C_BndEvt__UI_LootboxGridSlot_InteractButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");
static_assert(offsetof(UI_LootboxGridSlot_C_BndEvt__UI_LootboxGridSlot_InteractButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature, Sender) == 0x000000, "Member 'UI_LootboxGridSlot_C_BndEvt__UI_LootboxGridSlot_InteractButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature::Sender' has a wrong offset!");

// Function UI_LootboxGridSlot.UI_LootboxGridSlot_C.BndEvt__FlameButton_0_K2Node_ComponentBoundEvent_37_OnButtonFocusEvent__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct UI_LootboxGridSlot_C_BndEvt__FlameButton_0_K2Node_ComponentBoundEvent_37_OnButtonFocusEvent__DelegateSignature final
{
public:
	class UButton*                                Sender;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_LootboxGridSlot_C_BndEvt__FlameButton_0_K2Node_ComponentBoundEvent_37_OnButtonFocusEvent__DelegateSignature) == 0x000008, "Wrong alignment on UI_LootboxGridSlot_C_BndEvt__FlameButton_0_K2Node_ComponentBoundEvent_37_OnButtonFocusEvent__DelegateSignature");
static_assert(sizeof(UI_LootboxGridSlot_C_BndEvt__FlameButton_0_K2Node_ComponentBoundEvent_37_OnButtonFocusEvent__DelegateSignature) == 0x000008, "Wrong size on UI_LootboxGridSlot_C_BndEvt__FlameButton_0_K2Node_ComponentBoundEvent_37_OnButtonFocusEvent__DelegateSignature");
static_assert(offsetof(UI_LootboxGridSlot_C_BndEvt__FlameButton_0_K2Node_ComponentBoundEvent_37_OnButtonFocusEvent__DelegateSignature, Sender) == 0x000000, "Member 'UI_LootboxGridSlot_C_BndEvt__FlameButton_0_K2Node_ComponentBoundEvent_37_OnButtonFocusEvent__DelegateSignature::Sender' has a wrong offset!");

// Function UI_LootboxGridSlot.UI_LootboxGridSlot_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct UI_LootboxGridSlot_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UI_LootboxGridSlot_C_PreConstruct) == 0x000001, "Wrong alignment on UI_LootboxGridSlot_C_PreConstruct");
static_assert(sizeof(UI_LootboxGridSlot_C_PreConstruct) == 0x000001, "Wrong size on UI_LootboxGridSlot_C_PreConstruct");
static_assert(offsetof(UI_LootboxGridSlot_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'UI_LootboxGridSlot_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function UI_LootboxGridSlot.UI_LootboxGridSlot_C.SetItemLooted
// 0x0001 (0x0001 - 0x0000)
struct UI_LootboxGridSlot_C_SetItemLooted final
{
public:
	bool                                          ItemLooted_0;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UI_LootboxGridSlot_C_SetItemLooted) == 0x000001, "Wrong alignment on UI_LootboxGridSlot_C_SetItemLooted");
static_assert(sizeof(UI_LootboxGridSlot_C_SetItemLooted) == 0x000001, "Wrong size on UI_LootboxGridSlot_C_SetItemLooted");
static_assert(offsetof(UI_LootboxGridSlot_C_SetItemLooted, ItemLooted_0) == 0x000000, "Member 'UI_LootboxGridSlot_C_SetItemLooted::ItemLooted_0' has a wrong offset!");

// Function UI_LootboxGridSlot.UI_LootboxGridSlot_C.BndEvt__InteractButton_K2Node_ComponentBoundEvent_19_OnButtonClickedEvent__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct UI_LootboxGridSlot_C_BndEvt__InteractButton_K2Node_ComponentBoundEvent_19_OnButtonClickedEvent__DelegateSignature final
{
public:
	class UButton*                                Sender;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_LootboxGridSlot_C_BndEvt__InteractButton_K2Node_ComponentBoundEvent_19_OnButtonClickedEvent__DelegateSignature) == 0x000008, "Wrong alignment on UI_LootboxGridSlot_C_BndEvt__InteractButton_K2Node_ComponentBoundEvent_19_OnButtonClickedEvent__DelegateSignature");
static_assert(sizeof(UI_LootboxGridSlot_C_BndEvt__InteractButton_K2Node_ComponentBoundEvent_19_OnButtonClickedEvent__DelegateSignature) == 0x000008, "Wrong size on UI_LootboxGridSlot_C_BndEvt__InteractButton_K2Node_ComponentBoundEvent_19_OnButtonClickedEvent__DelegateSignature");
static_assert(offsetof(UI_LootboxGridSlot_C_BndEvt__InteractButton_K2Node_ComponentBoundEvent_19_OnButtonClickedEvent__DelegateSignature, Sender) == 0x000000, "Member 'UI_LootboxGridSlot_C_BndEvt__InteractButton_K2Node_ComponentBoundEvent_19_OnButtonClickedEvent__DelegateSignature::Sender' has a wrong offset!");

// Function UI_LootboxGridSlot.UI_LootboxGridSlot_C.UpdateItemCount
// 0x0018 (0x0018 - 0x0000)
struct UI_LootboxGridSlot_C_UpdateItemCount final
{
public:
	int32                                         ItemCount;                                         // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AItem*                                  CallFunc_GetItemObsolete_ReturnValue;              // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetCount_ReturnValue;                     // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UI_LootboxGridSlot_C_UpdateItemCount) == 0x000008, "Wrong alignment on UI_LootboxGridSlot_C_UpdateItemCount");
static_assert(sizeof(UI_LootboxGridSlot_C_UpdateItemCount) == 0x000018, "Wrong size on UI_LootboxGridSlot_C_UpdateItemCount");
static_assert(offsetof(UI_LootboxGridSlot_C_UpdateItemCount, ItemCount) == 0x000000, "Member 'UI_LootboxGridSlot_C_UpdateItemCount::ItemCount' has a wrong offset!");
static_assert(offsetof(UI_LootboxGridSlot_C_UpdateItemCount, CallFunc_GetItemObsolete_ReturnValue) == 0x000008, "Member 'UI_LootboxGridSlot_C_UpdateItemCount::CallFunc_GetItemObsolete_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_LootboxGridSlot_C_UpdateItemCount, CallFunc_GetCount_ReturnValue) == 0x000010, "Member 'UI_LootboxGridSlot_C_UpdateItemCount::CallFunc_GetCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_LootboxGridSlot_C_UpdateItemCount, CallFunc_IsValid_ReturnValue) == 0x000014, "Member 'UI_LootboxGridSlot_C_UpdateItemCount::CallFunc_IsValid_ReturnValue' has a wrong offset!");

}

