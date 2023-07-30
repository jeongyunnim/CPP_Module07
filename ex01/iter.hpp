#pragma once
#ifndef _ITER_HPP_
#define _ITER_HPP_
#include <iostream>
#include "../Colors.hpp"

template <typename T>
void iter(T arr[], size_t len, void fp(const T&))
{
    for (size_t i = 0; i < len; i++)
    {
        fp(arr[i]);
    }
}

#endif
