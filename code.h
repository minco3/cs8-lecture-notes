#pragma once

void bar(int &i);
void foo(int &i);
bool fizz(int &i);
void buzz(int &i);

void infiniteLoop()
{
    infiniteLoop();
}

void foo(int &i)
{
    bar(i);

    if (i % 6)
        if (fizz(i))
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

    return i > 10;
}

void buzz(int &i)
{
    i += 5;
}