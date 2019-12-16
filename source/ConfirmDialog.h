#pragma once
#include "FixedSubmenu.h"
class ConfirmDialog :
	public FixedSubmenu
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

