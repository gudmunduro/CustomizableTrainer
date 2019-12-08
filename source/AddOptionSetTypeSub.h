#pragma once
#include "pch.h"
#include "FixedSubmenu.h"

class AddOptionSetTypeSub :
	public FixedSubmenu
{
public:
	AddOptionSetTypeSub(MenuController* menuController);

	void Draw() override;

	int OptionCount() override;

	std::function<void(MenuOptionType type)> onTypeSet;
};

