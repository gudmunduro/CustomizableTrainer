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
#include "Submenu.h"

#pragma region Categories

class SpawnerManageCategories
	: public Submenu
{
public:
	SpawnerManageCategories(MenuController *menuController);

	void Draw() override;
};

#pragma endregion

#pragma region Peds

class SpawnerManageEntities
	: public Submenu
{
public:
	SpawnerManageEntities(MenuController* menuController, EntityType type);

	void Draw() override;

private:
	EntityType type;
};

#pragma endregion
