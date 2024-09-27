#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_GameGuide_ListItem

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function UI_GameGuide_ListItem.UI_GameGuide_ListItem_C.ExecuteUbergraph_UI_GameGuide_ListItem
// 0x0018 (0x0018 - 0x0000)
struct UI_GameGuide_ListItem_C_ExecuteUbergraph_UI_GameGuide_ListItem final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPanelWidget*                           CallFunc_GetParent_ReturnValue;                    // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UI_GameGuide_ListItem_C_ExecuteUbergraph_UI_GameGuide_ListItem) == 0x000008, "Wrong alignment on UI_GameGuide_ListItem_C_ExecuteUbergraph_UI_GameGuide_ListItem");
static_assert(sizeof(UI_GameGuide_ListItem_C_ExecuteUbergraph_UI_GameGuide_ListItem) == 0x000018, "Wrong size on UI_GameGuide_ListItem_C_ExecuteUbergraph_UI_GameGuide_ListItem");
static_assert(offsetof(UI_GameGuide_ListItem_C_ExecuteUbergraph_UI_GameGuide_ListItem, EntryPoint) == 0x000000, "Member 'UI_GameGuide_ListItem_C_ExecuteUbergraph_UI_GameGuide_ListItem::EntryPoint' has a wrong offset!");
static_assert(offsetof(UI_GameGuide_ListItem_C_ExecuteUbergraph_UI_GameGuide_ListItem, CallFunc_GetParent_ReturnValue) == 0x000008, "Member 'UI_GameGuide_ListItem_C_ExecuteUbergraph_UI_GameGuide_ListItem::CallFunc_GetParent_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_GameGuide_ListItem_C_ExecuteUbergraph_UI_GameGuide_ListItem, K2Node_Event_IsDesignTime) == 0x000010, "Member 'UI_GameGuide_ListItem_C_ExecuteUbergraph_UI_GameGuide_ListItem::K2Node_Event_IsDesignTime' has a wrong offset!");

// Function UI_GameGuide_ListItem.UI_GameGuide_ListItem_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct UI_GameGuide_ListItem_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UI_GameGuide_ListItem_C_PreConstruct) == 0x000001, "Wrong alignment on UI_GameGuide_ListItem_C_PreConstruct");
static_assert(sizeof(UI_GameGuide_ListItem_C_PreConstruct) == 0x000001, "Wrong size on UI_GameGuide_ListItem_C_PreConstruct");
static_assert(offsetof(UI_GameGuide_ListItem_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'UI_GameGuide_ListItem_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function UI_GameGuide_ListItem.UI_GameGuide_ListItem_C.OnFocusReceived
// 0x01B0 (0x01B0 - 0x0000)
struct UI_GameGuide_ListItem_C_OnFocusReceived final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FFocusEvent                            InFocusEvent;                                      // 0x0038(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FEventReply                            ReturnValue;                                       // 0x0040(0x00B8)(Parm, OutParm, ReturnParm)
	struct FEventReply                            K2Node_MakeStruct_EventReply;                      // 0x00F8(0x00B8)()
};
static_assert(alignof(UI_GameGuide_ListItem_C_OnFocusReceived) == 0x000008, "Wrong alignment on UI_GameGuide_ListItem_C_OnFocusReceived");
static_assert(sizeof(UI_GameGuide_ListItem_C_OnFocusReceived) == 0x0001B0, "Wrong size on UI_GameGuide_ListItem_C_OnFocusReceived");
static_assert(offsetof(UI_GameGuide_ListItem_C_OnFocusReceived, MyGeometry) == 0x000000, "Member 'UI_GameGuide_ListItem_C_OnFocusReceived::MyGeometry' has a wrong offset!");
static_assert(offsetof(UI_GameGuide_ListItem_C_OnFocusReceived, InFocusEvent) == 0x000038, "Member 'UI_GameGuide_ListItem_C_OnFocusReceived::InFocusEvent' has a wrong offset!");
static_assert(offsetof(UI_GameGuide_ListItem_C_OnFocusReceived, ReturnValue) == 0x000040, "Member 'UI_GameGuide_ListItem_C_OnFocusReceived::ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_GameGuide_ListItem_C_OnFocusReceived, K2Node_MakeStruct_EventReply) == 0x0000F8, "Member 'UI_GameGuide_ListItem_C_OnFocusReceived::K2Node_MakeStruct_EventReply' has a wrong offset!");

// Function UI_GameGuide_ListItem.UI_GameGuide_ListItem_C.Get Next Sibling
// 0x0040 (0x0040 - 0x0000)
struct UI_GameGuide_ListItem_C_Get_Next_Sibling final
{
public:
	class UUI_GameGuide_ListItem_C*               Next_Sibling;                                      // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Sibling_Exists;                                    // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9[0x3];                                        // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetChildIndex_ReturnValue;                // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUI_GameGuide_ListItem_C*               K2Node_DynamicCast_AsUI_Game_Guide_List_Item;      // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UI_GameGuide_ListItem_C_Get_Next_Sibling) == 0x000008, "Wrong alignment on UI_GameGuide_ListItem_C_Get_Next_Sibling");
static_assert(sizeof(UI_GameGuide_ListItem_C_Get_Next_Sibling) == 0x000040, "Wrong size on UI_GameGuide_ListItem_C_Get_Next_Sibling");
static_assert(offsetof(UI_GameGuide_ListItem_C_Get_Next_Sibling, Next_Sibling) == 0x000000, "Member 'UI_GameGuide_ListItem_C_Get_Next_Sibling::Next_Sibling' has a wrong offset!");
static_assert(offsetof(UI_GameGuide_ListItem_C_Get_Next_Sibling, Sibling_Exists) == 0x000008, "Member 'UI_GameGuide_ListItem_C_Get_Next_Sibling::Sibling_Exists' has a wrong offset!");
static_assert(offsetof(UI_GameGuide_ListItem_C_Get_Next_Sibling, CallFunc_GetChildIndex_ReturnValue) == 0x00000C, "Member 'UI_GameGuide_ListItem_C_Get_Next_Sibling::CallFunc_GetChildIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_GameGuide_ListItem_C_Get_Next_Sibling, CallFunc_GetChildrenCount_ReturnValue) == 0x000010, "Member 'UI_GameGuide_ListItem_C_Get_Next_Sibling::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_GameGuide_ListItem_C_Get_Next_Sibling, CallFunc_Add_IntInt_ReturnValue) == 0x000014, "Member 'UI_GameGuide_ListItem_C_Get_Next_Sibling::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_GameGuide_ListItem_C_Get_Next_Sibling, CallFunc_Subtract_IntInt_ReturnValue) == 0x000018, "Member 'UI_GameGuide_ListItem_C_Get_Next_Sibling::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_GameGuide_ListItem_C_Get_Next_Sibling, CallFunc_GetChildAt_ReturnValue) == 0x000020, "Member 'UI_GameGuide_ListItem_C_Get_Next_Sibling::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_GameGuide_ListItem_C_Get_Next_Sibling, CallFunc_Less_IntInt_ReturnValue) == 0x000028, "Member 'UI_GameGuide_ListItem_C_Get_Next_Sibling::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_GameGuide_ListItem_C_Get_Next_Sibling, K2Node_DynamicCast_AsUI_Game_Guide_List_Item) == 0x000030, "Member 'UI_GameGuide_ListItem_C_Get_Next_Sibling::K2Node_DynamicCast_AsUI_Game_Guide_List_Item' has a wrong offset!");
static_assert(offsetof(UI_GameGuide_ListItem_C_Get_Next_Sibling, K2Node_DynamicCast_bSuccess) == 0x000038, "Member 'UI_GameGuide_ListItem_C_Get_Next_Sibling::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function UI_GameGuide_ListItem.UI_GameGuide_ListItem_C.GetPreviousSibling
// 0x0030 (0x0030 - 0x0000)
struct UI_GameGuide_ListItem_C_GetPreviousSibling final
{
public:
	class UUI_GameGuide_ListItem_C*               Previous_Sibling;                                  // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Sibling_Exists;                                    // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9[0x3];                                        // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetChildIndex_ReturnValue;                // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_15[0x3];                                       // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUI_GameGuide_ListItem_C*               K2Node_DynamicCast_AsUI_Game_Guide_List_Item;      // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UI_GameGuide_ListItem_C_GetPreviousSibling) == 0x000008, "Wrong alignment on UI_GameGuide_ListItem_C_GetPreviousSibling");
static_assert(sizeof(UI_GameGuide_ListItem_C_GetPreviousSibling) == 0x000030, "Wrong size on UI_GameGuide_ListItem_C_GetPreviousSibling");
static_assert(offsetof(UI_GameGuide_ListItem_C_GetPreviousSibling, Previous_Sibling) == 0x000000, "Member 'UI_GameGuide_ListItem_C_GetPreviousSibling::Previous_Sibling' has a wrong offset!");
static_assert(offsetof(UI_GameGuide_ListItem_C_GetPreviousSibling, Sibling_Exists) == 0x000008, "Member 'UI_GameGuide_ListItem_C_GetPreviousSibling::Sibling_Exists' has a wrong offset!");
static_assert(offsetof(UI_GameGuide_ListItem_C_GetPreviousSibling, CallFunc_GetChildIndex_ReturnValue) == 0x00000C, "Member 'UI_GameGuide_ListItem_C_GetPreviousSibling::CallFunc_GetChildIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_GameGuide_ListItem_C_GetPreviousSibling, CallFunc_Subtract_IntInt_ReturnValue) == 0x000010, "Member 'UI_GameGuide_ListItem_C_GetPreviousSibling::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_GameGuide_ListItem_C_GetPreviousSibling, CallFunc_Greater_IntInt_ReturnValue) == 0x000014, "Member 'UI_GameGuide_ListItem_C_GetPreviousSibling::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_GameGuide_ListItem_C_GetPreviousSibling, CallFunc_GetChildAt_ReturnValue) == 0x000018, "Member 'UI_GameGuide_ListItem_C_GetPreviousSibling::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_GameGuide_ListItem_C_GetPreviousSibling, K2Node_DynamicCast_AsUI_Game_Guide_List_Item) == 0x000020, "Member 'UI_GameGuide_ListItem_C_GetPreviousSibling::K2Node_DynamicCast_AsUI_Game_Guide_List_Item' has a wrong offset!");
static_assert(offsetof(UI_GameGuide_ListItem_C_GetPreviousSibling, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'UI_GameGuide_ListItem_C_GetPreviousSibling::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function UI_GameGuide_ListItem.UI_GameGuide_ListItem_C.GuideListNavigation_Up
// 0x0018 (0x0018 - 0x0000)
struct UI_GameGuide_ListItem_C_GuideListNavigation_Up final
{
public:
	EUINavigation                                 Navigation_0;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                ReturnValue;                                       // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUI_GameGuide_ListItem_C*               Previous_List_Item;                                // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_GameGuide_ListItem_C_GuideListNavigation_Up) == 0x000008, "Wrong alignment on UI_GameGuide_ListItem_C_GuideListNavigation_Up");
static_assert(sizeof(UI_GameGuide_ListItem_C_GuideListNavigation_Up) == 0x000018, "Wrong size on UI_GameGuide_ListItem_C_GuideListNavigation_Up");
static_assert(offsetof(UI_GameGuide_ListItem_C_GuideListNavigation_Up, Navigation_0) == 0x000000, "Member 'UI_GameGuide_ListItem_C_GuideListNavigation_Up::Navigation_0' has a wrong offset!");
static_assert(offsetof(UI_GameGuide_ListItem_C_GuideListNavigation_Up, ReturnValue) == 0x000008, "Member 'UI_GameGuide_ListItem_C_GuideListNavigation_Up::ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_GameGuide_ListItem_C_GuideListNavigation_Up, Previous_List_Item) == 0x000010, "Member 'UI_GameGuide_ListItem_C_GuideListNavigation_Up::Previous_List_Item' has a wrong offset!");

// Function UI_GameGuide_ListItem.UI_GameGuide_ListItem_C.GuideListNavigation_Down
// 0x0048 (0x0048 - 0x0000)
struct UI_GameGuide_ListItem_C_GuideListNavigation_Down final
{
public:
	EUINavigation                                 Navigation_0;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                ReturnValue;                                       // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUI_GameGuide_ListItem_C*               CurrentItem;                                       // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUI_GameGuide_ListItem_C*               Next_List_Item;                                    // 0x0018(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUI_GameGuide_ListItem_C*               CallFunc_Get_Next_Sibling_Next_Sibling;            // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Get_Next_Sibling_Sibling_Exists;          // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0032(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_33[0x5];                                       // 0x0033(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UUI_GameGuide_ListItem_C*               CallFunc_Get_Next_Sibling_Next_Sibling_1;          // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Get_Next_Sibling_Sibling_Exists_1;        // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UI_GameGuide_ListItem_C_GuideListNavigation_Down) == 0x000008, "Wrong alignment on UI_GameGuide_ListItem_C_GuideListNavigation_Down");
static_assert(sizeof(UI_GameGuide_ListItem_C_GuideListNavigation_Down) == 0x000048, "Wrong size on UI_GameGuide_ListItem_C_GuideListNavigation_Down");
static_assert(offsetof(UI_GameGuide_ListItem_C_GuideListNavigation_Down, Navigation_0) == 0x000000, "Member 'UI_GameGuide_ListItem_C_GuideListNavigation_Down::Navigation_0' has a wrong offset!");
static_assert(offsetof(UI_GameGuide_ListItem_C_GuideListNavigation_Down, ReturnValue) == 0x000008, "Member 'UI_GameGuide_ListItem_C_GuideListNavigation_Down::ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_GameGuide_ListItem_C_GuideListNavigation_Down, CurrentItem) == 0x000010, "Member 'UI_GameGuide_ListItem_C_GuideListNavigation_Down::CurrentItem' has a wrong offset!");
static_assert(offsetof(UI_GameGuide_ListItem_C_GuideListNavigation_Down, Next_List_Item) == 0x000018, "Member 'UI_GameGuide_ListItem_C_GuideListNavigation_Down::Next_List_Item' has a wrong offset!");
static_assert(offsetof(UI_GameGuide_ListItem_C_GuideListNavigation_Down, K2Node_SwitchEnum_CmpSuccess) == 0x000020, "Member 'UI_GameGuide_ListItem_C_GuideListNavigation_Down::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(UI_GameGuide_ListItem_C_GuideListNavigation_Down, CallFunc_Get_Next_Sibling_Next_Sibling) == 0x000028, "Member 'UI_GameGuide_ListItem_C_GuideListNavigation_Down::CallFunc_Get_Next_Sibling_Next_Sibling' has a wrong offset!");
static_assert(offsetof(UI_GameGuide_ListItem_C_GuideListNavigation_Down, CallFunc_Get_Next_Sibling_Sibling_Exists) == 0x000030, "Member 'UI_GameGuide_ListItem_C_GuideListNavigation_Down::CallFunc_Get_Next_Sibling_Sibling_Exists' has a wrong offset!");
static_assert(offsetof(UI_GameGuide_ListItem_C_GuideListNavigation_Down, CallFunc_IsValid_ReturnValue) == 0x000031, "Member 'UI_GameGuide_ListItem_C_GuideListNavigation_Down::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_GameGuide_ListItem_C_GuideListNavigation_Down, CallFunc_Not_PreBool_ReturnValue) == 0x000032, "Member 'UI_GameGuide_ListItem_C_GuideListNavigation_Down::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_GameGuide_ListItem_C_GuideListNavigation_Down, CallFunc_Get_Next_Sibling_Next_Sibling_1) == 0x000038, "Member 'UI_GameGuide_ListItem_C_GuideListNavigation_Down::CallFunc_Get_Next_Sibling_Next_Sibling_1' has a wrong offset!");
static_assert(offsetof(UI_GameGuide_ListItem_C_GuideListNavigation_Down, CallFunc_Get_Next_Sibling_Sibling_Exists_1) == 0x000040, "Member 'UI_GameGuide_ListItem_C_GuideListNavigation_Down::CallFunc_Get_Next_Sibling_Sibling_Exists_1' has a wrong offset!");
static_assert(offsetof(UI_GameGuide_ListItem_C_GuideListNavigation_Down, CallFunc_IsValid_ReturnValue_1) == 0x000041, "Member 'UI_GameGuide_ListItem_C_GuideListNavigation_Down::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

}

