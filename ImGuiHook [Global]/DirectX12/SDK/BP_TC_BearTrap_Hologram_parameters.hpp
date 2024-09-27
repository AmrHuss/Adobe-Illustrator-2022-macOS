#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_TC_BearTrap_Hologram

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_TC_BearTrap_Hologram.BP_TC_BearTrap_Hologram_C.Hologram_CanBePlaced
// 0x0028 (0x0028 - 0x0000)
struct BP_TC_BearTrap_Hologram_C_Hologram_CanBePlaced final
{
public:
	bool                                          CanBePlaced;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Hologram_CanBePlaced_CanBePlaced;         // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2[0x6];                                        // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         CallFunc_GetOverlappingActors_OverlappingActors;   // 0x0008(0x0010)(ReferenceParm)
	bool                                          CallFunc_Array_RemoveItem_ReturnValue;             // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_19[0x3];                                       // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_TC_BearTrap_Hologram_C_Hologram_CanBePlaced) == 0x000008, "Wrong alignment on BP_TC_BearTrap_Hologram_C_Hologram_CanBePlaced");
static_assert(sizeof(BP_TC_BearTrap_Hologram_C_Hologram_CanBePlaced) == 0x000028, "Wrong size on BP_TC_BearTrap_Hologram_C_Hologram_CanBePlaced");
static_assert(offsetof(BP_TC_BearTrap_Hologram_C_Hologram_CanBePlaced, CanBePlaced) == 0x000000, "Member 'BP_TC_BearTrap_Hologram_C_Hologram_CanBePlaced::CanBePlaced' has a wrong offset!");
static_assert(offsetof(BP_TC_BearTrap_Hologram_C_Hologram_CanBePlaced, CallFunc_Hologram_CanBePlaced_CanBePlaced) == 0x000001, "Member 'BP_TC_BearTrap_Hologram_C_Hologram_CanBePlaced::CallFunc_Hologram_CanBePlaced_CanBePlaced' has a wrong offset!");
static_assert(offsetof(BP_TC_BearTrap_Hologram_C_Hologram_CanBePlaced, CallFunc_GetOverlappingActors_OverlappingActors) == 0x000008, "Member 'BP_TC_BearTrap_Hologram_C_Hologram_CanBePlaced::CallFunc_GetOverlappingActors_OverlappingActors' has a wrong offset!");
static_assert(offsetof(BP_TC_BearTrap_Hologram_C_Hologram_CanBePlaced, CallFunc_Array_RemoveItem_ReturnValue) == 0x000018, "Member 'BP_TC_BearTrap_Hologram_C_Hologram_CanBePlaced::CallFunc_Array_RemoveItem_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TC_BearTrap_Hologram_C_Hologram_CanBePlaced, CallFunc_Array_Length_ReturnValue) == 0x00001C, "Member 'BP_TC_BearTrap_Hologram_C_Hologram_CanBePlaced::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TC_BearTrap_Hologram_C_Hologram_CanBePlaced, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000020, "Member 'BP_TC_BearTrap_Hologram_C_Hologram_CanBePlaced::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TC_BearTrap_Hologram_C_Hologram_CanBePlaced, CallFunc_BooleanAND_ReturnValue) == 0x000021, "Member 'BP_TC_BearTrap_Hologram_C_Hologram_CanBePlaced::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

}

