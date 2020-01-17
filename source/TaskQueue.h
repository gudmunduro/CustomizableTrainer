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

