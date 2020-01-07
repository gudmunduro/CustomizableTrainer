#include "pch.h"
#include "TaskQueue.h"

TaskQueue::TaskQueue()
{
}

// MARK: Manange task

void TaskQueue::AddTask(string name, std::function<void()> functionToExecute, bool repeat)
{
}

void TaskQueue::RemoveTask(string name)
{
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

void TaskQueue::Run()
{
}
