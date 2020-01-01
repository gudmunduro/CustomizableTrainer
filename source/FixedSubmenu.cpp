#include "pch.h"
#include "FixedSubmenu.h"
#include "Routine.h"
#include "Controls.h"

FixedSubmenu::FixedSubmenu(MenuController* menuController)
	: Submenu(menuController)
{
	
}

// MARK: Draw option

void FixedSubmenu::DrawSub(string text, string subKey)
{
	Submenu::DrawSub(text, subKey);
}

void FixedSubmenu::DrawTextAction(string text, string value, std::function<void()> onPress)
{
	auto menuPos = menuController->position;

	Submenu::DrawAction(text, onPress);
	Game::DrawText(value, { menuPos.x + 9.0f, CurrentOptionPosY() - 4.6f }, 25.0f, { 150, 150, 150, 255 });
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

	if (Controls::IsMenuControlPressed(MenuControl::MenuEditModeEnter)) {
		Game::PrintSubtitle("Edit mode is not available in this menu");
	}
}
