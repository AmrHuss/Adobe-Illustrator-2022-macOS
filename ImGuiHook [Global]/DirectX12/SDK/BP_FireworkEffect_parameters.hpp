#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_FireworkEffect

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_FireworkEffect.BP_FireworkEffect_C.ExecuteUbergraph_BP_FireworkEffect
// 0x00E8 (0x00E8 - 0x0000)
struct BP_FireworkEffect_C_ExecuteUbergraph_BP_FireworkEffect final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0004(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               CallFunc_SpawnEmitterAtLocation_ReturnValue;       // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RandomFloatInRange_ReturnValue;           // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x0020(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RandomFloatInRange_ReturnValue_1;         // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_AddActorWorldOffset_SweepHitResult;    // 0x0030(0x008C)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	float                                         CallFunc_RandomFloatInRange_ReturnValue_2;         // 0x00BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RandomFloatInRange_ReturnValue_3;         // 0x00C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x00C4(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x00D0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x00DC(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_FireworkEffect_C_ExecuteUbergraph_BP_FireworkEffect) == 0x000008, "Wrong alignment on BP_FireworkEffect_C_ExecuteUbergraph_BP_FireworkEffect");
static_assert(sizeof(BP_FireworkEffect_C_ExecuteUbergraph_BP_FireworkEffect) == 0x0000E8, "Wrong size on BP_FireworkEffect_C_ExecuteUbergraph_BP_FireworkEffect");
static_assert(offsetof(BP_FireworkEffect_C_ExecuteUbergraph_BP_FireworkEffect, EntryPoint) == 0x000000, "Member 'BP_FireworkEffect_C_ExecuteUbergraph_BP_FireworkEffect::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_FireworkEffect_C_ExecuteUbergraph_BP_FireworkEffect, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000004, "Member 'BP_FireworkEffect_C_ExecuteUbergraph_BP_FireworkEffect::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FireworkEffect_C_ExecuteUbergraph_BP_FireworkEffect, CallFunc_SpawnEmitterAtLocation_ReturnValue) == 0x000010, "Member 'BP_FireworkEffect_C_ExecuteUbergraph_BP_FireworkEffect::CallFunc_SpawnEmitterAtLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FireworkEffect_C_ExecuteUbergraph_BP_FireworkEffect, K2Node_Event_DeltaSeconds) == 0x000018, "Member 'BP_FireworkEffect_C_ExecuteUbergraph_BP_FireworkEffect::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BP_FireworkEffect_C_ExecuteUbergraph_BP_FireworkEffect, CallFunc_RandomFloatInRange_ReturnValue) == 0x00001C, "Member 'BP_FireworkEffect_C_ExecuteUbergraph_BP_FireworkEffect::CallFunc_RandomFloatInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FireworkEffect_C_ExecuteUbergraph_BP_FireworkEffect, CallFunc_Multiply_VectorFloat_ReturnValue) == 0x000020, "Member 'BP_FireworkEffect_C_ExecuteUbergraph_BP_FireworkEffect::CallFunc_Multiply_VectorFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FireworkEffect_C_ExecuteUbergraph_BP_FireworkEffect, CallFunc_RandomFloatInRange_ReturnValue_1) == 0x00002C, "Member 'BP_FireworkEffect_C_ExecuteUbergraph_BP_FireworkEffect::CallFunc_RandomFloatInRange_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_FireworkEffect_C_ExecuteUbergraph_BP_FireworkEffect, CallFunc_K2_AddActorWorldOffset_SweepHitResult) == 0x000030, "Member 'BP_FireworkEffect_C_ExecuteUbergraph_BP_FireworkEffect::CallFunc_K2_AddActorWorldOffset_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_FireworkEffect_C_ExecuteUbergraph_BP_FireworkEffect, CallFunc_RandomFloatInRange_ReturnValue_2) == 0x0000BC, "Member 'BP_FireworkEffect_C_ExecuteUbergraph_BP_FireworkEffect::CallFunc_RandomFloatInRange_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_FireworkEffect_C_ExecuteUbergraph_BP_FireworkEffect, CallFunc_RandomFloatInRange_ReturnValue_3) == 0x0000C0, "Member 'BP_FireworkEffect_C_ExecuteUbergraph_BP_FireworkEffect::CallFunc_RandomFloatInRange_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_FireworkEffect_C_ExecuteUbergraph_BP_FireworkEffect, CallFunc_MakeVector_ReturnValue) == 0x0000C4, "Member 'BP_FireworkEffect_C_ExecuteUbergraph_BP_FireworkEffect::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FireworkEffect_C_ExecuteUbergraph_BP_FireworkEffect, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x0000D0, "Member 'BP_FireworkEffect_C_ExecuteUbergraph_BP_FireworkEffect::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_FireworkEffect_C_ExecuteUbergraph_BP_FireworkEffect, CallFunc_Add_VectorVector_ReturnValue) == 0x0000DC, "Member 'BP_FireworkEffect_C_ExecuteUbergraph_BP_FireworkEffect::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");

