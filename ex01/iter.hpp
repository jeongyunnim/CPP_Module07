#pragma once
#ifndef _ITER_HPP_
#define _ITER_HPP_
#include <iostream>
#include "../Colors.hpp"

template <typename T1, typename T2>
void iter(T1 arr[], size_t len, T2 *fp)
{
	for (size_t i = 0; i < len; i++)
	{
		fp(arr[i]);
	}
}

#endif
