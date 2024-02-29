#include "TaskController.h"

#include "Task.h"
#include "TaskPersistenceManager.h"
#include "TaskPersistenceManagerFactory.h"

TaskController& TaskController::getInstance()
{
    static TaskController instance;

    return instance;
}

void TaskController::acceptTask(Task &t)
{
    validateTask(t);

    saveTask(t);
}

void TaskController::validateTask(const Task &t) const
{
}

void TaskController::saveTask(const Task &t) const
{
    TaskPersistenceManager *persistenceMgr = TaskPersistenceManagerFactory::getTaskPersistenceManager();

    persistenceMgr->saveTask(t);
}