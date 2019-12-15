#include "pch.h"
#include "SettingsEditAddHotkeySub.h"
#include "Routine.h"
#include "HotkeyController.h"

// MARK: Setup

// Set hotkeyToEdit to nullptr to add a new hotkey
SettingsEditAddHotkeySub::SettingsEditAddHotkeySub(string title, Hotkey *hotkeyToEdit, MenuController *menuController) : FixedSubmenu(menuController)
{
	this->title = title;

	if (hotkeyToEdit != nullptr) {
		this->hotkeyToEdit = hotkeyToEdit;
	}
	else {
		*this->hotkeyToEdit = {};
	}
}

// MARK: Draw

void SettingsEditAddHotkeySub::Draw()
{
	FixedSubmenu::Draw();

	DrawTitle(title);
	DrawText("Name", hotkeyToEdit->name, [this] {
		auto newName = Game::GetInputWithKeyboard(hotkeyToEdit->name);
		if (newName == "") {
			Routine::StartDrawBottomMessage("Name cannot be empty");
		}
		hotkeyToEdit->name = newName;
	});
}

// MARK: Getters

int SettingsEditAddHotkeySub::OptionCount()
{
	return 1;
}
