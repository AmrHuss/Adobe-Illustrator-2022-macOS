#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_SceneCaptureWidget

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "E_SceneCaptureWidgetState_structs.hpp"


namespace SDK::Params
{

// Function UI_SceneCaptureWidget.UI_SceneCaptureWidget_C.ExecuteUbergraph_UI_SceneCaptureWidget
// 0x0060 (0x0060 - 0x0000)
struct UI_SceneCaptureWidget_C_ExecuteUbergraph_UI_SceneCaptureWidget final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6[0x2];                                        // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0008(0x0038)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0044(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_45[0x3];                                       // 0x0045(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              CallFunc_GetAbsoluteSize_ReturnValue;              // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_X;                          // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y;                          // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue_1;         // 0x005A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x005B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x005C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_4;                    // 0x005D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UI_SceneCaptureWidget_C_ExecuteUbergraph_UI_SceneCaptureWidget) == 0x000004, "Wrong alignment on UI_SceneCaptureWidget_C_ExecuteUbergraph_UI_SceneCaptureWidget");
static_assert(sizeof(UI_SceneCaptureWidget_C_ExecuteUbergraph_UI_SceneCaptureWidget) == 0x000060, "Wrong size on UI_SceneCaptureWidget_C_ExecuteUbergraph_UI_SceneCaptureWidget");
static_assert(offsetof(UI_SceneCaptureWidget_C_ExecuteUbergraph_UI_SceneCaptureWidget, EntryPoint) == 0x000000, "Member 'UI_SceneCaptureWidget_C_ExecuteUbergraph_UI_SceneCaptureWidget::EntryPoint' has a wrong offset!");
static_assert(offsetof(UI_SceneCaptureWidget_C_ExecuteUbergraph_UI_SceneCaptureWidget, CallFunc_IsValid_ReturnValue) == 0x000004, "Member 'UI_SceneCaptureWidget_C_ExecuteUbergraph_UI_SceneCaptureWidget::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_SceneCaptureWidget_C_ExecuteUbergraph_UI_SceneCaptureWidget, CallFunc_IsValid_ReturnValue_1) == 0x000005, "Member 'UI_SceneCaptureWidget_C_ExecuteUbergraph_UI_SceneCaptureWidget::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_SceneCaptureWidget_C_ExecuteUbergraph_UI_SceneCaptureWidget, K2Node_Event_MyGeometry) == 0x000008, "Member 'UI_SceneCaptureWidget_C_ExecuteUbergraph_UI_SceneCaptureWidget::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(UI_SceneCaptureWidget_C_ExecuteUbergraph_UI_SceneCaptureWidget, K2Node_Event_InDeltaTime) == 0x000040, "Member 'UI_SceneCaptureWidget_C_ExecuteUbergraph_UI_SceneCaptureWidget::K2Node_Event_InDeltaTime' has a wrong offset!");
static_assert(offsetof(UI_SceneCaptureWidget_C_ExecuteUbergraph_UI_SceneCaptureWidget, CallFunc_IsValid_ReturnValue_2) == 0x000044, "Member 'UI_SceneCaptureWidget_C_ExecuteUbergraph_UI_SceneCaptureWidget::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UI_SceneCaptureWidget_C_ExecuteUbergraph_UI_SceneCaptureWidget, CallFunc_GetAbsoluteSize_ReturnValue) == 0x000048, "Member 'UI_SceneCaptureWidget_C_ExecuteUbergraph_UI_SceneCaptureWidget::CallFunc_GetAbsoluteSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_SceneCaptureWidget_C_ExecuteUbergraph_UI_SceneCaptureWidget, CallFunc_BreakVector2D_X) == 0x000050, "Member 'UI_SceneCaptureWidget_C_ExecuteUbergraph_UI_SceneCaptureWidget::CallFunc_BreakVector2D_X' has a wrong offset!");
static_assert(offsetof(UI_SceneCaptureWidget_C_ExecuteUbergraph_UI_SceneCaptureWidget, CallFunc_BreakVector2D_Y) == 0x000054, "Member 'UI_SceneCaptureWidget_C_ExecuteUbergraph_UI_SceneCaptureWidget::CallFunc_BreakVector2D_Y' has a wrong offset!");
static_assert(offsetof(UI_SceneCaptureWidget_C_ExecuteUbergraph_UI_SceneCaptureWidget, CallFunc_Greater_FloatFloat_ReturnValue) == 0x000058, "Member 'UI_SceneCaptureWidget_C_ExecuteUbergraph_UI_SceneCaptureWidget::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_SceneCaptureWidget_C_ExecuteUbergraph_UI_SceneCaptureWidget, K2Node_SwitchEnum_CmpSuccess) == 0x000059, "Member 'UI_SceneCaptureWidget_C_ExecuteUbergraph_UI_SceneCaptureWidget::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(UI_SceneCaptureWidget_C_ExecuteUbergraph_UI_SceneCaptureWidget, CallFunc_Greater_FloatFloat_ReturnValue_1) == 0x00005A, "Member 'UI_SceneCaptureWidget_C_ExecuteUbergraph_UI_SceneCaptureWidget::CallFunc_Greater_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_SceneCaptureWidget_C_ExecuteUbergraph_UI_SceneCaptureWidget, CallFunc_BooleanAND_ReturnValue) == 0x00005B, "Member 'UI_SceneCaptureWidget_C_ExecuteUbergraph_UI_SceneCaptureWidget::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_SceneCaptureWidget_C_ExecuteUbergraph_UI_SceneCaptureWidget, CallFunc_IsValid_ReturnValue_3) == 0x00005C, "Member 'UI_SceneCaptureWidget_C_ExecuteUbergraph_UI_SceneCaptureWidget::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(UI_SceneCaptureWidget_C_ExecuteUbergraph_UI_SceneCaptureWidget, CallFunc_IsValid_ReturnValue_4) == 0x00005D, "Member 'UI_SceneCaptureWidget_C_ExecuteUbergraph_UI_SceneCaptureWidget::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");

// Function UI_SceneCaptureWidget.UI_SceneCaptureWidget_C.Tick
// 0x003C (0x003C - 0x0000)
struct UI_SceneCaptureWidget_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0038(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_SceneCaptureWidget_C_Tick) == 0x000004, "Wrong alignment on UI_SceneCaptureWidget_C_Tick");
static_assert(sizeof(UI_SceneCaptureWidget_C_Tick) == 0x00003C, "Wrong size on UI_SceneCaptureWidget_C_Tick");
static_assert(offsetof(UI_SceneCaptureWidget_C_Tick, MyGeometry) == 0x000000, "Member 'UI_SceneCaptureWidget_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(UI_SceneCaptureWidget_C_Tick, InDeltaTime) == 0x000038, "Member 'UI_SceneCaptureWidget_C_Tick::InDeltaTime' has a wrong offset!");

// Function UI_SceneCaptureWidget.UI_SceneCaptureWidget_C.FindAssociatedSceneCaptureActor
// 0x0040 (0x0040 - 0x0000)
struct UI_SceneCaptureWidget_C_FindAssociatedSceneCaptureActor final
{
public:
	bool                                          Temp_bool_True_if_break_was_hit_Variable;          // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9[0x3];                                        // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class ABP_SceneCapture_C*>             CallFunc_GetAllActorsOfClass_OutActors;            // 0x0018(0x0010)(ReferenceParm)
	class ABP_SceneCapture_C*                     CallFunc_Array_Get_Item;                           // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_32[0x2];                                       // 0x0032(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UI_SceneCaptureWidget_C_FindAssociatedSceneCaptureActor) == 0x000008, "Wrong alignment on UI_SceneCaptureWidget_C_FindAssociatedSceneCaptureActor");
static_assert(sizeof(UI_SceneCaptureWidget_C_FindAssociatedSceneCaptureActor) == 0x000040, "Wrong size on UI_SceneCaptureWidget_C_FindAssociatedSceneCaptureActor");
static_assert(offsetof(UI_SceneCaptureWidget_C_FindAssociatedSceneCaptureActor, Temp_bool_True_if_break_was_hit_Variable) == 0x000000, "Member 'UI_SceneCaptureWidget_C_FindAssociatedSceneCaptureActor::Temp_bool_True_if_break_was_hit_Variable' has a wrong offset!");
static_assert(offsetof(UI_SceneCaptureWidget_C_FindAssociatedSceneCaptureActor, Temp_int_Array_Index_Variable) == 0x000004, "Member 'UI_SceneCaptureWidget_C_FindAssociatedSceneCaptureActor::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(UI_SceneCaptureWidget_C_FindAssociatedSceneCaptureActor, CallFunc_Not_PreBool_ReturnValue) == 0x000008, "Member 'UI_SceneCaptureWidget_C_FindAssociatedSceneCaptureActor::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_SceneCaptureWidget_C_FindAssociatedSceneCaptureActor, Temp_int_Loop_Counter_Variable) == 0x00000C, "Member 'UI_SceneCaptureWidget_C_FindAssociatedSceneCaptureActor::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(UI_SceneCaptureWidget_C_FindAssociatedSceneCaptureActor, CallFunc_Add_IntInt_ReturnValue) == 0x000010, "Member 'UI_SceneCaptureWidget_C_FindAssociatedSceneCaptureActor::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_SceneCaptureWidget_C_FindAssociatedSceneCaptureActor, CallFunc_GetAllActorsOfClass_OutActors) == 0x000018, "Member 'UI_SceneCaptureWidget_C_FindAssociatedSceneCaptureActor::CallFunc_GetAllActorsOfClass_OutActors' has a wrong offset!");
static_assert(offsetof(UI_SceneCaptureWidget_C_FindAssociatedSceneCaptureActor, CallFunc_Array_Get_Item) == 0x000028, "Member 'UI_SceneCaptureWidget_C_FindAssociatedSceneCaptureActor::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(UI_SceneCaptureWidget_C_FindAssociatedSceneCaptureActor, CallFunc_IsValid_ReturnValue) == 0x000030, "Member 'UI_SceneCaptureWidget_C_FindAssociatedSceneCaptureActor::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_SceneCaptureWidget_C_FindAssociatedSceneCaptureActor, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000031, "Member 'UI_SceneCaptureWidget_C_FindAssociatedSceneCaptureActor::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_SceneCaptureWidget_C_FindAssociatedSceneCaptureActor, CallFunc_Array_Length_ReturnValue) == 0x000034, "Member 'UI_SceneCaptureWidget_C_FindAssociatedSceneCaptureActor::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_SceneCaptureWidget_C_FindAssociatedSceneCaptureActor, CallFunc_Less_IntInt_ReturnValue) == 0x000038, "Member 'UI_SceneCaptureWidget_C_FindAssociatedSceneCaptureActor::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_SceneCaptureWidget_C_FindAssociatedSceneCaptureActor, CallFunc_BooleanAND_ReturnValue) == 0x000039, "Member 'UI_SceneCaptureWidget_C_FindAssociatedSceneCaptureActor::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function UI_SceneCaptureWidget.UI_SceneCaptureWidget_C.InitializeSceneCaptureActor
// 0x0058 (0x0058 - 0x0000)
struct UI_SceneCaptureWidget_C_InitializeSceneCaptureActor final
{
public:
	struct FGeometry                              Geometry;                                          // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor)
	int32                                         CallFunc_GetRenderTargetSize_SizeX;                // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetRenderTargetSize_SizeY;                // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTextureRenderTarget2D*                 CallFunc_InitializeRenderTarget_RenderTarget;      // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;           // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_SceneCaptureWidget_C_InitializeSceneCaptureActor) == 0x000008, "Wrong alignment on UI_SceneCaptureWidget_C_InitializeSceneCaptureActor");
static_assert(sizeof(UI_SceneCaptureWidget_C_InitializeSceneCaptureActor) == 0x000058, "Wrong size on UI_SceneCaptureWidget_C_InitializeSceneCaptureActor");
static_assert(offsetof(UI_SceneCaptureWidget_C_InitializeSceneCaptureActor, Geometry) == 0x000000, "Member 'UI_SceneCaptureWidget_C_InitializeSceneCaptureActor::Geometry' has a wrong offset!");
static_assert(offsetof(UI_SceneCaptureWidget_C_InitializeSceneCaptureActor, CallFunc_GetRenderTargetSize_SizeX) == 0x000038, "Member 'UI_SceneCaptureWidget_C_InitializeSceneCaptureActor::CallFunc_GetRenderTargetSize_SizeX' has a wrong offset!");
static_assert(offsetof(UI_SceneCaptureWidget_C_InitializeSceneCaptureActor, CallFunc_GetRenderTargetSize_SizeY) == 0x00003C, "Member 'UI_SceneCaptureWidget_C_InitializeSceneCaptureActor::CallFunc_GetRenderTargetSize_SizeY' has a wrong offset!");
static_assert(offsetof(UI_SceneCaptureWidget_C_InitializeSceneCaptureActor, CallFunc_IsValid_ReturnValue) == 0x000040, "Member 'UI_SceneCaptureWidget_C_InitializeSceneCaptureActor::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_SceneCaptureWidget_C_InitializeSceneCaptureActor, CallFunc_InitializeRenderTarget_RenderTarget) == 0x000048, "Member 'UI_SceneCaptureWidget_C_InitializeSceneCaptureActor::CallFunc_InitializeRenderTarget_RenderTarget' has a wrong offset!");
static_assert(offsetof(UI_SceneCaptureWidget_C_InitializeSceneCaptureActor, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000050, "Member 'UI_SceneCaptureWidget_C_InitializeSceneCaptureActor::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");

// Function UI_SceneCaptureWidget.UI_SceneCaptureWidget_C.ChangeState
// 0x0001 (0x0001 - 0x0000)
struct UI_SceneCaptureWidget_C_ChangeState final
{
public:
	E_SceneCaptureWidgetState                     NewState;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_SceneCaptureWidget_C_ChangeState) == 0x000001, "Wrong alignment on UI_SceneCaptureWidget_C_ChangeState");
static_assert(sizeof(UI_SceneCaptureWidget_C_ChangeState) == 0x000001, "Wrong size on UI_SceneCaptureWidget_C_ChangeState");
static_assert(offsetof(UI_SceneCaptureWidget_C_ChangeState, NewState) == 0x000000, "Member 'UI_SceneCaptureWidget_C_ChangeState::NewState' has a wrong offset!");

// Function UI_SceneCaptureWidget.UI_SceneCaptureWidget_C.GetRenderTargetSize
// 0x0088 (0x0088 - 0x0000)
struct UI_SceneCaptureWidget_C_GetRenderTargetSize final
{
public:
	struct FGeometry                              Geometry;                                          // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor)
	int32                                         SizeX;                                             // 0x0038(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SizeY;                                             // 0x003C(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ResultY;                                           // 0x0040(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ResultX;                                           // 0x0044(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_GetAbsoluteSize_ReturnValue;              // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_X;                          // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y;                          // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue_1;          // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue_1;        // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FTrunc_ReturnValue;                       // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FTrunc_ReturnValue_1;                     // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_EstimateSceneRenderTargetsSize_OutSizeX;  // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_EstimateSceneRenderTargetsSize_OutSizeY;  // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_IntFloat_ReturnValue;            // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_IntFloat_ReturnValue_1;          // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FMin_ReturnValue;                         // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FMin_ReturnValue_1;                       // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_SceneCaptureWidget_C_GetRenderTargetSize) == 0x000004, "Wrong alignment on UI_SceneCaptureWidget_C_GetRenderTargetSize");
static_assert(sizeof(UI_SceneCaptureWidget_C_GetRenderTargetSize) == 0x000088, "Wrong size on UI_SceneCaptureWidget_C_GetRenderTargetSize");
static_assert(offsetof(UI_SceneCaptureWidget_C_GetRenderTargetSize, Geometry) == 0x000000, "Member 'UI_SceneCaptureWidget_C_GetRenderTargetSize::Geometry' has a wrong offset!");
static_assert(offsetof(UI_SceneCaptureWidget_C_GetRenderTargetSize, SizeX) == 0x000038, "Member 'UI_SceneCaptureWidget_C_GetRenderTargetSize::SizeX' has a wrong offset!");
static_assert(offsetof(UI_SceneCaptureWidget_C_GetRenderTargetSize, SizeY) == 0x00003C, "Member 'UI_SceneCaptureWidget_C_GetRenderTargetSize::SizeY' has a wrong offset!");
static_assert(offsetof(UI_SceneCaptureWidget_C_GetRenderTargetSize, ResultY) == 0x000040, "Member 'UI_SceneCaptureWidget_C_GetRenderTargetSize::ResultY' has a wrong offset!");
static_assert(offsetof(UI_SceneCaptureWidget_C_GetRenderTargetSize, ResultX) == 0x000044, "Member 'UI_SceneCaptureWidget_C_GetRenderTargetSize::ResultX' has a wrong offset!");
static_assert(offsetof(UI_SceneCaptureWidget_C_GetRenderTargetSize, CallFunc_GetAbsoluteSize_ReturnValue) == 0x000048, "Member 'UI_SceneCaptureWidget_C_GetRenderTargetSize::CallFunc_GetAbsoluteSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_SceneCaptureWidget_C_GetRenderTargetSize, CallFunc_BreakVector2D_X) == 0x000050, "Member 'UI_SceneCaptureWidget_C_GetRenderTargetSize::CallFunc_BreakVector2D_X' has a wrong offset!");
static_assert(offsetof(UI_SceneCaptureWidget_C_GetRenderTargetSize, CallFunc_BreakVector2D_Y) == 0x000054, "Member 'UI_SceneCaptureWidget_C_GetRenderTargetSize::CallFunc_BreakVector2D_Y' has a wrong offset!");
static_assert(offsetof(UI_SceneCaptureWidget_C_GetRenderTargetSize, CallFunc_Divide_FloatFloat_ReturnValue) == 0x000058, "Member 'UI_SceneCaptureWidget_C_GetRenderTargetSize::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_SceneCaptureWidget_C_GetRenderTargetSize, CallFunc_Divide_FloatFloat_ReturnValue_1) == 0x00005C, "Member 'UI_SceneCaptureWidget_C_GetRenderTargetSize::CallFunc_Divide_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_SceneCaptureWidget_C_GetRenderTargetSize, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x000060, "Member 'UI_SceneCaptureWidget_C_GetRenderTargetSize::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_SceneCaptureWidget_C_GetRenderTargetSize, CallFunc_Multiply_FloatFloat_ReturnValue_1) == 0x000064, "Member 'UI_SceneCaptureWidget_C_GetRenderTargetSize::CallFunc_Multiply_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_SceneCaptureWidget_C_GetRenderTargetSize, CallFunc_FTrunc_ReturnValue) == 0x000068, "Member 'UI_SceneCaptureWidget_C_GetRenderTargetSize::CallFunc_FTrunc_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_SceneCaptureWidget_C_GetRenderTargetSize, CallFunc_FTrunc_ReturnValue_1) == 0x00006C, "Member 'UI_SceneCaptureWidget_C_GetRenderTargetSize::CallFunc_FTrunc_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_SceneCaptureWidget_C_GetRenderTargetSize, CallFunc_EstimateSceneRenderTargetsSize_OutSizeX) == 0x000070, "Member 'UI_SceneCaptureWidget_C_GetRenderTargetSize::CallFunc_EstimateSceneRenderTargetsSize_OutSizeX' has a wrong offset!");
static_assert(offsetof(UI_SceneCaptureWidget_C_GetRenderTargetSize, CallFunc_EstimateSceneRenderTargetsSize_OutSizeY) == 0x000074, "Member 'UI_SceneCaptureWidget_C_GetRenderTargetSize::CallFunc_EstimateSceneRenderTargetsSize_OutSizeY' has a wrong offset!");
static_assert(offsetof(UI_SceneCaptureWidget_C_GetRenderTargetSize, CallFunc_Multiply_IntFloat_ReturnValue) == 0x000078, "Member 'UI_SceneCaptureWidget_C_GetRenderTargetSize::CallFunc_Multiply_IntFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_SceneCaptureWidget_C_GetRenderTargetSize, CallFunc_Multiply_IntFloat_ReturnValue_1) == 0x00007C, "Member 'UI_SceneCaptureWidget_C_GetRenderTargetSize::CallFunc_Multiply_IntFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_SceneCaptureWidget_C_GetRenderTargetSize, CallFunc_FMin_ReturnValue) == 0x000080, "Member 'UI_SceneCaptureWidget_C_GetRenderTargetSize::CallFunc_FMin_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_SceneCaptureWidget_C_GetRenderTargetSize, CallFunc_FMin_ReturnValue_1) == 0x000084, "Member 'UI_SceneCaptureWidget_C_GetRenderTargetSize::CallFunc_FMin_ReturnValue_1' has a wrong offset!");

// Function UI_SceneCaptureWidget.UI_SceneCaptureWidget_C.AnimateThis
// 0x0040 (0x0040 - 0x0000)
struct UI_SceneCaptureWidget_C_AnimateThis final
{
public:
	bool                                          Temp_bool_True_if_break_was_hit_Variable;          // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9[0x3];                                        // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class ABP_SceneCapture_C*>             CallFunc_GetAllActorsOfClass_OutActors;            // 0x0018(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2C[0x4];                                       // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_SceneCapture_C*                     CallFunc_Array_Get_Item;                           // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x003A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x003B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UI_SceneCaptureWidget_C_AnimateThis) == 0x000008, "Wrong alignment on UI_SceneCaptureWidget_C_AnimateThis");
static_assert(sizeof(UI_SceneCaptureWidget_C_AnimateThis) == 0x000040, "Wrong size on UI_SceneCaptureWidget_C_AnimateThis");
static_assert(offsetof(UI_SceneCaptureWidget_C_AnimateThis, Temp_bool_True_if_break_was_hit_Variable) == 0x000000, "Member 'UI_SceneCaptureWidget_C_AnimateThis::Temp_bool_True_if_break_was_hit_Variable' has a wrong offset!");
static_assert(offsetof(UI_SceneCaptureWidget_C_AnimateThis, Temp_int_Array_Index_Variable) == 0x000004, "Member 'UI_SceneCaptureWidget_C_AnimateThis::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(UI_SceneCaptureWidget_C_AnimateThis, CallFunc_Not_PreBool_ReturnValue) == 0x000008, "Member 'UI_SceneCaptureWidget_C_AnimateThis::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_SceneCaptureWidget_C_AnimateThis, Temp_int_Loop_Counter_Variable) == 0x00000C, "Member 'UI_SceneCaptureWidget_C_AnimateThis::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(UI_SceneCaptureWidget_C_AnimateThis, CallFunc_Add_IntInt_ReturnValue) == 0x000010, "Member 'UI_SceneCaptureWidget_C_AnimateThis::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_SceneCaptureWidget_C_AnimateThis, CallFunc_GetAllActorsOfClass_OutActors) == 0x000018, "Member 'UI_SceneCaptureWidget_C_AnimateThis::CallFunc_GetAllActorsOfClass_OutActors' has a wrong offset!");
static_assert(offsetof(UI_SceneCaptureWidget_C_AnimateThis, CallFunc_Array_Length_ReturnValue) == 0x000028, "Member 'UI_SceneCaptureWidget_C_AnimateThis::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_SceneCaptureWidget_C_AnimateThis, CallFunc_Array_Get_Item) == 0x000030, "Member 'UI_SceneCaptureWidget_C_AnimateThis::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(UI_SceneCaptureWidget_C_AnimateThis, CallFunc_Less_IntInt_ReturnValue) == 0x000038, "Member 'UI_SceneCaptureWidget_C_AnimateThis::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_SceneCaptureWidget_C_AnimateThis, CallFunc_BooleanAND_ReturnValue) == 0x000039, "Member 'UI_SceneCaptureWidget_C_AnimateThis::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_SceneCaptureWidget_C_AnimateThis, CallFunc_IsValid_ReturnValue) == 0x00003A, "Member 'UI_SceneCaptureWidget_C_AnimateThis::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_SceneCaptureWidget_C_AnimateThis, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x00003B, "Member 'UI_SceneCaptureWidget_C_AnimateThis::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");

}

