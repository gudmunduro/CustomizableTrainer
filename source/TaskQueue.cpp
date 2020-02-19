/*
* Customizable Trainer
* Copyright (C) 2020  Guðmundur Óli
*
* This program is free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation, either version 3 of the License, or
* (at your option) any later version.
*/

#include "pch.h"
#include "TaskQueue.h"

#pragma region Manage task

int TaskQueue::AddTask(std::string name, std::function<void()> functionToExecute)
{
	int taskId = 0;
	if (tasks.size() > 0)
		taskId = tasks.back().id + 1;

	tasks.push_back({
		name,
		taskId,
		functionToExecute,
	});

	return taskId;
}

void TaskQueue::RemoveTask(std::string name)
{
	for (int i = 0; i < tasks.size(); i++)
		if (tasks[i].name == name) {
			tasks.erase(tasks.begin() + i);
			break;
		}
}

void TaskQueue::RemoveTask(int id)
{
	for (int i = 0; i < tasks.size(); i++)
		if (tasks[i].id == id) {
			tasks.erase(tasks.begin() + i);
			break;
		}
}

#pragma endregion

#pragma region Other

// Waits without stopping task execution
void TaskQueue::Wait(DWORD time)
{
	WAIT(time);
	/*DWORD waitTimeEnd = GetTickCount() + time;
	
	while (GetTickCount() < waitTimeEnd) {
		Run();
		WAIT(0);
	}*/
}

#pragma endregion

#pragma region Run tasks

void TaskQueue::RunTask(TaskQueueTask& task)
{
	try {
		task.function();
	}
	catch (std::exception & e) {
		std::string exceptionText = e.what();
		Game::PrintSubtitle("[Error] Task \"" + task.name + "\" failed with \"" + exceptionText + "\"");
	}
}

void TaskQueue::Run()
{
	for (int i = 0; i < tasks.size(); i++) {
		if (i > tasks.size() - 1)
			break;
		RunTask(tasks[i]);
	}
}

#pragma endregion