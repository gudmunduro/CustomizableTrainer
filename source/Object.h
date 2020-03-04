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

class Object
	: public Entity
{
public:
	Object(ObjectId objectId);

#pragma region Actions

	void Delete();

#pragma endregion

#pragma region Static

	static Object Create(Hash model, Vector3 postion, float heading);

#pragma endregion

};

