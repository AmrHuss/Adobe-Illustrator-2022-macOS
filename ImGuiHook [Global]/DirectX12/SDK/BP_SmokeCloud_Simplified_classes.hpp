#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SmokeCloud_Simplified

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "WeatherManager_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_SmokeCloud_Simplified.BP_SmokeCloud_Simplified_C
// 0x00B0 (0x02E0 - 0x0230)
class ABP_SmokeCloud_Simplified_C final : public ASmokeCloudParent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0230(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USphereComponent*                       Sphere;                                            // 0x0238(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPostProcessComponent*                  PostProcess;                                       // 0x0240(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USmokeDistributionComponent*            SmokeDistribution;                                 // 0x0248(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         Smoke_radius;                                      // 0x0250(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         blendRadiusStart;                                  // 0x0254(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         blendRadiusEnd;                                    // 0x0258(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CullParticles;                                     // 0x025C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_25D[0x3];                                      // 0x025D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         TransitionWeight;                                  // 0x0260(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Transitioning;                                     // 0x0264(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_265[0x3];                                      // 0x0265(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UParticleSystemComponent*               ParticleSystem;                                    // 0x0268(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         BlendEndToCenterRatio;                             // 0x0270(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                DefaultPPEffectScale;                              // 0x0274(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         BlendStartFromEdgeRatio;                           // 0x0280(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                SmokeOffsetFromGround;                             // 0x0284(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         OverlapCounter;                                    // 0x0290(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                SmokeOffsetFromGroundInBuilding;                   // 0x0294(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         PostProccessEndTransitionTimer;                    // 0x02A0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         BlendEndToCenterRatio_Building;                    // 0x02A4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         BlendStartFromEdgeRatio_Building;                  // 0x02A8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          InBuildingEffect;                                  // 0x02AC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          InBuildingController;                              // 0x02AD(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2AE[0x2];                                      // 0x02AE(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         TransitionIncrement;                               // 0x02B0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TransitionRepetitionSpeed_StartEndBlend;           // 0x02B4(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          DoGC;                                              // 0x02B8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2B9[0x3];                                      // 0x02B9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         AdjustmentFactor;                                  // 0x02BC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TransitionRepetitionSpeed_Building;                // 0x02C0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TransitionIncrement_Building;                      // 0x02C4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         BlendEndToCenterRatio_BrightWeather;               // 0x02C8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         BlendStartFromEdgeRatio_BrightWeather;             // 0x02CC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         PostProcessTranslationLerp;                        // 0x02D0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          LightWeather;                                      // 0x02D4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2D5[0x3];                                      // 0x02D5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         MaximumBlend;                                      // 0x02D8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MaximumBlend_BrightWeather;                        // 0x02DC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_SmokeCloud_Simplified(int32 EntryPoint);
	void BndEvt__BoxVolume_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void BndEvt__BoxVolume_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BlendInEvent(class AActor* Actor);
	void BlendOutEvent(class AActor* Actor);
	void BlendInEventProccess();
	void BlendOutEventProccess();
	void Effect_End();
	void PPDecrease();
	void InitialPPIncrease();
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void Initialize_smoke_cloud(const struct FF_SmokeCloudConfig& Config);
	void UserConstructionScript();
	void SetBlendWeight();
	void SetSmokeWeightIncrease();
	void BlendRadiusStartFunction(float Input, const struct FVector& Vector, float* Output);
	void BlendRadiusFunctions(bool InBuilding, const struct FVector& Vector);
	void ToggleInBuildingPostProcess();
	void BlendIn();
	void BlendOut(bool NewParam);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_SmokeCloud_Simplified_C">();
	}
	static class ABP_SmokeCloud_Simplified_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_SmokeCloud_Simplified_C>();
	}
};
static_assert(alignof(ABP_SmokeCloud_Simplified_C) == 0x000008, "Wrong alignment on ABP_SmokeCloud_Simplified_C");
static_assert(sizeof(ABP_SmokeCloud_Simplified_C) == 0x0002E0, "Wrong size on ABP_SmokeCloud_Simplified_C");
static_assert(offsetof(ABP_SmokeCloud_Simplified_C, UberGraphFrame) == 0x000230, "Member 'ABP_SmokeCloud_Simplified_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_SmokeCloud_Simplified_C, Sphere) == 0x000238, "Member 'ABP_SmokeCloud_Simplified_C::Sphere' has a wrong offset!");
static_assert(offsetof(ABP_SmokeCloud_Simplified_C, PostProcess) == 0x000240, "Member 'ABP_SmokeCloud_Simplified_C::PostProcess' has a wrong offset!");
static_assert(offsetof(ABP_SmokeCloud_Simplified_C, SmokeDistribution) == 0x000248, "Member 'ABP_SmokeCloud_Simplified_C::SmokeDistribution' has a wrong offset!");
static_assert(offsetof(ABP_SmokeCloud_Simplified_C, Smoke_radius) == 0x000250, "Member 'ABP_SmokeCloud_Simplified_C::Smoke_radius' has a wrong offset!");
static_assert(offsetof(ABP_SmokeCloud_Simplified_C, blendRadiusStart) == 0x000254, "Member 'ABP_SmokeCloud_Simplified_C::blendRadiusStart' has a wrong offset!");
static_assert(offsetof(ABP_SmokeCloud_Simplified_C, blendRadiusEnd) == 0x000258, "Member 'ABP_SmokeCloud_Simplified_C::blendRadiusEnd' has a wrong offset!");
static_assert(offsetof(ABP_SmokeCloud_Simplified_C, CullParticles) == 0x00025C, "Member 'ABP_SmokeCloud_Simplified_C::CullParticles' has a wrong offset!");
static_assert(offsetof(ABP_SmokeCloud_Simplified_C, TransitionWeight) == 0x000260, "Member 'ABP_SmokeCloud_Simplified_C::TransitionWeight' has a wrong offset!");
static_assert(offsetof(ABP_SmokeCloud_Simplified_C, Transitioning) == 0x000264, "Member 'ABP_SmokeCloud_Simplified_C::Transitioning' has a wrong offset!");
static_assert(offsetof(ABP_SmokeCloud_Simplified_C, ParticleSystem) == 0x000268, "Member 'ABP_SmokeCloud_Simplified_C::ParticleSystem' has a wrong offset!");
static_assert(offsetof(ABP_SmokeCloud_Simplified_C, BlendEndToCenterRatio) == 0x000270, "Member 'ABP_SmokeCloud_Simplified_C::BlendEndToCenterRatio' has a wrong offset!");
static_assert(offsetof(ABP_SmokeCloud_Simplified_C, DefaultPPEffectScale) == 0x000274, "Member 'ABP_SmokeCloud_Simplified_C::DefaultPPEffectScale' has a wrong offset!");
static_assert(offsetof(ABP_SmokeCloud_Simplified_C, BlendStartFromEdgeRatio) == 0x000280, "Member 'ABP_SmokeCloud_Simplified_C::BlendStartFromEdgeRatio' has a wrong offset!");
static_assert(offsetof(ABP_SmokeCloud_Simplified_C, SmokeOffsetFromGround) == 0x000284, "Member 'ABP_SmokeCloud_Simplified_C::SmokeOffsetFromGround' has a wrong offset!");
static_assert(offsetof(ABP_SmokeCloud_Simplified_C, OverlapCounter) == 0x000290, "Member 'ABP_SmokeCloud_Simplified_C::OverlapCounter' has a wrong offset!");
static_assert(offsetof(ABP_SmokeCloud_Simplified_C, SmokeOffsetFromGroundInBuilding) == 0x000294, "Member 'ABP_SmokeCloud_Simplified_C::SmokeOffsetFromGroundInBuilding' has a wrong offset!");
static_assert(offsetof(ABP_SmokeCloud_Simplified_C, PostProccessEndTransitionTimer) == 0x0002A0, "Member 'ABP_SmokeCloud_Simplified_C::PostProccessEndTransitionTimer' has a wrong offset!");
static_assert(offsetof(ABP_SmokeCloud_Simplified_C, BlendEndToCenterRatio_Building) == 0x0002A4, "Member 'ABP_SmokeCloud_Simplified_C::BlendEndToCenterRatio_Building' has a wrong offset!");
static_assert(offsetof(ABP_SmokeCloud_Simplified_C, BlendStartFromEdgeRatio_Building) == 0x0002A8, "Member 'ABP_SmokeCloud_Simplified_C::BlendStartFromEdgeRatio_Building' has a wrong offset!");
static_assert(offsetof(ABP_SmokeCloud_Simplified_C, InBuildingEffect) == 0x0002AC, "Member 'ABP_SmokeCloud_Simplified_C::InBuildingEffect' has a wrong offset!");
static_assert(offsetof(ABP_SmokeCloud_Simplified_C, InBuildingController) == 0x0002AD, "Member 'ABP_SmokeCloud_Simplified_C::InBuildingController' has a wrong offset!");
static_assert(offsetof(ABP_SmokeCloud_Simplified_C, TransitionIncrement) == 0x0002B0, "Member 'ABP_SmokeCloud_Simplified_C::TransitionIncrement' has a wrong offset!");
static_assert(offsetof(ABP_SmokeCloud_Simplified_C, TransitionRepetitionSpeed_StartEndBlend) == 0x0002B4, "Member 'ABP_SmokeCloud_Simplified_C::TransitionRepetitionSpeed_StartEndBlend' has a wrong offset!");
static_assert(offsetof(ABP_SmokeCloud_Simplified_C, DoGC) == 0x0002B8, "Member 'ABP_SmokeCloud_Simplified_C::DoGC' has a wrong offset!");
static_assert(offsetof(ABP_SmokeCloud_Simplified_C, AdjustmentFactor) == 0x0002BC, "Member 'ABP_SmokeCloud_Simplified_C::AdjustmentFactor' has a wrong offset!");
static_assert(offsetof(ABP_SmokeCloud_Simplified_C, TransitionRepetitionSpeed_Building) == 0x0002C0, "Member 'ABP_SmokeCloud_Simplified_C::TransitionRepetitionSpeed_Building' has a wrong offset!");
static_assert(offsetof(ABP_SmokeCloud_Simplified_C, TransitionIncrement_Building) == 0x0002C4, "Member 'ABP_SmokeCloud_Simplified_C::TransitionIncrement_Building' has a wrong offset!");
static_assert(offsetof(ABP_SmokeCloud_Simplified_C, BlendEndToCenterRatio_BrightWeather) == 0x0002C8, "Member 'ABP_SmokeCloud_Simplified_C::BlendEndToCenterRatio_BrightWeather' has a wrong offset!");
static_assert(offsetof(ABP_SmokeCloud_Simplified_C, BlendStartFromEdgeRatio_BrightWeather) == 0x0002CC, "Member 'ABP_SmokeCloud_Simplified_C::BlendStartFromEdgeRatio_BrightWeather' has a wrong offset!");
static_assert(offsetof(ABP_SmokeCloud_Simplified_C, PostProcessTranslationLerp) == 0x0002D0, "Member 'ABP_SmokeCloud_Simplified_C::PostProcessTranslationLerp' has a wrong offset!");
static_assert(offsetof(ABP_SmokeCloud_Simplified_C, LightWeather) == 0x0002D4, "Member 'ABP_SmokeCloud_Simplified_C::LightWeather' has a wrong offset!");
static_assert(offsetof(ABP_SmokeCloud_Simplified_C, MaximumBlend) == 0x0002D8, "Member 'ABP_SmokeCloud_Simplified_C::MaximumBlend' has a wrong offset!");
static_assert(offsetof(ABP_SmokeCloud_Simplified_C, MaximumBlend_BrightWeather) == 0x0002DC, "Member 'ABP_SmokeCloud_Simplified_C::MaximumBlend_BrightWeather' has a wrong offset!");

}

