#include "ShotController.h"

#include <assert.h>
#include "Task.h"
#include "TaskId.h"

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
    // This is where the policy logic really comes into play
    static TaskId taskId("placeholder-task");
    static Task placeholderTask(taskId);

    return &placeholderTask;
}

Shot* ShotController::generateShotFromTask(const Task* parentTask)
{
    assert(parentTask != 0);

    // For now, just return a generic task
    return new Shot();
}
