#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_GrenadeInterface

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BPI_GrenadeInterface.BPI_GrenadeInterface_C
// 0x0000 (0x0028 - 0x0028)
class IBPI_GrenadeInterface_C final : public IInterface
{
public:
	void PlayMeshThrowAnimation();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPI_GrenadeInterface_C">();
	}
	static class IBPI_GrenadeInterface_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IBPI_GrenadeInterface_C>();
	}
};
static_assert(alignof(IBPI_GrenadeInterface_C) == 0x000008, "Wrong alignment on IBPI_GrenadeInterface_C");
static_assert(sizeof(IBPI_GrenadeInterface_C) == 0x000028, "Wrong size on IBPI_GrenadeInterface_C");

}

