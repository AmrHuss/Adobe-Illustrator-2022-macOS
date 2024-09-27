#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Onboarding_Customize_Cosmetics_SellingPoints

#include "Basic.hpp"

#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function UI_Onboarding_Customize_Cosmetics_SellingPoints.UI_Onboarding_Customize_Cosmetics_SellingPoints_C.ExecuteUbergraph_UI_Onboarding_Customize_Cosmetics_SellingPoints
// 0x00B8 (0x00B8 - 0x0000)
struct UI_Onboarding_Customize_Cosmetics_SellingPoints_C_ExecuteUbergraph_UI_Onboarding_Customize_Cosmetics_SellingPoints final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Has_Been_Initd_Variable;                 // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable; // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_12[0x2];                                       // 0x0012(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0020(0x0038)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5C[0x4];                                       // 0x005C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue_1;            // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue_2;            // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_IsClosed_Variable;                       // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_71[0x7];                                       // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AHumanPlayerController*                 K2Node_DynamicCast_AsHuman_Player_Controller;      // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_81[0x7];                                       // 0x0081(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UUI_CharacterCustomisation_C*>   CallFunc_GetAllOpenedWidgets_OutWidgets;           // 0x0088(0x0010)(ReferenceParm, ContainsInstancedReference)
	class UMenuWidget*                            CallFunc_Array_Get_Item;                           // 0x0098(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A4[0x4];                                       // 0x00A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetWidgetToFocus_ReturnValue;             // 0x00A8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UI_Onboarding_Customize_Cosmetics_SellingPoints_C_ExecuteUbergraph_UI_Onboarding_Customize_Cosmetics_SellingPoints) == 0x000008, "Wrong alignment on UI_Onboarding_Customize_Cosmetics_SellingPoints_C_ExecuteUbergraph_UI_Onboarding_Customize_Cosmetics_SellingPoints");
