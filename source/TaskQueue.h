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
	TaskQueue();

	void AddTask(string name, std::function<void()> functionToExecute, bool repeat = true);
	void RemoveTask(string name);

	void Wait(DWORD time);

	void Run();

private:
	std::vector<TaskQueueTask> tasks;
};

