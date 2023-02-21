#include <iostream>

#include "code.h"
#include "class.h"

int main()
{
    int a = 0;

    for (int i=0; i<10; i++)
    {
        std::cout << i << std::endl;
    }
    
    infiniteLoop();

    while (a < 100)
    {
        foo(a);
    }

    std::cout << "completed!" << std::endl;

    return 0;
}
