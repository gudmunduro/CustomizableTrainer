#include "pch.h"
#include "TaskQueue.h"

// MARK: Manange task

int TaskQueue::AddTask(string name, std::function<void()> functionToExecute)
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

void TaskQueue::RemoveTask(string name)
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

// MARK: 

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

// MARK: Run task

void TaskQueue::RunTask(TaskQueueTask& task)
{
	task.function();
}

void TaskQueue::Run()
{
	for (int i = 0; i < tasks.size(); i++) {
		if (i > tasks.size() - 1)
			break;
		RunTask(tasks[i]);
	}
}
