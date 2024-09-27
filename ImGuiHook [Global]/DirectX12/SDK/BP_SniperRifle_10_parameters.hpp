#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SniperRifle_10

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_SniperRifle_10.BP_SniperRifle_10_C.ExecuteUbergraph_BP_SniperRifle_10
// 0x0030 (0x0030 - 0x0000)
struct BP_SniperRifle_10_C_ExecuteUbergraph_BP_SniperRifle_10 final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0018(0x0008)(NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_FloatFloat_ReturnValue;      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_21[0x3];                                       // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SniperRifle_10_C_ExecuteUbergraph_BP_SniperRifle_10) == 0x000008, "Wrong alignment on BP_SniperRifle_10_C_ExecuteUbergraph_BP_SniperRifle_10");
static_assert(sizeof(BP_SniperRifle_10_C_ExecuteUbergraph_BP_SniperRifle_10) == 0x000030, "Wrong size on BP_SniperRifle_10_C_ExecuteUbergraph_BP_SniperRifle_10");
static_assert(offsetof(BP_SniperRifle_10_C_ExecuteUbergraph_BP_SniperRifle_10, EntryPoint) == 0x000000, "Member 'BP_SniperRifle_10_C_ExecuteUbergraph_BP_SniperRifle_10::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_SniperRifle_10_C_ExecuteUbergraph_BP_SniperRifle_10, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'BP_SniperRifle_10_C_ExecuteUbergraph_BP_SniperRifle_10::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_SniperRifle_10_C_ExecuteUbergraph_BP_SniperRifle_10, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000018, "Member 'BP_SniperRifle_10_C_ExecuteUbergraph_BP_SniperRifle_10::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SniperRifle_10_C_ExecuteUbergraph_BP_SniperRifle_10, CallFunc_GreaterEqual_FloatFloat_ReturnValue) == 0x000020, "Member 'BP_SniperRifle_10_C_ExecuteUbergraph_BP_SniperRifle_10::CallFunc_GreaterEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SniperRifle_10_C_ExecuteUbergraph_BP_SniperRifle_10, CallFunc_Divide_FloatFloat_ReturnValue) == 0x000024, "Member 'BP_SniperRifle_10_C_ExecuteUbergraph_BP_SniperRifle_10::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SniperRifle_10_C_ExecuteUbergraph_BP_SniperRifle_10, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x000028, "Member 'BP_SniperRifle_10_C_ExecuteUbergraph_BP_SniperRifle_10::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");

// Function BP_SniperRifle_10.BP_SniperRifle_10_C.SimulateMagDrop
// 0x0030 (0x0030 - 0x0000)
struct BP_SniperRifle_10_C_SimulateMagDrop final
{
public:
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0000(0x0010)(ZeroConstructor, NoDestructor)
	struct FVector                                CallFunc_GetForwardVector_ReturnValue;             // 0x0010(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x001C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0028(0x0008)(NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SniperRifle_10_C_SimulateMagDrop) == 0x000008, "Wrong alignment on BP_SniperRifle_10_C_SimulateMagDrop");
static_assert(sizeof(BP_SniperRifle_10_C_SimulateMagDrop) == 0x000030, "Wrong size on BP_SniperRifle_10_C_SimulateMagDrop");
static_assert(offsetof(BP_SniperRifle_10_C_SimulateMagDrop, K2Node_CreateDelegate_OutputDelegate) == 0x000000, "Member 'BP_SniperRifle_10_C_SimulateMagDrop::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_SniperRifle_10_C_SimulateMagDrop, CallFunc_GetForwardVector_ReturnValue) == 0x000010, "Member 'BP_SniperRifle_10_C_SimulateMagDrop::CallFunc_GetForwardVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SniperRifle_10_C_SimulateMagDrop, CallFunc_Multiply_VectorFloat_ReturnValue) == 0x00001C, "Member 'BP_SniperRifle_10_C_SimulateMagDrop::CallFunc_Multiply_VectorFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SniperRifle_10_C_SimulateMagDrop, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000028, "Member 'BP_SniperRifle_10_C_SimulateMagDrop::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");

// Function BP_SniperRifle_10.BP_SniperRifle_10_C.ResetDroppedMagPosition
// 0x0001 (0x0001 - 0x0000)
struct BP_SniperRifle_10_C_ResetDroppedMagPosition final
{
public:
	bool                                          CallFunc_K2_AttachToComponent_ReturnValue;         // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_SniperRifle_10_C_ResetDroppedMagPosition) == 0x000001, "Wrong alignment on BP_SniperRifle_10_C_ResetDroppedMagPosition");
static_assert(sizeof(BP_SniperRifle_10_C_ResetDroppedMagPosition) == 0x000001, "Wrong size on BP_SniperRifle_10_C_ResetDroppedMagPosition");
static_assert(offsetof(BP_SniperRifle_10_C_ResetDroppedMagPosition, CallFunc_K2_AttachToComponent_ReturnValue) == 0x000000, "Member 'BP_SniperRifle_10_C_ResetDroppedMagPosition::CallFunc_K2_AttachToComponent_ReturnValue' has a wrong offset!");

// Function BP_SniperRifle_10.BP_SniperRifle_10_C.MagInitiate
// 0x0050 (0x0050 - 0x0000)
struct BP_SniperRifle_10_C_MagInitiate final
{
public:
	class UObject*                                CallFunc_LoadAsset_Blocking_ReturnValue;           // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValidSoftObjectReference_ReturnValue;   // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UStaticMesh*                            K2Node_DynamicCast_AsStatic_Mesh;                  // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TSubclassOf<class AItemSkin>                  CallFunc_GetSkin_ReturnValue;                      // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          CallFunc_SetStaticMesh_ReturnValue;                // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_29[0x3];                                       // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetMaterialIndex_ReturnValue;             // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetMaterialIndex_ReturnValue_1;           // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_34[0x4];                                       // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInterface*                     CallFunc_GetMaterial_ReturnValue;                  // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     CallFunc_GetMaterial_ReturnValue_1;                // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ClassClass_ReturnValue;        // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_SniperRifle_10_C_MagInitiate) == 0x000008, "Wrong alignment on BP_SniperRifle_10_C_MagInitiate");
static_assert(sizeof(BP_SniperRifle_10_C_MagInitiate) == 0x000050, "Wrong size on BP_SniperRifle_10_C_MagInitiate");
static_assert(offsetof(BP_SniperRifle_10_C_MagInitiate, CallFunc_LoadAsset_Blocking_ReturnValue) == 0x000000, "Member 'BP_SniperRifle_10_C_MagInitiate::CallFunc_LoadAsset_Blocking_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SniperRifle_10_C_MagInitiate, CallFunc_IsValidSoftObjectReference_ReturnValue) == 0x000008, "Member 'BP_SniperRifle_10_C_MagInitiate::CallFunc_IsValidSoftObjectReference_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SniperRifle_10_C_MagInitiate, K2Node_DynamicCast_AsStatic_Mesh) == 0x000010, "Member 'BP_SniperRifle_10_C_MagInitiate::K2Node_DynamicCast_AsStatic_Mesh' has a wrong offset!");
static_assert(offsetof(BP_SniperRifle_10_C_MagInitiate, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'BP_SniperRifle_10_C_MagInitiate::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_SniperRifle_10_C_MagInitiate, CallFunc_GetSkin_ReturnValue) == 0x000020, "Member 'BP_SniperRifle_10_C_MagInitiate::CallFunc_GetSkin_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SniperRifle_10_C_MagInitiate, CallFunc_SetStaticMesh_ReturnValue) == 0x000028, "Member 'BP_SniperRifle_10_C_MagInitiate::CallFunc_SetStaticMesh_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SniperRifle_10_C_MagInitiate, CallFunc_GetMaterialIndex_ReturnValue) == 0x00002C, "Member 'BP_SniperRifle_10_C_MagInitiate::CallFunc_GetMaterialIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SniperRifle_10_C_MagInitiate, CallFunc_GetMaterialIndex_ReturnValue_1) == 0x000030, "Member 'BP_SniperRifle_10_C_MagInitiate::CallFunc_GetMaterialIndex_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SniperRifle_10_C_MagInitiate, CallFunc_GetMaterial_ReturnValue) == 0x000038, "Member 'BP_SniperRifle_10_C_MagInitiate::CallFunc_GetMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SniperRifle_10_C_MagInitiate, CallFunc_GetMaterial_ReturnValue_1) == 0x000040, "Member 'BP_SniperRifle_10_C_MagInitiate::CallFunc_GetMaterial_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SniperRifle_10_C_MagInitiate, CallFunc_EqualEqual_ClassClass_ReturnValue) == 0x000048, "Member 'BP_SniperRifle_10_C_MagInitiate::CallFunc_EqualEqual_ClassClass_ReturnValue' has a wrong offset!");

// Function BP_SniperRifle_10.BP_SniperRifle_10_C.CheckSkin
// 0x0018 (0x0018 - 0x0000)
struct BP_SniperRifle_10_C_CheckSkin final
{
public:
	bool                                          IsTheSame;                                         // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TSubclassOf<class AItemSkin>                  CallFunc_GetSkin_ReturnValue;                      // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ClassClass_ReturnValue;        // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_SniperRifle_10_C_CheckSkin) == 0x000008, "Wrong alignment on BP_SniperRifle_10_C_CheckSkin");
static_assert(sizeof(BP_SniperRifle_10_C_CheckSkin) == 0x000018, "Wrong size on BP_SniperRifle_10_C_CheckSkin");
static_assert(offsetof(BP_SniperRifle_10_C_CheckSkin, IsTheSame) == 0x000000, "Member 'BP_SniperRifle_10_C_CheckSkin::IsTheSame' has a wrong offset!");
static_assert(offsetof(BP_SniperRifle_10_C_CheckSkin, CallFunc_GetSkin_ReturnValue) == 0x000008, "Member 'BP_SniperRifle_10_C_CheckSkin::CallFunc_GetSkin_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SniperRifle_10_C_CheckSkin, CallFunc_EqualEqual_ClassClass_ReturnValue) == 0x000010, "Member 'BP_SniperRifle_10_C_CheckSkin::CallFunc_EqualEqual_ClassClass_ReturnValue' has a wrong offset!");

}

