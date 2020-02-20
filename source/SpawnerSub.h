#pragma once
#include "Submenu.h"
#include "Spawner.h"

class SpawnerSub
	: public Submenu
{
public:
	SpawnerSub(MenuController *menuController);

	void Draw() override;
	void SubDidDraw() override;

};

