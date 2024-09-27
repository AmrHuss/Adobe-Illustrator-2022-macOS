#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PlacableTrap_Hologram_Base

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_PlacableTrap_Hologram_Base.BP_PlacableTrap_Hologram_Base_C
// 0x0078 (0x0298 - 0x0220)
class ABP_PlacableTrap_Hologram_Base_C : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCapsuleComponent*                      Collision;                                         // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   HologramStaticMeshOutline;                         // 0x0230(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   HologramStaticMesh;                                // 0x0238(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UDecalComponent*                        RangeDecal;                                        // 0x0240(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0248(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         Trap_Range_Trigger;                                // 0x0250(0x0004)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Hologram_DisplayRangeDecal;                        // 0x0254(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_255[0x3];                                      // 0x0255(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UStaticMesh>             Hologram_Mesh;                                     // 0x0258(0x0028)(Edit, BlueprintVisible, HasGetValueTypeHash)
	class UMaterialInterface*                     Hologram_Material_InvalidPlacement;                // 0x0280(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     Hologram_Material_ValidPlacement;                  // 0x0288(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               Hologram_RangeDecal_DynMaterial;                   // 0x0290(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_PlacableTrap_Hologram_Base(int32 EntryPoint);
	void Set_hologram_mesh();
	void OnLoaded_303A9E7341428F48F05BE78A04090D6B(class UObject* Loaded);
	void UserConstructionScript();
	void Hologram_ChangeVisuals(bool CanBePlaced);
	void Hologram_SetVariablesFromTool(float Trap_Range_Trigger_0, bool Hologram_DisplayRangeDecal_0, TSoftObjectPtr<class UStaticMesh> Hologram_Mesh_0, class UMaterialInterface* Hologram_Material_InvalidPlacement_0, class UMaterialInterface* Hologram_Material_ValidPlacement_0);
	void Hologram_CanBePlaced(bool* CanBePlaced);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PlacableTrap_Hologram_Base_C">();
	}
	static class ABP_PlacableTrap_Hologram_Base_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_PlacableTrap_Hologram_Base_C>();
	}
};
static_assert(alignof(ABP_PlacableTrap_Hologram_Base_C) == 0x000008, "Wrong alignment on ABP_PlacableTrap_Hologram_Base_C");
static_assert(sizeof(ABP_PlacableTrap_Hologram_Base_C) == 0x000298, "Wrong size on ABP_PlacableTrap_Hologram_Base_C");
static_assert(offsetof(ABP_PlacableTrap_Hologram_Base_C, UberGraphFrame) == 0x000220, "Member 'ABP_PlacableTrap_Hologram_Base_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_PlacableTrap_Hologram_Base_C, Collision) == 0x000228, "Member 'ABP_PlacableTrap_Hologram_Base_C::Collision' has a wrong offset!");
static_assert(offsetof(ABP_PlacableTrap_Hologram_Base_C, HologramStaticMeshOutline) == 0x000230, "Member 'ABP_PlacableTrap_Hologram_Base_C::HologramStaticMeshOutline' has a wrong offset!");
static_assert(offsetof(ABP_PlacableTrap_Hologram_Base_C, HologramStaticMesh) == 0x000238, "Member 'ABP_PlacableTrap_Hologram_Base_C::HologramStaticMesh' has a wrong offset!");
static_assert(offsetof(ABP_PlacableTrap_Hologram_Base_C, RangeDecal) == 0x000240, "Member 'ABP_PlacableTrap_Hologram_Base_C::RangeDecal' has a wrong offset!");
static_assert(offsetof(ABP_PlacableTrap_Hologram_Base_C, DefaultSceneRoot) == 0x000248, "Member 'ABP_PlacableTrap_Hologram_Base_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_PlacableTrap_Hologram_Base_C, Trap_Range_Trigger) == 0x000250, "Member 'ABP_PlacableTrap_Hologram_Base_C::Trap_Range_Trigger' has a wrong offset!");
static_assert(offsetof(ABP_PlacableTrap_Hologram_Base_C, Hologram_DisplayRangeDecal) == 0x000254, "Member 'ABP_PlacableTrap_Hologram_Base_C::Hologram_DisplayRangeDecal' has a wrong offset!");
static_assert(offsetof(ABP_PlacableTrap_Hologram_Base_C, Hologram_Mesh) == 0x000258, "Member 'ABP_PlacableTrap_Hologram_Base_C::Hologram_Mesh' has a wrong offset!");
static_assert(offsetof(ABP_PlacableTrap_Hologram_Base_C, Hologram_Material_InvalidPlacement) == 0x000280, "Member 'ABP_PlacableTrap_Hologram_Base_C::Hologram_Material_InvalidPlacement' has a wrong offset!");
static_assert(offsetof(ABP_PlacableTrap_Hologram_Base_C, Hologram_Material_ValidPlacement) == 0x000288, "Member 'ABP_PlacableTrap_Hologram_Base_C::Hologram_Material_ValidPlacement' has a wrong offset!");
static_assert(offsetof(ABP_PlacableTrap_Hologram_Base_C, Hologram_RangeDecal_DynMaterial) == 0x000290, "Member 'ABP_PlacableTrap_Hologram_Base_C::Hologram_RangeDecal_DynMaterial' has a wrong offset!");

}

