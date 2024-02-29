#pragma once

#include <map>
#include <string>

#include "Task.h"
#include "TaskPersistenceManager.h"

using namespace std;

class InMemoryTaskPersistenceManager: public TaskPersistenceManager
{
    public:
        void saveTask(const Task& task);

        Task* fetchTask(const TaskId& taskId);

        void deleteTask(const TaskId& taskId);

    private:
        map<string, Task*> allTasks;
};