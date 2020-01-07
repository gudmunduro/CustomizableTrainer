/*
	THIS FILE IS A PART OF RDR 2 SCRIPT HOOK SDK
				http://dev-c.com
			(C) Alexander Blade 2019
*/

#include "pch.h"
#include "Script.h"
#include "MenuController.h"
#include "Controls.h"
#include "Routine.h"
#include "ActionController.h"
#include "ToggleController.h"
#include "NumberController.h"
#include "HotkeyController.h"
#include "TextController.h"
#include "JsonDataManager.h"

// MARK: Variables

// MARK: Setup

void registerOptions()
{
	ActionController::RegisterActions();
	ToggleController::RegisterToggles();
	NumberController::RegisterNumbers();
	TextController::RegisterTexts();
}

void loadTextureDicts()
{
	Game::RequestTextureDict("menu_textures");
	Game::RequestTextureDict("boot_flow");
	Game::RequestTextureDict("generic_textures");
	Game::RequestTextureDict("menu_textures");
}

void setupInitialTaskQueue()
{
	MenuController* menu = new MenuController();

	TaskQueue::AddTask("controlDataUpdate", Controls::Tick);
	TaskQueue::AddTask("gameDataUpdate", Game::UpdateData);
	TaskQueue::AddTask("menu", [menu] { menu->Tick(); });
	TaskQueue::AddTask("hotkeys", HotkeyController::Tick);
	TaskQueue::AddTask("routine", Routine::RunAll);
}

void loadInitialOptionStates()
{
	JSONDataManager manager;
	manager.UpdateOptionStates();
}

void setup()
{
	registerOptions();
	loadTextureDicts();
	setupInitialTaskQueue();
	loadInitialOptionStates();
	HotkeyController::Setup();
}

void main()
{
	setup();
	while (true) {
		TaskQueue::Run();
		WAIT(0);
	}
}

void ScriptMain()
{
	srand(GetTickCount());
	main();
}