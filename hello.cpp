#include <iostream>
extern "C" 
{
    #include "hello.h"
}

void HelloCPP(const char* s)
{
    std::cout << s << std::endl;
}