#include "pch.h"
#include "TaskQueue.h"

// MARK: Manange task

void TaskQueue::AddTask(string name, std::function<void()> functionToExecute, bool repeat)
{
	tasks.push_back({
		name,
		functionToExecute,
		repeat
	});
}

void TaskQueue::RemoveTask(string name)
{
	for (int i = 0; i < tasks.size(); i++)
		if (tasks[i].name == name) {
			tasks.erase(tasks.begin() + i);
			break;
		}
}

// MARK: 

// Waits without stopping task execution
void TaskQueue::Wait(DWORD time)
{
	DWORD waitTimeEnd = GetTickCount() + time;
	
	while (GetTickCount() < waitTimeEnd) {
		Run();
		WAIT(0);
	}
}

// MARK: Run task

void TaskQueue::RunTask(int taskIndex)
{
	tasks[taskIndex].function();
	if (!tasks[taskIndex].repeat)
		tasks.erase(tasks.begin() + taskIndex);
}

void TaskQueue::Run()
{
	for (int i = 0; i < tasks.size(); i++)
		RunTask(i);
}
