#pragma once
#include "pch.h"


enum class IntersectOptions : int
{
	Everything = -1,
	Map = 1,
	Mission_Entities = 2,
	Peds1 = 12,//4 and 8 both seem to be peds
	Objects = 16,
	Unk1 = 32,
	Unk2 = 64,
	Unk3 = 128,
	Vegetation = 256,
	Unk4 = 512
};

class RaycastResult
{
public:
	RaycastResult();
	RaycastResult(const RaycastResult& handle);
	RaycastResult(int handle);

	int Result();

	bool DidHitEntity();

	bool DidHitAnything();

	EntityId HitEntity();

	Vector3 HitCoords();

	Vector3 SurfaceNormal();

	static RaycastResult Raycast(const Vector3& source, const Vector3& target, IntersectOptions options, EntityId ignoreEntity = 0);
	static RaycastResult Raycast(const Vector3& source, const Vector3& direction, float maxDistance, IntersectOptions options, EntityId ignoreEntity = 0);
	static RaycastResult RaycastCapsule(const Vector3& source, const Vector3& target, float radius, IntersectOptions options, EntityId ignoreEntity = 0);
	static RaycastResult RaycastCapsule(const Vector3& source, const Vector3& direction, float maxDistance, float radius, IntersectOptions options, EntityId ignoreEntity = 0);

private:
	int mResult;
	bool mDidHit;
	EntityId mHitEntity;
	Vector3 mHitCoords;
	Vector3 mSurfaceNormal;
};