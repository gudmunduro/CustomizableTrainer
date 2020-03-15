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
#include "Object.h"
#include "EntityLists.h"

Object::Object(ObjectId objectId)
	: Entity(objectId)
{}

#pragma region Actions

void Object::Delete()
{
	SetAsMissionEntity();
	OBJECT::DELETE_OBJECT(&id);
}

Object Object::Create(Hash model, Vector3 postion, float heading)
{
	Game::RequestModel(model);
	VehicleId vehicleId = OBJECT::CREATE_OBJECT(model, postion.x, postion.y, postion.z, heading, false, false, false, false);
	return Object(vehicleId);
}

#pragma endregion

#pragma region Getters

std::optional<std::string> Object::ModelName()
{
	return EntityLists::GetStringValueForObjectModel(Model());
}

#pragma endregion