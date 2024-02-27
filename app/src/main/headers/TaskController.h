#pragma once

#include <Task.h>

class TaskController
{
    public:
        static TaskController& getInstance();

        void acceptTask(Task& t);

    private:
        // Private constructor for singleton pattern. Use getInstance() function.
        TaskController() {}

        void validateTask(const Task &t) const;
        void saveTask(const Task &t) const;
};