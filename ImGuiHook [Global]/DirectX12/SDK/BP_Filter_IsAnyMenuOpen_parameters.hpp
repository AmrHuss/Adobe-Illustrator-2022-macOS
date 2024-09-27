#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Filter_IsAnyMenuOpen

#include "Basic.hpp"

#include "Flame_structs.hpp"


namespace SDK::Params
{

// Function BP_Filter_IsAnyMenuOpen.BP_Filter_IsAnyMenuOpen_C.CheckFilter
// 0x0010 (0x0010 - 0x0000)
struct BP_Filter_IsAnyMenuOpen_C_CheckFilter final
{
public:
	const class AHumanPlayerController*           TargetController;                                  // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EInputFilterResult                            ReturnValue;                                       // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsAnyMenuOpen_ReturnValue;                // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_Filter_IsAnyMenuOpen_C_CheckFilter) == 0x000008, "Wrong alignment on BP_Filter_IsAnyMenuOpen_C_CheckFilter");
static_assert(sizeof(BP_Filter_IsAnyMenuOpen_C_CheckFilter) == 0x000010, "Wrong size on BP_Filter_IsAnyMenuOpen_C_CheckFilter");
static_assert(offsetof(BP_Filter_IsAnyMenuOpen_C_CheckFilter, TargetController) == 0x000000, "Member 'BP_Filter_IsAnyMenuOpen_C_CheckFilter::TargetController' has a wrong offset!");
static_assert(offsetof(BP_Filter_IsAnyMenuOpen_C_CheckFilter, ReturnValue) == 0x000008, "Member 'BP_Filter_IsAnyMenuOpen_C_CheckFilter::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Filter_IsAnyMenuOpen_C_CheckFilter, CallFunc_IsAnyMenuOpen_ReturnValue) == 0x000009, "Member 'BP_Filter_IsAnyMenuOpen_C_CheckFilter::CallFunc_IsAnyMenuOpen_ReturnValue' has a wrong offset!");

}

