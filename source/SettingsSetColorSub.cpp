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
#include "SettingsSetColorSub.h"
#include "JsonData.h"
#include "Routine.h"

SettingsSetColorSub::SettingsSetColorSub(std::string title, Color& colorToChange, MenuController* menuController)
	: Submenu(menuController), title(title), colorToChange(colorToChange)
{}

void SettingsSetColorSub::Draw()
{
	Submenu::Draw();

	DrawTitle(title);
	DrawColorValue("Red", colorToChange.r);
	DrawColorValue("Green", colorToChange.g);
	DrawColorValue("Blue", colorToChange.b);
	DrawColorValue("Alpha", colorToChange.a);
	DrawAction("Save", [] {
		JSONData::SaveMenuSettings(true);
	});
}

void SettingsSetColorSub::DrawColorValue(std::string text, int& color)
{
	DrawNumber(text, std::to_string(color), [color] () mutable {
			try {
				auto inputValue = Game::GetInputWithKeyboard(std::to_string(color));
				if (!inputValue) return;
				int value = std::stoi(*inputValue);
				if (value < 0 || value > 255) {
					Game::PrintSubtitle("Error: Value needs to be between 0 and 255");
					return;
				}
				color = value;
			}
			catch (std::exception & e) {
				Game::PrintSubtitle("Error: Invalid value");
			}
		}, [color] (bool direction) mutable {
			if (color == 255 && direction) {
				color = 0;
				return;
			}
			if (color == 0 && !direction) {
				color = 255;
				return;
			}
			color += direction ? 1 : -1;
	});
}
