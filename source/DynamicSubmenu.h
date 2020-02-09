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

class DynamicSubmenu :
	public Submenu
{
public:
	DynamicSubmenu(SubmenuData submenuData, MenuController* menuController);

	int OptionCount();

	string title;
	string key;
	std::vector<MenuOption> options;
protected:
	void Draw() override;

	void DrawMenuBase() override;

	void DrawSub(string text, string subKey);
	void DrawAction(string text, string actionKey, json actionParams);
	void DrawToggle(string text, string toggleKey);
	void DrawNumber(string text, string numberKey);
	void DrawTextList(string text, string textKey);

	void SubWillDraw() override;
	void SelectionDidChange(int to, int from) override;

	void RespondToControls() override;

	bool IsSavedOption(string key);
	void SaveIfSavedOption(string key);

	bool isEditModeActive;
	bool isMoveOptionActive;
};

