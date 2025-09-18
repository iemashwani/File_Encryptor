#ifndef PROCESS_MANAGEMENT_HPP
#define PROCESS_MANAGEMENT_HPP

#include "Task.hpp"
#include <queue>
#include <memory>

using namespace std;

class ProcessManagement {
    public:
        ProcessManagement();
        bool submitToQueue(unique_ptr<Task> task);  // unique_ptr is from memory package 
        void executeTasks();
    
    private:
        queue<unique_ptr<Task>> taskQueue;

};

#endif