#pragma once
#include "Submenu.h"

class SpawnerManualPlacementSub :
	public Submenu
{
public:
	SpawnerManualPlacementSub(MenuController *menuController, Entity entity);

	void Draw() override;
private:
	Entity selectedEntity;
};

