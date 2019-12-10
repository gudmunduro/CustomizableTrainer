#pragma once
#include "pch.h"
#include "FixedSubmenu.h"

class PedSpawnerSub: public FixedSubmenu
{
public:
	PedSpawnerSub(MenuController *menuController);

	void Draw() override;
	int OptionCount();
};