static_assert(sizeof(UI_Onboarding_Customize_Cosmetics_SellingPoints_C_ExecuteUbergraph_UI_Onboarding_Customize_Cosmetics_SellingPoints) == 0x0000B8, "Wrong size on UI_Onboarding_Customize_Cosmetics_SellingPoints_C_ExecuteUbergraph_UI_Onboarding_Customize_Cosmetics_SellingPoints");
static_assert(offsetof(UI_Onboarding_Customize_Cosmetics_SellingPoints_C_ExecuteUbergraph_UI_Onboarding_Customize_Cosmetics_SellingPoints, EntryPoint) == 0x000000, "Member 'UI_Onboarding_Customize_Cosmetics_SellingPoints_C_ExecuteUbergraph_UI_Onboarding_Customize_Cosmetics_SellingPoints::EntryPoint' has a wrong offset!");
static_assert(offsetof(UI_Onboarding_Customize_Cosmetics_SellingPoints_C_ExecuteUbergraph_UI_Onboarding_Customize_Cosmetics_SellingPoints, CallFunc_GetOwningPlayer_ReturnValue) == 0x000008, "Member 'UI_Onboarding_Customize_Cosmetics_SellingPoints_C_ExecuteUbergraph_UI_Onboarding_Customize_Cosmetics_SellingPoints::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Onboarding_Customize_Cosmetics_SellingPoints_C_ExecuteUbergraph_UI_Onboarding_Customize_Cosmetics_SellingPoints, Temp_bool_Has_Been_Initd_Variable) == 0x000010, "Member 'UI_Onboarding_Customize_Cosmetics_SellingPoints_C_ExecuteUbergraph_UI_Onboarding_Customize_Cosmetics_SellingPoints::Temp_bool_Has_Been_Initd_Variable' has a wrong offset!");
static_assert(offsetof(UI_Onboarding_Customize_Cosmetics_SellingPoints_C_ExecuteUbergraph_UI_Onboarding_Customize_Cosmetics_SellingPoints, Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable) == 0x000011, "Member 'UI_Onboarding_Customize_Cosmetics_SellingPoints_C_ExecuteUbergraph_UI_Onboarding_Customize_Cosmetics_SellingPoints::Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable' has a wrong offset!");
static_assert(offsetof(UI_Onboarding_Customize_Cosmetics_SellingPoints_C_ExecuteUbergraph_UI_Onboarding_Customize_Cosmetics_SellingPoints, Temp_int_Loop_Counter_Variable) == 0x000014, "Member 'UI_Onboarding_Customize_Cosmetics_SellingPoints_C_ExecuteUbergraph_UI_Onboarding_Customize_Cosmetics_SellingPoints::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(UI_Onboarding_Customize_Cosmetics_SellingPoints_C_ExecuteUbergraph_UI_Onboarding_Customize_Cosmetics_SellingPoints, CallFunc_Add_IntInt_ReturnValue) == 0x000018, "Member 'UI_Onboarding_Customize_Cosmetics_SellingPoints_C_ExecuteUbergraph_UI_Onboarding_Customize_Cosmetics_SellingPoints::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Onboarding_Customize_Cosmetics_SellingPoints_C_ExecuteUbergraph_UI_Onboarding_Customize_Cosmetics_SellingPoints, Temp_int_Array_Index_Variable) == 0x00001C, "Member 'UI_Onboarding_Customize_Cosmetics_SellingPoints_C_ExecuteUbergraph_UI_Onboarding_Customize_Cosmetics_SellingPoints::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(UI_Onboarding_Customize_Cosmetics_SellingPoints_C_ExecuteUbergraph_UI_Onboarding_Customize_Cosmetics_SellingPoints, K2Node_Event_MyGeometry) == 0x000020, "Member 'UI_Onboarding_Customize_Cosmetics_SellingPoints_C_ExecuteUbergraph_UI_Onboarding_Customize_Cosmetics_SellingPoints::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(UI_Onboarding_Customize_Cosmetics_SellingPoints_C_ExecuteUbergraph_UI_Onboarding_Customize_Cosmetics_SellingPoints, K2Node_Event_InDeltaTime) == 0x000058, "Member 'UI_Onboarding_Customize_Cosmetics_SellingPoints_C_ExecuteUbergraph_UI_Onboarding_Customize_Cosmetics_SellingPoints::K2Node_Event_InDeltaTime' has a wrong offset!");
static_assert(offsetof(UI_Onboarding_Customize_Cosmetics_SellingPoints_C_ExecuteUbergraph_UI_Onboarding_Customize_Cosmetics_SellingPoints, CallFunc_GetOwningPlayer_ReturnValue_1) == 0x000060, "Member 'UI_Onboarding_Customize_Cosmetics_SellingPoints_C_ExecuteUbergraph_UI_Onboarding_Customize_Cosmetics_SellingPoints::CallFunc_GetOwningPlayer_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_Onboarding_Customize_Cosmetics_SellingPoints_C_ExecuteUbergraph_UI_Onboarding_Customize_Cosmetics_SellingPoints, CallFunc_GetOwningPlayer_ReturnValue_2) == 0x000068, "Member 'UI_Onboarding_Customize_Cosmetics_SellingPoints_C_ExecuteUbergraph_UI_Onboarding_Customize_Cosmetics_SellingPoints::CallFunc_GetOwningPlayer_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UI_Onboarding_Customize_Cosmetics_SellingPoints_C_ExecuteUbergraph_UI_Onboarding_Customize_Cosmetics_SellingPoints, Temp_bool_IsClosed_Variable) == 0x000070, "Member 'UI_Onboarding_Customize_Cosmetics_SellingPoints_C_ExecuteUbergraph_UI_Onboarding_Customize_Cosmetics_SellingPoints::Temp_bool_IsClosed_Variable' has a wrong offset!");
static_assert(offsetof(UI_Onboarding_Customize_Cosmetics_SellingPoints_C_ExecuteUbergraph_UI_Onboarding_Customize_Cosmetics_SellingPoints, K2Node_DynamicCast_AsHuman_Player_Controller) == 0x000078, "Member 'UI_Onboarding_Customize_Cosmetics_SellingPoints_C_ExecuteUbergraph_UI_Onboarding_Customize_Cosmetics_SellingPoints::K2Node_DynamicCast_AsHuman_Player_Controller' has a wrong offset!");
static_assert(offsetof(UI_Onboarding_Customize_Cosmetics_SellingPoints_C_ExecuteUbergraph_UI_Onboarding_Customize_Cosmetics_SellingPoints, K2Node_DynamicCast_bSuccess) == 0x000080, "Member 'UI_Onboarding_Customize_Cosmetics_SellingPoints_C_ExecuteUbergraph_UI_Onboarding_Customize_Cosmetics_SellingPoints::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(UI_Onboarding_Customize_Cosmetics_SellingPoints_C_ExecuteUbergraph_UI_Onboarding_Customize_Cosmetics_SellingPoints, CallFunc_GetAllOpenedWidgets_OutWidgets) == 0x000088, "Member 'UI_Onboarding_Customize_Cosmetics_SellingPoints_C_ExecuteUbergraph_UI_Onboarding_Customize_Cosmetics_SellingPoints::CallFunc_GetAllOpenedWidgets_OutWidgets' has a wrong offset!");
static_assert(offsetof(UI_Onboarding_Customize_Cosmetics_SellingPoints_C_ExecuteUbergraph_UI_Onboarding_Customize_Cosmetics_SellingPoints, CallFunc_Array_Get_Item) == 0x000098, "Member 'UI_Onboarding_Customize_Cosmetics_SellingPoints_C_ExecuteUbergraph_UI_Onboarding_Customize_Cosmetics_SellingPoints::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(UI_Onboarding_Customize_Cosmetics_SellingPoints_C_ExecuteUbergraph_UI_Onboarding_Customize_Cosmetics_SellingPoints, CallFunc_Array_Length_ReturnValue) == 0x0000A0, "Member 'UI_Onboarding_Customize_Cosmetics_SellingPoints_C_ExecuteUbergraph_UI_Onboarding_Customize_Cosmetics_SellingPoints::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Onboarding_Customize_Cosmetics_SellingPoints_C_ExecuteUbergraph_UI_Onboarding_Customize_Cosmetics_SellingPoints, CallFunc_GetWidgetToFocus_ReturnValue) == 0x0000A8, "Member 'UI_Onboarding_Customize_Cosmetics_SellingPoints_C_ExecuteUbergraph_UI_Onboarding_Customize_Cosmetics_SellingPoints::CallFunc_GetWidgetToFocus_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Onboarding_Customize_Cosmetics_SellingPoints_C_ExecuteUbergraph_UI_Onboarding_Customize_Cosmetics_SellingPoints, CallFunc_Less_IntInt_ReturnValue) == 0x0000B0, "Member 'UI_Onboarding_Customize_Cosmetics_SellingPoints_C_ExecuteUbergraph_UI_Onboarding_Customize_Cosmetics_SellingPoints::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function UI_Onboarding_Customize_Cosmetics_SellingPoints.UI_Onboarding_Customize_Cosmetics_SellingPoints_C.Tick
// 0x003C (0x003C - 0x0000)
struct UI_Onboarding_Customize_Cosmetics_SellingPoints_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0038(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_Onboarding_Customize_Cosmetics_SellingPoints_C_Tick) == 0x000004, "Wrong alignment on UI_Onboarding_Customize_Cosmetics_SellingPoints_C_Tick");
static_assert(sizeof(UI_Onboarding_Customize_Cosmetics_SellingPoints_C_Tick) == 0x00003C, "Wrong size on UI_Onboarding_Customize_Cosmetics_SellingPoints_C_Tick");
static_assert(offsetof(UI_Onboarding_Customize_Cosmetics_SellingPoints_C_Tick, MyGeometry) == 0x000000, "Member 'UI_Onboarding_Customize_Cosmetics_SellingPoints_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(UI_Onboarding_Customize_Cosmetics_SellingPoints_C_Tick, InDeltaTime) == 0x000038, "Member 'UI_Onboarding_Customize_Cosmetics_SellingPoints_C_Tick::InDeltaTime' has a wrong offset!");

}

