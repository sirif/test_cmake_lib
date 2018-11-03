#ifndef LOGGER_H
#define LOGGER_H

#include <iostream>
#include <string>

using namespace std;

class logger
{
public:
    logger();

    static void printIt(const std::string& str);
};

#endif // LOGGER_H
