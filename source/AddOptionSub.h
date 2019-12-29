#pragma once
#include "pch.h"
#include "FixedSubmenu.h"

class EditAddOptionSub :
	public FixedSubmenu
{
public:
	EditAddOptionSub(MenuOption* optionToEdit, MenuController* menuController);

	int OptionCount() override;

	std::function<void(MenuOption option)> onAddOption;
protected:
	void Draw() override;
	void UpdateParameters();

	MenuOption optionToAdd;
	std::vector<MenuOptionParameter> parameters;
	string title;
};

