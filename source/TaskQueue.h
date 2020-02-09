/*
* Customizable Trainer
* Copyright (C) 2020  Guðmundur Óli
*
* This program is free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation, either version 3 of the License, or
* (at your option) any later version.
*/

#pragma once
#include "pch.h"

struct TaskQueueTask {
	string name;
	int id;
	std::function<void()> function;
};

class TaskQueue
{
public:

	static int AddTask(string name, std::function<void()> functionToExecute);
	static void RemoveTask(string name);
	static void RemoveTask(int id);

	static void Wait(DWORD time);

	static void Run();

private:
	static void RunTask(TaskQueueTask& task);

	static inline std::vector<TaskQueueTask> tasks;
};

