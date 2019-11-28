#include "pch.h"
#include "AddOptionSetTypeSub.h"

AddOptionSetTypeSub::AddOptionSetTypeSub(Vector2 menuPos, std::function<void(std::string key)> setSubmenu, std::function<void(string messageKey, std::any messageValue)> goToLastSub)
	: FixedSubmenu(menuPos, setSubmenu, goToLastSub)
{
	title = "Option type";
	options = {
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
			"Submenu"
		},
	};
}

void AddOptionSetTypeSub::OnOptionPress(int index)
{
	switch (index) {
		case 0: goToLastSub("setOptionType", MenuOptionType::Action); break;
		case 1: goToLastSub("setOptionType", MenuOptionType::Toggle); break;
		case 2: goToLastSub("setOptionType", MenuOptionType::Sub); break;
	}
}