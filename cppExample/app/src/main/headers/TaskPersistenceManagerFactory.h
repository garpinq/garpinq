#pragma once

#include "TaskPersistenceManager.h"

class TaskPersistenceManagerFactory
{
    public:
        static TaskPersistenceManager* getTaskPersistenceManager();

        static void setTaskPersistenceManager(TaskPersistenceManager* instance);

    private:
        static TaskPersistenceManager* instance;
};