#include "pch.h"
#include "FixedSubmenu.h"

FixedSubmenu::FixedSubmenu(MenuController* menuController)
	: Submenu(menuController)
{
	
}

// MARK: Draw option

void FixedSubmenu::DrawSub(string text, string subKey)
{
	Submenu::DrawSub(text, subKey);
}

void FixedSubmenu::DrawText(string text, string value, std::function<void()> onPress)
{
	auto menuPos = menuController->position;

	Submenu::DrawAction(text, onPress);
	Game::DrawText(value, { menuPos.x + 0.09f, CurrentOptionPosY() - 0.035f }, 0.25f, 0.25f, { 150, 150, 150, 255 });
}

// MARK: Events

void FixedSubmenu::SubWillDraw()
{
	Submenu::SubWillDraw();
}

void FixedSubmenu::SelectionDidChange(int to, int from)
{
	Submenu::SelectionDidChange(to, from);
}

// MARK: Controls

void FixedSubmenu::RespondToControls()
{
	Submenu::RespondToControls();
}

// MARK: Getters

int FixedSubmenu::OptionCount()
{
	return 0;
}

bool FixedSubmenu::ToggleValueAtIndex(int index)
{
	return false;
}
