#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_StaticProp_MeshVariants_Base

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_StaticProp_MeshVariants_Base.BP_StaticProp_MeshVariants_Base_C
// 0x0070 (0x0290 - 0x0220)
class ABP_StaticProp_MeshVariants_Base_C : public AActor
{
public:
	class UStaticMeshComponent*                   SM_WoodenShed_01;                                  // 0x0220(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        Scene;                                             // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Place2;                                            // 0x0230(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Place5;                                            // 0x0238(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Place4;                                            // 0x0240(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Place3;                                            // 0x0248(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Place1;                                            // 0x0250(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                            SM1;                                               // 0x0258(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                            SM2;                                               // 0x0260(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                            SM3;                                               // 0x0268(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                            SM4;                                               // 0x0270(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                            SM5;                                               // 0x0278(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Part_1;                                            // 0x0280(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Part_2;                                            // 0x0281(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Part_3;                                            // 0x0282(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Part_4;                                            // 0x0283(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Part_5;                                            // 0x0284(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_285[0x3];                                      // 0x0285(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         DrawDistanceMultiplier;                            // 0x0288(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ToggleDrawDistanceDebug;                           // 0x028C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void SetMeshes();
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_StaticProp_MeshVariants_Base_C">();
	}
	static class ABP_StaticProp_MeshVariants_Base_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_StaticProp_MeshVariants_Base_C>();
	}
};
static_assert(alignof(ABP_StaticProp_MeshVariants_Base_C) == 0x000008, "Wrong alignment on ABP_StaticProp_MeshVariants_Base_C");
static_assert(sizeof(ABP_StaticProp_MeshVariants_Base_C) == 0x000290, "Wrong size on ABP_StaticProp_MeshVariants_Base_C");
static_assert(offsetof(ABP_StaticProp_MeshVariants_Base_C, SM_WoodenShed_01) == 0x000220, "Member 'ABP_StaticProp_MeshVariants_Base_C::SM_WoodenShed_01' has a wrong offset!");
static_assert(offsetof(ABP_StaticProp_MeshVariants_Base_C, Scene) == 0x000228, "Member 'ABP_StaticProp_MeshVariants_Base_C::Scene' has a wrong offset!");
static_assert(offsetof(ABP_StaticProp_MeshVariants_Base_C, Place2) == 0x000230, "Member 'ABP_StaticProp_MeshVariants_Base_C::Place2' has a wrong offset!");
static_assert(offsetof(ABP_StaticProp_MeshVariants_Base_C, Place5) == 0x000238, "Member 'ABP_StaticProp_MeshVariants_Base_C::Place5' has a wrong offset!");
static_assert(offsetof(ABP_StaticProp_MeshVariants_Base_C, Place4) == 0x000240, "Member 'ABP_StaticProp_MeshVariants_Base_C::Place4' has a wrong offset!");
static_assert(offsetof(ABP_StaticProp_MeshVariants_Base_C, Place3) == 0x000248, "Member 'ABP_StaticProp_MeshVariants_Base_C::Place3' has a wrong offset!");
static_assert(offsetof(ABP_StaticProp_MeshVariants_Base_C, Place1) == 0x000250, "Member 'ABP_StaticProp_MeshVariants_Base_C::Place1' has a wrong offset!");
static_assert(offsetof(ABP_StaticProp_MeshVariants_Base_C, SM1) == 0x000258, "Member 'ABP_StaticProp_MeshVariants_Base_C::SM1' has a wrong offset!");
static_assert(offsetof(ABP_StaticProp_MeshVariants_Base_C, SM2) == 0x000260, "Member 'ABP_StaticProp_MeshVariants_Base_C::SM2' has a wrong offset!");
static_assert(offsetof(ABP_StaticProp_MeshVariants_Base_C, SM3) == 0x000268, "Member 'ABP_StaticProp_MeshVariants_Base_C::SM3' has a wrong offset!");
static_assert(offsetof(ABP_StaticProp_MeshVariants_Base_C, SM4) == 0x000270, "Member 'ABP_StaticProp_MeshVariants_Base_C::SM4' has a wrong offset!");
static_assert(offsetof(ABP_StaticProp_MeshVariants_Base_C, SM5) == 0x000278, "Member 'ABP_StaticProp_MeshVariants_Base_C::SM5' has a wrong offset!");
static_assert(offsetof(ABP_StaticProp_MeshVariants_Base_C, Part_1) == 0x000280, "Member 'ABP_StaticProp_MeshVariants_Base_C::Part_1' has a wrong offset!");
static_assert(offsetof(ABP_StaticProp_MeshVariants_Base_C, Part_2) == 0x000281, "Member 'ABP_StaticProp_MeshVariants_Base_C::Part_2' has a wrong offset!");
static_assert(offsetof(ABP_StaticProp_MeshVariants_Base_C, Part_3) == 0x000282, "Member 'ABP_StaticProp_MeshVariants_Base_C::Part_3' has a wrong offset!");
static_assert(offsetof(ABP_StaticProp_MeshVariants_Base_C, Part_4) == 0x000283, "Member 'ABP_StaticProp_MeshVariants_Base_C::Part_4' has a wrong offset!");
static_assert(offsetof(ABP_StaticProp_MeshVariants_Base_C, Part_5) == 0x000284, "Member 'ABP_StaticProp_MeshVariants_Base_C::Part_5' has a wrong offset!");
static_assert(offsetof(ABP_StaticProp_MeshVariants_Base_C, DrawDistanceMultiplier) == 0x000288, "Member 'ABP_StaticProp_MeshVariants_Base_C::DrawDistanceMultiplier' has a wrong offset!");
static_assert(offsetof(ABP_StaticProp_MeshVariants_Base_C, ToggleDrawDistanceDebug) == 0x00028C, "Member 'ABP_StaticProp_MeshVariants_Base_C::ToggleDrawDistanceDebug' has a wrong offset!");

}

