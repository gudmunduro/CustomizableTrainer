/*
* Menyoo PC - Grand Theft Auto V single-player trainer mod
* Copyright (C) 2019  MAFINS
*
* This program is free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation, either version 3 of the License, or
* (at your option) any later version.
*/
/*
* ALTERED SOURCE
* Customizable Trainer
* Copyright (C) 2020 Guðmundur Óli
*/

#include "pch.h"
#include "Raycast.h"

RaycastResult::RaycastResult()
	: mResult(0), mDidHit(false)
{
}

RaycastResult::RaycastResult(const RaycastResult& handle)
	: mResult(handle.mResult), mDidHit(handle.mDidHit), mHitEntity(handle.mHitEntity), mHitCoords(handle.mHitCoords), mSurfaceNormal(handle.mSurfaceNormal)
{
}

RaycastResult::RaycastResult(int handle)
{
	int hitsomething = 0;
	int enthandle = 0;
	Vector3 hitCoords, surfaceNormal;

	this->mResult = SHAPETEST::GET_SHAPE_TEST_RESULT(handle, &hitsomething, &hitCoords, &surfaceNormal, &enthandle);

	this->mDidHit = hitsomething != 0;
	this->mHitCoords = hitCoords;
	this->mSurfaceNormal = surfaceNormal;

	if (ENTITY::DOES_ENTITY_EXIST(enthandle) && (ENTITY::IS_ENTITY_A_PED(enthandle) || ENTITY::IS_ENTITY_A_VEHICLE(enthandle) || ENTITY::IS_ENTITY_AN_OBJECT(enthandle)))
	{
		this->mHitEntity = enthandle;
	}
	else
	{
		this->mHitEntity = 0;

	}
}


int RaycastResult::Result()
{
	return this->mResult;
}
bool RaycastResult::DidHitEntity()
{
	return mHitEntity != 0;
}
bool RaycastResult::DidHitAnything()
{
	return this->mDidHit;
}
EntityId RaycastResult::HitEntity()
{
	return this->mHitEntity;
}
Vector3 RaycastResult::HitCoords()
{
	return this->mHitCoords;
}
Vector3 RaycastResult::SurfaceNormal()
{
	return this->mSurfaceNormal;
}


RaycastResult RaycastResult::Raycast(const Vector3& source, const Vector3& target, IntersectOptions options, EntityId ignoreEntity)
{
	return RaycastResult(SHAPETEST::_START_SHAPE_TEST_RAY(source.x, source.y, source.z, target.x, target.y, target.z, static_cast<int>(options), ignoreEntity, 7));
}
RaycastResult RaycastResult::Raycast(const Vector3& source, const Vector3& direction, float maxDistance, IntersectOptions options, EntityId ignoreEntity)
{
	Vector3& target = source + (direction * maxDistance);
	return RaycastResult(SHAPETEST::_START_SHAPE_TEST_RAY(source.x, source.y, source.z, target.x, target.y, target.z, static_cast<int>(options), ignoreEntity, 7));
}