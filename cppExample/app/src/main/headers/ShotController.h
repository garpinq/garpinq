#pragma once

#include "Shot.h"
#include "Task.h"

class ShotController
{
    public:
        static ShotController& getInstance();

        Shot* getNextShot();

    private:
        // Private constructor for singleton pattern. Use getInstance() function.
        ShotController() {}

        Task* getNextTask();

        Shot* generateShotFromTask(const Task* parentTask);
};