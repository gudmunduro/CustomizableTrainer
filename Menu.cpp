#include "pch.h"
#include "Menu.h"
#include "alt-log.h"

Menu::Menu()
{
	position = { 0.054f, 0.1f };
	setSubmenu = [this](string key) {

	};
	submenuStack.push_back(new Submenu("Test menu", { { MenuOptionType::Action, "Test option 1", "key" }, { MenuOptionType::Action, "Test option 2", "key" }, { MenuOptionType::Action, "Test option 3", "key" }
}, position, setSubmenu));
}

void Menu::Tick()
{
	if (submenuStack.back() != 0) {
		submenuStack.back()->Draw();
	}
}
