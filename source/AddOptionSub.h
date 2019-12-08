#pragma once
#include "pch.h"
#include "FixedSubmenu.h"

class AddOptionSub :
	public FixedSubmenu
{
public:
	AddOptionSub(MenuController* menuController);
	void Setup(bool resetParams = false);
	void Draw() override;

	void OnOptionPress(int index) override;

	int OptionCount() override;

	std::function<void(MenuOption option)> onAddOption;
private:
	MenuOption optionToAdd;
	std::vector<MenuOptionParameter> parameters;
};

