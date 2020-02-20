/*
	THIS FILE IS A PART OF RDR 2 SCRIPT HOOK SDK
				http://dev-c.com
			(C) Alexander Blade 2019
*/
/*
* ALTERED SOURCE
* Customizable Trainer
* Copyright (C) 2020 Guðmundur Óli
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
#include "JsonData.h"
#include "spdlog/spdlog.h"
#include "spdlog/sinks/basic_file_sink.h"

#pragma region Setup

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
	JSONData::UpdateOptionStates();
}

void setupLogging()
{
	auto fileLogger = spdlog::basic_logger_mt("basic_logger", "CustomizableTrainer\\logs.txt");
	spdlog::set_default_logger(fileLogger);
}

void setup()
{
	setupLogging();
	registerOptions();
	loadTextureDicts();
	setupInitialTaskQueue();
	loadInitialOptionStates();
	HotkeyController::Setup();
}

#pragma endregion

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