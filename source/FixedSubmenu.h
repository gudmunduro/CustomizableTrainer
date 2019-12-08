#pragma once
#include "pch.h"
#include "Submenu.h"

class FixedSubmenu :
	public Submenu
{
public:
	FixedSubmenu(MenuController* menuController);

	virtual void Draw() override;

	void DrawSub(string text, string subKey);
	void DrawAction(string text, int index);
	void DrawToggle(string text, int index);
	void DrawText(string text, string value, int index);

	virtual void SubWillDraw() override;
	virtual void SelectionDidChange(int to, int from) override;
	virtual void OnOptionPress(int index);

	virtual void RespondToControls() override;

	virtual int OptionCount() override;
	virtual bool ToggleValueAtIndex(int index);
protected:
	string title;
	std::vector<FixedMenuOption> options;
};

