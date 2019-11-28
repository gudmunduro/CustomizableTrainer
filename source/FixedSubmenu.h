#pragma once
#include "pch.h"
#include "Submenu.h"

class FixedSubmenu :
	public Submenu
{
public:
	FixedSubmenu(Vector2 menuPos, std::function<void(std::string key)> setSubmenu, std::function<void(string messageKey, std::any messageValue)> goToLastSub);

	void Draw() override;

	void DrawSub(string text, string subKey);
	void DrawAction(string text, int index);
	void DrawToggle(string text, int index);

	virtual void OnDraw() override;
	virtual void OnSelectionChange(int to, int from) override;
	virtual void OnOptionPress(int index);

	virtual void RespondToControls() override;

	virtual bool IsBackspaceAllowed() override;

	int GetOptionCount() override;
	virtual bool GetToggleValueAtIndex(int index);
protected:
	string title;
	std::vector<FixedMenuOption> options;
};

