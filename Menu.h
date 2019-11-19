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
private:
	std::function<void(string key)> setSubmenu;
};
