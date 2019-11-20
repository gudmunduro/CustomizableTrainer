/*
	THIS FILE IS A PART OF RDR 2 SCRIPT HOOK SDK
				http://dev-c.com
			(C) Alexander Blade 2019
*/

#pragma once

enum class MenuOptionType {
	Action,
	Toggle,
	Sub
};

struct MenuOption
{
	MenuOptionType type;
	string text;
	string key;
};

struct SubmenuData
{
	string title;
	std::vector<MenuOption> options;
};