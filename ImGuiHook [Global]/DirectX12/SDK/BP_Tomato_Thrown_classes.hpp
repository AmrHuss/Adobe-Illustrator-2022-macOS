#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Tomato_Thrown

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Flame_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Tomato_Thrown.BP_Tomato_Thrown_C
// 0x0048 (0x0438 - 0x03F0)
class ABP_Tomato_Thrown_C final : public AGrenade
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03F0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class ULethalItemComponent*                   LethalItem;                                        // 0x03F8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       Sphere;                                            // 0x0400(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Mesh;                                              // 0x0408(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                          CanBounceFromPlayer;                               // 0x0410(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_411[0x7];                                      // 0x0411(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_GameState_Teams_C*                  TeamsGS;                                           // 0x0418(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MaxDistance;                                       // 0x0420(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                InitialPosition;                                   // 0x0424(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ShouldSpawnSound;                                  // 0x0430(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          ImpactPlayed;                                      // 0x0431(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_BP_Tomato_Thrown(int32 EntryPoint);
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);
	void ReceiveTick(float DeltaSeconds);
	void OnImpact(const struct FVector& HitLocation, const struct FVector& NormalImpulse);
	void PlayImpact(const struct FVector& Impact_Normal);
	void OnComponentBeginOverlap_Event_0(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void ReceiveDestroyed();
	void DestroyAfterRoundFinish();
	void ReceiveBeginPlay();
	void OnThrow();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Tomato_Thrown_C">();
	}
	static class ABP_Tomato_Thrown_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Tomato_Thrown_C>();
	}
};
static_assert(alignof(ABP_Tomato_Thrown_C) == 0x000008, "Wrong alignment on ABP_Tomato_Thrown_C");
static_assert(sizeof(ABP_Tomato_Thrown_C) == 0x000438, "Wrong size on ABP_Tomato_Thrown_C");
static_assert(offsetof(ABP_Tomato_Thrown_C, UberGraphFrame) == 0x0003F0, "Member 'ABP_Tomato_Thrown_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_Tomato_Thrown_C, LethalItem) == 0x0003F8, "Member 'ABP_Tomato_Thrown_C::LethalItem' has a wrong offset!");
static_assert(offsetof(ABP_Tomato_Thrown_C, Sphere) == 0x000400, "Member 'ABP_Tomato_Thrown_C::Sphere' has a wrong offset!");
static_assert(offsetof(ABP_Tomato_Thrown_C, Mesh) == 0x000408, "Member 'ABP_Tomato_Thrown_C::Mesh' has a wrong offset!");
static_assert(offsetof(ABP_Tomato_Thrown_C, CanBounceFromPlayer) == 0x000410, "Member 'ABP_Tomato_Thrown_C::CanBounceFromPlayer' has a wrong offset!");
static_assert(offsetof(ABP_Tomato_Thrown_C, TeamsGS) == 0x000418, "Member 'ABP_Tomato_Thrown_C::TeamsGS' has a wrong offset!");
static_assert(offsetof(ABP_Tomato_Thrown_C, MaxDistance) == 0x000420, "Member 'ABP_Tomato_Thrown_C::MaxDistance' has a wrong offset!");
static_assert(offsetof(ABP_Tomato_Thrown_C, InitialPosition) == 0x000424, "Member 'ABP_Tomato_Thrown_C::InitialPosition' has a wrong offset!");
static_assert(offsetof(ABP_Tomato_Thrown_C, ShouldSpawnSound) == 0x000430, "Member 'ABP_Tomato_Thrown_C::ShouldSpawnSound' has a wrong offset!");
static_assert(offsetof(ABP_Tomato_Thrown_C, ImpactPlayed) == 0x000431, "Member 'ABP_Tomato_Thrown_C::ImpactPlayed' has a wrong offset!");

}

