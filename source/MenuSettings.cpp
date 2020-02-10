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
#include "MenuSettings.h"

Color MenuSettings::colorFromHex(std::string hexValue)
{
	int hexValueInt = std::stoi(hexValue);
	return {
		((hexValueInt >> 16) & 0xFF) / 255,
		((hexValueInt >> 8) & 0xFF) / 255,
		(hexValueInt & 0xFF) / 255,
		255
	};
}

Color MenuSettings::colorFromJSON(json color)
{
	return {
		color["r"].get<int>(),
		color["g"].get<int>(),
		color["b"].get<int>(),
		color["a"].get<int>()
	};
}

json MenuSettings::jsonFromColor(Color color)
{
	return {
		{ "r", color.r },
		{ "g", color.g },
		{ "b", color.b },
		{ "a", color.a }
	};
}