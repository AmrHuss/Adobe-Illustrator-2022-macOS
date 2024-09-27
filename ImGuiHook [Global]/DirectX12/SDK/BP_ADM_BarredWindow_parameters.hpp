#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ADM_BarredWindow

#include "Basic.hpp"

#include "F_ADM_BarricadePiece_Settings_structs.hpp"


namespace SDK::Params
{

// Function BP_ADM_BarredWindow.BP_ADM_BarredWindow_C.ExecuteUbergraph_BP_ADM_BarredWindow
// 0x00D8 (0x00D8 - 0x0000)
struct BP_ADM_BarredWindow_C_ExecuteUbergraph_BP_ADM_BarredWindow final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FF_ADM_BarricadePiece_Settings         K2Node_MakeStruct_F_ADM_BarricadePiece_Settings;   // 0x0008(0x0028)(IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	struct FF_ADM_BarricadePiece_Settings         K2Node_MakeStruct_F_ADM_BarricadePiece_Settings_1; // 0x0030(0x0028)(IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	TArray<struct FF_ADM_BarricadePiece_Settings> K2Node_MakeArray_Array;                            // 0x0058(0x0010)(ConstParm, ReferenceParm, ContainsInstancedReference)
	TArray<struct FF_ADM_BarricadePiece_Settings> K2Node_MakeArray_Array_1;                          // 0x0068(0x0010)(ConstParm, ReferenceParm, ContainsInstancedReference)
	struct FF_ADM_BarricadePiece_Settings         K2Node_MakeStruct_F_ADM_BarricadePiece_Settings_2; // 0x0078(0x0028)(IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	TArray<struct FF_ADM_BarricadePiece_Settings> K2Node_MakeArray_Array_2;                          // 0x00A0(0x0010)(ConstParm, ReferenceParm, ContainsInstancedReference)
	int32                                         Temp_int_Variable;                                 // 0x00B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x00B4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_B5[0x3];                                       // 0x00B5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x00B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_BC[0x4];                                       // 0x00BC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_ADM_DoorBarricade_Component_C*      K2Node_Select_Default;                             // 0x00C0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInteractionItemComponent*              K2Node_ComponentBoundEvent_Sender;                 // 0x00C8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_ComponentBoundEvent_Interacting_Actor;      // 0x00D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ADM_BarredWindow_C_ExecuteUbergraph_BP_ADM_BarredWindow) == 0x000008, "Wrong alignment on BP_ADM_BarredWindow_C_ExecuteUbergraph_BP_ADM_BarredWindow");
static_assert(sizeof(BP_ADM_BarredWindow_C_ExecuteUbergraph_BP_ADM_BarredWindow) == 0x0000D8, "Wrong size on BP_ADM_BarredWindow_C_ExecuteUbergraph_BP_ADM_BarredWindow");
static_assert(offsetof(BP_ADM_BarredWindow_C_ExecuteUbergraph_BP_ADM_BarredWindow, EntryPoint) == 0x000000, "Member 'BP_ADM_BarredWindow_C_ExecuteUbergraph_BP_ADM_BarredWindow::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_ADM_BarredWindow_C_ExecuteUbergraph_BP_ADM_BarredWindow, K2Node_MakeStruct_F_ADM_BarricadePiece_Settings) == 0x000008, "Member 'BP_ADM_BarredWindow_C_ExecuteUbergraph_BP_ADM_BarredWindow::K2Node_MakeStruct_F_ADM_BarricadePiece_Settings' has a wrong offset!");
static_assert(offsetof(BP_ADM_BarredWindow_C_ExecuteUbergraph_BP_ADM_BarredWindow, K2Node_MakeStruct_F_ADM_BarricadePiece_Settings_1) == 0x000030, "Member 'BP_ADM_BarredWindow_C_ExecuteUbergraph_BP_ADM_BarredWindow::K2Node_MakeStruct_F_ADM_BarricadePiece_Settings_1' has a wrong offset!");
static_assert(offsetof(BP_ADM_BarredWindow_C_ExecuteUbergraph_BP_ADM_BarredWindow, K2Node_MakeArray_Array) == 0x000058, "Member 'BP_ADM_BarredWindow_C_ExecuteUbergraph_BP_ADM_BarredWindow::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(BP_ADM_BarredWindow_C_ExecuteUbergraph_BP_ADM_BarredWindow, K2Node_MakeArray_Array_1) == 0x000068, "Member 'BP_ADM_BarredWindow_C_ExecuteUbergraph_BP_ADM_BarredWindow::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(BP_ADM_BarredWindow_C_ExecuteUbergraph_BP_ADM_BarredWindow, K2Node_MakeStruct_F_ADM_BarricadePiece_Settings_2) == 0x000078, "Member 'BP_ADM_BarredWindow_C_ExecuteUbergraph_BP_ADM_BarredWindow::K2Node_MakeStruct_F_ADM_BarricadePiece_Settings_2' has a wrong offset!");
static_assert(offsetof(BP_ADM_BarredWindow_C_ExecuteUbergraph_BP_ADM_BarredWindow, K2Node_MakeArray_Array_2) == 0x0000A0, "Member 'BP_ADM_BarredWindow_C_ExecuteUbergraph_BP_ADM_BarredWindow::K2Node_MakeArray_Array_2' has a wrong offset!");
static_assert(offsetof(BP_ADM_BarredWindow_C_ExecuteUbergraph_BP_ADM_BarredWindow, Temp_int_Variable) == 0x0000B0, "Member 'BP_ADM_BarredWindow_C_ExecuteUbergraph_BP_ADM_BarredWindow::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(BP_ADM_BarredWindow_C_ExecuteUbergraph_BP_ADM_BarredWindow, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x0000B4, "Member 'BP_ADM_BarredWindow_C_ExecuteUbergraph_BP_ADM_BarredWindow::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ADM_BarredWindow_C_ExecuteUbergraph_BP_ADM_BarredWindow, CallFunc_Add_IntInt_ReturnValue) == 0x0000B8, "Member 'BP_ADM_BarredWindow_C_ExecuteUbergraph_BP_ADM_BarredWindow::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ADM_BarredWindow_C_ExecuteUbergraph_BP_ADM_BarredWindow, K2Node_Select_Default) == 0x0000C0, "Member 'BP_ADM_BarredWindow_C_ExecuteUbergraph_BP_ADM_BarredWindow::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BP_ADM_BarredWindow_C_ExecuteUbergraph_BP_ADM_BarredWindow, K2Node_ComponentBoundEvent_Sender) == 0x0000C8, "Member 'BP_ADM_BarredWindow_C_ExecuteUbergraph_BP_ADM_BarredWindow::K2Node_ComponentBoundEvent_Sender' has a wrong offset!");
static_assert(offsetof(BP_ADM_BarredWindow_C_ExecuteUbergraph_BP_ADM_BarredWindow, K2Node_ComponentBoundEvent_Interacting_Actor) == 0x0000D0, "Member 'BP_ADM_BarredWindow_C_ExecuteUbergraph_BP_ADM_BarredWindow::K2Node_ComponentBoundEvent_Interacting_Actor' has a wrong offset!");

// Function BP_ADM_BarredWindow.BP_ADM_BarredWindow_C.BndEvt__BP_InteractionItemComponent_K2Node_ComponentBoundEvent_3_Interaction Start on Server__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct BP_ADM_BarredWindow_C_BndEvt__BP_InteractionItemComponent_K2Node_ComponentBoundEvent_3_Interaction_Start_on_Server__DelegateSignature final
{
public:
	class UInteractionItemComponent*              Sender;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 Interacting_Actor;                                 // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ADM_BarredWindow_C_BndEvt__BP_InteractionItemComponent_K2Node_ComponentBoundEvent_3_Interaction_Start_on_Server__DelegateSignature) == 0x000008, "Wrong alignment on BP_ADM_BarredWindow_C_BndEvt__BP_InteractionItemComponent_K2Node_ComponentBoundEvent_3_Interaction_Start_on_Server__DelegateSignature");
static_assert(sizeof(BP_ADM_BarredWindow_C_BndEvt__BP_InteractionItemComponent_K2Node_ComponentBoundEvent_3_Interaction_Start_on_Server__DelegateSignature) == 0x000010, "Wrong size on BP_ADM_BarredWindow_C_BndEvt__BP_InteractionItemComponent_K2Node_ComponentBoundEvent_3_Interaction_Start_on_Server__DelegateSignature");
static_assert(offsetof(BP_ADM_BarredWindow_C_BndEvt__BP_InteractionItemComponent_K2Node_ComponentBoundEvent_3_Interaction_Start_on_Server__DelegateSignature, Sender) == 0x000000, "Member 'BP_ADM_BarredWindow_C_BndEvt__BP_InteractionItemComponent_K2Node_ComponentBoundEvent_3_Interaction_Start_on_Server__DelegateSignature::Sender' has a wrong offset!");
static_assert(offsetof(BP_ADM_BarredWindow_C_BndEvt__BP_InteractionItemComponent_K2Node_ComponentBoundEvent_3_Interaction_Start_on_Server__DelegateSignature, Interacting_Actor) == 0x000008, "Member 'BP_ADM_BarredWindow_C_BndEvt__BP_InteractionItemComponent_K2Node_ComponentBoundEvent_3_Interaction_Start_on_Server__DelegateSignature::Interacting_Actor' has a wrong offset!");

}

