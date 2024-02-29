#include "TaskPersistenceManagerFactory.h"

#include "TaskPersistenceManager.h"

TaskPersistenceManager* TaskPersistenceManagerFactory::instance = 0;

TaskPersistenceManager* TaskPersistenceManagerFactory::getTaskPersistenceManager()
{
    return instance;
}

void TaskPersistenceManagerFactory::setTaskPersistenceManager(TaskPersistenceManager* newInstance)
{
    instance = newInstance;
}
