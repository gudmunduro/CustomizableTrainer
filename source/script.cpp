/*
	THIS FILE IS A PART OF RDR 2 SCRIPT HOOK SDK
				http://dev-c.com
			(C) Alexander Blade 2019
*/

#include "pch.h"
#include "Script.h"
#include "Menu.h"
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

bool isFirstTime = true;
Menu* menu;

void main()
{
	if (isFirstTime) {
		srand(GetTickCount());
		setup();
		menu = new Menu();
		isFirstTime = false;
	}

	Routine::RunAll();
	ControlManager::Tick();
	menu->Tick();
}

void ScriptMain()
{
	main();
}