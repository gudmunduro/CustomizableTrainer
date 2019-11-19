#pragma once

#include "pch.h"
#include "Submenu.h"

class Menu
{
public:
	Menu();
	Vector2 position;
	std::vector<Submenu*> submenuStack;
    void Tick();
	void SetSubmenu(std::string key);
private:
};
