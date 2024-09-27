#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AirDropLocation

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_ADM_ActorLocation_Base_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_AirDropLocation.BP_AirDropLocation_C
// 0x0030 (0x0268 - 0x0238)
class ABP_AirDropLocation_C final : public ABP_ADM_ActorLocation_Base_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0238(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   StaticMesh;                                        // 0x0240(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   MaximumAreaCoveredByMarker;                        // 0x0248(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   PossibleMarkerPlacementArea;                       // 0x0250(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                          Visualise_Drop_Area;                               // 0x0258(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_259[0x3];                                      // 0x0259(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Marker_Draw_Radius;                                // 0x025C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Marker_Error_Radius;                               // 0x0260(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_AirDropLocation(int32 EntryPoint);
	void Toggle_Drop_Area_Visibility();
	void UserConstructionScript();
	void SetDropAreaVisibility(bool bNewVisibility);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_AirDropLocation_C">();
	}
	static class ABP_AirDropLocation_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_AirDropLocation_C>();
	}
};
static_assert(alignof(ABP_AirDropLocation_C) == 0x000008, "Wrong alignment on ABP_AirDropLocation_C");
static_assert(sizeof(ABP_AirDropLocation_C) == 0x000268, "Wrong size on ABP_AirDropLocation_C");
static_assert(offsetof(ABP_AirDropLocation_C, UberGraphFrame) == 0x000238, "Member 'ABP_AirDropLocation_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_AirDropLocation_C, StaticMesh) == 0x000240, "Member 'ABP_AirDropLocation_C::StaticMesh' has a wrong offset!");
static_assert(offsetof(ABP_AirDropLocation_C, MaximumAreaCoveredByMarker) == 0x000248, "Member 'ABP_AirDropLocation_C::MaximumAreaCoveredByMarker' has a wrong offset!");
static_assert(offsetof(ABP_AirDropLocation_C, PossibleMarkerPlacementArea) == 0x000250, "Member 'ABP_AirDropLocation_C::PossibleMarkerPlacementArea' has a wrong offset!");
static_assert(offsetof(ABP_AirDropLocation_C, Visualise_Drop_Area) == 0x000258, "Member 'ABP_AirDropLocation_C::Visualise_Drop_Area' has a wrong offset!");
static_assert(offsetof(ABP_AirDropLocation_C, Marker_Draw_Radius) == 0x00025C, "Member 'ABP_AirDropLocation_C::Marker_Draw_Radius' has a wrong offset!");
static_assert(offsetof(ABP_AirDropLocation_C, Marker_Error_Radius) == 0x000260, "Member 'ABP_AirDropLocation_C::Marker_Error_Radius' has a wrong offset!");

}

