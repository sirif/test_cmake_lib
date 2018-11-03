#include <iostream>
#include "logger/logger.h"

using namespace std;

int main()
{
    cout << "Hello World!" << endl;
    logger::printIt("print\n");
    return 0;
}
