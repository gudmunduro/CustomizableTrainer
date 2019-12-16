#include "pch.h"
#include "SettingsHotkeyActionSub.h"

// MARK: Setup

SettingsHotkeyActionSub::SettingsHotkeyActionSub(MenuController* menuController, MenuOptionType type, std::function<void(int action)> onActionSet)
	: FixedSubmenu(menuController)
{
	this->type = type;
	this->onActionSet = onActionSet;
}

// MARK: Draw menu

void SettingsHotkeyActionSub::Draw()
{
	FixedSubmenu::Draw();

	switch (type) {
	case MenuOptionType::Toggle:
		DrawToggleMenu();
		break;
	case MenuOptionType::Number:
		DrawNumberMenu();
		break;
	}
}

void SettingsHotkeyActionSub::DrawToggleMenu()
{
	DrawTitle("Toggle action");
	DrawActionSet("Toggle", 0);
	DrawActionSet("On", 1);
	DrawActionSet("Off", 2);
}

void SettingsHotkeyActionSub::DrawNumberMenu()
{
	DrawTitle("Toggle action");
	DrawActionSet("Custom value", 0);
	DrawActionSet("Increment", 1);
	DrawActionSet("Decrement", 2);
}

// MARK: Draw option

void SettingsHotkeyActionSub::DrawActionSet(string text, int action) 
{
	DrawAction(text, [this, action] {
		if (onActionSet)
			onActionSet(action);
	});
}

// MARK: Getters

int SettingsHotkeyActionSub::OptionCount()
{
	return 3;
}
