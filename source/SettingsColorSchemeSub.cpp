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
#include "SettingsColorSchemeSub.h"
#include "SettingsSetColorSub.h"
#include "MenuSettings.h"

SettingsColorSchemeSub::SettingsColorSchemeSub(MenuController* menuController) : Submenu(menuController)
{
}

#pragma region Draw

void SettingsColorSchemeSub::Draw()
{
	Submenu::Draw();

	DrawTitle("Color scheme");
	DrawSetColorAction("Title border", Settings::Colors::titleBarBorder);
	DrawSetColorAction("Title text", Settings::Colors::titleBarText);
	DrawSetColorAction("Option background", Settings::Colors::optionBg);
	DrawSetColorAction("Option text", Settings::Colors::optionText);
	DrawSetColorAction("Option selected bg", Settings::Colors::optionSelectedBg);
	DrawSetColorAction("Option selected outline", Settings::Colors::optionSelectedOutline);
	DrawSetColorAction("Option selected text", Settings::Colors::optionSelectedText);
	DrawSetColorAction("Option toggle", Settings::Colors::optionToggle);
	DrawSetColorAction("Option toggle(toggled)", Settings::Colors::optionToggleToggled);
	DrawSetColorAction("Option number", Settings::Colors::optionNumber);
	DrawSetColorAction("Menu background", Settings::Colors::menuBg);
	DrawSetColorAction("Scroll line", Settings::Colors::menuScrollLine);
	DrawSetColorAction("Option count", Settings::Colors::menuOptionCount);
	DrawSetColorAction("Menu status text", Settings::Colors::menuStatusText);
}

void SettingsColorSchemeSub::DrawSetColorAction(std::string text, Color& color)
{
	DrawAction(text + " >", [this, text, color] () mutable {
		Submenu *setColorSub = new SettingsSetColorSub(text, color, menuController);
		menuController->AddSubmenuToStack(setColorSub);
	});
}

#pragma endregion
