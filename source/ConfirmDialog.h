#pragma once
#include "Submenu.h"

class ConfirmDialog :
	public Submenu
{
public:
	ConfirmDialog(MenuController *menuController, string title, string label, string confirmText, string cancelText, std::function<void(bool confirmation)> onConfirm);

	void Draw() override;

	int OptionCount() override;

	std::function<void(bool confirmation)> onConfirm;
private:
	string title;
	string text;
	string confirmText;
	string cancelText;
};

