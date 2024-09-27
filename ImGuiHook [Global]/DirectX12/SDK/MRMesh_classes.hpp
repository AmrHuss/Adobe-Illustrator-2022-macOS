#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MRMesh

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "CoreUObject_classes.hpp"
#include "MRMesh_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// Class MRMesh.MeshReconstructorBase
// 0x0000 (0x0028 - 0x0028)
class UMeshReconstructorBase final : public UObject
{
public:
	void ConnectMRMesh(class UMRMeshComponent* Mesh);
	void DisconnectMRMesh();
	void PauseReconstruction();
	void StartReconstruction();
	void StopReconstruction();

	bool IsReconstructionPaused() const;
	bool IsReconstructionStarted() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MeshReconstructorBase">();
	}
	static class UMeshReconstructorBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMeshReconstructorBase>();
	}
};
static_assert(alignof(UMeshReconstructorBase) == 0x000008, "Wrong alignment on UMeshReconstructorBase");
static_assert(sizeof(UMeshReconstructorBase) == 0x000028, "Wrong size on UMeshReconstructorBase");

// Class MRMesh.MockDataMeshTrackerComponent
// 0x0070 (0x0270 - 0x0200)
class UMockDataMeshTrackerComponent final : public USceneComponent
{
public:
	FMulticastInlineDelegateProperty_             OnMeshTrackerUpdated;                              // 0x01F8(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	bool                                          ScanWorld;                                         // 0x0208(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          RequestNormals;                                    // 0x0209(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          RequestVertexConfidence;                           // 0x020A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EMeshTrackerVertexColorMode                   VertexColorMode;                                   // 0x020B(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_20C[0x4];                                      // 0x020C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FColor>                         BlockVertexColors;                                 // 0x0210(0x0010)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FLinearColor                           VertexColorFromConfidenceZero;                     // 0x0220(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                           VertexColorFromConfidenceOne;                      // 0x0230(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         UpdateInterval;                                    // 0x0240(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_244[0x4];                                      // 0x0244(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMRMeshComponent*                       MRMesh;                                            // 0x0248(0x0008)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_250[0x20];                                     // 0x0250(0x0020)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void ConnectMRMesh(class UMRMeshComponent* InMRMeshPtr);
	void DisconnectMRMesh(class UMRMeshComponent* InMRMeshPtr);
	void OnMockDataMeshTrackerUpdated__DelegateSignature(int32 Index_0, const TArray<struct FVector>& Vertices, const TArray<int32>& Triangles, const TArray<struct FVector>& Normals, const TArray<float>& Confidence);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MockDataMeshTrackerComponent">();
	}
	static class UMockDataMeshTrackerComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMockDataMeshTrackerComponent>();
	}
};
static_assert(alignof(UMockDataMeshTrackerComponent) == 0x000010, "Wrong alignment on UMockDataMeshTrackerComponent");
static_assert(sizeof(UMockDataMeshTrackerComponent) == 0x000270, "Wrong size on UMockDataMeshTrackerComponent");
static_assert(offsetof(UMockDataMeshTrackerComponent, OnMeshTrackerUpdated) == 0x0001F8, "Member 'UMockDataMeshTrackerComponent::OnMeshTrackerUpdated' has a wrong offset!");
static_assert(offsetof(UMockDataMeshTrackerComponent, ScanWorld) == 0x000208, "Member 'UMockDataMeshTrackerComponent::ScanWorld' has a wrong offset!");
static_assert(offsetof(UMockDataMeshTrackerComponent, RequestNormals) == 0x000209, "Member 'UMockDataMeshTrackerComponent::RequestNormals' has a wrong offset!");
static_assert(offsetof(UMockDataMeshTrackerComponent, RequestVertexConfidence) == 0x00020A, "Member 'UMockDataMeshTrackerComponent::RequestVertexConfidence' has a wrong offset!");
static_assert(offsetof(UMockDataMeshTrackerComponent, VertexColorMode) == 0x00020B, "Member 'UMockDataMeshTrackerComponent::VertexColorMode' has a wrong offset!");
static_assert(offsetof(UMockDataMeshTrackerComponent, BlockVertexColors) == 0x000210, "Member 'UMockDataMeshTrackerComponent::BlockVertexColors' has a wrong offset!");
static_assert(offsetof(UMockDataMeshTrackerComponent, VertexColorFromConfidenceZero) == 0x000220, "Member 'UMockDataMeshTrackerComponent::VertexColorFromConfidenceZero' has a wrong offset!");
static_assert(offsetof(UMockDataMeshTrackerComponent, VertexColorFromConfidenceOne) == 0x000230, "Member 'UMockDataMeshTrackerComponent::VertexColorFromConfidenceOne' has a wrong offset!");
static_assert(offsetof(UMockDataMeshTrackerComponent, UpdateInterval) == 0x000240, "Member 'UMockDataMeshTrackerComponent::UpdateInterval' has a wrong offset!");
static_assert(offsetof(UMockDataMeshTrackerComponent, MRMesh) == 0x000248, "Member 'UMockDataMeshTrackerComponent::MRMesh' has a wrong offset!");

