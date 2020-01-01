#pragma once
#include "pch.h"
#include "Submenu.h"

class FixedSubmenu :
	public Submenu
{
public:
	FixedSubmenu(MenuController* menuController);

protected:
	void DrawSub(string text, string subKey);
	void DrawTextAction(string text, string value, std::function<void()> onPress);

	virtual void SubWillDraw() override;
	virtual void SelectionDidChange(int to, int from) override;

	virtual void RespondToControls() override;
};
