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
#include "ConfirmDialog.h"

ConfirmDialog::ConfirmDialog(MenuController* menuController, string title, string text, string confirmText, string cancelText, std::function<void(bool confirmation)> onConfirm)
	: FixedSubmenu(menuController)
{
	this->title = title;
	this->text = text;
	this->confirmText = confirmText;
	this->cancelText = cancelText;
	this->onConfirm = onConfirm;
}

void ConfirmDialog::Draw()
{
	FixedSubmenu::Draw();

	DrawTitle(title);
	if (text != "")
		DrawLabel(text);
	DrawAction(confirmText, [this] {
		if (onConfirm)
			onConfirm(true);
		menuController->GoToLastSub();
	});
	DrawAction(cancelText, [this] {
		if (onConfirm)
			onConfirm(false);
		menuController->GoToLastSub();
	});
}

int ConfirmDialog::OptionCount()
{
	return 2 + ((text != "") ? 1 : 0);
}