// Function BP_FireworkEffect.BP_FireworkEffect_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct BP_FireworkEffect_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_FireworkEffect_C_ReceiveTick) == 0x000004, "Wrong alignment on BP_FireworkEffect_C_ReceiveTick");
static_assert(sizeof(BP_FireworkEffect_C_ReceiveTick) == 0x000004, "Wrong size on BP_FireworkEffect_C_ReceiveTick");
static_assert(offsetof(BP_FireworkEffect_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'BP_FireworkEffect_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function BP_FireworkEffect.BP_FireworkEffect_C.SetParticleColors
// 0x0080 (0x0080 - 0x0000)
struct BP_FireworkEffect_C_SetParticleColors final
{
public:
	class UParticleSystemComponent*               InputPin;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Color;                                             // 0x0008(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           K2Node_MakeStruct_LinearColor;                     // 0x0018(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           K2Node_MakeStruct_LinearColor_1;                   // 0x0028(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           K2Node_MakeStruct_LinearColor_2;                   // 0x0038(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           K2Node_MakeStruct_LinearColor_3;                   // 0x0048(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           K2Node_MakeStruct_LinearColor_4;                   // 0x0058(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FLinearColor>                   K2Node_MakeArray_Array;                            // 0x0068(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_RandomInteger_ReturnValue;                // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_FireworkEffect_C_SetParticleColors) == 0x000008, "Wrong alignment on BP_FireworkEffect_C_SetParticleColors");
static_assert(sizeof(BP_FireworkEffect_C_SetParticleColors) == 0x000080, "Wrong size on BP_FireworkEffect_C_SetParticleColors");
static_assert(offsetof(BP_FireworkEffect_C_SetParticleColors, InputPin) == 0x000000, "Member 'BP_FireworkEffect_C_SetParticleColors::InputPin' has a wrong offset!");
static_assert(offsetof(BP_FireworkEffect_C_SetParticleColors, Color) == 0x000008, "Member 'BP_FireworkEffect_C_SetParticleColors::Color' has a wrong offset!");
static_assert(offsetof(BP_FireworkEffect_C_SetParticleColors, K2Node_MakeStruct_LinearColor) == 0x000018, "Member 'BP_FireworkEffect_C_SetParticleColors::K2Node_MakeStruct_LinearColor' has a wrong offset!");
static_assert(offsetof(BP_FireworkEffect_C_SetParticleColors, K2Node_MakeStruct_LinearColor_1) == 0x000028, "Member 'BP_FireworkEffect_C_SetParticleColors::K2Node_MakeStruct_LinearColor_1' has a wrong offset!");
static_assert(offsetof(BP_FireworkEffect_C_SetParticleColors, K2Node_MakeStruct_LinearColor_2) == 0x000038, "Member 'BP_FireworkEffect_C_SetParticleColors::K2Node_MakeStruct_LinearColor_2' has a wrong offset!");
static_assert(offsetof(BP_FireworkEffect_C_SetParticleColors, K2Node_MakeStruct_LinearColor_3) == 0x000048, "Member 'BP_FireworkEffect_C_SetParticleColors::K2Node_MakeStruct_LinearColor_3' has a wrong offset!");
static_assert(offsetof(BP_FireworkEffect_C_SetParticleColors, K2Node_MakeStruct_LinearColor_4) == 0x000058, "Member 'BP_FireworkEffect_C_SetParticleColors::K2Node_MakeStruct_LinearColor_4' has a wrong offset!");
static_assert(offsetof(BP_FireworkEffect_C_SetParticleColors, K2Node_MakeArray_Array) == 0x000068, "Member 'BP_FireworkEffect_C_SetParticleColors::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(BP_FireworkEffect_C_SetParticleColors, CallFunc_Array_Length_ReturnValue) == 0x000078, "Member 'BP_FireworkEffect_C_SetParticleColors::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FireworkEffect_C_SetParticleColors, CallFunc_RandomInteger_ReturnValue) == 0x00007C, "Member 'BP_FireworkEffect_C_SetParticleColors::CallFunc_RandomInteger_ReturnValue' has a wrong offset!");

}

