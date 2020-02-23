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

Object::Object(ObjectId objectId)
	: Entity(objectId)
{}

#pragma region Actions

void Object::Delete()
{
	OBJECT::DELETE_OBJECT(&id);
}

#pragma endregion
