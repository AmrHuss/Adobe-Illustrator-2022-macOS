#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_ThrowableAiming

#include "Basic.hpp"

#include "FlameUI_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function UI_ThrowableAiming.UI_ThrowableAiming_C.ExecuteUbergraph_UI_ThrowableAiming
// 0x0090 (0x0090 - 0x0000)
struct UI_ThrowableAiming_C_ExecuteUbergraph_UI_ThrowableAiming final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0004(0x0038)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGameStateBase*                         CallFunc_GetGameState_ReturnValue;                 // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_TeamsGameState_C> K2Node_DynamicCast_AsBPI_Teams_Game_State;         // 0x0048(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5A[0x6];                                       // 0x005A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_GameState_Teams_C*                  CallFunc_GetTeamsGameStateReference_TeamsGS;       // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0069(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x006A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6B[0x1];                                       // 0x006B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x006C(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x007C(0x0010)(ZeroConstructor, NoDestructor)
};
static_assert(alignof(UI_ThrowableAiming_C_ExecuteUbergraph_UI_ThrowableAiming) == 0x000008, "Wrong alignment on UI_ThrowableAiming_C_ExecuteUbergraph_UI_ThrowableAiming");
static_assert(sizeof(UI_ThrowableAiming_C_ExecuteUbergraph_UI_ThrowableAiming) == 0x000090, "Wrong size on UI_ThrowableAiming_C_ExecuteUbergraph_UI_ThrowableAiming");
static_assert(offsetof(UI_ThrowableAiming_C_ExecuteUbergraph_UI_ThrowableAiming, EntryPoint) == 0x000000, "Member 'UI_ThrowableAiming_C_ExecuteUbergraph_UI_ThrowableAiming::EntryPoint' has a wrong offset!");
static_assert(offsetof(UI_ThrowableAiming_C_ExecuteUbergraph_UI_ThrowableAiming, K2Node_Event_MyGeometry) == 0x000004, "Member 'UI_ThrowableAiming_C_ExecuteUbergraph_UI_ThrowableAiming::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(UI_ThrowableAiming_C_ExecuteUbergraph_UI_ThrowableAiming, K2Node_Event_InDeltaTime) == 0x00003C, "Member 'UI_ThrowableAiming_C_ExecuteUbergraph_UI_ThrowableAiming::K2Node_Event_InDeltaTime' has a wrong offset!");
static_assert(offsetof(UI_ThrowableAiming_C_ExecuteUbergraph_UI_ThrowableAiming, CallFunc_GetGameState_ReturnValue) == 0x000040, "Member 'UI_ThrowableAiming_C_ExecuteUbergraph_UI_ThrowableAiming::CallFunc_GetGameState_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_ThrowableAiming_C_ExecuteUbergraph_UI_ThrowableAiming, K2Node_DynamicCast_AsBPI_Teams_Game_State) == 0x000048, "Member 'UI_ThrowableAiming_C_ExecuteUbergraph_UI_ThrowableAiming::K2Node_DynamicCast_AsBPI_Teams_Game_State' has a wrong offset!");
static_assert(offsetof(UI_ThrowableAiming_C_ExecuteUbergraph_UI_ThrowableAiming, K2Node_DynamicCast_bSuccess) == 0x000058, "Member 'UI_ThrowableAiming_C_ExecuteUbergraph_UI_ThrowableAiming::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(UI_ThrowableAiming_C_ExecuteUbergraph_UI_ThrowableAiming, CallFunc_IsValid_ReturnValue) == 0x000059, "Member 'UI_ThrowableAiming_C_ExecuteUbergraph_UI_ThrowableAiming::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_ThrowableAiming_C_ExecuteUbergraph_UI_ThrowableAiming, CallFunc_GetTeamsGameStateReference_TeamsGS) == 0x000060, "Member 'UI_ThrowableAiming_C_ExecuteUbergraph_UI_ThrowableAiming::CallFunc_GetTeamsGameStateReference_TeamsGS' has a wrong offset!");
static_assert(offsetof(UI_ThrowableAiming_C_ExecuteUbergraph_UI_ThrowableAiming, CallFunc_IsValid_ReturnValue_1) == 0x000068, "Member 'UI_ThrowableAiming_C_ExecuteUbergraph_UI_ThrowableAiming::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_ThrowableAiming_C_ExecuteUbergraph_UI_ThrowableAiming, CallFunc_IsValid_ReturnValue_2) == 0x000069, "Member 'UI_ThrowableAiming_C_ExecuteUbergraph_UI_ThrowableAiming::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UI_ThrowableAiming_C_ExecuteUbergraph_UI_ThrowableAiming, CallFunc_IsValid_ReturnValue_3) == 0x00006A, "Member 'UI_ThrowableAiming_C_ExecuteUbergraph_UI_ThrowableAiming::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(UI_ThrowableAiming_C_ExecuteUbergraph_UI_ThrowableAiming, K2Node_CreateDelegate_OutputDelegate) == 0x00006C, "Member 'UI_ThrowableAiming_C_ExecuteUbergraph_UI_ThrowableAiming::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(UI_ThrowableAiming_C_ExecuteUbergraph_UI_ThrowableAiming, K2Node_CreateDelegate_OutputDelegate_1) == 0x00007C, "Member 'UI_ThrowableAiming_C_ExecuteUbergraph_UI_ThrowableAiming::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");

// Function UI_ThrowableAiming.UI_ThrowableAiming_C.Tick
// 0x003C (0x003C - 0x0000)
struct UI_ThrowableAiming_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0038(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_ThrowableAiming_C_Tick) == 0x000004, "Wrong alignment on UI_ThrowableAiming_C_Tick");
static_assert(sizeof(UI_ThrowableAiming_C_Tick) == 0x00003C, "Wrong size on UI_ThrowableAiming_C_Tick");
static_assert(offsetof(UI_ThrowableAiming_C_Tick, MyGeometry) == 0x000000, "Member 'UI_ThrowableAiming_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(UI_ThrowableAiming_C_Tick, InDeltaTime) == 0x000038, "Member 'UI_ThrowableAiming_C_Tick::InDeltaTime' has a wrong offset!");

// Function UI_ThrowableAiming.UI_ThrowableAiming_C.SetHoldProgress
// 0x0008 (0x0008 - 0x0000)
struct UI_ThrowableAiming_C_SetHoldProgress final
{
public:
	bool                                          CanBeUsed_0;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Progress;                                          // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_ThrowableAiming_C_SetHoldProgress) == 0x000004, "Wrong alignment on UI_ThrowableAiming_C_SetHoldProgress");
static_assert(sizeof(UI_ThrowableAiming_C_SetHoldProgress) == 0x000008, "Wrong size on UI_ThrowableAiming_C_SetHoldProgress");
static_assert(offsetof(UI_ThrowableAiming_C_SetHoldProgress, CanBeUsed_0) == 0x000000, "Member 'UI_ThrowableAiming_C_SetHoldProgress::CanBeUsed_0' has a wrong offset!");
static_assert(offsetof(UI_ThrowableAiming_C_SetHoldProgress, Progress) == 0x000004, "Member 'UI_ThrowableAiming_C_SetHoldProgress::Progress' has a wrong offset!");

// Function UI_ThrowableAiming.UI_ThrowableAiming_C.UpdateIcons
// 0x0028 (0x0028 - 0x0000)
struct UI_ThrowableAiming_C_UpdateIcons final
{
public:
	EInputIcon                                    CallFunc_GetInputIcon_InputIcon;                   // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UImage*                                 CallFunc_GetHoldIcon_GamepadIcon;                  // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             CallFunc_GetInputIcon_ReturnValue;                 // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;           // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UI_ThrowableAiming_C_UpdateIcons) == 0x000008, "Wrong alignment on UI_ThrowableAiming_C_UpdateIcons");
static_assert(sizeof(UI_ThrowableAiming_C_UpdateIcons) == 0x000028, "Wrong size on UI_ThrowableAiming_C_UpdateIcons");
static_assert(offsetof(UI_ThrowableAiming_C_UpdateIcons, CallFunc_GetInputIcon_InputIcon) == 0x000000, "Member 'UI_ThrowableAiming_C_UpdateIcons::CallFunc_GetInputIcon_InputIcon' has a wrong offset!");
static_assert(offsetof(UI_ThrowableAiming_C_UpdateIcons, CallFunc_GetHoldIcon_GamepadIcon) == 0x000008, "Member 'UI_ThrowableAiming_C_UpdateIcons::CallFunc_GetHoldIcon_GamepadIcon' has a wrong offset!");
static_assert(offsetof(UI_ThrowableAiming_C_UpdateIcons, CallFunc_GetInputIcon_ReturnValue) == 0x000010, "Member 'UI_ThrowableAiming_C_UpdateIcons::CallFunc_GetInputIcon_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_ThrowableAiming_C_UpdateIcons, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000018, "Member 'UI_ThrowableAiming_C_UpdateIcons::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_ThrowableAiming_C_UpdateIcons, CallFunc_IsValid_ReturnValue) == 0x000020, "Member 'UI_ThrowableAiming_C_UpdateIcons::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function UI_ThrowableAiming.UI_ThrowableAiming_C.GetHoldIcon
// 0x0008 (0x0008 - 0x0000)
struct UI_ThrowableAiming_C_GetHoldIcon final
{
public:
	class UImage*                                 GamepadIcon_0;                                     // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_ThrowableAiming_C_GetHoldIcon) == 0x000008, "Wrong alignment on UI_ThrowableAiming_C_GetHoldIcon");
static_assert(sizeof(UI_ThrowableAiming_C_GetHoldIcon) == 0x000008, "Wrong size on UI_ThrowableAiming_C_GetHoldIcon");
static_assert(offsetof(UI_ThrowableAiming_C_GetHoldIcon, GamepadIcon_0) == 0x000000, "Member 'UI_ThrowableAiming_C_GetHoldIcon::GamepadIcon_0' has a wrong offset!");

}

