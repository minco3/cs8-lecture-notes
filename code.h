#pragma once

void infiniteLoop()
{
    infiniteLoop();
}

void foo(int &i)
{
    bar(i);

    if (i % 5)
        buzz(i);
}

void bar(int &i)
{
    buzz(i);
}

bool fizz(int &i)
{
    i += 3;
    if (i % 2)
        buzz(i);
}

void buzz(int &i)
{
    i += 5;
}