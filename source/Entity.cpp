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

void Entity::SetCoords(Vector3 coords)
{
	ENTITY::SET_ENTITY_COORDS(id, coords.x, coords.y, coords.z, false, false, false, true);
}

void Entity::SetCoordsNoOffset(Vector3 coords, bool xAxis, bool yAxis, bool zAxis)
{
	ENTITY::SET_ENTITY_COORDS_NO_OFFSET(id, coords.x, coords.y, coords.z, xAxis, yAxis, zAxis);
}

void Entity::SetInvincible(bool invincible)
{
	ENTITY::SET_ENTITY_INVINCIBLE(id, invincible);
}

#pragma endregion

#pragma region Booleans

bool Entity::Exists()
{
	return id != 0 && ENTITY::DOES_ENTITY_EXIST(id);
}

#pragma endregion

#pragma region Getters

int Entity::MaxHealth()
{
	return ENTITY::GET_ENTITY_MAX_HEALTH(id, false);
}

Vector3 Entity::Position()
{
	return ENTITY::GET_ENTITY_COORDS(id, true, false);
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