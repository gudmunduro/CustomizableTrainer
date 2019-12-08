/*
	THIS FILE IS A PART OF RDR 2 SCRIPT HOOK SDK
				http://dev-c.com
			(C) Alexander Blade 2019
*/

#include "pch.h"
#include "Script.h"
#include "MenuController.h"
#include "ControlManager.h"
#include "Routine.h"
#include "ActionManager.h"
#include "ToggleManager.h"
#include "NumberController.h"

void setup()
{
	ActionManager::RegisterActions();
	ToggleManager::RegisterToggles();
	NumberController::RegisterNumbers();
	Game::RequestTextureDict("menu_textures");
	Game::RequestTextureDict("boot_flow");
}

void main()
{
	setup();
	MenuController* menu = new MenuController();
	while (true) {
		Routine::RunAll();
		ControlManager::Tick();
		menu->Tick();
		WAIT(0);
	}
}

void ScriptMain()
{
	srand(GetTickCount());
	main();
}