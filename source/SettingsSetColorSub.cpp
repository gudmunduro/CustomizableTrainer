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

SettingsSetColorSub::SettingsSetColorSub(string title, Color *colorToChange, MenuController* menuController) : Submenu(menuController)
{
	this->title = title;
	this->colorToChange = colorToChange;
}

void SettingsSetColorSub::Draw()
{
	Submenu::Draw();

	DrawTitle(title);
	DrawColorValue("Red", &colorToChange->r);
	DrawColorValue("Green", &colorToChange->g);
	DrawColorValue("Blue", &colorToChange->b);
	DrawColorValue("Alpha", &colorToChange->a);
	DrawAction("Save", [] {
		JSONData::SaveMenuSettings(true);
	});
}

void SettingsSetColorSub::DrawColorValue(string text, int* color)
{
	DrawNumber(text, std::to_string(*color), [color] {
			try {
				int value = std::stoi(Game::GetInputWithKeyboard(std::to_string(*color)));
				if (value < 0 || value > 255) {
					Game::PrintSubtitle("Error: Value needs to be between 0 and 255");
					return;
				}
				*color = value;
			}
			catch (std::exception & e) {
				Game::PrintSubtitle("Error: Invalid value");
			}
		}, [color](bool direction) {
			if (*color == 255 && direction) {
				*color = 0;
				return;
			}
			if (*color == 0 && !direction) {
				*color = 255;
				return;
			}
			*color += direction ? 1 : -1;
	});
}
