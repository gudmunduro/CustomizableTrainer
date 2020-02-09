/*
* Customizable Trainer
* Copyright (C) 2020  Guðmundur Óli
*
* This program is free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation, either version 3 of the License, or
* (at your option) any later version.
*/

#include "pch.h"
#include "AddOptionSetTypeSub.h"

AddOptionSetTypeSub::AddOptionSetTypeSub(MenuController* menuController, bool hideSubmenu, bool hideAction)
	: Submenu(menuController)
{
	this->hideSubmenu = hideSubmenu;
	this->hideAction = hideAction;
}

void AddOptionSetTypeSub::Draw()
{
	Submenu::Draw();

	DrawTitle("Type");
	if (!hideSubmenu)
		DrawAction("Submenu", [this]() {
			onTypeSet(MenuOptionType::Sub); 
			menuController->GoToLastSub();
		});

	if (!hideAction)
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

	DrawAction("Text", [this]() {
		onTypeSet(MenuOptionType::Text);
		menuController->GoToLastSub();
	});
}
