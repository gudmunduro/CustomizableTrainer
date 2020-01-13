#pragma once
#include "pch.h"

struct TaskQueueTask {
	string name;
	std::function<void()> function;
	bool repeat;
};

class TaskQueue
{
public:

	static void AddTask(string name, std::function<void()> functionToExecute, bool repeat = true);
	static void RemoveTask(string name);

	static void Wait(DWORD time);

	static void Run();

private:
	static void RunTask(TaskQueueTask& task);

	static inline std::vector<TaskQueueTask> tasks;
};

