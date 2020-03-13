/*
* Customizable Trainer
* Copyright (C) 2020  Guðmundur Óli
*
* This program is free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation, either version 3 of the License, or
* (at your option) any later version.
*/

#pragma once
#include "pch.h"

class Entity
{
public:
	Entity(EntityId entityId);

#pragma region Actions

	void SetAsMissionEntity();

	void ApplyForceRelative(Vector3 direction, Vector3 offset);

#pragma endregion

#pragma region Setters

	void SetHealth(int health);
	void SetVisible(bool visible);
	void SetDynamic(bool dynamic);
	void SetCoords(Vector3 coords);
	void SetRotation(Vector3 rotation);
	void SetCoordsNoOffset(Vector3 coords, bool xAxis = false, bool yAxis = false, bool zAxis = true);
	void SetInvincible(bool invincible);
	void SetAlpha(int alpha);
	void SetFrozen(bool frozen);
	void SetCollisionEnabled(bool enabled, bool keepPhysics = true);
	void SetGravityEnabled(bool enabled);

#pragma endregion

#pragma region Booleans

	bool Exists();
	bool IsVisible();
	bool IsPed();
	bool IsVehicle();
	bool IsObject();

#pragma endregion

#pragma region Getters

	int MaxHealth();
	int Health();
	Vector3 Position();
	Vector3 Rotation();
	int PromptGroup();
	Vector3 GetOffsetInWorldCoords(Vector3 offset);
	void Dimensions(Vector3* dim1, Vector3* dim2);
	int Alpha();
	float Heading();
	Hash Model();
	float Speed();

#pragma endregion

#pragma region Variables

	EntityId id;

#pragma endregion
};

