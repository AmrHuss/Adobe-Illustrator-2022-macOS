#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_PlayerKickedWarning

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function UI_PlayerKickedWarning.UI_PlayerKickedWarning_C.ExecuteUbergraph_UI_PlayerKickedWarning
// 0x0038 (0x0038 - 0x0000)
struct UI_PlayerKickedWarning_C_ExecuteUbergraph_UI_PlayerKickedWarning final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0018(0x0008)(NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        CallFunc_CreateSound2D_ReturnValue;                // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_PlayerKickedWarning_C_ExecuteUbergraph_UI_PlayerKickedWarning) == 0x000008, "Wrong alignment on UI_PlayerKickedWarning_C_ExecuteUbergraph_UI_PlayerKickedWarning");
static_assert(sizeof(UI_PlayerKickedWarning_C_ExecuteUbergraph_UI_PlayerKickedWarning) == 0x000038, "Wrong size on UI_PlayerKickedWarning_C_ExecuteUbergraph_UI_PlayerKickedWarning");
static_assert(offsetof(UI_PlayerKickedWarning_C_ExecuteUbergraph_UI_PlayerKickedWarning, EntryPoint) == 0x000000, "Member 'UI_PlayerKickedWarning_C_ExecuteUbergraph_UI_PlayerKickedWarning::EntryPoint' has a wrong offset!");
static_assert(offsetof(UI_PlayerKickedWarning_C_ExecuteUbergraph_UI_PlayerKickedWarning, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'UI_PlayerKickedWarning_C_ExecuteUbergraph_UI_PlayerKickedWarning::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(UI_PlayerKickedWarning_C_ExecuteUbergraph_UI_PlayerKickedWarning, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000018, "Member 'UI_PlayerKickedWarning_C_ExecuteUbergraph_UI_PlayerKickedWarning::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_PlayerKickedWarning_C_ExecuteUbergraph_UI_PlayerKickedWarning, CallFunc_IsValid_ReturnValue) == 0x000020, "Member 'UI_PlayerKickedWarning_C_ExecuteUbergraph_UI_PlayerKickedWarning::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_PlayerKickedWarning_C_ExecuteUbergraph_UI_PlayerKickedWarning, CallFunc_PlayAnimation_ReturnValue) == 0x000028, "Member 'UI_PlayerKickedWarning_C_ExecuteUbergraph_UI_PlayerKickedWarning::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_PlayerKickedWarning_C_ExecuteUbergraph_UI_PlayerKickedWarning, CallFunc_CreateSound2D_ReturnValue) == 0x000030, "Member 'UI_PlayerKickedWarning_C_ExecuteUbergraph_UI_PlayerKickedWarning::CallFunc_CreateSound2D_ReturnValue' has a wrong offset!");

}

