#ifndef TASK_HPP
#define TASK_HPP

#include <string>
#include <iostream>
#include "../fileHandling/IO.hpp"
#include <sstream>

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

    Task(fstream &&stream, Action act, string filePath)
    {
        this->filePath = filePath;
        this->action = act;
        f_stream = move(stream);
    }

    // serialization
    string toString()
    {
        ostringstream oss;
        oss << filePath << "," << (action == Action::ENCRYPT ? "ENCRYPT" : "DECRYPT");
    }

    // deserialization
    static Task fromString(const string &taskData){
        istringstream iss(taskData);
        string filePath;
        string actionStr;

        if(getline(iss, filePath, ',') && getline(iss, actionStr)){
            Action action = (actionStr == "ENCRYPT" ? Action::ENCRYPT : Action::DECRYPT);
            IO io(filePath);
            fstream f_stream = move(io.getFileStream());
            if(f_stream.is_open()){
                return Task(move(f_stream), action, filePath);
            } else {
                throw runtime_error("Failed to open file: "+ filePath);
            }
        } else {
            throw runtime_error("Invalid task data format");
        }
    }
    


};

#endif