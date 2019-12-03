#include "pch.h"
#include "AddOptionSetTypeSub.h"

AddOptionSetTypeSub::AddOptionSetTypeSub(Vector2 menuPos, std::function<void(std::string key)> setSubmenu,
									std::function<void(Submenu* submenu)> setFixedSubmenu,
									std::function<void(string messageKey, std::any messageValue)> goToLastSub)
	: FixedSubmenu(menuPos, setSubmenu, setFixedSubmenu, goToLastSub)
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
	switch (index) {
		case 0: goToLastSub("setOptionType", MenuOptionType::Sub); break;
		case 1: goToLastSub("setOptionType", MenuOptionType::Action); break;
		case 2: goToLastSub("setOptionType", MenuOptionType::Toggle); break;
		case 3: goToLastSub("setOptionType", MenuOptionType::Number); break;
	}
}