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

	std::string title;
	std::string key;
	std::vector<MenuOption> options;
protected:
	void Draw() override;

	void DrawMenuBase() override;

	void DrawSub(std::string text, std::string subKey);
	void DrawAction(std::string text, std::string actionKey, json actionParams);
	void DrawToggle(std::string text, std::string toggleKey);
	void DrawNumber(std::string text, std::string numberKey);
	void DrawTextList(std::string text, std::string textKey);

	void SubWillDraw() override;
	void SelectionDidChange(int to, int from) override;

	void RespondToControls() override;

	bool IsSavedOption(std::string key);
	void SaveIfSavedOption(std::string key);

	bool isEditModeActive;
	bool isMoveOptionActive;
};

