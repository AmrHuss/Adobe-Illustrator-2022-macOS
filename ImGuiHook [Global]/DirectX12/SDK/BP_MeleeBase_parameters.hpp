#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MeleeBase

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "PhysicsCore_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_MeleeBase.BP_MeleeBase_C.ExecuteUbergraph_BP_MeleeBase
// 0x0094 (0x0094 - 0x0000)
struct BP_MeleeBase_C_ExecuteUbergraph_BP_MeleeBase final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDedicatedServer_ReturnValue;            // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             K2Node_Event_HitResult;                            // 0x0008(0x008C)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(BP_MeleeBase_C_ExecuteUbergraph_BP_MeleeBase) == 0x000004, "Wrong alignment on BP_MeleeBase_C_ExecuteUbergraph_BP_MeleeBase");
static_assert(sizeof(BP_MeleeBase_C_ExecuteUbergraph_BP_MeleeBase) == 0x000094, "Wrong size on BP_MeleeBase_C_ExecuteUbergraph_BP_MeleeBase");
static_assert(offsetof(BP_MeleeBase_C_ExecuteUbergraph_BP_MeleeBase, EntryPoint) == 0x000000, "Member 'BP_MeleeBase_C_ExecuteUbergraph_BP_MeleeBase::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_MeleeBase_C_ExecuteUbergraph_BP_MeleeBase, CallFunc_IsDedicatedServer_ReturnValue) == 0x000004, "Member 'BP_MeleeBase_C_ExecuteUbergraph_BP_MeleeBase::CallFunc_IsDedicatedServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MeleeBase_C_ExecuteUbergraph_BP_MeleeBase, K2Node_Event_HitResult) == 0x000008, "Member 'BP_MeleeBase_C_ExecuteUbergraph_BP_MeleeBase::K2Node_Event_HitResult' has a wrong offset!");

// Function BP_MeleeBase.BP_MeleeBase_C.ReceiveMeleeHit
// 0x008C (0x008C - 0x0000)
struct BP_MeleeBase_C_ReceiveMeleeHit final
{
public:
	struct FHitResult                             HitResult;                                         // 0x0000(0x008C)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(BP_MeleeBase_C_ReceiveMeleeHit) == 0x000004, "Wrong alignment on BP_MeleeBase_C_ReceiveMeleeHit");
static_assert(sizeof(BP_MeleeBase_C_ReceiveMeleeHit) == 0x00008C, "Wrong size on BP_MeleeBase_C_ReceiveMeleeHit");
static_assert(offsetof(BP_MeleeBase_C_ReceiveMeleeHit, HitResult) == 0x000000, "Member 'BP_MeleeBase_C_ReceiveMeleeHit::HitResult' has a wrong offset!");

// Function BP_MeleeBase.BP_MeleeBase_C.PlayMeleeHitSound
// 0x0228 (0x0228 - 0x0000)
struct BP_MeleeBase_C_PlayMeleeHitSound final
{
public:
	struct FHitResult                             HitResult;                                         // 0x0000(0x008C)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	EPhysicalSurface                              Temp_byte_Variable;                                // 0x008C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPhysicalSurface                              CallFunc_GetHitSurfaceType_ReturnValue;            // 0x008D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BreakHitResult_bBlockingHit;              // 0x008E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BreakHitResult_bInitialOverlap;           // 0x008F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_BreakHitResult_Time;                      // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakHitResult_Distance;                  // 0x0094(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Location;                  // 0x0098(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactPoint;               // 0x00A4(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Normal;                    // 0x00B0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactNormal;              // 0x00BC(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPhysicalMaterial*                      CallFunc_BreakHitResult_PhysMat;                   // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BreakHitResult_HitActor;                  // 0x00D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    CallFunc_BreakHitResult_HitComponent;              // 0x00D8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPhysicalSurface                              CallFunc_BreakHitResult_ShapeSurfaceType;          // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_E1[0x3];                                       // 0x00E1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_BreakHitResult_HitBoneName;               // 0x00E4(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_HitItem;                   // 0x00EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_ElementIndex;              // 0x00F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_FaceIndex;                 // 0x00F4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceStart;                // 0x00F8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceEnd;                  // 0x0104(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             Temp_object_Variable;                              // 0x0110(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             Temp_object_Variable_1;                            // 0x0118(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             Temp_object_Variable_2;                            // 0x0120(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             Temp_object_Variable_3;                            // 0x0128(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             Temp_object_Variable_4;                            // 0x0130(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             Temp_object_Variable_5;                            // 0x0138(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             Temp_object_Variable_6;                            // 0x0140(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             Temp_object_Variable_7;                            // 0x0148(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             Temp_object_Variable_8;                            // 0x0150(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             Temp_object_Variable_9;                            // 0x0158(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             Temp_object_Variable_10;                           // 0x0160(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             Temp_object_Variable_11;                           // 0x0168(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             Temp_object_Variable_12;                           // 0x0170(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             Temp_object_Variable_13;                           // 0x0178(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             Temp_object_Variable_14;                           // 0x0180(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             Temp_object_Variable_15;                           // 0x0188(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             Temp_object_Variable_16;                           // 0x0190(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             Temp_object_Variable_17;                           // 0x0198(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             Temp_object_Variable_18;                           // 0x01A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             Temp_object_Variable_19;                           // 0x01A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             Temp_object_Variable_20;                           // 0x01B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             Temp_object_Variable_21;                           // 0x01B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             Temp_object_Variable_22;                           // 0x01C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             Temp_object_Variable_23;                           // 0x01C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             Temp_object_Variable_24;                           // 0x01D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             Temp_object_Variable_25;                           // 0x01D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             Temp_object_Variable_26;                           // 0x01E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             Temp_object_Variable_27;                           // 0x01E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             Temp_object_Variable_28;                           // 0x01F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             Temp_object_Variable_29;                           // 0x01F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             Temp_object_Variable_30;                           // 0x0200(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             Temp_object_Variable_31;                           // 0x0208(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             Temp_object_Variable_32;                           // 0x0210(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             K2Node_Select_Default;                             // 0x0218(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        CallFunc_SpawnSoundAtLocation_ReturnValue;         // 0x0220(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_MeleeBase_C_PlayMeleeHitSound) == 0x000008, "Wrong alignment on BP_MeleeBase_C_PlayMeleeHitSound");
static_assert(sizeof(BP_MeleeBase_C_PlayMeleeHitSound) == 0x000228, "Wrong size on BP_MeleeBase_C_PlayMeleeHitSound");
static_assert(offsetof(BP_MeleeBase_C_PlayMeleeHitSound, HitResult) == 0x000000, "Member 'BP_MeleeBase_C_PlayMeleeHitSound::HitResult' has a wrong offset!");
static_assert(offsetof(BP_MeleeBase_C_PlayMeleeHitSound, Temp_byte_Variable) == 0x00008C, "Member 'BP_MeleeBase_C_PlayMeleeHitSound::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(BP_MeleeBase_C_PlayMeleeHitSound, CallFunc_GetHitSurfaceType_ReturnValue) == 0x00008D, "Member 'BP_MeleeBase_C_PlayMeleeHitSound::CallFunc_GetHitSurfaceType_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MeleeBase_C_PlayMeleeHitSound, CallFunc_BreakHitResult_bBlockingHit) == 0x00008E, "Member 'BP_MeleeBase_C_PlayMeleeHitSound::CallFunc_BreakHitResult_bBlockingHit' has a wrong offset!");
static_assert(offsetof(BP_MeleeBase_C_PlayMeleeHitSound, CallFunc_BreakHitResult_bInitialOverlap) == 0x00008F, "Member 'BP_MeleeBase_C_PlayMeleeHitSound::CallFunc_BreakHitResult_bInitialOverlap' has a wrong offset!");
static_assert(offsetof(BP_MeleeBase_C_PlayMeleeHitSound, CallFunc_BreakHitResult_Time) == 0x000090, "Member 'BP_MeleeBase_C_PlayMeleeHitSound::CallFunc_BreakHitResult_Time' has a wrong offset!");
static_assert(offsetof(BP_MeleeBase_C_PlayMeleeHitSound, CallFunc_BreakHitResult_Distance) == 0x000094, "Member 'BP_MeleeBase_C_PlayMeleeHitSound::CallFunc_BreakHitResult_Distance' has a wrong offset!");
static_assert(offsetof(BP_MeleeBase_C_PlayMeleeHitSound, CallFunc_BreakHitResult_Location) == 0x000098, "Member 'BP_MeleeBase_C_PlayMeleeHitSound::CallFunc_BreakHitResult_Location' has a wrong offset!");
static_assert(offsetof(BP_MeleeBase_C_PlayMeleeHitSound, CallFunc_BreakHitResult_ImpactPoint) == 0x0000A4, "Member 'BP_MeleeBase_C_PlayMeleeHitSound::CallFunc_BreakHitResult_ImpactPoint' has a wrong offset!");
static_assert(offsetof(BP_MeleeBase_C_PlayMeleeHitSound, CallFunc_BreakHitResult_Normal) == 0x0000B0, "Member 'BP_MeleeBase_C_PlayMeleeHitSound::CallFunc_BreakHitResult_Normal' has a wrong offset!");
static_assert(offsetof(BP_MeleeBase_C_PlayMeleeHitSound, CallFunc_BreakHitResult_ImpactNormal) == 0x0000BC, "Member 'BP_MeleeBase_C_PlayMeleeHitSound::CallFunc_BreakHitResult_ImpactNormal' has a wrong offset!");
static_assert(offsetof(BP_MeleeBase_C_PlayMeleeHitSound, CallFunc_BreakHitResult_PhysMat) == 0x0000C8, "Member 'BP_MeleeBase_C_PlayMeleeHitSound::CallFunc_BreakHitResult_PhysMat' has a wrong offset!");
static_assert(offsetof(BP_MeleeBase_C_PlayMeleeHitSound, CallFunc_BreakHitResult_HitActor) == 0x0000D0, "Member 'BP_MeleeBase_C_PlayMeleeHitSound::CallFunc_BreakHitResult_HitActor' has a wrong offset!");
static_assert(offsetof(BP_MeleeBase_C_PlayMeleeHitSound, CallFunc_BreakHitResult_HitComponent) == 0x0000D8, "Member 'BP_MeleeBase_C_PlayMeleeHitSound::CallFunc_BreakHitResult_HitComponent' has a wrong offset!");
static_assert(offsetof(BP_MeleeBase_C_PlayMeleeHitSound, CallFunc_BreakHitResult_ShapeSurfaceType) == 0x0000E0, "Member 'BP_MeleeBase_C_PlayMeleeHitSound::CallFunc_BreakHitResult_ShapeSurfaceType' has a wrong offset!");
static_assert(offsetof(BP_MeleeBase_C_PlayMeleeHitSound, CallFunc_BreakHitResult_HitBoneName) == 0x0000E4, "Member 'BP_MeleeBase_C_PlayMeleeHitSound::CallFunc_BreakHitResult_HitBoneName' has a wrong offset!");
static_assert(offsetof(BP_MeleeBase_C_PlayMeleeHitSound, CallFunc_BreakHitResult_HitItem) == 0x0000EC, "Member 'BP_MeleeBase_C_PlayMeleeHitSound::CallFunc_BreakHitResult_HitItem' has a wrong offset!");
static_assert(offsetof(BP_MeleeBase_C_PlayMeleeHitSound, CallFunc_BreakHitResult_ElementIndex) == 0x0000F0, "Member 'BP_MeleeBase_C_PlayMeleeHitSound::CallFunc_BreakHitResult_ElementIndex' has a wrong offset!");
static_assert(offsetof(BP_MeleeBase_C_PlayMeleeHitSound, CallFunc_BreakHitResult_FaceIndex) == 0x0000F4, "Member 'BP_MeleeBase_C_PlayMeleeHitSound::CallFunc_BreakHitResult_FaceIndex' has a wrong offset!");
static_assert(offsetof(BP_MeleeBase_C_PlayMeleeHitSound, CallFunc_BreakHitResult_TraceStart) == 0x0000F8, "Member 'BP_MeleeBase_C_PlayMeleeHitSound::CallFunc_BreakHitResult_TraceStart' has a wrong offset!");
static_assert(offsetof(BP_MeleeBase_C_PlayMeleeHitSound, CallFunc_BreakHitResult_TraceEnd) == 0x000104, "Member 'BP_MeleeBase_C_PlayMeleeHitSound::CallFunc_BreakHitResult_TraceEnd' has a wrong offset!");
static_assert(offsetof(BP_MeleeBase_C_PlayMeleeHitSound, Temp_object_Variable) == 0x000110, "Member 'BP_MeleeBase_C_PlayMeleeHitSound::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(BP_MeleeBase_C_PlayMeleeHitSound, Temp_object_Variable_1) == 0x000118, "Member 'BP_MeleeBase_C_PlayMeleeHitSound::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_MeleeBase_C_PlayMeleeHitSound, Temp_object_Variable_2) == 0x000120, "Member 'BP_MeleeBase_C_PlayMeleeHitSound::Temp_object_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_MeleeBase_C_PlayMeleeHitSound, Temp_object_Variable_3) == 0x000128, "Member 'BP_MeleeBase_C_PlayMeleeHitSound::Temp_object_Variable_3' has a wrong offset!");
static_assert(offsetof(BP_MeleeBase_C_PlayMeleeHitSound, Temp_object_Variable_4) == 0x000130, "Member 'BP_MeleeBase_C_PlayMeleeHitSound::Temp_object_Variable_4' has a wrong offset!");
static_assert(offsetof(BP_MeleeBase_C_PlayMeleeHitSound, Temp_object_Variable_5) == 0x000138, "Member 'BP_MeleeBase_C_PlayMeleeHitSound::Temp_object_Variable_5' has a wrong offset!");
static_assert(offsetof(BP_MeleeBase_C_PlayMeleeHitSound, Temp_object_Variable_6) == 0x000140, "Member 'BP_MeleeBase_C_PlayMeleeHitSound::Temp_object_Variable_6' has a wrong offset!");
static_assert(offsetof(BP_MeleeBase_C_PlayMeleeHitSound, Temp_object_Variable_7) == 0x000148, "Member 'BP_MeleeBase_C_PlayMeleeHitSound::Temp_object_Variable_7' has a wrong offset!");
static_assert(offsetof(BP_MeleeBase_C_PlayMeleeHitSound, Temp_object_Variable_8) == 0x000150, "Member 'BP_MeleeBase_C_PlayMeleeHitSound::Temp_object_Variable_8' has a wrong offset!");
static_assert(offsetof(BP_MeleeBase_C_PlayMeleeHitSound, Temp_object_Variable_9) == 0x000158, "Member 'BP_MeleeBase_C_PlayMeleeHitSound::Temp_object_Variable_9' has a wrong offset!");
static_assert(offsetof(BP_MeleeBase_C_PlayMeleeHitSound, Temp_object_Variable_10) == 0x000160, "Member 'BP_MeleeBase_C_PlayMeleeHitSound::Temp_object_Variable_10' has a wrong offset!");
static_assert(offsetof(BP_MeleeBase_C_PlayMeleeHitSound, Temp_object_Variable_11) == 0x000168, "Member 'BP_MeleeBase_C_PlayMeleeHitSound::Temp_object_Variable_11' has a wrong offset!");
static_assert(offsetof(BP_MeleeBase_C_PlayMeleeHitSound, Temp_object_Variable_12) == 0x000170, "Member 'BP_MeleeBase_C_PlayMeleeHitSound::Temp_object_Variable_12' has a wrong offset!");
static_assert(offsetof(BP_MeleeBase_C_PlayMeleeHitSound, Temp_object_Variable_13) == 0x000178, "Member 'BP_MeleeBase_C_PlayMeleeHitSound::Temp_object_Variable_13' has a wrong offset!");
static_assert(offsetof(BP_MeleeBase_C_PlayMeleeHitSound, Temp_object_Variable_14) == 0x000180, "Member 'BP_MeleeBase_C_PlayMeleeHitSound::Temp_object_Variable_14' has a wrong offset!");
static_assert(offsetof(BP_MeleeBase_C_PlayMeleeHitSound, Temp_object_Variable_15) == 0x000188, "Member 'BP_MeleeBase_C_PlayMeleeHitSound::Temp_object_Variable_15' has a wrong offset!");
static_assert(offsetof(BP_MeleeBase_C_PlayMeleeHitSound, Temp_object_Variable_16) == 0x000190, "Member 'BP_MeleeBase_C_PlayMeleeHitSound::Temp_object_Variable_16' has a wrong offset!");
static_assert(offsetof(BP_MeleeBase_C_PlayMeleeHitSound, Temp_object_Variable_17) == 0x000198, "Member 'BP_MeleeBase_C_PlayMeleeHitSound::Temp_object_Variable_17' has a wrong offset!");
static_assert(offsetof(BP_MeleeBase_C_PlayMeleeHitSound, Temp_object_Variable_18) == 0x0001A0, "Member 'BP_MeleeBase_C_PlayMeleeHitSound::Temp_object_Variable_18' has a wrong offset!");
static_assert(offsetof(BP_MeleeBase_C_PlayMeleeHitSound, Temp_object_Variable_19) == 0x0001A8, "Member 'BP_MeleeBase_C_PlayMeleeHitSound::Temp_object_Variable_19' has a wrong offset!");
static_assert(offsetof(BP_MeleeBase_C_PlayMeleeHitSound, Temp_object_Variable_20) == 0x0001B0, "Member 'BP_MeleeBase_C_PlayMeleeHitSound::Temp_object_Variable_20' has a wrong offset!");
static_assert(offsetof(BP_MeleeBase_C_PlayMeleeHitSound, Temp_object_Variable_21) == 0x0001B8, "Member 'BP_MeleeBase_C_PlayMeleeHitSound::Temp_object_Variable_21' has a wrong offset!");
static_assert(offsetof(BP_MeleeBase_C_PlayMeleeHitSound, Temp_object_Variable_22) == 0x0001C0, "Member 'BP_MeleeBase_C_PlayMeleeHitSound::Temp_object_Variable_22' has a wrong offset!");
static_assert(offsetof(BP_MeleeBase_C_PlayMeleeHitSound, Temp_object_Variable_23) == 0x0001C8, "Member 'BP_MeleeBase_C_PlayMeleeHitSound::Temp_object_Variable_23' has a wrong offset!");
static_assert(offsetof(BP_MeleeBase_C_PlayMeleeHitSound, Temp_object_Variable_24) == 0x0001D0, "Member 'BP_MeleeBase_C_PlayMeleeHitSound::Temp_object_Variable_24' has a wrong offset!");
static_assert(offsetof(BP_MeleeBase_C_PlayMeleeHitSound, Temp_object_Variable_25) == 0x0001D8, "Member 'BP_MeleeBase_C_PlayMeleeHitSound::Temp_object_Variable_25' has a wrong offset!");
static_assert(offsetof(BP_MeleeBase_C_PlayMeleeHitSound, Temp_object_Variable_26) == 0x0001E0, "Member 'BP_MeleeBase_C_PlayMeleeHitSound::Temp_object_Variable_26' has a wrong offset!");
static_assert(offsetof(BP_MeleeBase_C_PlayMeleeHitSound, Temp_object_Variable_27) == 0x0001E8, "Member 'BP_MeleeBase_C_PlayMeleeHitSound::Temp_object_Variable_27' has a wrong offset!");
static_assert(offsetof(BP_MeleeBase_C_PlayMeleeHitSound, Temp_object_Variable_28) == 0x0001F0, "Member 'BP_MeleeBase_C_PlayMeleeHitSound::Temp_object_Variable_28' has a wrong offset!");
static_assert(offsetof(BP_MeleeBase_C_PlayMeleeHitSound, Temp_object_Variable_29) == 0x0001F8, "Member 'BP_MeleeBase_C_PlayMeleeHitSound::Temp_object_Variable_29' has a wrong offset!");
static_assert(offsetof(BP_MeleeBase_C_PlayMeleeHitSound, Temp_object_Variable_30) == 0x000200, "Member 'BP_MeleeBase_C_PlayMeleeHitSound::Temp_object_Variable_30' has a wrong offset!");
static_assert(offsetof(BP_MeleeBase_C_PlayMeleeHitSound, Temp_object_Variable_31) == 0x000208, "Member 'BP_MeleeBase_C_PlayMeleeHitSound::Temp_object_Variable_31' has a wrong offset!");
static_assert(offsetof(BP_MeleeBase_C_PlayMeleeHitSound, Temp_object_Variable_32) == 0x000210, "Member 'BP_MeleeBase_C_PlayMeleeHitSound::Temp_object_Variable_32' has a wrong offset!");
static_assert(offsetof(BP_MeleeBase_C_PlayMeleeHitSound, K2Node_Select_Default) == 0x000218, "Member 'BP_MeleeBase_C_PlayMeleeHitSound::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BP_MeleeBase_C_PlayMeleeHitSound, CallFunc_SpawnSoundAtLocation_ReturnValue) == 0x000220, "Member 'BP_MeleeBase_C_PlayMeleeHitSound::CallFunc_SpawnSoundAtLocation_ReturnValue' has a wrong offset!");

}

