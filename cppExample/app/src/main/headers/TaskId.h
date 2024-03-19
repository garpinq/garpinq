#pragma once

#include <string>

class TaskId
{
    public:
        TaskId(std::string idString): id(idString) {};
        TaskId(const TaskId &otherTask): id(otherTask.id) {}

        std::string toString() const { return id; }

    private:
        std::string id;
};