// Class MRMesh.MRMeshComponent
// 0x00B0 (0x0510 - 0x0460)
class UMRMeshComponent final : public UPrimitiveComponent
{
public:
	uint8                                         Pad_458[0x10];                                     // 0x0458(0x0010)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInterface*                     Material;                                          // 0x0468(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UMaterialInterface*                     WireframeMaterial;                                 // 0x0470(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                          bCreateMeshProxySections;                          // 0x0478(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                          bUpdateNavMeshOnMeshUpdate;                        // 0x0479(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                          bNeverCreateCollisionMesh;                         // 0x047A(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_47B[0x5];                                      // 0x047B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UBodySetup*                             CachedBodySetup;                                   // 0x0480(0x0008)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UBodySetup*>                     BodySetups;                                        // 0x0488(0x0010)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	uint8                                         Pad_498[0x78];                                     // 0x0498(0x0078)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void Clear();
	void ForceNavMeshUpdate();
	void SetEnableMeshOcclusion(bool bEnable);
	void SetUseWireframe(bool bUseWireframe);
	void SetWireframeColor(const struct FLinearColor& InColor);
	void SetWireframeMaterial(class UMaterialInterface* InMaterial);

	bool GetEnableMeshOcclusion() const;
	bool GetUseWireframe() const;
	const struct FLinearColor GetWireframeColor() const;
	bool IsConnected() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MRMeshComponent">();
	}
	static class UMRMeshComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMRMeshComponent>();
	}
};
static_assert(alignof(UMRMeshComponent) == 0x000010, "Wrong alignment on UMRMeshComponent");
static_assert(sizeof(UMRMeshComponent) == 0x000510, "Wrong size on UMRMeshComponent");
static_assert(offsetof(UMRMeshComponent, Material) == 0x000468, "Member 'UMRMeshComponent::Material' has a wrong offset!");
static_assert(offsetof(UMRMeshComponent, WireframeMaterial) == 0x000470, "Member 'UMRMeshComponent::WireframeMaterial' has a wrong offset!");
static_assert(offsetof(UMRMeshComponent, bCreateMeshProxySections) == 0x000478, "Member 'UMRMeshComponent::bCreateMeshProxySections' has a wrong offset!");
static_assert(offsetof(UMRMeshComponent, bUpdateNavMeshOnMeshUpdate) == 0x000479, "Member 'UMRMeshComponent::bUpdateNavMeshOnMeshUpdate' has a wrong offset!");
static_assert(offsetof(UMRMeshComponent, bNeverCreateCollisionMesh) == 0x00047A, "Member 'UMRMeshComponent::bNeverCreateCollisionMesh' has a wrong offset!");
static_assert(offsetof(UMRMeshComponent, CachedBodySetup) == 0x000480, "Member 'UMRMeshComponent::CachedBodySetup' has a wrong offset!");
static_assert(offsetof(UMRMeshComponent, BodySetups) == 0x000488, "Member 'UMRMeshComponent::BodySetups' has a wrong offset!");

}

