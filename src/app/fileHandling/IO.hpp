#ifndef IO_HPP // it compile once however you can use it multiple time
#define IO_HPP

#include <fstream>
#include <string>
#include <iostream>
using namespace std;

class IO
{
public:
    IO(const string &file_path);
    ~IO();
    fstream getFileStream();

private:
    fstream file_stream;
};

#endif