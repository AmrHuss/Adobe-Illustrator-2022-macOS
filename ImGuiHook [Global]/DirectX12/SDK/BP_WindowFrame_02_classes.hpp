#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_WindowFrame_02

#include "Basic.hpp"

#include "BP_Window_Base_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_WindowFrame_02.BP_WindowFrame_02_C
// 0x0000 (0x0300 - 0x0300)
class ABP_WindowFrame_02_C final : public ABP_Window_Base_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_WindowFrame_02_C">();
	}
	static class ABP_WindowFrame_02_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_WindowFrame_02_C>();
	}
};
static_assert(alignof(ABP_WindowFrame_02_C) == 0x000010, "Wrong alignment on ABP_WindowFrame_02_C");
static_assert(sizeof(ABP_WindowFrame_02_C) == 0x000300, "Wrong size on ABP_WindowFrame_02_C");

}

