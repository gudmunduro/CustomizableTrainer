#pragma once
#include "pch.h"
#include "FixedSubmenu.h"

class AddOptionSub :
	public FixedSubmenu
{
public:
	AddOptionSub(MenuController* menuController);
	void Draw() override;

	int OptionCount() override;

	void UpdateParameters();

	std::function<void(MenuOption option)> onAddOption;
private:
	MenuOption optionToAdd;
	std::vector<MenuOptionParameter> parameters;
};

