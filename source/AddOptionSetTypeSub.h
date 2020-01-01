#pragma once
#include "pch.h"
#include "FixedSubmenu.h"

class AddOptionSetTypeSub :
	public FixedSubmenu
{
public:
	AddOptionSetTypeSub(MenuController* menuController);

	AddOptionSetTypeSub(MenuController* menuController, bool hideSubmenu);

	std::function<void(MenuOptionType type)> onTypeSet;

protected:
	void Draw() override;

	bool hideSubmenu = false;
};

