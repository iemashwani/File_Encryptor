#ifndef TASK_HPP
#define TASK_HPP

#include <string>
#include <iostream>
#include "../fileHandling/IO.hpp"

using namespace std;

enum class Action
{
    ENCRYPT,
    DECRYPT
};

struct Task
{
    string filePath;
    fstream f_stream;
    Action action;

    Task(fstream &&stream, Action act, string filePath){
        this->filePath = filePath;
        this->action = act;
        f_stream = move(stream);
    }
};

#endif