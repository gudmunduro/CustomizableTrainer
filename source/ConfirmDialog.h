#pragma once
#include "Submenu.h"

class ConfirmDialog :
	public Submenu
{
public:
	ConfirmDialog(MenuController *menuController, std::string title, std::string label, std::string confirmText, std::string cancelText, std::function<void(bool confirmation)> onConfirm);

	void Draw() override;

	int OptionCount() override;

	std::function<void(bool confirmation)> onConfirm;
private:
	std::string title;
	std::string text;
	std::string confirmText;
	std::string cancelText;
};

