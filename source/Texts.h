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

namespace Texts {

#pragma region Value arrays

	inline std::vector<std::string>
		customBulletTypes = { "Explosion", "Large explosion", "Water fountain", "Gas", "Lightning", "Fire", "Large fire", "Teleport", "Delete entity", "Steam", "Moonshine" },
		snowCoverageType = { "No snow", "Minor", "Full" };

#pragma endregion

#pragma region On value change events

	void OnBulletTypeValueChange(int from, int to);
	void OnSnowCoverageTypeChange(int from, int to);

#pragma endregion

}