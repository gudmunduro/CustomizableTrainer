#pragma once
#include "pch.h"
#include "FixedSubmenu.h"

class EditAddOptionSub :
	public FixedSubmenu
{
public:
	EditAddOptionSub(MenuOption* optionToEdit, MenuController* menuController);
	void Draw() override;

	int OptionCount() override;

	void UpdateParameters();

	std::function<void(MenuOption option)> onAddOption;
private:
	MenuOption optionToAdd;
	std::vector<MenuOptionParameter> parameters;
	string title;
};

