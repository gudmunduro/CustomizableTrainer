#include "pch.h"
#include "AddOptionSetTypeSub.h"

AddOptionSetTypeSub::AddOptionSetTypeSub(MenuController* menuController)
	: FixedSubmenu(menuController)
{
	title = "Option type";
	options = {
		{
			MenuOptionType::Action,
			"Submenu"
		},
		{
			MenuOptionType::Action,
			"Action"
		},
		{
			MenuOptionType::Action,
			"Toggle"
		},
		{
			MenuOptionType::Action,
			"Number"
		}
	};
}

void AddOptionSetTypeSub::OnOptionPress(int index)
{
	if (onTypeSet) {
		switch (index) {
		case 0: onTypeSet(MenuOptionType::Sub); break;
		case 1: onTypeSet(MenuOptionType::Action); break;
		case 2: onTypeSet(MenuOptionType::Toggle); break;
		case 3: onTypeSet(MenuOptionType::Number); break;
		}
	}
	menuController->GoToLastSub();
}