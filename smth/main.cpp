#include <iostream>
#include "smth.h"

using namespace std;

int main()
{
    cout << "Hello World!" << endl;
    logger::printIt("print\n");
    smth::printIt("smth_print");
    return 0;
}
