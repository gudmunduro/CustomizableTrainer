#include "pch.h"
#include "FixedSubmenu.h"

FixedSubmenu::FixedSubmenu(MenuController* menuController)
	: Submenu(menuController)
{
	title = "";
	options = {};
}

// MARK: Draw

void FixedSubmenu::Draw()
{
	int counter = 0;
	Submenu::Draw();
	DrawTitle(title);
	for each (auto option in options) {
		switch (option.type) {
		case MenuOptionType::Sub:
			DrawSub(option.text, option.key);
			break;
		case MenuOptionType::Action:
			DrawAction(option.text, counter);
			break;
		case MenuOptionType::Toggle:
			DrawToggle(option.text, counter);
			break;
		case MenuOptionType::Text:
			DrawText(option.text, option.key, counter);
			break;
		}
		counter++;
	}
}

// MARK: Draw option

void FixedSubmenu::DrawSub(string text, string subKey)
{
	Submenu::DrawSub(text, subKey);
}

void FixedSubmenu::DrawAction(string text, int index)
{
	Submenu::DrawAction(text, [this, index] () {
		OnOptionPress(index);
	});
}

void FixedSubmenu::DrawToggle(string text, int index)
{
	Submenu::DrawToggle(text, ToggleValueAtIndex(index), [this, index] {
		OnOptionPress(index);
	});
}

void FixedSubmenu::DrawText(string text, string value, int index)
{
	auto menuPos = menuController->position;

	Submenu::DrawAction(text, [this, index]() {
		OnOptionPress(index);
	});
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

void FixedSubmenu::OnOptionPress(int index)
{

}

// MARK: Controls

void FixedSubmenu::RespondToControls()
{
	Submenu::RespondToControls();
}

// MARK: Getters

int FixedSubmenu::OptionCount()
{
	return options.size();
}

bool FixedSubmenu::ToggleValueAtIndex(int index)
{
	return false;
}
