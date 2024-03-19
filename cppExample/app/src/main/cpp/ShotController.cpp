#include "ShotController.h"

#include <assert.h>
#include "Task.h"
#include "TaskId.h"
#include "TaskPersistenceManager.h"
#include "TaskPersistenceManagerFactory.h"

ShotController& ShotController::getInstance()
{
    static ShotController instance;

    return instance;
}

Shot* ShotController::getNextShot()
{
    Task* parentTask = getNextTask();
    assert(parentTask != 0);

    Shot* out = generateShotFromTask(parentTask);

    return out;
}

Task* ShotController::getNextTask()
{
    // This is where the policy logic should come into play
    static TaskId taskId("task-for-demonstration");

    TaskPersistenceManager *persistenceMgr = TaskPersistenceManagerFactory::getTaskPersistenceManager();
    Task *task = persistenceMgr->fetchTask(taskId);

    return task;
}

Shot* ShotController::generateShotFromTask(const Task* parentTask)
{
    assert(parentTask != 0);

    // For now, just return a generic shot
    return new Shot();
}
