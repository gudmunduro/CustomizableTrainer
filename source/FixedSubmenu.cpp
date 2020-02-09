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
#include "FixedSubmenu.h"
#include "Routine.h"
#include "Controls.h"

FixedSubmenu::FixedSubmenu(MenuController* menuController)
	: Submenu(menuController)
{
	
}

#pragma region Draw option

void FixedSubmenu::DrawSub(string text, string subKey)
{
	Submenu::DrawSub(text, subKey);
}

void FixedSubmenu::DrawTextAction(string text, string value, std::function<void()> onPress)
{
	auto menuPos = menuController->position;

	Submenu::DrawAction(text, onPress);
	Game::DrawText(value, {  menuPos.x + 9.0f, CurrentOptionPosY() - 4.6f }, 25.0f, { 150, 150, 150, 255 });
}

#pragma endregion

#pragma region Events

void FixedSubmenu::SubWillDraw()
{
	Submenu::SubWillDraw();
}

void FixedSubmenu::SelectionDidChange(int to, int from)
{
	Submenu::SelectionDidChange(to, from);
}

#pragma endregion

#pragma region Controls

void FixedSubmenu::RespondToControls()
{
	Submenu::RespondToControls();

	if (Controls::IsMenuControlPressed(MenuControl::MenuEditModeEnter)) {
		Game::PrintSubtitle("Edit mode is not available in this menu");
	}
}

#pragma endregion
