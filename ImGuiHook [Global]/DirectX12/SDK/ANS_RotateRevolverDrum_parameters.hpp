#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ANS_RotateRevolverDrum

#include "Basic.hpp"


namespace SDK::Params
{

// Function ANS_RotateRevolverDrum.ANS_RotateRevolverDrum_C.Received_Notify
// 0x0038 (0x0038 - 0x0000)
struct ANS_RotateRevolverDrum_C_Received_Notify final
{
public:
	class USkeletalMeshComponent*                 MeshComp;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimSequenceBase*                      Animation;                                         // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimInstance*                          CallFunc_GetAnimInstance_ReturnValue;              // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_Firearms_Anims_C> K2Node_DynamicCast_AsBPI_Firearms_Anims;           // 0x0020(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ANS_RotateRevolverDrum_C_Received_Notify) == 0x000008, "Wrong alignment on ANS_RotateRevolverDrum_C_Received_Notify");
static_assert(sizeof(ANS_RotateRevolverDrum_C_Received_Notify) == 0x000038, "Wrong size on ANS_RotateRevolverDrum_C_Received_Notify");
static_assert(offsetof(ANS_RotateRevolverDrum_C_Received_Notify, MeshComp) == 0x000000, "Member 'ANS_RotateRevolverDrum_C_Received_Notify::MeshComp' has a wrong offset!");
static_assert(offsetof(ANS_RotateRevolverDrum_C_Received_Notify, Animation) == 0x000008, "Member 'ANS_RotateRevolverDrum_C_Received_Notify::Animation' has a wrong offset!");
static_assert(offsetof(ANS_RotateRevolverDrum_C_Received_Notify, ReturnValue) == 0x000010, "Member 'ANS_RotateRevolverDrum_C_Received_Notify::ReturnValue' has a wrong offset!");
static_assert(offsetof(ANS_RotateRevolverDrum_C_Received_Notify, CallFunc_GetAnimInstance_ReturnValue) == 0x000018, "Member 'ANS_RotateRevolverDrum_C_Received_Notify::CallFunc_GetAnimInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(ANS_RotateRevolverDrum_C_Received_Notify, K2Node_DynamicCast_AsBPI_Firearms_Anims) == 0x000020, "Member 'ANS_RotateRevolverDrum_C_Received_Notify::K2Node_DynamicCast_AsBPI_Firearms_Anims' has a wrong offset!");
static_assert(offsetof(ANS_RotateRevolverDrum_C_Received_Notify, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'ANS_RotateRevolverDrum_C_Received_Notify::K2Node_DynamicCast_bSuccess' has a wrong offset!");

}

