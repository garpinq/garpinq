#pragma once

#include "TaskId.h"

class Task
{
    public:
        Task(const TaskId taskId);

        TaskId getId() const;

        unsigned int getNumShots() const;
        void setNumShots(unsigned int taskShots);

    private:
        TaskId id;
        unsigned int numShots;
};