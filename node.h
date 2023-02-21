#pragma once

template <typename T>
struct node
{
    node(T initValue = T(), node* initNext = nullptr, node* initPrev = nullptr)
        : value(initValue), next(initNext), prev(initPrev) {}

    T value;
    node* next;
    node* prev;
};