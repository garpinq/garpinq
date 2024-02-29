#include "InMemoryTaskPersistenceManager.h"

#include "Task.h"

void InMemoryTaskPersistenceManager::saveTask(const Task& task)
{
    Task* taskToSerialize = new Task(task);

    deleteTask(task.getId().toString());

    allTasks[task.getId().toString()] = taskToSerialize;
}

Task* InMemoryTaskPersistenceManager::fetchTask(const TaskId& taskId)
{
    if (allTasks.count(taskId.toString()) == 0) {
        return 0;
    }

    return allTasks[taskId.toString()];
}

void InMemoryTaskPersistenceManager::deleteTask(const TaskId& taskId)
{
    if (allTasks.count(taskId.toString()) == 0) {
        return;
    }

    Task* taskToDelete = allTasks[taskId.toString()];

    allTasks.erase(taskId.toString());

    delete taskToDelete;
}
