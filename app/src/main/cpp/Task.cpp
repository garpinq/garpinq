#include "Task.h"

Task::Task(const TaskId taskId): id(taskId), numShots(0)
{
}

Task::Task(const Task& otherTask): id(otherTask.id), numShots(otherTask.numShots)
{
}

TaskId Task::getId() const
{
    return id;
}

unsigned int Task::getNumShots() const
{
    return numShots;
}

void Task::setNumShots(unsigned int taskShots)
{
    numShots = taskShots;
}
