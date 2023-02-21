#include <iostream>

#include "code.h"
#include "class.h"

int main()
{
    infiniteLoop();

    std::cout << "hello world!" << std::endl;

    node<int>* head = new node<int>(5);

    head->next = new node<int>(6, nullptr, head);

    for (int i=0; i<10; i++)
    {
        std::cout << i << std::endl;
    }

    int a = 0;

    while (a < 100)
    {
        std::cout << "a = " << a << std::endl;
        foo(a);
    }

    std::cout << "completed!" << std::endl;

    return 0;
}
