#include "pch.h"
#include "Menu.h"
#include "alt-log.h"

Menu::Menu()
{
	position = { 0.054f, 0.1f };
}

void Menu::Tick()
{
	if (submenuStack.back() != 0) {
		submenuStack.back()->Draw();
	}
}

void Menu::SetSubmenu(std::string id)
{

}