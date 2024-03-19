#pragma once

#include "Task.h"

class TaskPersistenceManager
{
    public:
        virtual void saveTask(const Task& task) = 0;

        virtual Task* fetchTask(const TaskId& taskId) = 0;

        virtual void deleteTask(const TaskId& taskId) = 0;
};