#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_ConsumableAnimInterface

#include "Basic.hpp"


namespace SDK::Params
{

// Function BPI_ConsumableAnimInterface.BPI_ConsumableAnimInterface_C.GetCustomGripAnimation
// 0x0010 (0x0010 - 0x0000)
struct BPI_ConsumableAnimInterface_C_GetCustomGripAnimation final
{
public:
	class UAnimSequence*                          HandAnim;                                          // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Valid;                                             // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_ConsumableAnimInterface_C_GetCustomGripAnimation) == 0x000008, "Wrong alignment on BPI_ConsumableAnimInterface_C_GetCustomGripAnimation");
static_assert(sizeof(BPI_ConsumableAnimInterface_C_GetCustomGripAnimation) == 0x000010, "Wrong size on BPI_ConsumableAnimInterface_C_GetCustomGripAnimation");
static_assert(offsetof(BPI_ConsumableAnimInterface_C_GetCustomGripAnimation, HandAnim) == 0x000000, "Member 'BPI_ConsumableAnimInterface_C_GetCustomGripAnimation::HandAnim' has a wrong offset!");
static_assert(offsetof(BPI_ConsumableAnimInterface_C_GetCustomGripAnimation, Valid) == 0x000008, "Member 'BPI_ConsumableAnimInterface_C_GetCustomGripAnimation::Valid' has a wrong offset!");

}

