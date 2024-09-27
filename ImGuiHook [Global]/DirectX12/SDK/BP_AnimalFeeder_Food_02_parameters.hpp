#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AnimalFeeder_Food_02

#include "Basic.hpp"

#include "E_Lootable_State_structs.hpp"


namespace SDK::Params
{

// Function BP_AnimalFeeder_Food_02.BP_AnimalFeeder_Food_02_C.ExecuteUbergraph_BP_AnimalFeeder_Food_02
// 0x0030 (0x0030 - 0x0000)
struct BP_AnimalFeeder_Food_02_C_ExecuteUbergraph_BP_AnimalFeeder_Food_02 final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UEventSystem*                           CallFunc_GetEventSystem_ReturnValue;               // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_EventSystem_C*                      K2Node_DynamicCast_AsBP_Event_System;              // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	E_Lootable_State                              CallFunc_Determine_State_Based_On_Current_Circumstances_Appropriate_State; // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x001B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1D[0x3];                                       // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0020(0x0010)(ZeroConstructor, NoDestructor)
};
static_assert(alignof(BP_AnimalFeeder_Food_02_C_ExecuteUbergraph_BP_AnimalFeeder_Food_02) == 0x000008, "Wrong alignment on BP_AnimalFeeder_Food_02_C_ExecuteUbergraph_BP_AnimalFeeder_Food_02");
static_assert(sizeof(BP_AnimalFeeder_Food_02_C_ExecuteUbergraph_BP_AnimalFeeder_Food_02) == 0x000030, "Wrong size on BP_AnimalFeeder_Food_02_C_ExecuteUbergraph_BP_AnimalFeeder_Food_02");
static_assert(offsetof(BP_AnimalFeeder_Food_02_C_ExecuteUbergraph_BP_AnimalFeeder_Food_02, EntryPoint) == 0x000000, "Member 'BP_AnimalFeeder_Food_02_C_ExecuteUbergraph_BP_AnimalFeeder_Food_02::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_AnimalFeeder_Food_02_C_ExecuteUbergraph_BP_AnimalFeeder_Food_02, CallFunc_GetEventSystem_ReturnValue) == 0x000008, "Member 'BP_AnimalFeeder_Food_02_C_ExecuteUbergraph_BP_AnimalFeeder_Food_02::CallFunc_GetEventSystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AnimalFeeder_Food_02_C_ExecuteUbergraph_BP_AnimalFeeder_Food_02, K2Node_DynamicCast_AsBP_Event_System) == 0x000010, "Member 'BP_AnimalFeeder_Food_02_C_ExecuteUbergraph_BP_AnimalFeeder_Food_02::K2Node_DynamicCast_AsBP_Event_System' has a wrong offset!");
static_assert(offsetof(BP_AnimalFeeder_Food_02_C_ExecuteUbergraph_BP_AnimalFeeder_Food_02, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'BP_AnimalFeeder_Food_02_C_ExecuteUbergraph_BP_AnimalFeeder_Food_02::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_AnimalFeeder_Food_02_C_ExecuteUbergraph_BP_AnimalFeeder_Food_02, CallFunc_Determine_State_Based_On_Current_Circumstances_Appropriate_State) == 0x000019, "Member 'BP_AnimalFeeder_Food_02_C_ExecuteUbergraph_BP_AnimalFeeder_Food_02::CallFunc_Determine_State_Based_On_Current_Circumstances_Appropriate_State' has a wrong offset!");
static_assert(offsetof(BP_AnimalFeeder_Food_02_C_ExecuteUbergraph_BP_AnimalFeeder_Food_02, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x00001A, "Member 'BP_AnimalFeeder_Food_02_C_ExecuteUbergraph_BP_AnimalFeeder_Food_02::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AnimalFeeder_Food_02_C_ExecuteUbergraph_BP_AnimalFeeder_Food_02, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x00001B, "Member 'BP_AnimalFeeder_Food_02_C_ExecuteUbergraph_BP_AnimalFeeder_Food_02::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AnimalFeeder_Food_02_C_ExecuteUbergraph_BP_AnimalFeeder_Food_02, CallFunc_BooleanOR_ReturnValue) == 0x00001C, "Member 'BP_AnimalFeeder_Food_02_C_ExecuteUbergraph_BP_AnimalFeeder_Food_02::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AnimalFeeder_Food_02_C_ExecuteUbergraph_BP_AnimalFeeder_Food_02, K2Node_CreateDelegate_OutputDelegate) == 0x000020, "Member 'BP_AnimalFeeder_Food_02_C_ExecuteUbergraph_BP_AnimalFeeder_Food_02::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");

}

