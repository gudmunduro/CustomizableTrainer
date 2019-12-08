#pragma once
#include "pch.h"
#include "FixedSubmenu.h"

class AddOptionSetTypeSub :
	public FixedSubmenu
{
public:
	AddOptionSetTypeSub(MenuController* menuController);

	void OnOptionPress(int index) override;

	std::function<void(MenuOptionType type)> onTypeSet;
};

