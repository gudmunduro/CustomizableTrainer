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
	DrawActionSet("Increment", 0);
	DrawActionSet("Decrement", 1);
}

// MARK: Draw option

void SettingsHotkeyActionSub::DrawActionSet(string text, int action) 
{
	DrawAction(text, [this, action] {
		if (onActionSet)
			onActionSet(action);
		menuController->GoToLastSub();
	});
}

// MARK: Getters

int SettingsHotkeyActionSub::OptionCount()
{
	switch (type) {
	case MenuOptionType::Toggle: return 3;
	case MenuOptionType::Number: return 2;
	default: return 0;
	}
}
