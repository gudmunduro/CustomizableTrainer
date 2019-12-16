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
	DrawTitle(title);
	DrawLabel(text);
	DrawAction(confirmText, [this] {
		if (onConfirm)
			onConfirm(true);
	});
	DrawAction(cancelText, [this] {
		if (onConfirm)
			onConfirm(false);
	});
}
