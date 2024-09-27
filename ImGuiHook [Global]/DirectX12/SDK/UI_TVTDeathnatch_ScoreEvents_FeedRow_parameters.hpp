#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_TVTDeathnatch_ScoreEvents_FeedRow

#include "Basic.hpp"

#include "Struct_Gunfight_ScoreEventInfo_structs.hpp"
#include "Engine_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function UI_TVTDeathnatch_ScoreEvents_FeedRow.UI_TVTDeathnatch_ScoreEvents_FeedRow_C.ExecuteUbergraph_UI_TVTDeathnatch_ScoreEvents_FeedRow
// 0x0078 (0x0078 - 0x0000)
struct UI_TVTDeathnatch_ScoreEvents_FeedRow_C_ExecuteUbergraph_UI_TVTDeathnatch_ScoreEvents_FeedRow final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_15[0x3];                                       // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0018(0x0010)(ZeroConstructor, NoDestructor)
	class UUMGSequencePlayer*                     CallFunc_CreatePlayAnimationProxyObject_Result;    // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimationPlayCallbackProxy*      CallFunc_CreatePlayAnimationProxyObject_ReturnValue; // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_39[0x7];                                       // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UOverlaySlot*                           CallFunc_AddChildToOverlay_ReturnValue;            // 0x0040(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;            // 0x0048(0x0010)(ZeroConstructor, NoDestructor)
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0058(0x0008)(NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_CreatePlayAnimationProxyObject_Result_1;  // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimationPlayCallbackProxy*      CallFunc_CreatePlayAnimationProxyObject_ReturnValue_1; // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UI_TVTDeathnatch_ScoreEvents_FeedRow_C_ExecuteUbergraph_UI_TVTDeathnatch_ScoreEvents_FeedRow) == 0x000008, "Wrong alignment on UI_TVTDeathnatch_ScoreEvents_FeedRow_C_ExecuteUbergraph_UI_TVTDeathnatch_ScoreEvents_FeedRow");
static_assert(sizeof(UI_TVTDeathnatch_ScoreEvents_FeedRow_C_ExecuteUbergraph_UI_TVTDeathnatch_ScoreEvents_FeedRow) == 0x000078, "Wrong size on UI_TVTDeathnatch_ScoreEvents_FeedRow_C_ExecuteUbergraph_UI_TVTDeathnatch_ScoreEvents_FeedRow");
static_assert(offsetof(UI_TVTDeathnatch_ScoreEvents_FeedRow_C_ExecuteUbergraph_UI_TVTDeathnatch_ScoreEvents_FeedRow, EntryPoint) == 0x000000, "Member 'UI_TVTDeathnatch_ScoreEvents_FeedRow_C_ExecuteUbergraph_UI_TVTDeathnatch_ScoreEvents_FeedRow::EntryPoint' has a wrong offset!");
static_assert(offsetof(UI_TVTDeathnatch_ScoreEvents_FeedRow_C_ExecuteUbergraph_UI_TVTDeathnatch_ScoreEvents_FeedRow, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'UI_TVTDeathnatch_ScoreEvents_FeedRow_C_ExecuteUbergraph_UI_TVTDeathnatch_ScoreEvents_FeedRow::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(UI_TVTDeathnatch_ScoreEvents_FeedRow_C_ExecuteUbergraph_UI_TVTDeathnatch_ScoreEvents_FeedRow, CallFunc_IsValid_ReturnValue) == 0x000014, "Member 'UI_TVTDeathnatch_ScoreEvents_FeedRow_C_ExecuteUbergraph_UI_TVTDeathnatch_ScoreEvents_FeedRow::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_TVTDeathnatch_ScoreEvents_FeedRow_C_ExecuteUbergraph_UI_TVTDeathnatch_ScoreEvents_FeedRow, K2Node_CreateDelegate_OutputDelegate_1) == 0x000018, "Member 'UI_TVTDeathnatch_ScoreEvents_FeedRow_C_ExecuteUbergraph_UI_TVTDeathnatch_ScoreEvents_FeedRow::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(UI_TVTDeathnatch_ScoreEvents_FeedRow_C_ExecuteUbergraph_UI_TVTDeathnatch_ScoreEvents_FeedRow, CallFunc_CreatePlayAnimationProxyObject_Result) == 0x000028, "Member 'UI_TVTDeathnatch_ScoreEvents_FeedRow_C_ExecuteUbergraph_UI_TVTDeathnatch_ScoreEvents_FeedRow::CallFunc_CreatePlayAnimationProxyObject_Result' has a wrong offset!");
static_assert(offsetof(UI_TVTDeathnatch_ScoreEvents_FeedRow_C_ExecuteUbergraph_UI_TVTDeathnatch_ScoreEvents_FeedRow, CallFunc_CreatePlayAnimationProxyObject_ReturnValue) == 0x000030, "Member 'UI_TVTDeathnatch_ScoreEvents_FeedRow_C_ExecuteUbergraph_UI_TVTDeathnatch_ScoreEvents_FeedRow::CallFunc_CreatePlayAnimationProxyObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_TVTDeathnatch_ScoreEvents_FeedRow_C_ExecuteUbergraph_UI_TVTDeathnatch_ScoreEvents_FeedRow, CallFunc_IsValid_ReturnValue_1) == 0x000038, "Member 'UI_TVTDeathnatch_ScoreEvents_FeedRow_C_ExecuteUbergraph_UI_TVTDeathnatch_ScoreEvents_FeedRow::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_TVTDeathnatch_ScoreEvents_FeedRow_C_ExecuteUbergraph_UI_TVTDeathnatch_ScoreEvents_FeedRow, CallFunc_AddChildToOverlay_ReturnValue) == 0x000040, "Member 'UI_TVTDeathnatch_ScoreEvents_FeedRow_C_ExecuteUbergraph_UI_TVTDeathnatch_ScoreEvents_FeedRow::CallFunc_AddChildToOverlay_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_TVTDeathnatch_ScoreEvents_FeedRow_C_ExecuteUbergraph_UI_TVTDeathnatch_ScoreEvents_FeedRow, K2Node_CreateDelegate_OutputDelegate_2) == 0x000048, "Member 'UI_TVTDeathnatch_ScoreEvents_FeedRow_C_ExecuteUbergraph_UI_TVTDeathnatch_ScoreEvents_FeedRow::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(UI_TVTDeathnatch_ScoreEvents_FeedRow_C_ExecuteUbergraph_UI_TVTDeathnatch_ScoreEvents_FeedRow, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000058, "Member 'UI_TVTDeathnatch_ScoreEvents_FeedRow_C_ExecuteUbergraph_UI_TVTDeathnatch_ScoreEvents_FeedRow::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_TVTDeathnatch_ScoreEvents_FeedRow_C_ExecuteUbergraph_UI_TVTDeathnatch_ScoreEvents_FeedRow, CallFunc_CreatePlayAnimationProxyObject_Result_1) == 0x000060, "Member 'UI_TVTDeathnatch_ScoreEvents_FeedRow_C_ExecuteUbergraph_UI_TVTDeathnatch_ScoreEvents_FeedRow::CallFunc_CreatePlayAnimationProxyObject_Result_1' has a wrong offset!");
static_assert(offsetof(UI_TVTDeathnatch_ScoreEvents_FeedRow_C_ExecuteUbergraph_UI_TVTDeathnatch_ScoreEvents_FeedRow, CallFunc_CreatePlayAnimationProxyObject_ReturnValue_1) == 0x000068, "Member 'UI_TVTDeathnatch_ScoreEvents_FeedRow_C_ExecuteUbergraph_UI_TVTDeathnatch_ScoreEvents_FeedRow::CallFunc_CreatePlayAnimationProxyObject_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_TVTDeathnatch_ScoreEvents_FeedRow_C_ExecuteUbergraph_UI_TVTDeathnatch_ScoreEvents_FeedRow, CallFunc_IsValid_ReturnValue_2) == 0x000070, "Member 'UI_TVTDeathnatch_ScoreEvents_FeedRow_C_ExecuteUbergraph_UI_TVTDeathnatch_ScoreEvents_FeedRow::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");

// Function UI_TVTDeathnatch_ScoreEvents_FeedRow.UI_TVTDeathnatch_ScoreEvents_FeedRow_C.Initialize
// 0x00E0 (0x00E0 - 0x0000)
struct UI_TVTDeathnatch_ScoreEvents_FeedRow_C_Initialize final
{
public:
	class FString                                 EventStringKey;                                    // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int32                                         AwardedScore;                                      // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   EventName;                                         // 0x0018(0x0018)(Edit, BlueprintVisible)
	class UTexture2D*                             ToolIcon;                                          // 0x0030(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_39[0x7];                                       // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0040(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0080(0x0010)(ReferenceParm)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_91[0x7];                                       // 0x0091(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0098(0x0018)()
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B1[0x7];                                       // 0x00B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FStruct_Gunfight_ScoreEventInfo        CallFunc_Map_Find_Value;                           // 0x00B8(0x0020)(HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x00D9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_TVTDeathnatch_ScoreEvents_FeedRow_C_Initialize) == 0x000008, "Wrong alignment on UI_TVTDeathnatch_ScoreEvents_FeedRow_C_Initialize");
static_assert(sizeof(UI_TVTDeathnatch_ScoreEvents_FeedRow_C_Initialize) == 0x0000E0, "Wrong size on UI_TVTDeathnatch_ScoreEvents_FeedRow_C_Initialize");
static_assert(offsetof(UI_TVTDeathnatch_ScoreEvents_FeedRow_C_Initialize, EventStringKey) == 0x000000, "Member 'UI_TVTDeathnatch_ScoreEvents_FeedRow_C_Initialize::EventStringKey' has a wrong offset!");
static_assert(offsetof(UI_TVTDeathnatch_ScoreEvents_FeedRow_C_Initialize, AwardedScore) == 0x000010, "Member 'UI_TVTDeathnatch_ScoreEvents_FeedRow_C_Initialize::AwardedScore' has a wrong offset!");
static_assert(offsetof(UI_TVTDeathnatch_ScoreEvents_FeedRow_C_Initialize, EventName) == 0x000018, "Member 'UI_TVTDeathnatch_ScoreEvents_FeedRow_C_Initialize::EventName' has a wrong offset!");
static_assert(offsetof(UI_TVTDeathnatch_ScoreEvents_FeedRow_C_Initialize, ToolIcon) == 0x000030, "Member 'UI_TVTDeathnatch_ScoreEvents_FeedRow_C_Initialize::ToolIcon' has a wrong offset!");
static_assert(offsetof(UI_TVTDeathnatch_ScoreEvents_FeedRow_C_Initialize, Temp_bool_Variable) == 0x000038, "Member 'UI_TVTDeathnatch_ScoreEvents_FeedRow_C_Initialize::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(UI_TVTDeathnatch_ScoreEvents_FeedRow_C_Initialize, K2Node_MakeStruct_FormatArgumentData) == 0x000040, "Member 'UI_TVTDeathnatch_ScoreEvents_FeedRow_C_Initialize::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(UI_TVTDeathnatch_ScoreEvents_FeedRow_C_Initialize, K2Node_MakeArray_Array) == 0x000080, "Member 'UI_TVTDeathnatch_ScoreEvents_FeedRow_C_Initialize::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(UI_TVTDeathnatch_ScoreEvents_FeedRow_C_Initialize, Temp_byte_Variable) == 0x000090, "Member 'UI_TVTDeathnatch_ScoreEvents_FeedRow_C_Initialize::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(UI_TVTDeathnatch_ScoreEvents_FeedRow_C_Initialize, CallFunc_Format_ReturnValue) == 0x000098, "Member 'UI_TVTDeathnatch_ScoreEvents_FeedRow_C_Initialize::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_TVTDeathnatch_ScoreEvents_FeedRow_C_Initialize, Temp_byte_Variable_1) == 0x0000B0, "Member 'UI_TVTDeathnatch_ScoreEvents_FeedRow_C_Initialize::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(UI_TVTDeathnatch_ScoreEvents_FeedRow_C_Initialize, CallFunc_Map_Find_Value) == 0x0000B8, "Member 'UI_TVTDeathnatch_ScoreEvents_FeedRow_C_Initialize::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(UI_TVTDeathnatch_ScoreEvents_FeedRow_C_Initialize, CallFunc_Map_Find_ReturnValue) == 0x0000D8, "Member 'UI_TVTDeathnatch_ScoreEvents_FeedRow_C_Initialize::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_TVTDeathnatch_ScoreEvents_FeedRow_C_Initialize, K2Node_Select_Default) == 0x0000D9, "Member 'UI_TVTDeathnatch_ScoreEvents_FeedRow_C_Initialize::K2Node_Select_Default' has a wrong offset!");

// Function UI_TVTDeathnatch_ScoreEvents_FeedRow.UI_TVTDeathnatch_ScoreEvents_FeedRow_C.UpdateContent
// 0x0018 (0x0018 - 0x0000)
struct UI_TVTDeathnatch_ScoreEvents_FeedRow_C_UpdateContent final
{
public:
	class FString                                 EventStringKey;                                    // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int32                                         AwardedScore;                                      // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_TVTDeathnatch_ScoreEvents_FeedRow_C_UpdateContent) == 0x000008, "Wrong alignment on UI_TVTDeathnatch_ScoreEvents_FeedRow_C_UpdateContent");
static_assert(sizeof(UI_TVTDeathnatch_ScoreEvents_FeedRow_C_UpdateContent) == 0x000018, "Wrong size on UI_TVTDeathnatch_ScoreEvents_FeedRow_C_UpdateContent");
static_assert(offsetof(UI_TVTDeathnatch_ScoreEvents_FeedRow_C_UpdateContent, EventStringKey) == 0x000000, "Member 'UI_TVTDeathnatch_ScoreEvents_FeedRow_C_UpdateContent::EventStringKey' has a wrong offset!");
static_assert(offsetof(UI_TVTDeathnatch_ScoreEvents_FeedRow_C_UpdateContent, AwardedScore) == 0x000010, "Member 'UI_TVTDeathnatch_ScoreEvents_FeedRow_C_UpdateContent::AwardedScore' has a wrong offset!");

}

