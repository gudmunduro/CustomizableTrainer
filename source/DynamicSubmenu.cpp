#include "pch.h"
#include "DynamicSubmenu.h"
#include "AddOptionSub.h"
#include "Routine.h"
#include "Controls.h"
#include "ActionController.h"
#include "ToggleController.h"
#include "NumberController.h"

DynamicSubmenu::DynamicSubmenu(SubmenuData submenuData, MenuController* menuController)
	: Submenu(menuController)
{
	this->title = submenuData.title;
	this->key = submenuData.key;
	this->options = submenuData.options;
	isEditModeActive = false;
	isMoveOptionActive = false;
}

// MARK: Draw

void DynamicSubmenu::Draw()
{
	Submenu::Draw();
	DrawTitle(title);

	optionAddIndex = scrollPosition - 1;
	for (int i = scrollPosition; i < ((OptionCount() > 8) ? (scrollPosition + 8) : OptionCount()); i++) {
		auto option = options[i];
		switch (option.type) {
		case MenuOptionType::Sub:
			DrawSub(option.text, option.key);
			break;
		case MenuOptionType::Action:
			DrawAction(option.text, option.key, option.params);
			break;
		case MenuOptionType::Toggle:
			DrawToggle(option.text, option.key);
			break;
		case MenuOptionType::Number:
			DrawNumber(option.text, option.key);
			break;
		}
	}
}

// MARK: Draw option

void DynamicSubmenu::DrawSub(string text, string subKey)
{
	Submenu::DrawSub(text, subKey, !isEditModeActive);
}

void DynamicSubmenu::DrawAction(string text, string actionKey, json actionParams)
{
	Submenu::DrawAction(text, [this, actionKey, actionParams] () {
		if (!isEditModeActive) {
			ActionController::RunActionForKey(actionKey, actionParams);
		}
	});
}

void DynamicSubmenu::DrawToggle(string text, string toggleKey)
{
	if (!ToggleController::DoesToggleExistForKey(toggleKey)) return;
	bool isToggled = *ToggleController::GetToggleForKey(toggleKey);

	Submenu::DrawToggle(text, isToggled, [this, toggleKey] {
		if (!isEditModeActive) {
			ToggleController::Toggle(toggleKey);
		}
	});
}

void DynamicSubmenu::DrawNumber(string text, string numberKey)
{
	if (!NumberController::DoesNumberExistForKey(numberKey)) return;
	string numberStrValue = NumberController::GetNumberStringValueForKey(numberKey);

	Submenu::DrawNumber(text, numberStrValue, [this, numberKey] {
		// Currently does nothing on press
		}, [this, numberKey](bool direction) {
			if (isEditModeActive) return;
			NumberController::Adjust(numberKey, direction);
	});
}

// MARK: Events

void DynamicSubmenu::SubWillDraw()
{
	Submenu::SubWillDraw();
}

void DynamicSubmenu::SelectionDidChange(int to, int from)
{
	Submenu::SelectionDidChange(to, from);

	if (isEditModeActive && isMoveOptionActive) {
		if (to == 0 && from == OptionCount() - 1) { // From bottom to top
			options.insert(options.begin(), options[from]);
			options.erase(options.begin() + from + 1);
		}
		else if (to == OptionCount() - 1 && from == 0) { // From top to bottom
			options.push_back(options[from]);
			options.erase(options.begin());
		}
		else {
			std::swap(options[from], options[to]);
		}
	}
}

// MARK: Controls

void DynamicSubmenu::RespondToControls()
{
	Submenu::RespondToControls();

	// Edit mode
	if (!isEditModeActive && Controls::IsMenuControlPressed(MenuControl::MenuEditModeEnter)) {
		isEditModeActive = true;
		Controls::CanceMenuControlslForThisFrame();
	}
	if (isEditModeActive) {
		if (Controls::IsMenuControlPressed(MenuControl::MenuEditModeMoveOptionn)) {
			isMoveOptionActive = !isMoveOptionActive;
		}
		if (Controls::IsMenuControlPressed(MenuControl::MenuEditModeExitAndSave)) {
			isMoveOptionActive = false;
			isEditModeActive = false;
			SubmenuData updatedSubmenuData = { title, key, options };
			menuController->UpdateSubmenuData(key, updatedSubmenuData);
			Game::PrintSubtitle("Saved");
		}
		if (Controls::IsMenuControlPressed(MenuControl::MenuEditModeExit)) {
			isMoveOptionActive = false;
			isEditModeActive = false;
		}
		if (Controls::IsMenuControlPressed(MenuControl::MenuEditModeAddOption)) {
			auto addOptionSub = new EditAddOptionSub(nullptr, menuController);
			addOptionSub->onAddOption = [this](MenuOption optionToAdd) {
				options.push_back(optionToAdd);
			};
			menuController->AddSubmenuToStack(addOptionSub);
			Controls::CanceMenuControlslForThisFrame();
		}
		if (Controls::IsMenuControlPressed(MenuControl::MenuEditModeEditOption)) {
			auto addOptionSub = new EditAddOptionSub(&options[selection], menuController);
			addOptionSub->onAddOption = [this](MenuOption optionToEdit) {
				options[selection] = optionToEdit;
			};
			menuController->AddSubmenuToStack(addOptionSub);
			Controls::CanceMenuControlslForThisFrame();
		}
		if (Controls::IsMenuControlPressed(MenuControl::MenuEditModeDeleteOption)) {
			options.erase(options.begin() + selection);
			if (selection > OptionCount() - 1) {
				if (scrollPosition != 0) scrollPosition--;
				selection--;
			}
		}
	}
}

// MARK: Getters

int DynamicSubmenu::OptionCount()
{
	return options.size();
}
