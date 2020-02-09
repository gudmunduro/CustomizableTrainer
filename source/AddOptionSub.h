#pragma once
#include "pch.h"
#include "Submenu.h"

class EditAddOptionSub :
	public Submenu
{
public:
	EditAddOptionSub(MenuOption* optionToEdit, MenuController* menuController);

	std::function<void(MenuOption option)> onAddOption;
protected:
	void Draw() override;
	void UpdateParameters();

	void RespondToControls() override;

	MenuOption optionToAdd;
	std::vector<MenuOptionParameter> parameters;
	string title;
};

