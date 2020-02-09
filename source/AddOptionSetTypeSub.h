#pragma once
#include "pch.h"
#include "Submenu.h"

class AddOptionSetTypeSub :
	public Submenu
{
public:
	AddOptionSetTypeSub(MenuController* menuController, bool hideSubmenu = false, bool hideAction = false);

	std::function<void(MenuOptionType type)> onTypeSet;

protected:
	void Draw() override;

	bool hideSubmenu = false;
	bool hideAction = false;
};

