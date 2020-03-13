/*
* Customizable Trainer
* Copyright (C) 2020  Guðmundur Óli
*
* This program is free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation, either version 3 of the License, or
* (at your option) any later version.
*/

#include "pch.h"
#include "Entity.h"

Entity::Entity(EntityId entityId)
	: id(entityId)
{}

#pragma region Actions

void Entity::SetAsMissionEntity()
{
	ENTITY::SET_ENTITY_AS_MISSION_ENTITY(id, true, false);
}

void Entity::ApplyForceRelative(Vector3 direction, Vector3 offset)
{
	ENTITY::APPLY_FORCE_TO_ENTITY(id, 1, direction.x, direction.y, direction.z, offset.x, offset.y, offset.z, false, true, true, true, false, true);
}

#pragma endregion

#pragma region Setters

void Entity::SetHealth(int health)
{
	ENTITY::SET_ENTITY_HEALTH(id, health, false);
}

void Entity::SetVisible(bool visible)
{
	ENTITY::SET_ENTITY_VISIBLE(id, visible);
}

void Entity::SetDynamic(bool dynamic)
{
	ENTITY::SET_ENTITY_DYNAMIC(id, dynamic);
}

void Entity::SetCoords(Vector3 coords)
{
	ENTITY::SET_ENTITY_COORDS(id, coords.x, coords.y, coords.z, false, false, false, true);
}

void Entity::SetRotation(Vector3 rotation)
{
	ENTITY::SET_ENTITY_ROTATION(id, rotation.x, rotation.y, rotation.z, 2, false);
}

void Entity::SetCoordsNoOffset(Vector3 coords, bool xAxis, bool yAxis, bool zAxis)
{
	ENTITY::SET_ENTITY_COORDS_NO_OFFSET(id, coords.x, coords.y, coords.z, xAxis, yAxis, zAxis);
}

void Entity::SetInvincible(bool invincible)
{
	ENTITY::SET_ENTITY_INVINCIBLE(id, invincible);
}

void Entity::SetAlpha(int alpha)
{
	ENTITY::SET_ENTITY_ALPHA(id, alpha, false);
}

void Entity::SetFrozen(bool frozen)
{
	ENTITY::FREEZE_ENTITY_POSITION(id, frozen);
}

void Entity::SetCollisionEnabled(bool enabled, bool keepPhysics)
{
	ENTITY::SET_ENTITY_COLLISION(id, enabled, keepPhysics);
}

void Entity::SetGravityEnabled(bool enabled)
{
	ENTITY::SET_ENTITY_HAS_GRAVITY(id, enabled);
}

#pragma endregion

#pragma region Booleans

bool Entity::Exists()
{
	return id != 0 && ENTITY::DOES_ENTITY_EXIST(id);
}

bool Entity::IsVisible()
{
	return ENTITY::IS_ENTITY_VISIBLE(id);
}

bool Entity::IsPed()
{
	return ENTITY::IS_ENTITY_A_PED(id);
}

bool Entity::IsVehicle()
{
	return ENTITY::IS_ENTITY_A_VEHICLE(id);
}

bool Entity::IsObject()
{
	return ENTITY::IS_ENTITY_AN_OBJECT(id);
}

#pragma endregion

#pragma region Getters

int Entity::MaxHealth()
{
	return ENTITY::GET_ENTITY_MAX_HEALTH(id, false);
}

int Entity::Health()
{
	return ENTITY::GET_ENTITY_HEALTH(id);
}

Vector3 Entity::Position()
{
	return ENTITY::GET_ENTITY_COORDS(id, true, false);
}

Vector3 Entity::Rotation()
{
	return ENTITY::GET_ENTITY_ROTATION(id, 2);
}

int Entity::PromptGroup()
{
	return UI::_UIPROMPT_GET_GROUP_ID_FOR_TARGET_ENTITY(id);
}

Vector3 Entity::GetOffsetInWorldCoords(Vector3 offset)
{
	return ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(id, offset.x, offset.y, offset.z);
}

void Entity::Dimensions(Vector3* dim1, Vector3* dim2)
{
	Vector3 dimensions1, dimensions2;
	GAMEPLAY::GET_MODEL_DIMENSIONS(Model(), &dimensions1, &dimensions2);
	dimensions1.x = abs(dimensions1.x); dimensions2.x = abs(dimensions2.x);
	dimensions1.y = abs(dimensions1.y); dimensions2.y = abs(dimensions2.y);
	dimensions1.z = abs(dimensions1.z); dimensions2.z = abs(dimensions2.z);
}

int Entity::Alpha()
{
	return ENTITY::GET_ENTITY_ALPHA(id);
}

float Entity::Heading()
{
	return ENTITY::GET_ENTITY_HEADING(id);
}

Hash Entity::Model()
{
	return ENTITY::GET_ENTITY_MODEL(id);
}

float Entity::Speed()
{
	return ENTITY::GET_ENTITY_SPEED(id);
}

#pragma endregion