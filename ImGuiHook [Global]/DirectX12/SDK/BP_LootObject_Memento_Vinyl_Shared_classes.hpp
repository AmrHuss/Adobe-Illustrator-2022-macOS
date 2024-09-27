#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_LootObject_Memento_Vinyl_Shared

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_LootObject_Memento_Vinyl_Base_classes.hpp"
#include "E_Lootable_State_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_LootObject_Memento_Vinyl_Shared.BP_LootObject_Memento_Vinyl_Shared_C
// 0x0008 (0x03F8 - 0x03F0)
class ABP_LootObject_Memento_Vinyl_Shared_C final : public ABP_LootObject_Memento_Vinyl_Base_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_LootObject_Memento_Vinyl_Shared_C; // 0x03F0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_BP_LootObject_Memento_Vinyl_Shared(int32 EntryPoint);
	void Set_Album_Skin(TSoftObjectPtr<class UMaterialInterface> New_Skin);
	void OnLoaded_303A9E7341428F48F05BE78AEFF91541(class UObject* Loaded);
	void Apply_Materials_from_State_Descriptor(const struct FF_Lootable_StateDescriptor& State_Descriptor);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_LootObject_Memento_Vinyl_Shared_C">();
	}
	static class ABP_LootObject_Memento_Vinyl_Shared_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_LootObject_Memento_Vinyl_Shared_C>();
	}
};
static_assert(alignof(ABP_LootObject_Memento_Vinyl_Shared_C) == 0x000008, "Wrong alignment on ABP_LootObject_Memento_Vinyl_Shared_C");
static_assert(sizeof(ABP_LootObject_Memento_Vinyl_Shared_C) == 0x0003F8, "Wrong size on ABP_LootObject_Memento_Vinyl_Shared_C");
static_assert(offsetof(ABP_LootObject_Memento_Vinyl_Shared_C, UberGraphFrame_BP_LootObject_Memento_Vinyl_Shared_C) == 0x0003F0, "Member 'ABP_LootObject_Memento_Vinyl_Shared_C::UberGraphFrame_BP_LootObject_Memento_Vinyl_Shared_C' has a wrong offset!");

}

