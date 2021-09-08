#include <iostream>
extern "C" 
{
    #include "hello.h"
}

void HelloCXX(const char* s)
{
    std::cout << s << std::endl;
}