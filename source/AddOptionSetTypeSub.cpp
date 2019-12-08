#include "pch.h"
#include "AddOptionSetTypeSub.h"

AddOptionSetTypeSub::AddOptionSetTypeSub(MenuController* menuController)
	: FixedSubmenu(menuController)
{

}

// MARK: Draw

void AddOptionSetTypeSub::Draw()
{
	Submenu::Draw();

	DrawTitle("Type");
	DrawAction("Submenu", [this]() {
		onTypeSet(MenuOptionType::Sub); 
		menuController->GoToLastSub();
	});
	DrawAction("Action", [this]() {
		onTypeSet(MenuOptionType::Action);
		menuController->GoToLastSub();
	});
	DrawAction("Toggle", [this]() {
		onTypeSet(MenuOptionType::Toggle);
		menuController->GoToLastSub();
	});
	DrawAction("Number", [this]() {
		onTypeSet(MenuOptionType::Number);
		menuController->GoToLastSub();
	});
}

// MARK: Getters

int AddOptionSetTypeSub::OptionCount()
{
	return 4;
}