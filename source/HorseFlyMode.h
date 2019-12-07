#pragma once
#include "pch.h"

class HorseFlyMode
{
public:
	HorseFlyMode();
	void Tick();

	void HoverTest();

private:
	Ped horse = Player().GetMount();
	Player player;
};

