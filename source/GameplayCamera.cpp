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
#include "GameplayCamera.h"

Vector3 RotationToDirection(const Vector3& rotation)
{
	float retz = rotation.z * 0.0174532924F; // Degree to radian
	float retx = rotation.x * 0.0174532924F;
	float absx = abs(cos(retx));
	return { -sin(retz) * absx, cos(retz) * absx, sin(retx) };
}

float Length(Vector3 vector)
{
	return static_cast<float>(sqrt((vector.x * vector.x) + (vector.y * vector.y) + (vector.z * vector.z)));
}

void Normalize(Vector3* vector)
{
	float length = Length(*vector);
	if (length == 0.0f)
		return;
	float num = 1.0f / length;
	vector->x *= num;
	vector->y *= num;
	vector->z *= num;
}

Vector3 DirectionToRotation(Vector3 direction)
{
	Normalize(&direction);
	float xx = atan2(direction.z, direction.y) / 0.0174532924F; // Radian to degree
	float yy = 0;
	float zz = -atan2(direction.x, direction.y) / 0.0174532924F;
	return { xx, yy, zz };
}

float DegreeToRadian(float angle)
{
	return angle * 0.0174532925199433F;
}


Vector3 GameplayCamera::Position()
{
	return CAM::GET_GAMEPLAY_CAM_COORD();
}

Vector3 GameplayCamera::Rotation()
{
	return CAM::GET_GAMEPLAY_CAM_ROT(2);
}

bool GameplayCamera::WorldToScreenRel(const Vector3& worldCoords, Vector2& screenCoords)
{
	if (!GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(worldCoords.x, worldCoords.y, worldCoords.z, &screenCoords.x, &screenCoords.y))
		return false;

	screenCoords.x = (screenCoords.x - 0.5f) * 2.0f;
	screenCoords.y = (screenCoords.y - 0.5f) * 2.0f;
	return true;
}

Vector3 GameplayCamera::ScreenToWorld(const Vector2& screenCoord)
{
	// Credit to Guadmaz
	Vector3 camRot = GameplayCamera::Rotation();
	Vector3 camPos = GameplayCamera::Position();

	Vector2 vector2;
	Vector2 vector21;
	Vector3 direction = RotationToDirection(camRot);
	Vector3 vector3 = camRot + (Vector3{ 10.f, 0.f, 0.f });
	Vector3 vector31 = camRot + (Vector3{ -10.f, 0.f, 0.f });
	Vector3 vector32 = camRot + (Vector3{ 0.f, 0.f, -10.f });
	Vector3 direction1 = RotationToDirection(camRot + (Vector3{ 0.f, 0.f, 10.f })) - RotationToDirection(vector32);
	Vector3 direction2 = RotationToDirection(vector3) - RotationToDirection(vector31);
	float rad = -DegreeToRadian(camRot.y);
	Vector3 vector33 = (direction1 * cos(rad)) - (direction2 * sin(rad));
	Vector3 vector34 = (direction1 * sin(rad)) + (direction2 * cos(rad));
	if (!WorldToScreenRel(((camPos + (direction * 10.f)) + vector33) + vector34, vector2))
	{
		return camPos + (direction * 10.f);
	}
	if (!WorldToScreenRel(camPos + (direction * 10.f), vector21))
	{
		return camPos + (direction * 10.f);
	}
	if (abs(vector2.x - vector21.x) < 0.001f || abs(vector2.y - vector21.y) < 0.001f)
	{
		return camPos + (direction * 10.f);
	}
	float x = (screenCoord.x - vector21.x) / (vector2.x - vector21.x);
	float y = (screenCoord.y - vector21.y) / (vector2.y - vector21.y);
	return ((camPos + (direction * 10.f)) + (vector33 * x)) + (vector34 * y);
}

Vector3 GameplayCamera::DirectionFromScreenCentre()
{
	Vector3 position = GameplayCamera::Position();
	Vector3 world = GameplayCamera::ScreenToWorld({ 0.0f, 0.0f });
	Vector3 newVec = world - position;
	Normalize(&newVec);
	return newVec;
}