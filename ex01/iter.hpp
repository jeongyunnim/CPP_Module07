#pragma once
#ifndef _ITER_HPP_
#define _ITER_HPP_
#include <iostream>

template <typename T>
void iter(T arr[], size_t len, void fp(T&))
{
    for (size_t i = 0; i < len; i++)
    {
        fp(arr[i]);
    }
}

#endif
