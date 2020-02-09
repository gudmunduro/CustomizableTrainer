#pragma once
#include "pch.h"
#include "Submenu.h"

class PedSpawnerSub: public Submenu
{
public:
	PedSpawnerSub(MenuController *menuController);

	void Draw() override;
	int OptionCount();
	void RespondToControls();

};

