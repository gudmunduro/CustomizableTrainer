#pragma once
#include "pch.h"
#include "FixedSubmenu.h"

class PedSpawnerManangeSub: public FixedSubmenu
{
public:
	PedSpawnerManangeSub(MenuController *menuController);

	void Draw() override;
};

