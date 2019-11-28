#include "pch.h"
#include "FixedSubmenu.h"

FixedSubmenu::FixedSubmenu(Vector2 menuPos, std::function<void(std::string key)> setSubmenu, std::function<void(string messageKey, std::any messageValue)> goToLastSub)
	: Submenu(menuPos, setSubmenu, goToLastSub)
{
	title = "";
	options = {};
}

// MARK: Draw
void FixedSubmenu::Draw()
{
	Submenu::Draw();
	DrawTitle(title);
	for (int i = scrollPosition; i < ((GetOptionCount() > 8) ? (scrollPosition + 8) : GetOptionCount()); i++) {
		auto option = options[i];
		switch (option.type) {
		case MenuOptionType::Sub:
			DrawSub(option.text, option.key);
			break;
		case MenuOptionType::Action:
			DrawAction(option.text, i);
			break;
		case MenuOptionType::Toggle:
			DrawToggle(option.text, i);
			break;
		}
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
	Submenu::DrawToggle(text, GetToggleValueAtIndex(index), [this, index] {
		OnOptionPress(index);
	});
}

// MARK: Events
void FixedSubmenu::OnDraw()
{
	Submenu::OnDraw();
}

void FixedSubmenu::OnSelectionChange(int to, int from)
{
	
}

void FixedSubmenu::OnOptionPress(int index)
{

}

// MARK: Controls
void FixedSubmenu::RespondToControls()
{
	Submenu::RespondToControls();
}

// MARK: Booleans
bool FixedSubmenu::IsBackspaceAllowed()
{
	return true;
}

// MARK: Getters
int FixedSubmenu::GetOptionCount()
{
	return options.size();
}

bool FixedSubmenu::GetToggleValueAtIndex(int index)
{
	return false;
}
